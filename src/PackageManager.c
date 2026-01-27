#include "/home/codeleaded/System/Static/Library/PackageManager.h"
#include "/home/codeleaded/System/Static/Library/LibCrawler.h"

int main() {
    PackageManager pm = PackageManager_New(".","./PackageManager.yaml");
    PackageManager_LoadCrawl(&pm);
    PackageManager_Free(&pm);
    return 0;
}