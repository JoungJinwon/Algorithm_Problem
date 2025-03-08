#include <iostream>
#include <vector>

using namespace std;

bool isGroupWord;

bool IsAlreadyUsed(vector<char>&, char);

int main()
{
    char onGoingChar = ' ';
    int num, groupWordCnt = 0;
    int alphabet[26] = {0};
    string str;
    vector<char> usedVec;

    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        cin >> str;
     
        for (int i = 0; i < str.size(); i++)
        {
            if (onGoingChar != str[i])
            {
                onGoingChar = str[i];

                if (IsAlreadyUsed(usedVec, str[i]))
                    break;
                else
                    usedVec.push_back(str[i]);
            }
        }

        if (isGroupWord)
            groupWordCnt++;

        onGoingChar = ' ';
        usedVec.clear();
    }

    cout << groupWordCnt;

    return 0;
}

bool IsAlreadyUsed(vector<char>& vec, char c)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == c)
        {
            isGroupWord = false;
            return true;
        }
    }

    isGroupWord = true;
    return false;
}