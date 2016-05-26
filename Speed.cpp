#include <iostream>
using namespace std;
int main()
{
	int testcases;
	cin>>testcases;
	while(testcases > 0)
	{
		int number_of_cars;
		cin>>number_of_cars;
		long speed[number_of_cars];
		for(int i=0;i<number_of_cars;i++)
		{
			cin>>speed[i];
		}
		int count = 1;
		for(int i=1;i<number_of_cars;i++)
		{
			if(speed[i] <= speed[i-1])
			{
				count++;
			}
			else
            {
                speed[i] = speed[i-1];
            }
		}
		cout<<count<<"\n";
		testcases--;
	}
	return 0;
}
