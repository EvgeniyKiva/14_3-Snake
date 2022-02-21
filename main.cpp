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

    for (int i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i%2==0){
                matrix[i][j] = element;
                element++;
            }

            else{
                matrix[i][4-j]=element;
                element++;
            }

        }
    }


    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            std::cout << matrix[i][j] << " " ;
        }
        std::cout << std::endl;

    }




    return 0;
}
