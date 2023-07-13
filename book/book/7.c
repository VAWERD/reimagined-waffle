#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//#define SPACE ' '
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n') {
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}


//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '\n') {
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//#define YD1 360.0
//#define YD2 468.0
//#define YD3 720.0
//#define DJ1 0.13230
//#define DJ2 0.15040
//#define DJ3 0.30025
//#define DJ4 0.34025
//#define FY1 (YD1*DJ1)
//#define FY2 (FY1+(DJ2*(YD2-YD1)))
//#define FY3 (FY1+FY2+(DJ3*(YD3-YD2)))
//int main(void)
//{
//	float yd, df;
//
//	scanf("%f", &yd);
//	if (yd <= YD1)
//		df = yd * DJ1;
//	else if (yd <= YD2)
//		df = FY1 + (DJ2*(yd - YD1));
//	else if (yd <= YD3)
//		df = FY2 + (DJ3*(yd - YD2));
//	else
//		df = FY3 + (DJ4*(yd - YD3));
//	printf("%.1f,%1.2f", yd, df);
//	return 0;
//}


//#include<stdio.h>
//#include<stdbool.h>
//int main(void)
//{
//	unsigned long num, div;
//	bool isprime;
//
//	while (scanf("%lu", &num) == 1) {
//		for (div = 2, isprime = true; (div*div) <= num; div++) {
//			if(num%div==0){
//			if ((div*div) != num)		
//				printf("%lu,  %lu,  %lu\n", num, div, num / div);
//
//			else
//				printf("%lu,  %lu\n", num, div);
//
//			isprime = false;
//			}
//		}
//		if (isprime)
//			printf("%lu\n.", num);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '#') {
//		switch (ch) {
//		case '\n':
//			break;
//		case'c':
//		case'b':
//			printf("Step 1\n");
//			break;
//		case'h':
//			printf("Step 1\nStep 3\n");
//			break;
//		default:
//			printf("Step 1\nStep 2\nStep 3\n");
//		}
//	}
//	printf("Done\n");
//	return 0;
//}

//		7.12

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int kg, hh, qt;
//	kg = hh = qt = 0;
//
//
//	while ((ch=getchar()) != '#') {
//		if (isalnum(ch))
//			continue;
//		else if (ch == ' ')
//			kg += 1;
//		else if (ch == '\n')
//			hh += 1;
//		else
//			qt += 1;
//	}
//	printf("空格%d，换行%d，其他%d\n", kg, hh, qt);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a = 0;
//	while ((ch = getchar()) != '#') {
//		a++;
//		if (a == 8)
//			printf("\n");
//		else
//			printf("%d", ch);
//	}
//	return 0;
//}

//#include<stdio.h>	
//int main(void)
//{
//	int sz, js, es;
//	js = es = 0;
//	float a, b, ezs, jzs;
//	ezs = jzs = 0;
//	while (scanf("%d",&sz)) {
//		if (sz == 0)
//			break;
//		if ((sz % 2) == 0) {
//			es++;
//			ezs += sz;
//		}
//		else {
//			js++;
//			jzs += sz;
//		}
//	}
//	a = ezs / (float)es;
//	b = jzs / (float)js;
//	printf("偶数个数%d，平均值%.3f\n奇数个数%d，平均值%.3f", es, a, js, b);
//	return 0;
//}

//#include<stdio.h>
//#include<iso646.h>
//int main(void)
//{
//	char ch;
//	int a = 0;
//	while ((ch = getchar()) != '#') {
//		if (ch=='.'||ch=='!'){
//			a++;
//			if (ch == '.')
//				ch = '!';
//			else {
//				ch = '!';
//				printf("%c", ch);
//			}
//		}
//		printf("%c", ch);
//	}
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a = 0;
//	while ((ch = getchar()) != '#') {
//		switch (ch)
//		{
//		case '.':
//			ch = '!';
//			a++;
//			break;
//		case '!':
//			ch = '!';
//				a++;
//			printf("%c", ch);
//			break;
//		case'\n':
//			printf("\n%d", a);
//			break;
//		}
//		printf("%c", ch);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int a, dz, js;
//	for (a=0,js=0; (ch = getchar()) != '#';a++) {
//		if (ch == 'e')
//			dz = a;
//		else if (ch == 'i'&& a-dz == 1)
//			js++;
//	}
//	printf("%d", js);
//	return 0;
//}

