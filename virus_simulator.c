#include <stdio.h>

int main() {


    int file[10] = {0,0,1,1,1,0,1,1,1,0};
    int option =0;
    int infectedFile=0;
    printf("Enter a number from 1-9 :");
    scanf("%d",&option);
    if(option < 1 || option > 10){
        printf("invalid option\n\n\n");

    }else{
        printf("scanning file %d\n\n\n",option);
        if(file[option -1] == 0){

        printf("File %d is safe", option);
        }else{
            printf("Threat Detected \n\n");
        printf("File %d is infected",option);
        infectedFile++;
        }
    }
    printf("\n\n\n\n\n%d\n\n\n",infectedFile);
    return 0;
}
