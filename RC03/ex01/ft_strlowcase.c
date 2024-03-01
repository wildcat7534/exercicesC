#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
        int i=0;
        while ( *(str+i) != '\0')
        {
	//	write(1,  (str+i), 1);
                i++;
        }
        return i;
}
int ft_strlenN(char *str, int n)
{
	int i=0;
	n = 0;
	while ( *(str + i) != ' ')
	{
		i++;
	}
	return i+n;
}
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int cmp = 0;
	int valuecharS1 = 0;
	int valuecharS2 = 0;
	unsigned int i = 0;
	if( ft_strlen(s1) == 0 )
	{
		valuecharS1 = (int) *(s1 +0);
		valuecharS2 = (int) *(s2 +0);
		printf("[*EDGE_CASE_s1=Null*][charS1: %d & charS2: %d]", valuecharS1, valuecharS2);
		return cmp = valuecharS1 - valuecharS2;
	}
	while( (*(s1 +i) != '\0' && *(s2 +i) != '\0') || (i <= n) ){
		if( *(s1 +i) != *(s2 +i) ) 
		{
		  valuecharS1 = (int) *(s1 + i);
		  valuecharS2 = (int) *(s2 + i);
		  if( *(s1 +i) == '\0' ){
		  	valuecharS1=0;
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
		  }
		}
		i++;
	}
	return cmp;
}
int main()
{
	//char strAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//char strAlpha[] = "1234567890";
	//char strAlpha[] = "abcdefghijklmnopqrstuvwxyz";
//	char str1[] = "deslettres";
	//char strSans[] = "123";
	//char strSansEtLettre[] = "123bcdef12assddes";
	char strNull[] = "";
	char stra[] = "a";
	char strMaju[] = "ABJKllm";
	char strmajuetminu[] = "ABJKklm";
	char strdepassN[] = "ABJKllQ";
//	char strMajuNumMinu[] = "2345ABJKklm";
	//char strNonAscii[] = "£€*¤";
//	char strNonAsciiEtAscii[] = "£€*¤dzdzd";
	char s1[] = "Bonjour 42 !";
	char s2[] = "Salut 42 !";
	char s3[] = "Bonjour 42 !";
	unsigned int n = 5;
	printf("indice : %d\n", n);
	printf("strncmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s2, strncmp(s1, s2, n));
	printf("strncmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s3, strncmp(s1, s3, n));
	printf("strncmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strmajuetminu, strMaju, strncmp(strmajuetminu, strMaju, n));
	printf("strncmp [ s1 = '%s' et s2 = %s ] :  %d\n" ,strMaju, strdepassN, strncmp(strMaju, strdepassN, n));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("!! ft_strncmp(s1, s2) = %d \n",  (ft_strncmp(s1, s2, n) ) );
	printf("!! ft_strncmp(s1, s3) = %d \n",  (ft_strncmp(s1, s3, n) ) );
	printf("!! ft_strncmp(strmajuetminu, strMaju) = %d \n",  (ft_strncmp(strmajuetminu, strMaju, n) ) );
	printf("!! ft_strncmp(strNull, stra) = %d \n",  (ft_strncmp(strNull, stra, n) ) );
	printf("strncmp [ s1 = '%s' et s2 = %s ] :  %d\n" ,strMaju, strdepassN, strncmp(strMaju, strdepassN, n));
	return 0;
}