//#include<stdio.h>
//#define JBGZ 1000.0
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
//	float sj, qian,js;
//	scanf("%f", &sj);
//
//	if (sj > 40)
//		sj = 40 + (sj - 40)*1.5;
//
//	qian = sj * JBGZ;
//	if (qian <= SLD1)
//		js = qian * SL1;
//	else if (qian <= SLD2)
//		js = SJ1 + (qian - SLD1)*SL2;
//	else if (qian > SLD2)
//		js = SJ2 + (qian - SLD2)*SL3;
//	printf("工资总额%.2f,税金%.2f,净收入%.2f", qian, js, qian - js);
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
//	int a;
//	float sj, qian,js,jbgz;
//
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	printf("1) $8.75/hr\t2) $9.33/hr\n");
//	printf("3) $10.00/hr\t4) $11.20hr\n");
//	printf("5) quit\n");
//
//	while (scanf("%d", &a), a != 5) {
//		switch (a)
//		{
//		case 1:
//			jbgz = JBGZ1;
//			break;
//		case 2:
//			jbgz = JBGZ2;
//			break;
//		case 3:
//			jbgz = JBGZ3;
//			break;
//		case 4:
//			jbgz = JBGZ4;
//			break;
//		default:
//			printf("输入正确的数字:");
//		}
//		if (a < 1 || a>4)
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
//		printf("\n工资总额%.2f,税金%.2f,净收入%.2f", qian, js, qian - js);
//		return 0;
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	unsigned int sr;
//	int a;
//
//	while (scanf("%ud", &sr) == 1) {
//
//		for (a = 1; a <= sr; a+=2) {
//			if (a < 10) {
//				if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
//					printf("%d\n", a);
//			}
//			else if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
//				printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#define DW1 17850.00
//#define DW2 23900.00
//#define DW3 29750.00
//#define DW4 14875.00
//#define WCC 0.15
//#define CC 0.28
//
//int main(void)
//{
//	int lb;
//	float gz, js;
//
//	while (printf("输入你的工资 （输入\"#\"结束）:"),scanf("%f", &gz)==1) {
//
//		printf("选择你的交税类型\n");
//		printf("1) 单身	\t2) 户主\n");
//		printf("3) 已婚，共有\t4)已婚，离异\n");
//
//		for (;scanf("%d", &lb)!=5;) {
//			switch (lb)
//			{
//			case 1:
//				if (gz > DW1)
//					js = WCC * DW1 + CC * (gz - DW1);
//				else
//					js = WCC * gz;
//				break;
//
//			case 2:
//				if (gz > DW2)
//					js = WCC * DW2 + CC * (gz - DW2);
//				else
//					js = WCC * gz;
//				break;
//
//			case 3:
//				if (gz > DW3)
//					js = WCC * DW3 + CC * (gz - DW3);
//				else
//					js = WCC * gz;
//				break;
//
//			case 4:
//				if (gz > DW4)
//					js = WCC * DW4 + CC * (gz - DW4);
//				else
//					js = WCC * gz;
//				break;
//			default:
//				printf("请输入正确的数字");
//			}
//			printf("你一共要交%.2f元的税金\n", js);
//			break;
//		}}
//
//	return 0;
//}

//#include<stdio.h>
//#define A 2.05
//#define B 1.15
//#define C 1.09
//#define ZL1 5
//#define ZL2 20
//#define YF1 6.5
//#define YF2 14
//#define YF3 0.5
//
//int main(void)
//{
//	float a, b, c, az, bz, cz;
//	float fy, yf, zfy, zk, zl;
//	char ch;
//	a = b = c = zk = 0;
//
//	printf("请选择你需要的蔬菜\n");
//	printf("a) 洋蓟\tb)	甜菜\n");
//	printf("c) 胡萝卜\tq)退出订购\n");
//
//	while ((ch = getchar()) != 'q') {
//		switch(ch)
//		{
//		case'a':
//			printf("输入洋蓟的重量");
//			scanf("%f", &az);
//			a += az;
//			break;
//		case 'b':
//			printf("输入甜菜的重量");
//			scanf("%f", &bz);
//			b += bz;
//			break;
//		case 'c':
//			printf("输入胡萝卜的重量");
//			scanf("%f", &cz);
//			c += cz;
//		}}
//	zl = a + b + c;
//	fy = a * A + b * B + c * C;
//
//	if (fy > 100)
//		zk = fy * 0.05;
//
//	if (zl <= ZL1)
//		yf = YF1;
//	else if (zl <= ZL2)
//		yf = YF2;
//	else
//		yf = YF2 + YF3 * (zl - ZL2);
//	zfy = fy + yf - zk;
//
//	printf("洋蓟:%.2f元，订购了%.2f榜，共%.2f元.\n", A, a, A*a);
//	printf("甜菜:%.2f元，订购了%.2f榜，共%.2f元.\n", B, b, B*b);
//	printf("胡萝卜:%.2f元，订购了%.2f榜，共%.2f元.\n", C, c, C*c);
//	printf("订购蔬菜共花了%.2f元", fy);
//	if (zk > 0)
//		printf("折扣了%.2f元\n", zk);
//	else
//		printf("没有折扣\n");
//	printf("运费和包装费需要%.2f元\n", yf);
//	printf("所有东西共需要%.2f元", zfy);
//
//	return 0;
//}