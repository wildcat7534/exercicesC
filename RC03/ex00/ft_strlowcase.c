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
int ft_strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int valuecharS1 = 0;
	int valuecharS2 = 0;
	int i = 0;
	while( *(s1 +i) != '\0' && *(s2 +i) != '\0'){
		if( *(s1 +i) != *(s2 +i) ) 
		{
		  valuecharS1 = (int) *(s1 + i);
		  valuecharS2 = (int) *(s2 + i);
		  if( *(s1 +i) == 0  || *( s2 +i) == 0  ){
		  	valuecharS1=0;
			printf("[charS1: %d & charS2: %d]", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
			}
		  if( *(s1 +i) == '\0' ){
		  	valuecharS1=0;
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
		  }
		  else if( *(s2 +i) == '\0' ){
		  	valuecharS1=0;
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
		  }
		  if( valuecharS1 != valuecharS2 ){
			printf("[charS1: %d & charS2: %d]", valuecharS1, valuecharS2);
			cmp =  valuecharS1 - valuecharS2;
			
		  }
		}
		i++;
	}
	printf(" s1 = '%s' et s2 = %s :  ", s1, s2);
	//printf(" [LONGUEUR s1 : %d ]&[LONGUEUR s2 : %d ] -> ", ft_strlen(s1), ft_strlen(s2));

	return cmp;
}
int main()
{
	//char strAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//char strAlpha[] = "1234567890";
	//char strAlpha[] = "abcdefghijklmnopqrstuvwxyz";
	char str1[] = "deslettres";
	//char strSans[] = "123";
	//char strSansEtLettre[] = "123bcdef12assddes";
	char strNull[] = "";
	char stra[] = "a";
	char strMaju[] = "ABJKllm";
	char strmajuetminu[] = "ABJKklm";
	char strMajuNumMinu[] = "2345ABJKklm";
	//char strNonAscii[] = "£€*¤";
	char strNonAsciiEtAscii[] = "£€*¤dzdzd";
	char s1[] = "Bonjour 42 !";
	char s2[] = "Salut 42 !";
	char s3[] = "Bonjour 42 !";
	//int n =5;

	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s2, strcmp(s1, s2));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s3, strcmp(s1, s3));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strmajuetminu, strMaju, strcmp(strmajuetminu, strMaju));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strNull, stra, strcmp(strNull, stra));
	printf("\n");
	printf("\n");
	printf("!! ft_strcmp(s1, s2) = %d \n",  (ft_strcmp(s1, s2) ) );
	printf("!! ft_strcmp(s1, s3) = %d \n",  (ft_strcmp(s1, s3) ) );
	printf("!! ft_strcmp(strmajuetminu, strMaju) = %d \n",  (ft_strcmp(strmajuetminu, strMaju) ) );
	printf("!! ft_strcmp(strNull, stra) = %d \n",  (ft_strcmp(strNull, stra) ) );
	ft_strcmp(s1, s3);
	ft_strcmp(s1, s1);
	ft_strcmp(s2, s3);
	ft_strcmp(str1, strMajuNumMinu);
	ft_strcmp(s2, strNonAsciiEtAscii);
	ft_strcmp(s1, strNull);
	return 0;
}
