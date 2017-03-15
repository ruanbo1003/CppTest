
#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <iostream>

#define Log(...) { printf(__VA_ARGS__); printf("\n"); }

#define LogLine(...) { printf(__VA_ARGS__); }


#endif