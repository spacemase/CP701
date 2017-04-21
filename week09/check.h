#ifndef CHECK_H_ALREADY_INCLUDED
#define CHECK_H_ALREADY_INCLUDED

#define CHECK(arg) if (!check(arg)) { printf("%s Failure at %d: \"%s\"\n", __FILE__, __LINE__, #arg); }

int check(int arg);

int printResults();

#endif
