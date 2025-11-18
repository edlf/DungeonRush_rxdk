/* stdbool.h – fallback for old C compilers / SDKs */
#ifndef STDBOOL_H
#define STDBOOL_H

typedef int bool;
#define true 1
#define false 0
#define __bool_true_false_are_defined 1

#endif /* STDBOOL_H */