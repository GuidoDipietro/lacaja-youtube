#include "include/main.h"

int main() {

    t_log* logger = log_create("mod1.log", "MOD1", true, LOG_LEVEL_INFO);

    int fd_mod2=0, fd_mod3=0;
    if (!generar_conexiones(logger, &fd_mod2, &fd_mod3)) {
        cerrar_programa(logger);
        return EXIT_FAILURE;
    }

    int a;

    scanf("%d", &a);
    send_mirar_netflix(fd_mod2, "Inception", 14);

    scanf("%d", &a);
    send_aprobar_operativos(fd_mod3, 7, 8);

    scanf("%d", &a);
    cerrar_programa(logger);
    return EXIT_SUCCESS;
}
