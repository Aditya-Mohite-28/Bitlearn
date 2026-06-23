#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main() {
    char filename[100];
    struct stat attr;

    printf("File name: ");
    scanf("%99s", filename);

    if (stat(filename, &attr) == 0) {
        printf("Last modified: %s", ctime(&attr.st_mtime));
    } else {
        printf("Error getting file stats.\n");
    }

    return 0;
}