#pragma once
#include <opencv2/opencv.hpp>
#include <optional>

/**
 * Interface for any video source (Webcam, File, RTSP Stream).
 */

 class IVideoSource {
    public:
        virtual ~IVideoSource() = default; // Virtual destructor for proper cleanup

        // Returns a frame if available, otherwise returns std::nullopt
        virtual std::optional<cv::Mat> getNextFrame() = 0;

        // Checks if the video source is opened and ready to provide frames
        virtual bool isOpened() const = 0;

 };