/**
 * @ Author:
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠶⣶⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⡀⠀⠀⠀⢸⡆⠈⣷⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠛⠋⠉⠀⠀⠉⠉⠙⠓⢶⣟⡅⢼⣿⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡴⠶⠾⠟⠛⠛⠛⠻⠷⠶⣤⣠⣤⣀⠀⠀⢠⡾⠁⠀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠈⢩⠿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⣀⣶⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡏⠉⠹⡍⠛⠶⣯⡄⠀⢠⡟⣩⡶⠶⣄⠀⠀⠀⠀⢠⡄⡀⠙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⣠⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡇⠀⠀⠙⣦⡀⣀⡀⠀⠀⠡⠯⠀⠀⣠⠀⢤⡀⠀⠘⣷⣟⢲⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⢀⣼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠷⣤⣤⣾⠿⠛⠁⠀⠀⠀⠀⣰⣿⣟⣷⡀⢳⡀⠀⠻⣿⣶⡟⠙⠦⣤⡀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⢀⡾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡇⢸⣧⡀⣀⣈⣿⠿⠛⣛⢻⢿⣆⠀⠀⠀⠀⠀
 * ⠀⠀⣸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣷⠀⠀⠀⠀⠀⠀⠺⢿⣿⡿⠛⠋⠉⠉⠉⠉⠀⠀⠸⣿⢳⣶⡻⣦⠀⠀⠀⠀
 * ⠀⢰⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠀⠀⠀⠀⠀⠀⠀⢠⡟⠀⢠⡴⢿⣦⠀⠀⠀⠀⠀⠙⢦⣻⡇⢹⣇⠀⠀⠀
 * ⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⠀⠀⠀⠠⡖⠻⣗⣾⠀⠀⢸⡇⣸⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⢸⡿⠀⠀⠀
 * ⠀⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣄⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠙⠿⠋⠀⠀⠀⠀⢀⣀⣀⣀⣰⡟⠁⠀⠀⠀
 * ⠀⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠷⣄⡀⠀⠀⠀⠹⣧⣀⠀⠀⠀⠀⠀⢀⣠⠾⡋⠉⢿⡭⠿⠃⠀⠀⠀⠀
 * ⠀⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⢤⣄⠀⠈⢿⡓⠶⢴⡖⢛⡿⢹⡎⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⡿⠀⠀⠀⢠⢶⡀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣦⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⣷⣄⠀⠻⢦⣈⣛⣿⡴⠿⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⣼⠃⠀⠀⠀⠀⠳⣷⣄⠀⠀⠀⠀⠀⠀⠀⢸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠆⠀⣀⡴⠋⠁⠉⣷⠶⣤⣬⣽⣧⠾⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⣿⠀⠀⠀⠀⠀⠀⠈⠙⣷⣤⣀⠀⠀⠀⠀⠈⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣧⡤⠞⠉⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⢹⣇⠀⠀⠀⠀⣀⣀⣴⣿⠈⠙⠛⢳⣶⠶⠶⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⣹⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⢸⡀⠀⠀⠈⠓⠒⠛⠻⣆⠀⠀⠀⠻⣄⠀⠀⠹⣧⠀⠀⠀⠀⠀⠀⠀⣸⡏⠀⠀⠀⠀⣀⣀⣴⣟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⢸⡆⠀⠀⣀⣀⣀⡤⢄⣽⢧⡀⠀⠀⢸⣆⠀⠀⢹⠄⠀⠀⠀⠶⠶⠾⢿⣳⡀⠀⠀⠀⠀⠉⠉⣙⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠘⢷⣤⣾⠁⠈⢿⡀⠀⣹⣦⣿⠀⠀⠀⠛⠓⠚⡟⠀⠀⢀⣤⣀⣠⠶⢬⡷⣷⡀⠀⢀⣴⠒⢿⡉⢻⡏⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠙⠛⠛⠛⠛⠛⠛⠁⠀⠀⠀⠀⠀⠀⠘⠷⣤⣼⠁⠀⢘⣧⣄⣀⣷⣼⡿⠶⢾⣥⣤⣤⡿⠚⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠋⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * @ Create Time: 2025-05-26 16:42:31
 * @ Modified by: Miroslav Seri
 * @ Modified time: 2025-05-29 22:04:46
 * @ Description: Definition of the BitmapFileHeader structure used for BMP file headers.
 *                This structure contains the file signature, file size, reserved field, and data offset.
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>

#pragma pack(push, 2)

/**
 * @brief Structure representing the BMP file header.
 *
 * This structure is used to store the header information required at the beginning of a BMP file.
 * The fields are packed to 2-byte alignment to match the BMP file format specification.
 */
struct BitmapFileHeader
{
    char header[2]{'B', 'M'}; ///< File signature, must be 'BM' for Bitmap files.
    int32_t fileSize;         ///< Total size of the BMP file in bytes.
    int32_t reserved{0};      ///< Reserved field, must be zero.
    int32_t dataOffset;       ///< Offset from the beginning of the file to the pixel data.
};

#pragma pack(pop)

#endif