#include <stdio.h>
#include <stdlib.h>
#define ends -99999999
void addlist(int *lists,int values){
    int n=0;
    int total=values;
    int vales=0;
    int count=0;
    while(1){
        if (lists[count]==ends){
            lists[count]=total;
            lists[count+1]=ends;
            break;
        }else{
            if (lists[count]>total){
                 vales=lists[count];
                 lists[count]=total;
                 total=vales;
            }
         }
         count=count+1;
    }
    
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
void sorts(int *lists,int *list2){
     int i=0;
     int count = 0;
     int total=0;
     while(lists[count] != ends){
         addlist(list2,lists[count]);
         count++;
    
    }
    
}
int main(){
    int i=0;
    int list1[1000] = {9,8,5,1,4,10,11,12,3,2,1, ends};  // 0 termina a lista
    int list2[1000] = { ends};  // 0 termina a lista

   
 
    printf("\033c\033[40;37m\n");
    report(list1);
    sorts(list1,list2);
    report(list2);
    return 0;
}