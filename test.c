#include <stdio.h>
int main() {
    int n1 = 5;
    int n2 = 2;
    printf("Entrez le premier nombre\n");
    scanf("%d", &n1);
    printf("Entrez le second nombre\n");
    scanf("%d", &n2);

    int resultat = n1 + n2;
    printf("Le résultat est %d\n", resultat);
    return (0);
}