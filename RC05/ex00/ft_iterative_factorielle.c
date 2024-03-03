#include <stdio.h>
int ft_iterative_factorielle(int nb)
{
  if(nb < 0)
  {
    return 0;
  }
  int i = 1;
  int buffer = 2;
  int result = 1;
  while(nb > i)
  {
    result = result * buffer;
    i++;
    buffer++;
  }
  return result;
}
int main ()
{
  printf("%d\n", ft_iterative_factorielle(7));
  return 0;
}