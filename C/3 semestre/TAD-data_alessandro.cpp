#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// MODELO DE DADOS - TIPO DATA
typedef struct {
	int dia, mes, ano;
} data;
// OPERAÇÕES DE ENTRADA PARA TIPO DATA
void setdia (data *d, int x) {
	d->dia = x;
}
void setmes (data *d, int x) {
	d->mes = x;
}
void setano (data *d, int x) {
	d->ano = x;
}
void setdata(data *d, int x) {
    if (x < 1000000) { // Se tiver 6 dígitos
        d->dia = x / 10000;
        d->mes = (x % 10000) / 100;
        d->ano = x % 100;
    } else { // Se tiver 8 dígitos
        d->dia = x / 1000000;
        d->mes = (x % 1000000) / 10000;
        d->ano = x % 10000;
    }
}
// OPERAÇÕES DE SAÍDA  PARA TIPO DATA
int getdia (data *d) {
	return (d->dia);
}
int getmes (data *d) {
	return (d->mes);
}
int  getano (data *d) {
	return (d->ano);
}
// OPERAÇÕES AUXILIARES PARA O TIPO DATA
int isdatavalida(data *d) {
    int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Verificar se o ano é bissexto
    int bissexto = ((d->ano % 4 == 0) && (d->ano % 100 != 0)) || (d->ano % 400 == 0);
    // Verificar se o mês é válido
    if ((d->mes < 1) && (d->mes > 12)) {
        return 0;
    }
    // Verificar se o dia é válido para o mês e ano correspondentes
    int dias_no_mes_atual = dias_no_mes[d->mes];
    if (d->mes == 2 && bissexto) {
        dias_no_mes_atual = 29;
    }
    if (d->dia < 1 || d->dia > dias_no_mes_atual) {
        return 0;
    }
    // Se passar em todas as verificações, a data é válida
    return 1;
}


int main (void) {
	data dt1, dt2;
	int dia, mes, ano, d1;
	
	printf ("Informe a 1a Data: "); scanf ("%d", &d1);
	printf ("Informe o dia da 2a Data: "); scanf ("%d", &dia);
	printf ("Informe o mes da 2a Data: "); scanf ("%d", &mes);
	printf ("Informe o ano da 2a Data: "); scanf ("%d", &ano);
	setdata (&dt1, d1);
	setdia (&dt2, dia);
	setmes (&dt2, mes);
	setano (&dt2, ano);
	printf ("Data 1: %d/%d/%d\n", getdia (&dt1), getmes(&dt1), getano(&dt1));
	printf ("Data 2: %d/%d/%d\n", getdia (&dt2), getmes(&dt2), getano(&dt2));
	if (isdatavalida(&dt1) == 1)
		printf ("Data 1 e uma data valida...\n");
	else
		printf ("Data 1 NAO e valida...\n");
	if (isdatavalida(&dt2) == 1)
		printf ("Data 2 e uma data valida...\n");
	else
		printf ("Data 2 NAO e valida...\n");
}