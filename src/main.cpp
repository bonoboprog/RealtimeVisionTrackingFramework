#include <iostream>
#include <memory>
#include "Modules/CameraSource.hpp"
#include "Core/FrameContext.hpp"

int main() {

    // 1. Initialize the video source (CameraSource in this case)
    std::unique_ptr<IVideoSource> src = std::make_unique<CameraSource>(0);

    if (!src->isOpened()) {
        std::cerr << "Error: Could not open video source!" << std::endl;
        return -1;
    }

    FrameContext ctx;
    std::cout << "Framework initializated. Press ESC to exit." << std::endl;

    // 2. Main loop to capture and display frames (real-time acquisition)
    while (true) {
        auto frameOpt = src->getNextFrame();

        if (!frameOpt.has_value()) break; // Exit loop if no frame is available (e.g., camera disconnected)

        // Update the context
        ctx.frame = frameOpt.value();
        ctx.frameNumber++;
        ctx.timestamp = std::chrono::steady_clock::now();

        // Process the frame (for now, we just display it)
        cv::imshow("Camera Feed", ctx.frame);
        
        // handle user input to exit the loop
        if (cv::waitKey(1) == 27) break;
    }

    return 0;
};