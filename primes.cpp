//All prime numbers under 100
//Ziad Attiya, June 2022
#include <cstdio>

int main (){
    for (int i=2; i<100; i++){
        for (int j=2; j<i; j++){
            if (i%j==0) break;
            else if (i==j+1)printf("%d\n",i);
        }
    }
}
