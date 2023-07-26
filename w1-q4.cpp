#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> data = {50, 30, 40, 10, 20};

    sort(&data[2], &data[5]); // takes args of begin and end, begin is inclusive while end is exclusive
    // i.e data[2] => will point to 3rd element
    // and data[5] => will point to 6th element
    // sort takes the address of element 1past of the last index
    // index starts from 0 to n-1...

    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";

    return 0;
}
