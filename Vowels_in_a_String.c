#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101], c;
    int index=-1;
    scanf("%[^
]s", &str);
    scanf(" %c", &c);
    for(int i=0; i<strlen(str); i++) {
        if(str[i]==c){
            index=i;
            break;
        }
        if(index!=-1) break;
    }
    if (index == -1) printf("False
");
    else printf("True
%d
", index);
}