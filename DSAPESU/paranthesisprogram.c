#include<stdio.h>

int main(){
    char s[]="(]";
    char stack[100]={""};
    int top=-1;
    for(int i=0; s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stack[++top]=s[i];
        }
        else if((s[i]==')' && stack[top]=='(') || (s[i]=='}' && stack[top]=='{') || (s[i]==']' && stack[top]=='[')){
            top--;
        }
    }
    if(top==-1){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}