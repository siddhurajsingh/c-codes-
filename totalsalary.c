#include<stdio.h>

int main(){

    float TS;
    float BS;
    float DA;
    float TA;
    float HRA;

    printf("enter basic salary");
    scanf("%f", &BS);

    if("BS <= 35000"){
    DA = 0.02*BS;
    TA = 0.03*BS;
    HRA = 0.04*BS;
    }
    else if("BS >= 35000 && BS <= 80000 "){

        DA = 0.03*BS;
        TA = 0.04*BS;
        HRA = 0.07*BS;
    }
    else if("BS >= 80000"){
        DA = 0.04*BS;
        TA =0.06*BS;
        HRA = 0.09*BS;
    }
    TS = BS + DA + TA - HRA;
    printf("total salary %f", TS);
    return 0;

}