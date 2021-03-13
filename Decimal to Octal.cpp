#include <iostream>
using namespace std;
int main()
{
    long num, decimal_num, remainder, base = 1, octal = 0;
    cout<<"Enter a decimal integer \n";
    cin>>num;
    decimal_num = num;
    while (num > 0)
        {
            remainder = num % 8;
            octal = octal + remainder * base;
            num = num / 8;
            base = base * 10;
        }
    cout<<"Input number is ="<<decimal_num<<"\n";
    cout<<"Its octal equivalent is ="<<octal<<"\n";
}
