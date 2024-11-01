
#include<stdio.h>
int main(void){
    int n;
    int i=0;
    int array[100];
    double average=0;

printf("please ,enter numbers \n if you want to finish entering number just enter '-1'\n");
while(1)
{

scanf("%d",&n); 
if (n==-1){
break;
}
array[i]=n;
average= array[i]+average;
i++;
}
 printf( "Numbers : ");
for (int a=0;a<i;a++){
printf("%d ,",array[a]);
}
    printf("\n");
printf("Average : %.2f\n",average/i);
printf("Total : %.0f\n", average);

}
