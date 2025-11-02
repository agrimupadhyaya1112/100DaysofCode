#include <stdio.h>
int main(){
    int cp,sp,p,l;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if (sp>cp){
    p = ((sp - cp)*100)/cp ;
    printf("Profit Percent is %d%%", p);
    }
    else if (cp>sp){
    l = ((cp - sp)*100)/cp ;
    printf("Loss Percent is %d%%", l);
    }

    else{
        printf("Neither loss nor profit.");
    }
   
    return 0;


}