#include "testndk_xhb_com_myndk_MyNdk.h"


/*
 * Class:     testndk_xhb_com_myndk_MyNdk
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_testndk_xhb_com_myndk_MyNdk_getString
        (JNIEnv * env, jobject){
    return (*env).NewStringUTF("This is mylibrary !!!");
}