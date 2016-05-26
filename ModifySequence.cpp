#include <iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	long numbers[size];
	for(int i=0;i<size;i++)
	{
		cin>>numbers[i];
	}
	int i = 0;
	while(i<size-1)
	{
		if(numbers[i] == 0)
		{
			i++;
		}
		else if(numbers[i+1] == 0)
		{
			break;
		}
		else
		{
			if(numbers[i]<=numbers[i+1])
            {
                numbers[i+1] = numbers[i+1]-numbers[i];
                numbers[i] = 0;
            }
            else
            {
                numbers[i] = numbers[i] - numbers[i+1];
                numbers[i+1] = 0;
            }
		}
	}
	int count=0;
	for(int j=0;j<size;j++)
	{
		if(numbers[j]==0)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	if(count == size)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}
