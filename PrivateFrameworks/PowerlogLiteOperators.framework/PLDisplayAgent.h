/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDisplayAgent : PLAgent {
    BOOL _alsOn;
    PLTimer *_backlightFilterTimer;
    BrightnessSystemClient *_brightnessSystemClient;
    NSString *_displayHardware;
    NSDictionary *_displayPowerModel;
    PLIOKitOperatorComposition *_iokitBacklight;
    PLIOKitOperatorComposition *_iokitDisplay;
    PLIOKitOperatorComposition *_iokitTouch;
    BOOL _isMultitouchLoggingEnabled;
    double _lastALSPowerSaved;
    PLMonotonicTimer *_logLastALSPowerSavedTimer;
    PLXPCListenerOperatorComposition *_multitouchXPCListener;
    NSDictionary *_pendingBacklightEntry;
    NSDate *_pendingBacklightEntryDate;
    struct __IOHIDEventSystemClient { } *_touchHIDClientRef;
    BOOL _userTouch;
    NSDate *_userTouchDownTime;
}

@property BOOL alsOn;
@property (retain) PLTimer *backlightFilterTimer;
@property (retain) BrightnessSystemClient *brightnessSystemClient;
@property (readonly) NSString *displayHardware;
@property (readonly) NSDictionary *displayPowerModel;
@property (readonly) PLIOKitOperatorComposition *iokitBacklight;
@property (readonly) PLIOKitOperatorComposition *iokitDisplay;
@property (readonly) PLIOKitOperatorComposition *iokitTouch;
@property BOOL isMultitouchLoggingEnabled;
@property double lastALSPowerSaved;
@property (retain) PLMonotonicTimer *logLastALSPowerSavedTimer;
@property (retain) PLXPCListenerOperatorComposition *multitouchXPCListener;
@property (retain) NSDictionary *pendingBacklightEntry;
@property (retain) NSDate *pendingBacklightEntryDate;
@property struct __IOHIDEventSystemClient { }*touchHIDClientRef;
@property BOOL userTouch;
@property (retain) NSDate *userTouchDownTime;

+ (id)entryAggregateDefinitionUserTouch;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionTouch;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionALSEnabled;
+ (id)entryEventForwardDefinitionALSPowerSaved;
+ (id)entryEventForwardDefinitionALSUserPreferences;
+ (id)entryEventForwardDefinitionDisplay;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionDisplay;
+ (id)entryEventPointDefinitionMultitouch;
+ (id)entryEventPointDefinitionUserBrightness;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (BOOL)alsOn;
- (id)backlightFilterTimer;
- (id)brightnessSystemClient;
- (id)displayHardware;
- (id)displayPowerModel;
- (void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (id)iokitBacklight;
- (id)iokitDisplay;
- (id)iokitTouch;
- (BOOL)isAlsEnabled;
- (BOOL)isMultitouchLoggingEnabled;
- (double)lastALSPowerSaved;
- (void)log;
- (void)logEventBackwardTouch;
- (void)logEventBackwardUserTouch:(BOOL)arg1;
- (void)logEventForwardALSEnabled;
- (void)logEventForwardALSUserPreferences;
- (void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg1;
- (void)logEventForwardALSUserPreferencesWithCurrLux;
- (void)logEventForwardDisplay;
- (void)logEventForwardDisplayWithRawData:(id)arg1 withDate:(id)arg2;
- (void)logEventPointDisplay;
- (void)logEventPointDisplayBacklight;
- (void)logEventPointDisplayForBlock:(id)arg1 isActive:(BOOL)arg2;
- (void)logEventPointDisplayMIE;
- (void)logEventPointMultitouchWithPayload:(id)arg1;
- (void)logEventPointUserBrightnessCommitted:(double)arg1;
- (id)logLastALSPowerSavedTimer;
- (void)modelDisplayPower:(id)arg1;
- (double)modelDisplayPowerForK94:(id)arg1;
- (id)multitouchXPCListener;
- (id)pendingBacklightEntry;
- (id)pendingBacklightEntryDate;
- (void)setAlsOn:(BOOL)arg1;
- (void)setBacklightFilterTimer:(id)arg1;
- (void)setBrightnessSystemClient:(id)arg1;
- (void)setIsMultitouchLoggingEnabled:(BOOL)arg1;
- (void)setLastALSPowerSaved:(double)arg1;
- (void)setLogLastALSPowerSavedTimer:(id)arg1;
- (void)setMultitouchXPCListener:(id)arg1;
- (void)setPendingBacklightEntry:(id)arg1;
- (void)setPendingBacklightEntryDate:(id)arg1;
- (void)setTouchHIDClientRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (struct __IOHIDEventSystemClient { }*)setUpIOHIDTouchSystemClient;
- (void)setUserTouch:(BOOL)arg1;
- (void)setUserTouchDownTime:(id)arg1;
- (struct __IOHIDEventSystemClient { }*)touchHIDClientRef;
- (double)uAmpsToDisplayPower:(double)arg1;
- (BOOL)userTouch;
- (id)userTouchDownTime;

@end
