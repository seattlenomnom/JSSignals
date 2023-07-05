/* source file for jssignals, a mule to test out the signals process on
 * linux and more specifically my raspberrypi.
 *
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int num){
    write(STDOUT_FILENO, "I won't die!\n", 13);
}

int main(int argc, char *argv[]){
    signal(SIGINT, handler)
    while(1){
        printf("wasting your cycles. %d\n", getpid());
        sleep(1);
    }
}

