#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("Shoe size(men's）	foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5)
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe++;
//	}
//	printf("IF thr shoe fits,wear it.\n");
//
//	return 0;
//}


//#define qipan 64
//int main(void)
//{
//	int gz = 1;
//	double gl, zs;
//	zs = gl = 1;
//	while (gz < qipan)
//	{
//		gz++;
//		gl = 2 * gl;
//		zs = zs + gl;
//		printf("%2d  %12e %12e\n", gz, gl, zs);
//	}
//	return 0;
//}


//int main(void)
//{
//	printf("5/4= %d\n", 5 / 4);
//	printf("6/2= %d\n", 6 / 2);
//	printf("7/4= %d\n", 7 / 4);
//	printf("7./4.= %1.2f\n", 7. / 4.);
//	printf("7./4= %1.2f", 7. / 4);
//	return 0;
//}


//#define A "%s! C is cool!\n"
//int main(void)
//{
//	printf(A, A);
//	return 0;
//}


//#define A 72
//int main(void)
//{
//	int n = 64;
//	while (++n < A)
//		printf("%c", n);
//	return 0;
//}


//		5.11

//#define XS 60
//int main(void)
//{
//	int fz,s,f;
//	printf("输入分钟：");
//	scanf("%d", &fz);
//	while (fz > 0)
//	{
//		s = fz / XS;
//		f = fz % XS;
//		printf("%d分钟有%d小时%d分钟\n", fz, s, f);
//		printf("输入分钟：");
//		scanf("%d", &fz);
//	}
//	return 0;
//}

//int main(void)
//{
//	int a,b;
//	printf("输入一个整数");
//	scanf("%d", &a);
//	b = a + 11;
//	while (a <b) {
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//#define YZTS 7
//int main(void)
//{
//	int ts, z, t;
//	printf("输入天数：");
//	scanf("%d", &ts);
//	while (ts > 0) {
//		z = ts / YZTS;
//		t = ts % YZTS;
//		printf("%d天有%d周%d天\n", ts, z, t);
//		printf("输入天数：");
//		scanf("%d", &ts);
//	}
//	return 0;
//}

//#define YCHS 0.393
//int main(void)
//{
//	float sg, yc;
//	printf("输入身高:厘米");
//	scanf("%f",&sg);
//	while(sg > 0) {
//		yc = sg * YCHS;
//		printf("%.2f cm=%f.2英寸", sg, yc);
//		printf("输入身高:厘米(<=0时结束程序）");
//		scanf("%f", &sg);
//	}
//	return 0;
//}

//int main(void)
//{
//	int ts, qian, zqs;
//	printf("输入天数：");
//	scanf("%d", &ts);
//	qian = zqs = 0;
//	while (qian++ < ts) 
//		zqs = zqs + qian;
//	printf("总钱数=%d\n", zqs);
//	return 0;
//}

//int main(void)
//{
//	int ts, qian, zqs;
//	printf("输入天数：");
//	scanf("%d", &ts);
//	qian = zqs = 0;
//	while (qian++ < ts)
//		zqs = zqs + (qian*qian);
//	printf("总钱数=%d\n", zqs);
//	return 0;
//}

//void lfz(double a)
//{
//	printf("%f", a*a*a);
//}
//int main(void)
//{
//	float b;
//	printf("输入一个浮点数");
//	scanf("%f",&b);
//	lfz(b);
//	return 0;
//}

//int main(void)
//{
//	int a, b,c;
//	printf("输入两个整数");
//	scanf("%d %d", &a, &b);
//	while (b > 0) {
//		c = b % a;
//		printf("%d\%%%d=%d", b, a, c);
//		printf("输入第一个数（<=0时程序结束）");
//		scanf("%d", &b);
//	}
//	return 0;
//}

//void Temperatures(double F)
//{
//	double C, K;
//	C = 5.0 / 9.0*(F - 32.0);
//	K = C + 273.16;
//	printf("%f°F=%f°C=%f°K\n", F, C, K);
//}
//int main(void)
//{
//	float wd;
//	int a;
//
//	printf("输入温度      °F\b\b\b\b\b\b\b\b\b");
//	a=scanf("%f", &wd);
//
//	while (a==1){
//		Temperatures(wd);
//
//		printf("输入温度      °F\b\b\b\b\b\b\b\b\b");
//		scanf("%f", &wd);
//	}
//	return 0;
//}