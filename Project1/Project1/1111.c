#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	printf("hello bite\n");
//	printf("he he\n ");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(float));
//	return 0;
//} 
//int global = 20;
//int main()
//{
//	int global = 10;
//	int local = 30;
//	printf("global=%d\n", global);
//	return 0;
//}
// 
// 
// 
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//
// 
// 
//int main()
//{
//	char arr1[]= { 'b','i','t' };
//	char arr2[]= {"bit" };
//	char arr3[] = { 'b','i','t','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}
//int main()
//{
// printf("%c\n",' \'');
// printf("%s\n", "\"");
//		return 0;
//
//}
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}
//int MAX(int x,int y)
//{
//if (x > y)
//return x;
//else
//return y;
//}
//int main()
//{
//	int A = 4;
//	int B = 5;
//	int max = 0;
//	max = MAX(A, B);
//	printf("%d\n", MAX(A,B));
//	return 0;
//}
//int add(int x, int y)
//{
// int z=x+y;
//	return z;
//
//}
//int sub(int x, int y)
//{
// int g=x-y;
//	return x-y;
//
//}
//
//int main()
//{
//	int A = 1;
//	int B = 8;
//	int sum = add(A, B);
//	printf("%d\n", add(A,B));
//	printf("%d\n", sub(A, B));
//	return 0;
//}
//int main()
//{
//	int conding=0;
//	printf("���ȥ�ô���?(ѡ��1or0)��\n");
//		scanf("%d",&conding);
//		if (conding == 0)
//		{
//			printf("�������!\n");
//		}
//		else
//		{
//			printf("��offer\n");
//		}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("��Ҫ�������");
//		while (line <= 20000)
//		{
//			line++;
//			printf("��Ҫ����Ŭ��\n");
//		}
//	if (line>20000)
// {
//		printf("�����۷�\n");
//}
//	return 0;
//}
	/*int main()
	{
		int i = 0;
		int arr[10] = { 1,2,3,4,5,6,7,8,9 };
		for (i=0;i<10;i++)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
		return 0;
	}*/
	//typedef unsigned int u_int;
	//int main()
	//{
	//	//�۲�num1��num2,������������������һ���� int=signed int
	//	unsigned int num1 = 0;�޷������Ķ���
	//	u_int num2 = 0;
	//	return 0;
	//}
	//int main()
	//{
	//	register int a = 10;/*�����a���ڼĴ�������*/
	//	return 0;
	//}
	//void test()
	//{
	//	int i = 0;
	//	i++;
	//	printf("%d ", i);
	//}
	//int main()
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		test();
	//	}
	//	return 0;
	//}
	//void test()
	//{
	//	static int i = 0;
	//	i++;
	//	printf("%d ", i);
	//}
	//int main()
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		test();
	//	}
	//	return 0;
	//}
	//void test()
	//{
	//	int a= 0;
	//	a++;
	//	printf("%d\n", a);
	//}
	//int main()
	//{
	//	int i = 0;
	//	for (i=0;i<10;i++)
	//	{
	//		test();
	//	}
	//	/*printf("%d\n", i);*/
	//	return 0;
	//}
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		test();
//	}
//	/*printf("%d\n", i);*/
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d", g_val);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", add(2, 3));
//	return 0;
//}
#define MAX 1000
#define add(x,y) ((x)+(y))
//int main()
//{
//	printf("MAX=%d\n", MAX);
//	int sum = add(2, 3);
//	printf("sum=%d\n", sum);
//	sum = 10 * add(2, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	&num;/*ȡ��num�ĵ�ַ*/
//	printf("%p\n", &num);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%p\n", &(*p));
//	printf("%p\n", &num);
//	printf("%p\n",p);
//	printf("%p\n", &p);
//	printf("num=%d\n", num);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%p\n",&pc);
//	printf("%p\n", &ch);
//	printf("%c\n", ch);
//	return 0;
//}

