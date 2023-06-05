#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	int gap = ceil((m + n) / 2);
    for (int i = m; i < m + n; i++) {
      nums1[i] = nums2[i - m];
    }
    while (gap >= 1) {
      int i = 0, j = gap;
      while (j < n + m) {
        if (nums1[i] > nums1[j]) {
          swap(nums1[i], nums1[j]);
        }
        i++, j++;
      }
      if (gap == 1)
        break;
      gap = gap % 2 ? gap / 2 + 1 : gap / 2;
    }
	return nums1;
}