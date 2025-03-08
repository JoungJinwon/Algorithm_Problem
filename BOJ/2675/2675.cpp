#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t, r;
    string str, resultStr = "";
    vector<string> strVec;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> r >> str;

        for (int j = 0; j < str.size(); j++)
        {
            for (int k = 0; k < r; k++)
                resultStr.push_back(str[j]);
        }

        strVec.push_back(resultStr);
        resultStr.clear();
    }

    for (int i = 0; i < t; i++)
        cout << strVec[i] << endl;

    return 0;
}