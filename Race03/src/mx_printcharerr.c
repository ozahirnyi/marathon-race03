#include "../inc/header.h"

void	mx_printcharerr(char c) {
	write(2, &c, 1);
}
