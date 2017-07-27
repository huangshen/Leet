/*
 * Median_test.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: shenh
 */

#include "gtest/gtest.h"
#include "Median.h"
#include <iostream>

using namespace std;

TEST(Median, 1) {
	int i;
	class Median solution;
	vector<int> vec1;
	vector<int> vec2;

	cout << "Testing Median" << endl;

	vec1.push_back(1);
	vec1.push_back(2);

	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);

	cout << solution.findMedianSortedArrays(vec1, vec2) << endl;

}


