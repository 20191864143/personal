//const int &r = i; ����ʱǰ��Ϊ���������ܱ��ı䣬����������ͨ������ֵ�ĸı����ı����ߵ�ֵ 
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

