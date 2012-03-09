/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSPersonalizeOffersDelegate>, NSArray;

@interface SSPersonalizeOffersRequest : SSRequest <SSCoding> {
    NSArray *_items;
}

@property(readonly) NSArray * items;
@property <SSPersonalizeOffersDelegate> * delegate;


- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)items;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void)_sendResponseToDelegate:(id)arg1;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end