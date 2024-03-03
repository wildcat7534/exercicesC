#include <stdio.h>
#include <stdlib.h>
int ft_atoi( char *str )
{
  int i = 0;
  int sign = 2;
  int result = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
  {
    i++;
  }
  while ( str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
    {
      sign += 1;
    }
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    long long int buffer  = result * 10 + (str[i] - '0'); //ou -48
    if( ( ( buffer * 10 + (str[i] - '0') ) > (unsigned long long int)2147483647) || ( ( buffer * 10 + (str[i] - '0') ) < (signed long long int)-2147483648) )
    {
      return 0;
    }
    result = buffer;
    i++;
  }
  if (sign % 2 == 0)
  {
    return result;
  }
  else
  {
    return -result;
  }
}
int main()
{

  printf(" ft_atoi : %d", ft_atoi("  ++--42azc"));
  printf("\n");
  printf(" ft_atoi : %d", ft_atoi("  -+--42azc"));
  printf("\n");
  printf(" ft_atoi : %d", ft_atoi(""));
  printf("\n");
  printf(" ft_atoi : %d", ft_atoi("  --++-4164665741561657895962478sqcsqc"));
  printf("\n");
  printf("\n");
  printf("atoi : %d", atoi("  42azc"));
  printf("\n");
  printf("atoi : %d", atoi("-42azc"));
  printf("\n");
  printf("atoi : %d", ft_atoi(""));
  printf("\n");
  printf("atoi : %d", atoi("  --++-4164665741561657895962478sqcsqc"));
  return 0;
}