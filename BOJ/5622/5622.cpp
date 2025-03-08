#include <iostream>

using namespace std;

void alphabetToNumber(string str, string& dialNum);
int CalculateTimeToCall(string dialNum);

int main()
{
    string str, dialNum = "";
    int timeToCall;

    cin >> str;
    alphabetToNumber(str, dialNum);
    timeToCall = CalculateTimeToCall(dialNum);

    cout << timeToCall;

    return 0;
}

void alphabetToNumber(string str, string& dialNum)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'C')
            dialNum += '2';
        else if (str[i] >= 'D' && str[i] <= 'F')
            dialNum += '3';
        else if (str[i] >= 'G' && str[i] <= 'I')
            dialNum += '4';
        else if (str[i] >= 'J' && str[i] <= 'L')
            dialNum += '5';
        else if (str[i] >= 'M' && str[i] <= 'O')
            dialNum += '6';
        else if (str[i] >= 'P' && str[i] <= 'S')
            dialNum += '7';
        else if (str[i] >= 'T' && str[i] <= 'V')
            dialNum += '8';
        else if (str[i] >= 'W' && str[i] <= 'Z')
            dialNum += '9';
    }
}

int CalculateTimeToCall(string dialNum)
{
    int result = 0;

    for (int i = 0; i < dialNum.size(); i++)
        result += (dialNum[i] - '0') + 1;

    return result;
}