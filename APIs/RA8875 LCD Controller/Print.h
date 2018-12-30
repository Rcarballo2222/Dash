#ifndef Print_h
#define Print_h

#include <stdint.h>
#include <stddef.h>
#include <string.h>

#define DEC 10
#define HEX 16
#define OCT 8
#define BIN 2

class Print {
    private:
        int write_error;
    protected:
        void setWriteError(int err = 1) {
            write_error = err;
        }
    public:
        Print() :
                write_error(0) {
        }

        int getWriteError() {
            return write_error;
        }
        void clearWriteError() {
            setWriteError(0);
        }

        virtual size_t write(uint8_t) = 0;
        size_t write(const char *str) {
            if(str == NULL)
                return 0;
            return write((const uint8_t *) str, strlen(str));
        }
        virtual size_t write(const uint8_t *buffer, size_t size);
        size_t write(const char *buffer, size_t size) {
            return write((const uint8_t *) buffer, size);
        }
        virtual void flush() { /* Empty implementation for backward compatibility */ }

};

#endif