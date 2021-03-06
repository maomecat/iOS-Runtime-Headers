/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXNotificationHandler : NSObject {
    id /* block */ _dispatcher;
    NSString *_notificationName;
    unsigned int _observerIdentifier;
    id _target;
    BOOL _valid;
}

@property (setter=_setDispatcher:, nonatomic, copy) id /* block */ _dispatcher;
@property (setter=_setNotificationName:, nonatomic, retain) NSString *_notificationName;
@property (setter=_setTarget:, nonatomic, retain) id _target;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

+ (id)_safelyGetObserverForIdentifier:(unsigned int)arg1;
+ (unsigned int)_safelyRegisterObserver:(id)arg1;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned int)arg1;

- (id /* block */)_dispatcher;
- (void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3;
- (id)_notificationName;
- (id)_notificationTypeDescription;
- (void)_setDispatcher:(id /* block */)arg1;
- (void)_setNotificationName:(id)arg1;
- (void)_setTarget:(id)arg1;
- (void)_startObserving;
- (void)_stopObserving;
- (id)_target;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3 startObserving:(BOOL)arg4;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;
- (void)invalidate;
- (BOOL)isValid;
- (void)processHandler:(SEL)arg1;

@end
