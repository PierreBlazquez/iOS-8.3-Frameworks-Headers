//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Weather/WeatherXMLHTTPRequest.h>

@interface WeatherValidator : WeatherXMLHTTPRequest
{
    id <WeatherValidatorDelegate> _delegate;
}

+ (id)sharedWeatherValidator;
- (void)validateLocation:(id)arg1;
- (void)processDocument:(struct _xmlDoc *)arg1;
- (id)aggregateDictionaryDomain;
- (void)_failWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)failWithError:(id)arg1;

@end
