#include "stdio.h"
#include "stdlib.h"
int count=0;
int count2=0;

int main(){
    FILE *fptr;
    fptr = fopen("words.txt","r");
    char toFind[17]={'N','a','t','i','o','n','a','l','C','y','b','e','r','C','i','t','y'};
    char toFind2[7]={'w','i','n','h','t','u','t'};


    char c = fgetc(fptr);

    while (!feof(fptr)){

        if (c==' '){
            c= fgetc(fptr);
        }else if (c==toFind[0]){

            for( int i=0; i<17;i++){
                if (c==toFind[i]){
                    c= fgetc(fptr);
                    if(i==16){
                        count=count+1;
                    }
                }else{
                    break;
                }

            }
        } else if (c==toFind2[0]){

            for( int x=0; x<7;x++){
                if (c==toFind2[x]){
                    c= fgetc(fptr);
                    if(x==6){
                        count2=count2+1;
                    }
                }else{
                    break;
                }

            }
        }else{
            c= fgetc(fptr);
        }


    }
    printf("Word NationalCyberCity is:%d\n Word winhtut is:%d\n",count,count2);


    fclose(fptr);


    return 0;
}