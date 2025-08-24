#include<bits/stdc++.h>

using namespace std;

struct stduent{
	int data;
	stduent *next;
};
typedef struct stduent stu;

stu * head;
void Reverse()//反转链表(迭代法)
{
	stu * current, *prev,*next;
	current = head;
	prev = NULL;
	while(current != NULL)
	{
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
	
}
void Delete(int n)//删除链表任意节点
{
	stu * temp1;
	temp1 = head;
	if(n==1)
	{
		head = temp1 -> next;
		free(temp1);
		return;
	}
	for(int i = 0;i < n-2;i ++)
		temp1 = temp1 -> next;
		
	stu * temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	free(temp2);
}
void insert(int data,int n)//插入链表
{
	stu * temp1 = new stu();
	
	temp1 -> data = data;
	temp1 -> next = NULL;
	if(n == 1)
	{
		temp1 -> next = head;//此时head是null;
		head = temp1;
		return;
	}
	stu * temp2=head;
	for(int i = 0;i < n - 2;i ++)
	{
		temp2 = temp2 -> next;//每次插入的节点的temp2是节点的前一个next地址，即我要在第5个插入，现在temp2存的是第四个的next的地址
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
}
void Print(stu * p)//递归打印链表
{
	if(p == NULL)
	return;
	printf(p -> data);
	Print(p -> next);
	//如果想利用递归反向打印链表则可以：
	//Print(p -> next);//这里他会一直调用Print函数，直至为零，所调用的数据都会放到一个栈里，
	//printf(p -> data);//之后再将他们输出出来，最先进去的在上面，输出出来就会从后面先输出，这样就反向打印了链表。
}
void Reverse(stu * p)//递归反转链表
{
	if(p -> next == NULL)
	{
		head = p;
		return;
	}
	Reverse(p->next);//这里递归将链表按顺序放入栈中，此时最后一个链表因为执行之后被return所以最后一个链表没了
	stu * q = p->next;//此时回溯，这个时候在栈中最后一个链表开始出栈，此时p为倒数第二个链表的地址，因为最后一个链表被return了，这个时候q为最后一个链表地址
	q->next = p;//这个时候q指向NULL，如果再出栈则是指向最后一个链表。
	p->next = NULL;//倒数第二个的next为空，即指向空。
}
void print()//迭代去输出链表
{
	stu * temp;
	temp = head;
	while(temp != NULL)
	{
		printf("%d",temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}

int main()
{      
	head = NULL;
	
    return 0;
}   