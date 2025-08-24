#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char ch,letter[5];
	cout<<"input a string:";
	cin>>ch;
	int i=0,j=1;
	while(ch!='.');
	{
		++i;
		letter[i]=ch;
		cin>>ch;
	}
	while((j<i)&&(letter[j]==letter[i]))
	{
		--i;++j;
		
	}
	if(j>=i)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	return 0;
}
