/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSFileHandle, NSString;

@interface CalDAVHTTPTrafficLog : NSObject {
    BOOL _enabled;
    NSFileHandle *_fileHandle;
    NSString *_path;
}

@property(retain) NSFileHandle *fileHandle; /* unknown property attribute: V_fileHandle */
@property(retain) NSString *path; /* unknown property attribute: V_path */
@property BOOL enabled; /* unknown property attribute: V_enabled */
@property(readonly) BOOL isEnabledByDefault;

+ (id)instance;

- (void)dealloc;
- (BOOL)enabled;
- (id)fileHandle;
- (id)init;
- (BOOL)isEnabledByDefault;
- (void)logDAVRequest:(id)arg1;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (void)logStringWithFormat:(id)arg1;
- (id)path;
- (void)setEnabled:(BOOL)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setPath:(id)arg1;

@end