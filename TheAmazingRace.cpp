#include <iostream>
using namespace std;
int main()
{
	int testcases;
	cin>>testcases;
	while(testcases > 0)
	{
		long int size;
		cin>>size;
		long int height[size];
		for(long int i=0;i<size;i++)
		{
			cin>>height[i];
		}
		long int pos = 1;
		long int max = 0;
		for(long int i=0;i<size;i++)
		{
		    long int cars_around = 0;
			for(long int j=i-1; j>=0; j--)
			{
			    if(height[j]<height[i])
                {
                    cars_around++;
                }
                else
                {
                    cars_around++;
                    break;
                }
			}
            for(long int j=i+1; j<size; j++)
			{
			    if(height[j]<height[i])
                {
                    cars_around++;
                }
                else
                {
                    cars_around++;
                    break;
                }
			}
			long temp = 0;
			temp = cars_around*(i+1);
			//cout<<"\nPos : "<<i+1<<" Height : "<<height[i]<<" cars around : "<<cars_around<<" temp : "<<temp;
			if(temp > max)
			{
				max = temp;
				pos = i+1;
			}
			//cout<<"\n Max : "<<max;
		}
		cout<<pos<<"\n";
		testcases--;
	}
	return 0;
}
