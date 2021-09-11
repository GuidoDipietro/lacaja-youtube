#include "include/main.h"

t_log* logger;
int fd_mod3;

void sighandler(int s) {
    cerrar_programa(logger);
    exit(0);
}

int main() {
    signal(SIGINT, sighandler);

    logger = log_create("mod3.log", "MOD3", true, LOG_LEVEL_INFO);

    // No hardcodear IP y puerto, leer de config
    fd_mod3 = iniciar_servidor(logger, "MOD3", "0.0.0.0", "4200");
    while (server_escuchar(logger, "MOD3", fd_mod3));

    cerrar_programa(logger);

    return 0;
}
