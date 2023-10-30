#include "../inc/libmx.h"
char **mx_strsplit(const char *s, char c) {
	if (s == NULL)
		return NULL;
	int words = mx_count_words(s, c);
	char **result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return NULL;
	int j = 0;
	for (int i = 0; i < words; i++) {
		while (s[j] == c) {
			j++;
		}
		int length = 0;
		while (s[j + length] != c && s[j + length] != '\0') {
			length++;
		}
		result[i] = (char *)malloc(length + 1);
		if (result[i] == NULL) {
			return NULL;
		}
		for (int k = 0; k < length; k++) {
			result[i][k] = s[j + k];
		}
		result[i][length] = '\0';
		j += length;
	}

	result[words] = NULL;
	return result;
}

