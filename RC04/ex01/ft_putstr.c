#include <stdio.h>
#include <unistd.h>
void ft_putstr(char *str)
{
    unsigned int i=0;
    while ( *(str +i) != '\0')
    {
        write(1, (str +i), 1);
        //sleep(0.9);
        i++;
    }
}
void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
    write(1, "-2147483648", 11);
  }
  else if(nb < 0)
  {
    write(1, "-", 1);
    nb = nb * -1;
    ft_putnbr(nb);
  }
  else if(nb < 10)
  {
    nb = nb + '0';
    write(1, &nb, 1);
  }
  else if(nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
}
int main()
{
  //char strAlpha[] = "abcdefghijklmnopqrstuvwxyz";
  //ft_putstr(strAlpha);
  ft_putnbr(4);
  printf("\n");
  ft_putnbr(42);
  printf("\n");
  ft_putnbr(420);
  printf("\n");
  ft_putnbr(4240);
  printf("\n");
  ft_putnbr(10456123);
  printf("\n");
  ft_putnbr(0);
  printf("\n");
  ft_putnbr(2147483647);
  printf("\n");
  ft_putnbr(-150);
  printf("\n");
  ft_putnbr(-2147483648);
  printf("\n");
  ft_putnbr(-2147483647);
  printf("\n");
}