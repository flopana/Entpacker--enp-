#include <stdio.h>
#include "validate.c"

int main(int argc, char **argv)
{
    /*
     * Validate arguments
     */
    for (int i = 1; i < argc; ++i)
    {
        int status = validate_arg(argv[i]);
        if(status == 1){
            printf("Invalid argument %s\n", argv[i]);
            return 1;
        } else if(status == 2){
            return 0;
        } else if(status == 3){

        }
    }
}
