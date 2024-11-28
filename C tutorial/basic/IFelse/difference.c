#include<stdio.h>

int main(){
    int n,m,l=0,k=0,c[50],d[50],flag=0;
     int a[n],b[m];
    printf("Enter the size of set A\n");
    scanf("%d",&n);
    printf("Enter the size of set B\n");
    scanf("%d",&m);
    // int a[n],b[m];    

    printf("Enter the element of set A\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

     printf("Enter the element of set B\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                flag++;
                break;
            }
            if(j==(m-1)){
                flag = 0;
            }
        }
       
        if(flag==0){
            c[l]=a[i];
            l++;
        }
        
         }
         
    for(int i=0;i<l;i++){
        printf("%d",c[i]);
    }

    return 0;

}