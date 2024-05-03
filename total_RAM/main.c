#include <stdio.h>
#include <sys/sysinfo.h>

int main() {
    struct sysinfo info;

    if (sysinfo(&info) != 0) {
        perror("sysinfo");
        return 1;
    }

    unsigned long total_ram_gb = (info.totalram * info.mem_unit) / (1024 * 1024 * 1024);

    printf("Total de Memória RAM instalada: %lu GB\n", total_ram_gb);
}
