/*
 * Median.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: shenh
 */

#include "Median.h"
#include <iostream>

double Median::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	int n, m, i, j, nTmp;
	int a, b;
	double ret = -1.0;

	n = nums1.size();
	m = nums2.size();

	/* making sure that nums1 is always smaller than nums2 */
	if(n > m) {
		nTmp = n;
		n = m;
		m = nTmp;

		nums1.swap(nums2);
	}

	cout << n << ", " << m << endl;

	if((n+m)%2 != 0) {

		if(nums1[n-1] <= nums2[0]) {
			j = (n+m)/2-n;
			ret = (double)nums2[j];
			return ret;
		}

		if(nums1[0] > nums2[m-1]) {
			j = (n+m)/2;
			ret = (double)nums2[j];
			return ret;
		}

		for(i = 0; i < n; i++) {
			j = (n+m)/2 - i - 2;
			if(nums1[i] <= nums2[j+1] && nums2[j] <= nums1[i+1]) {
				b = nums1[i+1] < nums2[j+1] ? nums1[i+1] : nums2[j+1];
				ret = (double)b;
				return ret;
			}
		}

	} else {

		if (nums1[n - 1] <= nums2[0]) {
			j = (n + m) / 2 - n;
			ret = (nums2[j - 1] + nums2[j]) / 2.0;
			return ret;
		}

		if (nums1[0] > nums2[m - 1]) {
			j = (n + m) / 2;
			ret = (nums2[j - 1] + nums2[j]) / 2.0;
			return ret;
		}

		for (i = 0; i < n; i++) {
			j = (n + m) / 2 -i - 2;
			if (nums1[i] <= nums2[j + 1] && nums2[j] <= nums1[i + 1]) {
				a = nums1[i] > nums2[j] ? nums1[i] : nums2[j];
				b = nums1[i + 1] < nums2[j + 1] ? nums1[i + 1] : nums2[j + 1];
				ret = (a + b) / 2.0;
				return ret;
			}
		}
	}

	return ret;
}


