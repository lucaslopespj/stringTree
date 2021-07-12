#include <stdio.h>
#include <stdlib.h>

void stringTree(int x) {
  char **mat;
  int espaco, i, j;

  if (x <= 0)
    return;

  mat = malloc(x * sizeof(char *));

  for (i = 0; i < x; i++)
    mat[i] = malloc((x+1) * sizeof(char));

  espaco = x - 1;

  for (i = 0; i < x; i++) {
    for (j = 0; j < espaco; j++)
      mat[i][j] = ' ';
    for (j = espaco; j <= x; j++) {
      if (j == x)
        mat[i][j] = '\0';
      else
        mat[i][j] = '#';
    }
    espaco--;
  }

  for (i = 0; i < x; i++)
    printf("%s\n", mat[i]);

  for (i = 0; i < x; i++) {
    free(mat[i]);
    mat[i] = NULL;
  }
  free(mat);
  mat = NULL;
}


int main() {
  int n;

  printf("Altura da árvore: ");
  if (!scanf("%d", &n))
    return 0;

  stringTree(n);

  return 0;
}