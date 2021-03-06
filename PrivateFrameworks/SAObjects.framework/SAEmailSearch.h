//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand
{
}

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *toEmail;
@property(copy, nonatomic) NSString *fromEmail;
@property(copy, nonatomic) NSString *timeZoneId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *subject;
@property(nonatomic) int status;
- (id)groupIdentifier;

@end