//struct book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book b1 = { "c�����������",50 };
//	strcpy(b1.name, "c++");/*�ַ�������*/
//	struct book* pb = &b1;
//	printf("%s\n", b1.name);
//	printf("%p\n", pb);
//	printf("%p\n", &b1);
//	printf("%p\n", &(*pb));
//	printf("%p\n", &pb);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 20;
//	printf("�޸ĺ�ļ۸�Ϊ��%dԪ\n", b1.price);
//	return 0;
//}
//struct Stu
//{
//	char name[20];//����
//	int age;      //����
//	char sex[5];  //�Ա�
//	char id[15]; //ѧ��
//};
//int main()
//{
//	struct Stu s = { "����",20,"��","202180101 "};
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	struct Stu *ps= &s;
//	printf("name=%s age=%d sex=%s id=%s\n", ps->name, ps->age, ps->sex, ps->id);
//	return 0;
//}
//int main()
//{
//	int age=0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else if (age > 18 && age < 40)
//	{
//		printf("����");
//	}
//	else if (age > 40 && age < 60)
//		{
//		printf("׳��");
//		}
//	else if (age > 60 && age < 80)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
//	}
//			return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (1 == a)
//	{
//		if (2 == b)
//		{
//			printf("hehe");
//		}
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	j = i % 2;
//	scanf("%d", &i);
//	if (j = 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��ż��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i=1;i<=100;i++)
//	{
//		i += 2;
//		printf("%d\n", i);
//	}	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	{
//		for (i = 0;i < 100;i++)
//		{
//			j = i % 2;
//			if (j == 1)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//int day = 0;
//scanf("%d/\n", &day);
//switch (day)
//{
//case 1:
//	printf("����һ\n");
//	break;
//case 2:
//	printf("���ڶ�\n");
//	break;
//case 3:
//	printf("������\n");
//	break;
//case 4:
//	printf("������\n");
//case 5:
//	printf("������\n");
//	break;
//case 6:
//	printf("������\n");
//	break;
//case 7:
//	printf("������\n");
//	break;
// default:
// break;
//}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d/\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
// default:
// break;
//	}
//	return 0;
//}	
//int main()
//{
//	int m = 2;
//	int n = 1;
//	switch (n) 
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//			//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)//eof��ʾ�ļ��Ľ���
//	{
//		putchar(ch);
//	}
//	return 0;//CTRL+Z��ʾ������ǰ����
//}
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//		{
//			printf("hehe\n");//��ӡ��ʮ���Ǻǣ�����jѭ��֮��ֵһֱΪ10��
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			continue;
//		//}
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1;i <=10;i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret = 1;
//		for (i = 1;i <= n;i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left=0;
//	int key = 7;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			break;
//	}
//		if (left <= right)
//		{
//			printf("�ҵ��ˣ��±���:%d\n",mid);
//		}
//		else
//		{
//			printf("�Ҳ���\n");
//		}
//	return 0;
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//�ҵ��ˣ������±�
//	}
//	return -1;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0]) - 2;*/
//	int right=strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char password[20] = {0};
//	int a=sizeof(password);
//	printf("%d",a);
//	for (i = 1;i <= 3;i++)
//	{
//		printf("����������:");
//		scanf("%s", &password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("������ȷ,��¼�ɹ�\n");
//			break;
//		}
//		if (i == 3)
//		{
//			printf("����������������\n");
//		}
//	}
//
//	return 0;
//}
//�ڰ˽ڿδ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("���Լ����%d\n", n);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (i % j != 0)
//			{
//				count++;
//				printf("%d\n", i);
//			}
//		}
//		printf("\ncount=%d\n", count);
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j = 2;j <= i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1;i<=100;i++)
//	{
//		if (i%10==9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum+1.0*flag/ i;
//		flag = -flag;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=1;i<10;i++)
//	{
//		for (j = 1;j <= i;j++) 
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
//RAND_MAX--rand�����ܷ�������������ֵ��
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char input[20] = {"\0"};
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { "\0" };
//	system("shutdown -s -t 240");
//again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//	scanf("%s", input);
//	if ((0 == strcmp(input, "������")))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int getmax(int x,int y)
//{
//	if (x <= y)
//	return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	c = getmax(a, b);
//	printf("���ֵ��%d", c);
//	return 0;
//}
//ʵ�ֳɺ��������ǲ����������
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//��ȷ�İ汾
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1:num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2:num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n;j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 ==0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 2000;year <= 4000;year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int getnum(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//	if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		return mid;
//	}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = getnum(arr, k,sz);
//	if(ret==-1)
//	{
//		printf("�Ҳ���ָ������");
//	}
//	else
//	{
//		printf("�ҵ����±���%d\n", ret);
//	}
//	return 0;
//}
//void ADD(int* p)
//{
//	(*p)++;//ע������������ȼ�
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//
//}
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//strcat���������ǽ�����char���͵ĺ������ӡ�
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
#include"add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d", num % 10);
//}
////int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	return 0;
//}
//int mystrlen(char* arr)
//{
//	int count = 0;
//		while (*arr != '\0')
//		{
//			arr++;
//			count++;
//		}
//		return count;
//
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int s = mystrlen(arr);
//	printf("%d\n", s);
//	return 0;
//}
//int mystrlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		 return 1 + mystrlen(arr + 1);
//	}
//	else
//	return 0;
//
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int s = mystrlen(arr);
//	printf("%d\n", s);
//	return 0;
//}
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int count=0;
//int fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int hu = fib(n);
//	printf("%d\n", hu);
//	printf("count=%d\n", count);
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int hu = fib(n);
//	printf("%d\n", hu);
//	return 0;
//}


#include "sanziqi.h"
//������
//void menu()
//{
//	printf("************************\n");
//	printf("*** 1.play  0.exit *****\n");
//	printf("************************\n");
//}
//void game()
//{
//	char board[ROW][COL];
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
//		if (ret != 'C')
//		{
//			break;
//		}
//		ComputerMove(board, ROW, COL);//�жϵ����Ƿ�Ӯ
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//		if (ret == '*')
//		{
//			printf("���Ӯ��\n");
//		}
//		else if (ret == '#')
//		{
//			printf("����Ӯ��\n");
//		}
//		else
//		{
//			printf("ƽ��\n");
//		}
//		DisplayBoard(board, ROW, COL);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////int main()
//{
//	int arr1[10] = {0};
//	int count = 10;
//	//int arr2[count];[]�ڲ���Ҫһ���������ʽ
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[3][4] = {1,2,3,4};
//	int arr2[3][4] = { {1,2},{4,5} };
//	int arr3[][4] = { {2,3},{4,5} };//��ά��������г�ʼ�����п���ʡ�ԣ��в�����
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[3][4] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			arr1[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d\n", arr1[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[3][4] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			arr1[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			printf("&arr1[%d][%d]=%p\n", i, j,&arr1[i][j]);
//		}
//	}
//	return 0;
//}
//void Bubble_Sort(int arr[], int sz)
//{
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = 0;j < sz-i-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp=arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_Sort(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%d\n", sizeof(arr2));
//	//������
//	return 0;
//}
#include "saolei.h"
//void menu()
//{
//	printf("**********************\n");
//	printf("******* 1.play *******\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
//	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
//	//��ʼ������
//	InitBoard(mine, ROWS, COLS, '0');//'0'
//	InitBoard(show, ROWS, COLS, '*');//'*'
//
//	//��ӡһ������
//	DisplayBoard(show, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);
//
//	//������
//	SetMine(mine, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);
//
//	//�Ų���
//	FindMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//ɨ����Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//
//�����Ż���
//1. ��������ף���Χû���� - չ��һƬ - �ݹ�
//2. �����
//




