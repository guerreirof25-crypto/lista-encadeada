struct Caixa* insere(struct Caixa* lista, int valor) {
    static struct Caixa novo;
    novo.valor = valor;
    if (lista == NULL || valor < lista->valor) {
        novo.prox = lista;
        return &novo;
    }
    struct Caixa* p = lista;
    while (p->prox != NULL && p->prox->valor < valor) {
        p = p->prox;
    }
    novo.prox = p->prox;
    p->prox = &novo;
    return lista;
}
