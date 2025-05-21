#include <jni.h>
#include <opencv2/opencv.hpp>

extern "C" JNIEXPORT void JNICALL
Java_com_example_edgedetectorapp_CameraActivity_processFrame(
        JNIEnv *env, jobject thiz, jbyteArray input, jint width, jint height, jlong outMatAddr) {
    jbyte *inputData = env->GetByteArrayElements(input, nullptr);
    cv::Mat yuvMat(height + height/2, width, CV_8UC1, inputData);
    cv::Mat rgbMat;
    cv::cvtColor(yuvMat, rgbMat, cv::COLOR_YUV2RGBA_NV21);
    cv::Mat edges;
    cv::Canny(rgbMat, edges, 50, 150);
    cv::Mat *outputMat = (cv::Mat *) outMatAddr;
    edges.copyTo(*outputMat);
    env->ReleaseByteArrayElements(input, inputData, 0);
}