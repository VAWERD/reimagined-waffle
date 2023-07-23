#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main(void)
//{
//	const int days[] = { 1,2,3,4,5,6 };
//	int in;
//	for (in = 0; in < sizeof days / sizeof days[0]; in++)
//		printf("%2d   %2d\n", in + 1, days[in]);
//
//	return 0;
//}


//			10.13

//#include<stdio.h>
//#define MONTHS 12
//#define YEARS 5
//int main(void)
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	int year, month;
//	float subtot, total;
//
//	printf(" YEAR	RAINFALL  (inches)\n");
//	for (year = 0, total = 0; year < YEARS; year++) {
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//			subtot += *(*(rain + year) + month);
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf(" Jan Fed Mar Apr May Jun Jul Aug Sep Oct ");
//	printf("Nov Dec\n");
//	for (month = 0; month < MONTHS; month++) {
//		for (year = 0, subtot = 0; year < YEARS; year++)
//			subtot += *(*(rain + year) + month);
//		printf("%4.1f", subtot / YEARS);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//void copy_arr(double target1[], double source[], int n);
//void copy_ptr(double *targer2, double *source, int n);
//void copy_ptrs(double *targer3, double *source, int *n);
//
//int main(void)
//{
//	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5], target2[5], target3[5];
//
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//	copy_ptrs(target3, source, source + 5);
//	
//	return 0;
//}
//
//void copy_arr(double targer1[], double source[], int n)
//{
//	int a;
//	for (a = 0; a < n; a++) {
//		targer1[a] = source[a];
//		printf("%5.1f", targer1[a]);
//	}
//	printf("\n");
//}
//
//void copy_ptr(double *targer2, double *source, int n)
//{
//	int a;
//	for (a = 0; a < n; a++,targer2++,source++) {
//		*targer2 = *source;
//		printf("%5.1f", *targer2);
//	}
//	printf("\n");
//}
//
//void copy_ptrs(double *targer3, double *source,int *n)
//{
//	for (; n != source; targer3++, source++) {
//		*targer3 = *source;
//		printf("%5.1f", *targer3);
//	}
//	printf("\n");
//}

//#include<stdio.h>
//int max(int ch[], int n);
//int main(void)
//{
//	int a;
//	int ch[7] = { 51,65,31,14,348,130,134 };
//	a = max(ch, 7);
//	printf("%d", a);
//
//	return 0;
//}
//
//int max(int ch[], int n)
//{
//	int a = ch[0];
//	int b;
//
//	for (b = 0; b < n; b++) {
//		if (ch[b] >= a)
//			a = ch[b];
//	}
//	return a;
//}

//#include<stdio.h>
//int max(int ch[], int n);
//int main(void)
//{
//	int a;
//	int ch[7] = { 51,65,31,14,348,130,134 };
//	a = max(ch, 7);
//	printf("%d", a);
//
//	return 0;
//}
//
//int max(int ch[], int n)
//{
//	int a = ch[0];
//	int b, c;
//
//	for (b = 0; b < n; b++) {
//		if (ch[b] >= a) {
//			a = ch[b];
//			c = b;
//		}
//	}
//	return c;
//}

//#include<stdio.h>
//double max(double ch[], int n);
//int main(void)
//{
//	double a;
//	double ch[7] = { 51,65,31,14,348,130,134 };
//	a = max(ch, 7);
//	printf("%f", a);
//
//	return 0;
//}
//
//double max(double ch[], int n)
//{
//	double a, b;
//	int c;
//	a = b = ch[0];
//	for (c = 0; c < n; c++) {
//		if (ch[c] > a)
//			a = ch[c];
//		else if (ch[c] < b)
//			b = ch[c];
//	}
//	return a - b;
//}

//#include<stdio.h>
//void asd(double ch[], int n);
//int main(void)
//{
//	double ch[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	asd(ch, 5);
//	return 0;
//}
//
//void asd(double ch[], int n)
//{
//	int a = 1;
//	if (a < n)
//	asd(ch, n-1);
//	printf("%.1f\n", ch[5-n]);
//}

//#include<stdio.h>
//void abc(double asd[][5], double ch[][5], int n);
//int main(void)
//{
//	double ch[2][5] = 
//	{ 
//		{ 1.1,2.2,3.3,4.4,5.5 },
//		{ 1.1,2.2,3.3,4.4,5.5 } 
//	};
//	double asd[2][5];
//	abc(asd, ch, 2);
//
//	return 0;
//}
//
//void abc(double asd[][5], double ch[][5], int n)
//{
//	int a, b;
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < 5; b++) {
//			asd[a][b] = ch[a][b];
//			printf("%.1f	%.1f\n", asd[a][b], ch[a][b]);
//		}
//	}
//}

//#include<stdio.h>
//void asd(double ch1[], double ch[], int n)
//{
//	int a;
//	for (a = 0; a < n; a++) {
//		ch1[a] = ch[a];
//		printf("%5.1f", ch1[a]);
//	}
//	printf("\n");
//}
//
//int main(void)
//{
//	double ch[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
//	double ch1[3];
//	asd(ch1, ch + 2, 3);
//
//	return 0;
//}

//#include<stdio.h>
//void fuzhi(int n, double ch[][5],double ch1[][5]);
//void daying(int n, double ch[][5],double ch1[][5]);
//#define ZXC 3
//int main(void)
//{
//	double ch[ZXC][5]=
//	{
//		{1.1,1.2,1.3,1.4,1.5},
//		{2.1,2.2,2.3,2.4,2.5},
//		{3.1,3.2,3.3,3.4,3.5}
//	};
//	double ch1[ZXC][5];
//	fuzhi(ZXC, ch, ch1);
//	daying(ZXC, ch, ch1);
//
//	return 0;
//}
//
//void fuzhi(int n, double ch[][5], double ch1[][5])
//{
//	int a, b;
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < 5; b++)
//			ch1[a][b] = ch[a][b];
//	}
//}
//
//void daying(int n, double ch[][5], double ch1[][5])
//{
//	int a, b;
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < 5; b++)
//			printf("%.1f	%.1f\n", ch[a][b], ch1[a][b]);
//	}
//}

