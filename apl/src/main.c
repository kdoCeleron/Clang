#include <stdio.h>
#include "func1.h"
#include "lib_main.h"

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/signal.h>
#include <sys/stat.h>


int main() {

    int ret = func1();

    printf("Hello, World! ret:[%d]\n", ret);

    ret = lib_func1();
    printf("こんにちは! ret:[%d]\n", ret);

    return 0;
}
