#include <stdlib.h>
#include <stdio.h>
#include "Print.h"
// Public Methods //////////////////////////////////////////////////////////////

/* default implementation: may be overridden */
size_t Print::write(const uint8_t *buffer, size_t size) {

#ifdef DEBUG_ESP_CORE
    static char not_the_best_way [] PROGMEM STORE_ATTR = "Print::write(data,len) should be overridden for better efficiency\r\n";
    static bool once = false;
    if (!once) {
        once = true;
        os_printf_plus(not_the_best_way);
    }
#endif

    size_t n = 0;
    while (size--) {
        size_t ret = write(*buffer++);
        if (ret == 0) {
            // Write of last byte didn't complete, abort additional processing
            break;
        }
        n += ret;
    }
    return n;
}