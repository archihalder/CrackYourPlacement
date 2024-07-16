#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int minDiff(int arr[], int n, int m) {
  sort(arr, arr+n);
  int diff = INT_MAX;
  for(int i = 0; i+m-1 < n; i++) {
    diff = min(diff, arr[i+m-1] - arr[i]);
  }
  return diff;
}

int main() {
  int arr[] = {7,3,2,4,9,12,56};
  int m = 3;
  int n = sizeof(arr) / sizeof(int);

  int res = minDiff(arr, n, m);
  cout << res << '\n';

  return 0;
}