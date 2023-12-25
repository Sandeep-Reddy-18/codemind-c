#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int c=1;
    char str[101];
    scanf("%[^
]s", &str);
    for(int i=0; i<strlen(str); i++){
        if(i==0) continue;
        if(isupper(str[i])) c++;
    }
    printf("%d", c);
}