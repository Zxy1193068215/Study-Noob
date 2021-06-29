#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//-主函数-程序入口-Only One
//{
//    printf("hello world"); //printf打印函数
//    return 0;
//}

//int main()
//{
//    char cj = 'A'; //内存
//    printf("%c\n", cj);
//    return 0;
//}

//char 字符类型
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字
//%p - 以地址的形式打印
//%x - 打印16进制
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
//    //计算两个数字的和
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    //输入数据-使用输入函数scanf
//    scanf_s("%d%d", &num1,&num2);//取地址符号 &
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
//	extern int fly;//声明extern外部符号
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
//	////字面常量
//	////3;
//	////const - 常属性
//	const int n = 10; //n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//	n = 10;
//	////const修饰的常变量
//	//cost int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num); 
//    return 0;
//}

//#define max 10 //define 定义的标识符常量
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}

//枚举常量
//枚举 - 一一列举
//enum - 枚举关键
//enum Sex
//{
//	Male,Female,Secret,
//};
////Male,Female,Secret - 枚举常量
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