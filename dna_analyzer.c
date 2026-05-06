#include <stdio.h>
#include <string.h>
#include <ctype.h>

// to validate DNA sequence
int isValidDNA(char dna[]) {
    for(int i = 0; dna[i] != '\0'; i++) {
        char base = toupper(dna[i]);
        if(base != 'A' && base != 'T' && base != 'G' && base != 'C') {
            return 0;
        }
    }
    return 1;
}

// to print reverse complement
void reverseComplement(char dna[]) {
    int length = strlen(dna);
    printf("Reverse Complement: ");

    for(int i = length - 1; i >= 0; i--) {
        char base = toupper(dna[i]);

        if(base == 'A') printf("T");
        else if(base == 'T') printf("A");
        else if(base == 'G') printf("C");
        else if(base == 'C') printf("G");
    }
    printf("\n");
}

int main() {
 char dna[] = "ATGGTGCTGTCTCCTGCCGACAAGACCAACGTCAAGGCCGCCTGGGGTAAGGTCGGCGCGCACGCTGGCGAGTAT";
    int A=0, T=0, G=0, C=0;
    int length = strlen(dna);

    // Validate DNA
    if(!isValidDNA(dna)) {
        printf("Invalid DNA sequence!\n");
        return 1;
    }

    // Count nucleotides
    A = T = G = C = 0;

for(int i = 0; dna[i] != '\0'; i++) {
    printf("%c ", dna[i]);   

    if(dna[i] == 'A') A++;
    else if(dna[i] == 'T') T++;
    else if(dna[i] == 'G') G++;
    else if(dna[i] == 'C') C++;
    else {
        printf("\nInvalid character: %d\n", dna[i]);
    }
}
    
    // Output
    printf("=== DNA Sequence Analysis ===\n\n");

    printf("Sequence:\n%s\n\n", dna);
    printf("Sequence used: %s\n", dna);

    printf("Length: %d\n", length);

    printf("\nNucleotide Count:\n");
    printf("A: %d\n", A);
    printf("T: %d\n", T);
    printf("G: %d\n", G);
    printf("C: %d\n", C);

    // GC Content calculation
    float gc_content = ((float)(G + C) / length) * 100;
    printf("\nGC Content: %.2f%%\n", gc_content);

    // Reverse Complement
    printf("\n");
    reverseComplement(dna);

    printf("\nProgram executed successfully.\n");

    return 0;
}
