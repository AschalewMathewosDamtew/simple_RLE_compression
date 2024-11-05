#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compress a string using RLE
char* rle_compress(const char* input) {
    int len = strlen(input);
    char* output = malloc(len * 2 + 1); // Allocate memory for output (max size)
    if (!output) return NULL; // Check for memory allocation failure

    int count = 1; // Initialize count of repeated characters
    int j = 0; // Output index

    for (int i = 1; i <= len; i++) {
        // Check if the current character is the same as the previous one
        if (input[i] == input[i - 1]) {
            count++; // Increment count for repeated character
        } else {
            // Write count and character to output
            j += sprintf(&output[j], "%d%c", count, input[i - 1]);
            count = 1; // Reset count
        }
    }
    output[j] = '\0'; // Null-terminate the string
    return output; // Return compressed string
}

int main() {
    char input[100]; // Buffer for user input
    printf("Enter a string to compress: ");
    fgets(input, sizeof(input), stdin); // Read input from user
    input[strcspn(input, "\n")] = 0; // Remove newline character

    char* compressed = rle_compress(input); // Call compression function
    if (compressed) {
        printf("Compressed: %s\n", compressed); // Display compressed result
        free(compressed); // Free allocated memory for compressed string
    } else {
        printf("Memory allocation failed.\n");
    }

    //Wait for user input before closing
    printf("Press Enter to exit ...\n");
    getchar();
    return 0;
}
