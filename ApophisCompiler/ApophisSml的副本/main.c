#include <stdio.h>
#include "helpers/vector.h"
#include "compiler.h"
int main() {

    int res = compile_file("./test.c","./test",0);
    if(res == COMPILE_FILE_COMPILED_OK)
    {

        printf("everything compiled fine\n");



    }
    else if(res == COMPILE_FAILED_WIDTH_ERRORS)
    {

        printf("Compile failed\n");


    }
    else
    {

        printf("Unknown response for compile file\n");


    }
    return 0;


}
