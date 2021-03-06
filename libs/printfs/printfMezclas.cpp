void printfVariacionCR(char* items,int n,int r){
    char** matriz;
    int size;
    size = pow(n,r);
    matriz = initMatriz(size,r);
    variacionCR(items,matriz,n,r,NULL,0,NULL);
    printf("\n\n *********** Variacion con repeticion ************* ");
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,r);
}

void printfVariacionSR(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n)/fact(n-r);
    matriz = initMatriz(size,r);
    variacionSR(items,matriz,n,r,NULL,0,NULL);
    printf("\n\n *********** Variacion sin repeticion ************* ");
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,r);
}

void printfPermutacionCirc(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n-1);
    matriz = initMatriz(size,n);
    permutacionCirc(items,matriz,n,n,NULL,0,NULL);
    printf("\n\n *********** Permutacion circular ************* ");
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,n);
}

void printfCombinacionCR(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n+r-1)/fact(r)/fact(n-1);
    matriz = initMatriz(size,r);
    combinacionCR(items,matriz,n,r,NULL,0,NULL);
    printf("\n\n *********** Combinacion con repeticion ************* ");
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,r);
}

void printfCombinacionSR(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n)/fact(r)/fact(n-r);
    matriz = initMatriz(size,r);
    combinacionSR(items,matriz,n,r,NULL,0,NULL);
    printf("\n\n *********** Combinacion sin repeticion ************* ");
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,r);
}