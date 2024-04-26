/*
 *
 *   File:
 *      array_idioms.c
 *
 *   Synopsis:
 *      Array idioms from ch. 8 rewritten using pointers.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200504  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define N 10

void print_array(int a[], int n);
void print_double_array(double a[], int n);
void scale_vector(double *v, double alpha, int n);
void add_vectors(double *u, double *v, double *w, int n);
double dot_product(double *u, double *v, int n);

int main(void) {
  int a[N];
  
  //    Clear array
  for (int *p = a; p < a + N; p++) {
    *p = 0;
  }
  
  print_array(a, N);
  
  //    Read values into array
  for (int *p = a; p < a + N; p++) {
    scanf("%d", p);
  }
  
  print_array(a, N);
  
  //    Sum elements
  long sum = 0;
  for (int *p = a; p < a + N; p++) {
    sum += *p;
  }
  
  printf("Sum: %ld\n", sum);
  
  //    Search for value
  printf("Enter target: ");
  int target;
  scanf("%d", &target);
  
  {
    int *p = a;
    while ( p < a + N  &&  *p != target ) {
      p++;
    }
    
    if ( p < a + N ) {
      printf("Found it!\n");
    } else {
      printf("Tough luck...\n");
    }
  }
  
  //    Count occurrences
  int count = 0;
  for (int *p = a; p < a + N; p++) {
    if ( *p == target ) {
      count++;
    }
  }
  
  printf("Count: %d\n", count);
  
  //    Find min/max
  int min = a[0];
  int max = a[0];
  for (int *p = a + 1; p < a + N; p++) {
    if ( *p > max ) {
      max = *p;
    } else if ( *p < min ) {
      min = *p;
    }
  }
  
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  
  double alpha = 2.3;
  double u[5] = {2.1, 3.9, 1.03, -4.6, 8.8};
  print_double_array(u, 5);
  printf("Scaled by %f:\n", alpha);
  scale_vector(u, alpha, 5);
  print_double_array(u, 5);

  double v[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
  double w[5];

  add_vectors(u, v, w, 5);
  print_double_array(w, 5);
  
  printf("Dot product u v: %.10f\n", dot_product(u, v, 5));

  exit(EXIT_SUCCESS);
}

void print_array(int a[], int n) {
  printf("[");

  for (int *p = a; p < a + n; p++) {
    printf("%5d", *p);
  }

  printf("]\n");
}

void print_double_array(double a[], int n) {
  printf("[");

  for (double *p = a; p < a + n; p++) {
    printf("%.10f  ", *p);
  }

  printf("]\n");
}

void scale_vector(double *v, double alpha, int n) {
  for (double *p = v; p < v + n; p++) {
    *p *= alpha;
  }
}
  
void add_vectors(double *u, double *v, double *w, int n) {
  for (double *p = u, *q = v, *r = w; p < u + n; p++, q++, r++) {
    *r = *p + *q;
  }
}

double dot_product(double *u, double *v, int n) {
  double result = 0;
  for (double *p = u, *q = v; p < u + n; p++, q++) {
    result += *p * *q;
  }

  return result;
}
  

