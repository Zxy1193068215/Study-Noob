#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//-������-�������-Only One
//{
//    printf("hello world"); //printf��ӡ����
//    return 0;
//}

//int main()
//{
//    char cj = 'A'; //�ڴ�
//    printf("%c\n", cj);
//    return 0;
//}

//char �ַ�����
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡ��������
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16����
//%o - 

//int main()
//{
//	double f = 5.0;
//    printf("%lf\n", f);
//    return 0;
//} 

//int main()
//{
//    printf("%d\n", sizeof(char));       //1
//    printf("%d\n", sizeof(short));      //2
//    printf("%d\n", sizeof(int));        //4
//    printf("%d\n", sizeof(long));       //4
//    printf("%d\n", sizeof(long long));  //8
//    printf("%d\n", sizeof(float));      //4
//    printf("%d\n", sizeof(double));     //8
//    return 0;
//} 

//int main()
//{
//    //�����������ֵĺ�
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    //��������-ʹ�����뺯��scanf
//    scanf_s("%d%d", &num1,&num2);//ȡ��ַ���� &
//        sum = num1 + num2;
//        printf("sum = %d\n", sum);
//        getch();
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%d%d", &a, &b);
//    c = a + b;
//    printf("%d\n", c);
//    getch();
//    return 0;
//}

//int main()
//{
//	{
//		int num = 0;
//		printf("num = %d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	extern int fly;//����extern�ⲿ����
//	printf("%d\n", fly);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	getch();
//	return 0;
//}

//int main()
//{
//	////���泣��
//	////3;
//	////const - ������
//	const int n = 10; //n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[n] = { 0 };
//	n = 10;
//	////const���εĳ�����
//	//cost int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num); 
//    return 0;
//}

//#define max 10 //define ����ı�ʶ������
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}

//ö�ٳ���
//ö�� - һһ�о�
//enum - ö�ٹؼ�
//enum Sex
//{
//	Male,Female,Secret,
//};
////Male,Female,Secret - ö�ٳ���
//int main()
//{
//	//enum Sex s = Female;
//	printf("%d\n", Male);//0
//	printf("%d\n", Female);//1
//	printf("%d\n", Secret);//2
//	return 0;
//}
//enum Color
//{
//     red,yellow,blue
//};
//int main()
//{
//    enum Color color = red;
//    printf("%d\n", red);
//    return 0;
//}