#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {
  int xor1 = 0;
  for (int i = 0; i < n; i++) {
    xor1 ^= arr[i];
  }
  for (int i = 1; i <= n; i++) {
    xor1 ^= i;
  }
  int setbits = xor1 & ~(xor1 - 1);
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (setbits & arr[i]) {
      x ^= arr[i];
    } else {
      y ^= arr[i];
    }
  }
  for (int i = 1; i <= n; i++) {
    if (setbits & i) {
      x ^= i;
    } else {
      y ^= i;
    }
  }
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      flag = 1;
      break;
    }
  }
  if (flag) {
    return {y, x};
  }
  return {x, y};
}