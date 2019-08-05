#ifndef HEADER_H
#define HEADER_H

#define INVALID_CARD_SUIT "Invalid card suit: "
#define INVALID_CARD_RANK "Invalid card rank: "
#define INVALID_CARD "Invalid card: "
#define DUPLICATE_CARD "Duplicate cards: "
#define USAGE "usage: ./race03 [card1] [card2] [card3] [card4] [card5]"

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void	mx_printcharerr(char c);
void	mx_printstrerr(const char *s);
void	straightflush(int straight, int flush);
int	mx_strlen(const char *s);
bool mx_israng(char *card);
bool mx_issuit(char *card);
bool assemption(char **card, int q);
int	flush(char **s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printstr(const char *s);
bool issuit(char *card);
int	mx_strcmp(const char *s1, const char *s2);
char	cast(char **s);
int	straight(char **s);
void	mx_bubble_sort(int *arr);
int	*chartoint(char **s);
int	pair(char **s);

#endif
