#include<iostream>
using namespace std;
int main() 
{ cout<<"������Ϊ:"<<endl;
	int x,y,z;
	for(int x=0;x<=100/5;x++)
	 for(int y=0;y<=100/3;y++)
	 {
	 	z=100-x-y;
	if(x+y+z==100&&5*x+3*y+z/3==100&&z%3==0)
	cout<<"����Ϊ��"<<x<<" ĸ��Ϊ��"<<y<<" С��Ϊ��"<<z<<endl;
	}
	
	 
	return 0;
}
