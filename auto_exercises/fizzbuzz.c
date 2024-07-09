#include<stdio.h> 

int main(){
    int init = 0;
    while (init < 20 )  {
        init += 1;
        if (init % 3 == 0 && init % 5 == 0) {
                printf("fizzbuzz\n");
        }else if (init % 3 == 0){
            printf("fizz\n");
        }else if (init % 5 == 0){
            printf("buzz\n");
        }else {
            printf("init now is: %d\n", init);
        }
    }
    return 0;
}




