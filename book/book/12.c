#define _CRT_SECURE_NO_WARNINGS

//#include<stdlib.h>
//int rollem(int sides)
//{
//	int roll;
//
//	roll = rand() % sides + 1;
//	return roll;
//}


//			12.9

//#include<stdio.h>
//void critic(void);
//int main(void)
//{
//	int units = 0;
//
//	printf("How many pounds to a firkin of butter?\n");
//	scanf_s("%d", &units);
//	while (units != 56) {
//		critic();
//		scanf_s("%d", &units);
//	}
//	printf("You must have looked it up!\n");
//
//	return 0;
//}
//
//void critic(void)
//{
//	printf("No luck, my friend. Try again.\n");
//}

//#include<stdio.h>
//#include"pe12_a.h"
//int main(void)
//{
//	int mode;
//
//	printf("Enter 0 for metric mode, 1 for US mode:");
//	scanf("%d", &mode);
//	while (mode >= 0)
//	{
//		set_mode(mode);
//		get_info();
//		show_info();
//		printf("Enter 0 for metric mode, 1 for US mode:");
//		printf("(-1 to quit):");
//		scanf("%d", &mode);
//	}
//	printf("Done.\n");
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//#include<stdio.h>
//int vsd(void);
//
//int main(void)
//{
//	int a, b;
//	srand((unsigned int)time(0));
//	a = rand() % 15;
//
//	while (a) {
//		b = vsd();
//		a--;
//	}
//	printf("%d", b);
//	return 0;
//}
//
//int vsd(void)
//{
//	static int s = 0;
//	s++;
//	return s;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void jiangxupailei(int ch[]);
//
//int main(void)
//{
//	int a = 0;
//	int ch[100];
//	srand((unsigned int)time(0));
//
//	while (a < 100) {
//		ch[a] = rand() % 10 + 1;
//		a++;
//	}
//	jiangxupailei(ch);
//
//	for (a = 0; a < 100; a++)
//		printf("%d ", ch[a]);
//
//	return 0;
//}
//
//void jiangxupailei(int ch[])
//{
//	int a, b;
//	int* mc;
//	for(a=0;a<99;a++)
//		for (b = a + 1; b < 100; b++) {
//			if (ch[a] < ch[b]) {
//				mc = ch[a];
//				ch[a] = ch[b];
//				ch[b] = mc;
//			}
//		}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	int a, b;
//	int z;
//	int ch[10] = { 0 };
//
//	for(a=0;a<10;a++)
//		for (b = 0, srand((unsigned int)time(0)); b < 100; b++)
//		{
//			z = rand() % 10 + 1;
//			switch (z)
//			{
//			case 1	:
//				ch[0] +=1;
//				break;
//			case 2:
//				ch[1] +=1;
//				break;
//			case 3:
//				ch[2] +=1;
//				break;
//			case 4:
//				ch[3] +=1;
//				break;
//			case 5:
//				ch[4] +=1;
//				break;
//			case 6:
//				ch[5] +=1;
//				break;
//			case 7:
//				ch[6] +=1;
//				break;
//			case 8:
//				ch[7] +=1;
//				break;
//			case 9:
//				ch[8] +=1;
//				break;
//			case 10:
//				ch[9] +=1;
//				break;
//			}
//		}
//	printf("'1'有%d  '2'有%d  '3'有%d  '4'有%d  '5'有%d", ch[0], ch[1], ch[2], ch[3], ch[4]);
//	printf("'6'有%d  '7'有%d  '8'有%d  '9'有%d  '10'有%d", ch[5], ch[6], ch[7], ch[8], ch[9]);
//	return 0;
//}

//12.13  manydice.c
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include"pe12_a.h"//"diceroll.h"
//
//int main(void)
//{
//	int dice, sets, sides;
//	int status;
//
//
//	srand((unsigned int) time(0));
//	printf("Enter the number of sets; enter q to stop:");
//	while (scanf("%d", &sets) == 1 && sets > 0)
//	{
//		printf("Here many sides and how many dice? ");
//		if (scanf("%d", &sides) == 1)
//		{
//			if (scanf("%d", &dice))
//				;//break;
//			else
//			{
//				printf("You should have entered an integer.");
//				printf(" Let's begin again.\n");
//				while (getchar() != '\n')
//					continue;
//			}
//		}
//		printf("Here are %d sets of %d %d-sided throws.\n",sets,dice,sides);
//		roll_n_dice(sets, dice, sides);
//		printf("\nHow many sets? Enter q to stop:");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int* make_array(int elem, int val);
//void show_array(const int ar[], int n);
//int main(void)
//{
//	int* pa;
//	int size;
//	int value;
//
//	printf("Enter the number of elements:");
//	while (scanf("%d", &size) == 1 && size > 0)
//	{
//		printf("Enter the initialization value:");
//		scanf("%d", &value);
//		pa = make_array(size, value);
//		if (pa)
//		{
//			show_array(pa, size);
//			free(pa);
//		}
//		printf("Enter the number of elements (<1 to quit):");
//	}
//	printf("Done.\n");
//	return 0;
//}
//
//int* make_array(int elem, int val)
//{
//	int* pa;
//	int a;
//
//	pa = (int*)malloc(elem * sizeof(int));
//	for (a = 0; a < elem; a++) {
//		*(pa + a) = val;
//	}
//	return pa;
//}
//
//void show_array(const int ar[], int n)
//{
//	int a, b;
//	b = 1;
//	for (a = 0; a < n; a++,b++)
//	{
//		printf("%d", ar[a]);
//		if (b == 8) {
//			printf("\n");
//			b = 1;
//		}
//	}
//}