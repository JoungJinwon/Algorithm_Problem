#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char blank = ' ';
    int wordNum = 0;
    string str;

    getline(cin, str);


    if (str.size() == 1)
    {
        if (str[0] == blank)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        
        return 0;
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == blank)
            {
                if (i == 0 || i == str.size() - 1)
                    continue;
                else
                    wordNum++;
            }
        }
    }
    

    cout << wordNum + 1 << endl;

    return 0;
}