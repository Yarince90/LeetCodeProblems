#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include "Easy.h"

using namespace std;

namespace leetCode {
	//Problem 1
	int sum(int num1, int num2) {
		int res = num1 + num2;
		return res;
	}

	//Problem 2
	vector<int> twoSum(vector<int>& nums, int target) {

		vector<int> res;

		if (nums.size() > 2) {
			for (vector<int>::iterator it1 = nums.begin(); it1 != nums.end(); it1++) {
				for (vector<int>::iterator it2 = nums.begin(); it2 != nums.end(); it2++) {

					cout << "Comparing nums: " << *it1 << " To reverse nums: " << *it2 << endl;

					if (*it1 + *it2 == target) {
						int el1, el2;
						int key1 = *it1;
						int key2 = *it2;

						//Find Element based on it1/it2 values
						it1 = find(nums.begin(), nums.end(), key1);
						it2 = find(nums.begin(), nums.end(), key2);

						el1 = distance(nums.begin(), it1);
						el2 = distance(nums.begin(), it2);

						//Check to see if the element is the same
						if (el1 == el2) {

						}

						cout << el1 << " " << el2 << endl;

						res = { el1,el2 };

						return res;

					}
				}
			}
		}
		else {
			if (nums[0] + nums[1] == target) {
				cout << 0 << " " << 1 << endl;
				res = { 0,1 };
				return res;
			}
		}
		return res;
	}
}