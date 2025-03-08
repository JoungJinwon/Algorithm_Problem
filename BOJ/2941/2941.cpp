#include <iostream>

using namespace std;

int main()
{
    int charCnt = 0;
    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '=' || str[i + 1] == '-') // c=, c-
                i++;
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == '-') // d-
                i++;
            else if (str[i + 1] == 'z')
            {
                if (str[i + 2] == '=') // dz=
                    i += 2;
            }
        }
        else if (str[i] == 'l' || str[i] == 'n')
        {
            if (str[i + 1] == 'j') // lj, nj
                i++;
        }
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=') // s=, z=
                i++;
        }

        charCnt++;
    }

    cout << charCnt;

    return 0;
}