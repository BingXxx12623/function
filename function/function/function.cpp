////ͨ�������ķ����ҳ��������нϴ��һ��
////����һ����ΪGetMax����,�ҳ����нϴ����
//#include<stdio.h>
//#include<windows.h>
//int GetMax(int x, int y)
//{
//	//�����ж�,���ϴ��������
//	//��Ҫע������д��,��return �������������ʱ,���ص�һ����,��return��������Ų�����ʱ,���صڶ�����
//	return(x > y) ? (x) : y;
//}
//int main()
//{
//	//����������������ʵ��
//	int x=0;
//	int y = 0;
//	printf("������������Ҫ��������");
//	scanf_s("%d %d", &x, &y);
//	//ͨ�����ú����ҳ��������еĽϴ��һ��
//	//���õĺ�������������ΪGetMax()
//	int max = GetMax(x, y);
//	printf("���������нϴ����Ϊ:%d", max);
//	system("pasue");
//	return 0;
//}
//ͨ�������ķ�����������������λ��
//����һ��Exchange���������б����Ľ���
//#include<stdio.h>
//#include<windows.h>
////��ָ��������ʵ�εĵ�ַ
//void Exchange(int *x, int *y)
//{
//	//���ֲ�����֮Ϊ**������**,�����ݷ����(�ڴ��ַ),����ȡ�����е���������
//	//�����Ϳ��Դﵽ��ʵ�ε�ֱ�ӿ���
//	int tmp = *x;
//	 *x = *y;
//	 *y = tmp;
//}
//int main()
//{
//	int x = 0;
//    int y = 0;
//	printf("������������Ҫ����λ�õ���:");
//	scanf_s("%d %d", &x, &y);
//	//ͨ������Exchange�������ﵽ��������������Ŀ��
//	//ȡx��y�ĵ�ַ,���뺯��֮��
//	Exchange(&x, &y);
//	printf("����֮�����������ֵΪ:%d %d",x,y);
//	getchar();
//	return 0;
//}
//�������������
//����һ��division�������м���
//#include<stdio.h>
//#include<windows.h>
////��Ϊc���Ա����������й������������µ�
////���Ե����õĺ�����������֮��ʱ,�ͻ�����޷��ҵ����ú��������
////����������Ҫ��������֮ǰ���к���������
////��������
//int Division(int x, int y, int *succse)
//{
//	//�� yΪ0ʱ��return 0
//	//���˴����޷��ж���yΪ0�����ʹ�ú�������������0,���Ǽ���֮���ֵ�����Ϊ0
//	//���������������ָ��,ͨ�������ж�ָ��Ŀ���,�ﵽ�жϵ�Ŀ��
//	if (y == 0)
//	{
//		return 0;
//	}
//	//���û��ִ��if���ͻ�ʹ�ý����ú��ֵΪ1,�����Ǽ�����Ϊ0,�����������
//	*succse = 1;
//	int result = x / y;
//	return result;
//}
////����������
//������1234��������,��1 2 3 4����ʽ���
//#include<stdio.h>
//#include<windows.h>
//void PrintfNum(int x)
//{
//	//�˴���Ҫʹ�õݹ�ķ�ʽ
//	//ͨ���ݹ����򻯳���
//	if (x > 9)
//	{
//		x = x / 10;
//	}
//	else
//	{
//		//x����һλ��
//		printf("%d", x % 10);
//	}
//}
//int main()
//{
//	int x = 1729;
//	//����PrintfNum����
//	//����1234,��1 2 3 4����ʽ���
//	PrintfNum(x);
//	system("pause");
//	return 0;
//}
//ͨ���ݹ�ķ�ʽ������n��k�η�
//����һ������������n��k���ݵ�ֵ
//#include<stdio.h>
//#include<windows.h>
//int Fab_r(int n, int i)
//{
//	if (i == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fab_r(n,i-1);
//	}int 
//}
//int main()
//{
//	int p = 0;
//	//��i����ʾ������
//	int q = 0;
//	printf("������һ������������k����:");
//	scanf_s("%d %d",&p,&q);
//	//ͨ�����ú���Fab_r���ﵽ����n��k�η���Ŀ��
//	int sum = Fab_r(p,q);
//	printf("�����ֵΪ:%d",sum);
//	system("pause");
//	return 0;
//}
//��дһ������reverse_string(char*string)(�ݹ�ʵ��)
//ʵ��:�������ַ����е��ַ���������
//Ҫ��:����ʹ��c�������е��ַ�����������.strlen
//"abcdef"----->fedcba"
//char temp=str[0]--->str[0]=str[len-1]-->str[len-1]=temp
//��ô���ַ����ĳ���:������־'\0', char*str    while(*str){
  //count++;st++}
