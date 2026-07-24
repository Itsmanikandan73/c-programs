#include <stdio.h>

int main(){

  char ex[12];
  
  puts("Enter your ex name");
  scanf("%11s", ex);

  printf("Dear %s.\n\n\tYou are my history!\n", ex);

  return 0;
}