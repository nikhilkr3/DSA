#include<stdio.h>
#include<time.h>

//Summation of number
int main(){
    int n;
    long long i, by_loop = 0, by_formula = 0;

    printf("Enter a positive integer n: ");

    //check if scanf is positive or not 
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Positive integer plz!!\n");
        return 1;
    }

    //Method1: Summation using loop
    clock_t start1 = clock();
    for (i = 1; i <= (long long)n; i++) {
        by_loop += i;
    }
    clock_t end1 = clock();

    //Method2: Summation using formula
    clock_t start2 = clock();
    by_formula = (long long)n * (n + 1) / 2;
    clock_t end2 = clock();

    //Output
    //Answer
    printf("\nSum using loop: %lld\n", by_loop);
    printf("Sum using formula: %lld\n", by_formula);

    //Time Complexity
    printf("\nExecution time by loop: %f seconds\n",
        (double)(end1 - start1) / CLOCKS_PER_SEC);
    printf("Execution time by formula: %f seconds\n",
        (double)(end2 - start2) / CLOCKS_PER_SEC);

    return 0;
}
