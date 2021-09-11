#ifndef INIT_MOD1_H_
#define INIT_MOD1_H_

#include "../../shared/include/sockets.h"
#include "../../shared/include/protocolo.h"

bool generar_conexiones(t_log* logger, int* fd_mod2, int* fd_mod3);
void cerrar_programa(t_log* logger);

#endif
