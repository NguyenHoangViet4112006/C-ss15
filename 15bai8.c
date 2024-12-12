#include <stdio.h>
void countCharacters(char str[]){
    int count[256] = {0};

    for (int i = 0; str[i]; i++){
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main(){
    char str[] = "aassddffgh";
    countCharacters(str);
    return 0;
}

