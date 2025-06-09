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
 * @ Create Time: 2025-05-28 11:18:48
 * @ Modified by: Miroslav Seri
 * @ Modified time: 2025-05-29 22:05:21
 * @ Description:
 *   Declaration of the Mandelbrot class for calculating the number of iterations
 *   for a given point in the Mandelbrot set. Provides a static method to compute
 *   the number of iterations for a complex coordinate (x, y) and a constant for
 *   the maximum number of iterations.
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace caveofprograming
{

    /**
     * @class Mandelbrot
     * @brief Provides functionality to calculate Mandelbrot set iterations.
     */
    class Mandelbrot
    {
    public:
        /**
         * @brief The maximum number of iterations for Mandelbrot calculation.
         */
        static const int MAX_ITERATIONS = 1000;

        /**
         * @brief Constructor for Mandelbrot class.
         *
         * Initializes any resources if needed.
         */
        Mandelbrot();

        /**
         * @brief Virtual destructor for Mandelbrot class.
         *
         * Cleans up any resources if needed.
         */
        virtual ~Mandelbrot();

        /**
         * @brief Calculates the number of iterations for a given point (x, y).
         *
         * Determines how many iterations it takes for the sequence to escape
         * for the complex number c = x + iy. If the sequence does not escape
         * within MAX_ITERATIONS, returns MAX_ITERATIONS.
         *
         * @param x The real part of the complex coordinate.
         * @param y The imaginary part of the complex coordinate.
         * @return int The number of iterations before escape, or MAX_ITERATIONS.
         */
        static int getIterations(double x, double y);
    };

}

#endif