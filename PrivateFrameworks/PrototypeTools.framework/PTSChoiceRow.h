//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@class NSArray;

@interface PTSChoiceRow : PTSRow
{
    NSArray *_possibleValues;
    NSArray *_possibleTitles;
    NSArray *_possibleShortTitles;
}

- (Class)rowTableViewCellClass;
@property(copy, nonatomic) NSArray *possibleShortTitles; // @synthesize possibleShortTitles=_possibleShortTitles;
- (void)updateWithRow:(id)arg1;
@property(copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
- (void).cxx_destruct;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
@property(copy, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
- (id)init;
- (id)possibleShortTitles:(id)arg1;

@end
