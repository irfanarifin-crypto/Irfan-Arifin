#include <stdio.h>

struct Dompet {
    char nama[50];
    int saldo;
};

int topUp(struct Dompet *d, int nominal) {
    d->saldo += nominal;
    return 1;
}

int bayar(struct Dompet *d, int nominal) {
    if (d->saldo >= nominal) {
        d->saldo -= nominal;
        return 1;
    }
    return 0;
}

int main(void) {
    struct Dompet d;
    int n;

    scanf("%49s %d", d.nama, &d.saldo);
    scanf("%d", &n);

    char jenis[n];
    int nominal[n];
    int berhasil[n];
    int saldoSetelah[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &jenis[i], &nominal[i]);

        if (jenis[i] == 'T') {
            berhasil[i] = topUp(&d, nominal[i]);
        } else {
            berhasil[i] = bayar(&d, nominal[i]);
        }
        saldoSetelah[i] = d.saldo;
    }

    for (int i = 0; i < n; i++) {
        if (jenis[i] == 'T') {
            printf("Top up %d berhasil, saldo = %d\n", nominal[i], saldoSetelah[i]);
        } else if (berhasil[i]) {
            printf("Bayar %d berhasil, saldo = %d\n", nominal[i], saldoSetelah[i]);
        } else {
            printf("Bayar %d gagal, saldo tidak cukup\n", nominal[i]);
        }
    }
    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);

    return 0;
}