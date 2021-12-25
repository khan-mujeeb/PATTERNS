#include<iostream>
using namespace std;
main()
{	char k;
	for(int i=0;i<5;i++)
	{	k='A';
		for(int j=0;j<9;j++)
			if(j<=4-i||j>=4+i)
			{	
				cout<<k;
				j<4?k++:--k;
			}
				
			else
			{
				cout<<" ";
				if(j==4)
					k--;
			}
				
		cout<<endl;
	}
}