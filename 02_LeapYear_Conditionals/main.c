#include <stdio.h>
#include <stdlib.h>

int is_runian(int n) {
    if (n%4==0&&n%100!=0||n%400==0) {
        return 1;
    }
    return 0;

}
int shu=10;
int main(void) {
    int a , b,index ;
    int space=0;
    index=0;
    scanf("%d %d" , &a , &b);
     int *run=(int *)malloc(shu*sizeof(int));
    for (a;a<=b;a++) {
        if (is_runian(a)) {
            run[index]=a;
            index++;
            if (index==shu) {
                shu+=10;
                int *temp=(int *)realloc(run,shu*sizeof(int));
                if (temp!=NULL){
                    run=temp;

                }

            }

        }


    }
    printf("%d\n" , index);
    for (int i=0;i<index;i++) {
        if (space) {
            printf(" ");
        }
        printf("%d",run[i]);
        space=1;
        }

    free(run);
    }

