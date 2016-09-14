#define MAX_VENDAS 100

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

void printVenda(Venda venda);

void relatorioVenda(Venda *vendas, Data dataInicial, Data dataFinal, int quantidade);

int intervalo(Data min, Data x, Data max);
