#include <stdio.h>

void print_bad()
{
  printf("abcdefghijklmnopqrstuvwxyz");
}

void print_ok()
{
  char blabla = 'a';
  while (blabla <= 'z')
    {
      my_putchar(blabla);
      blabla = blabla + 1;
    }
}

int main(int ac, char **av)
{
  print_ok();
  print_bad();
}
