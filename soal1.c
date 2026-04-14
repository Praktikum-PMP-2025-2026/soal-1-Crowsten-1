#include <stdio.h>

int N,x;

int main (){
    scanf("%d", &N);

    for (int i=1;i<=N;i++){
            if(i%2==0 && i%3==0){
        printf("Biru\n");
        }
        else if (i%3==0){
            printf("MERAH\n");
        }
        else if (i%2==0){
            printf("KUNING\n");
        }
        else if(i>=10 && i%2==0 ){
            printf("HIJAU\n");
        }
        else{
            printf("%d\n",i);
        }
    }

}
