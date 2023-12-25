#include<stdio.h>
int main()
{
    char str[101];
    scanf("%[^
]s", &str);
     char c=str[0];
    for(int i=0; str[i] != NULL; i++){
        if(str[i]>c) c=str[i];
    }
    printf("%c", c);
}