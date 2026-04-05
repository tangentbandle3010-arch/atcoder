#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main() {
  int N;
  cin >> N;  
  priority_queue<int> P;
  int A;
  for (int i = 0; i < N; i++){
    cin >> A;
    P.push(A);
  }
  int C = 0;
  int D = 0;
  int B = 0;
  int E = 0;
  for (int i = 0; i < N; i++){
    if (P.top() != C){
        if (D > B){
            B = D;
            E = C;
        }
        C = P.top();
        D = 0;
    }
    D++;
    P.pop();
  }
  if (P.top() != C){
    B = D;
    E = C;
  }
  cout << E << B << endl;
  return 0;
}
