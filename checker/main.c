#include <stdio.h>
#include <stdlib.h>


void error(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
	exit(-1);
}

int main(int argc, char** argv) {	
	if (argc != 2) {
		error("need 1 arg ");
	}
	char command[80];
	sprintf(command, "gcc %s", argv[1]);	
	system(command); 
	return 0;
}

