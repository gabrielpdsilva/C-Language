#include <stdio.h>

int main()
{
    int m[8][8];
    int i, j, z;
    
    for(z = 1; z <= 4; z++){
        for(i = z; i <= (8 - z); i++){
            for(j = z; j <= (8 - z); j++){
                m[i][j] = z;
            }
        }
    }

    return 0;
}
