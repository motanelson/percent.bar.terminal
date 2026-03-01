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
int finds(int *lists,int starts,int tofinds){
     int i=0;
     int count = starts;
     int total=ends;
     while(lists[count] != ends){
        if(lists[count]==tofinds){
            return count;

        }
        count++;
    
    }
    return -1;
}
int main(){
    int i=0;
    int list1[1000] = { ends};  // 0 termina a lista
    getlist(list1,20);
 
    printf("\033c\033[40;37m\n");
    report(list1);
    i=finds(list1,0,5);
    printf("\n%d \n",i);
    return 0;
}