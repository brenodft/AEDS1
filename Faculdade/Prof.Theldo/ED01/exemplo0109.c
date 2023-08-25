/*
Exemplo0109 - v0.0. - 16 / 08 / 2023 Author: Breno Pires Santos
Para compilar em terminal (janela de comandos): Linux : gcc -o exemplo0109 exemplo0109.c Windows: gcc -o exemplo0109 exemplo0109.c
Para executar em terminal (janela de comandos): Linux : ./exemplo0109
Windows: exemplo0109
*/
// dependencias 
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

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
printf ( "\n%s\n", "EXEMPLO0108 - Programa - v0.0" );
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

/** Method_05.
*/
void method_05 ( void ) {
// definir dado
char x [80] = "abc"; // definir variavel com tamanho e valor inicial 
char *px = &x[0]; // definir alternativa para acesso via endereco
// identificar
printf ( "\n%s\n", "Method_05 - Programa - v0.0" );
// mostrar valor inicial
printf ( "\n%s%s\n", "x = ", x );
// OBS.: O formato para caracteres -> %s
printf ( "Entrar com uma cadeia de caracteres: " );
scanf ( "%s", x );
// OBS.: Nao devera' ser usado o endereco dessa vez !
// O tamanho do valor NAO devera' ultrapassar 80 símbolos. 
getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
printf ( "%s%s\n", "x = ", x );
// ler do teclado (forma alternativa para acesso via endereco) 
printf ( "Entrar com outra cadeia de caracteres: " );
scanf ( "%s", px );
getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido (forma alternativa para acesso via endereco)
printf ( "%s%s\n", "x = ", px );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); getchar( ); // aguardar por ENTER
} // end method_05 ( )

/** Method_06.
*/
void method_06 ( void ) {
// definir dados
int x = 0; // definir variavel com valor inicial 
int y = 0; // definir variavel com valor inicial 
int z = 0; // definir variavel com valor inicial
int *py = &y; // definir acesso a y via endereco
// identificar
printf ( "\n%s\n", "Method_06 - Programa - v0.0" );
// mostrar valores iniciais 
printf ( "%s%d\n", "x = ", x ); 
printf ( "%s%i\n" , "y = ", y );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
printf ( "Entrar com um valor inteiro: " ); 
scanf ( "%d", &x );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
printf ( "Entrar com outro valor inteiro: " ); 
scanf ( "%i", py );
// OBS.: Não e' necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
// operar valores
z = x * y; // guardar em z o produto de x por y
// mostrar valor resultante
printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); 
getchar( ); // aguardar por ENTER
} // end method_06 ( )

/** Method_07.
*/
void method_07 ( void ) {
// definir dados
char x [80] = "abc"; // definir variavel com tamanho e valor inicial 
char y [80] = "def"; // definir variavel com tamanho e valor inicial 
char z [80]; // definir variavel com tamanho inicial
strcpy ( z, "" ); // e copiar para (z) a representacao de vazio
// identificar
printf ( "\n%s\n", "Method_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias 
printf ( "%s%s (%d)\n", "x = ", x, strlen( x) );
printf ( "%s%s (%d)\n", "y = ", y, strlen( y) );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
printf ( "Entrar com caracteres: " ); scanf ( "%s", x );
// OBS.: Nao indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
printf ( "Entrar com outros caracteres: " ); scanf ( "%s", y );
getchar ( );
// operar valores
strcpy ( z, x ); strcat(z,y);
// OBS.: Nao indicar o endereco -> & // OBS.: Limpar a entrada de dados
// copiar (x) para (z)
// concatenar (juntar) (y) a (z) // OBS.: Forma mais eficiente
// mostrar valor resultante
printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// operar valores (forma alternativa)
strcpy ( z, strcat ( strdup(x), y ) );
// copiar para (z)
// o resultado de concatenar
// a copia de (x) com (y)
// OBS.: Se nao duplicar, o valor (x) sera' alterado.
// mostrar valor resultante
printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); 
getchar( ); // aguardar por ENTER
} // end method_07 ( )

