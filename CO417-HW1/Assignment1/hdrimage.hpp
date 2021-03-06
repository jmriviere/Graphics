#ifndef __HDRIMAGE__HPP__
#define __HDRIMAGE__HPP__

#include <string>

class HDRImage : public ImageData<float> {
public:
    HDRImage(std::string path);
	static void tonMapping(HDRImage img, int stops, float gamma);
    
private:
    float weight(float value);
    
};

#endif
