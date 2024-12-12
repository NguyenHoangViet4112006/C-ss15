#include <stdio.h>


void xoakytu(char str[], char ch){
    int j = 0;
    int len = strlen(str);

    for (int i=0; i < len; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = ' ';
}

int main() {
    char str[]="oqoqoala";
    char ch;
    printf("nhap ky tu can xoa ");
    scanf("%c", &ch);
    xoakytu(str, ch);
    printf("%s", str);
    return 0;
}

