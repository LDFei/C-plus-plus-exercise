#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float w,s;
	scanf("%f",&w);
	if(w<=20)
	{s=w*1.68;
	printf("应收费:%.2f\n",s);
	}
	else
	{s=(w-20)*1.98+20*1.68;
	printf("应收费:%.2f\n",s);
	}
	return 0;
}
