#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 // Maximum string size
/*I've written a complete code for any string received from the user that finds repetitive numbers from 1 to 9. I sent full code to make the function clearer.*/
//Author @Nevzat Taha BATMAZ
int digit_frequency(char *a,unsigned int *array_adequate[]){
while(*a)
    {      //for the each digit 0 to 9 control and counting according to given string
           if(*a=='0'){
           array_adequate[0]++;}
           else if(*a=='1'){
           array_adequate[1]++;}
           else if(*a=='2'){
           array_adequate[2]++;}
           else if(*a=='3'){
           array_adequate[3]++;}
           else if(*a=='4'){
           array_adequate[4]++;}
           else if(*a=='5'){
           array_adequate[5]++;}
           else if(*a=='6'){
           array_adequate[6]++;}
           else if(*a=='7'){
           array_adequate[7]++;}
           else if(*a=='8'){
           array_adequate[8]++;}
           else if(*a=='9'){
           array_adequate[9]++;}
           a++;
    }
    return array_adequate;
}
int main()
{
    char str[MAX_SIZE];
    char * str_addr = str;// s pointer point to str array adress
    int arr[10]= {0};// for the each digit creating an array
    printf("Enter any string : ");
    gets(str);
    digit_frequency(str_addr,arr);
    for(int i = 0;i<10;i++){
    printf("i= %d %d\n",i,arr[i]/4);//divided 4 because this program count address changing for the count of digit
    }
   return 0;
}
