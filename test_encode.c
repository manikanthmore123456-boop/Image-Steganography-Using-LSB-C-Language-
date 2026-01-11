#include "encode.h"

int main(int argc, char *argv[])
{
    /* ---------------------------------------------------------
    * 3. Validate number of arguments for Encodeing
    * ---------------------------------------------------------*/
    if (argc < 3 || argc > 5)
    {
        printf("\n🚫 ERROR: Not enough arguments!\n");
        printf("\n📌 Usage :\n");
        printf("   -------------------------------------------------------\n");
        printf("   🔹 Encoding:\n");
        printf("       ./a.out -e <input.bmp> <secret.txt> <output.bmp>\n");
        printf("\n   🔹 Decoding:\n");
        printf("       ./a.out -d <stego.bmp> <decoded_output_file(optional)>\n");
        printf("   -------------------------------------------------------\n\n");
        return 0;
    }
    /* ---------------------------------------------------------
     * 1. Check operation type
     * ---------------------------------------------------------*/
    OperationType op = check_operation_type(argv);

    /* ---------------------------------------------------------
     * 2. Encoding Operation
     * ---------------------------------------------------------*/
    if (op == e_encode)
    {
        EncodeInfo encInfo;

        /* ---------------------------------------------------------
        * 3. Validate number of arguments for Encodeing
        * ---------------------------------------------------------*/
        if (argc < 4 || argc > 5)
        {
            printf("\n🚫 ERROR: Not enough arguments!\n");
            printf("\n📌 Usage :\n");
            printf("   -------------------------------------------------------\n");
            printf("   🔹 Encoding:\n");
            printf("       ./a.out -e <input.bmp> <secret.txt> <output.bmp>\n");
            printf("   -------------------------------------------------------\n\n");
            return 0;
        }

        if (read_and_validate_encode_args(argv, &encInfo) == e_success)
        {
            
            printf("\n🔐 MODE : Encoding Selected\n");
            printf("📘 Validation Successful. Starting Encoding...\n\n");

            do_encoding(&encInfo);
            return 0;
        }
        else
        {
            printf("❌ ERROR: Encoding validation failed!\n");
            return 0;
        }
    }

    /* ---------------------------------------------------------
     * 4. Decoding Operation
     * ---------------------------------------------------------*/
    else if (op == e_decode)
    {
        DecodeInfo decInfo;

        /* ---------------------------------------------------------
        * 5. Validate number of arguments for Encodeing
        * ---------------------------------------------------------*/
        if (argc < 3 || argc > 4)
        {
            printf("\n🚫 ERROR: Not enough arguments!\n");
            printf("\n📌 Usage :\n");
            printf("   -------------------------------------------------------\n");
            printf("\n   🔹 Decoding:\n");
            printf("       ./a.out -d <stego.bmp> <decoded_output_file(optional)>\n");
            printf("   -------------------------------------------------------\n\n");
            return 0;
        }

        if (read_and_validate_decode_args(argv, &decInfo) == e_success)
        {
            
            printf("\n🕵️ MODE : Decoding Selected\n");
            printf("📘 Validation Successful. Starting Decoding...\n\n");

            do_decoding(&decInfo);
            return 0;
        }
        else
        {
            printf("❌ ERROR: Decoding validation failed!\n");
            return 0;
        }
    }

    /* ---------------------------------------------------------
     * 6. Unsupported Operation
     * ---------------------------------------------------------*/
    else
    {
        printf("\n🚫 ERROR: Unsupported Operation!\n");

        printf("\n📌 Usage :\n");
        printf("   -------------------------------------------------------\n");
        printf("   🔹 Encoding:\n");
        printf("       ./a.out -e <input.bmp> <secret.txt> <output.bmp>\n");
        printf("\n   🔹 Decoding:\n");
        printf("       ./a.out -d <stego.bmp> <decoded_output_file(optional)>\n");
        printf("   -------------------------------------------------------\n\n");

        return 0;
    }

    return 0;
}
