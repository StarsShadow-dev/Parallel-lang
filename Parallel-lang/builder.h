#ifndef builder_h
#define builder_h

#include "types.h"

#define maxBuilderLevel 10

typedef struct {
	CharAccumulator *topLevelSource;
	
	int stringCount;
} GlobalBuilderInformation;

void addBuilderVariable_type(linkedList_Node **variables, char *key, char *LLVMname);

char *buildLLVM(GlobalBuilderInformation *globalBuilderInformation, linkedList_Node **variables, int level, CharAccumulator *outerSource, SubString *outerName, linkedList_Node *expectedType, linkedList_Node *current);

#endif /* builder_h */
