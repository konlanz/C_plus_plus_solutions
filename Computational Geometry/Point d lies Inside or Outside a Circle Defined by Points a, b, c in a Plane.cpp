#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;
const int LOW = 0;
const int HIGH = 10;
int main(int argc, char **argv)
{
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    double x1, x2, y1, y2, x3, y3;
    double m1, m2, c1, c2, r;
    x1 = rand() % (HIGH - LOW + 1) + LOW;
    x2 = rand() % (HIGH - LOW + 1) + LOW;
    x3 = rand() % (HIGH - LOW + 1) + LOW;
    y1 = rand() % (HIGH - LOW + 1) + LOW;
    y2 = rand() % (HIGH - LOW + 1) + LOW;
    y3 = rand() % (HIGH - LOW + 1) + LOW;
    m1 = (y1 - y2) / (x1 - x2);
    m2 = (y3 - y2) / (x3 - x2);
    c1 = ((m1 * m2 * (y3 - y1)) + (m1 * (x2 + x3)) - (m2 * (x1 + x2))) / (2
            * (m1 - m2));
    c2 = ((((x1 + x2) / 2) - c1) / (-1 * m1)) + ((y1 + y2) / 2);
    r = sqrt(((x3 - c1) * (x3 - c1)) + ((y3 - c2) * (y3 - c2)));
    cout << "The points on the circle are: (" << x1 << ", " << y1 << "), ("
         << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ")";
    cout << "\nThe center of the circle is (" << c1 << ", " << c2
         << ") and radius is " << r;
    cout << "\nEnter the point : <x>,<y>";
    int x, y;
    cin >> x;
    cin >> y;
    double s = ((x - c1) * (x - c1)) + ((y - c2) * (y - c1)) - (r * r);
    if (s < 0)
        cout << "\nThe point lies inside the circle";
    else if (s > 0)
        cout << "\nThe point lies outside the circle";
    else
        cout << "\nThe point lies on the circle";
    return 0;
}


