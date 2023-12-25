#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]s", &str);
    for(int i=0; i<strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    printf("%s",str);
}