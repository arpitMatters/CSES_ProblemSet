#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  char ch = 'X';
  int ans = 1, cnt = 0;
  for (auto it : s) {
    if (ch == it) {
      cnt++;
      ans = max(ans, cnt);
    } else {
      cnt = 1;
      ch = it;
    }
  }
  cout << ans;

  return 0;
}
