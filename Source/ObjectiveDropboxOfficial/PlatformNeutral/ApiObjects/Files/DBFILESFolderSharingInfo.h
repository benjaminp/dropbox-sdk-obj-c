///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESSharingInfo.h"
#import "DBSerializableProtocol.h"

@class DBFILESFolderSharingInfo;

#pragma mark - API Object

///
/// The `FolderSharingInfo` struct.
///
/// Sharing info for a folder which is contained in a shared folder or is a
/// shared folder mount point.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFolderSharingInfo : DBFILESSharingInfo <DBSerializable>

#pragma mark - Instance fields

/// Set if the folder is contained by a shared folder.
@property (nonatomic, readonly) NSString * _Nullable parentSharedFolderId;

/// If this folder is a shared folder mount point, the ID of the shared folder
/// mounted at this location.
@property (nonatomic, readonly) NSString * _Nullable sharedFolderId;

/// Specifies that the folder can only be traversed and the user can only see a
/// limited subset of the contents of this folder because they don't have read
/// access to this folder. They do, however, have access to some sub folder.
@property (nonatomic, readonly) NSNumber * _Nonnull traverseOnly;

/// Specifies that the folder cannot be accessed by the user
@property (nonatomic, readonly) NSNumber * _Nonnull noAccess;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
/// @param parentSharedFolderId Set if the folder is contained by a shared
/// folder.
/// @param sharedFolderId If this folder is a shared folder mount point, the ID
/// of the shared folder mounted at this location.
/// @param traverseOnly Specifies that the folder can only be traversed and the
/// user can only see a limited subset of the contents of this folder because
/// they don't have read access to this folder. They do, however, have access to
/// some sub folder.
/// @param noAccess Specifies that the folder cannot be accessed by the user
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly
                    parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId
                          sharedFolderId:(NSString * _Nullable)sharedFolderId
                            traverseOnly:(NSNumber * _Nullable)traverseOnly
                                noAccess:(NSNumber * _Nullable)noAccess;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderSharingInfo` struct.
///
@interface DBFILESFolderSharingInfoSerializer : NSObject

///
/// Serializes `DBFILESFolderSharingInfo` instances.
///
/// @param instance An instance of the `DBFILESFolderSharingInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESFolderSharingInfo` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESFolderSharingInfo * _Nonnull)instance;

///
/// Deserializes `DBFILESFolderSharingInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFolderSharingInfo` API object.
///
/// @return An instantiation of the `DBFILESFolderSharingInfo` object.
///
+ (DBFILESFolderSharingInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