//char* str="abcdef"--->reverse_string("abcdef")------->reverse_string("fedcba")
//int strlen(char*str)
//{
//	int count = 0;
//	while (*str++) 
//	{
//		count++;
//	}
//	return count;
//}
////�ݹ�reverse_string(char*str)
//void reverse_string(char*str)
//{//��Ϊ��,
//	if (*str)
//	{
//		char tmp;
//		int len = strlen(str);
//		tmp = str[0];
//		str[0] = str[len - 1];
//		str[len - 1] = '0';
//		reverse_string(str + 1);
//		str[len - 1] = tmp;
//	}
//}
//int main()
//{
//
//}
//int main()
//{
//	char str[20];
//	scanf("%s", str);
//	printf("%s")
//}
////�ݹ�ʵ��һ��strlen
////
//char strlen(char*Str)
//{
//	if (*Str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen(Str++);
//	}
//}
//int main()
//{
//	char arr[]={0,1,2,3,4,5,6}
//}
//��ݹ�
//�ݹ�ͷ�
//#include<stdio.h>
//#include<windows.h>
//int Recursive(int n)
//{
//	if (n < 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Recursive(n - 1);
//	}
//}
//int main()
//{
//	int x = 4;
//	int sum = Recursive();
//	printf("%d", sum);
//	system("pause");
//}
//�����ĵݹ�
//��1234����������1 2 3 4��������ʽ���
//Ҫ����������ʽ���,��Ҫʹ�õݹ����ʽ
//�������һ������,�õݹ�ķ�ʽ��1234��Ϊ1 2 3 4 ����ʽ
//#include<stdio.h>
//#include<windows.h>
//int Recurisive(int x)
//{
//	if (x > 9)
//	{
//		Recurisive(x/10);
//	}
//	printf("%d", x % 10);
//}
//int main()
//{
//	//����һ��Recursive������ʵ����Ӧ��Ŀ��
//	int x = 1234;
//	Recurisive(x);
//	system("pause");
//	return 0;
//}
//ʵ����һ���ַ�����ĳ���
//c�������ַ����������ַ�����ģ�������
//�ַ����鱾���Ϻ���ͨ������û��ʲô����,ֻ������������ÿһ��Ԫ�ض���char�͵�
//c��������Ȼ�ַ�����һ������,��������Ҳ����ͨ��һ��char* ָ����ָ������ĵ�һ��Ԫ��,����ʾһ���ַ�����
//����һ��strlen�����÷ǵݹ�ķ�ʽ�����ַ�����ĳ���
//����һ��ָ��,ָ������ĵ�һ����,����Ҳ���Ա�ʾ�������
//����ͨ���ݼ�ָ��ķ�ʽ,������������,��������ַ�����ĳ���
//ע��:���*���ڲ�ͬ��λ����,����ʾ�ĺ����ǲ�ͬ��
//����Ҫ�������߶���һ������ʱ,��Ҫ���������ͺ�*д��һ�� ���� char* str ��ʾ����һ��ָ��
//ע��:�˴���char* ��ʾ�ľ���һ����������,��int float double ��ʾ�Ĺ�ϵ��һ����
////��дΪ*str ������ʽ,��ʾ�˽�����,������ָ����ָλ��������������
//#include<stdio.h>
//#include<windows.h>
//int Strlen(char* str)
//{
//	//����һ����Ϊcount������,��ָ���λ�������ƶ�һλʱ,count+1.
//	int count=0;
//	//����һ��ѭ��,��Ϊ����c����������ص�,���鶼��'\0'��β
//	//��������ʹ�ý�����,�������õı�ʾ��Ϊ'\0'ʱ,˵����������Ѿ��������
//	//���'\0'��ʾ�ľ���ASCII�����ֵΪ0����
//	while (*str != '\0')
//	{
//		++count;
//		//���������ַ�������,ֱ������
//		++str;
//	}
//	return count;
//}
////ͨ���ݹ�ķ�ʽ������һ������ĳ���
//int Strlen(const char* str)
//{
//	//����һ������
//	//���ַ�����ĵ�һ���ַ�Ϊ'\0'ʱ,��֤���������ĳ���Ϊ0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		//����һ���ݹ����ʽ
//		return 1 + Strlen(str + 1);
//	}
//}
//int main()
//{
//	//����һ���Ҵ�����strlen����������һ���ַ�����ĳ���
//	//�˴�pi��ռ���ڴ�ռ�Ϊ3
//	//��������ַ�����ĳ���Ϊ2,ע��(\0)�������ַ�����ĳ���
//	printf("%d\n", Strlen("hello"));
//	system("pause");
//	return 0;
//}
//�ǵݹ����ʽ����һ�����Ľ׳�
//����һ������������һ�����Ľ׳�
//#include<stdio.h>
//#include<windows.h>
//int Fact(int x)
//{
//	int i;
//	int result=1;
//	//����һ��forѭ��
//	for (i = 1; i <=x ; i++)
//	{
//		result =result*i;
//	}
//	return result;
//}
//int main()
//{
//	//���û�����һ����,Ȼ���ٽ��м���
//	int n =2;
//	//�˴�����һ������׳˵ĺ���
//	int sum = Fact(2);
//	printf("������׳˵Ľ��Ϊ:%d", sum);
//	getchar();
//	return 0;
//}
//�õݹ�ķ�ʽ��ʵ��һ�����Ľ׳�
//#include<stdio.h>
//#include<Windows.h>
//int Fact(int n)
//{
//	if (n = 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return n * Fact(n - 1);
//	}
//}
//int main()
//{
//	int i;
//	printf("����������Ҫ����׳˵���:");
//	scanf_s("%d", &i);
//	//����Fact����������׳�
//	printf("%d", Fact(i));
//	system("pause");
//	return 0;
//}
//�÷ǵݹ�ķ�ʽ��ʵ��һ��쳲���������
//����һ��ʵ��쳲��������еĺ���
//#include<stdio.h>
//#include<windows.h>
////����һ��ȫ�ֱ���,������һ����,��Ҫ�����3����ٴ�
//int GE_p;
//int Fun(int n)
//{
//	//���ǹ۲�쳲��������п��Կ���,������е�ǰ�����ֵ��Ϊ1
//	//������ǰ����������,���������ֵΪ1
//	//�˴���Ϊ�߼���,�õ��Ľ��Ϊ0����1,Ҫ���ְ�λ����֮������,��λ��õ��Ľ��Ϊһ������,ֻ�����ǰ��ն����ƽ��м����
//		if (n == 1 || n == 2)
//		{
//			return 1;
//		}
//	    if (n == 3)
//		{
//			GE_p++;
//		}
//			return Fun(n - 1) + Fun(n - 2);
//}
//int main()
//{
//	int n=1;
//	//����һ��Fun���������һ��쳲���������
//	//�����ǰ10��
//	for (n = 1; n < 41; n++)
//	{
//		printf("%d\n", Fun(n));
//	}
//	printf("%d\n", GE_p);
//	system("pause");
//	return 0;
//
//}
//�ǵݹ�ķ�ʽ��ʵ��һ��쳲���������
//���ַ�ʽ����ʹ�ó���û������ļ��������
#include<stdio.h>
#include<windows.h>
int Fun(int n)
{
	//��Ϊǰ����Ϊ1,���Ե������
	if (n == 1 || n == 2)
	{
		return 1;
	}
	//��������������ʾ������е�ǰ����
	int num1 = 1;
	int num2 = 1;
	int i;
	int result;
	//��Ϊǰ��������,���Դӵ���������ʼ����
	for (i = 3; i <=n; i++)
	{
		//��������ڵ�һ����ڶ���֮��
		result = num1 + num2;
		num1 = num2;
		//�����������,���ڶ����ֵ��ֵ����һ��
		//�����,���������ֵ��ֵ���ڶ���
		//��������������ƶ�
		num2 = result;
	}
	return result;
}
int main()
{
	int n=40;
	//����һ��Fun()���������м���
	printf("%d", Fun(n));
	system("pause");
	return 0;
}