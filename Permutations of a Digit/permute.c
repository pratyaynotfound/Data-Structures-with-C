#include<stdio.h>
#include<string.h>
//swapping the digits
void swap(char *x, char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
//generating permutations
void permutations(char *str,int a,int len){
    if(a==len)
        printf("%s\n",str);
    else{
        for(int i=a;i<=len;i++){
            swap((str+a),(str+i));//swapping digits
            permutations(str,a+1,len);//recursive call
            swap((str+a),(str+i));//backtracking
        }
    }
        
}
int main(){
    char str[10];
    //get the input string from user
    printf("Enter the digit:\n");
    scanf("%s",str);
    int n;
    n = strlen(str);
    //print all possible combinations
    printf("All possible combinations:\n");
    permutations(str,0,n-1);
    return 0;
}
