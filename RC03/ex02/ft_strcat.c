#include <stdio.h>
#include <string.h>
unsigned int ft_strlen(char *str)
{
        unsigned int length =0;
        while ( *(str +length) != '\0')
        {
          write(1, *(str +length),1);
            length++;
        }
        return length;
}
char *ft_strcat(char *dest, char *src)
{
  unsigned int i = 0;
  unsigned int dest_len = ft_strlen(dest);
  unsigned int src_len = ft_strlen(src);
  printf(" TAILLE dest : %d\n", ft_strlen(dest));
  printf(" TAILLE src : %d\n", ft_strlen(src));
  for(i = 0; i < ft_strlen(src); i++)
  {
    printf(" src[%d] = %c\n",  i, src[i] );
    dest[(dest_len + i)] = src[i];
  }
  printf("Taille dest final : %d\n", ft_strlen(dest) + ft_strlen(src) );
  *(dest + (dest_len + src_len)) = '\0';
 
  return dest;
}
int main()
{
	char strNull[30] = "";
	char strNull2[] = "";
	char stra[] = "a";
	char strMaju[] = "ABJKQlm";
	char strmajuetminu[100] = "ABJKllm";
	char strpluspetit[100] = "ABJK";
	char strplusgrand[] = "ABJKRRR";
	char strNonAsciiEtAscii[] = "_£€*¤dzdzd£ ! ";
	char s1[150] = "Bonjour 42 !";
	char s2[] = "Salut 42 !";
	char s3[] = "Bonjour 43 !";
	//unsigned int n =5;


  //printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, s2, strcat(s1, s2));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, strNonAsciiEtAscii, strcat(s1, strNonAsciiEtAscii));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, s3, strcat(s1, s3));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strmajuetminu, strMaju, strcat(strmajuetminu, strMaju));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strNull, stra, strcat(strNull, stra));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , stra, strNull, strcat(stra, strNull));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strNull, strNull2, strcat(strNull, strNull2));
	//printf("strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strpluspetit, strplusgrand, strcat(strpluspetit, strplusgrand)); 
  
	printf("\n");
	printf("\n");
	printf(" !! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, s2, ft_strcat(s1, s2) );
	printf(" !! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, strNonAsciiEtAscii, ft_strcat( s1, strNonAsciiEtAscii));
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , s1, s3, ft_strcat(s1, s3) );
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strmajuetminu, strMaju, ft_strcat( strmajuetminu, strMaju) );
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strNull, stra, ft_strcat(strNull, stra ) );
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , stra, strNull, ft_strcat(stra, strNull ) );
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strNull, strNull2, ft_strcat(strNull, strNull2 ) );
	printf("!! ft_strcat [ s1 = '%s' et s2 = '%s'] :  %s\n" , strpluspetit, strplusgrand, ft_strcat(strpluspetit, strplusgrand));
	return 0;
}