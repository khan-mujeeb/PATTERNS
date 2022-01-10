#include<iostream>
using namespace std;
main()
{	int k;
	for(int i=0;i<4;i++)
	{	k=1;
		for(int j=0;j<8;j++)
			if(j>=3-i&&j<=3+i&&k){
				cout<<"*";
				k=0;
			}
			
			else{
				cout<<" ";
				k=1;
			}
		
		cout<<endl;
	}
}
