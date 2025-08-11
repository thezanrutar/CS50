// header files
#include <cs50.h>
#include <stdio.h>

// program start
int main(void)
{
  // printf("hello, world\n");
  string answer = get_string("What's your name? ");
  printf("hello, %s\n", answer);
}
