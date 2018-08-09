// Write a program that opens the text.txt  file (with the `fopen()` system call) located in this directory
// and then calls `fork()` to create a new process. Can both the child and parent access the file descriptor
// returned by `fopen()`? What happens when they are written to the file concurrently?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int num;
    FILE *fptr;

    if ((fptr = fopen("text.txt", "w")) == NULL){
       printf("Error! opening file");

       exit(1);
    }

    int fork();

    fscanf(fptr, "%d", &num);

    printf("Value of n=%d", num);
    fclose(fptr);

    if (fork() == 0)
        printf("Child has value = %d\n");
    else
        printf("Parent has value = %d\n");

    return 0;
}
