/*1指向常量的指针：以整形为例 const int pi; const int *p = &pi ，不用通过改变 *p值来改变pi的值 
#include<iostream>
int main()
{
	int p = 654;
	const int *const pi=&p;
	*pi = 3; //错误 
	std::cout<<p<<"\n"<<*pi<<std::endl;
	return 0;
 }
 */ 

 
 
 
 
 
 
 
 // 2 const指针 必须初始化， 以整形为例 const int pi; const int *p = &pi ，可以通过修改*p的值来改变pi的值 
 #include<iostream>
int main()
{
	int p = 654;
	 int *const pi=&p;
	*pi = 3; //正确 
	std::cout<<p<<"\n"<<*pi<<std::endl;
	return 0;
 }

