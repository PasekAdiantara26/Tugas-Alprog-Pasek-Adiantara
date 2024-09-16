#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];

    // Membaca input dari pengguna
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Menghapus karakter newline jika ada
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Mengecek panjang dan kesamaan string
    if (strlen(s1) != strlen(s2)) {
        printf("BERBEDA\n");
    } else if (strcmp(s1, s2) == 0) {
        printf("IDENTIK\n");
    } else {
        printf("MIRIP\n");
    }

    return 0;
}