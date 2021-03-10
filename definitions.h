#include <stdio.h>
#define MAX_LABEL_LENGTH 31
#define MAX_LINE_LENGTH 80
#define IC_INITIAL_VALUE 100
#define DC_INITIAL_VALUE 0
/*globals*/
/*point to the current line*/
int line_counter;
/*save if there were errors in the code*/
int error_flag;
/*he keeps the index of the current operation that we refer in the current line*/
int operation_index;

/*struct of word */
typedef struct {
    unsigned  destinition : 2;
    unsigned  source : 2;
    unsigned  funct : 4;
    unsigned  opcode : 4;
}word;

/*struct of the operation table */
typedef struct {
    char* name_operation;
    int opcode;
    int funct;

}table_operation;

//efrat g
//extern table_operation operation_table[16];
//void read_files(int* argc, char** argv);

//typedef enum { FALSE, TRUE } boolean;
///*list of external words*/
//typedef struct ext_struct {
//    char name[MAX_LABEL_LENGTH];
//    int address;
//    struct ext_struct* next;
//}external_word;
///*struct of the first  word  of each operation in the code table*/
//typedef struct {
//    unsigned  E : 1;
//    unsigned  R : 1;
//    unsigned  A : 1;
//    unsigned  funct : 5;
//    unsigned  Odestinition : 3;
//    unsigned  Mdestinition : 2;
//    unsigned  Osource : 3;
//    unsigned  Msource : 3;
//    unsigned  opcode : 6;
//}word;
///*the words that come in additinal to the first word of each operation (not useful for each operation
//only to words that need more than one word)*/
//typedef struct {
//    unsigned  E : 1;
//    unsigned  R : 1;
//    unsigned  A : 1;
//    unsigned  digit : 21;
//}word_number;
//
///*line for the code table*/
//typedef  struct
//{
//    char line[25];
//}code;
//
///*line of the data table*/
//typedef struct {
//    signed ch : 24;
//}data;
//
///*struct of the operation table */
//typedef struct {
//    char system_source[3];
//    char system_destination[3];
//    int code;
//    int funct;
//    char* name_operation;
//}table_operation;
//
///*list of symbols*/
//typedef struct symbol_struct {
//
//    char symbol_name[MAX_LABEL_LENGTH];
//    unsigned address;
//    boolean is_code;/*true-it is code false it is data*/
//    boolean is_external;
//    boolean is_entry;
//    struct symbol_struct* next;
//} symbol;