/** Method_08.
*/
void method_08 ( void ) {
// definir dados 
double x = 0.0; 
double y = 0.0; 
double z = 0.0;
// definir variavel com valor inicial // definir variavel com valor inicial // definir variavel com valor inicial
// identificar
printf ( "\n%s\n", "Method_08 - Programa - v0.0" );
// mostrar valores iniciais 
printf ( "%s%lf\n", "x = ", x ); 
printf ( "%s%lf\n", "y = ", y );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
printf ( "Entrar com um valor real: " ); scanf ( "%lf", &x );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
printf ( "Entrar com outro valor real: " ); scanf ( "%lf", &y );
// OBS.: Necessario indicar o endereco -> & 
getchar ( ); // OBS.: Limpar a entrada de dados
// operar valores
z = pow( x, y ); // elevar a base (x) 'a potencia (y)
// mostrar valor resultante
printf ( "%s(%lf) elevado a (%lf) = (%lf)\n", "z = ", x, y, z );
// operar valores
x = pow( z, 1.0/y ); // elevar a base (x) 'a potencia inversa de (y) (raiz)
// mostrar valor resultante
printf ( "%s(%lf) elevado a (1/%lf) = (%lf)\n", "z = ", z, y, x );
// operar valores
z = sqrt( x ); // raiz quadrada do argumento
// mostrar valor resultante
printf ( "%sraiz(%lf) = (%lf)\n", "z = ", x, z );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" ); getchar( ); // aguardar por ENTER
} // end method_08 ( )

