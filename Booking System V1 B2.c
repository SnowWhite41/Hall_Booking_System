//libs
#include <stdio.h>
#include <string.h>

//global variables
#define GMLPC 5
#define OFLPC 5
#define STATPC 5
#define SIMPC 5
#define ENGTBL 5
#define CVLTBL 5
#define CHEMTBL 5
#define PHYTBL 5
#define TMPAR 5

#define LABTBLRW 5

//Structures
//Hall 2 Lab 1 Structure
struct HALLSTR_2_LAB_1{
    char ENGINEERING[ENGTBL];
    char ENGINEERINGF[ENGTBL];
    char CIVIL[CVLTBL];
    char CIVILF[CVLTBL];
};

//Hall 2 Lab 2 Structure
struct HALLSTR_2_LAB_2{
    char CHEMICAL[CHEMTBL];
    char CHEMICALF[CHEMTBL];
    char PHYSICS[PHYTBL];
    char PHYSICSF[PHYTBL];
};

//Hall 2 Structure
struct HALLSTR_2{
    struct HALLSTR_2_LAB_1 HALL_2_Lab_1;
    struct HALLSTR_2_LAB_2 HALL_2_Lab_2;
};

//Hall 1 Lab 1 Structure
struct HALLSTR_1_LAB_1{
    char GAMING[GMLPC];
    char GAMINGF[GMLPC];
    char OFFICE[OFLPC];
    char OFFICEF[OFLPC];
};

//Hall 1 Lab 2 Structure
struct HALLSTR_1_LAB_2{
    char STAT[STATPC];
    char STATF[STATPC];
    char SIMULATION[SIMPC];
    char SIMULATIONF[SIMPC];
};

//Hall 1 Structure
struct HALLSTR_1{
    struct HALLSTR_1_LAB_1 HALL_1_Lab_1;
    struct HALLSTR_1_LAB_2 HALL_1_Lab_2;
};

//Building
struct BUILDING{
    struct HALLSTR_1 Hall_1;
    struct HALLSTR_2 Hall_2;
};

//Function for Horizontal Line
void HLLF(int HLL,char HLC){
    printf("\n");
    for (int i = 0; i < (HLL/2); i++) {
        printf("%c", HLC);
    }
    printf("\n\n");
}

//Function for Horizontal Line v2
void HLLF2(int HLL,char HLC2){
    for (int i = 0; i < (HLL/2); i++) {
        printf("%c", HLC2);
    }
    printf("\n");
}

//Function for Horizontal Line v2.1
void HLLF2_1(int HLL,char HLC2){
    for (int i = 0; i < (HLL/4); i++) {
        printf("%c", HLC2);
    }
    printf("\n");
}

//Function for Horizontal Line v3
void HLLF3(int HLL,char HLC3){
    for (int i = 0; i < HLL; i++) {
        printf("%c", HLC3);
    }
    printf("\n");
}

void TBLHEAD_SECTIONS(){
    printf("|     Gaming    |");
    printf("|     Office    |");
    printf("|   Statistic   |");
    printf("|   Simulation  |");
    printf("|  Engineering  |");
    printf("|      Civil    |");
    printf("|   Chemistry   |");
    printf("|     Physics   |");
    printf("\n");
}

void TBLHEAD_LABS(){
    printf("|             LAB 1              |");
    printf("|             LAB 2              |");
    printf("|             LAB 1              |");
    printf("|             LAB 2              |");
    printf("\n");
}

void TBLHEAD_HALLS(){
    printf("|                              HALL 1                              |");
    printf("|                              HALL 2                              |");
    printf("\n");
}

void CONTOREXT(int CONTREQ){
    //Continue or Exit
    printf("Press Any Number to Continue, Please Do not input Letters/Characters to Void Messing the Terminal.\n");
    scanf("%d",&CONTREQ);
    printf("\n");
}

