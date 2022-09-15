#include<string>
using namespace std;

/// <summary>
/// This Method is to check characters set is ASCII
/// if this assumption not valid we need to increase storage size
/// Max length for inputStr is 128
/// </summary>

bool isUnique(string inputStr) {
    int size = inputStr.length();

    if (size > 128) {
        return false;
    }

    bool char_set[128];

    for (int i = 0; i < 128; i++)
    {
        char_set[i] = false;
    }

    for (int i = 0; i < size; i++) {
        int val = inputStr[i];
        if (char_set[val]) {
            return false;
        }
        char_set[val] = true;
    }
    return true;
}