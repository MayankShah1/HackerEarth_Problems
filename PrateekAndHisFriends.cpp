#include <iostream>
using namespace std;
int main()
{
	int testcases;
	cin>>testcases;
	while(testcases > 0)
	{
		int size = 0;
		int sum = 0;
		cin>>size>>sum;
		int cost[size];
		int flag = 0;
		for(int i=0;i<size;i++)
		{
			cin>>cost[i];
		}
		for(int i=0;i<size;i++)
		{
			if(cost[i] < sum)
			{
				int temp = 0;
				for(int j=i;j<size;j++)
				{
					temp = temp + cost[j];
					if(temp==sum)
					{
						flag = 1;
						break;
					}
					else if(temp > sum)
					{
						break;
					}
				}
			}
			if(flag == 1){break;}
		}
		if(flag==1)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		testcases--;
	}
	return 0;
}
