#include <stdio.h>

int main(int args, char* argv[]){
	int i;
	printf("Hello, World!\n");
	printf("argc = %d\n", argc);

	for(i = 0; i<argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return 0;
}
