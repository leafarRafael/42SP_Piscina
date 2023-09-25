/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:35:16 by rbutzke           #+#    #+#             */
/*   Updated: 2023/08/23 17:21:02 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);
void	ft_ft(int *nbr);
void    ft_swap(int *a, int *b);
void    ft_div_mod(int a, int b, int *div, int *mod);
void    ft_ultimate_div_mod(int *a, int *b);
void    ft_putstr (char *str);
int     ft_strlen(char *str);
void    ft_rev_int_tab(int *tab, int size);
void    ft_sort_int_tab(int *tab, int size);

int main (void)
{

/*
teste exercicio ft_ft c1 exercicio 00
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_ft.c 00 :\n\n", 24 );
    int nbr;
    ft_ft(&nbr);
    write(1, &nbr, 1);
    write(1, "\n\n", 2);
/*
teste exercicio ft_ultimate_ft ci exercicio 01
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_ultimate_ft 01: \n\n", 31);
    int a;
	int *b;
	int **c;
	int ***d;
	int ****f;
	int *****g;
	int ******h;
	int *******i;
	int ********j;

	a = 10;
	b = &a;
	c = &b;
	d = &c;
	f = &d;
	g = &f;
	h = &g;
	i = &h;
	j = &i;

	ft_ultimate_ft(&j);
	write(1, &a, 1);
    write(1, "\n\n", 2);

/*
    Exercicio ft_swap.c C1 exercicio 02
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_swap.c 02: \n\n", 27);
    int ft_a;
    int ft_b;

    ft_swap(&ft_a, &ft_b);
    write(1,&ft_a, 1);
    write(1,&ft_b, 1);
    write(1, "\n\n", 2);

/*
    Exercicio ft_div_mod.c C1 exercicio 03
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_div_mod.c  03: \n\n", 30);
    
    int mod_a;
    int mod_b;
    int div;
    int mod;

    mod_a = 62;
    mod_b = 70;
    ft_div_mod(mod_a, mod_b, &div, &mod);

    write(1, "divisao: ",9);
    write(1,&mod_a, 1);
    ft_putstr("resto: ");
    ft_putstr("\n");
    write(1,&mod_b, 1);
    write(1, "\n\n", 2);
/*
    Exercicio ft_swap.c C1 exercicio 04
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_Ultimate_div_mod.c 04: \n\n", 38);
    int ult_div_a;
    int ult_div_b;

    ult_div_a = 143;
    ult_div_b = 2;
    ft_ultimate_div_mod(&ult_div_a, &ult_div_b);
    write(1, "divisao: ",9);
    write(1, &ult_div_a, 1);
    write(1, "\n", 1);
    ft_putstr("resto: ");
    write(1, &ult_div_b, 1);
    
/*
    Exercicio ft_putstr.c C1 exercicio 05
*/
    printf("\n\n====================================================================\n");
    write(1, "Exercicio ft_putstr.c 05: \n\n", 28);
    char *texto = "texto para impressao";
    ft_putstr(texto);
    ft_putstr("\n\n outro texto qualquer");
    write(1, "\n\n", 2);

/*
    Exercicio ft_strlen.c C1 exercicio 06
*/
    printf("\n\n====================================================================\n");
    ft_putstr("\n\n");
    ft_putstr("exercicio ft_strlen.c 06");
    ft_putstr("\n");

    char numero;

    numero = ft_strlen("123456789") + '0';

    printf("%c", numero);

    ft_putstr("\n\n");

/*
    Exercicio ft_strlen.c C1 exercicio 07
*/
    printf("\n\n====================================================================\n");
    ft_putstr("\n\n");
    ft_putstr("exercicio ft_rev_int_tab.c 07");
    ft_putstr("\n");
    
    int size;
    int table[size];
    int cont_str;
    int inclui;
    
    inclui = 1;

    size = 10;
    cont_str = 0;

    printf("tabela original: \n");
    while(cont_str < size)
    {
        table[cont_str] = inclui;
        printf("na posição array[%d] temos o valor [%d]\n", cont_str, table[cont_str]);
        inclui++;
        cont_str++;
    }
    
    ft_rev_int_tab(table, size);

    printf("\n\ntabela reorganizada: \n");
    int contarnovaposicao = 0;
    while (contarnovaposicao < size)
    {
        printf("na posição array[%d] temos o valor [%d]\n", contarnovaposicao, table[contarnovaposicao]);
        contarnovaposicao++;
    }
    
/*
    Exercicio ft_strlen.c C1 exercicio 07
*/
    printf("\n\n====================================================================\n");
    ft_putstr("\n\n");
    ft_putstr("exercicio ft_rev_int_tab.c 07");
    ft_putstr("\n");



	int tamanhoDoArray = 9;
	int array_teste[tamanhoDoArray];
    int contador_exercicio8 = 0;

    array_teste[0] = 4;
    array_teste[1] = 6;
    array_teste[2] = 1;
    array_teste[3] = 9;
    array_teste[4] = 8;
    array_teste[5] = 2;
    array_teste[6] = 3;
    array_teste[7] = 5;
    array_teste[8] = 8;
	array_teste[9] = 7;

    printf("\n\n lista o desordenada: \n ");
    while (contador_exercicio8 < tamanhoDoArray)
    {
        printf("numero da variavel no array [%d] valor [%d]\n", contador_exercicio8, array_teste[contador_exercicio8]);
        contador_exercicio8++;
    }

    ft_sort_int_tab(array_teste, tamanhoDoArray);

	contador_exercicio8 = 0;
    printf("\n\n lista ordenada:\n ");
    while (contador_exercicio8 < tamanhoDoArray)
    {
        printf("numero da variavel no array [%d] valor [%d]\n", contador_exercicio8, array_teste[contador_exercicio8]);
        contador_exercicio8++;
    }



}