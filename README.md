# WebImagePhotoBrowser
网页图片点击WebImagePhotoBrowser
#define WebImagePhotoBrowser()
-(void)webViewDidFinishLoad:(UIWebView *)webView
{
NSString *str = @"document.getElementsByTagName('body')[0].style.webkitTextSizeAdjust= '100%'";\
[webView stringByEvaluatingJavaScriptFromString:str];
实现webView deleglate
//js方法遍历图片添加点击事件 返回所有图片
static  NSString * const jsGetImages =
@"function getImages(){\
var srcs = [];\
var objs = document.getElementsByTagName(\"img\");\
for(var i=0;i<objs.length;i++){\
srcs[i] = objs[i].src;\
};\
for(var i=0;i<objs.length;i++){\
objs[i].onclick=function(){\
document.location=\"myweb:imageClick:\"+srcs+','+this.src;\
};\
};\
return objs.length;\
};";

[webView stringByEvaluatingJavaScriptFromString:jsGetImages];//注入js方法
[webView stringByEvaluatingJavaScriptFromString:@"getImages()"];

}
-(BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType
{
NSString *str = request.URL.absoluteString;

if ([str hasPrefix:@"myweb:imageClick:"]) {
str = [str stringByReplacingOccurrencesOfString:@"myweb:imageClick:"
withString:@""]
NSArray * imageUrlArr = [str  componentsSeparatedByString:@","];

[WebImgScrollView showImageWithImageArr:imageUrlArr];
}

return YES;
}





