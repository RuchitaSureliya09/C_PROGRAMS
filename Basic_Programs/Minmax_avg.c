#include <stdio.h>
void main(){
    int n,num, min,max,sum;

    printf("Enter number of value that you want for operation : ");
    scanf("%d",&n); // store value

    printf("Enter value 1 : ");
    scanf("%d",&num);

    min=num;
    max=num;
    sum=num;

    for(int i=2;i<=n;i++){
        printf("Enter value %d : ",i);
        scanf("%d",&num);

        if(num>max)
            max=num;
        else if (num<min)
            min=num;
        
        sum+=num;
    }

    float avg=(float)sum/n;

    printf("Maximum number : %d\n",max);
    printf("Minimum number : %d\n",min);
    printf("Average of numbers : %.2f",avg);
}