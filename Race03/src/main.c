#include "../inc/header.h"

int	main(int argc, char **argv) {
	if (assemption(argv, argc) == 1) {
	int a =	straight(argv);
	int b = flush(argv);
		straightflush(a, b);
		pair(argv);
	}
	else
		exit(1);
}
