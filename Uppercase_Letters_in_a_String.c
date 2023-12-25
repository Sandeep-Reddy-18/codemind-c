#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int c=0;
    char str[101];
    scanf("%[^
]s", &str);
    for(int i=0; i<strlen(str); i++) {
        if(isupper(str[i])) c++;
    }
    printf("%d", c);
}