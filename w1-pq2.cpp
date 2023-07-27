//Euclidean distance between two points

#include <iostream>
#include <cmath> //LINE-1

using namespace std;

struct point
{
    int x, y;
};

double get_len(point p1, point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // LINE-2
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    point p1, p2;
    p1.x = x1;
    p1.y = y1;
    p2.x = x2;
    p2.y = y2;
    cout << round(get_len(p1, p2));
    return 0;
}
