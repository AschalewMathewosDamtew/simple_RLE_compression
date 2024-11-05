# RLE Compression Tool

## Overview
This program implements Run-Length Encoding (RLE) for compressing strings. It takes an input string and compresses it by replacing consecutive identical characters with the character followed by the number of occurrences.

## Files
- `rle_compression.c`: The source code for the RLE compression tool.
- `rle_compression.exe`: The compiled executable for Windows.

## How to Use

### Option 1: Using the Executable
1. **Run the Executable**:
   Simply run the compiled program from the command line:
   ```bash
   rle_compression.exe
   ```

2. **Enter a String**:
   When prompted, enter a string you want to compress.

3. **View the Compressed Output**:
   The program will display the compressed version of the input string.

### Option 2: Compiling from Source
1. **Compile the Code**:
   If you prefer to compile the code yourself, ensure you have a C compiler (like GCC) installed. Use the following command to compile:
   ```bash
   gcc rle_compression.c -o rle_compression.exe
   ```

2. **Run the Compiled Program**:
   Execute the program with:
   ```bash
   ./rle_compression.exe
   ```

3. **Enter a String**:
   When prompted, enter a string you want to compress.

4. **View the Compressed Output**:
   The program will display the compressed version of the input string.

## Example
```plaintext
Enter a string to compress: AAAABBBCCDAA
Compressed: 4A3B2C1D2A
```

## License
This project is licensed under the MIT License.

---

### Additional Notes:
- Ensure the `rle_compression.exe` file has the appropriate permissions to be executed on your system.
