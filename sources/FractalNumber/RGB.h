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
 * @ Create Time: 2025-05-30 09:25:40
 * @ Modified by: Miroslav Seri
 * @ Modified time: 2025-05-30 09:27:20
 * @ Description: This header file defines the RGB struct for representing colors using red, green, and blue components. It also declares a subtraction operator for RGB color manipulation.
 */

#ifndef RGB_H
#define RGB_H

namespace caveofprograming
{
    /**
     * @brief Structure representing an RGB color.
     *
     * This struct holds three double values representing the red, green, and blue components of a color.
     */
    struct RGB
    {
        double r; ///< Red component
        double g; ///< Green component
        double b; ///< Blue component

    public:
        /**
         * @brief Constructs an RGB color with the specified red, green, and blue values.
         * @param red The red component (0.0 - 1.0).
         * @param green The green component (0.0 - 1.0).
         * @param blue The blue component (0.0 - 1.0).
         */
        RGB(double red, double green, double blue);
    };

    /**
     * @brief Subtracts the RGB values of two colors.
     *
     * Returns a new RGB struct where each component is the result of subtracting the corresponding component of the second color from the first.
     * @param first The minuend RGB color.
     * @param second The subtrahend RGB color.
     * @return RGB The resulting RGB color after subtraction.
     */
    RGB operator-(const RGB &first, const RGB &second);
} // namespace caveofprograming

#endif // FRACTALNUMBER_RGB_H