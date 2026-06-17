#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("sample.txt", "r+");
    if (file == NULL) {
        perror("Error opening file. Make sure 'sample.txt' exists");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    if (file_size <= 0) {
        printf("File is empty or cannot be read.\n");
        fclose(file);
        return 1;
    }

    char *buffer = (char *)malloc((file_size + 1) * sizeof(char));
    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
        fclose(file);
        return 1;
    }

    size_t bytes_read = fread(buffer, sizeof(char), file_size, file);
    *(buffer + bytes_read) = '\0';

    printf("Original File Content:\n%s\n", buffer);

    char *ptr = buffer;
    while (*ptr != '\0') {
        *ptr = (char)toupper((unsigned char)*ptr);
        ptr++;
    }

    printf("\nModified Content to Write:\n%s\n", buffer);

    fseek(file, 0, SEEK_SET);
    size_t bytes_written = fwrite(buffer, sizeof(char), bytes_read, file);
    
    if (bytes_written == bytes_read) {
        printf("\nFile updated successfully!\n");
    } else {
        printf("\nError writing data back to file.\n");
    }

    fclose(file);
    free(buffer);
    buffer = NULL;

    return 0;
}