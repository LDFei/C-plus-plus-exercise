#include<iostream>
using namespace std;
int main()
{	
	int weekday;
	cin>>weekday;
	switch(weekday)
	{
	case 1:cout<<"Monday"<<endl;break;
	case 2:cout<<"Tuesday"<<endl;break;
	case 3:cout<<"wendesday"<<endl;break;
	case 4:cout<<"Thursday"<<endl;break;
	case 5:cout<<"Friday"<<endl;break;
	case 6:cout<<"saturday"<<endl;break;
	case 7:cout<<"sunday"<<endl;break;
	default:cout<<"input error!"<<endl;
	  
	}	
	return 0;
}
