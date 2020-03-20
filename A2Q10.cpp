/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
int product(int x, int y) 
{
	if (x==1) //base condition
	return y;
	
	return y+product(x-1,y); //recursive call + returning the value after adding step by step
}
int main()
{
	cout<<product(7,4);
}
