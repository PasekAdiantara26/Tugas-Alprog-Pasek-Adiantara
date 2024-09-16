#include <stdio.h>
#include <stdbool.h>

// memeriksa apakah N adalah bilangan prima
bool cek_prima(long long N) {
    if (N <= 1) return false; // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
    if (N == 2 || N == 3) return true; // 2 dan 3 adalah bilangan prima
    if (N % 2 == 0 || N % 3 == 0) return false; // Bilangan genap dan kelipatan 3 bukan bilangan prima
    
    // Periksa faktor dari 5 hingga akar kuadrat N
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (cek_prima(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}