//
//  AlienMarkdown.m
//  Aliens
//
//  Created by Hoon H. on 2014/07/12.
//
//

#import "AlienMarkdown.h"
#include "Markdown.h"
#include <string>

using	str	=	std::string;

@implementation AlienMarkdown
+ (NSString *)HTMLStringByProcessingMarkdownString:(NSString *)string
{
	char const*	s1	=	[string UTF8String];
	str			s2	=	str(s1);
	str			s3	=	Eonil::Aliens::Markdown::process(s2);
	char const*	s4	=	s3.c_str();
	NSString*	s5	=	[NSString stringWithUTF8String:s4];
	return		s5;
}
@end
