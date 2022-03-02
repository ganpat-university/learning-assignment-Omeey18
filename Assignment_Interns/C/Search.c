#include<stdio.h>

int main(){
    int num, flag=0, temp;
    int arr[10]={1,5,4,8,9,2,0,6,11,7};
    
    printf("Enter Num: \n");
    scanf("%d",&num);

    for (int i = 0; i < 10; i++){
        
    for (int j = i + 1; j < 10; j++){
        
        if (arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    }
    
    for (int i = 0; i < 10; i++){
        if(num==arr[i]){
            flag=1;
        }
        printf("%d ",arr[i]);
    }
    printf("\n");
    if(flag==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

}