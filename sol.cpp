#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  string s;
  cin >> s;
  int mx = INT_MIN;
  for (int i = 0; i < (int) s.size(); i++) {
  	// find the largest character (its decimal representation in ASCII)
  	mx = max(mx, (int) s[i]);
  }
  for (int i = 0; i < (int) s.size(); i++) {
  	// iterate through every letter in the string print if it's equal to the maximum decimal representation
  	if ((int) s[i] == mx) {
  		cout << s[i];
  	}
  }
  cout << '\n';
  return 0;
}      
