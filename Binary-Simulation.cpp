#include<iostream>
#include <vector>
#include<string>
using namespace std;

//Swap bits from 0 to 1 and vice versa
void invertBits(string& strBits, int start, int end)
{
    for (int i = start-1; i < end; i++)
    {
        if (strBits[i] == '0')
        {
            strBits[i] = '1';
        }
        else
        {
            strBits[i] = '0';
        }
    }
}

//get bit value at certain positin
char getBitValue(string strBits,int bitPositon)
{
    return strBits[bitPositon];
}

//print result
void printResult(vector<char> result)
{
    int count = 1;
    for (const char res : result)
    {
        //used 'N' just to split every test case
        if (res =='N')
        {
            cout << "Case " << count << ":";
            count++;
        }
        else {
            cout << res;
        }
        cout << endl;
    }
}

int main()
{
    string strBits;
    int casesNum, operationsNum, start, end, pos,count=1;
    char operation;
    vector<char> result;

    cin >> casesNum;
    while (casesNum > 0) {
        cin >> strBits;
        cin >> operationsNum;
        //used 'N' to refer to new testcase
        result.push_back('N');
        for (int i = 0; i < operationsNum; i++)
        {
            cin >> operation;
           //Query input is I
            if (operation == 'I') {
                cin >> start >> end;
                invertBits(strBits,start, end);
            }
            //Query input is Q
            else {
                cin >> pos;
                result.push_back(getBitValue(strBits,pos-1));
            }
        }
        casesNum--;
    }
    
    //print results
    printResult(result);

    return 0;
}
