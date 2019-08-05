#include "../inc/header.h"

int flush(char **s) {
	int count, i;

	count = 1;
	for (i = 1; i < 5; i++) {
		if (s[i][1] == s[i + 1][1] && s[i][1] != '0')
			count++;
		else if (s[i][1] == '0') {
				if (s[i][2] == s[i + 1][1])
					count++;
		}
	}
	if (count == 5)
		return 1;
	else
		return 0;
}
