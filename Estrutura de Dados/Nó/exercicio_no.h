struct no{
    struct no *anterior;
    int info;
    struct no *proximo;
};
struct no *cria_no(int);
void exibe_no(struct no *);