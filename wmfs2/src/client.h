/*
 *  wmfs2 by Martin Duquesnoy <xorg62@gmail.com> { for(i = 2011; i < 2111; ++i) ©(i); }
 *  For license, see COPYING.
 */

#ifndef CLIENT_H
#define CLIENT_H

#include "wmfs.h"

void client_configure(Client *c);
Client *client_gb_win(Window w);
void client_map(Client *c);
void client_unmap(Client *c);
void client_focus(Client *c);
void client_get_name(Client *c);
void client_close(Client *c);
Client *client_new(Window w, XWindowAttributes *wa);
void client_remove(Client *c);
void client_free(void);

#endif /* CLIENT_H */