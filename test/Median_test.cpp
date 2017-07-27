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

	cout << "Testing Median Case1" << endl;

	vec1.push_back(1);
	vec1.push_back(2);

	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);

	//cout << solution.findMedianSortedArrays(vec1, vec2) << endl;
	EXPECT_EQ(3.5, solution.findMedianSortedArrays(vec1, vec2));

}

TEST(Median, 2) {
	int i;
	class Median solution;
	vector<int> vec1;
	vector<int> vec2;

	cout << "Testing Median Case2" << endl;

	vec1.push_back(1);
	vec1.push_back(2);

	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);

	EXPECT_EQ(3.5, solution.findMedianSortedArrays(vec2, vec1));

}

TEST(Median, 3) {
	int i;
	class Median solution;
	vector<int> vec1;
	vector<int> vec2;

	cout << "Testing Median Case2" << endl;

	vec1.push_back(7);
	vec1.push_back(8);

	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);

	EXPECT_EQ(5.5, solution.findMedianSortedArrays(vec2, vec1));

}

TEST(Median, 4) {
	int i;
	class Median solution;
	vector<int> vec1;
	vector<int> vec2;

	cout << "Testing Median Case2" << endl;

	vec1.push_back(1);

	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);

	EXPECT_EQ(4.0, solution.findMedianSortedArrays(vec1, vec2));

}
