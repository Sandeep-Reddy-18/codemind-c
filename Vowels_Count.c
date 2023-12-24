#include<stdio.h>
int main()
{
    char s[101], vc=0;
    scanf("%[^
]s", &s);
    
    for(int i=0; s[i] != NULL; i++) if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') vc++;
    printf("%d", vc);
}