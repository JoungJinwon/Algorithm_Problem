#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int largestIndex = 0;
    
    int alphabetVec[26] = {0};
    vector<char> mostFrequentVec;
    
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            alphabetVec[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            alphabetVec[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabetVec[largestIndex] < alphabetVec[i])
            largestIndex = i;

        if (i == 25)
        {
            for (i = 0; i < 26; i++)
            {
                if (alphabetVec[i] == alphabetVec[largestIndex])
                    mostFrequentVec.push_back(i);
            }
        }
    }

    if (mostFrequentVec.size() > 1)
        cout << "?";
    else
        cout << (char)((int)'A' + mostFrequentVec[0]);

    return 0;
}