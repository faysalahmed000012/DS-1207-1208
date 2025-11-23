 #include <stdio.h>
 #include <stdbool.h>

 int main(){

    int myArr[] = {102,5,6,4,2,9,3};
    int len = sizeof(myArr) / sizeof(myArr[0]);

    // bubble sort 
    for(int i = 0; i < len; i++){
        bool isSwaped = false;
       for(int j = 0; j < len - i; j++){
        if(myArr[j] > myArr[j + 1]){
            int temp = myArr[j];
            myArr[j] = myArr[j+1];
            myArr[j+1] = temp;
            isSwaped = true;
        }
       }
       if(!isSwaped){
        break;
       }
    }

    printf("Sorted Array \n");

    for(int i = 0; i < len; i++){
        printf("%d ",myArr[i]);
    }
    return 0;
 }