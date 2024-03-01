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
int ft_strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int valuecharS1 = 0;
	int valuecharS2 = 0;
	int i = 0;
	if( ft_strlen(s1) == 0 )
	{
		valuecharS1 = (int) *(s1 +0);
		valuecharS2 = (int) *(s2 +0);
		printf("[*EDGE_CASE_s1=Null*][charS1: %d & charS2: %d]", valuecharS1, valuecharS2);
		return cmp = valuecharS1 - valuecharS2;
	}
	while( i <= ft_strlen(s1) || i <= ft_strlen(s2) ){
		if( *(s1 +i) != *(s2 +i) ) 
		{
		  valuecharS1 = (int) *(s1 + i);
		  valuecharS2 = (int) *(s2 + i);
		  if( *(s1 +i) == '\0' ){
		  	valuecharS1=0;
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
		  }
		  else if( *(s2 +i) == '\0' ){
		  	valuecharS2=0;
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp = valuecharS1 - valuecharS2;
		  }
		  if( valuecharS1 != valuecharS2 ){
			printf("[charS1: %d & charS2: %d] : ", valuecharS1, valuecharS2);
			return cmp =  valuecharS1 - valuecharS2;
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
	//char str1[] = "deslettres";
	//char strSans[] = "123";
	//char strSansEtLettre[] = "123bcdef12assddes";
	char strNull[] = "";
	char stra[] = "a";
	char strMaju[] = "ABJKllm";
	char strmajuetminu[] = "ABJKklm";
	char strpluspetit[] = "ABJK";
	char strplusgrand[] = "ABJKRRR";
	//char strdepasseN[] = "ABJKllQ";
	//char strMajuNumMinu[] = "2345ABJKklm";
	//char strNonAscii[] = "£€*¤";
	char strNonAsciiEtAscii[] = "£€*¤dzdzd";
	char s1[] = "Bonjour 42 !";
	char s2[] = "Salut 42 !";
	char s3[] = "Bonjour 42 !";
	//int n =5;

	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s2, strcmp(s1, s2));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, strNonAsciiEtAscii, strcmp(s1, strNonAsciiEtAscii));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s3, strcmp(s1, s3));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strmajuetminu, strMaju, strcmp(strmajuetminu, strMaju));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strNull, stra, strcmp(strNull, stra));
	printf("strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strpluspetit, strplusgrand, strcmp(strpluspetit, strplusgrand));
	printf("\n");
	printf("\n");
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s2, ft_strcmp(s1, s2) );
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, strNonAsciiEtAscii, ft_strcmp( s1, strNonAsciiEtAscii));
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , s1, s3, ft_strcmp(s1, s3) );
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strmajuetminu, strMaju, ft_strcmp( strmajuetminu, strMaju) );
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strNull, stra, ft_strcmp(strNull, stra ) );
	printf("!! ft_strcmp [ s1 = '%s' et s2 = %s ] :  %d\n" , strpluspetit, strplusgrand, ft_strcmp(strpluspetit, strplusgrand));
	return 0;
}
