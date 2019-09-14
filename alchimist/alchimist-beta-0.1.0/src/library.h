#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>

typedef struct group{
	char* name;
	char** names;
	size_t name_count;
}group;

typedef struct combinate{
	char* reagent1;
	char* reagent2;
	char* rezult;
}combinate;

typedef struct library{
	combinate* recepts;
	size_t recept_count;
	group* groups;
	size_t group_count;
}library;

#endif
