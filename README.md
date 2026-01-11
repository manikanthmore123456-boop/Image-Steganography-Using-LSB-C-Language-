# Image-Steganography-Using-LSB-C-Language-
This project implements image steganography using Least Significant Bit (LSB) technique in C. It securely hides secret data inside 24-bit BMP images with minimal visual distortion. The application supports encoding and decoding via CLI, uses magic string verification, and demonstrates bitwise operations, file handling, and system-level programming.

📌 Description

This project implements image steganography using the Least Significant Bit (LSB) technique in C. It securely hides secret data inside 24-bit BMP images with minimal visual distortion. The application supports both encoding and decoding through a command-line interface and uses a magic string for reliable data extraction.

✨ Features
  -> LSB-based data hiding in BMP images
  -> Encoding and decoding via CLI
  -> Magic string verification for secure decoding
  -> Automatic image capacity validation
  -> Supports multiple secret file types
  -> Modular and well-structured C code

🛠️ Technologies Used
  -> Language: C
  -> Compiler: GCC
  -> Platform: Linux
  -> Concepts: Bitwise operations, File handling, Memory management

⚙️ How It Works
Encoding
  -> Read source BMP image and secret file
  -> Check image capacity
  -> Embed magic string, file extension, file size, and secret data into LSBs
  -> Generate stego image

Decoding
  -> Read stego image
  -> Validate magic string
  -> Extract metadata and secret data
  -> Reconstruct original file

▶️ Usage
Encode:
  -> ./a.out -e input.bmp secret.txt output.bmp

Decode:
  -> ./a.out -d output.bmp decoded_file


🚀 Future Enhancements
  -> Add encryption and password protection
  -> Support more image formats (PNG, JPG)
  -> Improve error handling
  -> Add GUI interface

🎯 Learning Outcomes
  -> Understanding of LSB steganography
  -> Hands-on experience with low-level C programming
  -> Practical knowledge of data hiding and security concepts
