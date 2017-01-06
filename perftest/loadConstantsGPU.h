// SHARED HEADER BETWEEN CPU AND GPU
#ifdef __cplusplus
#include "dataTypes.h"
#endif

struct LoadConstants
{
	uint elementsMask;		// Runtime address mask. Needed to prevent compiler combining narrow raw buffer loads from single thread.
	uint writeIndex;		// Runtime write mask. Always 0xffffffff (= never write). But the compiler doesn't know this :)
	uint readStartAddress;

	uint padding;
};

