#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main() {
  string S;
  cin >> S;
  set<string> V;
  for (int i = 0; i < S.size(); i++){
    for (int j = 0; j < S.size() - i; j++){
        V.insert(S.substr(j, i + 1));
    }
  }
  cout << V.size() << endl;
  return 0;
}