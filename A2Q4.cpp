/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
void print (int x,char s) // to print the stars and spaces 
{
	if (x>=1) // base condiditon --> print the stars or spaces till the base condition reaches less than one
	{
		print (x-1,s); // recursive call
		cout<<s; // print the character which is sent from the function PrintPattern
	}
}
void PrintPatternQ5(int x, int y,int z)
{
	//upper part of the pattern
	if (x>1)  // base condition to print the things untill x is greater than 1
	{
		print (x,' '); // calling print function to print spaces
		print ((2*y)-1,'*'); // calling print function to print stars. As stars are increasing with the increament +2, so (2*y)-1 is used. for example 2(1)-1=1 and it will print one star on first line
		cout<<"\n"; 
		PrintPatternQ5(x-1,y+1,z);// recursive call
	}
	//lower part of the pattern
    print (x+1,' '); // as x is now 1, so print spaces accoring to it as now spaces are starting from one
	print (((2*z)-2)-((2*x)-1),'*'); // calling print function to print stars. z=5,x=1....  ((2*5)-2)-((2*1)-1)=8-1=7 stars and so on
	cout<<"\n";
	
	
}
int main()
{
	PrintPatternQ5(5,1,5);
}

