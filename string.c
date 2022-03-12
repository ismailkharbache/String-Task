#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	char temp[100];
	int i = 0;
	scanf("%s",s);
    while(s[i])
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
	s[i] = '\0';
    i = 0;
    // printf(".");
	int count;
	char s2[100];
    while((s[i]))
    {
        
        if(s[i] == 'a' || s[i] == 'o' ||s[i] == 'y' ||s[i] == 'e' || s[i] == 'u'|| s[i] == 'i' )
        {
			
        }
		else
			printf(".%c",s[i]);
        i++;
 
    }
	
}
