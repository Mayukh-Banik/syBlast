#include "syBlast/blas.hpp"
#include <gtest/gtest.h>

TEST(a, a)
{
    sycl::queue q = sycl::queue();
    float* x = sycl::malloc_shared<float>(sizeof(float), q);
    float* y = sycl::malloc_shared<float>(sizeof(float), q);
    syBlast::saxpy(1, 0, x, 1, y, 1, q);
    sycl::free(x, q);
    sycl::free(y, q);
}
