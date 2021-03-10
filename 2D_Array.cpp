#include <iostream>
#define size 16
using namespace std;

int main ()
{
    int m,n;
    int a[size][size];
    cout<<"Enter the number of rows"<<endl;
    cin>>m;
    cout<<"Enter the number of columns"<<endl;
    cin>>n;
    cout<<"Enter the Elements in Table"<<endl;
    for ( int i = 0; i < m; i++ )
        {
            for ( int j = 0; j < n; j++ )
                {
                    cin >>a[i][j];
                }
        }
// output each array element"s value
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            {
                cout << "a[" << i << "][" << j << "]: ";
                cout << a[i][j]<< endl;
            }
    return 0;
}

