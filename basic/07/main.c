#include <stdio.h>

int main() {
    int maxLine = 5, data, minteger, lineNumber;

    for (lineNumber = 1; lineNumber <= maxLine; lineNumber++){
        if((lineNumber % 2) == 0){
            for(data=lineNumber*5;data >= (lineNumber * 5) - 4; data--){
                printf("%d\t", data);
            }
        }else{
            for(data=(5*(lineNumber-1)) + 1;data <= (5*(lineNumber-1)) + 5; data++){
                printf("%d\t", data);
            }
        }
        printf("\n");
    }

    return 0;
}