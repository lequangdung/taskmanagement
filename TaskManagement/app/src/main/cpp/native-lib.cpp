#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_management_task_gate_app_highlight_com_vn_taskmanagement_FirstActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
