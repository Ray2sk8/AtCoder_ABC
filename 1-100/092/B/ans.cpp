#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, x;
  cin >> n >> d >> x;

  vector<int> a(n);
  for ( int i=0; i<n; i++ ) {
    cin >> a.at(i);
  }

  int eaten = 0;
  for ( int i=0; i<n; i++ ) {
    eaten += ceil((float)d/a.at(i));
  }

  cout << x+eaten << endl;
}