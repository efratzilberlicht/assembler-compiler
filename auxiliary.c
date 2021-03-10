#include "auxiliary.h"

/*initlize the operation table*/
table_operation operation_table[16] =
{ {"mov",0,""},
   {"cmp",1,""},
   {"add",2,10},
   {"sub",2,11},
   {"lea",4,""},
   {"clr",5,10,},
   {"not",5,11},
   {"inc",5,12},
   {"dec",5,13},
   {"jmp",9,10,},
   {"bne",9,11},
   {"jsr",9,12},
   {"red",12,""},
   {"prn",13,""},
   {"rts",14,""},
   {"stop",15,""}
};
/*initialize the line and clean the text that was there*/
void initialize_line(char* line)
{
	int i;
	for (i = 0; i < MAX_LINE_LENGTH; i++)
	{
		line[i] = '\0';
	}
}