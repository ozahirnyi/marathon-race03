#include "../inc/header.h"

void	res(int nb) {
	if (nb == 0) {
		mx_printstr("No pair");
		mx_printchar('\n');
	}
	else if (nb == 2) {
		mx_printstr("One pair");
		mx_printchar('\n');
	}
	else if (nb == 4) {
		mx_printstr("Two pair");
		mx_printchar('\n');
	}
	else if (nb == 6) {
		mx_printstr("Three of a kind");
		mx_printchar('\n');
	}
	else if (nb == 8) {
		mx_printstr("Full house");
		mx_printchar('\n');
	}
	else if (nb == 12) {
		mx_printstr("Four of a kind");
		mx_printchar('\n');
	}
}

int	pair(char **s) {
	int comb;

	comb = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (i != j && s[j][0] == s[i][0])
				comb++;
		res(comb);
	return comb;
}
