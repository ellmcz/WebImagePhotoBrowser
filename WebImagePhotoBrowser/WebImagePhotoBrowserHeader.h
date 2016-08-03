
#ifndef WebImagePhotoBrowserHeader_h
#define WebImagePhotoBrowserHeader_h
#if __has_include(<WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>)
FOUNDATION_EXPORT double SortPropertyVersion;
FOUNDATION_EXPORT const unsigned char SortPropertyVersionString[];
#import <WebImagePhotoBrowserHeader/WebImageZoomScrollView.h>
#import <WebImagePhotoBrowserHeader/WebImageZoomScrollView.h>
#else
#import "WebImageZoomScrollView"
#import "WebImgScrollView.h"
#endif
#if __has_include(<WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>)
#import <SortPropertyHeader/SortPropertyHeader.h>
#elif __has_include(<WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>)
#import <WebImagePhotoBrowserHeader/WebImageZoomScrollView.h>
#import <WebImagePhotoBrowserHeader/WebImgScrollView.h>
#else
#import "WebImageZoomScrollView.h"
#import "WebImgScrollView.h"
#endif

#if __has_include(<WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>)
#import <WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>
#elif __has_include(<WebImagePhotoBrowserHeader/WebImagePhotoBrowserHeader.h>)
#import <WebImagePhotoBrowserHeader/WebImageZoomScrollView.h>
#import <WebImagePhotoBrowserHeader/WebImgScrollView.h>
#else
#import "WebImageZoomScrollView.h"
#import "WebImgScrollView.h"
#endif
#endif /* WebImagePhotoBrowserHeader_h */
