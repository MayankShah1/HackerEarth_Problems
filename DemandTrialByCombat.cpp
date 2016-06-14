#include <iostream>
using namespace std;
int main()
{
	int testcases;
	cin>>testcases;
	while(testcases > 0)
	{
		int lannisters;
		long int hours;
		cin>>lannisters>>hours;
		int position[lannisters];
		for(int i = 0; i < lannisters; i++)
		{
			cin>>position[i];
		}
		for(long int i = 0; i < hours; i++)
		{
		    long int count_0 = 0;
		    long int count_1 = 0;

            	    int temp = position[0];

                    if(temp)
                	count_1++;
                    else
                	count_0++;

		    position[0] = position[1];
		    for(int i = 1; i < lannisters -1; i++)
		    {
		      if(position[i])
                    	count_1++;
                      else
                    	count_0++;

		      if(temp ==1 && position[i+1] ==1)
                      {
                    	temp = position[i];
			position[i] = 1;
                      }
                      else
                      {
                    	temp = position[i];
			position[i] = 0;
		      }
		}
		if(position[lannisters-1])
                	count_1++;
                else
                	count_0++;

		position[lannisters - 1] = temp;

		if(count_0 == lannisters || count_1 == lannisters)
            	{
                	break;
            	}

		}
		for(int i = 0; i < lannisters; i++)
		{
			cout<<position[i]<<" ";
		}
		cout<<"\n";
		testcases--;
	}
	return 0;
}
