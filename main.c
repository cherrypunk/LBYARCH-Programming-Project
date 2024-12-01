#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

extern void imgCvtGrayIntToDouble(long long int n, double* x);

int main() {
	unsigned long long int ARRAY_SIZE;
	unsigned long long int ARRAY_BYTES;
	int width = 1;
	int height = 1;
	int i;

	clock_t start, end;
	double time_taken;
	printf("Input:\n");
	do {
		if (width <= 0 || height <= 0)
			printf("Invalid input. Only numbers >0 are accepted.\n");
		scanf_s("%d", &height);
		scanf_s("%d", &width);
	} while (width <= 0 || height <= 0);
	ARRAY_SIZE = width * height;
	ARRAY_BYTES = ARRAY_SIZE * sizeof(double);

	double* x;
	x = (double*)malloc(ARRAY_BYTES);
	int count = 0;
	for (i = 0; i < ARRAY_SIZE; i++) {
		scanf_s(" %lf,", &x[i]);
		if (x[i] < 0 || x[i]>255) {
			printf("Invalid input. Only numbers >=0 and <=255 are accepted.\n");
			i--;
		}
	}
	

	start = clock();
	imgCvtGrayIntToDouble(ARRAY_SIZE, x);
	end = clock();
	
	printf("\nOutput:\n");
	count = 1;
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%.2lf ", x[i]);
		if (count == width) {
			printf("\n");
			count = 1;
		}
		else 
			count++;
	}
	
	printf("\nTime Computation:\n");
	printf("Start: %ld, End: %ld\n", start, end);
	time_taken = ((double)(end - start) * 1000 / CLOCKS_PER_SEC);
	printf("Time ms = %lf\n", time_taken);

	return 0;
}