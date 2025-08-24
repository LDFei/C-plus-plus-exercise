#include<iostream>

using namespace std;
int main()
{ const double PI=3.14;
  cout<<"请输入圆的半径："<<endl;
  double a,area;
  cin>>a;
  area=PI*PI*a;
  cout<<"圆的面积为："<<area<<endl; 
	return 0;
}
