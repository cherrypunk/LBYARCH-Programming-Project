#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void cConvert(long long int n, double* x) {
	int i;
	for (i = 0; i < n; i++)
		x[i] = x[i] / 255.0;
}

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
	
	double* y;
	y = (double*)malloc(ARRAY_BYTES);
	for (i = 0; i < ARRAY_SIZE; i++) {
		y[i] = x[i];
	}

	start = clock();
	cConvert(ARRAY_SIZE, y);
	end = clock();

	printf("\nOutput in C:\n");
	count = 1;
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%.2lf ", y[i]);
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
	
	start = clock();
	imgCvtGrayIntToDouble(ARRAY_SIZE, x);
	end = clock();

	printf("\nOutput");
	printf(" in x86-64");
	printf(":\n");
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

	boolean truth = 1;
	for (i = 0; i < ARRAY_SIZE; i++) {
		if (x[i] != y[i]) {
			truth = 0;
			i = ARRAY_SIZE;
		}
	}

	if (truth)
		printf("\nCorrect. All elements are the same for both results from C and x86-64.\n");
	else
		printf("\nIncorrect. There is a difference between both results from C and x86-64.\n");
	
	return 0;
}