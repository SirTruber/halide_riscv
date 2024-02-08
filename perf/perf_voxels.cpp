#include <opencv2/ts.hpp>

#include "algos.hpp"


PERF(upscale, halide)
{

    static const int height = 100;
    static const int width = 100;
    std::vector<std::string> img_path(72);
    for (int i = 1; i <= 72; ++i)
    {
        img_path[i - 1] = cv::format("./test/image%04d.png", i);
    }
    PERF_SAMPLE_BEGIN()
        upscale(img_path, width, height);
    PERF_SAMPLE_END()
    SANITY_CHECK_NOTHING();
}
