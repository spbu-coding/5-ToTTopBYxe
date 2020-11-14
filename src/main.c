#include <stdio.h>

void other() {
	printf("You're hacker\n");
	fflush(stdout);
}

void input() {
	char buffer[10];
	printf("Enter some text:\n");
	fflush(stdout);
	scanf("%s", buffer);
	printf("Entered text: %s\n", buffer);
	fflush(stdout);
}

int main() {
	printf("%p\n", input);
	printf("%p\n", other);
	input();
	return 0;
}
