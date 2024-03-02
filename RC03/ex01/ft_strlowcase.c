#include <stdio.h>
#include <string.h>
unsigned int ft_strlen(char *str)
{
        unsigned int i=0;
        while ( *(str+i) != '\0')
        {
	//	write(1,  (str+i), 1);
                i++;
        }
        return i;
}
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char *s1bis = (unsigned char *)s1;
	unsigned char *s2bis = (unsigned char *)s2;
	int cmp = 0;
	unsigned int valuecharS1 = 0;
	unsigned int valuecharS2 = 0;
	unsigned int i = 0;
	if( ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
	{
		valuecharS1 = ( unsigned int ) *(s1bis +0);
		valuecharS2 = ( unsigned int ) *(s2bis +0);
		printf("[*EDGE_CASE_s1||s2=Null*][charN° %d: %d & charN° %d: %d]", n, valuecharS1, n, valuecharS2);
		if( (cmp = valuecharS1 - valuecharS2) < 0 )
		{
			return -1;
		}
		else if( (cmp = valuecharS1 - valuecharS2) > 0 )
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if( n > ft_strlen(s1) )
	{
		printf("[*EDGE_CASE : 'i > ft_strlen(s1)' *][charN° %d: %d & charN° %d: %d]", n, valuecharS1, n, valuecharS2);
		return -1;
	}
	else if( n > ft_strlen(s2) )
	{
		printf("[*EDGE_CASE : 'i > ft_strlen(s2)' *][charN° %d: %d & charN° %d: %d]", n, valuecharS1, n, valuecharS2);
		return 1;
	}
	while( i <= n )
	{
		valuecharS1 = ( unsigned int) *(s1bis + i);
		valuecharS2 = ( unsigned int) *(s2bis + i);
		if( valuecharS1 != valuecharS2 ){
		printf("[charN° %d: %d & charN° %d: %d] : ", n, valuecharS1, n, valuecharS2);
			if ( (cmp =  valuecharS1 - valuecharS2) < 0 )
			{
				return -1;
			}
			else if ( (cmp =  valuecharS1 - valuecharS2) > 0 )
			{
				return 1;
			}
		}
		i++;
	}
	printf("[charN° %d: %d & charN° %d: %d]", n, valuecharS1, n, valuecharS2);
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
	char strNull2[] = "";
	char stra[] = "a";
	char strMaju[] = "ABJKQlm";
	char strmajuetminu[] = "ABJKllm";
	char strpluspetit[] = "ABJK";
	char strplusgrand[] = "ABJKRRR";
	//char strdepasseN[] = "ABJKllQ";
	//char strMajuNumMinu[] = "2345ABJKklm";
	//char strNonAscii[] = "£€*¤";
	char strNonAsciiEtAscii[] = "£€*¤dzdzd";
	char s1[] = "Bonjour 42 !";
	char s2[] = "Salut 42 !";
	char s3[] = "Bonjour 43 !";
	unsigned int n =5;

	printf("strncmp [ s1 = '%s' et s2 = '%s' ] :  %d\n" , s1, s2, strncmp(s1, s2, n));
	printf("stnrcmp [ s1 = '%s' et s2 = '%s' ] :  %d\n" , s1, strNonAsciiEtAscii, strncmp(s1, strNonAsciiEtAscii, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s' ] :  %d\n" , s1, s3, strncmp(s1, s3, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strmajuetminu, strMaju, strncmp(strmajuetminu, strMaju, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strNull, stra, strncmp(strNull, stra, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , stra, strNull, strncmp(stra, strNull, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strNull, strNull2, strncmp(strNull, strNull2, n));
	printf("strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strpluspetit, strplusgrand, strncmp(strpluspetit, strplusgrand, n));
	printf("\n");
	printf("\n");
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , s1, s2, ft_strncmp(s1, s2, n) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , s1, strNonAsciiEtAscii, ft_strncmp( s1, strNonAsciiEtAscii, n));
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , s1, s3, ft_strncmp(s1, s3, n) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strmajuetminu, strMaju, ft_strncmp( strmajuetminu, strMaju, n) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strNull, stra, ft_strncmp(strNull, stra, n ) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , stra, strNull, ft_strncmp(stra, strNull, n ) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strNull, strNull2, ft_strncmp(strNull, strNull2, n ) );
	printf(" !! ft_strncmp [ s1 = '%s' et s2 = '%s'] :  %d\n" , strpluspetit, strplusgrand, ft_strncmp(strpluspetit, strplusgrand, n));
	return 0;
}