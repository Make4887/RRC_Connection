#ifndef _CONNECTIONCODER_H
#define _CONNECTIONCODER_H

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdint.h>

void RRCConnectionRequest_coder(uint8_t **buffer, ssize_t *len);
void RRCConnectionSetup_coder(uint8_t **buffer, ssize_t *len);
void RRCConnectionSetupComplete_coder(uint8_t **buffer, ssize_t *len);

void tx_send(uint8_t **buffer, ssize_t *len, uint16_t port);
void rx_receive(uint8_t **buffer, ssize_t *len, uint16_t port);


#endif