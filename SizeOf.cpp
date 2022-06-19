//SizeOf.cpp by Ziad Attiya <www.ziadattiya>
//Created on 2022-06-19
#include <cstdio>

int main(){
    char z=0;
    short int Zi=0;
    int i=0;
    long int Zia=0;
    long long int Ziad=0;
// 1 Byte= 8 bits (sizeof returns in bytes!)
    printf("Size of char is %zd bits \n",sizeof(z)*8);
    printf("Size of size of short int is %zd bits \n",sizeof(Zi)*8);
    printf("The size of int is %zd bits \n",sizeof(i)*8);
    printf("The size of long int is %zd bits \n",sizeof(Zia)*8);
    printf("The size of long long int is %zd bits \n",sizeof(Ziad)*8);



    return (0);
}