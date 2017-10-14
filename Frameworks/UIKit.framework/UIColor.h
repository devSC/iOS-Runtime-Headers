/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIColor : NSObject <LPCSSText, NSCopying, NSSecureCoding> {
    NSString * _cachedStyleString;
    NSString * _systemColorName;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) CIColor *CIColor;
@property (nonatomic, readonly) float MP_lightness;
@property (nonatomic, readonly, copy) UIColor *invert;
@property (getter=px_isTransparent, nonatomic, readonly) BOOL px_transparent;
@property (getter=_systemColorName, setter=_setSystemColorName:, nonatomic, retain) NSString *systemColorName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(float)arg4;
+ (id)_dimmingViewColor;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_grayColorForFontSize:(float)arg1;
+ (float)_luminanceWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)_markedTextBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_translucentPaperTextureColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_webContentBackgroundColor;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithDisplayP3Red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)darkTextColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)groupTableViewBackgroundColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)magentaColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)purpleColor;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (BOOL)supportsSecureCoding;
+ (id)systemBlueColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkRedColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemGrayColor;
+ (id)systemGreenColor;
+ (id)systemMidGrayColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemPurpleColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemYellowColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (id)_colorBlendedWithColors:(id)arg1;
- (float)_colorDifferenceFromColor:(id)arg1;
- (BOOL)_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;
- (BOOL)_isDeepColor;
- (BOOL)_isSimilarToColor:(id)arg1 withinPercentage:(float)arg2;
- (float)_luminance;
- (float)_luminanceDifferenceFromColor:(id)arg1;
- (void)_setSystemColorName:(id)arg1;
- (id)_systemColorName;
- (float)alphaComponent;
- (struct CGColor { }*)cgColor;
- (Class)classForCoder;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (unsigned int)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayP3Red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPatternColor;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)styleString;
- (id)ui_highlightedColor;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_actionBackgroundColor;
+ (id)_cnui_actionHighlightedBackgroundColor;
+ (id)_cnui_actionTitleColor;
+ (id)ab_colorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)cardBackgroundInPopoverColor;
+ (id)cardCellBackgroundColor;
+ (id)cardCellReadonlyBackgroundColor;
+ (id)cardCellSeparatorColor;
+ (id)cardLabelReadonlyTextColor;
+ (id)cardLabelSuggestedTextColor;
+ (id)cardValueReadonlyTextColor;
+ (id)cardValueSuggestedTextColor;
+ (id)cardValueTextColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)tableViewBackgroundColorOpaque;

- (float)blueComponent;
- (float)brightnessComponent;
- (id)burnWithColor:(id)arg1;
- (float)differenceFromColor:(id)arg1;
- (float)greenComponent;
- (float)hueComponent;
- (BOOL)isGreenOrYellow;
- (float)luminance;
- (id)overlayWithColor:(id)arg1;
- (float)redComponent;
- (float)saturationComponent;
- (id)soverWithColor:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_colorForTransitLine:(id)arg1;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;

- (id)_mapkit_blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)_mapkit_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)_mapkit_isWhite;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)colorWithITColor:(struct ITColor { float x1; float x2; float x3; float x4; })arg1;

- (struct ITColor { float x1; float x2; float x3; float x4; })ITColor;
- (BOOL)MP_isArtworkColorAnalyzerLightColorForAlgorithm:(int)arg1;
- (float)MP_lightness;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_colorWithIncreasedAlpha;
- (id)pu_colorWithIncreasedBrightness;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_defaultWebContentBackgroundColor;
+ (id)ss_browserSystemColor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)color:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg1;

- (float)a;
- (float)b;
- (float)g;
- (float)r;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })scn_C3DColorIgnoringColorSpace:(BOOL)arg1 success:(BOOL*)arg2;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)colorWithComponentRGBA:(struct { float x1; float x2; float x3; float x4; })arg1;
+ (id)colorWithVectorRGBA;

