#include <stdio.h>
#include <stdlib.h>
#include "assembler.h"

int main(int argc, char** argv) {
	read_files(argc, argv);
	return 0;
}

void read_files(int* argc, char** argv) {
	/*Array to get line by line*/
	char line[MAX_LINE_LENGTH];
	char* file_name, * as_file_name;
	FILE* fd = NULL;
	int i;
	/*initilize to no errors*/
	error_flag = 0;
	if (argc == 1)
	{
		printf("ERROR!! You must send files.\n");
		error_flag = 1;
		exit(0);
	}
	/* Loop for all the files the user input */
	for (int i = 1; i < argc; i++) {
		file_name = (char*)malloc(strlen(argv[i]));
		if (!file_name)
		{
			printf("ERROR!! Memory allocation faild\n");
			error_flag = 1;
			exit(0);
		}
		as_file_name = (char*)malloc(strlen(argv[i]) + 4);
		if (!as_file_name)
		{
			printf("ERROR!! Memory allocation faild\n");
			error_flag = 1;
			exit(0);
		}
		/*Opening the file in read permission.*/
		strcpy(file_name, argv[i]);
		strcpy(as_file_name, file_name);
		/*Using strcat()- because the user sends the file name without extension*/
		strcat(as_file_name, INPUT_FILE_EXTENSION);
		/*Opening the file in read permission.*/
		/*fd = fopen_s(fd,as_file_name, "r");becouse visual studio*/
		fd = fopen(as_file_name, "r");
		if (!fd)
			printf("ERROR!! File %s cannot be opened. It does not exist or you do not have the appropriate access permission.\n", argv[i]);
		else {

		}

	}
}


