#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    char ch;

    // Input source and target file names
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);
    printf("Enter the name of the target file: ");
    scanf("%s", targetFile);

    // Open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open the source file '%s'.\n", sourceFile);
        exit(1);
    }

    // Open the target file in write mode
    target = fopen(targetFile, "w");
    if (target == NULL) {
        printf("Error: Cannot open or create the target file '%s'.\n", targetFile);
        fclose(source);
        exit(1);
    }

    // Copy contents from source to target
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFile, targetFile);

    // Close both files
    fclose(source);
    fclose(target);

    return 0;
}
