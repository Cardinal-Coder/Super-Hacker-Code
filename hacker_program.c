#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	FILE *random = fopen("/dev/urandom", "r");
	char *s_random = malloc(25);
	printf("n0w i @M h@cKInG uR comPUt3Rz!!1!11\n");
	sleep(3);
	for(int i = 0; i < 1000; i++) {
		fread(s_random, 1, 25, random);
		printf("%s", s_random);
	}
	printf("\n");
	printf("u R h@Ck3d N0W\n");
	free(s_random);
	fclose(random);
	exit(0);
}
