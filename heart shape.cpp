#include<iostream>
using namespace std;
main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		if(i-j==1||i+j==7||(i==0&&(i+j%3!=0))||i==1&&j==3)
			cout<<"*";
		else
			cout<<" ";
		cout<<endl;
	}
}
