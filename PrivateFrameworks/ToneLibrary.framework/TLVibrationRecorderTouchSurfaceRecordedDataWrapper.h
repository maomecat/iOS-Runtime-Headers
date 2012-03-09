/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject  {
    void *_recordedData;
    unsigned long _recordedDataElementsCount;
    unsigned long _recordedDataCursor;
    double _startTime;
    BOOL _hasActuallyStartedRecording;
    BOOL _warmUpMode;
    BOOL _displayLinkHasRefreshedAtLeastOnce;
    unsigned int _maximumFramesPerSecondRate;
    double _vibrationPatternMaximumDuration;
}


- (void)dealloc;
- (BOOL)getTouchLocation:(struct CGPoint { float x1; float x2; }*)arg1 touchPhase:(unsigned int*)arg2 forTimeInterval:(double)arg3;
- (void)didStopRecording;
- (void)recordTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(unsigned int)arg2;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)_recordFinalDataWithTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(unsigned int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1 maximumFramesPerSecondsRate:(unsigned int)arg2;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;

@end