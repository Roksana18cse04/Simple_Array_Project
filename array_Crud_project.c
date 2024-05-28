// Array  Crud Project

#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 100

int main(void){
    system("cls");

    int input;
    int data[MAX_LENGTH];
    int length=0;
    int value =0;
    int index =0;

    do{

        printf("Menu:\n");
        printf("____________\n\n");
        printf("1.Add\n");
        printf("2.Insert\n");
        printf("3.Edit\n");
        printf("4.Delete\n");
        printf("5.Display\n");
        printf("6.Clear\n");
        printf("0.Exit\n");

        printf("________________\n");
        printf("Enter your choice: ");
        scanf("%d",&input);


        system("cls");
        printf("------Result----------\n");

        printf("You have selected menu no  %d\n",input);


        switch(input){
            case 0:
                printf("Do nothing just terminate.\n");
                break;
            case 1:
                //Add Operation
                printf("Enter an Integer value : ");
                scanf("%d",&value);

                data[length]=value;
                printf("%d inserted at index %d\n",value,length);
                length++;
                for(int i=0;i<length;i++){
                    printf("%d ",data[i]);

                }

                break;
            case 2:
                //Insert Operation
                printf("Please Enter an Integer Value: ");
                scanf("%d",&value);
                printf("Please Enter an index between 0 - %d: ",length);
                scanf("%d",&index);
                for(int i =length;i>index;i--){
                    data[i]=data[i-1];

                }
                printf("%d Inserted at index %d\n",value,index);
                data[index]=value;
                length++;
                break;
            case 3:
                //edit operation
                printf("Please Enter an index between 0 - %d: ",length-1);
                scanf("%d",&index);
                printf("Please Enter an new Integer Value: ");
                scanf("%d",&value);
                data[index]=value;
                printf("%d Updated at index %d\n",value,index);

                break;
            case 4:
                //delete Operation
                printf("Please Enter an index %d: ",length-1);
                scanf("%d",&index);
                int dv =data[index];
                for(int i=index;i<length;i++){
                    data[i]=data[i+1];
                }
                data[length]=0;
                length--;
                printf("%d Deleted at index %d\n ",dv,value);
                break;
            case 5:
                //display item using for loop
                if(length==0){
                    printf("There is no Data\n");
                    break;
                }
                else{
                    printf("Data : ");
                    for(int i=0;i<length;i++){
                        printf("%d ",data[i]);
                    }
                    printf("\n");
                }
                break;


            case 6:
                //
                for(int i=0;i<length;i++){
                    data[i]=0;
                }
                length=0;
                printf("Data cleared.\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
        printf("\n------Result End---------\n\n");





    }while(input!=0);

    system("cls");

}