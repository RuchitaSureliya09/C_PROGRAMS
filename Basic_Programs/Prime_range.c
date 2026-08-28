#include <stdio.h>
void main(){
    int n1,n2;

    printf("Enter any two number of range : ");
    scanf("%d %d",&n1,&n2);

    printf("Prime number between Range :");

    int flag;

    for(int i=n1+1;i<n2;i++){

        flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag++;
            }
        }

        if(flag==0)
        printf("%d\n",i);
    }
}