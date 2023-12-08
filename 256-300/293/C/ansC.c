#include <stdio.h>

int h = 0;
int w = 0;
int a[10][10] = {};
int acc[20] = {};

int func (int x, int y) {
  int ans = 0;
  
  if (x >= h || y >= w) {
    return 0;
  }
  
  acc[x+y] = a[x][y];
  
  if (x+1 == h && y+1 == w) {
    int is_ok = 1;
    for (int i = 1; i < h+w-1; i++) {
      for (int j = 0; j < i; j++) {
        if (acc[i] == acc[j]) {
          is_ok = 0;
        }
      }
    }
    return is_ok;
  }
  
  ans += func(x+1, y);
  ans += func(x, y+1);
  
  return ans;
}

int main () { 
  int res = 0;
  
  res = scanf("%d", &h);
  res = scanf("%d", &w);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      res = scanf("%d", a[i]+j);
    }
  }
  
  printf("%d\n", func(0, 0));
  
  return 0;
}