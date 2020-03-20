/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
//function to print the characters sent.
void Print(int x,char ch)
{
	if (x>0) //base conition(print till x is greater than 0)
	{
		Print(x-1,ch); // recursive call
		cout<<ch;
	}
}
void PrintPatternQ7(int s, int sp)
{   // for upper part of pattern
    if (sp>0) // base condition
	{
		Print((2*s)-1,' '); // s=1--> 2*1-1=1. print 1 space first and so on with increament of 2 as per formula
		cout<<"*";  // print first star
		Print((2*sp)+1,' ');  // sp=9--> 2*9+1=19. print 19 spaces at middle after print first star
		cout<<"*"; // print second star
		cout<<"\n";
		PrintPatternQ7(s+1,sp-2);  //recursive call with s increamted by 1 and sp decreamented by 2 as per pattern
	}	
	//lower part of the pattern
	if (sp<=0) //condition to print just one star at middle of the pattern
	{
		Print((2*s)-1,' ');
		Print((2*sp)+1,' ');
		cout<<"*";
		cout<<"\n";
	}
		else 
		{
		Print((2*s)-1,' ');
		cout<<"*";
		Print((2*sp)+1,' ');
		cout<<"*";
		cout<<"\n";
		}
	
}
int main()
{
	PrintPatternQ7(1, 9);
}
