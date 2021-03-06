/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCQueuedMessage : NSObject {
    id /* block */ _completionHandler;
    NSDate *_creationDate;
    WCMessage *_message;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) NSDate *creationDate;
@property (retain) WCMessage *message;

- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id /* block */)completionHandler;
- (id)creationDate;
- (id)description;
- (id)initWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)message;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;

@end
