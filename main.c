#include <stdio.h>
#include <stdlib.h>
int factorille(int X){
    int i, F = 1;

    for (i = 1; i <X+1; i++){
        F = F * i;
    }
    return F;

}
int main()
{
       int X,t,M,j,f=1;
    printf("donner un nomber\n");
    scanf("%d", &X);
       for (j = 1; j <X+1; j++){
        f = f * j;
    }
      printf("%d\n",f);
      printf("donner un nomber\n");
      scanf("%d", &M);
     t = factorille(M);
     printf("%d\n",t);

    return 0;
}
