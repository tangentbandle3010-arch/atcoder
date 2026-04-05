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
  int N,K;
  cin >> N >> K;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < K; ++j) {
      ans += (i+1)*100 + (j+1);
    }
  }
  cout << ans << "\n";
  return 0;
}