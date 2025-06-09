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
 * @ Create Time: 2025-05-28 11:18:34
 * @ Modified by: Miroslav Seri
 * @ Modified time: 2025-05-29 22:05:14
 * @ Description:
 *   Implementation of Mandelbrot set calculation.
 *   Provides a method to compute the number of iterations for a given point (x, y)
 *   in the complex plane before it escapes the Mandelbrot set boundary.
 */

#include <complex>
#include "mandelbrot.h"

namespace caveofprograming
{
    // Constructor for Mandelbrot class
    Mandelbrot::Mandelbrot()
    {
        // No initialization required
    }

    // Destructor for Mandelbrot class
    Mandelbrot::~Mandelbrot()
    {
        // No cleanup required
    }

    // Calculates the number of iterations for the point (x, y) in the Mandelbrot set
    int Mandelbrot::getIterations(double x, double y)
    {
        // Initialize z to 0 (complex number)
        std::complex<double> z = 0;
        // Initialize c to the complex number (x, y)
        std::complex<double> c(x, y);

        int iterations = 0;

        // Iterate until the maximum number of iterations is reached
        while (iterations < MAX_ITERATIONS)
        {
            // Mandelbrot iteration: z = z^2 + c
            z = z * z + c;
            // If the magnitude of z exceeds 2, the point escapes
            if (abs(z) > 2)
            {
                break;
            }
            // Increment the iteration counter
            iterations++;
        }
        // Return the number of iterations before escape (or MAX_ITERATIONS)
        return iterations;
    }

}