- (float)alpha;
- (float)blue;
- (struct { float x1; float x2; float x3; float x4; })componentRGBA;
- (float)green;
- (float)red;
- (void)vectorRGBA;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)_iAd_colorWithRGBA:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (float)_atvaccessibilityAlphaComponent;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akBoxBorderColor;
+ (id)akBubbleFillColor;
+ (id)akButtonHoverStateColor;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerOrange;
+ (id)akColorPickerPurple;
+ (id)akColorPickerRed;
+ (id)akColorPickerYellow;
+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)akColorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)akRowSeparatorColor;
+ (id)akSystemBlueColor;
+ (id)akSystemGreenColor;
+ (id)akSystemPinkColor;
+ (id)akSystemPurpleColor;
+ (id)akSystemRedColor;
+ (id)akSystemYellowColor;
+ (id)im_colorWithSRGBDescription:(id)arg1;

- (float)akAlphaComponent;
- (id)akBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)akIsEqualToColor:(id)arg1;
- (id)colorUsingSRGBColorSpace;

// Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget

- (id)_apw_colorByMultiplyingByFactor:(float)arg1;
- (id)_apw_colorByMultiplyingByRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (float)alpha;
- (int)colorSpaceModel;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_colorWithServerRGBRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

+ (id)CertUIVerifiedColor;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)colorByBlendingWithColor:(id)arg1;
- (id)colorByBlendingWithColor:(id)arg1 withFraction:(float)arg2;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_colorFromData:(id)arg1;

- (id)_cnui_colorData;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiAccessibilityDarkColorVariant;

// Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport

+ (id)colorWithHexValue:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (id)invert;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

+ (id)fmfOrangeColor;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fu_platterBlueColor;
+ (id)fu_platterDaliTealColor;
+ (id)fu_platterGreenColor;
+ (id)fu_platterOrangeColor;
+ (id)fu_platterPinkColor;
+ (id)fu_platterPurpleColor;
+ (id)fu_platterRedColor;
+ (id)fu_platterTealBlueColor;
+ (id)fu_platterWhiteColor;
+ (id)fu_platterYellowColor;
+ (id)fu_systemBlueColor;
+ (id)fu_systemGreenColor;
+ (id)fu_systemGreyColor;
+ (id)fu_systemMintColor;
+ (id)fu_systemOrangeColor;
+ (id)fu_systemPinkColor;
+ (id)fu_systemPurpleColor;
+ (id)fu_systemRedColor;
+ (id)fu_systemTealBlueColor;
+ (id)fu_systemTextGreyColor;
+ (id)fu_systemYellowColor;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (float)_gkLuminance;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_keyColor;
+ (id)hu_vibrantGreenTextColor;
+ (id)hu_vibrantRedTextColor;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSText;
- (id)_lp_CSSTextHexFormat;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mt_backgroundColor;
+ (id)mt_cellAccessoryColor;
+ (id)mt_cellHighlightColor;
+ (id)mt_cellSeparatorColor;
+ (id)mt_disabledButtonTintColor;
+ (id)mt_disabledTextColor;
+ (id)mt_foregroundColor;
+ (id)mt_lapResetButtonTextColor;
+ (id)mt_lapResetButtonTintColor;
+ (id)mt_pauseButtonTextColor;
+ (id)mt_pauseButtonTintColor;
+ (id)mt_primaryColor;
+ (id)mt_primaryTextColor;
+ (id)mt_quaternaryColor;
+ (id)mt_secondaryColor;
+ (id)mt_secondaryTextColor;
+ (id)mt_sleepColor;
+ (id)mt_startResumeButtonTextColor;
+ (id)mt_startResumeButtonTintColor;
+ (id)mt_stopButtonTextColor;
+ (id)mt_stopButtonTintColor;
+ (id)mt_stopwatchMajorTickMarkColor;
+ (id)mt_stopwatchMinorTickMarkColor;
+ (id)mt_tertiaryColor;
+ (id)mt_tintColor;
+ (id)mt_wakeColor;
+ (id)mt_worldClockMapLandColor;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)colorWithWebColor:(id)arg1;
+ (id)colorWithWebColorName:(id)arg1;
+ (id)colorWithWebHexTriplet:(id)arg1;
+ (id)colorWithWebRgb:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)brightenBy:(float)arg1;
- (id)colorByBoostingSaturation:(float)arg1 lightness:(float)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_colorWithHexString:(id)arg1;
+ (id)fc_colorWithHue:(float)arg1 saturation:(float)arg2 lightness:(float)arg3 alpha:(float)arg4;

