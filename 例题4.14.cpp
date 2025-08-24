#include<iostream>
using namespace std;
int main() 
{ cout<<"计算结果为:"<<endl;
	int x,y,z;
	for(int x=0;x<=100/5;x++)
	 for(int y=0;y<=100/3;y++)
	 {
	 	z=100-x-y;
	if(x+y+z==100&&5*x+3*y+z/3==100&&z%3==0)
	cout<<"公鸡为："<<x<<" 母鸡为："<<y<<" 小鸡为："<<z<<endl;
	}
	
	 
	return 0;
}
