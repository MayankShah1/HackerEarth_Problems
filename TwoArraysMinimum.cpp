#include <iostream>
using namespace std;
unsigned long long int find_min(unsigned long long int arr[],unsigned long long int n,unsigned long long int pos)
{
    unsigned long long position = 0;
    int min_ele = 1000000007;
    for(unsigned long long int i = 0;i < n;i++)
    {
        if(i == pos)
            continue;
        if(arr[i] < min_ele)
        {
            min_ele = arr[i];
            position = i;
        }
    }
    return position;
}
int main()
{
	unsigned long long int a,b,c,N;
	cin>>a>>b>>c;
	cin>>N;
	unsigned long long int A[N],B[N];
	A[0] = a*c;
	for(unsigned long long int i=1 ; i<N ; i++)
	{
    	A[i] = A[i-1]*a*b*c + A[i-1]*a*b + A[i-1]*a*c;
    	A[i] = A[i]%1000000007;
	}
	B[0] = b*c;
	for(unsigned long long int i=1 ; i<=N ; i++)
	{
    	B[i] = B[i-1]*b*c*a + B[i-1]*b*a + B[i-1]*b*c;
    	B[i] = B[i]%1000000007;
	}
	unsigned long long int posa = find_min(A,N,-1);
	unsigned long long int posb = find_min(B,N,-1);
	unsigned long long int sum = 0;
    if(posa == posb)
    {
        unsigned long long int sum_a = A[posa] + B[find_min(B,N,posb)];
        unsigned long long int sum_b = A[find_min(B,N,posa)] + B[posb];
        	if(sum_a <= sum_b)
        		sum = sum_a;
        	else
        		sum = sum_b;

    }
    else
    {
    	sum = A[posa] + B[posb];
    }
    cout<<sum;
    return 0;
}
