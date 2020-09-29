#include <iostream>

int main(void)
{
	int iter=5;
	int val[iter];
	int sum=0;

	for (int i=0; i<iter; i++)
	{
		std::cout<<"Enter the "<<i+1;
		switch(i)
		{
			case 0: std::cout<<"st ";
					break;
			case 1: std::cout<<"nd ";
					break;
			case 2: std::cout<<"rd ";
					break;
			default: std::cout<<"th ";
					 break;
		}
		std::cout<<"number: ";
		std::cin>>val[i];
		sum+=val[i];
	}

	std::cout<<"Sum: "<<sum<<std::endl;
	return 0;
}

