typedef struct Datas {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Vendas {
    Data data;
    char nome[20];
    float valor;
    float desconto;
} Venda;

void getVendaUsuario(Venda *venda);
void getDescontoUsuario(Venda *venda);
void getPrecoProdutoUsuario(Venda *venda);
void getDataUsuario(Data *data);
void getNomeProdutoUsuario(Venda *venda);
