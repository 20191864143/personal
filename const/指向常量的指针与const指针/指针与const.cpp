/*1ָ������ָ�룺������Ϊ�� const int pi; const int *p = &pi ������ͨ���ı� *pֵ���ı�pi��ֵ 
#include<iostream>
int main()
{
	int p = 654;
	const int *const pi=&p;
	*pi = 3; //���� 
	std::cout<<p<<"\n"<<*pi<<std::endl;
	return 0;
 }
 */ 

 
 
 
 
 
 
 
 // 2 constָ�� �����ʼ���� ������Ϊ�� const int pi; const int *p = &pi ������ͨ���޸�*p��ֵ���ı�pi��ֵ 
 #include<iostream>
int main()
{
	int p = 654;
	 int *const pi=&p;
	*pi = 3; //��ȷ 
	std::cout<<p<<"\n"<<*pi<<std::endl;
	return 0;
 }

