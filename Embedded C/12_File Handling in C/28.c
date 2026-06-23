#include <stdio.h>
#include <string.h>

int main() {
    char paths[3][100] = {
        "/home/user/docs/a.txt",
        "/home/user/docs/b.txt",
        "/home/user/docs/old/c.txt"
    };
    char common[100] = "";
    int i = 0, j = 0, last_slash = 0;

    printf("%s, %s, %s\n", paths[0], paths[1], paths[2]);

    while (paths[0][i] != '\0' && paths[1][i] != '\0' && paths[2][i] != '\0') {
        if (paths[0][i] == paths[1][i] && paths[1][i] == paths[2][i]) {
            if (paths[0][i] == '/') {
                last_slash = i;
            }
            i++;
        } else {
            break;
        }
    }

    strncpy(common, paths[0], last_slash);
    common[last_slash] = '\0';

    printf("%s\n", common);
    return 0;
}