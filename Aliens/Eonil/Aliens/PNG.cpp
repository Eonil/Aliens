//
//  PNG.cpp
//  Aliens
//
//  Created by Hoon H. on 14/4/25.
//
//

#include "PNG.h"
#include "../../../LodePNG/Sources/lodepng.h"

EONIL_ALIENS_NAMESPACE_BEGIN







auto
PNG::encode(const Eonil::Aliens::PNG::Image &image) -> Package
{
	EONIL_ALIENS_DEBUG_ASSERT(image.width < std::numeric_limits<uint32_t>::max());
	EONIL_ALIENS_DEBUG_ASSERT(image.height < std::numeric_limits<uint32_t>::max());
	
	uint32_t		w1	=	uint32_t(image.width);
	uint32_t		h1	=	uint32_t(image.height);
	
	Package			p1		{};
	unsigned int	err1	{lodepng::encode(p1.data, image.pixels, w1, h1)};
	
	if (err1 != 0)
	{
		throw	std::logic_error("Failed encoding image. An error occured.");
	}
	
	return			p1;
}
auto
PNG::decode(const Eonil::Aliens::PNG::Package &package) -> Image
{
	Image			img1	{};
	unsigned int	w1	=	0;
	unsigned int	h1	=	0;
	unsigned int	err1	{lodepng::decode(img1.pixels, w1, h1, package.data)};
	
	if (err1 != 0)
	{
		throw	std::logic_error("Failed decoding image. An error occured.");
	}
	
	return			img1;
}












EONIL_ALIENS_NAMESPACE_END