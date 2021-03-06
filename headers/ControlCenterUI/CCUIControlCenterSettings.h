//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

// #import <UIKit/_UISettings.h>

#import <ControlCenterUI/CCUIControlCenterSettingsSectionSettings.h>
#import <ControlCenterUI/CCUIControlCenterShortcutSectionSettings.h>

@interface CCUIControlCenterSettings : NSObject
{
    BOOL _useNewBounce;
    CGFloat _backgroundDarkening;
    CCUIControlCenterSettingsSectionSettings *_settingsSectionSettings;
    CCUIControlCenterShortcutSectionSettings *_shortcutSectionSettings;
    CGFloat _oldBounceFriction;
    CGFloat _bounceDensityFactor;
    CGFloat _bounceResistance;
    CGFloat _minVelocity;
    CGFloat _maxVelocity;
    CGFloat _attachmentThreshold;
    CGFloat _attachmentFrequencyAbove;
    CGFloat _attachmentFrequencyBelow;
    CGFloat _attachmentVelocityDamping;
    CGFloat _attachmentMinDamping;
    CGFloat _attachmentMaxDamping;
}

+ (id)settingsControllerModule;
@property CGFloat attachmentMaxDamping; // @synthesize attachmentMaxDamping=_attachmentMaxDamping;
@property CGFloat attachmentMinDamping; // @synthesize attachmentMinDamping=_attachmentMinDamping;
@property CGFloat attachmentVelocityDamping; // @synthesize attachmentVelocityDamping=_attachmentVelocityDamping;
@property CGFloat attachmentFrequencyBelow; // @synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow;
@property CGFloat attachmentFrequencyAbove; // @synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove;
@property CGFloat attachmentThreshold; // @synthesize attachmentThreshold=_attachmentThreshold;
@property CGFloat maxVelocity; // @synthesize maxVelocity=_maxVelocity;
@property CGFloat minVelocity; // @synthesize minVelocity=_minVelocity;
@property CGFloat bounceResistance; // @synthesize bounceResistance=_bounceResistance;
@property CGFloat bounceDensityFactor; // @synthesize bounceDensityFactor=_bounceDensityFactor;
@property CGFloat oldBounceFriction; // @synthesize oldBounceFriction=_oldBounceFriction;
@property BOOL useNewBounce; // @synthesize useNewBounce=_useNewBounce;
@property(retain) CCUIControlCenterShortcutSectionSettings *shortcutSectionSettings; // @synthesize shortcutSectionSettings=_shortcutSectionSettings;
@property(retain) CCUIControlCenterSettingsSectionSettings *settingsSectionSettings; // @synthesize settingsSectionSettings=_settingsSectionSettings;
@property CGFloat backgroundDarkening; // @synthesize backgroundDarkening=_backgroundDarkening;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

