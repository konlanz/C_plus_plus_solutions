Area of rectangle

#include <iostream> 
using namespace std; 

const double pi = 3.14159; 

int main() 
{ 
float length, width, area; 

cout << "Enter The Length Of The Rectangle: "; 
cin >> length; 
cout << "Enter The Width Of Rectangle: "; 
cin >> width; 
area = length*width; 

cout <<"The area of the rectangle is : "<< area << endl;

return 0; 
}
