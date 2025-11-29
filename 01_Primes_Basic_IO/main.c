#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    int is_suhsu(int n) {
        if(n==1) return 0;
        int limit = sqrt(n);
        for(int i=2;i<=limit;i++) {
            if(n%i==0) {
                return 0;
            }

        }
        return 1;
    }
    int main() {
        int N;
        int arr[100000];
        scanf("%d",&N);
        for(int i=1;i<=N;i++) {
            scanf("%d",&arr[i-1]);


        }
        int space=1;
        for (int i = 1; i <= N; i++) {
            if (is_suhsu(arr[i-1])) {
                if(!space) {
                    printf(" ");
                }
                printf("%d", arr[i-1]);
                space=0;

            }
        }
    }