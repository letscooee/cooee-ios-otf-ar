#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "OTFARAppController.h"

#include "UndefinePlatforms.h"
#include <mach-o/ldsyms.h>
typedef struct
#ifdef __LP64__
    mach_header_64
#else
    mach_header
#endif
    MachHeader;
#include "RedefinePlatforms.h"


//! Project version number for UnityFramework.
FOUNDATION_EXPORT double CooeeOTFARVersionNumber;

//! Project version string for UnityFramework.
FOUNDATION_EXPORT const unsigned char CooeeOTFARVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <UnityFramework/PublicHeader.h>

#pragma once

// important app life-cycle events
__attribute__ ((visibility("default")))
@protocol CooeeOTFARListener<NSObject>
@optional
- (void)unityDidUnload:(NSNotification*)notification;
- (void)unityDidQuit:(NSNotification*)notification;
@end

__attribute__ ((visibility("default")))
@interface CooeeOTFAR : NSObject
{
}

- (OTFARAppController*)appController;

+ (CooeeOTFAR*)getInstance;

- (void)setDataBundleId:(const char*)bundleId;

- (void)runUIApplicationMainWithArgc:(int)argc argv:(char*[])argv;
- (void)runEmbeddedWithArgc:(int)argc argv:(char*[])argv appLaunchOpts:(NSDictionary*)appLaunchOpts;

- (void)unloadApplication;
- (void)quitApplication:(int)exitCode;

- (void)registerFrameworkListener:(id<CooeeOTFARListener>)obj;
- (void)unregisterFrameworkListener:(id<CooeeOTFARListener>)obj;

- (void)showUnityWindow;
- (void)pause:(bool)pause;

- (void)setExecuteHeader:(const MachHeader*)header;
- (void)sendMessageToGOWithName:(const char*)goName functionName:(const char*)name message:(const char*)msg;

@end
