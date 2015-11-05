#pragma once



#define MIN(a,b)(((a)<(b))?(a):(b))
#define MAX(a,b)(((a)>(b))?(a):(b))
#define ABS(a)((a)<(0)?(-(a)):(a))
#define CLAMP(a,b,c)(((a)<(b))?(b):(((a)>(c))?(c):(a)))
