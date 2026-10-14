#include <stdio.h>
#include<math.h>

// Function to print the multiplication table of a number
void printTable(int num) {

   for(int i = 1; i <= 10; i++) {
           printf("%d\n",  num * i);
    }
}

int main() {
    int number;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to print the table
    printTable(number);

return 0;
}
