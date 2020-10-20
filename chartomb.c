#include <stdio.h>

int main(){
	char char_tomb[] = "hello"; //rögtön inicailizáltuk, így nem kell érték h,e,l,l,o,\0
		
		printf(char_tomb);
		printf("\n");

		char_tomb[2] = '\0';
		printf(char_tomb);
		printf("\n");

	return 0;
}