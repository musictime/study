/**
* @file like.c
* @brief main source file
* @author chans
* @date 2018.11.26
*
* this is the first Doxigen
*
**/

#include <stdio.h>
#include <math.h>
//void lovecall();

/**
* @brief getname function
* @return input name
**/
char* getname(){
	char name[128];
	
	printf("input name : ");
	scanf("%s", name);

	return name;
}
int main(){
	char *str;
	str = getname();

	printf("I like you.\n");
	//lovecall();
	printf("%f\n",sin(1));

	printf("%s\n", str);
	return 0;
}
