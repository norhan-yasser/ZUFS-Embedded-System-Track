#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     char ch;
     char s[90],sen[90];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      scanf("%c", &ch );
      scanf("\n");
      scanf("%[^\n]%*c", s);
      scanf("\n");
      scanf("%[^\n]%*c", sen);

      printf("%c\n", ch);
      printf("%s\n",s);
      printf("%s",sen);
    return 0;
}
