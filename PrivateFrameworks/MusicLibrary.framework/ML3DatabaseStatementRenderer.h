//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ML3DatabaseStatementRenderer : NSObject
{
}

+ (id)defaultRenderer;
- (id)savepointReleaseStatementWithName:(id)arg1;
- (id)savepointStatementWithName:(id)arg1;
- (id)rollbackTranscationStatement;
- (id)commitTransactionStatement;
- (id)beginTransactionStatementWithBehaviorType:(unsigned int)arg1;
- (id)rollbackTranscationStatementToSavepointName:(id)arg1;
- (id)insertStatementUsingDefaultValuesForTableName:(id)arg1;
- (id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2;
- (id)insertStatementWithOptions:(id)arg1;
- (id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned int)arg2;

@end
