#include <iostream>

#include "file1.h"
#include "file2.h"

result_type call_cuda_seperable_code(int x);
result_type mixed_launch_kernel(int x);

int main(int argc, char** argv)
{
  call_cuda_seperable_code(42);
  mixed_launch_kernel(42);
  return 0;
}
