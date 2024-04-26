#include <stdio.h>
#include <sys/types.h>

#include <Connection_coder.h>
#include <unistd.h>

int main() {
    uint8_t *buffer;
    ssize_t len;

    usleep(100);
    RRCConnectionRequest_coder(&buffer, &len);
    tx_send(&buffer, &len, 50301);
    free(buffer);

    rx_receive(&buffer, &len, 50302);
    free(buffer);

    usleep(100);
    RRCConnectionSetupComplete_coder(&buffer, &len);
    tx_send(&buffer, &len, 50301);
    free(buffer);
    
    return 0;
}
