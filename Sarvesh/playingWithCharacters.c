//First, take a character,'ch'  as input.
//Then take the string,'s'  as input.
//Lastly, take the sentence 'sen' as input.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,d,str1[20],str2[50];
    scanf("%c",&c);
    scanf("%s",str1);
    gets(str2);
    scanf("%[^\n]s",str2);
    printf("%c\n",c);
    printf("%s\n",str1);
    puts(str2);
    return 0;
}
