//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// MicrosoftAdvertisingMicrosoftAdvertising_XamlTypeInfo.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_MICROSOFT_ADVERTISING_EXPORT
#define OBJCUWP_MICROSOFT_ADVERTISING_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Microsoft_Advertising.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class MAMXamlMetaDataProvider;
@protocol MAM__IXamlMetaDataProviderPublicNonVirtuals;

#include "WindowsUIXamlMarkup.h"
#include "WindowsUIXamlInterop.h"

#import <Foundation/Foundation.h>

// Windows.UI.Xaml.Markup.IXamlMetadataProvider
#ifndef __WUXMIXamlMetadataProvider_DEFINED__
#define __WUXMIXamlMetadataProvider_DEFINED__

@protocol WUXMIXamlMetadataProvider
- (RTObject<WUXMIXamlType>*)getXamlType:(WUXITypeName*)type;
- (RTObject<WUXMIXamlType>*)getXamlTypeByFullName:(NSString *)fullName;
- (NSArray* /* WUXMXmlnsDefinition* */)getXmlnsDefinitions;
@end

OBJCUWP_MICROSOFT_ADVERTISING_EXPORT
@interface WUXMIXamlMetadataProvider : RTObject <WUXMIXamlMetadataProvider>
@end

#endif // __WUXMIXamlMetadataProvider_DEFINED__

// Microsoft.Advertising.MicrosoftAdvertising_XamlTypeInfo.XamlMetaDataProvider
#ifndef __MAMXamlMetaDataProvider_DEFINED__
#define __MAMXamlMetaDataProvider_DEFINED__

OBJCUWP_MICROSOFT_ADVERTISING_EXPORT
@interface MAMXamlMetaDataProvider : RTObject <WUXMIXamlMetadataProvider>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (RTObject<WUXMIXamlType>*)getXamlType:(WUXITypeName*)type;
- (RTObject<WUXMIXamlType>*)getXamlTypeByFullName:(NSString *)fullName;
- (NSArray* /* WUXMXmlnsDefinition* */)getXmlnsDefinitions;
@end

#endif // __MAMXamlMetaDataProvider_DEFINED__

