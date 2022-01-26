#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	srand(time(0));
	int loop = 10;
	unsigned int num[10], count = 0;
	for(int i = 0; i<loop;i++)
	{
		num[i] = ((rand()*rand()*rand())/100);
		num [i] %= 1000;
		// num[i] /= 100;
		cout<<num[i]<<endl;
	}
	for(int i = 0;i<loop;i++)
		for(int j = i+1;j<loop;j++)
		{
			if(num[i] == num[j])
			{
				cout<<"Repeated: "<<num[j]<<endl;
				count++;
			}
		}
	cout<<"Count: "<<count<<endl;
	return 0;
}