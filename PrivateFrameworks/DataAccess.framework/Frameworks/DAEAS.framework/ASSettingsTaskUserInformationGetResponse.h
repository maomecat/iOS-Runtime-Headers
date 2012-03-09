/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem  {
    NSArray *_emailAddresses;
}

@property(retain) NSArray * emailAddresses;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end