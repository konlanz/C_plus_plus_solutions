#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int LOW = 1;
const int HIGH = 10;

int main(int argc, char **argv)
{
    int x, y, x1, x2, y1, y2;
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    x = rand() % (HIGH - LOW + 1) + LOW;
    y = rand() % (HIGH - LOW + 1) + LOW;
    x1 = rand() % (HIGH - LOW + 1) + LOW;
    x2 = rand() % (HIGH - LOW + 1) + LOW;
    y1 = rand() % (HIGH - LOW + 1) + LOW;
    y2 = rand() % (HIGH - LOW + 1) + LOW;
    cout << "The points are: (" << x << ", " << y << "), (" << x1 << ", " << y1
         << "), & (" << x2 << ", " << y2 << ")\n";
    cout << "The Equation of the line is : (" << (y2 - y1) << ")x+(" << (x1
            - x2) << ")y+(" << (x2 * y1 - x1 * y2) << ") = 0\n";
    int s = (y2 - y1) * x + (x1 - x2) * y + (x2 * y1 - x1 * y2);
    if (s < 0)
        cout << "The points are NOT colinear";
    else if (s > 0)
        cout << "The points are NOT colinear";
    else
        cout << "The points are colinear";
}


