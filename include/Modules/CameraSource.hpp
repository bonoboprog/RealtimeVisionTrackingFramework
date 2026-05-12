#pragma once
#include "Interfaces/IVideoSource.hpp"

class CameraSource : public IVideoSource{

    private:
        cv::VideoCapture cap; // OpenCV VideoCapture object to access the camera

    public:
        // Constructor that initializes the camera source with the specified device ID (default is 0 for the first camera)
        CameraSource(int deviceID = 0) {
            cap.open(deviceID);
        }
        // override getNextFrame to capture a frame from the camera source and return it as an optional cv::Mat
        std::optional<cv::Mat> getNextFrame() override { 
        cv::Mat frame;
        if(cap.read(frame)) return frame;
        return std::nullopt; // Return nullopt if the frame could not be read
        }

        bool isOpened() const override { return cap.isOpened();} // Check if the camera source is opened and ready to provide frames
};