#include <iostream>
#include <stdio.h>
#include <math.h>

int  m,n,k;
long long sum = 0;
long long mat1[32][32], mat2[32][32], mat3[32][32];

int main(){

scanf("%d %d %d", &m, &n, &k);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%lld", &mat1[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            scanf("%lld", &mat2[i][j]);
        }
    }

    for(int l=0; l<m; l++){
        for(int j=0; j<k; j++){
            for(int i=0; i<n; i++){
                sum = sum + mat1[l][i]*mat2[i][j];
            }
            mat3[l][j] = sum;
            sum=0;
        }
    }

    for(int i=0; i< m; i++){
        printf("%lld", mat3[i][0]);
        for(int j=1; j<k; j++){
            printf(" %lld", mat3[i][j]);
        }
        printf("\n");
    }
}
