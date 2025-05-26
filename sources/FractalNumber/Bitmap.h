#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>

namespace caveofprogramming
{

    class Bitmap
    {
    private:
        int m_width{0};
        int m_height{0};

    public:
        Bitmap(int width, int height);
        virtual ~Bitmap();
    };

} /* namespace caveofprogramming */

#endif /* BITMAP_H_ */
