
#include <stdio.h>
#include <stdarg.h>

void my_scanf(const char *format, ...);

int main() {
    int num;
    float f_num;
    char str[100];
    char ch;
    double dbl_num;
    int hex_num;
    unsigned int uint_num;
    long long llong_num;
    unsigned long long ullong_num;
    long long octal_num;
    void *ptr_val;
    int num_chars_read;

    my_scanf("%d %f %s %c %lf %x %u %ld %lu %lld %llu %o %p %n", &num, &f_num, str, &ch, &dbl_num, &hex_num,
             &uint_num, &llong_num, &ullong_num, &octal_num, &ullong_num, &octal_num, &ptr_val, &num_chars_read);

    printf("Integer: %d\n", num);
    printf("Float: %f\n", f_num);
    printf("String: %s\n", str);
    printf("Character: %c\n", ch);
    printf("Double: %lf\n", dbl_num);
    printf("Hexadecimal: %x\n", hex_num);
    printf("Unsigned Integer: %u\n", uint_num);
    printf("Long: %ld\n", llong_num);
    printf("Unsigned Long: %lu\n", ullong_num);
    printf("Long Long: %lld\n", llong_num);
    printf("Unsigned Long Long: %llu\n", ullong_num);
    printf("Octal: %o\n", octal_num);
    printf("Pointer: %p\n", ptr_val);
    printf("Number of Characters Read: %d\n", num_chars_read);

    return 0;
}

#include <stdio.h>
#include <stdarg.h>

void my_scanf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    const char *ptr = format;
    while (*ptr) {
        if (*ptr == '%') {
            ptr++;
            
            // Parse flags, width, precision, and modifiers
            int width = 0;
            int precision = -1; // Default precision is -1 (no precision specified)
            int modifier = 0; // Default modifier is 0 (no modifier specified)

            // Parse width
            if (*ptr >= '0' && *ptr <= '9') {
                width = 0;
                while (*ptr >= '0' && *ptr <= '9') {
                    width = width * 10 + (*ptr - '0');
                    ptr++;
                }
            }

            // Parse precision
            if (*ptr == '.') {
                ptr++;
                if (*ptr >= '0' && *ptr <= '9') {
                    precision = 0;
                    while (*ptr >= '0' && *ptr <= '9') {
                        precision = precision * 10 + (*ptr - '0');
                        ptr++;
                    }
                }
            }

            // Parse modifiers
            if (*ptr == 'l') {
                modifier = 1; // 'l' modifier (long)
                ptr++;
            }
            
            // Handle conversion specifiers
            switch (*ptr) {
                case 'd': {
                    int *int_ptr = va_arg(args, int*);
                    scanf("%d", int_ptr);
                    break;
                }
                case 'f': {
                    float *float_ptr = va_arg(args, float*);
                    scanf("%f", float_ptr);
                    break;
                }
                case 's': {
                    char *char_ptr = va_arg(args, char*);
                    scanf("%s", char_ptr);
                    break;
                }
                case 'c': {
                    char *char_ptr = va_arg(args, char*);
                    scanf(" %c", char_ptr); // Note the space before %c to consume leading whitespace
                    break;
                }
                case 'lf': {
                    double *double_ptr = va_arg(args, double*);
                    scanf("%lf", double_ptr);
                    break;
                }
                case 'x': {
                    int *int_ptr = va_arg(args, int*);
                    scanf("%x", int_ptr);
                    break;
                }
                case 'u': {
                    unsigned int *uint_ptr = va_arg(args, unsigned int*);
                    scanf("%u", uint_ptr);
                    break;
                }
                case 'ld': {
                    long *long_ptr = va_arg(args, long*);
                    scanf("%ld", long_ptr);
                    break;
                }
                case 'lu': {
                    unsigned long *ulong_ptr = va_arg(args, unsigned long*);
                    scanf("%lu", ulong_ptr);
                    break;
                }
                case 'lld': {
                    long long *llong_ptr = va_arg(args, long long*);
                    scanf("%lld", llong_ptr);
                    break;
                }
                case 'llu': {
                    unsigned long long *ullong_ptr = va_arg(args, unsigned long long*);
                    scanf("%llu", ullong_ptr);
                    break;
                }
                case 'o': {
                    int *octal_ptr = va_arg(args, int*);
                    scanf("%o", octal_ptr);
                    break;
                }
                case 'p': {
                    void **void_ptr = va_arg(args, void**);
                    scanf("%p", void_ptr);
                    break;
                }
                case 'n': {
                    int *n_ptr = va_arg(args, int*);
                    int count = scanf("%n", n_ptr);
                    *n_ptr = count; // Store the number of characters read
                    break;
                }
                // Add support for other conversion specifiers as needed
            }
        }
        ptr++;
    }

    va_end(args);
}

void my_scanf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    const char *ptr = format;
    while (*ptr) {
        if (*ptr == '%') {
            ptr++;
            // Parse flags, width, precision, and modifiers
            int width = 0;
            int precision = -1; // Default precision is -1 (no precision specified)
            int modifier = 0; // Default modifier is 0 (no modifier specified)

            // Parse width
            if (*ptr >= '0' && *ptr <= '9') {
                width = 0;
                while (*ptr >= '0' && *ptr <= '9') {
                    width = width * 10 + (*ptr - '0');
                    ptr++;
                }
            }

            // Parse precision
            if (*ptr == '.') {
                ptr++;
                if (*ptr >= '0' && *ptr <= '9') {
                    precision = 0;
                    while (*ptr >= '0' && *ptr <= '9') {
                        precision = precision * 10 + (*ptr - '0');
                        ptr++;
                    }
                }
            }

            // Parse modifiers
            if (*ptr == 'l') {
                modifier = 1; // 'l' modifier (long)
                ptr++;
            }

            // Handle conversion specifiers
            switch (*ptr) {
                case 'd': {
                    if (modifier == 1) {
                        long *long_ptr = va_arg(args, long*);
                        scanf("%ld", long_ptr);
                    } else {
                        int *int_ptr = va_arg(args, int*);
                        scanf("%d", int_ptr);
                    }
                    break;
                }
                case 'f': {
                    double *double_ptr = va_arg(args, double*);
                    scanf("%lf", double_ptr);
                    break;
                }
                case 's': {
                    char *char_ptr = va_arg(args, char*);
                    scanf("%s", char_ptr);
                    break;
                }
                // Add support for other conversion specifiers as needed
            }
        }
        ptr++;
    }

    va_end(args);
}
   


