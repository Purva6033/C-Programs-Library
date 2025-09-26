
#include <stdio.h>

int main() {
    FILE *fptr;
    char data[] = "Hello, this is a file I/O example in C.";

    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "%s", data);
    fclose(fptr);

    printf("Data written to file successfully.\n");
    return 0;
}
