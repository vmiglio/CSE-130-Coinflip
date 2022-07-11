#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main() {
	int start = time(NULL);
	int heads = 0;
	int tails = 0;
	int outcome = 100;
	//Heads is gonna be 0
	//Tails is gonna be 1
	for (int i = 0; i < 1000000; i++) {
		srand(time(NULL));
		outcome = (rand() % 10) + 1;
		printf("%d\n", outcome);
		if (outcome < 5) {
			printf("You got a heads\n");
			heads = heads + 1;
			outcome = 100;
		}
		else if (5 <= outcome < 10) {
			printf("You got a tails\n");
			tails = tails + 1;
			outcome = 100;
		}
		else {
			continue;
		}
	}
	printf("You flipped %d heads and %d tails\n", heads, tails);
	int end = time(NULL);
	
	

	printf("That took %d seconds\n", end - start);
	return 0;
}