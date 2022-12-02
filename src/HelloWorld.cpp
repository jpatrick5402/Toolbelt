#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i;
	std::string HelpPageString = "Usage:  HelloWorld <Option>\n\nOPTIONS\n\thelp\n\tbreif\n\tyoutube\n";
	if(argc == 1){
		std::cout << HelpPageString;
		return 0;
	}
	for (i = 1; i < argc; i++){
		int res = strcmp(argv[i], "help");
		if (res == 0){
			std::cout << HelpPageString;
			return 0;
		}
		res = strcmp(argv[i], "breif");
		if (res == 0){
			std::cout << "Hi";
			return 0;
		}
		res = strcmp(argv[i], "youtube");
		if (res == 0){
			std::cout << "https://www.youtube.com/watch?v=Zd53o2PysMA";
			return 0;
		}
	}
	return 0;
}