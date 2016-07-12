#include "tagged_union.h"

void errorTest();
void taggedUnionPerfTest(int num_objects);
void unsafeUnionPerfTest(int num_objects);
void subtypePerfTest(int num_objects);

int main()
{
  errorTest();

  const int num_objects = 500000;
  taggedUnionPerfTest(num_objects);
  unsafeUnionPerfTest(num_objects);
  subtypePerfTest(num_objects);

  return 0;
}

