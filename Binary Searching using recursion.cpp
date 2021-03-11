#include <iostream>
using namespace std;
int main()
{
    int a[10],i,n,m,c,l,u;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the elements of the array: " ;
    for(i=0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the number to be search: ";
    cin>>m;
    l=0,u=n-1;
    c=binary(a,n,m,l,u);
    if(c==0)
        cout<<"Number is not found.";
    else
        cout<<"Number is found.";
    return 0;
}

/*Binary search will search element at middle, if element is not found and if element to be searched is less than middle then it will search only in lower part and if greater then in upper part */

int binary(int a[],int n,int m,int l,int u)
{
    int mid,c=0;
    if(l <= u)
        {
            mid=(l+u)/2;
            if(m==a[mid])
                {
                    c=1;
                }
            else if(m < a[mid])
                {
                    return binary(a,n,m,l,mid-1);
                }
            else
                return binary(a,n,m,mid+1,u);
        }
    else
        return c;
}
