/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSExtraLMData : NSObject {
    NSRunStorage *_attachmentSizesRun;
    NSMutableArray *_blockRunsArray;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cachedFontBounds;
    float _cachedUnderlineAdjustment;
    float _cachedUnderlinePosition;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _cachedUnderlineRange;
    float _cachedUnderlineThickness;
    unsigned int _currentAttachmentIndex;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentAttachmentRect;
    NSLock *_fillHoleLock;
    NSTextContainer *_firstTextContainer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _firstTextViewVisibleCharRange;
    struct CGSize { 
        float width; 
        float height; 
    } _firstTextViewVisibleOffset;
    NSRunStorage *_fragmentRunsExtras;
    struct _NSGlyphTree { 
        struct _NSGlyphNode {} *rootNode; 
        struct _NSGlyphNode {} *curNode; 
        unsigned int curCharIndex; 
        unsigned int curGlyphIndex; 
    } _glyphTree;
    float _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _lastInvalidatedCharRange;
    float _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    struct _NSLayoutTree { 
        struct _NSLayoutNode {} *rootNode; 
        struct _NSLayoutNode {} *curNode; 
        unsigned int curGlyphIndex; 
        float curLongitudinalOrigin; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } extraLineFragmentRect; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } extraLineFragmentUsedRect; 
        unsigned int glyphsPerLineEstimate; 
        float offsetPerLineEstimate; 
    } _layoutTree;
    struct __lmFlags2 { 
        unsigned int glyphCause : 6; 
        unsigned int layoutCause : 6; 
        unsigned int delegateRespondsToTempAttrs : 1; 
        unsigned int processingFirstTextViewVisible : 1; 
        unsigned int temporarySpacingChange : 1; 
        unsigned int alwaysDrawsActive : 1; 
        unsigned int usesOldShowPackedGlyphs : 1; 
        unsigned int drawsUnderlinesLikeWebKit : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int reserved : 13; 
    } _lmFlags2;
    NSParagraphArbitrator *_paragraphArbitrator;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    id _temporaryAttributes;
    struct __CFDictionary { } *_textContainerGlyphIndexes;
    struct __CFDictionary { } *_textContainerIndexes;
    int _typesetterBehavior;
}

@end
