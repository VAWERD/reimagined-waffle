#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello,%s. %s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",
//		strlen(name), sizeof name);
//	printf("The phrase of praise has %zd letters",
//		strlen(PRAISE));
//	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
//
//	return 0;
//}

//#define PI 3.14159
//int main(void)
//{
//	float area, circum, radius;
//
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius*radius;
//	circum = 2.0*radius;
//	printf("Yourbasic pizza parameters are as follows:\n");
//	printf("circumference = %.2f, area = %.2f\n", circum, area);
//
//	return 0;
//}

//int main(void)
//{
//	const double RENT = 3852.99;
//
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	return 0;
//}

//#define NAME "book"
//int main(void)
//{
//	float as = 89.98;
//	printf("The %s family Just may be $%06.2f dollars richer!",
//		NAME, as);
//	return 0;
//}


//		4.8
//int main(void)
//{
//	char xing[10], ming[10];
//
//	printf("�������� ����");
//	scanf("%s %s", &xing,&ming);
//	//scanf("%s", &ming);
//	printf("%s��%s", xing,ming);
//	return 0;
//}



//int main(void)
//{
//	float fds;
//	scanf("%f", &fds);
//
//	printf("%.1f  %2.1e\n",fds,fds);
//	printf("%+0.3f  %2.3E", fds, fds);
//	return 0;
//}

//int main(void)
//{
//	char xm[10];
//	float sg;
//
//	printf("������ߣ�Ӣ�磩");
//	scanf("%f", &sg);
//	printf("��������");
//	scanf("%s", &xm);
//	printf("%s,you are %1.3f feet tall", xm, sg);
//
//	return 0;
//}

//int main(void)
//{
//	float sd, dx, sj;
//	printf("�����ļ���С(MB)");
//	scanf("%f", &dx);
//	printf("���������ٶ�(MB/S)");
//	scanf("%f", &sd);
//	sj = dx / sd;
//	printf("At %0.2f megabits per second, a file of %0.2f megabytes\
//downloabs in %0.2f seconds.", dx, sd, sj);
//
//
//	return 0;
//}

//int main(void)
//{
//	char xing[10], ming[10];
//	int x, m;
//	printf("��������");
//	scanf("%s", &xing);
//	scanf("%s", &ming);
//	x = strlen(xing);
//	m = strlen(ming);
//	printf("%s %s\n", xing, ming);
//	printf("%*d %*d\n", x, x, m, m);
//
//	printf("%s %s\n", xing, ming);
//	printf("%-*d %-*d", x, x, m, m);
//
//	return;
//}

//#include<float.h>
//int main(void)
//{
//	double m = 1.0 / 3.0;
//	float n = 1.0 / 3.0;
//
//	printf("%.6f %.12f %.16f\n", m, m, m);
//	printf("%.6f %.12f %.16f\n", n, n, n);
//	printf("FLT_DIG %d DBL_DIG %d", FLT_DIG, DBL_DIG);
//
//	return 0;
//}

//#define l 3.785
//#define km 1.609
//int main(void)
//{
//	float jl, yl;
//
//	printf("�������(Ӣ������ĵ������������أ�");
//	scanf("%f,%f", &yl, &jl);
//	printf("ÿ���ؿ�����ʻ%.1fӢ��\n", yl / jl);
//	printf("ÿ���Ϳ�����ʻ%.1f����", (yl*km) / (jl*l));
//
//	return 0;
//}