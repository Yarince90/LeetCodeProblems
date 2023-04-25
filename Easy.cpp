#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
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
            int res = target - n;           

            if (mapList.count(res)) {

                cout << mapList[res] << " " << i << endl;

                return { mapList[res], i };
            }
                        
            mapList[n] = i;

        }
        return {};
	}

    //Problem 3
    bool isPalindrome(int x) {

        string temp = to_string(x);
        string rev = temp;

        reverse(rev.begin(), rev.end());

        if (temp == rev) {
            cout << "True!" << endl;
            return true;
        }               
        cout << "False!" << endl;
        return false;
    }
}