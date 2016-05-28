#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int strlen(string word)
{
	int length=0;
	for(int i=0;word[i] != 0;i++)
	{
		length++;
	}
	return length;
}
int main()
{
	int number_of_words;
	int bubbly = 0;
	cin>>number_of_words;
    cin.ignore ();
	while(number_of_words>0)
	{
        string word;
        getline(cin,word);
        int num = strlen(word);
        char stack[num];
        int top = 0;
        stack[0] = word[0];
        for(int i = 1;i < num;i++)
        {
            if(word[i] == stack[top])
            {
                top = top -1;
            }
            else
            {
                top = top+1;
                stack[top] = word[i];
            }
        }
        if(top == -1)
        {
            bubbly++;
        }
        number_of_words--;
    }
    cout<<bubbly;
	return 0;
}
