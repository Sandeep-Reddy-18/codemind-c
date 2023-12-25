#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        char mail[101];
        
        int hasdigit=0;
        scanf(" %100[^
]s", &mail);
        for(int j=0; j<strlen(mail); j++) {
            if(isdigit(mail[j])) hasdigit=1;
        }
        printf("%s", (hasdigit) ? "Yes
" : "No
");
    }
}