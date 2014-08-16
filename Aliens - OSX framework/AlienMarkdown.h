//
//  AlienMarkdown.h
//  Aliens
//
//  Created by Hoon H. on 2014/07/12.
//
//

#import <Foundation/Foundation.h>

@interface AlienMarkdown : NSObject
+ (NSString*)HTMLStringByProcessingMarkdownString:(NSString*)string;
@end
