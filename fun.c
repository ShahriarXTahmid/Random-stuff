#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Define some example phrases to print
    char *phrases[] = {
        "Hello, world!",
        "C programming is fun!",
        "Random phrase generator",
        "Another message",
        "Coding is awesome!"
    };
    
    // Define some example numbers to print
    int numbers[] = {42, 7, 101, 23, 58};
    
    // Define the number of times to run the loop
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        // Generate a random index for phrases
        int phraseIndex = rand() % 5;
        // Generate a random index for numbers
        int numberIndex = rand() % 5;
        
        // Print a random phrase and number
        printf("Phrase: %s\n", phrases[phraseIndex]);
        printf("Number: %d\n", numbers[numberIndex]);
        printf("-------------------------\n");
    }
    
    return 0;
}
