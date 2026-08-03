#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 100

char special_chars[12] = { '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '[', ']' };

int check_if_speacial(char *s, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (*(s + i) == *(special_chars + j)) {
				return 1;
			}
		}
	}
	return 0;
}



int main(int argc, char **argv) {



	//while (1) {
	int n; scanf("%d", &n);
	char *s = (char*)malloc(sizeof(char) * (MAX_SIZE + 1));
	scanf("%s", s);
	printf("%d\n", check_if_speacial(s, n));
	printf("%s\n", s);

	//}
	return 0;
}
