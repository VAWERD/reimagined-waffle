#define _RCT_SECURE_NO_WARNINGS 1

//包含stdio.h的文件
#include<stdio.h>
//std-标准  i-输入  o-输出


////int 整型的意思
////main前面的int表示main函数调用返回一个整型值
//		int main()//主函数-程序的开始---main有且只有一个
//		{
//			 printf("hello\n");//print function--打印函数
//			return 0;//返回 0
//		}
//void main()---用void写已经过时了

////char--字符类型
////short--短整型
////int--整型
////long--长整型
////long long--更长的整型
////float--单精度浮点数-小数
////double--双精度浮点数
//int main()
//{	
//	char ch = 'A';//char-字符类型
//	printf("%c\n", ch);//%c-打印字符格式的数据
//	int age = 20;
//	printf("%d\n", age);//%d-打印整型十进制数据
//	return 0;
//}

//int main()
//{				//sizeof--谁的大小
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//int main()
//{
//	short age = 20;//向内存申请2个字节来存放“20”
//	float weight = 59.6;//申请4个字节来存放小数“59.6”
//
//	return 0;
//}


//int a = 100;//全局变量-在代码块“{}”外面的变量
//int main()
//{
//	int a = 10;//局部变量-在代码块“{}”里面的变量
//	printf("%d/n",a);//局部变量和全局变量名字可以一样，优先显示局部变量
//					//不建议一样，容易有bug
//	return 0;
//}

//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2= 0;
//	//输入函数-scanf
//	scanf_s("%d%d", &num1, &num2);//&--取地址符号
//	int sum = 0;//c语言语法规定变量要定义在当前代码块的最前面，C++不用
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}

//int main()
//{
//	extern int num;//extern声明外部符号
//	printf("%d", num);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	extern int num;
	scanf_s("%d%d", &a, &b);
	int z = 0;
	z = a * b + num;
	printf("z= %d", z);
	return 0;
}