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
void reverters(int *lists,int *lists2){
     int i=0;
     int count = 0;
     int total=0;
     while(lists[count] != ends){
         count++;
    
    }
    total=count;
    count = 0; 
    while(lists[count] != ends){
        lists2[count]=lists[total-1-count];
        
        count++;
        
    }
    lists2[total]=ends;
   
}
int main(){
    int i=0;
    int list1[1000] = { ends};  // 0 termina a lista
    int list2[1000] = { ends};  // 0 termina a lista

    getlist(list1,20);
 
    printf("\033c\033[40;37m\n");
    report(list1);
    reverters(list1,list2);
    report(list2);
    
    return 0;
}