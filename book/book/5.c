#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("Shoe size(men's��	foot length\n");
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
//	printf("������ӣ�");
//	scanf("%d", &fz);
//	while (fz > 0)
//	{
//		s = fz / XS;
//		f = fz % XS;
//		printf("%d������%dСʱ%d����\n", fz, s, f);
//		printf("������ӣ�");
//		scanf("%d", &fz);
//	}
//	return 0;
//}

//int main(void)
//{
//	int a,b;
//	printf("����һ������");
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
//	printf("����������");
//	scanf("%d", &ts);
//	while (ts > 0) {
//		z = ts / YZTS;
//		t = ts % YZTS;
//		printf("%d����%d��%d��\n", ts, z, t);
//		printf("����������");
//		scanf("%d", &ts);
//	}
//	return 0;
//}

//#define YCHS 0.393
//int main(void)
//{
//	float sg, yc;
//	printf("�������:����");
//	scanf("%f",&sg);
//	while(sg > 0) {
//		yc = sg * YCHS;
//		printf("%.2f cm=%f.2Ӣ��", sg, yc);
//		printf("�������:����(<=0ʱ��������");
//		scanf("%f", &sg);
//	}
//	return 0;
//}

//int main(void)
//{
//	int ts, qian, zqs;
//	printf("����������");
//	scanf("%d", &ts);
//	qian = zqs = 0;
//	while (qian++ < ts) 
//		zqs = zqs + qian;
//	printf("��Ǯ��=%d\n", zqs);
//	return 0;
//}

//int main(void)
//{
//	int ts, qian, zqs;
//	printf("����������");
//	scanf("%d", &ts);
//	qian = zqs = 0;
//	while (qian++ < ts)
//		zqs = zqs + (qian*qian);
//	printf("��Ǯ��=%d\n", zqs);
//	return 0;
//}

//void lfz(double a)
//{
//	printf("%f", a*a*a);
//}
//int main(void)
//{
//	float b;
//	printf("����һ��������");
//	scanf("%f",&b);
//	lfz(b);
//	return 0;
//}

//int main(void)
//{
//	int a, b,c;
//	printf("������������");
//	scanf("%d %d", &a, &b);
//	while (b > 0) {
//		c = b % a;
//		printf("%d\%%%d=%d", b, a, c);
//		printf("�����һ������<=0ʱ���������");
//		scanf("%d", &b);
//	}
//	return 0;
//}

//void Temperatures(double F)
//{
//	double C, K;
//	C = 5.0 / 9.0*(F - 32.0);
//	K = C + 273.16;
//	printf("%f��F=%f��C=%f��K\n", F, C, K);
//}
//int main(void)
//{
//	float wd;
//	int a;
//
//	printf("�����¶�      ��F\b\b\b\b\b\b\b\b\b");
//	a=scanf("%f", &wd);
//
//	while (a==1){
//		Temperatures(wd);
//
//		printf("�����¶�      ��F\b\b\b\b\b\b\b\b\b");
//		scanf("%f", &wd);
//	}
//	return 0;
//}