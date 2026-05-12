#pragma once
#include <opencv2/opencv.hpp>
#include <chrono>
#include <cstdint> // For uint64_t

struct FrameContext {
    cv::Mat frame; // Current video frame
    uint64_t framenumber = 0; // Frame number, incremented for each new frame captured
    std::chrono::steady_clock::time_point timestamp;    // Time point when the frame was captured, 
                                                        // using steady_clock to avoid issues with system clock changes

    // Here we can add more fields in the future, such as:
    // std::vector<cv::Rect> detectedObjects; // Detected objects in the frame
};