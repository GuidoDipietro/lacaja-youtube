#include "../include/init.h"

bool generar_conexiones(t_log* logger, int* fd_mod2, int* fd_mod3) {
    // No hardcodear, levantar de config
    char* port_mod2 = "6969";
    char* port_mod3 = "4200";
    char* ip_mod2 = "0.0.0.0";
    char* ip_mod3 = "0.0.0.0";

    *fd_mod2 = crear_conexion(
        logger,
        "MOD2",
        ip_mod2,
        port_mod2
    );

    *fd_mod3 = crear_conexion(
        logger,
        "MOD3",
        ip_mod3,
        port_mod3
    );

    return *fd_mod2 != 0 && *fd_mod3 != 0;
}

void cerrar_programa(t_log* logger) {
    log_destroy(logger);
}
