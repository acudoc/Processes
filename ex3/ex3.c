// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  int fb = fork();
  int wc = waitpid();

  if (fb == 1)
      printf("Hello from Child!\n");

  // parent process because return value non-zero.
  else
      printf("Hello from Parent!\n");

    return 0;
}
