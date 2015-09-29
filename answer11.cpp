#include<iostream>
#include<string>
using namespace std;
int main(){
	string str = "indra";
	int size = sizeof(str)/4;
	int buf[256]={0};
for(int i=0;i<size;i++)
{
	
		int val = str[i];

		if(buf[val]==0)	
		{

			buf[val]=1;

		}
	else 
	{
		cout<<"Not unique"<<endl;
		return 0;
	}
}
	cout<<"Unique";
	return 0;
}