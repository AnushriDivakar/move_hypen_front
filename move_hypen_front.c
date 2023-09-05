/*C programme to move all hyphens(-) in the string to the front of the given string.return NULL if string is empty*/

#include <stdio.h>
#include <string.h>

char * movehyphen(char s[], int n) {
    int i, j = 0;
    char ss[30];
    strcpy(ss,s);
    if(s==NULL)
    {
        return NULL;
    }
    for (i = 0; i < n; i++) {
        if (ss[i] == '-') {
            s[j] = '-';
            j++;
        }
        
    }

    for (i = 0; i < n; i++) {
        if (ss[i] != '-') {
            s[j] = ss[i];
            j++;
        }
    }

    s[j] = '\0'; 

  return s; 
}

int main() {
    char s[30];
    printf("Enter the string ");
    scanf("%s", s);
    int n = strlen(s);
    printf("%s",movehyphen(s, n));
    
    return 0;
}
