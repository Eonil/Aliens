//
//  main.cpp
//  Test
//
//  Created by Hoon H. on 14/4/27.
//
//

#include <iostream>
#include "../Aliens/Eonil/Aliens.h"

#import <Foundation/Foundation.h>
#import <EonilAliens/EonilAliens.h>

using namespace	Eonil::Aliens;

int main(int argc, const char * argv[])
{
//	PNG::encode({});
	
//	std::string	s1	=	"aaa \n === \n ABCDE [aaa](bbb) \n\n - a\n - b\n";
	std::string	s1	=	"";
	std::string	s2	=	Markdown::process(s1);

	std::cout << s2 << "\n";
	
	
	{
		NSString*	s1	=	[AlienMarkdown HTMLStringByProcessingMarkdownString:@"aa"];
		NSLog(@"%@", s1);
	}
	
    return 0;
}

