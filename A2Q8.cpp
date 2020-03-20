/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
//function to print the characters as sent via argument where it is called
void print (int x, char ch)
{
	if (x>=1) //base condition.
	{
		print(x-1,ch);  // recursive call
		cout<<ch;
	}
}
//function responsible to print the pattern
void PrintPatternQ8(int s, int e)
{
	// for first half of the pattern
	if (e>1) //base condition
	{
		print ((2*e)-1,' '); // for e=5--> 2*5-1=9. print 9 spaces first and so on
		cout<<"*";  //print first star
		print ((2*s)-1,' ');  // for s=1 --> 2*1-1=1. print 1 space now. this space is for first vertical half of pattern
		print ((2*s)-2,' '); //for second vertical half
		cout<<  "*"; //print another star
		cout<<"\n";
		PrintPatternQ8(s+1,e-1); // recursive call
	}
	// for another half of the pattern 
		print ((2*e)-1,' ');
		cout<<"*";
		print ((2*s)-1,' ');
		print ((2*s)-2,' ');
		cout<<  "*";
		cout<<"\n";
}
int main()
{
	PrintPatternQ8(1,5);
}
