#include <iostream>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
	int i;
	if(argc == 1){
		std::cout << "Hello, World";
		return 0;
	}
	for (i = 1; i < argc; i++){
		int res = strcmp(argv[i], "help");
		if (res == 0){
			std::cout << "*HELP PAGE*";
			return 0;
		}
		res = strcmp(argv[i], "short");
		if (res == 0){
			std::cout << "Hi";
			return 0;
		}
	}
	return 0;
}
