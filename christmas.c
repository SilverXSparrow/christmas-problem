#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    printf("Introduceti valoarea numarului natural N:\n");
    scanf("%d",&n);
    //parcurg toate valorile de la 1 la n
    for(int i=1;i<=n;i++)
    if(i%7==0)printf("Merry ");//verific daca e diviz cu 7
    else if (i%11==0)printf("Christmas ");//verific daca e diviz cu 11
    else if (i%77==0)printf("Merry Christmas ");//verific daca e diviz cu 77
    else printf("%d ",i);
}