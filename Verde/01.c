#include <stdio.h>

int maisVelho(int M ,int A,int B){
    
int C = M - A - B;
int maisvelho;

if ( A >= B && A >= C ) {
    maisvelho = A;
}
    
else if (B >= A && B >= C) {
    maisvelho = B;
}
    else {
    maisvelho = C;
    }

    return maisvelho;
}

int main()
{
    int M; scanf("%i", &M);
    int A; scanf("%i", &A);
    int B; scanf("%i", &B);

    printf("%i", maisVelho(M, A, B));

    return 0;
}
