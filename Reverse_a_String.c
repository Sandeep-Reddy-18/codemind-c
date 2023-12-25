#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf("%[^
]s", &str);
    for(int i=strlen(str)-1; i>=0; i--) printf("%c",str[i]);
}