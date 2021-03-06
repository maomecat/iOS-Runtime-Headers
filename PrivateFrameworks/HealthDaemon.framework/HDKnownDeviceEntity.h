/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKnownDeviceEntity : HDHealthEntity

+ (id)_propertySettersForService;
+ (id)_servicePredicate:(id)arg1;
+ (id)_servicesInDatabase:(id)arg1 removals:(id*)arg2;
+ (id)_tableValuesFromService:(id)arg1;
+ (id)allServicesFromHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (BOOL)deleteDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertOrUpdateDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (int)protectionClass;
+ (BOOL)setHealthUpdatesEnabled:(BOOL)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
