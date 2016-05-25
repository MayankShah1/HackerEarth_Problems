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
	char string[30];
	char solution_string[30];
	cin>>testcases;
	while(testcases>0)
	{
		cin>>string;
		int j=0;
		for(int i = 0;i<strlen(string);i++)
		{
			if(string[i] != string[i+1])
			{
				solution_string[j] = string[i];
				j++;
			}
		}
		solution_string[j]='\0';
		cout<<solution_string<<"\n";
		testcases--;
	}
	return 0;
}
