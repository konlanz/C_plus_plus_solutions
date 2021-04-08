#include <iostream>

using namespace std;

class Operations
{
    long c;

public:
    void inputNumber()
    {
        cout << "Input a number\n";
        cin >> c;
    }

    long reverseNumber()
    {
        long invert = 0;
        while (c != 0)
            {
                invert = invert * 10;
                invert = invert + c%10;
                c = c/10;
            }
        return invert;
    }

};

int main()
{
    long result;
    Operations t;
    t.inputNumber();
    result = t.reverseNumber();
    cout << "Number obtained on reversal = " << result;
    return 0;
}
