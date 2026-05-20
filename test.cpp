#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <bitset>
#include <cctype>
#include <chrono>
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int a = S.size();
  if(a < 3){
    cout << 0 << "\n";
    return 0;
  }
  double sum = 0;
  double min = 0;
  bool hantei = false;
  double lef = 0;
  double rig = 1;
  double mid = (lef+rig)/2;
  while(rig-lef>1e-12){
    for (int i = 0; i < a; ++i) {
      if(S[i] == 't'){
        sum += 1-mid;
      }
      else{
        sum += -mid;
      }
      if(sum-min >= 2-2*mid){
        hantei = true;
        break;
      }
      if(min > sum){
        min = sum;
      }
    }
    if(hantei){
      lef = mid;
    }
    else{
      rig = mid;
    }
    sum = 0;
    min = 0;
    hantei = false;
    mid = (lef+rig)/2;
  }
  cout << fixed << setprecision(12) << mid << "\n";
  return 0;
}