#include <stdio.h>
//季節判定
int main(){
    int inpt;
    scanf("%d", &inpt);
    if (inpt == 3 || inpt == 4 || inpt == 5) {
        printf("Spring\n");
    }
    else if (inpt == 6 || inpt == 7 || inpt == 8) {
        printf("Summer\n");
    }
    else if (inpt == 9 || inpt == 10 || inpt == 11) {
        printf("Autumn\n");
    }
    else {
        printf("Winter\n");
    }
    return 0;
}
