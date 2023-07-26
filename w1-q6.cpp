#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    char s[10] = "COMPUTER";

    stack<char> s1, s2;

    s1.push(s[0]);
    s1.push(s[1]);
    s1.push(s[2]);

    cout << s1.top() << endl;

    s1.pop();

    cout << s1.top() << endl;

cout << 8/3 << endl;
    cout << strlen(s) << endl;
    return 0;
}
