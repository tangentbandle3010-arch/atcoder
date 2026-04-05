toupper
string から int
小文字を大文字にする関数

char C = toupper(c);

intなので単純に代入すると、数字が出ちゃうよ

//

char は数字 cに1を足すと次の文字になる

char c = 'a';       // 'a' の文字コードは 97
    
char next = c + 1;  // 97 + 1 = 98（'b' の文字コードになる）
    
cout << next << endl; // 結果: b

cout << 'a' + 1 << endl; // 結果: 98 （出力で型変換が暗黙のうちに行われている。intになっている。）

cout << (char)'a' + 1 << endl　//　結果: b

//

substr
文字列から場所を指定して抜き出す substr(最初の文字の位置, 文字数)

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

cout << s.substr(1,3) << endl; //"BCD"が出力される
cout << s.substr(3) << endl; //"CDEFGHIJKLMNOPQRSTUVWXYZ"が出力される。

1文字をstringとして切り出したい時にも使える

s.at(i)はchar, s.substr(i, 1)はstring

//

stringでも範囲for文ができる。
  string S;
  cin >> S;
  int C = 0;
  for (char c: S){
    if (c == 'v'){
        C++;
    }
    else{
        C += 2;
    }
  }

//

ビット演算子
2進数表記で左にずらす時に使う

cout << (1 << 29) << endl; //　1を29回右にずらした数、つまり2^29が出力される。

右にもずらせる。

cout << (13 >> 1) << endl; // 13は1101だが右に1ずらすと110となって6となる。

//

swap(文字1,文字2)で文字1と文字2をいれかえられる。


    int a = 10;
    int b = 20;

    cout << "交換前: a=" << a << ", b=" << b << endl;

    swap(a, b); // ここで中身を入れ替え！

    cout << "交換後: a=" << a << ", b=" << b << endl;
    
    return 0;

//

min(a,b)でaとbの小さい方を出力する
min({2,5,3})で2を出力する

//

remove_if(開始のイテレータ,終わりの次のイテレータ,条件)は条件に合う要素を後ろに追いやって、有効な要素だけを前の方に詰め合わせたのち有効な要素の最後の次のイテレータを返す。

A = {1,2,3,4,5}
vector<int> B{begin(A), remove_if(begin(A), end(A), [](auto i){return i % 2 != 0;})}; //return以降を編集する

//

auto &&a : xの後にconst auto &a : xとすれば値を変えないようにできる。

//

isupper('A')大文字かどうか判定できる。
islower('a')小文字かどうか判定できる。
isdigit('1')数字かどうか判定できる。

//

A = {1,2,3,4,5}
accumulate(begin(A),end(A),0,計算方法(+の場合はなにもかかなくてよい))
Aの全体の和を出力する。

初期値がstringであれば連結になる。
vector<string> words = {"Hello", " ", "World"};
// 空文字 "" から始めて、順番に繋げていく
string s = std::accumulate(begin(words), end(words), string(""));
// 結果: "Hello World"

掛け算の場合は次のとおり
// 1 * 2 * 3 * 4 * 5 を計算する
int product = std::accumulate(begin(A), end(A), 1, std::multiplies<int>());

//

string S;
S.pop_back(); // Sの最後の文字を消す
S.push_back('a'); // Sの最後にaを足す

//

double a;
ceil(a);//天井関数

round(a);//四捨五入

floor(a);//床関数

//

string S = "AAAB";
count(S.begin(),S.end(),'A') // 3を出力する

//

chrono::yearとis_leap()を用いると閏年かどうか判定できる。

chrono::year year(1290);
year.is_leap() // falseを返す。

//

cout << setw(4) << setfill('0') << M << '\n';
4桁に満たない場合は先頭に0を並べる

//

string S;
S = "ABCDE";
S.erase(2,1);//"ABDE"が出力される
S.erase(2);// "AB"が出力される
S.erase(S.begin() + 2);// "ABDE"が出力される

vectorやset(値指定)にも使える

vector<int> S(3);
S = {10, 20, 30};
S.erase(s.begin() + 1);//{10,30}になる

set S;
S={1,2,3};
S.erace(2);//{1,3}になる

//

string s = "orenomono";
s.ends_with("mono") // trueを返す
s.ends_with("mama") // falseを返す
s.ends_with('o')//trueを返す

//

S = "ABC";
remove(S.begin(),S.end(),'B');//2を返す。
S.erase(remove(S.begin(),S.end(),'B'),S.end())//"AC"を返す。

erase(S, 'B');//SからBを全部消す(c++20以降)
//