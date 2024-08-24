#include <stdio.h>
#define TF 50



/*
    resolução do exercício de fixação II.
    enunciado do moodle:

    " Fazer um programa em linguagem C que solicite ao usuário seu e-mail e seja capaz de:

    1 Apresentar o nome do usuário do e-mail (texto antes do @), para isso faça uma função
      capaz de retornar o vetor com o nome do usuário e seu tamanho lógico;

    2 Apresentar o servidor de e-mail (texto após o @), utilize uma função para copiar o
      nome do servidor para um novo vetor com seu tamanho lógico;
    
    3 Verificar se o e-mail é válido, deve ter @ e . (pontos), e não pode ter espaços em branco;

    4 Verificar se o e-mail é do Brasil, terminado em br.

    Obs. limitar o e-mail a 50 caracteres. "

    observações:
    1 toda a estrutura usada contém apenas aquilo permitido na disciplina de ALP2.
    2 o código será feito em uma ordem "passo-a-passo" mas deixe seu código organizado
      segundo as boas normas de programação. (include, define, estruturas, funções, main).
*/


// após fazer o include, devemos declarar o tamanho fisico (TF) dos vetores usados
// seguindo a observação do professor, deve ser 50.


// ignore esse bloco, foi feito assim para fins didáticos.
// -----------------------------------------------------------------------------------
int ler_email(char email[]);
int recuperar_usuario(char email[], char usuario[]);
void apresentar_usuario(char usuario[], int tlUsuario);
int recuperar_servidor(char email[], char servidor[]);
void apresentar_servidor(char servidor[], int tlServidor);
int verificar_email(char email[], int tlEmail);
//------------------------------------------------------------------------------------

// passo 1, main.
// a estrutura da main padrão é essa, int retornando 0.
// lembrando, sempre declarar as variáveis no começo das funções. 
int main(){

    char email[TF];     // "fulano@gmail.com"
    char usuario[TF];   // "fulano"
    char servidor[TF];  // "@gmail.com"

    int tlUsuario, tlServidor, tlEmail, validade = 0;

    printf("Digite o email: ");
    do{
        tlEmail = ler_email(email);
        validade = verificar_email(email, tlEmail);
        validade ? : printf("Digite um email valido! \n");
        
    }while (!validade);
    
    printf("TL: %d", tlEmail);
    printf("\n-----------------\n");

    tlUsuario = recuperar_usuario(email, usuario);
    apresentar_usuario(usuario, tlUsuario);
    printf("TL: %d\n", tlUsuario);
    printf("\n-----------------\n");

    tlServidor = recuperar_servidor(email, servidor);
    apresentar_servidor(servidor, tlServidor);
    printf("TL: %d\n", tlServidor);
    printf("\n-----------------\n");

    validade = verificar_email(email, tlEmail);
    validade ? printf("Valido \n") : printf("Invalido");

    return 0;
}

// passo 2: primeiro de tudo precisamos ler o email.
int ler_email(char email[]){ // geralmente em c, toda função retorna alguma coisa, nesse caso o TL do email.
    int tlEmail = 0;               // tlEmail será nosso indice e também o retorno da função.

    scanf("%s", email);

    while (email[tlEmail] != '\0') // '\0' é o caractere de final de arquivo na tabela ascii, ele sinaliza o fim do texto.
    {
        tlEmail++;                 // "enquanto não for o final do vetor, aumente o tlEmail."
    }
    

    return tlEmail;                // retorna o tamanho daquilo digitado.
}
// passo 3: pegar o usuario do vetor email.
int recuperar_usuario(char email[], char usuario[]){
    int tlUsuario = 0;

    do
    {
        usuario[tlUsuario] = email[tlUsuario];  // para cada casa do vetor email, enquanto não for '@', copie para usuario.
        tlUsuario ++;
    }while (email[tlUsuario] != '@');
    
    return tlUsuario;                           // retorna o tamanho
}
// passo 4: apresentar o usuario.
void apresentar_usuario(char usuario[], int tlUsuario){ // apresenta o vetor usuario lendo apenas as casa necessárias.
    int i;

    printf("usuario: ");
    for (i = 0; i < tlUsuario; i++)
    {
        printf("%c", usuario[i]);
    }
    printf("\n");
    // usuario: [nome]\n
}
// passo 5: pegar o servidor do vetor email.
int recuperar_servidor(char email[], char servidor[]){
    int tlServidor = 0;
    int flag = 0;
    int i = 0;

    do
    {
        if(email[i] == '@'){
            flag = 1;
        }

        if (flag)
        {
            servidor[tlServidor] = email[i];
            tlServidor++;
        }
        i++;
    } while (email[i] != '\0');
    
    return tlServidor;
}
// passo 6: apresentar o servidor.
void apresentar_servidor(char servidor[], int tlServidor){
    int i;

    printf("Servidor: ");
    for (i = 0; i < tlServidor; i++)
    {
        printf("%c", servidor[i]);
    }
    printf("\n");

}
// passo 7: verificar validade.
int verificar_email(char email[], int tlEmail){
    int valido = 0;
    int espaco = 0, arroba = 0, ponto = 0;
    int i;

    for(i = 0; i<tlEmail; i++){
        if (email[i] == '@') arroba = 1;
        if (email[i] == '.') ponto = 1;
        if (email[i] == ' ') espaco = 1;
    }
    
    if(!espaco && arroba && ponto){
        valido = 1;
    }
    return valido;
}