int main(){
    //Variables
    struct BUILDING STBUILDING;
    int CONTREQ,UIPMAIN,UIPHALL,UIPLAB,LBPCIP=0,GPCPCIP=0,OFCPCIP=0,STATPCIP=0,SIMPCIP=0,LBTBLIP=0,ENGTBLIP=0,CVLTBLIP=0,CHEMTBLIP=0,PHYTBLIP=0;
    int GMRSV=0,OFCRSV=0,STATRSV=0,SIMRSV=0,ENGRSV=0,CVLRSV=0,CHEMRSV=0,PHYRSV=0;
    int GMFREE=GMLPC,OFCFREE=OFLPC,STATFREE=STATPC,SIMFREE=SIMPC,ENGFREE=ENGTBL,CVLFREE=CVLTBL,CHEMFREE=CHEMTBL,PHYFREE=PHYTBL;
    int HLL = 136;
    char HLC = '-';
    char HLC2 = '+';
    char HLC3 = '-';

    //requesting main input
    HLLF2(HLL,HLC2);
    printf("Hello, Welcome to Lab Item Reservation System.\n");
    HLLF2(HLL,HLC2);
    printf("\n");
    printf("Press 1 to Continue, Any Key except 1 to exit.\n");
    scanf("%d",&CONTREQ);
    printf("\n");

    while (CONTREQ==1){
        //Entering the system
        /*
        printf("Hall-1 > Computer Labs > 1.Gaming & Office Lab | 2.Statistics & Simulations Lab\n");
        printf("Hall-2 > Science Experimental Labs > Lab 1 > 1.Engineering & Civil Lab | 2.Chemical & Physics Lab\n\n");
        */

        //Table Caption
        HLLF2_1(HLL,HLC2);
        printf("The Building Structure.\n");
        HLLF2_1(HLL,HLC2);

        //Print the table
        HLLF3(HLL,HLC3);
        TBLHEAD_HALLS();
        HLLF3(HLL,HLC3);
        TBLHEAD_LABS();
        HLLF3(HLL,HLC3);
        TBLHEAD_SECTIONS();
        HLLF3(HLL,HLC3);
        printf("\n");

        printf("Press 1 to Reserve, 2 to Check Availability\n");
        scanf("%d",&UIPMAIN);

        HLLF(HLL,HLC);//Horizontal Line

        //if user need to reserve
        if (UIPMAIN==1){
            printf("Please Select the Hall\n");
            printf("Press 1 to Select Hall 1 or Press 2 to Select Hall 2.\n");
            scanf("%d",&UIPHALL);

            HLLF(HLL,HLC);//Horizontal Line

//--Hall 1 -----------------------------------------------------------------------------------------------------------------
            //if User selected Hall 1
            if (UIPHALL==1){
                printf("What Lab You Want To Reserve\n");
                printf("Perss 1 to Select Lab 1 or Press 2 to Select Lab 2.\n");
                scanf("%d",&UIPLAB);

                HLLF(HLL,HLC);//Horizontal Line

//--Hall 1 > LAB 1---------------------------------------------------------------------------------------------------------
                //if User selected Lab 1
                if (UIPLAB==1){
                    printf("Lab Capacity : %d PC's for Gaming | %d PC's for Office\n",GMLPC,OFLPC);
                    printf("Perss 1 to Reserve Gaming PC's or Press 2 to Reserve Office PC's.\n");
                    scanf("%d",&LBPCIP);

                    HLLF(HLL,HLC);//Horizontal Line

//--Hall 1 > LAB 1 > Gaming PC--------------------------------------------------------------------------------------------
                    //if User selected GamingPC
                    if(LBPCIP==1){
                        printf("Total Reserved: %d.\n",GMRSV);
                        printf("Total Free: %d.\n",GMFREE);
                        printf("\n");
                        printf("Select How Many PC's You Need.\n");
                        scanf("%d",&GPCPCIP);

                        printf("\n");

                        //adding to the array
                        if((GPCPCIP<=GMLPC)&&(GPCPCIP<=GMFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<GPCPCIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<GMLPC;i++){
                                STBUILDING.Hall_1.HALL_1_Lab_1.GAMING[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<GPCPCIP;j++){
                                for(int i=0;i<(GMRSV+GPCPCIP);i++){
                                    STBUILDING.Hall_1.HALL_1_Lab_1.GAMING[i]=TEMPARY[j];
                                }
                            }

                            GMRSV=GMRSV+GPCPCIP; // memorize the Reserved PC count
                            GMFREE=GMLPC-GMRSV; // memorize the Reserved PC count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<GMLPC;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.GAMING[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",GMRSV);
                            printf("Total Free: %d.\n",GMFREE);
                            printf("\n");

                            HLLF(HLL,HLC);

                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);

                    }
//--Hall 1 > LAB 1 > Office PC--------------------------------------------------------------------------------------------
                    //if User selected OfficePC
                    if(LBPCIP==2){
                        printf("Total Reserved: %d.\n",OFCRSV);
                        printf("Total Free: %d.\n",OFCFREE);
                        printf("\n");
                        printf("Select How Many PC's You Need.\n");
                        scanf("%d",&OFCPCIP);

                        printf("\n");

                        //adding to the array
                        if((OFCPCIP<=OFLPC)&&(OFCPCIP<=OFCFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<OFCPCIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<OFLPC;i++){
                                STBUILDING.Hall_1.HALL_1_Lab_1.OFFICE[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<OFCPCIP;j++){
                                for(int i=0;i<(OFCPCIP+OFCRSV);i++){
                                    STBUILDING.Hall_1.HALL_1_Lab_1.OFFICE[i]=TEMPARY[j];
                                }
                            }

                            OFCRSV=OFCRSV+OFCPCIP; // memorize the Reserved PC count
                            OFCFREE=OFLPC-OFCRSV; // memorize the Reserved PC coun

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<OFLPC;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.OFFICE[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",OFCRSV);
                            printf("Total Free: %d.\n",OFCFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
                }

//--Hall 1 > LAB 2---------------------------------------------------------------------------------------------------------
                //if User selected Lab 2
                if (UIPLAB==2){
                    printf("Lab Capacity : %d PC's for Statistic | %d PC's for Simulation\n",STATPC,SIMPC);
                    printf("Perss 1 to Reserve Statistic PC's or Press 2 to Reserve Simulation PC's.\n");
                    scanf("%d",&LBPCIP);

                    HLLF(HLL,HLC);//Horizontal Line

//--Hall 1 > LAB 2 > Stat PC--------------------------------------------------------------------------------------------
                    //if User selected Stat PC
                    if(LBPCIP==1){
                        printf("Total Reserved: %d.\n",STATRSV);
                        printf("Total Free: %d.\n",STATFREE);
                        printf("\n");
                        printf("Select How Many PC's You Need.\n");
                        scanf("%d",&STATPCIP);

                        printf("\n");

                        //adding to the array
                        if((STATPCIP<=STATPC)&&(STATPCIP<=STATFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<STATPCIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<STATPC;i++){
                                STBUILDING.Hall_1.HALL_1_Lab_2.STAT[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<STATPCIP;j++){
                                for(int i=0;i<(STATRSV+STATPCIP);i++){
                                    STBUILDING.Hall_1.HALL_1_Lab_2.STAT[i]=TEMPARY[j];
                                }
                            }

                            STATRSV=STATRSV+STATPCIP; // memorize the Reserved PC count
                            STATFREE=STATPC-STATRSV; // memorize the Reserved PC count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<STATPC;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.STAT[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",STATRSV);
                            printf("Total Free: %d.\n",STATFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
//--Hall 1 > LAB 2 > simulation PC--------------------------------------------------------------------------------------------
                    //if User selected SimulationPC
                    if(LBPCIP==2){
                        printf("Total Reserved: %d.\n",SIMRSV);
                        printf("Total Free: %d.\n",SIMFREE);
                        printf("\n");
                        printf("Select How Many PC's You Need.\n");
                        scanf("%d",&SIMPCIP);

                        printf("\n");

                        //adding to the array
                        if((SIMPCIP<=SIMPC)&&(SIMPCIP<=SIMFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<SIMPCIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<SIMPC;i++){
                                STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATION[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<SIMPCIP;j++){
                                for(int i=0;i<(SIMRSV+SIMPCIP);i++){
                                    STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATION[i]=TEMPARY[j];
                                }
                            }

                            SIMRSV=SIMRSV+SIMPCIP; // memorize the Reserved PC count
                            SIMFREE=SIMPC-SIMRSV; // memorize the Reserved PC count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<SIMPC;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATION[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",SIMRSV);
                            printf("Total Free: %d.\n",SIMFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
                }
            }
//--Hall 2 -----------------------------------------------------------------------------------------------------------------
            //if User selected Hall 2
            if (UIPHALL==2){
                printf("What Lab You Want To Reserve\n");
                printf("Press 1 to Select Lab 1 or Press 2 to Select Lab 2.\n");
                scanf("%d",&UIPLAB);

                HLLF(HLL,HLC);//Horizontal Line

//--Hall 2 > LAB 1---------------------------------------------------------------------------------------------------------
                //if User selected Lab 1
                if (UIPLAB==1){
                    printf("Lab Capacity : %d Tables for Engineering | %d Tables for Civil\n",ENGTBL,CVLTBL);
                    printf("Press 1 to Reserve Engineering Lab Table or Press 2 to Reserve Civil Lab Table.\n");
                    scanf("%d",&LBTBLIP);

                    HLLF(HLL,HLC);//Horizontal Line

//--Hall 2 > LAB 1 > Engineering Table--------------------------------------------------------------------------------------
                    //if User selected Engineering Table
                    if(LBTBLIP==1){
                        printf("Total Reserved: %d.\n",ENGRSV);
                        printf("Total Free: %d.\n",ENGFREE);
                        printf("\n");
                        printf("Select How Many Tables You Need.\n");
                        scanf("%d",&ENGTBLIP);

                        printf("\n");

                        //adding to the array
                        if((ENGTBLIP<=ENGTBL)&&(ENGTBLIP<=ENGFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<ENGTBLIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<ENGTBL;i++){
                                STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERING[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<ENGTBLIP;j++){
                                for(int i=0;i<(ENGRSV+ENGTBLIP);i++){
                                    STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERING[i]=TEMPARY[j];
                                }
                            }

                            ENGRSV=ENGRSV+ENGTBLIP; // memorize the Reserved Table count
                            ENGFREE=ENGTBL-ENGRSV; // memorize the Reserved Table count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<ENGTBL;i++){
                                printf("Table%d - %c ",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERING[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",ENGRSV);
                            printf("Total Free: %d.\n",ENGFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much Tables are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);

                    }
//--Hall 2 > LAB 1 > Civil Table--------------------------------------------------------------------------------------------
                    //if User selected Civil Table
                    if(LBTBLIP==2){
                        printf("Total Reserved: %d.\n",CVLRSV);
                        printf("Total Free: %d.\n",CVLFREE);
                        printf("\n");
                        printf("Select How Many Tables You Need.\n");
                        scanf("%d",&CVLTBLIP);

                        printf("\n");

                        //adding to the array
                        if((CVLTBLIP<=CVLTBL)&&(CVLTBLIP<=CVLFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<CVLTBLIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<CVLTBL;i++){
                                STBUILDING.Hall_2.HALL_2_Lab_1.CIVIL[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<CVLTBLIP;j++){
                                for(int i=0;i<(CVLRSV+CVLTBLIP);i++){
                                    STBUILDING.Hall_2.HALL_2_Lab_1.CIVIL[i]=TEMPARY[j];
                                }
                            }

                            CVLRSV=CVLRSV+CVLTBLIP; // memorize the Reserved Table count
                            CVLFREE=CVLTBL-CVLRSV; // memorize the Reserved Table count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<CVLTBL;i++){
                                printf("Table%d - %c ",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.CIVIL[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",CVLRSV);
                            printf("Total Free: %d.\n",CVLFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
                }

//--Hall 2 > LAB 2---------------------------------------------------------------------------------------------------------
                //if User selected Lab 2
                if (UIPLAB==2){
                    printf("Lab Capacity : %d for Chemistry Lab Tables | %d for Physics Lab Tables\n",CHEMTBL,PHYTBL);
                    printf("Press 1 to Reserve Chemistry Lab Tables or Press 2 to Reserve Physics Lab Tables.\n");
                    scanf("%d",&LBPCIP);

                    HLLF(HLL,HLC);//Horizontal Line

//--Hall 2 > LAB 2 > Chem Table--------------------------------------------------------------------------------------------
                    //if User selected Chem Table
                    if(LBPCIP==1){
                        printf("Total Reserved: %d.\n",CHEMRSV);
                        printf("Total Free: %d.\n",CHEMFREE);
                        printf("\n");
                        printf("Select How Many Tables You Need.\n");
                        scanf("%d",&CHEMTBLIP);

                        printf("\n");

                        //adding to the array
                        if((CHEMTBLIP<=CHEMTBL)&&(CHEMTBLIP<=CHEMFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<CHEMTBLIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<CHEMTBL;i++){
                                STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICAL[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<CHEMTBLIP;j++){
                                for(int i=0;i<(CHEMRSV+CHEMTBLIP);i++){
                                    STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICAL[i]=TEMPARY[j];
                                }
                            }

                            CHEMRSV=CHEMRSV+CHEMTBLIP; // memorize the Reserved Table count
                            CHEMFREE=CHEMTBL-CHEMRSV; // memorize the Reserved Table count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<CHEMTBL;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICAL[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",CHEMRSV);
                            printf("Total Free: %d.\n",CHEMFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
//--Hall 2 > LAB 2 > Physics Tables--------------------------------------------------------------------------------------------
                    //if User selected Physics Table
                    if(LBPCIP==2){
                        printf("Total Reserved: %d.\n",PHYRSV);
                        printf("Total Free: %d.\n",PHYFREE);
                        printf("\n");
                        printf("Select How Many Tables You Need.\n");
                        scanf("%d",&PHYTBLIP);

                        printf("\n");

                        //adding to the array
                        if((PHYTBLIP<=PHYTBL)&&(PHYTBLIP<=PHYFREE)){
                            char TEMPARY[TMPAR];
                            for(int i=0;i<PHYTBLIP;i++){
                                TEMPARY[i]='R';
                            }

                            //Making the main array as Free
                            for (int i=0;i<PHYTBL;i++){
                                STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICS[i]='F';
                            }

                            //Swapping Data
                            for(int j=0;j<PHYTBLIP;j++){
                                for(int i=0;i<(PHYRSV+PHYTBLIP);i++){
                                    STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICS[i]=TEMPARY[j];
                                }
                            }

                            PHYRSV=PHYRSV+PHYTBLIP; // memorize the Reserved Table count
                            PHYFREE=PHYTBL-PHYRSV; // memorize the Reserved Table count

                            //Feedback to user that reservation is successful.
                            printf("Your Reservation is successfully added.\n");
                            for(int i=0;i<PHYTBL;i++){
                                printf("PC%d - %c ",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICS[i]);
                                printf("\n");

                            }
                            printf("\n");
                            printf("Total Reserved: %d.\n",PHYRSV);
                            printf("Total Free: %d.\n",PHYFREE);
                            printf("\n");

                            HLLF(HLL,HLC);
                        }

                        //feedback to the user that input is exceeded or wrong
                        else{
                            printf("This much seats are not available in this lab.\n");
                            HLLF(HLL,HLC);
                        }

                        //Continue or Exit
                        CONTOREXT(CONTREQ);
                    }
                }
            }
        }

        //If user need to check Availability
        else if (UIPMAIN==2){

            //Making New Versions Of Arrays as Free All Slots
            for (int i=0;i<GMLPC;i++){
                STBUILDING.Hall_1.HALL_1_Lab_1.GAMINGF[i]='F';
            }
            for (int i=0;i<OFLPC;i++){
                STBUILDING.Hall_1.HALL_1_Lab_1.OFFICEF[i]='F';
            }
            for (int i=0;i<STATPC;i++){
                STBUILDING.Hall_1.HALL_1_Lab_2.STATF[i]='F';
            }
            for (int i=0;i<SIMPC;i++){
                STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATIONF[i]='F';
            }
            for (int i=0;i<ENGTBL;i++){
                STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERINGF[i]='F';
            }
            for (int i=0;i<CVLTBL;i++){
                STBUILDING.Hall_2.HALL_2_Lab_1.CIVILF[i]='F';
            }
            for (int i=0;i<CHEMTBL;i++){
                STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICALF[i]='F';
            }
            for (int i=0;i<PHYTBL;i++){
                STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICSF[i]='F';
            }


            //Table Heads
            HLLF3(HLL,HLC3);
            TBLHEAD_SECTIONS();
            HLLF3(HLL,HLC3);

            //Table Data
            for(int i=0;i<LABTBLRW;i++){
                //Check Gaming PCs
                if(GPCPCIP==0){
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.GAMINGF[i]);
                }
                else{
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.GAMING[i]);
                }

                //Check Office PCs
                if(OFCPCIP==0){
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.OFFICEF[i]);
                }
                else{
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_1.OFFICE[i]);
                }

                //Check Stat PCs
                if(STATPCIP==0){
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.STATF[i]);
                }
                else{
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.STAT[i]);
                }

                //Check SIM PCs
                if(SIMPCIP==0){
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATIONF[i]);
                }
                else{
                    printf("| PC%d     - %c   |",i+1,STBUILDING.Hall_1.HALL_1_Lab_2.SIMULATION[i]);
                }

                //Check ENG TBLs
                if(ENGTBLIP==0){
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERINGF[i]);
                }
                else{
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.ENGINEERING[i]);
                }

                //Check CIVIL TBLs
                if(CVLTBLIP==0){
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.CIVILF[i]);
                }
                else{
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_1.CIVIL[i]);
                }

                //Check CHEM TBLs
                if(CHEMTBLIP==0){
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICALF[i]);
                }
                else{
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.CHEMICAL[i]);
                }

                //Check PHY TBLs
                if(PHYTBLIP==0){
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICSF[i]);
                }
                else{
                    printf("| TBL%d     - %c  |",i+1,STBUILDING.Hall_2.HALL_2_Lab_2.PHYSICS[i]);
                }
                printf("\n");
            }
            HLLF3(HLL,HLC3);
            //Continue or Exit
            printf("\n");
            CONTOREXT(CONTREQ);
        }
    }
}
