#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define m 3  /* 行列 A の行数 */ 
#define n 3 /* 行列 A の列数 , 行列 B の行数 */
#define r 1 /* 行列 B の列数 */


int main () {
double A [ m ][ n ];
double B [ n ][ r ];
double C [m][r];
double dc=0.0;


srand ( time ( NULL ));
for ( int i =0; i < m ; i ++){
    for ( int j =0; j < n ; j ++){
        A[ i ][ j ] = ( double )( rand ()%100);//0-100で乱数生成
    }
}

//乱数生成部
for ( int i =0; i < n ; i ++){
    for ( int j =0; j < r ; j ++){
        B [ i ][ j ] = ( double )( rand ()%100);
    }
}


printf (" 行列の積 AB :\n ");

for (int i=0; i<m; i++){
    for (int j=0; j<r; j++){
        for (int k=0; k<n; k++){
            C[i][j] += A[i][k] *B[k][j];
        }
    }
}
//表示
        printf("\n");

for ( int i =0; i < m ; i ++){
    for ( int j =0; j < r ; j ++){
       printf("%lf ",C[i][j]);
    }
       printf("\n");
}


return 0;
}
