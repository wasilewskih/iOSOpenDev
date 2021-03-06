/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconObserver.h"
#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class SBIconImageContainerView, SBIconImageView, SBIcon, SBIconBadgeImage, UIImage, UIView, UIImageView, NSTimer, SBIconLabel;
@protocol SBIconViewLocker, SBIconViewDelegate;

@interface SBIconView : SBUnknownSuperclass <SBIconObserver> {
	SBIcon *_icon;	// 48 = 0x30
	id<SBIconViewDelegate> _delegate;	// 52 = 0x34
	id<SBIconViewLocker> _locker;	// 56 = 0x38
	SBIconImageContainerView *_iconImageContainer;	// 60 = 0x3c
	SBIconImageView *_iconImageView;	// 64 = 0x40
	UIImageView *_iconDarkeningOverlay;	// 68 = 0x44
	UIImageView *_ghostlyImageView;	// 72 = 0x48
	UIImageView *_reflection;	// 76 = 0x4c
	UIImageView *_shadow;	// 80 = 0x50
	SBIconBadgeImage *_badgeImage;	// 84 = 0x54
	UIImageView *_badgeView;	// 88 = 0x58
	SBIconLabel *_label;	// 92 = 0x5c
	BOOL _labelHidden;	// 96 = 0x60
	BOOL _labelOnWallpaper;	// 97 = 0x61
	UIView *_closeBox;	// 100 = 0x64
	int _closeBoxType;	// 104 = 0x68
	UIImageView *_dropGlow;	// 108 = 0x6c
	unsigned _drawsLabel : 1;	// 112 = 0x70
	unsigned _isHidden : 1;	// 112 = 0x70
	unsigned _isGrabbed : 1;	// 112 = 0x70
	unsigned _isOverlapping : 1;	// 112 = 0x70
	unsigned _refusesRecipientStatus : 1;	// 112 = 0x70
	unsigned _highlighted : 1;	// 112 = 0x70
	unsigned _launchDisabled : 1;	// 112 = 0x70
	unsigned _isJittering : 1;	// 112 = 0x70
	unsigned _allowJitter : 1;	// 113 = 0x71
	unsigned _touchDownInIcon : 1;	// 113 = 0x71
	unsigned _hideShadow : 1;	// 113 = 0x71
	NSTimer *_delayedUnhighlightTimer;	// 116 = 0x74
	unsigned _onWallpaper : 1;	// 120 = 0x78
	unsigned _ghostlyRequesters;	// 124 = 0x7c
	int _iconLocation;	// 128 = 0x80
	float _iconImageAlpha;	// 132 = 0x84
	float _iconImageBrightness;	// 136 = 0x88
	float _iconLabelAlpha;	// 140 = 0x8c
	float _accessoryAlpha;	// 144 = 0x90
	CGPoint _unjitterPoint;	// 148 = 0x94
	CGPoint _grabPoint;	// 156 = 0x9c
	NSTimer *_longPressTimer;	// 164 = 0xa4
	unsigned _ghostlyTag;	// 168 = 0xa8
	UIImage *_ghostlyImage;	// 172 = 0xac
	BOOL _ghostlyPending;	// 176 = 0xb0
}
@property(assign) id<SBIconViewDelegate> delegate;	// G=0x135121; S=0x135131; @synthesize=_delegate
@property(assign) id<SBIconViewLocker> locker;	// G=0x135101; S=0x135111; @synthesize=_locker
@property(readonly, retain) SBIcon *icon;	// G=0x135145; 
@property(assign) int location;	// G=0x134fdd; S=0x13523d; converted property
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x135021; S=0x1358a5; converted property
@property(assign) BOOL allowJitter;	// G=0x13504d; S=0x138fe5; converted property
@property(assign) BOOL isGrabbed;	// G=0x135081; S=0x138c75; converted property
@property(assign, getter=isTouchDownInIcon) BOOL touchDownInIcon;	// G=0x1350cd; S=0x1350e1; converted property
@property(readonly, retain) SBIconImageView *iconImageView;	// G=0x135005; converted property
@property(readonly, retain) UIImageView *dropGlow;	// G=0x135095; converted property
+ (CGSize)defaultIconSize;	// 0x1363c5
+ (CGSize)defaultIconImageSize;	// 0x13633d
+ (BOOL)allowsRecycling;	// 0x134fd9
+ (id)_jitterPositionAnimation;	// 0x135f15
+ (id)_jitterTransformAnimation;	// 0x135cd1
- (id)initWithDefaultSize;	// 0x13a659
- (void)dealloc;	// 0x13a535
// declared property getter: - (id)icon;	// 0x135145
- (void)setIcon:(id)icon;	// 0x13517d
// converted property getter: - (int)location;	// 0x134fdd
// converted property setter: - (void)setLocation:(int)location;	// 0x13523d
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;	// 0x13a485
- (void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;	// 0x13a241
- (BOOL)isHidden;	// 0x134fed
- (BOOL)isRevealable;	// 0x1352a1
- (void)positionIconImageView;	// 0x13a0f9
- (void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;	// 0x135001
- (void)setDisplayedIconImage:(id)image;	// 0x1352c5
- (id)snapshotSettings;	// 0x135409
- (id)iconImageSnapshot:(id)snapshot;	// 0x13545d
- (id)reflectedIconWithBrightness:(float)brightness;	// 0x139ec5
- (void)setIconImageAlpha:(float)alpha;	// 0x1354c9
- (void)setIconLabelAlpha:(float)alpha;	// 0x1354f9
// converted property getter: - (id)iconImageView;	// 0x135005
- (void)setLabelHidden:(BOOL)hidden;	// 0x135549
- (void)positionLabel;	// 0x139d81
- (CGSize)_labelSize;	// 0x135579
- (Class)_labelClass;	// 0x135661
- (void)updateLabel;	// 0x139a41
- (void)_updateBadgePosition;	// 0x13994d
- (id)_overriddenBadgeTextForText:(id)text;	// 0x135015
- (void)updateBadge;	// 0x13962d
- (id)_automationID;	// 0x13567d
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x1395d5
- (CGRect)frameForIconOverlay;	// 0x1395ad
- (void)placeIconOverlayView;	// 0x139525
- (void)updateIconOverlayView;	// 0x1356c5
- (void)_updateIconBrightness;	// 0x135739
- (BOOL)allowsTapWhileEditing;	// 0x135019
- (BOOL)delaysUnhighlightWhenTapped;	// 0x13501d
// converted property getter: - (BOOL)isHighlighted;	// 0x135021
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x1358a5
- (void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;	// 0x139319
- (void)_delayedUnhighlight;	// 0x1358b9
- (BOOL)isInDock;	// 0x135035
- (id)_shadowImage;	// 0x1358cd
- (void)_updateShadow;	// 0x13592d
- (void)updateReflection;	// 0x139121
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;	// 0x135a59
- (void)setLabelDisplaysOnWallpaper:(BOOL)wallpaper;	// 0x135aad
- (BOOL)showsReflection;	// 0x135af1
- (float)_reflectionImageOffset;	// 0x135b09
- (void)setFrame:(CGRect)frame;	// 0x139029
- (void)setIsJittering:(BOOL)jittering;	// 0x135b9d
// converted property setter: - (void)setAllowJitter:(BOOL)jitter;	// 0x138fe5
// converted property getter: - (BOOL)allowJitter;	// 0x13504d
- (void)removeAllIconAnimations;	// 0x138fa9
- (void)setIconPosition:(CGPoint)position;	// 0x138f65
- (void)setRefusesRecipientStatus:(BOOL)status;	// 0x135061
- (BOOL)canReceiveGrabbedIcon:(id)icon;	// 0x138e65
- (double)grabDurationForEvent:(id)event;	// 0x138d61
// converted property setter: - (void)setIsGrabbed:(BOOL)grabbed;	// 0x138c75
// converted property getter: - (BOOL)isGrabbed;	// 0x135081
- (void)setIsOverlapping:(BOOL)overlapping;	// 0x138a0d
- (CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;	// 0x138989
- (void)prepareDropGlow;	// 0x138801
- (void)showDropGlow:(BOOL)glow;	// 0x138761
- (void)removeDropGlow;	// 0x138721
// converted property getter: - (id)dropGlow;	// 0x135095
- (BOOL)isShowingDropGlow;	// 0x1386e1
- (void)placeGhostlyImageView;	// 0x138641
- (id)_genGhostlyImage:(id)image;	// 0x1385a9
- (void)prepareGhostlyImageIfNeeded;	// 0x13856d
- (void)prepareGhostlyImage;	// 0x138305
- (void)prepareGhostlyImageView;	// 0x1380b5
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;	// 0x137f59
- (void)setPartialGhostly:(float)ghostly requester:(int)requester;	// 0x137ded
- (void)removeGhostlyImageView;	// 0x137d95
- (BOOL)isGhostly;	// 0x1350a5
- (int)ghostlyRequesters;	// 0x1350bd
- (void)longPressTimerFired;	// 0x137d29
- (void)cancelLongPressTimer;	// 0x137ce9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x137c1d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x137a7d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x137721
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x13757d
// converted property getter: - (BOOL)isTouchDownInIcon;	// 0x1350cd
// converted property setter: - (void)setTouchDownInIcon:(BOOL)icon;	// 0x1350e1
- (void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;	// 0x13754d
- (void)positionCloseBoxOfType:(int)type;	// 0x137469
- (id)_newCloseBoxOfType:(int)type;	// 0x1373a5
- (void)setShowsCloseBox:(BOOL)box;	// 0x137391
- (void)setShowsCloseBox:(BOOL)box animated:(BOOL)animated;	// 0x1370d1
- (BOOL)isShowingCloseBox;	// 0x1370a1
- (void)closeBoxTapped;	// 0x137059
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x136fc9
- (UIEdgeInsets)snapshotEdgeInsets;	// 0x136c51
- (void)setShadowsHidden:(BOOL)hidden;	// 0x136c11
- (void)_updateShadowFrameForShadow:(id)shadow;	// 0x136a75
- (void)_updateShadowFrame;	// 0x136a49
- (BOOL)_delegatePositionIsEditable;	// 0x1369fd
- (void)_delegateTouchEnded:(BOOL)ended;	// 0x1369a9
- (BOOL)_delegateTapAllowed;	// 0x13695d
- (int)_delegateCloseBoxType;	// 0x136911
- (id)createShadowImageView;	// 0x1368ad
- (void)prepareForRecycling;	// 0x136631
- (CGRect)defaultFrameForProgressBar;	// 0x136561
- (void)iconImageDidUpdate:(id)iconImage;	// 0x1364fd
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;	// 0x1364bd
- (void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;	// 0x13644d
// declared property getter: - (id)locker;	// 0x135101
// declared property setter: - (void)setLocker:(id)locker;	// 0x135111
// declared property getter: - (id)delegate;	// 0x135121
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x135131
@end