//#include<stdio.h>
//void asdf(int ch[], int ch1[], int ch2[], int n);
//int main(void)
//{
//	int ch[4] = { 2,4,5,8, };
//	int ch1[4] = { 1,0,4,6 };
//	int ch2[4];
//	asdf(ch, ch1, ch2, 4);
//	int a;
//	for (a = 0; a < 4; a++)
//		printf("%d	", ch2[a]);
//
//	return 0;
//}
//
//void asdf(int ch[], int ch1[], int ch2[], int n)
//{
//	int a;
//	for (a = 0; a < n; a++)
//		ch2[a] = ch[a] + ch1[a];
//}

//#include<stdio.h>
//void xs(int ch[][5], int n);
//void fb(int ch[][5], int n);
//int main(void)
//{
//	int ch[3][5] =
//	{
//		{11,12,13,14,15},
//		{21,22,23,24,25},
//		{31,32,33,34,35}
//	};
//	xs(ch, 3);
//	fb(ch, 3);
//
//	return 0;
//}
//
//void xs(int ch[][5], int n)
//{
//	int a, b;
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < 5; b++)
//			printf("%d	", ch[a][b]);
//	}
//	printf("\n");
//}
//
//void fb(int ch[][5], int n)
//{
//	int a, b;
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < 5; b++)
//			printf("%d	", ch[a][b] * 2);
//	}
//}

//#include<stdio.h>
//#define YUE 12
//#define NIAN 5
//float nzh(const float rain[][YUE], int n);
//void yzh(const float rain[][YUE], int m);
//int main(void)
//{
//	const float rain[NIAN][YUE]=
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	float z;
//	z = nzh(rain, NIAN);
//	printf("%.1f年平均\n", z/NIAN);
//	yzh(rain, NIAN);
//
//	return 0;
//}
//
//float nzh(const float rain[][YUE], int n)
//{
//	int a, b;
//	float s ,z;
//
//	for (a = 0,z = 0; a < n; a++) {
//		for (b = 0,s=0; b < YUE; b++) 
//			s += rain[a][b];
//		printf("%5d %15.1f\n", 2010 + a, s);
//		z += s;
//	}
//	return z;
//}
//
//void yzh(const float rain[][YUE], int m)
//{
//	int a, b;
//	float s;
//	for (a = 0; a < YUE; a++) {
//		for (b = 0 , s = 0; b < m; b++)
//			s += rain[b][a];
//		printf("%4.1f\n", s / NIAN);
//	}
//}

/*#include<stdio.h>
float pjz(float ps[][5], int n,float *a,float *b,float *c);
float max(float ps[][5], int n);
int main(void)
{
	float p1[5], p2[5], p3[5];
	float ps[3][5];
	int a, b;
	float z, x, c, e, t;
	z = x = c = e = t = 0;

	printf("第一组");
	for (a = 0; a < 5; a++)
		scanf("%f", &p1[a]);

	printf("第二组");
	for (a = 0;  a < 5; a++)
		scanf("%f", &p2[a]);

	printf("第三组");
	for (a = 0;  a < 5; a++)
		scanf("%f", &p3[a]);

	for (a = 0; a < 3; a++)
	{
		if (a == 0) {
			for (b = 0; b < 5; b++)
				ps[a][b] = p1[b];
		}
		else if (a == 1) {
			for (b = 0; b < 5; b++)
				ps[a][b] = p2[b];
		}
		else {
			for (b = 0; b < 5; b++)
				ps[a][b] = p3[b];
		}
	}
	e = pjz(ps, 3, &z, &x, &c);
	t = max(ps, 3);
	printf("%.2f	%.2f	%.2f	%.2f\n", z, x, c, e);
	printf("%f",t);

	return 0;
}

float pjz(float ps[][5], int n,float *a, float *b, float *c)
{
	float z, x, v, e;
	int q, w;
	z = x = v = e = 0;

	for (q = 0; q < 5; q++) {
		z += ps[0][q];
		x += ps[1][q];
		v += ps[2][q];
	}
	for (w = 0; w < n; w++)
		for (q = 0; q < 5; q++)
			e += ps[w][q];

	*a = z / 5;
	*b = x / 5;
	*c = v / 5;

	return e/15;
}

float max(float ps[][5], int n)
{
	int a, b;
	float t = ps[0][0];

	for(a=0;a<n;a++)
		for (b = 0; b < 5; b++) {
			if (t < ps[a][b])
				t = ps[a][b];
		}
	return t;
}*/

