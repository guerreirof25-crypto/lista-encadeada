int contem(struct Caixa* lista, int valor) {
    while (lista != NULL) {
        if (lista->valor == valor)
            return 1;
        lista = lista->prox;
    }
    return 0;
}
