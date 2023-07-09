#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main(void)
//{
//	const int ASD = 10;
//	for (int a = 1; a <= ASD; a++)
//		printf("%d\n",a);
//
//	return 0;
//}


//int main(void)
//{
//	int a, b;
//	b = 5;
//
//	do {
//		printf("5\n");
//		scanf("%d", &a);
//	} while (a != b);
//
//	return 0;
//}


//#define A 6
//#define B 10
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < A; row++) 
//	{
//		for (ch = 'A'; ch < ('A' + B); ch++)
//			printf("%c", ch);
//
//		printf("\n");
//	}
//
//	return 0;
//}


/*
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores:\n",SIZE);

	for (index=0;index < SIZE;index++)
		scanf("%d", &score[index]);
	for (index = 0, printf("The scores read in are as follows:\n"
	); index < SIZE; index++) {
		printf("%5d", score[index]);
		sum += score[index];
	}
	average = (float)sum / SIZE;

	printf("\nSum of scores = %d,average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	return 0;
}
*/

/*
double power(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}
int main(void)
{
	float x, xpow;
	int exp;
	while (scanf("%f %d", &x, &exp) == 2) {
		xpow = power(x, exp);
		printf("%.3g  %d  %.5g", x, exp, xpow);
	}

	return 0;
}*/


//		6.16
/*
int main(void)
{
	char a[26],c;
	int b;
	for (b = 0, c = 'a'; b < 26; b++, c++)
		a[b] = c;
	for (b = 0; b < 26; b++)
		printf("%c  ", a[b]);
	return 0;
}
*/

/*
int main(void)
{
	int a,b;
	b = 1;
	for (a = 1; a < 6; a++) {
		for (; b > 0; b--)
			printf("$");
		printf("\n");
		b = a + 1;
	}
	return 0;
}
*/

/*
int main(void)
{
	int a, b,c;
	char t[6];
	b = 1;
	for (a = 1; a < 7; a++) {

		for (c=0; b>0; b--,c++) {
			t[c] = 70-c;
			printf("%c", t[c]);
		}
		printf("\n");
		b = a + 1;
	}
	return 0;
}
*/

/*
int main(void)
{
	char t[21];
	int a, b, c;
	b = 1;
	c = 0;
	for (a = 1; a < 7; a++) {

		for (; b > 0; b--,c++) {
			t[c] = 65 + c;
			printf("%c", t[c]);
		}

		printf("\n");
		b = a + 1;
	}

	return 0;
}
*/

/*
void KG(int k)
{
	int s = 4 - k;
	for (; s > 0; s--)
		printf(" ");
}
int main(void)
{
	char q[4],z;
	int a, b, c;
	b = 4;
	printf("输入一个大写的字母");
	scanf("%c", &z);
	for (a = 0; a < 5; a++) {
		KG(a);

		for (c=0; b > 4; b--,c++) {
			q[c] = z + c - 4;
			printf("%c", q[c]);
		}

		printf("%c", z + a - 4);

		b = a + 4;
		for (c = 0; b > 4; b--, c++) {
			q[c] = z + b - 9;
			printf("%c", q[c]);
		}

		b = a + 5;
		KG(a);
		printf("\n");
	}
	return 0;
}
*/

/*
int main(void)
{
	int a, b, c, d;
	printf("输入表格的上下限");
	scanf("%d %d", &a, &b);

	for (printf("数     平方     立方\n"); a <= b; a++) {
		c = a * a;
		d = a * a*a;
		printf("%1d%8d%10d\n", a, c, d);
	}
	return 0;
}*/

/*
int main(void)
{
	char t[50];
	int a;
	scanf("%s", t);
	a = strlen(t);

	while (a >= 0) {
		printf("%c", t[a]);
		a--;
	}
	return 0;
}*/

/*
int main(void)
{
	float a, b, c;
	printf("输入两个浮点数");
	while (scanf("%f%f", &a, &b) == 2) {
		c = (a - b) / (a*b);
		printf("%f\n", c);
	}
	return 0;
}
*/

/*
float JS(float a, float b) {
	float c;
	c = (a - b) / (a*b);
	return c;
}
int main(void)
{
	float a, b, c;
	
	printf("输入两个浮点数");
	while (scanf("%f%f", &a, &b)==2){
		c = JS(a, b);
		printf("%f\n输入两个浮点数（输入字母结束循环）", c);
	}
	return 0;
}
*/

/*
int main(void)
{
	int a, b, c, d;
	printf("Enter lower and upper inreger limits:");
	
	for (;scanf("%d%d", &a, &b),a < b;) {
		c = 0;
		d = a;
		for (; a < b + 1; a++)
			c += a * a;
		printf("The sums of the squares from %d to %d is %d\n", d*d, b*b, c);
		printf("Enter next set of limits:");
	}
	printf("Done");
	return 0;
}
*/

/*
int main(void)
{
	int t[8], a, b;

	for(b=0;b<8;b++)
		scanf("%d",&t[b]);
	for (a = 7; a >=0; a--)
		printf("\n%d\n", t[a]);

	return 0;
}
*/

/*
double QJ(int a) {
	double b,c = 0;

	for (b = 1; b <= a; b++)
		c += 1 / b;
	
	return c;
}
double JJ(int a) {
	double b, c, d;
	c = d = 0;

	for (b = 0; b < a; b += 2)
		c += 1 / (b + 1);

	for (b = 1; b < a; b += 2)
		d += -(1 / (b + 1));
	return c + d;
}
int main(void)
{
	int a;
	scanf("%d", &a);

	printf("%e\n",QJ(a));
	printf("%e",JJ(a));

	return 0;
}
*/

/*
int main(void)
{
	int t[8], a, b;
	b = 1;
	for (a = 0; a < 8; a++) {
		b *= 2;
		t[a] = b;
	}
	a = 0;
	do{
		printf("%d\n", t[a]);
		a++;
	} while (a<8);
	return 0;
}
*/

/*
int main(void)
{
	float sr[8], js[8],c;
	int a;
	c = 0;
	for ( a = 0; a < 8; a++){
		scanf("%f", &sr[a]);
			c += sr[a];
			js[a] = c;
	}
	for (a = 0; a < 8; a++)
		printf("%.3f   ", sr[a]);
	printf("\n");
	for (a = 0; a < 8; a++)
		printf("%.3f   ", js[a]);

	return 0;
}
*/

/*
int main(void)
{
	int a, b;
	char t[255];
	scanf("%s", t);
	a = strlen(t) - 1;

	for (; a >= 0; a--)
		printf("%c", t[a]);

	return 0;
}
*/

/*
int main(void)
{
	float a, b;
	a = b = 100;
	while (b <= a) {
		a = a + 10;
		b += b * 0.05;
	}
	int c = (a - 100) / 10;
	printf("需要%d年Deirdre(%.2f元）会超过Daphne（%.2f元)", c, b, a);
	return 0;
}
*/

/*
int main(void)
{
	float q = 1000000;
	int a = 0;
	for (; q > 100000; a++)
		q += q * 0.08 - 100000;

	printf("%d年后还剩%.2f元", a,q);
	return 0;
}
*/

/*
int main(void) 
{
	int a, b,t[10];
	for (a = 1, b = 5; b < 150;a++) {
		b = (b - a) * 2;
		t[a] = b;
		printf("第%d周时有%d个朋友\n", a, t[a]);
	}
	return 0;
}
*/