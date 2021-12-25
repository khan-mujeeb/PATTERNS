#include<iostream>
using namespace std;
main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		if(j<=4-i)
			cout<<"*";
		else
			cout<<" ";
		cout<<endl;
	}
}
