#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//int strlen (const char * ch)
//{
//	int a;
//	a = 0;
//	while (*ch++)
//		a++;
//	return a;
//}

//#include<stdio.h>
//#include<string.h>
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		if (strchr(st, '\n'))
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}


//#include<stdio.h>
//#include<string.h>
//char asdf(char *st)
//{
//	char* tr;
//	while (*st != ' ' && *st != '\n')
//		st++;
//	if (*st == ' ')
//		return st;
//	else
//		return NULL;
//}

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//
//#define ANSWER "GRANT"
//#define SIZE 40
//char* s_gets(char* st, int n);
//void tb(char* st);
//
//int main(void)
//{
//	char try[SIZE];
//
//	puts("Mho is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	tb(try);
//	while (strcmp(try, ANSWER) != 0) {
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	
//	return ret_val;
//}
//void tb(char* st) 
//{
//	while (*st != '\0') {
//		*st = toupper(*st);
//		st++;
//	}
//}

//			11.13

//#include<stdio.h>
//#define CD 10
//char* ert(char*sn,int n);
//int main(void)
//{
//	char* st;
//	int sn[CD];
//	st = ert(sn,CD);
//	printf("%p,,%s", st, sn);
//	return 0;
//}
//
//char* ert(char*sn,int n)
//{
//	char* st;
//
//	st = fgets(sn, CD, stdin);
//
//	while (*st != ' ' && *st != '\n')
//		st++;
//	if (*st == ' ')
//		*st = '\0';
//	else
//		*st = '\0';	
//	return st;
//}

//#include<stdio.h>
//#include<ctype.h>
//
//void df(char* sd,int n);
//int main(void)
//{
//	char sd[10];
//
//	df(sd,10);
//	puts(sd);
//	return 0;
//}
//
//void df(char* sd,int n)
//{
//	char* st;
//	int i;
//
//	st=fgets(sd, n, stdin);
//
//	for (i = 0; i < n; i++) {
//		if (isblank(st[i]))
//			st[i] = '\0';
//	}
//}

//#include<stdio.h>
//#include<string.h>
//char* s_gets(char* st, int n);
//char* zfdb(char dn, char* zm);
//
//int main(void)
//{
//	char zm[30];
//	char dn;
//	char* zf;
//
//	while (s_gets(zm, 30))
//	{
//		dn = getchar();
//		zf=zfdb(dn, zm);
//		printf("%p\n",zf);
//	}
//	return 0;
//}
//
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i]=='\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//
//char* zfdb(char dn, char* zm)
//{
//	char* st;
//	st = zm;
//
//	for (; *st != '\0';st++) {
//		if (*st == dn)
//		return st;
//	}
//	return NULL;
//}

//#include<stdio.h>
//int is_within(char a, char* st);
//int main(void)
//{
//	char a = 's';
//	char st[10];
//	int t;
//
//	while (1)
//	{
//		fgets(st, 10, stdin);
//		t=is_within(a, st);
//	}
//
//	return 0;
//}
//
//int is_within(char a, char* st)
//{
//	char* dt;
//	
//	int t;
//	for (; *st != '\0'; st++)
//		if (*st == a)
//			return 1;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i]=='\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//char* mystrncpy(char* s1, char* s2, int n)
//{
//	int a;
//	if (strlen(s2) >= n)
//		return s1;
//	for (a = 0; s2[a] != '\0'; a++)
//		s1[a] = s2[a];
//	return s1;
//}
//
//int main(void)
//{
//	char s1[30] = "faefsdjf";
//	char s2[30];
//	char* ss;
//	int a;
//
//	while (s_gets(s2, 30)) {
//		a = 30 - strlen(s1);
//		ss = mystrncpy(s1, s2, a);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void asdf(char* st);
//#define DS 10
//int main(void)
//{
//	char st[DS];
//	fgets(st, DS, stdin);
//	while (st[0] != '\n')
//	{
//		asdf(st);
//		puts(st);
//		fgets(st, DS, stdin);
//	}
//	return 0;
//}
//
//void asdf(char* st)
//{
//	char ch[DS] = "0";
//	char* sf = st;
//	int a, b;
//	a = strlen(st) - 2;
//	b = 0;
//
//	while (st[b] != '\n') {
//		ch[b] = st[b];
//		b++;
//	}
//	for (b = 0; a >= 0; b++, a--)
//		st[b] = ch[a];
//}

