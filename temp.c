#include <stdio.h>
#include <stdlib.h>
#include <string.h>




const char* getRoman(int i,char f[10],char m[10],char e[10]){
    char* ans = (char*)calloc(10,sizeof(char*));
    char temp[10];
    int c;
    switch(i){
        case 1:
            strcpy(ans,f);
        break;
        case 2:
            //exit(0);
            strcpy(temp,f);
            strcat(temp,temp);
            strcpy(ans,temp);
        break;
        case 3:
            strcpy(temp,f);
            for(c=0;c<2;c++)
                strcat(temp,f);
            strcpy(ans,temp);
            //printf("f");

        break;
        case 4:
            strcpy(temp,f);
            strcat(temp,m);
            strcpy(ans,temp);

        break;
        case 5:
            strcpy(ans,m);
        break;
        case 6:
            strcpy(temp,m);
            strcat(temp,f);
            strcpy(ans,temp);
        break;
        case 7:
            strcpy(temp,f);
            strcat(temp,temp);
            char temp1[10];
            strcpy(temp1,m);
            strcat(temp1,temp);
            strcpy(ans,temp1);
        break;
        case 8:
            strcpy(temp,f);
            for(c=0;c<2;c++)
                strcat(temp,f);
            char temp2[10];
            strcpy(temp2,m);
            strcat(temp2,temp);
            strcpy(ans,temp2);
        break;
        case 9:
            strcpy(temp,f);
            strcat(temp,e);
            strcpy(ans,temp);
        break;
        case 10:
            strcpy(ans,e);
        break;
        default:
            strcpy(ans,"H");
        break;

    }

    //printf("value of ans: %s",ans);
    //exit(0);
    return ans;
    //exit(0);
    
}

const char* convertToRoman(int i,int pos){
    //char* ans = (char*)calloc(10,sizeof(char*));

    switch(pos){
        case 1:
            return getRoman(i,"I","V","X");
        break;
        case 2:
            return getRoman(i,"X","L","C");
        break;
        case 3:
            return getRoman(i,"C","D","M");
        break;
        case 4:
            return getRoman(i,"M","M","M");
        break;
    }
    //printf("%s",ans);
    //exit(0);
}


    
int main(){
    char ans[100];
    //strcpy(ans,convertToRoman(2,2));
    // char f[10]  = "I";
    // strcat(f,f);
    // strcpy(ans,f);
    int i = 9;
    int temp = i+48;
    char t = (char)temp;
    char a[10] = "A";
    strncat(a,&t,1);
    printf("%s",a);
    return 0;
}