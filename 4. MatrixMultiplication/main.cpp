/*
Да се напише програма, която умножава две матрици. MxN * NxK = MxK.
Вход
На първия ред се задават числата M, N и K. На следващите M реда се задават
по N числа, а на следващите N реда се задават по K числа.
Изход
Матрица с M реда по K числа на ред, която е резултат от умножението на
предните две.
Ограничения
TL: 0.1s
ML: 16 MB
1 <= M <= 20
1 <= N <= 20
1 <= K <= 20
Елементите на входните матрици (MxN и NxK) са цели числа между -100 000 и
100 000.
*/
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