//#include<stdio.h>
//#include<string.h>
//void cvbn(char* st);
//#define CD 15
//
//int main(void)
//{
//	char st[CD];
//	fgets(st, CD, stdin);
//	while (!isblank(st[0])) {
//		cvbn(st);
//		puts(st);
//		fgets(st, CD, stdin);
//	}
//	return 0;
//}
//
//void cvbn(char* st)
//{
//	char ch[CD] = "0";
//	char* md = st;
//	int a, b;
//	for (a = 0; st[a] != '\n'; a++)
//		ch[a] = st[a];
//	a = b = 0;
//	while (ch[b] != '\n') {
//		if (ch[b] != ' ') {
//			*(md + a) = ch[b];
//			a++;
//		}
//		b++;
//	}
//}

//#include<stdio.h>
//#include<string.h>
//#define CD 10
//char* s_gets(char* st, int n);
//void ascii(char* st[],int n);
//void cdpx(char* st[], int n);
//void dccd(char* st[], int n);
//
//int main(void)
//{
//	char st[CD][50];
//	char* bm[CD];
//	int a = 0;
//	int t, s;
//
//	while (a < CD && s_gets(st[a], 50)!=NULL && st[a][0] != '\0')
//	{
//		bm[a] = st[a];
//		a++;
//	}
//	printf("1)打印源字符串列表       2）以ASCII顺序打印字符串列表\n");
//	printf("3)字符串长度递增打印     4）第一个单词长度打印\n");
//	printf("5）退出\n");
//	scanf("%d", &t);
//	while (t != 5)
//	{
//		switch (t)
//		{
//
//		case 1:
//			for (s = 0; s < a; s++)
//				puts(bm[s]);
//			break;
//		case 2:
//			ascii(bm, a);
//			for (s = 0; s < a; s++)
//				puts(bm[s]);
//			break;
//		case 3:
//			cdpx(bm, a);
//			for (s = 0; s < a; s++)
//				puts(bm[s]);
//			break;
//		case 4:
//			dccd(bm, a);
//			for (s = 0; s < a; s++)
//				puts(bm[s]);
//			break;
//		default: {
//			puts("输入正确的数字");
//			scanf("%d", &t);
//			while (scanf("") != '\n')
//				continue;
//		}
//		}
//		printf("1)打印源字符串列表       2）以ASCII顺序打印字符串列表\n");
//		printf("3)字符串长度递增打印     4）第一个单词长度打印\n");
//		printf("5）退出\n");
//		scanf("%d", &t);
//	}
//
//
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i]=='\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//
//void ascii(char* st[], int n)
//{
//	char* mn;
//	int a, b;
//	for (a = 0; a < n - 1; a++)
//		for (b = a + 1; b < n; b++)
//			if (strcmp(st[a], st[b]) > 0)
//			{
//				mn = st[a];
//				st[a] = st[b];
//				st[b] = mn;
//			}
//}
//
//void cdpx(char* st[],int n)
//{
//	char* md;
//	int a, b;
//	for (a = 0; a < n - 1; a++)
//		for (b = a + 1; b < n; b++)
//			if (strlen(st[a]) > strlen(st[b])) {
//				md = st[a];
//				st[a] = st[b];
//				st[b] = md;
//			}
//}
//
//void dccd(char* st[], int n)
//{
//	char* md;
//	int a, b, c, d, z;
//	
//	c = d = 0;
//	for (a = 0; a < n - 1; a++)
//		for (b = a + 1; b < n; b++)
//		{
//			for (z = 0, c = 0; *(st[a] + z) != ' '; z++)
//				c++;
//			for (z = 0, d = 0; *(st[b] + z) != ' '; z++)
//				d++;
//			if (c < d)
//			{
//				md = st[a];
//				st[a] = st[b];
//				st[b] = md;
//			}
//		}
//}

