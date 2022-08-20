#include<stdio.h>
// print num for 1 to 10 except 6
int main () {

    for(int i=10; i<=1; i++) {

    if(i == 6) {
        continue;
    }
        printf("%d\n" , i);
    }
}