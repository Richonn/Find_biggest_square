/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** bsq
*/


#pragma once

typedef struct square {
    int x;
    int y;
    int max;
    int pos;
    int size;
    int len;
    int **array;
} square_t;

// lib
void rc_putchar(char c);
int rc_strlen(char *str);
void rc_putstr(char *str);
char **rc_str_to_word_array(char *str);
int rc_getnbr(char *str);
void rc_print_tab(char **tab);
char *rc_strcpy(char *dest, char const *src);
int rc_putnbr(int nb);
char *rc_strcat(char *dest, char *src);
// miscellaneous
char *open_file(char *filename);
void rc_print_tab_int(int **tab);
char **mod_tab(char **tab, int len);
void rc_print_tab_gen(char **tab);
// size
int count_line(char *str);
int count_clm(char *str);
int count_tab_line(char **tab);
// error
int error(int nb, char *str);
int **replace_all(char **tab, int len);
int recup_nb(char *str);
int check_str(char *str);
// generate map
int find_low(int a, int b, int c);
void check_around(int **array, int i, int j);
char *generate_map(char **av);
void search_square(int **array, square_t *square);
void change_bsq(square_t *square, char **tab);
int solve_bsq(char **av);
void search_square_gen(int **array, int len, char **tab);
void change_bsq_gen(char **tab, int max, int x, int y);
void print_tab_clm(char **tab, int i);
