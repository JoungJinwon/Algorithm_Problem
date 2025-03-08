#include <iostream>
#include <cmath>

using namespace std;

int GetNum(char);

int main()
{
    int notation, digits, result = 0;
    string charNum;

    cin >> charNum >> notation;

    digits = charNum.size() - 1;
    for(int i = digits; i >= 0; i--)
        result += GetNum(charNum[i]) * (int)ceil(pow(notation, digits - i));

    cout << result;

	return 0;
}

int GetNum(char c)
{
    int num;

    if (c >= '0' && c <= '9')
        num = (int)(c - '0');
    else if (c >= 'A' && c <= 'Z')
        num = (int)(c - 'A') + 10;
    
    return num;
}