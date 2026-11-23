#include <stdio.h>

struct Wallet {
    char name[50];
    int balance;
};

void topUp(struct Wallet *d, int nominal) {
    d->balance += nominal;
}

int bayar(struct Wallet *d, int nominal) {
    if (d->balance >= nominal) {
        d->balance -= nominal;
        return 1;
    }
    return 0;
}

int main(void) {
    struct Wallet d;
    int n;

    scanf("%49s %d", d.name, &d.balance);
    scanf("%d", &n);

    char type[n];
    int nominal[n];
    int succeed[n];
    int balanceAfter[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &type[i], &nominal[i]);

        if (type[i] == 'T') {
            topUp(&d, nominal[i]);
            succeed[i] = 1;
        } else if (type[i] == 'B') {
            succeed[i] = bayar(&d, nominal[i]);
        }
        balanceAfter[i] = d.balance;
    }

    for (int i = 0; i < n; i++) {
        if (type[i] == 'T') {
            printf("Top up %d berhasil, saldo = %d\n", nominal[i], balanceAfter[i]);
        } else if (succeed[i]) {
            printf("Bayar %d berhasil, saldo = %d\n", nominal[i], balanceAfter[i]);
        } else {
            printf("Bayar %d gagal, saldo tidak cukup\n", nominal[i]);
        }
    }
    printf("Saldo akhir %s = %d\n", d.name, d.balance);

    return 0;
}