- (id)fc_darken:(float)arg1;
- (id)fc_desaturate:(float)arg1;
- (id)fc_legibleForegroundColor;
- (int)fc_legibleStatusBarStyle;
- (id)fc_lighten:(float)arg1;
- (id)fc_offsetWithHue:(float)arg1 saturation:(float)arg2 lightness:(float)arg3 alpha:(float)arg4;
- (id)fc_saturate:(float)arg1;
- (void)getHue:(float*)arg1 saturation:(float*)arg2 lightness:(float*)arg3 alpha:(float*)arg4;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)ICDarkenedTintColor;
+ (struct UIColor { Class x1; }*)ICGrayColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonHighlightColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonPressedColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonUnpressedColor;
+ (struct UIColor { Class x1; }*)ICListStatusIndicatorColor;
+ (struct UIColor { Class x1; }*)ICLockIconColor;
+ (struct UIColor { Class x1; }*)ICLockIconColorList;
+ (struct UIColor { Class x1; }*)ICRedColor;
+ (struct UIColor { Class x1; }*)ICTintColor;
+ (struct UIColor { Class x1; }*)ICTintedSelectionColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonHighlightColor;
+ (id)ic_colorWith256Red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)ic_darkerAccessibilityColorForColor:(id)arg1;
+ (struct UIColor { Class x1; }*)preferredDefaultFontColor;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { float x1; float x2; })arg3;
+ (id)grayCheckerboardColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)transparentGrayCheckerboardColor;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)colorWithPKColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_backgroundColor;
+ (id)pr_darkAccentColor;
+ (id)pr_lightAccentColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)alternateSelectedControlColor;

- (BOOL)px_isTransparent;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_remoteUI_colorWithString:(id)arg1 defaultColor:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_colorWithRGBColorComponents:(id)arg1;
+ (id)safari_colorWithSerializedColorData:(id)arg1;

- (id)safari_colorDataForSerialization;
- (id)safari_rgbColorComponents;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_glyphColor;
+ (id)siriui_highlightColor;
+ (id)siriui_insertionPointColor;
+ (id)siriui_keylineColor;
+ (id)siriui_keylineColorStark;
+ (id)siriui_maskingColor;
+ (id)siriui_maskingHighlightColor;
+ (id)siriui_platterGlyphColor;
+ (id)siriui_platterKeylineColor;
+ (id)siriui_platterSemiTransparentTextColor;
+ (id)siriui_platterTextColor;
+ (id)siriui_platterTextHighlightColor;
+ (id)siriui_primaryTextColor;
+ (id)siriui_secondaryTextColor;
+ (id)siriui_semiTransparentTextColor;
+ (id)siriui_snippetBackgroundColor;
+ (id)siriui_textColor;
+ (id)siriui_textHighlightColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (BOOL)sb_isGrayscale;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (BOOL)skui_isOpaque;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tvmlkit_keyColor;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)colorByAlteringOpacityToPercentage:(float)arg1;
- (id)darkerColorByPercentage:(float)arg1;
- (id)tpImageFromColor;

// Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI

+ (id)wlk_textColor;
+ (id)wlk_textColorForDarkMode;
+ (id)wlk_textModalColor;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)colorWithStyleString:(id)arg1;

- (id)initWithStyleString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_darkInsertSwatchBackgroundColor;
+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteDefaultApplicationToolbarTitleColor;
+ (id)tsu_keynoteNavigationBarBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_keynoteToolbarTintColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_progressViewTintColor;
+ (id)tsu_progressViewTrackTintColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

@end
