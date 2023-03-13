#ifndef _main_h_
#define _main_h_

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create(unsigned int size, char c);

#endif
