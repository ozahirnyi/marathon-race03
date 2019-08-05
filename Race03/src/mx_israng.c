#include "../inc/header.h"

int mx_atoi(const char *str);
bool mx_isdigit(int c);

bool mx_israng(char *card) {
	if ((mx_atoi(card) < 1 || mx_atoi(card) > 11) && mx_isdigit(card[0]) == 1) {
		return false;
}
	if (mx_isdigit(card[0]) == 0 && card[0] != 'A' && card[0] != 'K' && card[0] != 'Q' && card[0] != 'J') {
		return false;
}
	return true;
}
