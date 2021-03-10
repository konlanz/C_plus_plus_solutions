//Pascal Triangle

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing first pattern (Pascals triangle)
    int rows,coef=1,space,i,j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=0; i<rows; i++)
        {
            for(space=1; space<=rows-i; space++)
                cout<<"  ";
            for(j=0; j<=i; j++)
                {
                    if (j==0||i==0)
                        coef=1;
                    else
                        coef=coef*(i-j+1)/j;
                    cout<<"    "<<coef;
                }
            cout<<endl;
        }
    getch();  // wait for input
}
