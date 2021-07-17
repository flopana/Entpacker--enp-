#include "string.h"
#include "stdio.h"

int view_files_in_archive = 0;

void print_help() {
    printf("Entpacker (enp) help\n\n"
           "Usage:\n"
           "    enp archive.tar.gz\n"
           "    enp --View archive.tar.gz\n\n"
           "Options:\n"
           "    --View, -V Display files\n"
           "    --help Display this menu\n\n");
}

int validate_arg(char *arg) {
    if(strcmp(arg, "--help") == 0){
        print_help();
        return 2;
    }

    if (arg[0] != '-') {
        return 3;
    }

    if (arg[0] == '-' && arg[1] == '-') {
        if (strcmp(arg, "--View") == 0) {
            view_files_in_archive = 1;
            return 0;
        }
    }

    if (arg[0] == '-') {
        if (strcmp(arg, "-V") == 0) {
            view_files_in_archive = 1;
            return 0;
        }
    }

    return 1;
}