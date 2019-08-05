#include "../inc/header.h"

bool mx_isdigit(int c);
bool mx_issuit(char *card)
{
	if (mx_isdigit(card[1])== 1 && card[2] != 'D' && card[2] != 'H' && card[2] != 'S' && card[2] != 'C') {
		return false;
}
	if (mx_isdigit(card[1]) == 0 && card[1] != 'D' && card[1] != 'H'
&& card[1] != 'S' && card[1] != 'C') {
		return false;
	}
	
	return true;
}
