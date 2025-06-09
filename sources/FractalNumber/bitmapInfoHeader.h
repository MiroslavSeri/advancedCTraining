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
 * @ Modified time: 2025-05-29 22:04:55
 * @ Description: Definition of the BitmapInfoHeader structure used for BMP info headers.
 *                This structure contains information about the image dimensions, color depth, compression, and resolution.
 */

#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <cstdint>

using namespace std;

namespace caveofprograming
{
#pragma pack(push, 2)

    /**
     * @brief Structure representing the BMP info header.
     *
     * This structure is used to store detailed information about the BMP image, such as its dimensions,
     * color depth, compression method, and resolution. The fields are packed to 2-byte alignment to match
     * the BMP file format specification.
     */
    struct BitmapInfoHeader
    {
        int32_t headerSize{40};             ///< Size of this header (40 bytes for BITMAPINFOHEADER)
        int32_t width;                      ///< Width of the bitmap in pixels
        int32_t height;                     ///< Height of the bitmap in pixels
        int16_t planes{1};                  ///< Number of color planes (must be 1)
        int16_t bitsPerPixel{24};           ///< Number of bits per pixel (24 for true color)
        int32_t compression{0};             ///< Compression method (0 = no compression)
        int32_t dataSize{0};                ///< Size of the raw bitmap data (may be 0 for uncompressed)
        int32_t horizontalResolution{2400}; ///< Horizontal resolution (pixels per meter)
        int32_t verticalResolution{2400};   ///< Vertical resolution (pixels per meter)
        int32_t colors{0};                  ///< Number of colors in the palette (0 = default)
        int32_t importantColors{0};         ///< Number of important colors (0 = all colors are important)
    };
#pragma pack(pop)
}

#endif