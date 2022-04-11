#include <stdio.h>
#include <stdlib.h>

int auth(int account[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == account[i][0] && pin == account[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int account[3][2] = {{1356,6789},{9751,2891},{3487,4397}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(account,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
