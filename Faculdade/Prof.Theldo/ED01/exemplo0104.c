/*
Exemplo0104 - v0.0. - 16 / 08 / 2023 Author: Breno Pires Santos
Para compilar em terminal (janela de comandos): Linux : gcc -o exemplo0104 exemplo0104.c Windows: gcc -o exemplo0104 exemplo0104.c
Para executar em terminal (janela de comandos): Linux : ./exemplo0104
Windows: exemplo0104
*/
// dependencias 
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
/** Method_01.
// para as entradas e saidas
// para outras funcoes de uso geral
*/
void method_01 ( void ) {
//definir dado
int x=0;
// identificar
printf ( "%s\n", "Method_01" );
// mostrar valor inicial
printf ( "\n%s%d\n", "x = ", x );
// OBS.: O formato para int -> %d (ou %i) 
printf ( "&%s%p\n" , "x = ", &x );
// OBS.: O formato para endereco -> %p)
// ler do teclado
printf ( "Entrar com um valor inteiro: " ); scanf ( "%d", &x );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
printf ( "%s%i\n", "x = ", x );
// encerrar
printf ( "\nApertar ENTER para continuar.\n" ); getchar ( );
} // end method_01 ( )

/** Method_02.
*/
void method_02 ( void ) {
// definir dado
double x = 0.0; // definir variavel com valor inicial
// OBS.: Definir a parte fracionaria e' util
// identificar
printf ( "\n%s\n", "Method_02 - Programa - v0.0" );
// mostrar valor inicial
printf ( "\n%s%lf\n", "x = ", x );
// OBS.: O formato para double -> %lf
// ler do teclado
printf ( "Entrar com um valor real: " ); scanf ( "%lf", &x );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
printf ( "%s%lf\n", "x = ", x );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); getchar( ); // aguardar por ENTER
} // end method_02 ( )

/** Method_03.
*/
void method_03 ( void ) {
// definir dado
char x = 'A'; // definir variavel com valor inicial
// OBS.: Indispensavel usar apostrofos
// identificar
printf ( "\n%s\n", "Method_03 - Programa - v0.0" );
// mostrar valor inicial
printf ( "\n%s%c\n", "x = ", x );
// OBS.: O formato para char -> %c 
printf ( "Entrar com um caractere: " );
scanf ( "%c", &x );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
printf ( "%s%c\n", "x = ", x );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); getchar( ); // aguardar por ENTER 
} // end main( )

/** Method_04.
*/
void method_04 ( void ) {
// definir dado
bool x = false;
int y = 0;
// definir variavel com valor inicial
// OBS.: Indispensavel usar minusculas // definir variavel auxiliar
// identificar
printf ( "\n%s\n", "EXEMPLO0104 - Programa - v0.0" );
// mostrar valor inicial
printf ( "\n%s%d\n", "x = ", x );
// OBS.: O formato para equivalente inteiro -> %d 
printf ( "Entrar com um valor logico: " );
scanf ( "%d", &y );
// OBS.: Usar equivalente inteiro -> 0 = false 
getchar ( ); // OBS.: Limpar a entrada de dados
// garantir valor logico no intervalo [0:1]
x = (y!=0);
// mostrar valor lido
printf ( "%s%d\n", "x = ", x );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); getchar( ); // aguardar por ENTER
} // end method_04 ( )

/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] ) {
// definir dado 
int opcao = 0;
// identificar
printf ( "%s\n", "Exemplo0104- Programa = v0.0" ); 
printf ( "%s\n", "Autor: Breno Pires Santos" ); 
printf ( "\n" ); // mudar de linha
// acoes
// repetir 
do
{
// para mostrar opcoes
printf ( "\n%s\n", "Opcoes:" ); 
printf ( "\n%s" , "0 - Terminar" ); 
printf ( "\n%s" , "1 - Method_01" ); 
printf ("\n2 - Method_02");
printf("\n3 - Method_03");
printf("\n4 - Method_04");
printf ( "\n" );
// ler a opcao do teclado
printf ( "\n%s", "Opcao = " );
scanf ( "%d", &opcao );
getchar( ); // para limpar a entrada de dados
// para mostrar a opcao lida
printf ( "\n%s%d", "Opcao = ", opcao );
// escolher acao dependente da opcao 
switch ( opcao )
{
case 0: // nao fazer nada 
break;
case 1: // executar method_01 
method_01 ( );
break;
case 2:
method_02 ( );
break;
case 3: method_03( ); break;
case 4: method_04( ); break;
default: // comportamento padrao
printf ( "\nERRO: Opcao invalida.\n" );
break; } // end switch
}
while ( opcao != 0 );
// encerrar
printf ( "\n\nApertar ENTER para terminar." ); getchar( ); // aguardar por ENTER 
return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios ---------------------------------------------- previsao de testes ---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco ---------------------------------------------- testes
Versao Teste
0.0 00. ( ___ ) identificacao de programa
*/  