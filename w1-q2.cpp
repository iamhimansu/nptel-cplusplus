#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr;
    // Array initial size can be set as arr(3)
    // If array is unitialized, the array is initialized with default value by the compiler

    arr.resize(10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    cout << "value at 0 index " << arr[0];

    return 0;
}
