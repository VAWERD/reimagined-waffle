#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<inttypes.h>

//int main(void)
//{
//	float weight;
//	float value;
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//	scanf("%f", &weight);
//
//	value = 1700.0*weight*14.5833;
//
//	printf("your weight in platinum is worth $%.2f.\n", value);
//	//%.2f---.2ָ������ĸ�����ֻ��ʾС���������λ
//	printf("you are easily worth that! IF platinum prices brop,\n");
//	printf("eat more to maintain you value.\n");
//
//	return 0;
//}

//int main(void)
//{
//	int x = 100;
//
//	printf("dec=%d; octal=%o; hex=%x\n", x, x, x);
//	printf("dec=%d; octal=%#o; hex=%#x\n", x, x, x);
//
//	return 0;
//}

//int main(void)
//{
//	int i = 2147483647;
//	unsigned J = 4294967295;
//
//	printf("%d  %d  %d\n", i, i + 1, i + 2);
//	printf("%u  %u  %u\n", J, J + 1, J + 2);
//	
//	return 0;
//}

//int main(void)
//{
//	char ch;
//
//	printf("please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}

//int main(void)
//{
//	int32_t me32;
//	me32 = 45933945;
//
//	printf("first,assume int32_t is int:");
//	printf("me32=%d\n", me32);
//	printf("next,let's not make any assumptions.\n");
//	printf("instead,use a \"macro\"from inttypes.h:");
//	printf("me32=%"PRId32"\n", me32);
//
//	return 0;
//}

//int main(void)
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double bip = 5.32e-5;
//
//	printf("%f can be written %e\n", aboat, aboat);
//	printf("And it's %a in hexadecimal,powers of 2 notaion\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", bip, bip);
//	return 0;
//}

//int main(void)
//{
//	double a, b;
//	a = 2.0e15 + 1;
//	b = a - 2.0e15;
//	printf("%f\n", b);
//	return 0;
//}

//int main(void)
//{
//	printf("%zd", sizeof(double));
//	return 0;
//}

//		3.11
//int main(void)
//{
//	char a;
//	scanf("%d", &a);
//	printf("����һ��ASCII��ֵ��%c", a);
//	return 0;
//}

//int main(void)
//{
//	char baojin = '\a';
//	printf("%c", baojin);
//	printf("startled by the sudden sound,Slly shouted,\n\"By the Great Pumpkin,what was that!\"");
//	return 0;
//}

//int main(void)
//{
//	float fds;
//	scanf("%f", &fds);
//
//	printf("Enter a floating- value:%.2f\n", fds);
//	printf("fixed-point notation;%f\n", fds);
//	printf("exponential notation:%e\n", fds);
//	printf("P notation:%.2a\n", fds);
//
//	return 0;
//}

//int main(void)
//{
//	short nl;
//	long long int miao;
//
//	printf("��������");
//	scanf("%hd",&nl);
//
//	miao = nl * 3.156e7;
//	printf("%hd��=%lld��", nl, miao);
//
//	return 0;
//}

//int main(void)
//{
//	long double g = 950 / 3e-23;
//	float z;
//
//	printf("����ˮ�Ŀ�������");
//	scanf("%f", &z);
//	printf("%f����ˮ��%eˮ����", z, g*z);
//
//	return 0;
//}

//int main(void)
//{
//	float sg,lm;
//	
//	printf("�������");
//	printf("    (Ӣ��)\b\b\b\b\b\b\b\b\b\b");
//	scanf("%f", &sg);
//	lm = 2.54*sg;
//	printf("%fӢ��=%f����", sg, lm);
//
//	return 0;
//}

//int main(void)
//{
//	float pt, b, zs, dts, cs;
//
//	printf("���뱭����");
//	scanf("%f",&b);
//	pt = b / 20;
//	zs = b * 8;
//	dts = b * 16;
//	cs = b * 48;
//	printf("%f������\n%fƷ��\n%f��˾\n%f������\n%f����\n", b, pt, zs, dts, cs);
//
//	return 0;
//}