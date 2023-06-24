#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	
//	//scanf_s是VS编译器提供，有的编译器不支持，建议用scanf
//	scanf("%d%d", &a, &b);
//	z = a + b;
//	printf("z= %d", z);
//	return 0;
//}



//int main()
//{
//	//const修饰常变量--被它修饰的常量不能变但本质还是常量
//	const int num = 10;
//	printf("%d", num);
//	//int num = 5;
//	prinft("%d", num);
//	return 0;
//}


//#define a 10//#define定义的标识符常量
//int main()
//{
//	int arr[a] = { 0 };
//	printf("%d", a);
//	return 0;
//}


////枚举关键字--enum
////枚举-- 一一列举
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//
//	enum Color color = RED;
//	color = BLUE;
//	// RED = 3;
//	//枚举常量“{}”不能改，但创造出来的枚举变量“color”可以改变
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	//"abc"--'a','b','c','\0'--'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c','\0' };
//								// 0也可以
//	printf("%s\n", arr1);
//	printf("%s", arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen--计算字符长度
//	printf("%d", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("进入大学\n");
//
//		printf("你是否好好学习？<1/0>\n");
//		scanf("%d", &a);
//
//	while(a>1)
//	{
//		printf("请认真答\n");
//		scanf("%d", &a);
//	}
//	if (a == 0)
//		printf("回家种田");
//	if (a == 1)
//		printf("走向人生巅疯");
//	return 0;
//}


//int add(int x, int y)//add--自定义函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	num = add(a, b);
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int asd[10] = { 1,2,3,4,5,6,7,8,9,10 };
//				  0,1,2,3,4,5,6,7,8,9--下标访问元素
//				[下标]
//	printf("%d\n", asd[3]);//4
//	int q = 0;
//	while (q < 10)
//	{
//		printf("%d", asd[q]);//全打印
//		q++;
//	}
//	return 0;
//}

 