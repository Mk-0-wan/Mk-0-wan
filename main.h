#ifndef MAIN_H
#define MAIN_H

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
/* Global variable */
extern int global_val;
typedef struct
{
	double x;
	double y;
}bot;
void Point_print(const bot *self);
void Point_prints(bot *self);
bot add( bot a, bot b);
void Point_translate(bot *x, double w, double z);
void *MALLOC_CHECK(void *ptr);
void increment_it(void);
void use_it(int c);
#endif
