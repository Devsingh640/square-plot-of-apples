/* 
In a garden there are several apple tree planted in a grid format.Each point(i,j) in the grid has |i|+|j| apples.Nandu can buy a square plot 
centered at (0,0).Find the minimum perimeter of the plot 
(1 unit having length=1) such that he can collect at least X apples . All plants in the perimeter of the plot are also included.

Input - one integer X denoting the number of apples nandu has to collect.
Output - Print th minimum perimeter of the plot that should be bought by nandu

Example-
Input - 1
output - 8
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,out;
	int sum=0,p=0;
	cout<<" Enter no. of apples- ";
	cin>>x;
	if(x==0)
	  out=0;
	else
	{
	
    	int n=0;
    	for(int i=1;i<=x;i++)
    	{   
	    	sum=sum+(  ( (i+1) * (i+1) ) + 4  )*i;
		    for(int j=i-1;j>=0;j--)
			p=8*j;
			sum=sum+p;
			n=n+2;
			//cout<<sum;
			if(x<=sum)
			{   
				out=n;
				break;
			}
		}	 
	}
	
	cout<<"perimeter of required plot- "<< 4*(out);
	
	return 0;
}
