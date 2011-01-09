/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableData, RTFNSFont, RTFTextTable, NSMutableArray, RTFNSMutableParagraphStyle, NSMutableDictionary, NSArray;



@interface RTFReaderState : NSObject 
{
    id _delegate;
    NSUInteger _defaultToUniCharEncoding;
    NSMutableDictionary *_documentInfoDictionary;
    struct CGSize { 
        float width; 
        float height; 
    } _paperSize;
    float _lMargin;
    float _rMargin;
    float _bMargin;
    float _tMargin;
    struct CGSize { 
        float width; 
        float height; 
    } _viewSize;
    NSInteger _viewScale;
    NSInteger _viewKind;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    NSUInteger _level;
    struct _NSAttributeInfo { 
        NSUInteger toUniCharEncoding; 
        NSUInteger codePageEncoding; 
        RTFNSFont *font; 
        float fontSize; 
        float kern; 
        RTFNSMutableParagraphStyle *paraStyle; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int fontIsValid : 1; 
        unsigned int paraStyleIsValid : 1; 
        unsigned int kernIsValid : 1; 
        unsigned int attributesSameAsBefore : 1; 
        unsigned int multiByteEncoding : 1; 
        unsigned int unicodeAlternativeLength : 3; 
        unsigned int tabStopType : 4; 
        unsigned int curAttributesNeedsCopying : 1; 
        unsigned int paraStyleNeedsCopying : 1; 
        unsigned int hasWritingDirectionAttribute : 1; 
        unsigned int  : 16; 
    } _attributeInfo;
    NSMutableData *_attributeInfoStack;
    NSInteger _tableNestingLevel;
    BOOL _isRTLDocument;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    RTFTextTable *_currentTable;
    RTFTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    NSInteger _currentRow;
    NSInteger _currentColumn;
    NSInteger _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    NSUInteger _currentBorderEdge;
    BOOL _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    NSInteger _currentListNumber;
    NSInteger _currentListLevel;
}


- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setRightMargin:(float)arg1;
- (void)setBaseWritingDirection:(NSInteger)arg1;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (void)setTextAlignment:(NSInteger)arg1;
- (id)font;
- (NSUInteger)level;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (float)rightMargin;
- (void)setTopMargin:(float)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setBold:(BOOL)arg1;
- (void)setItalic:(BOOL)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (BOOL)italic;
- (BOOL)bold;
- (float)topMargin;
- (float)bottomMargin;
- (void)pushState;
- (id)documentInfoDictionary;
- (struct CGSize { float x1; float x2; })paperSize;
- (void)setViewKind:(NSInteger)arg1;
- (id)mutableAttributes;
- (unsigned long)defaultToUniCharEncoding;
- (void)setToUniCharEncoding:(unsigned long)arg1;
- (void)setUnicodeAlternativeLength:(NSUInteger)arg1;
- (BOOL)hasWritingDirectionAttribute;
- (NSInteger)baseWritingDirection;
- (void)removeAttributeForKey:(id)arg1;
- (void)endParagraph;
- (void)_updateAttributes;
- (void)_ensureTableCells;
- (void)_beginTableRow;
- (id)currentTableCell;
- (BOOL)currentBorderIsTable;
- (BOOL)_currentTableCellIsPlaceholder;
- (void)_setCurrentBorderEdge:(NSUInteger)arg1 isTable:(BOOL)arg2;
- (void)_pushTableState;
- (void)_popTableState;
- (void)_clearTableCells;
- (void)setTableNestingLevel:(NSInteger)arg1;
- (void)_paragraphInTable;
- (void)setCurrentBorderEdge:(NSUInteger)arg1 isTable:(BOOL)arg2;
- (NSInteger)currentListNumber;
- (NSInteger)currentListLevel;
- (id)listDefinitions;
- (void)addOverride:(NSInteger)arg1 forKey:(NSInteger)arg2;
- (void)_notifyProcessString:(id)arg1;
- (void)_notifyStartParagraph;
- (void)_notifyEndParagraph;
- (void)_notifyStartTable;
- (void)_notifyEndTable;
- (void)_notifyStartTableRow;
- (void)_notifyEndTableRow;
- (void)_notifyStartTableCell;
- (void)_notifyEndTableCellWithCell:(id)arg1;
- (void)_setTableCells;
- (unsigned long)toUniCharEncoding;
- (BOOL)multiByteEncoding;
- (void)processString:(id)arg1;
- (id)currentTable;
- (NSUInteger)currentBorderEdge;
- (void)setMultiByteEncoding:(BOOL)arg1;
- (void)setHasWritingDirectionAttribute:(BOOL)arg1;
- (NSUInteger)unicodeAlternativeLength;
- (void)popState;
- (void)setDefaultToUniCharEncoding:(unsigned long)arg1;
- (BOOL)currentTableCellIsPlaceholder;
- (void)endTableRow;
- (void)endTableCell;
- (void)setPaperSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })viewSize;
- (void)setViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setViewScale:(NSInteger)arg1;
- (void)startTableRowDefinition;
- (void)endTableCellDefinition;
- (void)mergeTableCellsHorizontally;
- (void)lastTableRow;
- (void)setTableFlags:(NSUInteger)arg1;
- (void)mergeTableCellsVertically;
- (void)startParagraph;
- (void)paragraphInTable;
- (id)mutableParagraphStyle;
- (void)setCurrentListNumber:(NSInteger)arg1;
- (void)setCurrentListLevel:(NSInteger)arg1;
- (void)setFontIsValid:(BOOL)arg1;
- (void)setCodePageEncoding:(unsigned long)arg1;
- (void)addListDefinition:(id)arg1 forKey:(NSInteger)arg2;
- (unsigned long)codePageEncoding;
- (id)currentAttributes;
- (id)currentParagraphStyle;
- (BOOL)isLastTableRow;
- (id)initWithDelegate:(id)arg1;
- (id)attributeForKey:(id)arg1;

@end