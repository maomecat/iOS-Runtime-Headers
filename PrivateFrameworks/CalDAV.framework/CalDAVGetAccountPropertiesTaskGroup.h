/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet *_calendarHomes;
    NSURL *_delegatePrincipalURL;
    NSURL *_dropboxURL;
    NSURL *_inboxURL;
    NSURL *_notificationURL;
    NSURL *_outboxURL;
    CalDAVServerVersion *_serverVersion;
    BOOL _supportsCalendarUserSearch;
    NSURL *_updatedPrincipalURL;
    NSSet *_userAddresses;
}

@property (nonatomic, readonly) NSSet *calendarHomes;
@property (nonatomic, retain) NSURL *delegatePrincipalURL;
@property (nonatomic, readonly) NSURL *dropboxURL;
@property (nonatomic, readonly) NSURL *inboxURL;
@property (nonatomic, readonly) NSURL *notificationURL;
@property (nonatomic, readonly) NSURL *outboxURL;
@property (nonatomic, readonly) CalDAVServerVersion *serverVersion;
@property (nonatomic, readonly) BOOL supportsCalendarUserSearch;
@property (nonatomic, readonly) NSURL *updatedPrincipalURL;
@property (nonatomic, readonly) NSSet *userAddresses;

- (void).cxx_destruct;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)calendarHomes;
- (id)delegatePrincipalURL;
- (id)description;
- (id)dropboxURL;
- (BOOL)forceOptionsRequest;
- (id)homeSet;
- (id)inboxURL;
- (id)notificationURL;
- (id)outboxURL;
- (void)processPrincipalHeaders:(id)arg1;
- (id)serverVersion;
- (void)setDelegatePrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (BOOL)supportsCalendarUserSearch;
- (id)updatedPrincipalURL;
- (id)userAddresses;

@end
