#include <iostream>

int main(void)
{
	int revenue;

	while(revenue>=0)
	{
		std::cout<<"Enter the revenue in the unit of KRW 10000: ";
		std::cin>>revenue;
		std::cout<<"The salary for this month: "<< (50+0.12*revenue) << std::endl;
	}
	std::cout<<"Terminate the program."<<std::endl;
	return 0;
}
