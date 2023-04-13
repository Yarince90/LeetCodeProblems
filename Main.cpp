#include <iostream>
#include "Easy.h"

using namespace std;

int main() {

//Leet code problem 1
	cout << "Leet code Problem 1: " << endl;
	int num_01 = 12, num_02 = 5, num_03 = -10, num_04 = 4;
	cout << leetCode::sum(num_01, num_02) << endl;
	cout << leetCode::sum(num_03, num_04) << endl;

	//Leet code problem 2
	cout << "Leet code Problem 2: " << endl;
	vector<int> numsArr{ 3,2,4 };
	int target = 6;

	leetCode::twoSum(numsArr, target);

	return 0;
}