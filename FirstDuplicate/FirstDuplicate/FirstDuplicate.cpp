/*
	Programmer: Christopher Tirnh
	Program:    FirstDuplicate.cpp
	Purpose:    Finds the first duplicate within a vector and returns that value. If not duplicate exist return -1.

*/

#include<iomanip>
#include<iostream>
#include<set>
#include<vector>

using namespace std;

int findFirstDuplicate(vector<int> vector);

int main() {

	//Vector with duplicates
	vector<int> vect = { 2,3,3,1,5,2 };

	//Vector with uniques - Should return -1
	vector<int> vector1 = {1,4,5,6,8,3};

	int answer;
	answer = findFirstDuplicate(vect);
	cout << "The first duplicate is: " << answer << endl;

	answer = findFirstDuplicate(vector1);
	cout << "The first duplicate is " << answer << endl;

	return 0;
}

int findFirstDuplicate(vector<int> vector) {
	//Only one of a kind in a set - Therefore if there is a second instance, that is a duplicate
	set<int> set;

	for (auto it = vector.begin(); it != vector.end(); it++) {
		cout << "The value is " << *it << endl;
		if (set.find(*it) != set.end()) {
			return *it;
		}
		else {
			set.insert(*it);
		}
	}
	return -1;
}
