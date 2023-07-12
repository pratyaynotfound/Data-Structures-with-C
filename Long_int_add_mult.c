#include<stdio.h>
#include<string.h>
//multiply the long ints 
void multiply(int l1,int l2,char *longint1,char *longint2,char *mul){
    int a[l1];
    int b[l2];
    int result[100]={0};
    int carry = 0,i,j;
    for(int i = l1-1,j=0;i>=0;i--,j++){
        a[j] = longint1[i]-'0';
    }
    for(int i = l2-1,j=0;i>=0;i--,j++){
        b[j] = longint2[i]-'0';
    }
    for(i = 0;i<l2;i++){
        for(j = 0;j<l1;j++){
            result[i+j] += b[i]*a[j];
        }
    }
    for(i = 0;i<l1+l2;i++){
        carry = result[i]/10;
        result[i] = result[i]%10;
        result[i+1] = result[i+1]+ carry;
    }
    for(i = l1+l2;i>=0;i--){
        if(result[i] > 0)
            break;
    }
    for(int j = 0;j<l1+l2;i--,j++){
        mul[j] = result[i]+48;
    }
}
//function for adding the 2 given long ints
void add_int(int l1,int l2,char *longint1,char *longint2,char *add){
    int sum,carry = 0,i,j,k;
    char result[60];
    k = l1>l2?l1:l2;
    result[k] = '\0';
    k--;
    i = l1-1;
    j = l2-1;
    while(i>=0 && j>=0){
        sum = longint1[i]-'0'+longint2[j]-'0'+carry;
        result[k] = sum%10+'0';
        carry = sum/10;
        i--;
        j--;
        k--;
    }
    if(i>=0){
        while(i>=0){
            sum = longint1[i]-'0'+carry;
            result[k] = sum%10+'0';
            carry = sum/10;
            i--;
            k--;
        }
    }
    else if(j>=0){
        while(j>=0){
            sum = longint2[j]-'0'+carry;
            result[k] = sum%10+'0';
            carry = sum/10;
            j--;
            k--;
        }
    }
    if(carry>0){
        for(int i = strlen(result);i>=0;i--){
            result[i+1] = result[i];
        }
        result[0] = carry+'0';
    }
    for(int i = 0;i<strlen(result);i++){
        add[i] = result[i];
    }
}
int main(){
    char longint1[50];
    char longint2[50];
    int l1, l2, k,carry = 0,i,j;
    //take the input and store them using string
    printf("Enter the first long int:\n");
    scanf("%s", longint1);
    printf("Enter the second longint:\n");
    scanf("%s", longint2);
    //determine their length by using strlen fucntion
    l1 = strlen(longint1);
    l2 = strlen(longint2);
    //allocate memory for toring the addition and multiplication results
    char mul[l1+l2];
    char add[60];
    //call add and multiply functions 
    add_int(l1,l2,longint1,longint2,add);
    multiply(l1,l2,longint1,longint2,mul);
    //print the result after the addition and multiplicaton
    printf("Addition result:\n");
    puts(add);
    printf("Multiplication result\n");
    puts(mul);
    return 0;
}