/*  =========================================================================
    fty-common-rest - generated layer of public API

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_COMMON_REST_LIBRARY_H_INCLUDED
#define FTY_COMMON_REST_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <sodium.h>
#include <cxxtools/allocator.h>
#include <tnt/tntnet.h>
#include <sasl/sasl.h>
#include <fty_log.h>
#include <czmq.h>
#include <fty_common.h>
#include <fty_common_db.h>

//  FTY_COMMON_REST version macros for compile-time API detection
#define FTY_COMMON_REST_VERSION_MAJOR 1
#define FTY_COMMON_REST_VERSION_MINOR 0
#define FTY_COMMON_REST_VERSION_PATCH 0

#define FTY_COMMON_REST_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_COMMON_REST_VERSION \
    FTY_COMMON_REST_MAKE_VERSION(FTY_COMMON_REST_VERSION_MAJOR, FTY_COMMON_REST_VERSION_MINOR, FTY_COMMON_REST_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_COMMON_REST_STATIC
#       define FTY_COMMON_REST_EXPORT
#   elif defined FTY_COMMON_REST_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_COMMON_REST_EXPORT __declspec(dllexport)
#       else
#           define FTY_COMMON_REST_EXPORT
#       endif
#   elif defined FTY_COMMON_REST_EXPORTS
#       define FTY_COMMON_REST_EXPORT __declspec(dllexport)
#   else
#       define FTY_COMMON_REST_EXPORT __declspec(dllimport)
#   endif
#   define FTY_COMMON_REST_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_COMMON_REST_EXPORT
#   define FTY_COMMON_REST_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_COMMON_REST_PRIVATE __attribute__ ((visibility ("hidden")))
#       define FTY_COMMON_REST_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define FTY_COMMON_REST_PRIVATE
#       define FTY_COMMON_REST_EXPORT
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_COMMON_REST_BUILD_DRAFT_API
#define FTY_COMMON_REST_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_COMMON_REST_BUILD_DRAFT_API
typedef struct _fty_common_rest_helpers_t fty_common_rest_helpers_t;
#define FTY_COMMON_REST_HELPERS_T_DEFINED
typedef struct _fty_common_rest_sasl_t fty_common_rest_sasl_t;
#define FTY_COMMON_REST_SASL_T_DEFINED
typedef struct _fty_common_rest_tokens_t fty_common_rest_tokens_t;
#define FTY_COMMON_REST_TOKENS_T_DEFINED
typedef struct _fty_common_rest_utils_web_t fty_common_rest_utils_web_t;
#define FTY_COMMON_REST_UTILS_WEB_T_DEFINED
typedef struct _fty_common_rest_audit_log_t fty_common_rest_audit_log_t;
#define FTY_COMMON_REST_AUDIT_LOG_T_DEFINED
#endif // FTY_COMMON_REST_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef FTY_COMMON_REST_BUILD_DRAFT_API
#include "fty_common_rest_helpers.h"
#include "fty_common_rest_sasl.h"
#include "fty_common_rest_tokens.h"
#include "fty_common_rest_utils_web.h"
#include "fty_common_rest_audit_log.h"
#endif // FTY_COMMON_REST_BUILD_DRAFT_API

#ifdef FTY_COMMON_REST_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
FTY_COMMON_REST_EXPORT void
    fty_common_rest_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // FTY_COMMON_REST_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
