#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter the array of size:");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
     int max=a[0];
    for(i=0;i<n;i++)
    {
      //  int max=a[0];
        if(max<a[i]){
            max=a[i];
            
        }
       // printf("max %d",max);

    }
        printf("max %d",max);

  //  printf("sum :%d",sum);

}