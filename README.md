# EdgeDetectorApp  
Android, OpenCV (C++), and OpenGL ES-based real-time camera edge detection.

## Features  
- Camera feed with CameraX  
- JNI/OpenCV-based Canny edge detection  
- OpenGL ES 2.0 rendering  

## Setup  
1. **OpenCV Setup**:  
   - Download [OpenCV Android SDK](https://opencv.org/releases/) and add the `opencv` module.  
2. **NDK**: Add NDK in Android Studio.
3. Please sync Gradle and build.

## Architecture
- **Java**: Handling the camera, user interface.
- **C++/JNI**: OpenCV image processing.
- **OpenGL**: The rendering pipeline.
