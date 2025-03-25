#include <stdio.h>

void print_reverse(char *s);

int main()
{
  // test the function out
  char s[100];
  printf("Enter the sentence :");

  fgets( s , sizeof(s) , stdin );

  print_reverse(s);
  printf("\n");

  return 0;
}

// prints string s in reverse
void print_reverse(char *s)
{

  if (*s != '\0')
  {

    print_reverse(s + 1);
    printf("%c", *s);
  }
}
