#include <iostream>
using namespace std;
int main()
{
	int queries;
	int top = -1;
	cin>>queries;
	int stack[queries];
	while(queries > 0)
	{
		int query;
		cin>>query;
		if(query == 1)
		{
			if(top == -1)
			{
				cout<<"No Food\n";
			}
			else
			{
				cout<<stack[top]<<"\n";
				top--;
			}
		}
		else
		{
			int cost;
			cin>>cost;
			top++;
			stack[top] = cost;
		}
		queries--;
	}
	return 0;
}
