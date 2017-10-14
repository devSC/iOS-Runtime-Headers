/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    _HKMedicalIDMultilineStringCell * _displayCell;
    HKMedicalIDEditorPickerCell * _editableCell;
    _HKCustomInsetCellLayoutManager * _layoutManager;
}

- (void).cxx_destruct;
- (id)_createEditableCell;
- (id)_displayCell;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (int)chosenIndexForOrganDonorStatus:(unsigned int)arg1;
- (void)commitEditing;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (id)displayValueForOrganDonorStatus:(unsigned int)arg1;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)possibleValues;
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(id /* block */)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;

@end
