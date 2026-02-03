#include<stdio.h>
int main(){
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a < b){
    if(c < b){
        printf("%d is the 2nd greatest number",c);
    }else{
       printf("%d is the 2nd greatest number",b);
    }
   }else{
    printf("%d is the 2nd greatest number",a);
   }
   return 0;
}
