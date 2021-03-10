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

Output
Enter the number of rows
2
Enter the number of columns
3
Enter the Elements in Table
1 2 3 4 5 6
a[0][0]: 1
a[0][1]: 2
a[0][2]: 3
a[1][0]: 4
a[1][1]: 5
a[1][2]: 6
