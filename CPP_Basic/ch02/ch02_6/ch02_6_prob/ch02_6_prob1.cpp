#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{	
	/*
	char *str1 = "This is an example string.";
	char *str2 = "Another example sentence is here.";
	char *str3;
	*/
	char *str1 = new char[40];
	char *str2 = new char[40];
	strcpy(str1, "This is an example string.");
	strcpy(str2, "Another example sentence is here.");

	printf("[strlen]: %lu\n", strlen(str1));
	printf("[strcat]: %s\n", strcat(str1, str2));
	printf("[strcmp]: %d\n", strcmp(str1, str2));

	delete []str1;
	delete []str2;

	return 0;
}
