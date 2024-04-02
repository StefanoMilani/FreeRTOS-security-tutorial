#include "ecc_tutorial.h"

void eccTask(void *parameter)
{
    printf("ECC Tutorial Task Started.\n");

    /*
        Init the struct(s) needed.
        NOTE: init TWO curve structs to generate the shared secret between the two.
    */
    printf("Initializing 2 ECC keys and RNG...");
    printf("DONE.\n");

    /*
        Generate the private and public keys for both ECC keys.
    */
    printf("Generating ECC key...");
    printf("DONE.\n");

    /*
        Export the private and public key for both ECC keys.
    */
    printf("Exporting ECC key...");
    // KEYS 1
    // KEYS 2
    printf("DONE.\n");

    /*
        Print the private and public key for both ECC keys.
    */
    // PRINT KEYS 1
    printf("\n");
    printf("Private key 1:\n");
    // ADD PRINT OF PRIVATE KEY 1 HERE
    printf("\n");
    printf("Public key 1:\n");
    // ADD PRINT OF PUBLIC KEY 1 HERE
    printf("\n");

    // PRINT KEYS 2
    printf("Private key 2:\n");
    // ADD PRINT OF PRIVATE KEY 2 HERE
    printf("\n");
    printf("Public key 2:\n");
    // ADD PRINT OF PUBLIC KEY 2 HERE
    printf("\n");

    /*
        Generate the first secret using the private of the first key and the public of the second key.
    */
    printf("Generating ECC secret 1...");
    printf("DONE.\n");

    /*
        Generate the second secret using the private of the second key and the public of the first key.
    */
    printf("Generating ECC secret 2...");
    printf("DONE.\n");

    /*
        PRINT SECRETS
    */
    printf("\n");
    printf("Secret 1:\n");
    // ADD PRINT OF SECRET 1 HERE
    printf("\n");
    printf("Secret 2:\n");
    // ADD PRINT OF SECRET 2 HERE
    printf("\n");

    /*
        Compare the two secrets.
        NOTE: The secrets should be the same.
        NOTE: Use the memcmp() function to compare the two secrets (check the aes tutorial).
    */

    printf("\n");
    printf("ECC Tutorial Task Completed.\n");

    // Leave it to flush stdout
    fflush(stdout);
    for (;;)
    {
    }
}