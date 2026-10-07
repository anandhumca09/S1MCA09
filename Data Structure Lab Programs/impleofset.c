#include <stdio.h>
int main()
{
int i;

int U[5] = {1, 2, 3, 4, 5};
int A[5] = {1, 0, 0, 1, 1};
int B[5] = {0, 1, 1, 1, 0};
int uni[5], ints[5];
int diffB[5], diffA[5];
int compA[5], compB[5];

// Display universal set
printf("\nUniversal set is {");
	for (i = 0; i < 5; i++) {
        printf("%d ", U[i]);
    }
printf("}\n");

// Display set A
printf("\nSet A {");
    for (i = 0; i < 5; i++) {
    	if (A[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Display set B
printf("\nSet B {");
    for (i = 0; i < 5; i++) {
        if (B[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Union of A and B
printf("\nUnion of A and B in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        uni[i] = A[i] | B[i];
        printf("%d", uni[i]);
    }
printf("\nUnion {");
    for (i = 0; i < 5; i++) {
        if (uni[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Intersection of A and B
printf("\nIntersection of A and B in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        ints[i] = A[i] & B[i];
        printf("%d", ints[i]);
    }
printf("\nIntersection {");
    for (i = 0; i < 5; i++) {
        if (ints[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Complement of A
printf("\nComplement of A in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        compA[i] = 1 - A[i];
        printf("%d", compA[i]);
    }
printf("\nA Complement {");
    for (i = 0; i < 5; i++) {
        if (compA[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Complement of B
printf("\nComplement of B in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        compB[i] = 1 - B[i];
        printf("%d", compB[i]);
    }
printf("\nB Complement {");
    for (i = 0; i < 5; i++) {
        if (compB[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Difference of A and B
printf("\nDifference of A-B in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        diffA[i] = A[i] & compB[i];
        printf("%d", diffA[i]);
    }
printf("\nA-B {");
    for (i = 0; i < 5; i++) {
        if (diffA[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");

// Difference of B and A
printf("\nDifference of B-A in the bit representation is = ");
    for (i = 0; i < 5; i++) {
        diffB[i] = B[i] & compA[i];
        printf("%d", diffB[i]);
    }
printf("\nB-A {");
    for (i = 0; i < 5; i++) {
        if (diffB[i] == 1) {
            printf("%d ", U[i]);
        }
    }
printf("}\n");
    return 0;
}
