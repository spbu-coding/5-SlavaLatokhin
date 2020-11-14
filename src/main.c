#include <stdio.h>

void other() {
	printf("Top secret!\n");
	printf("Slava was here!\n");
	printf("Congratulations!\n");
    printf("You have entered in the secret function!\n");
}

void input() {
	char buffer[15];
	printf("Enter text:\n");
	fflush(stdout);
	scanf("%s", buffer);
	printf("You entered: %s\n", buffer);
	fflush(stdout);
}

int main() {
	printf("Adress: %p\n", input);
	printf("Adress: %p\n", other);
	input();
	return 0;
}
