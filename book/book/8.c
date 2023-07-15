#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main(void)
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


//			8.11

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a = 0;
//
//	while ((ch = getchar()) != EOF) {
//		if (ch != '\n')
//			a++;
//	}
//	printf("%d", a);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a;
//
//	while ((ch = getchar()) != EOF) {
//		if (ch != '\n')
//			putchar(ch);
//		else
//			printf("\\n%c",ch);
//		if (ch == '\t')
//			printf("\\t");
//		printf("%d", ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a, A;
//	a = A = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			a++;
//		else if (ch >= 'A' && ch <= 'Z')
//			A++;
//	}
//	printf("%d,%d", a, A);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//	float a, b;
//	a = b = 0;
//	int z, s;
//
//	while ((ch = getchar()) != EOF) {
//		if (isalpha(ch)) {
//			s = true;
//			b++;
//		}
//		if (isspace(ch)) {
//			if (s) {
//				a++;
//				s = false;
//			}}}
//
//	printf("%.2f", b / a);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a = rand();
//	int b, c, d;
//	c = 0;
//	d = 0;
//	printf("这个数‘%d’和你心里想的数什么关系\n", a);
//	printf("1)猜大了\t2)猜小了\n3）猜对了\n");
//	scanf("%d", &b);
//	while (b != 3)
//	{
//		if (b == 1) {
//			d = a;
//			a -= (a - c) / 2;
//			printf("那这个呢‘%d’\n", a);
//		}
//		else if (b == 2) {
//			c = a;
//			if (d > a)
//				a += (d - a) / 2;
//			else
//				a += a / 2;
//			printf("那这个呢‘%d’\n", a);
//		}
//		scanf("%d", &b);
//	}
//	return 0;
//}

//#include<stdio.h>
//char get(void)
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch != ' ')
//			break;
//		else
//			continue;
//	}
//	return ch;
//}
//int main(void)
//{
//	char a= get();
//	printf("%c", a);
//	return 0;
//}


//#include<stdio.h>
//#define JBGZ1 8.75
//#define JBGZ2 9.33
//#define JBGZ3 10.00
//#define JBGZ4 11.20
//#define SLD1 300
//#define SLD2 450
//#define SL1 0.15
//#define SL2 0.2
//#define SL3 0.25
//#define SJ1 (SLD1*SL1)
//#define SJ2 (SL1+(SLD2-SLD1)*SL2)
//
//int main(void)
//{
//	char a;
//	float sj, qian,js,jbgz;
//
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	printf("A) $8.75/hr\tB) $9.33/hr\n");
//	printf("C) $10.00/hr\tD) $11.20hr\n");
//	printf("Q) quit\n");
//
//	while ((a = getchar())!='Q') 
//	{
//		switch (a)
//		{
//		case 'a':
//		case 'A':
//			jbgz = JBGZ1;
//			break;
//		case 'b':
//		case 'B':
//			jbgz = JBGZ2;
//			break;
//		case 'c':
//		case 'C':
//			jbgz = JBGZ3;
//			break;
//		case 'd':
//		case 'D':
//			jbgz = JBGZ4;
//			break;
//		case '\n':
//			break;
//		default:
//			printf("输入正确的字母:");
//
//		}
//		if (a < 'a' || a>'d')
//			continue;
//
//		printf("\n输入工作时长:");
//		scanf("%f", &sj);
//
//		if (sj > 40)
//			sj = 40 + (sj - 40)*1.5;
//
//		qian = sj * jbgz;
//		if (qian <= SLD1)
//			js = qian * SL1;
//		else if (qian <= SLD2)
//			js = SJ1 + (qian - SLD1)*SL2;
//		else if (qian > SLD2)
//			js = SJ2 + (qian - SLD2)*SL3;
//		printf("\n工资总额%.2f,税金%.2f,净收入%.2f\n", qian, js, qian - js);
//		return 0;
//	}
//}

//#include<stdio.h>
//float yi(void);
//float er(void);
//
//int main(void)
//{
//	float a, b, c;
//	char ch;
//	
//
//	for (; printf("Enter the opreation of your choice:\n"),
//		printf("a.add\t	s.subtract\nm.mulriply\td.divide\nq.quit\n"),
//		(ch = getchar()) != 'q';) {
//		
//
//		printf("Enter first number:");
//		a = yi();
//		printf("Enter second number:");
//		b = er();
//	
//		switch (ch)
//		{
//		case'a':
//			c = a + b;
//			printf("%1.1f+%1.1f=%1.1f\n", a, b, c);
//			break;
//		case's':
//			c = a - b;
//			printf("%1.1f-%1.1f=%1.1f\n", a, b, c);
//			break;
//		case'm':
//			c = a * b;
//			printf("%1.1f*%1.1f=%1.1f\n", a, b, c);
//			break;
//		case'd':
//			while (b == 0) {
//				printf("Enter a number other than 0:");
//				b = er();
//			}
//			c = a / b;
//			printf("%1.1f/%1.1f=%1.1f\n", a, b, c);
//		}
//		while (ch = getchar() != '\n')
//			continue;
//	}
//	printf("Bye.");
//
//	return 0;
//}
//
//
//float yi(void)
//{
//	float a;
//	char ch;
//	
//	while (scanf("%f", &a) != 1) 
//	{
//			while ((ch = getchar()) != '\n')
//				putchar(ch);
//			printf(" is not an number.\n");
//			printf("Please enter a number,such as 2.5,-1.78E8,or 3:");
//	}
//	return a;
//}
//
//float er(void)
//{
//	float b;
//	char ch;
//	
//	while (scanf("%f", &b) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an number.\n");
//		printf("Please enter a number,such as 2.5,-1.78E8,or 3:");
//	}
//	return b;
//}