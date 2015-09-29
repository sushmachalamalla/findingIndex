
#include<iostream>
using namespace std;

int elementFound(int a[],int first,int last)
	{
		int returnType;
		int mid;
		int diff = last-first;
		mid = (diff/2)+first;
		if(diff==1)
		{
		if(a[first]>a[last]){	returnType = last; }
					
		}
		else if(a[mid]>a[mid+1])	{ returnType= (mid+1);}
		else if(a[mid]<a[mid-1])	{	returnType =mid;	}
		else if(a[mid]<a[mid+1]&&a[mid]>a[mid-1])
		{
			elementFound(a,first,mid-1);
			elementFound(a,mid-1,last);
		}
		else if(diff==0){	returnType= 0;	}
		
			
		return returnType;	
	}
int main()
{

int array[]={1,2,3,10,11,13,14,15,16,17,1,2,3};
int size = sizeof(array)/4;
//cout<<size<<endl;
int n,index=0;
if(size==0)
	{
	cout<<"array is empty";
	cout<<endl;
	return 0;
	}
else
	{	int tempSize=size-1;
	n = elementFound(array,index,tempSize);
	
	}
	if(n==0){	cout<<"Array elements are in a sorted order";	}
	else cout<<"Sorting order is missed at"<<array[n]<<endl;;
	return 0;
}