//#include<stdio.h>
//#include<ctype.h>
//int dfg(char* st);
//
//int main(void)
//{
//	char ch;
//	char st[50];
//	int a, B, c, d, e;
//	a = B = c = d = e = 0;
//	int t = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		st[t] = ch;
//		t++;
//		if (islower(ch))
//			a++;
//		else if (isupper(ch))
//			B++;
//		else if (ispunct(ch))
//			c++;
//		else if (isdigit(ch))
//			d++;
//	}
//	e = dfg(st);
//	printf("%d	%d	%d	%d	%d", e, B, a, c, d);
//
//	return 0;
//}
//int dfg(char* st)
//{
//	char* nd;
//	nd = st;
//	int a, b, c;
//	c = 1;
//	for (a = 0; nd[a] != '\n'; a++) {
//		if (nd[a] != ' ')
//			b = 1;
//		else 
//			if (b = 1) {
//				c = c + 1;
//				b = 0;
//			}
//	}
//	return c;
//}


//#include<stdio.h>
//int main(int n, char* st[])
//{
//	n = n - 1;
//	while (n >= 1) {
//		printf("%s\n", st[n]);
//		n--;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//double jis(double b, int a);
//int main(int n,char*ch[])
//{
//	int a;
//	double b;
//	char* st;
//
//	if (n != 3)
//		return 0;
//
//	b = strtod(ch[1],&st);
//	a = atoi(ch[2]);
//
//	printf("%f^%d=%f", b, a, jis(b, a));
//	return 0;
//}
//
//double jis(double b, int a)
//{
//
//	double t = b;
//	if (a == 0)
//		return 1;
//	while (a > 1) {
//		t *= b;
//		a--;
//	}
//	return t;
//}

//#include<stdio.h>
//int ATOI(char* st);
//int main(void)
//{
//	char st[15] = { "1234" };
//	int sz;
//	sz = ATOI(st);
//	printf("%d", sz);
//	return 0;
//}
//
//int ATOI(char* st)
//{
//	int ch[15];
//	int a, b, c, t, sz;
//	sz = 0;
//	for (b = 0; (a = st[b]) >= 48 && a <= 57; b++)
//		ch[b] = a-48;
//
//	b = a = b - 1;
//	while (b >= 0) {
//		c = 1;
//			for (t = a; b < t; t--)
//				c *= 10;
//	
//		sz += ch[b] * (c);
//		b--;
//	}
//	return sz;
//}

//#include<stdio.h>
//#include<ctype.h>
//void lower(char st[]);
//void upper(char st[]);
//
//int main(int m, char* ch[])
//{
//	char st[50];
//	int a;
//
//	for (a = 0; (st[a] = getchar()) != EOF; a++)
//		;
//	st[a] = '\0';
//	switch (*ch[1])
//	{
//	case 'p':
//		printf("%s", st);
//		break;
//	case 'u':
//		upper(st);
//		printf("%s", st);
//		break;
//	case 'l':
//		lower(st);
//		printf("%s", st);
//		break;
//	default:
//		printf("输入  程序名+（p , u , l)");
//	}
//	return 0;
//}
//
//void lower(char st[])
//{
//	int a;
//
//	for (a = 0; st[a] != '\0'; a++)
//		st[a] = tolower(st[a]);
//}
//
//void upper(char st[])
//{
//	int a;
//
//	for (a = 0; st[a] != '\0'; a++)
//		st[a] = toupper(st[a]);
//}