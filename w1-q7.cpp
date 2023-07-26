#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    char s[10] = "COMPUTER";
    stack<char> s1, s2;

    int i;
    for (i = 0; i < strlen(s) / 3; i++)
    {
        s1.push(s[i]);
    }

    for (; i < strlen(s); i++)
    {
        s2.push(s[i]);
    }

    while (!s1.empty())
    {
        s2.push(s1.top()); s1.pop();
    }

    while (!s2.empty())
    {
        cout << s2.top(); s2.pop();
    }

    return 0;
}
