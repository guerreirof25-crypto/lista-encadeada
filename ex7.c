struct Caixa* concatena(struct Caixa* l1, struct Caixa* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    struct Caixa* p = l1;
    while (p->prox != NULL) {
        p = p->prox;
    }
    p->prox = l2;
    return l1;
}
