#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[101];
    int c=0;
    scanf("%[^
]s", &str);
    for(int i=0; i<strlen(str); i++) {
        if(islower(str[i])) c++;
    }
    printf("%d", c);
}