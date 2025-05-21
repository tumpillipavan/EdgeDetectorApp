# EdgeDetectorApp  
Real-time camera edge detection using Android, OpenCV (C++), and OpenGL ES.

## Features  
- Camera feed using CameraX  
- Canny edge detection via JNI/OpenCV  
- OpenGL ES 2.0 rendering  

## Setup  
1. **OpenCV Setup**:  
   - Download [OpenCV Android SDK](https://opencv.org/releases/) and import the `opencv` module.  
2. **NDK**: Install NDK in Android Studio.  
3. Sync Gradle and build.  

## Architecture  
- **Java**: Camera handling, UI.  
- **C++/JNI**: OpenCV image processing.  
- **OpenGL**: Rendering pipeline.  