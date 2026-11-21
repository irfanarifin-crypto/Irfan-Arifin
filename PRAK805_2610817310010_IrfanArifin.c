#include <stdio.h>

struct Dompet {
    char name[50];
    int balance;
};

int topUp(struct Dompet *d, int nominal) {
    d->balance += nominal;
    return 1;
}

int bayar(struct Dompet *d, int nominal) {
    if (d->balance >= nominal) {
        d->balance -= nominal;
        return 1;
    }
    return 0;
}

int main(void) {
    struct Dompet d;
    int n;

    scanf("%49s %d", d.name, &d.balance);
    scanf("%d", &n);

    char type[n];
    int nominal[n];
    int succeed[n];
    int balanceAfter[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &jenis[i], &nominal[i]);

        if (jenis[i] == 'T') {
            berhasil[i] = topUp(&d, nominal[i]);
        } else {
            berhasil[i] = bayar(&d, nominal[i]);
        }
        saldoSetelah[i] = d.balance;
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