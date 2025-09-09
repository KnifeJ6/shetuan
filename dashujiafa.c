#include<stdio.h>
#include<string.h>
void reverse(char str[]){
    //字符反串函数
    int len = strlen(str);
    for(int i=0;i<len/2;i++){
        char desk=str[i];
        str[i]=str[len - 1 - i];
        str[len - 1 - i]=desk;
    }    
}
void add_large_number(const char* num1,const char* num2, char* result){
    //大数加法函数
    int i = strlen(num1)-1;
    int j = strlen(num2)-1;
    int k = 0;
    int carry = 0;
     //进位
     while(i >= 0 || j>= 0 || carry > 0){
        int digit1 = (i >=0) ?num1[i]-'0':0;
        int digit2 = (j >=0) ?num2[j]-'0':0;
        int sum =digit1 + digit2 +carry;
        result[k] = (sum % 10) + '0';
        carry = sum / 10;
        i--;
        j--;
        k++;
     }
     result[k]='\0';
     reverse(result);
}
int main(void){
    char num1[51];
    char num2[51];
    char result[52];
    printf("Enter the first large number:");
    scanf("%50s",num1);
    printf("Enter the second large number:");
    scanf("%50s",num2);
    add_large_number(num1,num2,result);
    printf("The sum is:%s\n",result);
    return 0;
}
