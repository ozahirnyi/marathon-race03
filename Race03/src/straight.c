#include "../inc/header.h"

int	straight(char **s) {
	int *arr = chartoint(s);
	mx_bubble_sort(arr);

	if (arr[1] == 2 && arr[2] == 3 && arr[3] == 4 
		&& arr[4] == 5 && arr[5] == 14)
		return 1;
	if (arr[1] == 10 && arr[2] == 11 && arr[3] == 12
		&& arr[4] == 13 && arr[5] == 14)
		return 3;
	for (int i = 1; i < 5; i++) {
		if (arr[i] + 1 != arr[i + 1])
			return 0;
	}
	return 1;
}
