struct Caixa* remove(struct Caixa* lista, int valor) {
    if (lista == NULL) return lista;
    if (lista->valor == valor) {
        struct Caixa* nova = lista->prox;
        lista->prox = NULL;
        return nova;
    }
    struct Caixa* p = lista;
    while (p->prox != NULL && p->prox->valor != valor) {
        p = p->prox;
    }
    if (p->prox != NULL) {
        struct Caixa* r = p->prox;
        p->prox = r->prox;
        r->prox = NULL;
    }
    return lista;
}
