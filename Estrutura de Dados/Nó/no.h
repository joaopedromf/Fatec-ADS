struct no{
    int info;
    struct no * proximo;
};

struct no * cria_no (int);

void exibe_no (struct no *);