#include <iostream>
using namespace std;
int strlen(char *string)
{
	int length=0;
	for(int i=0;string[i] != 0;i++)
	{
		length++;
	}
	return length;
}
int main()
{
	int testcases;
	cin>>testcases;
	char string[30];
	while(testcases > 0)
	{
		cin>>string;
		for(int i=strlen(string)-1;i>=0;i--)
		{
			cout<<string[i];
		}
		cout<<"\n";
		testcases--;
	}
	return 0;
}
