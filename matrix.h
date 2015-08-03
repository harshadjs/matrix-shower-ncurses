#ifndef __MATRIX_H__
#define __MATRIX_H__
#include <curses.h>

struct matrix_conf {
	enum {
		MODE_FILE,
		MODE_NUMBERS,
	} mode;
	char *filename;
};

int prob(int percentage);
void get_term_size(int *rows, int *cols);
int matrix(struct matrix_conf *, WINDOW *mainwin);

#endif
