/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */



@interface MKCustomLocationManager : NSObject 
{
    struct __CFDictionary { } *_streetViewRequestersForSearchResults;
    struct __CFDictionary { } *_searchResultsForStreetViewRequesters;
    struct __CFDictionary { } *_reverseGeocodeRequestersForSearchResults;
    struct __CFDictionary { } *_searchResultsForReverseGeocodeRequesters;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)processSearchResult:(id)arg1;
- (void)cancelProcessingSearchResult:(id)arg1;
- (void)_streetViewRequestCompletedForSearchResult:(id)arg1 response:(id)arg2;
- (void)_reverseGeocodeRequestCompletedForSearchResult:(id)arg1 response:(id)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didCompleteRequest:(id)arg2;

@end