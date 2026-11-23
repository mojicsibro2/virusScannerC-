#include <stdio.h>
int main() {
    int file[10] = {0,0,1,1,1,0,1,1,1,0};
    int option =0;
    int infectedFile=0;
    int choice = 1;
    int scannedCount = 0;
    int safeFile = 0;
    int scanned[10]={0};
    int menuChoice=0;

    printf("========== VIRUS SIMULATION SYSTEM =========\n\n");
    printf("1. Scan one file\n");
    printf("2. Scan all remaining files\n");
    printf("0. Exit\n\n");
    printf("Choose an Option:\n\n");
    scanf("%d",&menuChoice);
    if(menuChoice==2){
        for(int i=0;i<10;i++){
            if(scanned[i]==0){
                printf("Scanning file %d\n\n",i+1);
                if(file[i]==0){
                    safeFile++;
                    scannedCount++;
                    printf("File %d is safe\n\n", i+1);
                }else{
                                printf("Threat Detected \n\n");
                                printf("File %d is infected\n",i+1);
                                infectedFile++;
                                scannedCount++;
                            }
                scanned[i]=1;
            }
        }
    }else if(menuChoice==1){
        while(choice==1){

                    printf("Enter file number (1-10) :");
                    scanf("%d",&option);

                    if(option < 1 || option > 10){
                        printf("invalid option\n\n");

                    }else if(scanned[option-1]==1){

                        printf("this file has already been scanned");
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
                            scanned[option-1]=1;
                        }
                        printf("Scan another file? (1= YES, 0= NO): ");
                        scanf("%d",&choice);
                    if(choice !=1 && choice !=0){
                        printf("invalid option!\n");
                        choice =1;
                        }
            }
    }else if(menuChoice == 0){
        printf("Exiting Virus Simulation System...\n");
    }

    printf("\n========== FILE STATUS REPORT ==========\n");
    for(int i=0;i<10;i++){
        if(scanned[i]==0){
            printf("File %d: Not Scanned\n",i+1);
        }else if(file[i]==0){
            printf("File %d: Safe\n",i+1);
        }else{
            printf("File %d:Infected\n",i+1);
        }
    }
    printf("\n\nTotal files scanned: %d\n",scannedCount);
    printf("\nTotal infected files: %d",infectedFile);
    printf("\nTotal safe files: %d",safeFile);
    return 0;
}

