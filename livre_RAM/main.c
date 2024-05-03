#include <stdio.h>
#include <sys/sysinfo.h>

int main() {

    struct sysinfo info;

    if (sysinfo(&info) != 0) {
        perror("sysinfo");
        return 1;
    }

    unsigned long ram_free = (info.freeram * info.mem_unit) / (1024 * 1024 * 1024);

    printf("Memória RAM livre: %lu GB\n", ram_free);
}
