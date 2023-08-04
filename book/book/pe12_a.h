#pragma once
//void set_mode(int n);
//void get_info();
//void show_info();
///*static*/ int N;
///*static*/ float L, jl, js;
//
//void set_mode(int n)
//{
//	N = n;
//
//	if (N == 0)
//		printf("Enter distance traveled in kilometers:");
//	else if (N == 1)
//		printf("Enter distance traveled in miles:");
//	else {
//		printf("Invalid mode specified. Mode 1(US) used.\n");
//		printf("Enter distance traveled in miles:");
//	}
//	scanf("%f", &jl);
//}
//
//void get_info()
//{
//	if (N == 0)
//		printf("Enter fuel consumed in liters:");
//	else
//		printf("Enter fuel consumed in gallons:");
//	scanf("%f", &L);
//}
//
//void show_info()
//{
//	if (N == 0) {
//		js = L / (jl / 100);
//		printf("Enter consumption is %.2f liters per 100 km\n", js);
//	}
//	else{
//		js = jl / L;
//		printf("Enter consumption is %.1f miles per gallom\n", js);
//	}
//}

//12.13		"diceroll.h"
//extern int roll_count;
//int roll_n_dice(int sets, int dice, int sides);