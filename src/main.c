#include <stdio.h>
#include <stdlib.h>
#include <CL/cl.h>

#define TRACEPOINT_DEFINE
#include "clust_tp.h"

int main(int argc, char **argv) {
	printf("hello\n");
	tracepoint(sample_component, cl_function, "ALL RIGHT!!!");
	cl_platform_id ids;
	cl_int count;
	clGetPlatformIDs(0, &ids, &count);
}
