#include <stdio.h>
#include <stdlib.h>
#define ends -99999999
void getlist(int *lists,int values){
    int n=0;
    for(n=0;n<values;n++)lists[n]=values-n;
    lists[n]=ends;
}
void report(int *lists){
    int count = 0;
    printf("[ ");
    while(lists[count] != ends){
        printf("%d , ", lists[count]);
        count++;
    }
    printf("]\n");
}
int means(int *lists){
     int i=0;
     int count = 0;
     int total=0;
     while(lists[count] != ends){
         total=total+lists[count];
         count++;
    
    }
    total=total/count;
     
    return total;
   
}
int main(){
    int i=0;
    int list1[1000] = { ends};  // 0 termina a lista
    int list2[1000] = { ends};  // 0 termina a lista

    getlist(list1,20);
 
    printf("\033c\033[40;37m\n");
    report(list1);
    i=means(list1);
    printf("\n%d \n",i);
    
    return 0;
}