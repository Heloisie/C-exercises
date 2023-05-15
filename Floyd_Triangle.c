#include <stdio.h>

int main()
{
    int i, j, lines;

    scanf("%i",&lines);
    for(i=1;i<=lines;i++){
        for(j=1;j<=i;j++)
            if(i%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        printf("\n");

    }
    return 0;
}
