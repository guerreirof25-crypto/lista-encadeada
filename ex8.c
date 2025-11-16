struct Caixa* concatena(struct Caixa* l1, struct Caixa* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    struct Caixa* p = l2;
    struct Caixa* ant = NULL;
    while (p != NULL) {
        struct Caixa* q = l1;
        int rep = 0;
        while (q != NULL) {
            if (q->valor == p->valor) {
                rep = 1;
                break;
            }
            q = q->prox;
        }
        if (rep) {
            struct Caixa* r = p;
            p = p->prox;
            if (ant == NULL) l2 = p;
            else ant->prox = p;
            r->prox = NULL;
        } else {
            ant = p;
            p = p->prox;
        }
    }
    struct Caixa* fim = l1;
    while (fim->prox != NULL) fim = fim->prox;
    fim->prox = l2;
    return l1;
}
