#include <iostream>
using namespace std;


template <class X> void bubble(X *data, int size)
{
  register int a, b;
  X t;

  for(a=1; a < size; a++)
    for(b=size-1; b >= a; b--)
      if(data[b-1] > data[b]) {
        t = data[b-1];
        data[b-1] = data[b];
        data[b] = t;
      }
}

int main()
{
  int i[] = {3, 2, 5, 6, 1, 8, 9, 3, 6, 9};
  double d[] = {1.2, 5.5, 2.2, 3.3};
  int j;

  bubble(i, 10); // sort ints
  bubble(d, 4);  // sort doubles

  for(j=0; j<10; j++) 
     cout << i[j] << ' ';
  cout << endl;

  for(j=0; j<4; j++) 
     cout << d[j] << ' ';
  cout << endl;

  return 0;
}
