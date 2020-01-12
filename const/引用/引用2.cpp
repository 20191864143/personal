//const int &r = i; 引用时前者为常量，不能被改变，不过，可以通过后者值的改变来改变两者的值 
#include<iostream>
/*

int main()
{
	int i=2;
	const &r = i;
	std::cout<<r<<"\n"<<i<<std::endl;
	return 0;
 }

*/

	int main()
	{
		int i = 2;
		const int &r = i;
		i = 4;
		std::cout<<r<<"\n"<<i<<std::endl;
		return 0; 
	}

