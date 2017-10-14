/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageEntry : NSObject {
    NSMutableArray * m_affectedObjects;
    int  m_count;
    NSArray * m_parameters;
    int  m_tag;
    NSString * m_text;
    unsigned int  m_timeStamp;
}

@property (nonatomic) unsigned int timeStamp;

+ (void)initialize;

- (void)addAffectedObject:(id)arg1;
- (id)affectedObjects;
- (void)dealloc;
- (id)description;
- (int)getCount;
- (int)getMessageTag;
- (id)getMessageText;
- (id)getParameter:(unsigned int)arg1;
- (unsigned int)getParameterCount;
- (unsigned int)hash;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(void*)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)logWithCat:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (void)setTimeStamp:(unsigned int)arg1;
- (unsigned int)timeStamp;
- (int)timeStampCompare:(id)arg1;

@end
