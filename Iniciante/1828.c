/*********
Problem 1828
    Bazinga!
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char *const pedra = "pedra";
static char *const lagarto = "lagarto";
static char *const papel = "papel";
static char *const tesoura = "tesoura";

static char *const spock = "Spock";

void buildResultMatrix(int resultMatrix[5][5]);

void getResultMatrixPosition(int *pLine, int *pColumn);

void printResult(int cont, int r);

void validateMatrixPosition(int line, int column);

int getMatchResult(int m[5][5], const int *line, const int *column);

int getvalue(char name[10]) {
    if (strcmp(name, lagarto) == 0) {
        return 0;
    } else if (strcmp(name, pedra) == 0) {
        return 1;
    } else if (strcmp(name, papel) == 0) {
        return 2;
    } else if (strcmp(name, tesoura) == 0) {
        return 3;
    } else if (strcmp(name, spock) == 0) {
        return 4;
    }
    return -1;
}


int main() {
    int t;

    scanf("%d", &t);

    int m[5][5];
    buildResultMatrix(m);

    int i;
    for (i = 1; i <= t; i++) {
        int line, column;
        getResultMatrixPosition(&line, &column);
        validateMatrixPosition(line, column);

        int r;
        r = getMatchResult(m, &line, &column);
        printResult(i, r);
    }
    return 0;
}

int getMatchResult(int m[5][5], const int *line, const int *column) {
    int r;
    r = m[*line][*column];
    return r;
}

void validateMatrixPosition(int line, int column) {
    if (line == -1 || column == -1) {
        printf("Unable to read value inputted");
        exit(-1);
    }
}

void printResult(int cont, int r) {
    switch (r) {
        case -1:
            printf("Caso #%d: Bazinga!\n", cont);
            break;
        case 0:
            printf("Caso #%d: De novo!\n", cont);
            break;
        case 1:
            printf("Caso #%d: Raj trapaceou!\n", cont);
            break;
    }
}

void getResultMatrixPosition(int *pLine, int *pColumn) {
    char str1[10], str2[10];

    scanf("%s %s", str1, str2);
    (*pLine) = getvalue(str1);
    (*pColumn) = getvalue(str2);
}

void buildResultMatrix(int resultMatrix[5][5]) {
    resultMatrix[0][0] = 0, resultMatrix[0][1] = 1, resultMatrix[0][2] = -1, resultMatrix[0][3] = 1, resultMatrix[0][4] = -1;
    resultMatrix[1][0] = -1, resultMatrix[1][1] = 0, resultMatrix[1][2] = 1, resultMatrix[1][3] = -1, resultMatrix[1][4] = 1;
    resultMatrix[2][0] = 1, resultMatrix[2][1] = -1, resultMatrix[2][2] = 0, resultMatrix[2][3] = 1, resultMatrix[2][4] = -1;
    resultMatrix[3][0] = -1, resultMatrix[3][1] = 1, resultMatrix[3][2] = -1, resultMatrix[3][3] = 0, resultMatrix[3][4] = 1;
    resultMatrix[4][0] = 1, resultMatrix[4][1] = -1, resultMatrix[4][2] = 1, resultMatrix[4][3] = -1, resultMatrix[4][4] = 0;
}
}