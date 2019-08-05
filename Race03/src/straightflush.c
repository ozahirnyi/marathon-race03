#include "../inc/header.h"

void	straightflush(int straight, int flush) {
	if (straight == 3 && flush == 1) {
		mx_printstr("Royal flush");
		mx_printchar('\n');
		exit(1);
	}
	else if (flush == 1 && straight == 1) {
		mx_printstr("Straight flush");
		mx_printchar('\n');
		exit(1);
	}
	else if (flush == 0 && straight == 1) {
		mx_printstr("Straight");
		mx_printchar('\n');
		exit(1);
	}
	else if (flush == 1 && straight == 0) {
		mx_printstr("Flush");
		mx_printchar('\n');
		exit(1);
	}
}
