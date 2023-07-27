// Sort words in lexicographical order

#include <iostream>
#include <algorithm>

using namespace std;

bool max_str(string a, string b)
{ // LINE-1

    return lexicographical_compare(b.begin(), b.end(), a.begin(), a.end()); // LINE-2
}

int main()
{
    std::string words[3], word;
    for (int i = 0; i < 3; i++)
    {
        cin >> word;
        words[i] = word;
    }
    sort(words, words + 3, max_str);
    for (int i = 0; i < 3; i++)
        cout << words[i] << " ";
    return 0;
}