/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTimingUsageLogMessage : PBCodable <NSCopying> {
    double _durationInOldState;
    struct { 
        unsigned int durationInOldState : 1; 
    } _has;
    NSMutableArray *_stateTransitionLogMessages;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic, retain) NSMutableArray *stateTransitionLogMessages;

- (void)addStateTransitionLogMessage:(id)arg1;
- (void)clearStateTransitionLogMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (BOOL)hasDurationInOldState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(BOOL)arg1;
- (void)setStateTransitionLogMessages:(id)arg1;
- (id)stateTransitionLogMessageAtIndex:(unsigned int)arg1;
- (id)stateTransitionLogMessages;
- (unsigned int)stateTransitionLogMessagesCount;
- (void)writeTo:(id)arg1;

@end
