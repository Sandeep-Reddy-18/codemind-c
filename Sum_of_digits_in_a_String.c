#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int sum=0;
    char str[101];
    scanf("%[^
]s", &str);
    for(int i=0; i<strlen(str); i++) {
        if(isdigit(str[i])) sum+=str[i] - '0';
    }
    printf("%d", sum);
}