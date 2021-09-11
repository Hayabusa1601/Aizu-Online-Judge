#include<stdio.h>

int num[10][7] = {{1,1,1,1,1,1,0},
                 {0,1,1,0,0,0,0},
                 {1,1,0,1,1,0,1},
                 {1,1,1,1,0,0,1},
                 {0,1,1,0,0,1,1},
                 {1,0,1,1,0,1,1},
                 {1,0,1,1,1,1,1},
                 {1,1,1,0,0,1,0},
                 {1,1,1,1,1,1,1},
                 {1,1,1,1,0,1,1}};

int next4(int NH0, int NH1, int NM0,int NM1, int H20, int H21, int M20,int M21){
    if(NH0 == H20 && NH1 == H21 && NM0 == M20 && NM1 == M21) {
        return 0;
    } else {
        return 1;
    }

}
int main(void) {
    int h1, m1, h2,m2;
    int H1[2], M1[2], H2[2], M2[2];
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    int i,j;
        H1[0] = (int)h1 / 10;
        H1[1] = h1 % 10;      
        M1[0] = (int)m1 / 10;
        M1[1] = m1 % 10;
        H2[0] = (int)h2 / 10;
        H2[1] = h2 % 10;
        M2[0] = (int)m2 / 10;
        M2[1] = m2 % 10;
    
    int sum = 0;
    int nextH[2],nextM[2];
    nextH[0] = H1[0];
    nextH[1] = H1[1];    
    nextM[0] = M1[0];
    nextM[1] = M1[1];

    while(next4(nextH[0],nextH[1], nextM[0],nextM[1], H2[0], H2[1], M2[0],M2[1])) {
        nextM[1]++;
        if (nextM[1] == 10)
        {
            nextM[0]++;
            nextM[1] = 0;
        }
        if(nextM[0] == 6) {
            nextH[1]++;
            nextM[0] = 0;
        }

        if(nextH[1] == 10) {
            nextH[0]++;
            nextH[1] = 0;
        }

        if(nextH[0] == 24) {
            nextH[0] = 0;
        }
        
        for(j = 0; j < 7; j++) {
            if(num[nextH[0]][j] - num[H1[0]][j] == 1) {
                sum++;
            }          
            if(num[nextH[1]][j] - num[H1[1]][j] == 1) {
                sum++;
            }            
            if(num[nextM[0]][j] - num[M1[0]][j] == 1) {
                sum++;
            }
            if(num[nextM[1]][j] - num[M1[1]][j] == 1) {
                sum++;
            }
            
        }

            H1[0] = nextH[0];
            H1[1] = nextH[1];
            M1[0] = nextM[0];
            M1[1] = nextM[1];

    }

    printf("%d\n", sum);
    return 0;



}