#include <iostream>

int main(void)
{
	char name[100];
	char phone[100];
	
	std::cout<<"What is your name?: ";
	std::cin>>name;

	std::cout<<"What is your phone number?: ";
	std::cin>>phone;

	std::cout<<"Your name is "<<name<<".\n";
	std::cout<<"Your phone number is "<<phone<<".\n";

	return 0;
}
