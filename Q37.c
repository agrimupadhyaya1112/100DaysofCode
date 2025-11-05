 #include <stdio.h>
int main(){
 int a,b,lcm;
 printf("Enter a and b: ");
scanf("%d %d", &a,&b);

 int max = (a>b)? a : b;
while( 1){
if (max % a == 0 && max % b == 0){
lcm = max;
 break;
 }
max++;
}    
printf("L.C.M = %d", lcm);
return 0;
 }
