#pragma once
#include<string>
using namespace std;


bool oneEditReplace(string s1, string s2) {
	int size = s1.length();
	bool foundDifference = false;
	
	for (int i = 0; i < size; i++) {
		if (s1[i] != s2[i]) {
			if (foundDifference) {
				return false;
			}
			foundDifference = true;
		}
	}
	return true;
}

bool oneEditInsertOrRemove(string s1, string s2) {
	int size1 = s1.length();
	int size2 = s2.length();
	int index1{ 0 }, index2{ 0 };

	while (index1 < size1 && index2 <size2)
	{
		if (s1[index1] != s2[index2]) {
			if (index1 != index2) {
				return false;
			}
			index1++;
		}
		else {
			index1++;
			index2++;
		}
	}

	return true;
}

bool oneEditAway(string str1, string str2) {
	int size1 = str1.length();
	int size2 = str2.length();

	if (abs(size1 - size2) > 1) {
		return false;
	}
	//Replace char
	else if (size1 == size2) {
		return oneEditReplace(str1, str2);
	}
	//Remove char
	else if (size1 + 1 == size2) {
		return oneEditInsertOrRemove(str1, str2);
	}
	//Insert char
	else if (size1 - 1 == size2) {
		return oneEditInsertOrRemove(str1, str2);
	}
	return false;
}

