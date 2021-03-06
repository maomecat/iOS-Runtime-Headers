/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {
    NSString *_attachmentContext;
    NSMutableArray *_attachments;
    MFMailDropMetadata *_mailDropMetaData;
}

@property (nonatomic, retain) NSString *attachmentContext;
@property (nonatomic, retain) NSMutableArray *attachments;
@property (nonatomic, retain) MFMailDropMetadata *mailDropMetaData;

+ (id)_mailDropZone;

- (int)_processAttachments;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)attachmentContext;
- (id)attachments;
- (void)dealloc;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;
- (id)mailDropMetaData;
- (BOOL)scaleImages:(id)arg1;
- (void)setAttachmentContext:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setMailDropMetaData:(id)arg1;
- (BOOL)updateMessageWithAttachmentsSynchronously;

@end
