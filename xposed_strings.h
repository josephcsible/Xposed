#ifndef XPOSED_STRINGS_H_
#define XPOSED_STRINGS_H_

namespace xposed {
namespace strings {
    extern char xposedlog[]; // XPOSED_DIR "log/error.log"
    extern char xposedlogOld[]; // XPOSED_DIR "log/error.log.old"
    extern char xposedlogConfAll[]; // XPOSED_DIR "conf/log_all"
    extern char xposedJarNewversion[]; // XPOSED_DIR "bin/XposedBridge.jar.newversion"
    extern char xposedLoadBlocker[]; // XPOSED_DIR "conf/disabled"
    extern char xposedSafemodeNodelay[]; // XPOSED_DIR "conf/safemode_nodelay"
    extern char xposedSafemodeDisable[]; // XPOSED_DIR "conf/safemode_disable"

    extern char xposedBinderSystemServiceName[]; // "user.xposed.system"
    extern char xposedBinderAppServiceName[]; // "user.xposed.app"
    extern char xposedClassDotsZygote[]; // "de.robv.android.xposed.XposedBridge"
    extern char xposedClassDotsTools[]; // "de.robv.android.xposed.XposedBridge$ToolEntryPoint"
    extern char xposedClassDotsService[]; // "de.robv.android.xposed.IXposedService"
    extern char xposedLibDalvik[]; // "/system/lib/libxposed_dalvik.so" or "/system/lib64/libxposed_dalvik.so"
    extern char xposedLibArt[]; // "/system/lib/libxposed_art.so" or "/system/lib64/libxposed_art.so"
    extern char xposedPropFile[]; // "/system/xposed.prop"

    extern char xposed[]; // "xposed"
    extern char xposedInitLib[]; // "xposedInitLib"
    extern char xposedversion[]; // "--xposedversion"
    extern char xposedtestsafemode[]; // "--xposedtestsafemode"
    extern char xposed_logcat[]; // "xposed_logcat"
    extern char xposed_service[]; // "xposed_service"
    extern char xposed_service_app[]; // "xposed_service_app"
    extern char xposed_service_system[]; // "xposed_service_system"
    extern char xposed_zygote_service[]; // "xposed_zygote_service"
    extern char XposedStartupMarker[]; // "XposedStartupMarker"
    extern char XposedStartupMarkerD[]; // "XposedStartupMarker:D"
    extern char XposedI[]; // "Xposed:I"
    extern char XposedInstallerI[]; // "Xposednstaller:I"

#define HIDE_STRING(x) do { char* stringToHide = x; while (*stringToHide) ++(*stringToHide++); } while(0)
#define UNHIDE_STRING(x) do { char* stringToUnhide = x; while (*stringToUnhide) --(*stringToUnhide++); } while(0)
    void unhideStrings();
}  // namespace strings
}  // namespace xposed

#endif /* XPOSED_STRINGS_H_ */