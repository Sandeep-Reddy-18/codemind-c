#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf("%[^
]s", &str);
    int sum=0;
    for(int i=0; i<strlen(str); i++){ 
        if(isdigit(str[i])) sum+=str[i] - '0';
    }
    printf("%d",sum);
}