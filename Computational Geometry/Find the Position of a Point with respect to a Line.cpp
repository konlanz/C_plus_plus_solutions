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
    int x1, x2, y1, y2;
    x1 = rand() % (HIGH - LOW + 1) + LOW;
    x2 = rand() % (HIGH - LOW + 1) + LOW;
    y1 = rand() % (HIGH - LOW + 1) + LOW;
    y2 = rand() % (HIGH - LOW + 1) + LOW;
    cout << "The Equation of the 1st line is : (" << (y2 - y1) << ")x+(" << (x1
            - x2) << ")y+(" << (x2 * y1 - x1 * y2) << ") = 0\n";
    int x, y;
    cout << "\nEnter the point:";
    cin >> x;
    cin >> y;
    int s = (y2 - y1) * x + (x1 - x2) * y + (x2 * y1 - x1 * y2);
    if (s < 0)
        cout << "The point lies below the line or left side of the line";
    else if (s > 0)
        cout << "The point lies above the line or right side of the line";
    else
        cout << "The point lies on the line";
    return 0;
}

