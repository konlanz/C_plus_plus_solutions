#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void performLineTransformation(double a, double b)
{
    cout << "X: " << (b / a) << ", Y: " << (b * -1);
}

void performPointTransformation(double x, double y)
{
    cout << "y=" << (-1 * y / x) << "x +" << (-1 * y);
}

int main(int argc, char **argv)
{
    cout
            << "Perform what transformation.\n1. Line Transformation\n2. Point Transformation";
    int option;
    cin >> option;
    switch (option)
        {
        case 1:
            cout << "Enter the coefficients of line <y=ax-b>";
            double a, b;
            cin >> a >> b;
            performLineTransformation(a, b);
            break;
        case 2:
            cout << "Enter the coordinate of point <x, y>";
            double x, y;
            cin >> x >> y;
            performPointTransformation(x, y);
            break;
        default:
            break;
        }
}

/*

Perform what transformation.
1. Line Transformation
2. Point Transformation
1
Enter the coefficients of line <y=ax-b>
1 2
X: 2.0, Y: -2.0

Perform what transformation.
1. Line Transformation
2. Point Transformation
2
Enter the coordinate of point <x, y>
2 -2
y=1.0x +2.0*/
