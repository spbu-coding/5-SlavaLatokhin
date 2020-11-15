#include <stdio.h>

void other() {
	printf("Top secret!\n");
	fflush(stdout);
	printf("Slava was here!\n");
	fflush(stdout);
	printf("Congratulations!\n");
	fflush(stdout);
    printf("You have entered in the secret function!\n");
    fflush(stdout);
}

void input() {
	char buffer[20];
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
