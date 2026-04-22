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
  int A, B;
  cin >> A >> B;
  if(B % A == 0){
    cout << A + B << "\n";
  }
  else{
    cout << B - A << "\n";
  }
  return 0;
}