#include "stdio.h"
#include "check_suffix.c"
#include <stdlib.h>

int view_top_level(char *archive) {
    char archive_as_arr[strlen(archive)];
    for(int i = 0; i < strlen(archive); i++)
    {
        archive_as_arr[i] = archive[i];
    }
    printf("%s", archive_as_arr);

    int suffix_check_result = is_suffix(archive, ".tar.gz");
    if (suffix_check_result == 1) {

        char buffer[1024];
        snprintf(buffer, sizeof(buffer), "tar --exclude='./*/*' -tvf %s", archive);

        printf("\n\n %s \n\n", buffer);
        int status = system(buffer);
        if (status != 0) {
            printf("There was an error processing archive %s", archive);
            return 1;
        }
    }

    return 0;
}
