#include <iostream>
using namespace std;

int main()
{
    int num, binary_val, decimal_val = 0, base = 1, rem;
    cout<<"Enter a binary number(1s and 0s) \n";
    cin>>num;
    binary_val = num;
    while (num > 0)
        {
            rem = num % 10;
            decimal_val = decimal_val + rem * base;
            num = num / 10 ;
            num = num / 10 ;
            base = base * 2;
        }
    cout<<"The Binary number is ="<<binary_val<<" \n";
    cout<<"Its decimal equivalent is ="<<decimal_val<<" \n";
}
