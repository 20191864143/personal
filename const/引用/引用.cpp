#include<iostream>
int main()
{
	int i2 = 42;
	const &r1 = i2;   //����const int &  �󶨵�һ����ͨ��int ������ 
	const &r2 = i2*2;   //6��7��   ��һ���� 
	const &r3 = 42;     // 6��7��   ����һ����ֵ 
	i2 = 3;            //���� 
	double i = 3.14;    // ����һ��double�ͱ���i 
	const int &r = i;   //��һ��double��3.14 ��ת��Ϊһ��int��ֵΪ3��Ȼ����r�����ֵ3  
	i = 4.65;  //���� 
	std::cout<<r<<"\n"<<i<<std::endl;
	std::cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n"<<std::endl;
	 
	return 0;
	
}
