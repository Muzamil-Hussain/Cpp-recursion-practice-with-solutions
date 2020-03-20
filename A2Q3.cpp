/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
void PrintSpace(int start, int end) //function to print spaces
{
	if (start>=1) //base condition to print the spaces till the start becomes 1.
	{
			PrintSpace(start-1,end); //recursive call
	        cout<<"  ";
	}

}
void PrintPatternQ3(int start, int end) // given function
{
	if (start<(end/2)+1) //base condition to print the pattern till half
	{
	PrintSpace(start,end);
	cout<<"*";
	cout<<"\n";
	PrintPatternQ3(start+1,end);
    }
    // print the other half of pattern 
    PrintSpace(start,end);
	cout<<"*";
	cout<<"\n";
	
	
}
int main()
{
	PrintPatternQ3(1,9);
}
