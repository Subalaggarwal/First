#include <stdio.h>
int main(){
    // int n,a,b,sum;
    // a=0;
    // b=1;
    // int i=3;
    // printf("Enter the numbers of terms in fibonacci series : ");
    // scanf("%d", &n);
    // printf("%d , %d , ",a,b);
    // do{
    //     sum=a+b;
    //     printf("%d , ",sum);
    //     a=b;
    //     b=sum;
    //     i++;
    // }while(i<=n);
    int n;
    printf("enter number of terms : ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t%d\t",fib[0],fib[1]);
    printf("\t");
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("\t%d \t",fib[i]);
    }
    return 0;
}
