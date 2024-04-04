#include <iostream>

#include "color.h"
#include "vec3.h"

int main(int argc, char* argv[])
{
    // Image
    int imageWidth = 256;
    int imageHeight = 256;

    // Render
    
    std::cout << "P3\n" << imageWidth << " " << imageHeight << "\n255\n";

    for (int y = 0; y < imageHeight; ++y)
    {
        std::clog << "\rScanlines remaining: " << (imageHeight - y) << ' ' << std::flush;
        
        for (int x = 0; x < imageWidth; ++x)
        {
            auto pixel_color = color(double(x)/(imageWidth-1), double(y)/(imageHeight-1), 0);
            write_color(std::cout, pixel_color);
        }
    }

    std::clog << "\rDone.                 \n";
    
    return 0;
}
