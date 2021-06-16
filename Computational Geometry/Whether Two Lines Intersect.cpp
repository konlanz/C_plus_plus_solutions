/*This is a C++ Program to check whether two lines intersect to each other. The above-below primitive can be used to test whether a line intersects a line segment. It does iff one endpoint of the segment is to the left of the line and the other is to the right. Segment intersection is similar but more complicated, and we refer you to implementations described below. The decision whether two segments intersect if they share an endpoint depends upon your application and is representative of the problems of degeneracy.*/

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
    int p1, p2, q1, q2;
    p1 = rand() % (HIGH - LOW + 1) + LOW;
    p2 = rand() % (HIGH - LOW + 1) + LOW;
    q1 = rand() % (HIGH - LOW + 1) + LOW;
    q2 = rand() % (HIGH - LOW + 1) + LOW;
    cout << "The Equation of the 2nd line is : (" << (q2 - q1) << ")x+(" << (p1
            - p2) << ")y+(" << (p2 * q1 - p1 * q2) << ") = 0\n";
    int s1 = (y2 - y1) * p1 + (x1 - x2) * q1 + (x2 * y1 - x1 * y2);
    if (s1 < 0)
        {
            int s2 = (y2 - y1) * p2 + (x1 - x2) * q2 + (x2 * y1 - x1 * y2);
            if (s2 >= 0)
                cout << "The lines intersect";
            else if (s2 < 0)
                cout << "The lines doesn't intersect";
        }
    else if (s1 > 0)
        {
            int s2 = (y2 - y1) * p2 + (x1 - x2) * q2 + (x2 * y1 - x1 * y2);
            if (s2 <= 0)
                cout << "The lines intersect";
            else if (s2 > 0)
                cout << "The lines doesn't intersect";
        }
    else
        cout << "The point lies on the line";
    return 0;
}

/*
The Equation of the 1st line is : (4)x+(1)y+(-6) = 0
The Equation of the 2nd line is : (-1)x+(-9)y+(46) = 0
The lines doesn't intersect

The Equation of the 1st line is : (3)x+(7)y+(-59) = 0
The Equation of the 2nd line is : (-8)x+(1)y+(56) = 0
The lines intersect*/
