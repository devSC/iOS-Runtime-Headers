/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartMediator : NSObject <NSCopying, TSCHUnretainedParent> {
    TSCHChartInfo * mChartInfo;
    TSUIntToIntDictionary * mGridSeriesIndexForRemoteSeriesIndex;
    <TSCHNotifyOnModify> * mObjectToNotify;
    TSUIntToIntDictionary * mRemoteSeriesIndexForGridSeriesIndex;
}

@property (nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) BOOL isPhantom;
@property (nonatomic) <TSCHNotifyOnModify> *objectToNotify;

+ (id)propertiesThatInvalidateMediator;

- (id)categoryLabelFormulas;
- (id)chartInfo;
- (void)clearParent;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned int)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned int)arg1 forSeriesIndex:(unsigned int)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned int)arg2;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned int)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (void)dealloc;
- (int)direction;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned int)arg1 dataType:(int)arg2;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (BOOL)isEditing;
- (BOOL)isPhantom;
- (void)loadFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1;
- (id)objectToNotify;
- (id)p_errorBarDataForSeries:(unsigned int)arg1 withSpec:(struct { unsigned int x1; int (*x2)(); void *x3; })arg2 updateType:(int)arg3;
- (unsigned int)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned int)arg1;
- (unsigned int)p_remoteSeriesIndexForGridSeriesIndex:(unsigned int)arg1;
- (BOOL)preferSeriesToValues;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesNameFormulaForSeriesIndex:(unsigned int)arg1;
- (void)setChartInfo:(id)arg1;
- (void)setObjectToNotify:(id)arg1;
- (void)updateGridWithSpec:(struct { unsigned int x1; int (*x2)(); void *x3; })arg1;
- (void)willModify;

@end
