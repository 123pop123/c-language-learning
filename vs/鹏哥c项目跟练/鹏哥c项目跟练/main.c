#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ʶָ��

//int main() {
//	int a = 10;
//	printf("%p\n", &a);
//	int * pa = &a;//��c����ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int����
//
//	char ch = "w";
//	char * pc = ch;
//	printf("%p\n%p\n", pa, pc);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//�ṹ��

struct Stu {
	char name[20];
	int age;
	double score;
};
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main() {
	struct Stu s =
	{
		"����",20,98.6
	};
	printf("%s %d %.2lf\n", s.name, s.age, s.score);
	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}