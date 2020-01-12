#include<iostream>
int main()
{
	int i2 = 42;
	const &r1 = i2;   //允许const int &  绑定到一个普通的int 对象上 
	const &r2 = i2*2;   //6行7行   是一样的 
	const &r3 = 42;     // 6行7行   都是一个数值 
	i2 = 3;            //测试 
	double i = 3.14;    // 定义一个double型变量i 
	const int &r = i;   //将一个double型3.14 先转变为一个int型值为3，然后让r绑定这个值3  
	i = 4.65;  //测试 
	std::cout<<r<<"\n"<<i<<std::endl;
	std::cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n"<<std::endl;
	 
	return 0;
	
}
