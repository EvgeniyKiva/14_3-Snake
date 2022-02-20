#include <iostream>
/*
0 1 2 3 4

9 8 7 6 5

10 11 12 13 14

19 18 17 16 15

20 21 22 23 24
 */
int main() {
    int matrix [5][5];
    int element=0;
    int j=0;

    for (int i=0; i<5; i+=2){
        for (j=0; j<5; j++){
            matrix[i][j] = element;
            element++;
        }
        element+=5;
    }
    element=5;
    for(int i=1; i<5 ; i+=2){
        for (int j=4; j>=0; j--){
            matrix[i][j] = element;
            element++;
        }
        element+=5;
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            std::cout << matrix[i][j] << " " ;
        }
        std::cout << std::endl;

    }




    return 0;
}
