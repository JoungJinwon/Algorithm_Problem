#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<string> word;

bool compare(string a, string b)
{
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main()
{
    word.clear();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        word.emplace_back(s);
    }

    sort(word.begin(), word.end(), compare);

    for (int j = 0; j < word.size(); j++)
    {
        if (word[j] == word[j + 1])
            continue;
        
        cout << word[j] << "\n";
    }

    return 0;
}