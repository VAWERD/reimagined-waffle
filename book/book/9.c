//#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//void dy(void);
//int sr(int a ,int b);
//int main(void)
//{
//	int s;
//	dy();
//	s=sr(1, 4);
//	printf("%d", s);
//	return 0;
//}
//
//void dy(void)
//{
//	printf("\nPlease choose one of the following:\n");
//	printf("1) copy files		2) move files\n");
//	printf("3) remove files		4) quit\n");
//	printf("Enter the number of your choice:");
//}
//
//int sr(int a, int b)
//{
//	int c;
//	while (scanf("%d", &c) == 1)
//	{
//		if (c<a || c>b) {
//			printf("%d is not a valid choice; try again\n", c);
//			dy();
//			continue;
//		}
//		else
//			return c;
//	}
//	printf("Non-numeric input.");
//	return 4;
//}

//		9.11

//#include<stdio.h>
//double min(double x, double y)
//{
//	return ( x < y ? x : y);
//}
//int main(void)
//{
//	float x, y, z;
//	scanf_s("%f,%f", &x, &y);
//	z = min(x, y);
//	printf("%f", z);
//
//	return 0;
//}

//#include<stdio.h>
//void chline(char ch, int i, int j)
//{
//	int a, b;
//	
//	for (a = 0; a < j; a++)
//	{
//		for (b = 0; b < i; b++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}
//int main(void)
//{
//	char ch;
//	int i, j;
//	scanf_s("%c", &ch);
//	scanf_s("%d,%d", &i, &j);
//	chline(ch, i, j);
//	return 0;
//}

//#include<stdio.h>
//void chline(char ch, int i, int j)
//{
//	int a, b;
//	
//	for (a = 0; a < j; a++)
//	{
//		for (b = 0; b < i; b++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}
//int main(void)
//{
//	char  ch, z;
//	int i, j;
//	printf("输入要打印的字符");
//	scanf_s("%c", &ch);
//		while ((z = getchar()) != '\n')
//			continue;
//	
//	printf("输入要打印的次数和行数");
//
//	while (scanf_s("%d,%d", &i, &j) != 2) {
//		printf("输入正确的数值");
//	}
//
//	chline(ch, i, j);
//	return 0;
//}

//#include<stdio.h>
//float thqj(float a, float b)
//{
//	float c;
//	c = (1 / a + 1 / b) / 2;
//	return (1 / c);
//}
//int main(void)
//{
//	float a, b;
//	char ch;
//	printf("输入两个浮点数");
//	while (scanf_s("%f,%f",&a,&b)!=2)
//	{
//		while (ch = getchar() != '\n')
//			continue;
//		printf("输入两个正确的浮点数");
//	}
//	printf("%.3f",thqj(a, b));
//
//	return 0;
//}

//#include<stdio.h>
//void larger_of(float *a, float *b)
//{
//	float s = (*a > *b) ? *a : *b;
//	*a = *b = s;
//}
//int main(void)
//{
//	float a, b;
//	scanf_s("%f,%f", &a, &b);
//	larger_of(&a, &b);
//	printf("%f,%f", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//void paixu(double *a, double *b, double *c)
//{
//	double x, y, z;
//	x = *a;
//	y = *b;
//	z = *c;
//	if (x > y && x > z) {
//		*c = x;
//		if (y > z){
//			*b = y;
//			*a = z;
//		}
//		else {
//			*a = y;
//			*b = z;
//		}}
//	else if (x < y&&x < z) {
//		*a = x;
//		if (y > z) {
//			*b = z;
//			*c = y;
//		}
//		else {
//			*b = y;
//			*c = z;
//		}}
//	else if (y > z) {
//		*a = z;
//		*b = x;
//		*c = y;
//	}
//	else {
//		*a = y;
//		*b = x;
//		*c = z;
//	}
//}
//int main(void)
//{
//	float a, b, c;
//	scanf_s("%f,%f,%f", &a, &b, &c);
//	paixu(&a, &b, &c);
//	printf("%f,%f,%f", c, b, a);
//
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//
//int srbg(char ch);
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//		if (isalpha(ch))
//			printf("\n是字母,在");
//		printf("%d\n",srbg(ch));
//	}
//	return 0;
//}
//
//int srbg(char ch) 
//{
//	int a;
//	if (isalpha(ch))
//	{
//		if (ch > 'A' && ch < 'Z') 
//			a = (int)ch - 64;
//		else
//			a = (int)ch - 96;
//	}
//	else
//		return -1;
//	return a;
//}

//#include<stdio.h>
//float js(float a, int b);
//int main(void)
//{
//	float a, d;
//	int b;
//	while (scanf_s("%f,%d", &a, &b) == 2) {
//
//		d = js(a, b);
//		printf("%.3f的%d次幂=%.5f", a, b, d);
//	}
//
//	return 0;
//}
//
//float js(float a, int b)
//{
//	float d = 1;
//	int f;
//
//	if (a == 0)
//	{
//		if (b == 0)
//			return (printf("0的0次幂未定义"));
//		else
//			return 0;
//	}
//	else if (b == 0)
//		return 1;
//	if (b > 0) {
//		for (f = 1; f <= b; f++)
//			d *= a;
//		return d;
//	}
//	else {
//		a = 1 / a;
//		b *= -1;
//		for (f = 1; f <= b; f++)
//			d *= a;
//		return d;
//	}
//}

//#include<stdio.h>
//float js(float a, int b);
//float cl(float a, int b);
//int main(void)
//{
//	float a, d;
//	int b;
//	while (scanf_s("%f,%d", &a, &b) == 2) {
//
//		d = js(a, b);
//		printf("%.3f的%d次幂=%.5f", a, b, d);
//	}
//
//	return 0;
//}
//
//float js(float a, int b)
//{
//	float d = 1;
//	int f;
//
//	if (a == 0)
//	{
//		if (b == 0)
//			return (printf("0的0次幂未定义"));
//		else
//			return 0;
//	}
//	else if (b == 0)
//		return 1;
//	if (b > 0) {
//		d = cl(a, b);
//		return d;
//	}
//	else
//		a = 1 / a;
//		b *= -1;
//		d = cl(a, b);
//		return d;
//}
//
//
//float cl(float a, int b)
//{
//	float d = 1;
//
//	if (1 <= b)
//		d =a* cl(a, b - 1);
//	
//	return d;
//}

//#include<stdio.h>
//void to_base_n(int a, int b)
//{
//	int s;
//
//	s = a % b;
//	if (a >= b)
//		to_base_n(a / b, b);
//	printf("%d", s);
//
//}
//int main(void)
//{
//	int a, b;
//
//	while (scanf_s("%d,%d", &a, &b) != 2)
//	{
//
//	}
//	to_base_n(a, b);
//
//	return 0;
//}

//#include<stdio.h>
//void fidonacci(int t)
//{
//	int a, b, c;
//	a = b = c = 1;
//	printf("%d\n%d\n", a, b);
//	while (c < t) {
//		c = a + b;
//		a = b;
//		b = c;
//		if (c < t)
//			printf("%d\n", c);
//	}
//}
//int main(void)
//{
//	int t;
//	scanf_s("%d", &t);
//	fidonacci(t);
//
//	return 0;
//}