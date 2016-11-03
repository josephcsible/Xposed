/**
 * This file contains strings that are obfuscated to hide them from SafetyNet.
 */

#include "xposed_strings.h"

namespace xposed {
namespace strings {

////////////////////////////////////////////////////////////
// Declarations
// Unhidden strings are listed in xposed_strings.h. If you change this, be sure to change that!
////////////////////////////////////////////////////////////

#define XPOSED_DIR_HIDDEN "0ebub0ebub0ef/spcw/boespje/yqptfe/jotubmmfs0"
char xposedlog[] = XPOSED_DIR_HIDDEN "mph0fssps/mph";
char xposedlogOld[] = XPOSED_DIR_HIDDEN "mph0fssps/mph/pme";
char xposedlogConfAll[] = XPOSED_DIR_HIDDEN "dpog0mph`bmm";
char xposedJarNewversion[] = XPOSED_DIR_HIDDEN "cjo0YqptfeCsjehf/kbs/ofxwfstjpo";
char xposedLoadBlocker[] = XPOSED_DIR_HIDDEN "dpog0ejtbcmfe";
char xposedSafemodeNodelay[] = XPOSED_DIR_HIDDEN "dpog0tbgfnpef`opefmbz";
char xposedSafemodeDisable[] = XPOSED_DIR_HIDDEN "dpog0tbgfnpef`ejtbcmf";

char xposedBinderSystemServiceName[] = "vtfs/yqptfe/tztufn";
char xposedBinderAppServiceName[] = "vtfs/yqptfe/bqq";
char xposedClassDotsZygote[] = "ef/spcw/boespje/yqptfe/YqptfeCsjehf";
char xposedClassDotsTools[] = "ef/spcw/boespje/yqptfe/YqptfeCsjehf%UppmFouszQpjou";
char xposedClassDotsService[] = "ef/spcw/boespje/yqptfe/JYqptfeTfswjdf";
#if defined(__LP64__)
  char xposedLibDalvik[] = "0tztufn0mjc750mjcyqptfe`ebmwjl/tp";
  char xposedLibArt[] = "0tztufn0mjc750mjcyqptfe`bsu/tp";
#else
  char xposedLibDalvik[] = "0tztufn0mjc0mjcyqptfe`ebmwjl/tp";
  char xposedLibArt[] = "0tztufn0mjc0mjcyqptfe`bsu/tp";
#endif
char xposedPropFile[] = "0tztufn0yqptfe/qspq";

char xposed[] = "yqptfe";
char xposedInitLib[] = "yqptfeJojuMjc";
char xposedversion[] = "..yqptfewfstjpo";
char xposedtestsafemode[] = "..yqptfeuftutbgfnpef";
char xposed_logcat[] = "yqptfe`mphdbu";
char xposed_service[] = "yqptfe`tfswjdf";
char xposed_service_app[] = "yqptfe`tfswjdf`bqq";
char xposed_service_system[] = "yqptfe`tfswjdf`tztufn";
char xposed_zygote_service[] = "yqptfe`{zhpuf`tfswjdf";
char XposedStartupMarker[] = "YqptfeTubsuvqNbslfs";
char XposedStartupMarkerD[] = "YqptfeTubsuvqNbslfs;E";
char XposedI[] = "Yqptfe;J";
char XposedInstallerI[] = "YqptfeJotubmmfs;J";

////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////

void unhideStrings() {
    UNHIDE_STRING(xposedlog);
    UNHIDE_STRING(xposedlogOld);
    UNHIDE_STRING(xposedlogConfAll);
    UNHIDE_STRING(xposedJarNewversion);
    UNHIDE_STRING(xposedLoadBlocker);
    UNHIDE_STRING(xposedSafemodeNodelay);
    UNHIDE_STRING(xposedSafemodeDisable);

    UNHIDE_STRING(xposedBinderSystemServiceName);
    UNHIDE_STRING(xposedBinderAppServiceName);
    UNHIDE_STRING(xposedClassDotsZygote);
    UNHIDE_STRING(xposedClassDotsTools);
    // xposedClassDotsService is used before main() starts, so it's unhidden where it's used and not here
    UNHIDE_STRING(xposedLibDalvik);
    UNHIDE_STRING(xposedLibArt);
    UNHIDE_STRING(xposedPropFile);

    UNHIDE_STRING(xposed);
    UNHIDE_STRING(xposedInitLib);
    UNHIDE_STRING(xposedversion);
    UNHIDE_STRING(xposedtestsafemode);
    UNHIDE_STRING(xposed_logcat);
    UNHIDE_STRING(xposed_service);
    UNHIDE_STRING(xposed_service_app);
    UNHIDE_STRING(xposed_service_system);
    UNHIDE_STRING(xposed_zygote_service);
    UNHIDE_STRING(XposedStartupMarker);
    UNHIDE_STRING(XposedStartupMarkerD);
    UNHIDE_STRING(XposedI);
    UNHIDE_STRING(XposedInstallerI);
}

}  // namespace strings
}  // namespace xposed