#include <stdio.h>
#include "validate.c"
#include "view_top_level.c"

int main(int argc, char **argv)
{
    /*
     * Check whether user specified anything
     */
    if(argc < 2){
        print_help();
        return 0;
    }

    /*
     * Validate arguments and start functions accordingly
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
            if(view_top_level_dir == 1){
                view_top_level(argv[i]);
            }
        }
    }

    return 0;
}
