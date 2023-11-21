//
//  ByteBrewNativeiOSPlugin.h
//  ByteBrewNativeiOSPlugin
//
//  Created by Cameron Hozouri on 4/23/21.
//

#ifndef ByteBrewProgressionType_h
#define ByteBrewProgressionType_h
typedef enum {
    Started,
    Completed,
    Failed
} ByteBrewProgressionType;

#endif /* ByteBrewProgressionType_h */

#import <Foundation/Foundation.h>

@interface ByteBrewNativeiOSPlugin : NSObject
+(void)InitializeWithSettings:(NSString*) gameID SecretKey:(NSString*) secretKey EngineVersion:(NSString*) engineV BuildVersion:(NSString*) buildV;
+(BOOL) IsByteBrewInitialized;
+(void)StartPushNotification;
+(void)StartPushNotification:(NSDictionary*) launchOptions;
+(void) LowLevelPushStart;
+(void) AddNewCustomEvent:(NSString*) eventName;
+(void) AddNewCustomEventWithNumericValue:(NSString *)eventName Value:(Float64) value;
+(void) AddNewCustomEventWithStringValue:(NSString *)eventName Value:(NSString*) value;
+(void) AddCustomDataAttributeWithStringValue:(NSString *)key Value:(NSString *)value;
+(void) AddCustomDataAttributeWithDoubleValue:(NSString *)key Value:(double)value;
+(void) AddCustomDataAttributeWithIntegerValue:(NSString *)key Value:(int)value;
+(void) AddCustomDataAttributeWithBooleanValue:(NSString *)key Value:(BOOL)value;
+(void) AddProgressionEvent:(ByteBrewProgressionType) progressionStatus Environment:(NSString*) environment Stage:(NSString*) stage;
+(void) AddProgressionEventWithNumericValue:(ByteBrewProgressionType) progressionStatus Environment:(NSString*) environment Stage:(NSString*) stage Value:(Float64) value;
+(void) AddProgressionEventWithStringValue:(ByteBrewProgressionType) progressionStatus Environment:(NSString*) environment Stage:(NSString*) stage Value:(NSString*) value;
+(void) NewTrackedAdEvent:(NSString*) placementType AdLocation:(NSString*) adLoaction;
+(void) NewTrackedAdEvent:(NSString*) placementType AdLocation:(NSString*) adLocation AdID:(NSString*) adID;
+(void) NewTrackedAdEvent:(NSString*) placementType AdLocation:(NSString*) adLocation AdID:(NSString*) adID AdProvider:(NSString*) adProvider;
+(void) NewTrackedAdEvent:(NSString*) placementType AdProvider:(NSString*) adProvider AdUnitName:(NSString*) adUnitName Revenue:(double)revenue;
+(void) NewTrackedAdEvent:(NSString*) placementType AdProvider:(NSString*) adProvider AdUnitName:(NSString*) adUnitName AdLocation:(NSString*) adLocation Revenue:(double)revenue;
+(void) AddTrackedInAppPurchaseEvent:(NSString*) store Currency:(NSString*) currency Amount:(Float64) amount ItemID:(NSString*) itemID Category:(NSString*) category;
+(void) AddTrackediOSInAppPurchaseEvent:(NSString*) store Currency:(NSString*) currency Amount:(Float64) amount ItemID:(NSString*) itemID Category:(NSString*) category Receipt:(NSString*) receipt;
typedef void (^FinishedValidation)(NSMutableDictionary* purchaseResult);
+(void) ValidateiOSInAppPurchaseEvent:(NSString*) store Currency:(NSString*) currency Amount:(Float64) amount ItemID:(NSString*) itemID Category:(NSString*) category Receipt:(NSString*) receipt finishedValidationResult:(FinishedValidation) validationResult;
typedef void (^FinishedRetrieval)(BOOL status);
+(BOOL) HasRemoteConfigs;
+(void) LoadRemoteConfigs:(FinishedRetrieval) finished;
+(NSString*) RetrieveRemoteConfigs:(NSString*) key DefaultValue:(NSString*) defaultValue;
+(NSString*) GetUserID;
+(void) RestartTracking;
+(void) StopTracking;
@end
