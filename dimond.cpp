#include<iostream>
using namespace std;
main()
{	int k;
	char c;
	for(int i=1;i<=7;i++)
	{	
		c='A';
		i<=4?k++:k--;
		for(int j=1;j<=7;j++)
			if(j<=3+k&&j>=5-k)
				{
					cout<<c;
					j<4?c++:c--;			
				}
			else
			{
				cout<<" ";
				if(j==4)
					c--;	
			}
		cout<<endl;
	}
}
