/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIDisambiguationItem : NSObject {
    NSString *_extraDisambiguationSubText;
    NSString *_extraDisambiguationText;
    NSString *_headingText;
    UIImageView *_imageView;
    BOOL _showsFavoriteStar;
    NSString *_subtitle;
    NSString *_title;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _titleBoldedRange;
}

@property (nonatomic, copy) NSString *extraDisambiguationSubText;
@property (nonatomic, copy) NSString *extraDisambiguationText;
@property (nonatomic, copy) NSString *headingText;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) BOOL showsFavoriteStar;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } titleBoldedRange;

+ (id)disambiguationItem;

- (void).cxx_destruct;
- (id)extraDisambiguationSubText;
- (id)extraDisambiguationText;
- (id)headingText;
- (id)imageView;
- (void)setExtraDisambiguationSubText:(id)arg1;
- (void)setExtraDisambiguationText:(id)arg1;
- (void)setHeadingText:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setShowsFavoriteStar:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBoldedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)showsFavoriteStar;
- (id)subtitle;
- (id)title;
- (struct _NSRange { unsigned int x1; unsigned int x2; })titleBoldedRange;

@end
