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
 * @ Create Time: 2025-05-29 22:07:41
 * @ Modified by: Miroslav Seri
 * @ Modified time: 2025-05-29 22:07:44
 * @ Description: Implementation of the FractalCreator class for generating and rendering the Mandelbrot fractal.
 *                Includes zoom management, color ranges, pixel iteration calculation, and bitmap saving.
 */
#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"
#include <cassert>

namespace caveofprograming
{
    // Runs the fractal creation process and writes the result to a bitmap file.
    void FractalCreator::run(string name)
    {
        calculateIteration();       // Calculate Mandelbrot iterations for each pixel
        calculateTotalIterations(); // Calculate total number of iterations
        calculateRangeTotals();     // Print totals for each color range
        drawFractal();              // Draw the fractal image
        writeBitmap(name);          // Save the bitmap to file
    }

    // Constructor: Initializes FractalCreator with given width and height.
    FractalCreator::FractalCreator(int width, int height) : m_width(width), m_height(height),
                                                            m_histogram(new int[Mandelbrot::MAX_ITERATIONS]{0}),
                                                            m_fractal(new int[m_width * m_height]{0}),
                                                            m_bitmap(m_width, m_height),
                                                            m_zoomList(m_width, m_height)
    {
        m_zoomList.add(Zoom(m_width / 2, m_height / 2, 4.0 / m_width)); // Initial zoom to center
    }

    // Destructor: Releases any resources held by the FractalCreator object.
    FractalCreator::~FractalCreator()
    {
        // Destructor body is empty, smart pointers handle memory management
    }

    // Calculates the number of iterations for each pixel in the fractal.
    void FractalCreator::calculateIteration()
    {
        // Loop through each pixel row
        for (int y = 0; y < m_height; y++)
        {
            // Loop through each pixel column
            for (int x = 0; x < m_width; x++)
            {
                // Map pixel coordinates to fractal coordinates
                std::pair<double, double> coords = m_zoomList.doZoom(x, y);

                // Calculate Mandelbrot iterations for the given point
                int iterations = Mandelbrot::getIterations(coords.first, coords.second);

                // Store the number of iterations for the pixel
                m_fractal[y * m_width + x] = iterations;

                // If not max iterations, update the histogram
                if (iterations != Mandelbrot::MAX_ITERATIONS)
                {
                    m_histogram[iterations]++;
                }
            }
        }
    }

    // Calculates and prints the totals for each color range.
    void FractalCreator::calculateRangeTotals()
    {
        int rangeIndex = 0; // Index for the current color range

        for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
        {
            int pixelCount = m_histogram[i]; // Get the number of pixels for this iteration
            if (i >= m_ranges[rangeIndex + 1])
            {
                // If the current iteration exceeds the current range, move to the next range
                rangeIndex++;
            }
            m_rangeTotals[rangeIndex] += pixelCount; // Add to the current range total
        }
    }

    // Calculates the total number of iterations for the fractal.
    void FractalCreator::calculateTotalIterations()
    {
        // Sum all histogram values to get the total number of iterations
        for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
        {
            m_total += m_histogram[i];
        }
    }

    // Draws the fractal image based on calculated iteration data.
    void FractalCreator::drawFractal()
    {
        // Loop through each pixel row
        for (int y = 0; y < m_height; y++)
        {
            // Loop through each pixel column
            for (int x = 0; x < m_width; x++)
            {
                // Get the number of iterations for the current pixel
                int iterations = m_fractal[y * m_width + x];

                int range = getRange(iterations);      // Get the color range for this iteration
                int rangeTotal = m_rangeTotals[range]; // Get the total pixels in this range
                int rangeStart = m_ranges[range];      // Get the start of the range

                RGB &startColor = m_colors[range];     // Get the start color for this range
                RGB &endColor = m_colors[range + 1];   // Get the end color for this range
                RGB colorDiff = endColor - startColor; // Calculate the color difference

                uint8_t red = 0;
                uint8_t green = 0;
                uint8_t blue = 0;

                // If not max iterations, calculate the color
                if (iterations != Mandelbrot::MAX_ITERATIONS)
                {
                    int totalPixels = 0;

                    // Calculate hue based on normalized histogram up to this iteration
                    for (int i = rangeStart; i <= iterations; i++)
                    {
                        totalPixels += m_histogram[i]; // Sum pixels in the range
                    }

                    // Interpolate color based on hue
                    red = startColor.r + colorDiff.r * (double)totalPixels / rangeTotal;
                    green = startColor.g + colorDiff.g * (double)totalPixels / rangeTotal;
                    blue = startColor.b + colorDiff.b * (double)totalPixels / rangeTotal;
                }

                // Set pixel color in bitmap
                m_bitmap.setPixel(x, y, red, green, blue);
            }
        }
    }

    // Adds a color range for the fractal image.
    void FractalCreator::addRange(double rangeEnd, const RGB &rgb)
    {
        m_ranges.push_back(rangeEnd * Mandelbrot::MAX_ITERATIONS); // Add range end value
        m_colors.push_back(rgb);                                   // Add associated color

        // If the first range was already added, add a new total for this range
        if (m_bGotFirstRange)
        {
            m_rangeTotals.push_back(0); // Initialize total for the new range
        }
        m_bGotFirstRange = true; // Mark that at least one range exists
    }

    void FractalCreator::witeBitmap()
    {
        m_bitmap.write("fractal.bmp"); // Write the bitmap to a default file
    }

    int FractalCreator::getRange(int iterations) const
    {
        int range = 1; // Default range index
        for (size_t i = 0; i < m_ranges.size(); i++)
        {
            range = i; // Set range to current index
            if (m_ranges[i] > iterations)
            {
                break; // If the range end is greater than iterations, break
            }
        }
        range--;                              // Adjust range to be zero-based index
        assert(range >= 0);                   // Ensure range is valid
        assert(range < (int)m_ranges.size()); // Ensure range is within bounds

        return range; // Return the determined range index
    }
    // Adds a zoom to the zoom list.
    void FractalCreator::addZoom(const Zoom &zoom)
    {
        m_zoomList.add(zoom); // Add zoom to zoom list
    }

    // Writes the generated fractal image to a bitmap file.
    void FractalCreator::writeBitmap(string name)
    {
        m_bitmap.write(name); // Write bitmap to file
    }

} // namespace caveofprograming