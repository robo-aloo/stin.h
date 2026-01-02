#include <stdio.h>
#include "stin.h" // Includes your custom library from the current folder

int main() {
    // 1. Define a buffer with a specific size
    char name[50];
    char city[100];

    // 2. Use your library function
    printf("Enter your full name: ");
    str_in(name); 

    printf("Enter your city: ");
    str_in(city);

    // 3. Print the results (the newline is already removed!)
    printf(----Profile----);
    printf("Name: %s\n", name);
    printf("City: %s\n", city);

    return 0;
}
 
