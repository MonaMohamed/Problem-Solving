#include<string>
using namespace std;

/// <summary>
/// This Method is to check if 2 strings have permutation 
/// Max length for inputStr is 128
/// Strings are not case sensitive
/// </summary>

#define NO_OF_CHARS 128

bool checkPermutation(string str1, string str2) {
    int str1_len = str1.length();
    int str2_len = str2.length();

    int letters[NO_OF_CHARS];

    for (int i = 0; i < NO_OF_CHARS; i++) {
        letters[i] = 0;
    }

    if (str1_len != str2_len) return false;

    for (int i = 0; i < str1_len; i++) {
        char character = tolower(str1[i]);
        letters[character]++;
    }

    for (int i = 0; i < str2_len; i++) {
        char character = tolower(str2[i]);
        letters[character]--;
        if (letters[character] < 0)
            return false;
    }

    return true;
}