/** Method_09.
*/
void method_09 ( void ) {
// definir dados singulares
int x = 0 ; 
double y = 3.5; 
char z = 'A'; 
bool w = false;
// definir variavel com valor inicial para guardar inteiro
// definir variavel com valor inicial para guardar real
// definir variavel com valor inicial para guardar caractere (simbolo) // definir variavel com valor inicial para guardar falso ou verdadeiro
// definir dados com mais de um valor
char s [80] = ""; // definir espaco de armazenamento para ate' 80 caracteres (simbolos)
// identificar
printf ( "\n%s\n", "Method_09 - Programa - v0.0" );
// mostrar valores iniciais
printf ( "01. %s%d\n" , "x = ", x ); 
printf ( "02. %s%lf\n" , "y = ", y ); 
printf ( "03. %s%c\n" , "z = ", z );
// converter entre tipos de dados (type casting)
x = (int) z; // codigo inteiro equivalente ao caractere 
printf ( "04. %s%d -> %c\n" , "x = ", x, z );
x = (int) y; // parte inteira de real 
printf ( "05. %s%d -> %lf\n", "x = ", x, y );
x = 97;
z = (char) x; // símbolo equivalente ao codigo inteiro 
printf ( "06. %s%c -> %d\n" , "z = ", z, x );
x = (int) '0'; // codigo inteiro equivalente ao caractere 
z = (char) x; // caractere equivalente ao codigo inteiro 
printf ( "07. %s%c -> %d\n" , "z = ", z, x );
x=w; // codigo inteiro equivalente ao logico 
printf ( "08. %s%d -> %d\n" , "x = ", x, w );
w = true;
x = w; // codigo inteiro equivalente ao logico 
printf ( "09. %s%d -> %d\n" , "x = ", x, w );
x = (w==false); // equivalente 'a comparacao de igualdade (true igual a false) 
printf ( "10. %s%d -> %d\n" , "x = ", x, w );
x = ! (w==false); // equivalente ao contrario da comparacao de valores (true igual a false) 
printf ( "11. %s%d -> %d\n" , "x = ", x, w );
x = (w!=false); // equivalente 'a comparacao de diferenca (true diferente de false) 
printf ( "12. %s%d -> %d\n" , "x = ", x, w );
w = (x == 0); // equivalente 'a comparacao de igualdade entre (x) e zero 
printf ( "13. %s%d == %d = %d\n" , "w = ", x, 0, w );
w = (x != 0); // equivalente 'a comparacao de diferenca entre (x) e zero 
printf ( "14. %s%d != %d = %d\n" , "w = ", x, 0, w );
w = (x < y); // equivalente 'a comparacao entre (x) e (y) 
printf("15.%s%d<%lf =%d\n","w=",x,y,w);
w = (x <= y); // equivalente 'a comparacao entre (x) e (y) 
printf ( "16. %s%d <= %lf = %d\n" , "w = ", x, y, w );
w = (y > x); // equivalente 'a comparacao entre (x) e (y) 
printf("17.%s%lf>%d =%d\n","w=",y,x,w);
w = (y >= x); // equivalente 'a comparacao entre (x) e (y) 
printf ( "18. %s%lf >= %d = %d\n" , "w = ", y, x, w );
x = 4;
w= (x%2==0); //equivalenteatestarseéparou
// resto inteiro (%) da divisao por 2 igual a zero 
printf ( "19. %s (%d%%2) ? %d\n" , "e' par ", x, w );

x = 4;
w= (x%2!=0); //equivalenteatestarseéímparou
// resto inteiro (%) da divisao por 2 diferente de zero 
printf ( "20. %s (%d%%2) ? %d\n" , "e' impar ", x, w );
z = '5';
w = ('0'<=z && z<='9'); // equivalente a testar se e' algarismo/digito
// pertence a [‘0’:’9’] (é igual ou esta’ entre ‘0’ e ‘9’) 
printf ( "21. %s (%c) ? %d\n" , "e' digito", z, w );
z = 'x';
w = ('a'<=z && z<='z'); // equivalente a testar se e' letra minuscula,
// pertence a [‘a’:’z’] (é igual ou esta’ entre ‘a’ e ‘z’) 
printf ( "22. %s (%c) ? %d\n" , "e' minuscula ", z, w );
z = 'X';
w = ( ! ('a'<=z && z<='z' ) ); // equivalente a testar se NAO (!) e' letra minuscula 
printf ( "23. %s (%c) ? %d\n" , "nao e' minuscula ", z, w );
z = 'x';
w = ('A'<=z && z<='Z'); // equivalente a testar se e' letra maiuscula 
printf ( "24. %s (%c) ? %d\n" , "e' maiuscula ", z, w );
z = 'X';
w = ( (z < 'A') || ('Z' < z) ); // equivalente a testar se NAO e' letra maiuscula,
// esta’ fora do intervalo [’a’:’z’], ou e’ menor que ‘a’ ou e’ maior que ‘z’ 
printf ( "25. %s (%c) ? %d\n" , "nao e' maiuscula ", z, w );
z = '0';
w = ('0'==z || '1'==z); // equivalente a testar se e' igual a '0' ou a '1' 
printf ( "26. %s (%c) ? %d\n" , "e' 0 ou 1 ", z, w );
strcpy ( s, "zero" ); // copiar para (s) <- "zero" (NAO usar '=' com caracteres); 
printf ( "27. palavra = %s\n", s );
w = (strcmp ( "zero", s ) == 0);// comparar se caracteres iguais (NAO usar '==' com caracteres); // Nota: O resultado da comparação sempre devera' ser avaliado
// em relacao a zero, e sera' igual caso coincida. 
printf ( "28. palavra == %s ? %d\n", s, w );
strcpy ( s, "um e dois" ); // copiar para (s) <- "outras palavras" (NAO usar '=' com caracteres); 
printf ( "29. palavras = %s\n", s );
w = (strcmp ( "zero", s ) != 0); // comparar se caracteres diferentes (NAO usar '!=' com caracteres); // Nota: O resultado da comparação sempre devera' ser avaliado
// em relacao a zero, e sera' diferente caso NAO coincidir. 
printf ( "30. palavra == %s ? %d\n", s, w );
// encerrar
printf ( "\n\nApertar ENTER para continuar." ); 
getchar( ); // aguardar por ENTER
} // end method_09 ( )

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
printf ( "%s\n", "Exemplo0109- Programa = v0.0" ); 
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
printf("\n5 - Method_05");
printf("\n6 - Method_06");
printf("\n7 - Method_07");
printf("\n8 - Method_08");
printf("\n9 - Method_09");
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
case 5: method_05( ); break;
case 6: method_06( ); break;
case 7: method_07( ); break;
case 8: method_08( ); break;
case 9: method_09( ); break;
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