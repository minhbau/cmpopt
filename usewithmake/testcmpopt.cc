#include <iostream>
#include <omp.h>
int main() {
    #pragma omp parallel
    #pragma omp critical
    std::cout << "This is thread #" << omp_get_thread_num() + 1 << std::endl;
}
