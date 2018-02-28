#include "header.h"

void Pattern::pyramid(int n)
{
	
	int i,j,k;
	
	for(i=n+1;i>0;i--)
	{
		
			for(k=0;k<i;k++)
			cout<<" ";
			
			for(j=n+1;j>i;j--)
				cout<<" *";

		cout<<"\n";
	}
}

void Pattern::diamod()
{
	int i,j,k;
	
	for(i=6;i>0;i--)
	{	
			for(k=0;k<i;k++)
			cout<<" ";
			
			for(j=6;j>i;j--)
				cout<<" *";

		cout<<"\n";
	}
	
	for(i=6;i>0;i--)
	{	
	
			for(k=6;k>i;k--)
			cout<<" ";
				
			for(j=0;j<i;j++)
				cout<<" *";
	
		cout<<"\n";
	}
	
}

void Pattern::blackdiamond()
{
	int i,j,k;
	
	for(i=6;i>0;i--)
	{	
			for(k=0;k<=i;k++)
			cout<<"*";
			
			for(j=6;j>i;j--)
			cout<<"  ";
			
			for(int l=0;l<=i;l++)
			cout<<"*";

		cout<<"\n";
	}
	
	for(i=6;i>=0;i--)
	{	
	
			for(k=6;k>=i;k--)
			cout<<"*";
				
			for(j=0;j<i;j++)
				cout<<"  ";
				
			for(int l=6;l>=i;l--)
				cout<<"*";	
			
	
		cout<<"\n";
	}
}

void Pattern::matrixDiagonal()
{
	int i,j;
	int arr[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(i=0;i<4;i++)
	{
		for(j=i;j==i;j++)
		cout<<arr[i][j];
	}
}
