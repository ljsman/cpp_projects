//Jinshi Copy Right 2020
#ifndef TEST
#define TEST 0
#endif  

#ifndef LC
#define LC 1 
#endif  

#include "cpp_test.h"
#include "leet_code.h"

int main()
{
#if TEST

#endif

#if LC
    leet_code lc;
    lc.linked_list_stuff();
    lc.vector_stuff();
#endif

    std::cout << "Hello World!\n";
}
#undef P
#undef LC
