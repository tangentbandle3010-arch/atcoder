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
  for (auto x : S) {
    if (count(S.begin(), S.end(), x) == 1){
      cout << x << "\n";
      return 0;
    }
  }
  cout << -1 << "\n";
  return 0;
}