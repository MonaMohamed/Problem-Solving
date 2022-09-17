#pragma once
#include<string>
#include <vector>
using namespace std;

#define NO_OF_CHARS 128

string ignoreNoneChars(string chars) {
    int size = chars.length();
    string temp;

    for (int i = 0; i < size; i++) {
        //Check Ascii value of each char
        if (!((chars[i] < 65 || chars[i] > 90) && (chars[i] < 97 || chars[i] > 122))) {
            temp = temp + chars[i];
        }
    }
    return temp;
}

vector<int> buildCharFrequencyTable(string str) {
    vector<int> asciiArr(NO_OF_CHARS,0);
    int size = str.length();
  
    //count how many times every char repetead in the string
    for (int i = 0; i < size ; i++) {
        asciiArr[tolower(str[i])] ++;
    }
    
    return asciiArr;
}

bool checkMaxOneOdd(vector<int> table) {
    int oddCount{ 0 };

    //count odd chars
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (table[i] % 2 == 1) {
            oddCount++;
        }
    }
    if (oddCount != 1) {
        return false;
    }
}

bool isPermutationOfPalindrome(string phrase) {

    string str = ignoreNoneChars(phrase);

    vector<int> table = buildCharFrequencyTable(str);

    return checkMaxOneOdd(table);
}