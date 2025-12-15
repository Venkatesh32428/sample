#include<stdio.h>

struct lifts{
    int lift_id[3];
    int lift_current_floor[3];
    int lift_target_floors[6];
    char direction[3][6];
};

int main(){
    struct lifts li;
    printf("------------------lift allocation-----------------\n");
    li.lift_current_floor[0]=0;
    li.lift_current_floor[1]=0;
    li.lift_current_floor[2]=0;
    li.lift_current_floor[3]=0;
    strcpy(li.direction[0],"IDEL");
    strcpy(li.direction[1],"IDEL");
    strcpy(li.direction[2],"IDEL");
    strcpy(li.direction[3],"IDEL");
    int total_floors;
    printf("enter the number of floors:");
    scanf("%d",&total_floors);
    int source_floor;
    printf("enter the source floor:");
    scanf("%d",&source_floor);
    if(total_floors>=0 && source_floor>=0 && source_floor==li.cu)
}