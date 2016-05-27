#include <iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int ratings[number];
	for(int i=0;i<number;i++)
	{
		cin>>ratings[i];
	}
	int i=1;
	while(i<number)
	{
		if(ratings[i] == 0 && i>0)
		{
		    i = i-1;
            for(int j = i;j<number-1;j++)
            {
                ratings[j] = ratings[j+1];
            }
            number = number-1;
            for(int j = i;j<number-1;j++)
            {
                ratings[j] = ratings[j+1];
            }
            number = number - 1;
		}
		else
        {
            i++;
        }
	}
	int sum = 0;
    for(int j=0;j<number;j++)
    {
        sum = sum + ratings[j];
    }

	cout<<sum;
}
