#include <iostream>

using namespace std;

int creditTotal = 0;

float GpaCalc(string, string);

int main()
{
    float subTotal = 0, subAverage = 0;
    int credit[20];
    string subject[20];
    string credit_S[20];
    string score_S[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> subject[i] >> credit_S[i] >> score_S[i];

        if (score_S[i] != "P")
            subTotal += GpaCalc(credit_S[i], score_S[i]);
    }

    subAverage = subTotal / (float)creditTotal;
    cout << subAverage;

    return 0;
}

float GpaCalc(string credit_S, string score_S)
{
    float credit = stof(credit_S);
    float score;

    creditTotal += credit;
    
    if (score_S == "A+")
        score = 4.5f;
    else if (score_S == "A0")
        score = 4.0f;
    else if (score_S == "B+")
        score = 3.5f;
    else if (score_S == "B0")
        score = 3.0f;
    else if (score_S == "C+")
        score = 2.5f;
    else if (score_S == "C0")
        score = 2.0f;
    else if (score_S == "D+")
        score = 1.5f;
    else if (score_S == "D0")
        score = 1.0f;
    else if (score_S == "F")
        score = 0.0f;

    float result = credit * score;
    return result;
}