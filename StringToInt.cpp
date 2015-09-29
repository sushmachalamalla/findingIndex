#include<iostream>
#include<string>
using namespace std;
int main()
{
	int index;
	string str= "123";
	for(int i=0;i<3;i++)
	{
		index = str[i]-'0';
		cout<<index;
	}
	
	return 0;
}
