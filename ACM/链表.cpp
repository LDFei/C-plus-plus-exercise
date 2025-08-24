#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct student
{
	string name[23];
	int id;
	student* next;
};
typedef struct student stu;
int main()
{	
	stu *head, *p, *mail;
    p = (stu*)malloc(sizeof(stu));
    head = p;
    mail = p;
    head->next = NULL;

    // 输入第一个学生的信息
    scanf("%s", &head->name);
    scanf("%d", &head->id);

    for (int i = 0; i < 1; i++) {
        p = (stu*)malloc(sizeof(stu));
        scanf("%s", &p->name);
        scanf("%d", &p->id);
        mail->next = p;
        mail = p;
        mail->next = NULL;
    }

    // 遍历输出信息
    p = head;
    while (p != NULL) {
        printf("%s %d\n", p->name, p->id);
        p = p->next;
    }

	return 0;
}
    