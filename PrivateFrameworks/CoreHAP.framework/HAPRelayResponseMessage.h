/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayResponseMessage : NSObject {
    NSData *_body;
    HAPRelayRequestMessage *_request;
    unsigned int _type;
}

@property (nonatomic, retain) NSData *body;
@property (getter=isEncrypted, nonatomic, readonly) BOOL encrypted;
@property (nonatomic, readonly) HAPRelayRequestMessage *request;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (BOOL)_deserializeResponseMessage:(id)arg1;
- (id)body;
- (id)initWithRequest:(id)arg1 serializedMessage:(id)arg2;
- (BOOL)isEncrypted;
- (id)request;
- (void)setBody:(id)arg1;
- (unsigned int)type;

@end
