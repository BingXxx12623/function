////通过函数的方法找出两个数中较大的一个
////创建一个名为GetMax的数,找出其中较大的数
//#include<stdio.h>
//#include<windows.h>
//int GetMax(int x, int y)
//{
//	//进行判断,将较大的数返回
//	//需要注意这种写法,当return 后面的括号满足时,返回第一个数,当return后面的括号不满足时,返回第二个数
//	return(x > y) ? (x) : y;
//}
//int main()
//{
//	//创建两个变量当做实参
//	int x=0;
//	int y = 0;
//	printf("请输入两个你要交换的数");
//	scanf_s("%d %d", &x, &y);
//	//通过调用函数找出两个数中的较大的一个
//	//调用的函数的名字起名为GetMax()
//	int max = GetMax(x, y);
//	printf("这两个数中较大的数为:%d", max);
//	system("pasue");
//	return 0;
//}
//通过函数的方法来交换两个数的位置
//创建一个Exchange函数来进行变量的交换
//#include<stdio.h>
//#include<windows.h>
////用指针来保存实参的地址
//void Exchange(int *x, int *y)
//{
//	//这种操作称之为**解引用**,即根据房间号(内存地址),来获取房间中的数据内容
//	//这样就可以达到对实参的直接控制
//	int tmp = *x;
//	 *x = *y;
//	 *y = tmp;
//}
//int main()
//{
//	int x = 0;
//    int y = 0;
//	printf("请输入两个你要交换位置的数:");
//	scanf_s("%d %d", &x, &y);
//	//通过调用Exchange函数来达到交换两个变量的目的
//	//取x和y的地址,传入函数之中
//	Exchange(&x, &y);
//	printf("交换之后的两个数的值为:%d %d",x,y);
//	getchar();
//	return 0;
//}
//计算两个数相除
//创建一个division函数进行计算
//#include<stdio.h>
//#include<windows.h>
////因为c语言编译器的运行规律是自上向下的
////所以当调用的函数在主函数之后时,就会出现无法找到调用函数的情况
////所以我们需要在主函数之前进行函数的声明
////函数声明
//int Division(int x, int y, int *succse)
//{
//	//当 y为0时就return 0
//	//但此处就无法判断是y为0的情况使得函数无意义而输出0,还是计算之后的值本身就为0
//	//所以我们这儿借助指针,通过函数中对指针的控制,达到判断的目的
//	if (y == 0)
//	{
//		return 0;
//	}
//	//如果没有执行if语句就会使得解引用后的值为1,无论是计算结果为0,还是其他情况
//	*succse = 1;
//	int result = x / y;
//	return result;
//}
////函数的声明
//将类似1234这样的数,以1 2 3 4的形式输出
//#include<stdio.h>
//#include<windows.h>
//void PrintfNum(int x)
//{
//	//此处需要使用递归的方式
//	//通过递归来简化程序
//	if (x > 9)
//	{
//		x = x / 10;
//	}
//	else
//	{
//		//x就是一位数
//		printf("%d", x % 10);
//	}
//}
//int main()
//{
//	int x = 1729;
//	//调用PrintfNum函数
//	//将数1234,以1 2 3 4的形式输出
//	PrintfNum(x);
//	system("pause");
//	return 0;
//}
//通过递归的方式来计算n的k次方
//创建一个函数来计算n的k次幂的值
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
//	//用i来表示次幂数
//	int q = 0;
//	printf("请输入一个数来求它的k次幂:");
//	scanf_s("%d %d",&p,&q);
//	//通过调用函数Fab_r来达到计算n的k次方的目的
//	int sum = Fab_r(p,q);
//	printf("这个数值为:%d",sum);
//	system("pause");
//	return 0;
//}
//编写一个函数reverse_string(char*string)(递归实现)
//实现:将参数字符串中的字符反向排列
//要求:不能使用c函数库中的字符串操作函数.strlen
//"abcdef"----->fedcba"
//char temp=str[0]--->str[0]=str[len-1]-->str[len-1]=temp
//怎么求字符串的长度:结束标志'\0', char*str    while(*str){
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
////递归reverse_string(char*str)
//void reverse_string(char*str)
//{//若为空,
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
////递归实现一个strlen
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
//逆递归
//递归和非
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
//函数的递归
//将1234这样的数以1 2 3 4这样的形式输出
//要以这样的形式输出,就要使用递归的形式
//这儿创建一个函数,用递归的方式将1234拆为1 2 3 4 的形式
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
//	//调用一个Recursive函数来实现相应的目的
//	int x = 1234;
//	Recurisive(x);
//	system("pause");
//	return 0;
//}
//实现求一个字符数组的长度
//c语言中字符串本质上字符数组模拟过来的
//字符数组本质上和普通的数组没有什么区别,只不过它数组中每一个元素都是char型的
//c语言中虽然字符串是一个数组,但是我们也可以通过一个char* 指针来指向数组的第一个元素,来表示一个字符数组
//创建一个strlen函数用非递归的方式来求字符数组的长度
//定义一个指针,指向数组的第一个数,这样也可以表示这个数组
//我们通过递加指针的方式,遍历整个数组,进而求出字符数组的长度
//注意:这个*放在不同的位置中,所表示的含义是不同的
//当你要声明或者定义一个变量时,就要将变量类型和*写在一起 类似 char* str 表示这是一个指针
//注意:此处的char* 表示的就是一种数据类型,和int float double 表示的关系是一样的
////而写为*str 这种形式,表示了解引用,代表了指针所指位置所包含的内容
//#include<stdio.h>
//#include<windows.h>
//int Strlen(char* str)
//{
//	//定义一个名为count的数字,当指针的位置向右移动一位时,count+1.
//	int count=0;
//	//创建一个循环,因为根据c语言数组的特点,数组都以'\0'结尾
//	//所以我们使用解引用,当解引用的表示的为'\0'时,说明这个数组已经遍历完成
//	//这儿'\0'表示的就是ASCII码表中值为0的数
//	while (*str != '\0')
//	{
//		++count;
//		//遍历整个字符串数组,直到结束
//		++str;
//	}
//	return count;
//}
////通过递归的方式来计算一个数组的长度
//int Strlen(const char* str)
//{
//	//设置一个出口
//	//当字符数组的第一个字符为'\0'时,则证明这个数组的长度为0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		//创建一个递归的形式
//		return 1 + Strlen(str + 1);
//	}
//}
//int main()
//{
//	//调用一个我创建的strlen函数来计算一个字符数组的长度
//	//此处pi所占的内存空间为3
//	//但是这个字符数组的长度为2,注意(\0)不计入字符数组的长度
//	printf("%d\n", Strlen("hello"));
//	system("pause");
//	return 0;
//}
//非递归的形式计算一个数的阶乘
//创建一个函数来计算一个数的阶乘
//#include<stdio.h>
//#include<windows.h>
//int Fact(int x)
//{
//	int i;
//	int result=1;
//	//创建一个for循环
//	for (i = 1; i <=x ; i++)
//	{
//		result =result*i;
//	}
//	return result;
//}
//int main()
//{
//	//让用户传入一个数,然后再进行计算
//	int n =2;
//	//此处调用一个计算阶乘的函数
//	int sum = Fact(2);
//	printf("这个数阶乘的结果为:%d", sum);
//	getchar();
//	return 0;
//}
//用递归的方式来实现一个数的阶乘
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
//	printf("请您输入你要计算阶乘的数:");
//	scanf_s("%d", &i);
//	//调用Fact函数来计算阶乘
//	printf("%d", Fact(i));
//	system("pause");
//	return 0;
//}
//用非递归的方式来实现一个斐波那契数列
//创建一个实现斐波那契数列的函数
//#include<stdio.h>
//#include<windows.h>
////定义一个全局变量,来计算一个数,需要计算第3项多少次
//int GE_p;
//int Fun(int n)
//{
//	//我们观察斐波那契数列可以看到,这个数列的前两项的值都为1
//	//所以在前两项的情况下,我们输出的值为1
//	//此处的为逻辑或,得到的结果为0或者1,要区分按位或与之的区别,按位或得到的结果为一个数字,只不过是按照二进制进行计算的
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
//	//调用一个Fun函数来输出一个斐波那契数列
//	//先输出前10项
//	for (n = 1; n < 41; n++)
//	{
//		printf("%d\n", Fun(n));
//	}
//	printf("%d\n", GE_p);
//	system("pause");
//	return 0;
//
//}
//非递归的方式来实现一个斐波那契数列
//这种方式可以使得程序没有意义的计算大大减少
#include<stdio.h>
#include<windows.h>
int Fun(int n)
{
	//因为前两项为1,所以单独输出
	if (n == 1 || n == 2)
	{
		return 1;
	}
	//定义两个数来表示这个数列的前两项
	int num1 = 1;
	int num2 = 1;
	int i;
	int result;
	//因为前两项单独输出,所以从第三项来开始计算
	for (i = 3; i <=n; i++)
	{
		//第三项等于第一项与第二项之和
		result = num1 + num2;
		num1 = num2;
		//当运算结束后,将第二项的值赋值给第一项
		//将结果,即第三项的值赋值给第二项
		//即整个数列向后移动
		num2 = result;
	}
	return result;
}
int main()
{
	int n=40;
	//调用一个Fun()函数来进行计算
	printf("%d", Fun(n));
	system("pause");
	return 0;
}