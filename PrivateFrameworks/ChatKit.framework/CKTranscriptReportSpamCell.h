//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell
{
    UIButton *_reportSpamButton;
}

+ (id)reportSpamButton;
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
@property(retain, nonatomic) UIButton *reportSpamButton; // @synthesize reportSpamButton=_reportSpamButton;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

