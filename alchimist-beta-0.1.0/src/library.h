#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct element{
	char* value;
	uint32_t is_open:1;
}element;

typedef struct group{
	char* name;
	element* names;
	size_t name_count;
}group;

typedef struct combinate{
	element* reagent1;
	element* reagent2;
	element* rezult;
}combinate;

typedef struct library{
	combinate* recepts;
	size_t recept_count;
	group* groups;
	size_t group_count;
}library;

element* dualisation(library* lib, element* element1, element* element2);
void dispose_library(library* lib);

#endif
