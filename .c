#include <stdio.h>

int main() {
    int phy,chem,maths;
    int total;
    float percentage;
    
printf("enter your phy marks(out of 100)");
scanf("%d",&phy);

printf("enter your chem marks(out of 100)");
scanf("%d",&chem);

printf("enter your maths marks(out of 100)");
scanf("%d",&maths);

if (phy>=33){
    printf("pass in phy\n");
}else {
    printf("fail in phy\n");
}

if (chem>=33){
    printf("pass in chem\n");
}else{
    printf("fail in chem\n");
}
if (maths>=33){
    printf("pass in maths\n");
}else{
    printf("fail in maths\n");
}
total = phy+chem+maths;
percentage=(total/300.0)*100;

 printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if(percentage>=40 && phy>=33 && chem>=33 && maths>=33){
        printf("you have passed overall!");
        }else{
            printf("you failed!");
        }
        return 0;



}
