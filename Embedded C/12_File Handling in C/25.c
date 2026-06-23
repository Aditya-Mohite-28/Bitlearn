#include <stdio.h>
#include <dirent.h>

int main() {
    char dir_name[100];
    struct dirent *de;
    DIR *dr;

    printf("Directory: ");
    scanf("%99s", dir_name);

    dr = opendir(dir_name);
    if (dr == NULL) {
        printf("Could not open directory\n");
        return 1;
    }

    while ((de = readdir(dr)) != NULL) {
        if (de->d_name[0] != '.') {
            printf("%s, ", de->d_name);
        }
    }
    printf("\n");

    closedir(dr);
    return 0;
}