#define _RCT_SECURE_NO_WARNINGS 1

//����stdio.h���ļ�
#include<stdio.h>
//std-��׼  i-����  o-���


////int ���͵���˼
////mainǰ���int��ʾmain�������÷���һ������ֵ
//		int main()//������-����Ŀ�ʼ---main����ֻ��һ��
//		{
//			 printf("hello\n");//print function--��ӡ����
//			return 0;//���� 0
//		}
//void main()---��voidд�Ѿ���ʱ��

////char--�ַ�����
////short--������
////int--����
////long--������
////long long--����������
////float--�����ȸ�����-С��
////double--˫���ȸ�����
//int main()
//{	
//	char ch = 'A';//char-�ַ�����
//	printf("%c\n", ch);//%c-��ӡ�ַ���ʽ������
//	int age = 20;
//	printf("%d\n", age);//%d-��ӡ����ʮ��������
//	return 0;
//}

//int main()
//{				//sizeof--˭�Ĵ�С
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�����š�20��
//	float weight = 59.6;//����4���ֽ������С����59.6��
//
//	return 0;
//}


//int a = 100;//ȫ�ֱ���-�ڴ���顰{}������ı���
//int main()
//{
//	int a = 10;//�ֲ�����-�ڴ���顰{}������ı���
//	printf("%d/n",a);//�ֲ�������ȫ�ֱ������ֿ���һ����������ʾ�ֲ�����
//					//������һ����������bug
//	return 0;
//}

//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2= 0;
//	//���뺯��-scanf
//	scanf_s("%d%d", &num1, &num2);//&--ȡ��ַ����
//	int sum = 0;//c�����﷨�涨����Ҫ�����ڵ�ǰ��������ǰ�棬C++����
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}

//int main()
//{
//	extern int num;//extern�����ⲿ����
//	printf("%d", num);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	extern int num;
	scanf_s("%d%d", &a, &b);
	int z = 0;
	z = a * b + num;
	printf("z= %d", z);
	return 0;
}