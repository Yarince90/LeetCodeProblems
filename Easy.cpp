#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <unordered_map>
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

        unordered_map<int, int> mapList;
        
        for (int i = 0; i < nums.size(); i++) {
            
            int n = nums[i];            
            int equalsTo = target - n;
           
            if (mapList.count(equalsTo)) {

                cout << mapList[equalsTo] << " " << i << endl;

                return { mapList[equalsTo], i };
            }
            
            
            mapList[n] = i;  // assume that each input would have exactly one solution
        }
        return {};
	}
}