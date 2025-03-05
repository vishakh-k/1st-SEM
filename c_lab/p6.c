#include <stdio.h>
#include <string.h>

// Function to compare two strings
int stringCompare(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 == *str2);
}

// Function to concatenate two strings
void stringConcatenate(char *str1, char *str2, char *result) {
    while (*str1) {
        *result = *str1;
        str1++;
        result++;
    }
    while (*str2) {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

// Function to find the length of a string
int stringLength(char *str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

int main() {
    char str1[100], str2[100], result[200];
    
    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove trailing newline
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove trailing newline
    
    // Compare strings
    if (stringCompare(str1, str2)) {
        printf("\nStrings are equal.\n");
    } else {
        printf("\nStrings are not equal.\n");
    }
    
    // Concatenate strings
    stringConcatenate(str1, str2, result);
    printf("\nConcatenated string: %s\n", result);
    
    // Find the length of the concatenated string
    int length = stringLength(result);
    printf("\nLength of the concatenated string: %d\n", length);
    
    return 0;
}