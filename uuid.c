#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int generateUUID(void);

int main(void)
{
    char uuid = generateUUID();
    printf("%c", uuid);
}

int generateUUID()
{

  char my_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int array_size = sizeof(my_array) / sizeof(char);

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random index within the bounds of the array
    int random_index = rand() % array_size;

    // Get the random entry from the array and print it
     char* new_string = malloc(sizeof(char) * 2);

    // Add the random character to the new string
    new_string[0] = my_array[random_index];
    new_string[1] = '\0';

    printf("Random character: %c\n", new_string[0]);
    printf("New string: %s\n", new_string);

    // Free the memory allocated for the new string
    free(new_string);

    for (int i = 0; i < 35; i++) {
        printf("%c \n", array[i]);
    }
    return 0;
}
