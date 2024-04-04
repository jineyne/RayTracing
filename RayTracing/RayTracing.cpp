#include <iostream>

int main(int argc, char* argv[])
{
    // Image
    int imageWidth = 256;
    int imageHeight = 256;

    // Render
    
    std::cout << "P3\n" << imageWidth << " " << imageHeight << "\n255\n";

    for (int y = 0; y < imageHeight; ++y)
    {
        for (int x = 0; x < imageWidth; ++x)
        {
            auto r = double(x) / (imageWidth - 1);
            auto g = double(y) / (imageHeight - 1);
            auto b = 0;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
    
    return 0;
}
