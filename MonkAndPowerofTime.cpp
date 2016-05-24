#include <iostream>
using namespace std;

int main()
{
	int number;
	int time = 0;
 	cin>>number;
 	int calling_order[number];
 	int ideal_order[number];
 	for(int i=0;i<number;i++)
 	{
 		cin>>calling_order[i];
 	}
 	for(int i=0;i<number;i++)
 	{
 		cin>>ideal_order[i];
 	}

 	while(number>0)
 	{
 		if(ideal_order[0]==calling_order[0])
 		{
 			time += 1;
 			for(int i=0;i<number-1;i++)
 			{
 				ideal_order[i] = ideal_order[i+1];
 				calling_order[i]=calling_order[i+1];
 			}

 			number--;
 		}
 		else
 		{
 			time += 1;
 			int temp=calling_order[0];
 			for(int i=0;i<number-1;i++)
 			{
 				calling_order[i] = calling_order[i+1];
 			}
 			calling_order[number-1] = temp;
 		}
 	}
 	cout<<time;
    return 0;
}
