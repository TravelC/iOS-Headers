//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class CNContactIdentifier, NSArray, NSData, NSDateComponents, NSString;

@interface CNContact : NSObject <NSCopying, NSMutableCopying>
{
    void *_record;
    void *_originalRecord;
    void *_source;
    void *_addressBook;
    NSArray *_linkedContacts;
    BOOL _unified;
    int _isFacebook;
    CNContactIdentifier *_identifier;
    unsigned int _recordType;
}

+ (int)defaultNameOrder;
+ (int)propertyIDForProperty:(id)arg1;
+ (id)propertyForPropertyID:(int)arg1;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void *)arg2;
+ (id)contactWithRecord:(void *)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecord:(void *)arg1;
+ (id)contact;
@property(readonly) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly) unsigned int recordType; // @synthesize recordType=_recordType;
@property(readonly, getter=isUnified) BOOL unified; // @synthesize unified=_unified;
@property(readonly) CNContactIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)_squareImage:(id)arg1;
- (struct CGRect)_squareCropRectForSize:(struct CGSize)arg1;
- (id)_CNLabelFromABLabel:(struct __CFString *)arg1;
- (id)_labelledStringValuesForProperty:(int)arg1;
- (id)_labelledValuesForProperty:(int)arg1 valueFromABValue:(CDUnknownBlockType)arg2;
- (id)_stringValueForProperty:(int)arg1;
- (BOOL)supportsInstantMessageService;
- (BOOL)supportsCustomLabelsForProperty:(id)arg1;
- (id)supportedLabelsForProperty:(id)arg1;
- (int)maximumNumberOfValuesForProperty:(id)arg1;
- (id)_labeledValueForSoundIdentifier:(int)arg1;
@property(readonly) NSArray *textTone;
@property(readonly) NSArray *ringtone;
@property(readonly) NSArray *postalAddresses;
@property(readonly) NSArray *socialProfiles;
@property(readonly) NSArray *relatedNames;
@property(readonly) NSArray *instantMessageAddresses;
@property(readonly) NSArray *dates;
@property(readonly) NSArray *urlAddresses;
@property(readonly) NSArray *emailAddresses;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) CNContact *preferredContactForPhoto;
@property(readonly) CNContact *preferredContactForName;
@property(readonly) NSString *primarySourceName;
- (void)setPreferredForPhoto:(BOOL)arg1;
@property(readonly, getter=isPreferredForPhoto) BOOL preferredForPhoto;
- (void)setPreferredForName:(BOOL)arg1;
@property(readonly, getter=isPreferredForName) BOOL preferredForName;
@property(readonly) int nameOrder;
@property(readonly) int contactType;
@property(readonly) NSString *note;
@property(readonly) NSDateComponents *birthday;
- (id)vCardRepresentation;
@property(readonly) NSString *displayName;
@property(readonly) NSString *personName;
@property(readonly) NSString *phoneticFullName;
@property(readonly) NSString *fullName;
@property(readonly) NSString *jobTitle;
@property(readonly) NSString *departmentName;
@property(readonly) NSString *organizationName;
@property(readonly) NSString *phoneticFamilyName;
@property(readonly) NSString *phoneticMiddleName;
@property(readonly) NSString *phoneticGivenName;
@property(readonly) NSString *nickname;
@property(readonly) NSString *previousFamilyName;
@property(readonly) NSString *nameSuffix;
@property(readonly) NSString *familyName;
@property(readonly) NSString *middleName;
@property(readonly) NSString *givenName;
@property(readonly) NSString *namePrefix;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect *)arg1;
@property(readonly) NSData *largestAvailablePhoto;
@property(readonly) NSData *photoThumbnail;
- (void)removePhoto;
- (void)setImageData:(id)arg1 forFormat:(int)arg2 cropRect:(struct CGRect)arg3;
- (void)setPhoto:(id)arg1;
- (void)reloadRecord;
- (BOOL)deleteContact;
@property(readonly, nonatomic, getter=isFacebook) BOOL facebook;
@property(readonly, nonatomic, getter=isUnknown) BOOL unknown;
@property(readonly, nonatomic, getter=isReadonly) BOOL readonly;
- (id)localizedNameForProperty:(id)arg1;
- (void)setAddressBook:(void *)arg1;
- (void)setLinkedContacts:(id)arg1;
@property(readonly) NSArray *linkedContacts;
- (BOOL)hasLinkedContacts;
- (BOOL)hasValidRecordID;
@property(readonly) int recordID;
- (void)setSource:(void *)arg1;
@property(readonly) void *source;
@property(readonly) void *originalRecord;
@property(readonly) void *record;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(void *)arg1 unify:(BOOL)arg2;
- (id)initWithRecord:(void *)arg1;

@end

