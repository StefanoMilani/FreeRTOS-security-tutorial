#include "aes_tutorial.h"

void aesTask(void *parameters)
{

    printf("AES Tutorial Task Started.\n");

    byte plaintext[] = "Hello, World! And some other stuff to have a plaintext longer than the AES128 blocksize";
    word32 plaintext_len = strlen(plaintext);
    printf("Plaintext: %s\tLen: %u\n", plaintext, plaintext_len);

    /*
        Declare the structs needed for encrypting and decrypting
        using the AES algorithm in CBC mode.
        NOTE: different structs are needed for encrypting and decrypting!
    */
    printf("Declaring AES contexts... ");
    printf("DONE.\n");

    /*
        Generate a random key of size AES_128_KEY_SIZE.
        NOTE: this key will be used for encrypting and decrypting.
        NOTE: use the generate_random_bytes implemented in part 0.
    */
    printf("Generating Key... ");
    printf("DONE.\n");

    /*
        Generate a random IV of size AES_IV_SIZE.
        NOTE: this IV will be used for encrypting and decrypting.
        NOTE: use the generate_random_bytes implemented in part 0.
    */
    printf("Generating IV... ");
    printf("DONE.\n");

    /*
        CBC ENCRYPTION MODE
    */
    printf("\nCBC ENCRYPTION MODE\n\n");

    /*
        Init the structs needed for encrypting.
    */
    printf("Initializing AES context... ");
    printf("DONE.\n");

    /*
        Update the encryption context with the key and IV.
    */
    printf("Setting Key and IV... ");
    printf("DONE.\n");

    /*
        Encrypt the plaintext.
        NOTE: the plaintext shall be padded to a multiple of AES_BLOCK_SIZE bytes!
    */
    printf("Encrypting Data using CBC... ");
    printf("DONE.\n");

    /*
        Print the ciphertext.
    */
    printf("Ciphertext:\n");
    // ADD PRINT OF CIPHERTEXT HERE

    /*
        Free the encryption AES context.
    */

    /*
     *  CBC DECRYPTION MODE
     */
    printf("\nCBC DECRYPTION MODE\n\n");

    /*
        Init the structs needed for decrypting.
    */
    printf("Initializing AES context... ");
    printf("DONE.\n");

    /*
        Update the decryption context with the key and IV.
    */
    printf("Setting Key and IV... ");
    printf("DONE.\n");

    /*
        Decrypt the plaintext.
        NOTE: the result is padded to a multiple of AES_BLOCK_SIZE bytes!
        NOTE: remove padding to obtain the plaintext.
    */
    printf("Decrypting Data using CBC... ");
    printf("DONE.\n");

    /*
        Free the decryption AES context.
    */

    /*
        Print the padded plaintext.
    */
    printf("Plaintext Decrypted Padded:\n");
    // ADD PRINT OF DECRYPTED PLAINTEXT (with padding) HERE
    printf("\n");

    /*
        Remove padding
    */
    byte plaintext_decrypted[plaintext_len];
    memset(plaintext_decrypted, 0x00, plaintext_len);
    printf("Plaintext Decrypted:\n");
    print_bytes(plaintext_decrypted, plaintext_len);
    printf("\n");
    printf("Original Plaintext:\n");
    print_bytes(plaintext, plaintext_len);
    printf("\n");

    /*
        Compare the original plaintext with the decrypted plaintext.
    */
    if (memcmp(plaintext_decrypted, plaintext, plaintext_len) != 0)
    {
        printf("Original plaintext and Decrypted data are different.\n");
    }
    else
    {
        printf("Original plaintext and Decrypted data are equals.\n");
    }

    printf("\n");
    printf("AES Tutorial Task Completed.\n");

    // Leave it to flush stdout
    fflush(stdout);
    for (;;)
    {
    }
}