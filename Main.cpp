#include <iostream>
#include "Easy.h"

using namespace std;

int main() {

	//Leet Code Problem 1:
	cout << "Leet code Problem 1: " << endl;
	int num_01 = 12, num_02 = 5, num_03 = -10, num_04 = 4;
	cout << leetCode::sum(num_01, num_02) << endl;
	cout << leetCode::sum(num_03, num_04) << endl;

	//Leet Code Problem 2:
	cout << "Leet code Problem 2: " << endl;
	vector<int> numsArr{ 5,9,3,5 };
	int target = 8;

	leetCode::twoSum(numsArr, target);

	//Leet Code Problem 3:
	cout << "Leet code Problem 3: " << endl;
	leetCode::isPalindrome(121);

	return 0;
}