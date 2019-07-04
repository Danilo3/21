#include <stdio.h>
#include <stdlib.h>

void internal_error(char* msg) {
	fprintf(stderr, "error: %s\n", msg);	
	exit(-1);
}

#define BUF_SIZE 50

int		main(int argc, char** argv) 
{
	FILE* fp = fopen("test01.txt", "r"); 
	if (fp == NULL)
	{
		internal_error("cannot open file");	
	}


	char buffer[BUF_SIZE];
	size_t buf_size = 0;
	size_t line_size = 0;
	line_size = getline(&buf, &buf_size, fp);
	printf("line_size: %ld\n", line_size);
	printf("buf_size: %ld\n", buf_size);

	fclose(fp);
	return 0;
}
