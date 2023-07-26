#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{

    string s = "programming in modern c++";
    cout << s.size() << endl;
    // cout << strlen(s); //eror
    cout << s.length() << endl;
    cout << strlen(s.c_str()) << endl;
    cout << s.c_str(); // returns the address of the c type string
    return 0;
}
