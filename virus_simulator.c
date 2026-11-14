#include <stdio.h>

int main() {


    int file[10] = {0,0,1,1,1,0,1,1,1,0};
    int option =0;
    int infectedFile=0;
    int choice = 1;
    int scannedCount = 0;
    int safeFile = 0;

    while(choice==1){
        
        printf("Enter file number (1-10) :");
        scanf("%d",&option);
        if(option < 1 || option > 10){
            printf("invalid option\n\n");

        }else{
            printf("scanning file %d\n\n",option);
            if(file[option -1] == 0){
                printf("File %d is safe\n\n", option);
                scannedCount++;
                safeFile++;
            }else{
                printf("Threat Detected \n\n");
            printf("File %d is infected\n",option);
            infectedFile++;
            scannedCount++;
            }
        }
        printf("Scan another file? (1= YES, 0= NO): ");
        scanf("%d",&choice);
        if(choice !=1 && choice !=0){
            printf("invalid option!\n");
            choice =1;
        }
       
    }
    printf("\n\nTotal files scanned: %d\n",scannedCount);
    printf("\nTotal infected files: %d",infectedFile);
    printf("\nTotal safe files: %d",safeFile);
    return 0;
}
