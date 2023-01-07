#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "cmdhfmfhard.h"
#include "whereami.h"


static char *my_executable_directory = NULL;
static char *my_executable_path = NULL;

const char *get_my_executable_directory(void)
{
    return my_executable_directory;
}

void set_my_executable_path(void)
{
    int path_length = wai_getExecutablePath(NULL, 0, NULL);
    if (path_length != -1) {
        my_executable_path = (char*)malloc(path_length + 1);
        int dirname_length = 0;
        if (wai_getExecutablePath(my_executable_path, path_length, &dirname_length) != -1) {
            my_executable_path[path_length] = '\0';
            my_executable_directory = (char *)malloc(dirname_length + 2);
            strncpy(my_executable_directory, my_executable_path, dirname_length+1);
            my_executable_directory[dirname_length+1] = '\0';
        }
    }
}

int main(int argc, char *argv[]) {
    uint8_t blockNo = 0;
    uint8_t keyType = 0;
    uint8_t trgBlockNo = 0;
    uint8_t trgKeyType = 0;
    int tests = 0;
    uint8_t key[6] = {0, 0, 0, 0, 0, 0};
    bool nonce_file_read = true;

    set_my_executable_path();

    int isOK = mfnestedhard(blockNo, keyType, key, trgBlockNo, trgKeyType, NULL,
                                nonce_file_read, false, false, tests);

    if (isOK) {
        switch (isOK) {
            case 1 :
                fprintf(stdin, "Error: No response from Proxmark.\n");
                break;
            case 2 :
                fprintf(stdin, "Button pressed. Aborted.\n");
                break;
            default :
                break;
        }
        return 2;
    }

    return 0;
}




