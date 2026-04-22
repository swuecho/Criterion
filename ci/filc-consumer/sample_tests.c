#include <criterion/criterion.h>

Test(consumer, smoke) {
    cr_assert(eq(int, 2 + 2, 4));
}
