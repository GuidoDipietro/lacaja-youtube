#include "include/main.h"

t_log* logger;
int fd_mod2;

void sighandler(int s) {
    cerrar_programa(logger);
    exit(0);
}

int main() {
    signal(SIGINT, sighandler);

    logger = log_create("mod2.log", "MOD2", true, LOG_LEVEL_INFO);

    // No hardcodear IP y puerto, leer de config
    fd_mod2 = iniciar_servidor(logger, "MOD2", "0.0.0.0", "6969");
    while (server_escuchar(logger, "MOD2", fd_mod2));

    cerrar_programa(logger);

    return 0;
}
