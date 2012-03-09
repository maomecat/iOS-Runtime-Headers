/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSProtocolChecker, NSString, Protocol;

@interface IMRemoteProxy : NSObject  {
    id _target;
    SEL _selector;
    NSString *_identifier;
    BOOL _forwardInBackground;
    struct dispatch_queue_s { } *_queue;
    NSProtocolChecker *_protocolChecker;
}

@property(copy) NSString * identifier;
@property(copy) Protocol * remoteProtocol;
@property BOOL forwardInBackground;
@property id target;
@property SEL action;
@property struct dispatch_queue_s { }* queue;
@property(retain) NSProtocolChecker * protocolChecker;


- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;
- (void)dealloc;
- (void)setRemoteProtocol:(id)arg1;
- (void)setProtocolChecker:(id)arg1;
- (void)flushSendQueue;
- (id)remoteProtocol;
- (BOOL)forwardInBackground;
- (void)setForwardInBackground:(BOOL)arg1;
- (id)protocolChecker;
- (struct dispatch_queue_s { }*)queue;
- (id)initWithIdentifier:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setAction:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;

@end