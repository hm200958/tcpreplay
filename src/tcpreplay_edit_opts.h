/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpreplay_edit_opts.h)
 *  
 *  It has been AutoGen-ed  March 30, 2010 at 11:53:25 AM by AutoGen 5.9.9
 *  From the definitions    tcpreplay_opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 32:2:7 templates.
 */

/*
 *  This file was produced by an AutoOpts template.  AutoOpts is a
 *  copyrighted work.  This header file is not encumbered by AutoOpts
 *  licensing, but is provided under the licensing terms chosen by the
 *  tcpreplay author or copyright holder.  AutoOpts is licensed under
 *  the terms of the LGPL.  The redistributable library (``libopts'') is
 *  licensed under the terms of either the LGPL or, at the users discretion,
 *  the BSD license.  See the AutoOpts and/or libopts sources for details.
 *
 * This source file is copyrighted and licensed under the following terms:
 *
 * tcpreplay copyright (c) 2000-2010 Aaron Turner - all rights reserved
 *
 * tcpreplay is free software copyrighted by Aaron Turner.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name ``Aaron Turner'' nor the name of any other
 *    contributor may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 
 * tcpreplay IS PROVIDED BY Aaron Turner ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Aaron Turner OR ANY OTHER CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the tcpreplay program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD
#define AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>

/*
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 131074
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_PORTMAP            =  1,
    INDEX_OPT_SEED               =  2,
    INDEX_OPT_PNAT               =  3,
    INDEX_OPT_SRCIPMAP           =  4,
    INDEX_OPT_DSTIPMAP           =  5,
    INDEX_OPT_ENDPOINTS          =  6,
    INDEX_OPT_SKIPBROADCAST      =  7,
    INDEX_OPT_FIXCSUM            =  8,
    INDEX_OPT_MTU                =  9,
    INDEX_OPT_MTU_TRUNC          = 10,
    INDEX_OPT_EFCS               = 11,
    INDEX_OPT_TTL                = 12,
    INDEX_OPT_TOS                = 13,
    INDEX_OPT_TCLASS             = 14,
    INDEX_OPT_FLOWLABEL          = 15,
    INDEX_OPT_FIXLEN             = 16,
    INDEX_OPT_SKIPL2BROADCAST    = 17,
    INDEX_OPT_DLT                = 18,
    INDEX_OPT_ENET_DMAC          = 19,
    INDEX_OPT_ENET_SMAC          = 20,
    INDEX_OPT_ENET_VLAN          = 21,
    INDEX_OPT_ENET_VLAN_TAG      = 22,
    INDEX_OPT_ENET_VLAN_CFI      = 23,
    INDEX_OPT_ENET_VLAN_PRI      = 24,
    INDEX_OPT_HDLC_CONTROL       = 25,
    INDEX_OPT_HDLC_ADDRESS       = 26,
    INDEX_OPT_USER_DLT           = 27,
    INDEX_OPT_USER_DLINK         = 28,
    INDEX_OPT_DBUG               = 29,
    INDEX_OPT_QUIET              = 30,
    INDEX_OPT_TIMER              = 31,
    INDEX_OPT_SLEEP_ACCEL        = 32,
    INDEX_OPT_RDTSC_CLICKS       = 33,
    INDEX_OPT_VERBOSE            = 34,
    INDEX_OPT_DECODE             = 35,
    INDEX_OPT_ENABLE_FILE_CACHE  = 36,
    INDEX_OPT_PRELOAD_PCAP       = 37,
    INDEX_OPT_CACHEFILE          = 38,
    INDEX_OPT_INTF1              = 39,
    INDEX_OPT_INTF2              = 40,
    INDEX_OPT_LISTNICS           = 41,
    INDEX_OPT_LOOP               = 42,
    INDEX_OPT_PKTLEN             = 43,
    INDEX_OPT_LIMIT              = 44,
    INDEX_OPT_MULTIPLIER         = 45,
    INDEX_OPT_PPS                = 46,
    INDEX_OPT_MBPS               = 47,
    INDEX_OPT_TOPSPEED           = 48,
    INDEX_OPT_ONEATATIME         = 49,
    INDEX_OPT_PPS_MULTI          = 50,
    INDEX_OPT_PID                = 51,
    INDEX_OPT_STATS              = 52,
    INDEX_OPT_VERSION            = 53,
    INDEX_OPT_LESS_HELP          = 54,
    INDEX_OPT_HELP               = 55,
    INDEX_OPT_MORE_HELP          = 56,
    INDEX_OPT_SAVE_OPTS          = 57,
    INDEX_OPT_LOAD_OPTS          = 58
} teOptIndex;

#define OPTION_CT    59

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT( TCPEDIT )
 */
#define         DESC(n) (tcpreplayOptions.pOptDesc[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ( (DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Interface defines for specific options.
 */
#define VALUE_OPT_PORTMAP        'r'
#define VALUE_OPT_SEED           's'
#define OPT_VALUE_SEED           (DESC(SEED).optArg.argInt)
#define VALUE_OPT_PNAT           'N'
#define VALUE_OPT_SRCIPMAP       'S'
#define VALUE_OPT_DSTIPMAP       'D'
#ifdef HAVE_CACHEFILE_SUPPORT
#define VALUE_OPT_ENDPOINTS      'e'
#endif /* HAVE_CACHEFILE_SUPPORT */
#define VALUE_OPT_SKIPBROADCAST  'b'
#define VALUE_OPT_FIXCSUM        'C'
#define VALUE_OPT_MTU            'm'
#define OPT_VALUE_MTU            (DESC(MTU).optArg.argInt)
#define VALUE_OPT_MTU_TRUNC      10
#define VALUE_OPT_EFCS           'E'
#define VALUE_OPT_TTL            12
#define VALUE_OPT_TOS            13
#define OPT_VALUE_TOS            (DESC(TOS).optArg.argInt)
#define VALUE_OPT_TCLASS         14
#define OPT_VALUE_TCLASS         (DESC(TCLASS).optArg.argInt)
#define VALUE_OPT_FLOWLABEL      15
#define OPT_VALUE_FLOWLABEL      (DESC(FLOWLABEL).optArg.argInt)
#define VALUE_OPT_FIXLEN         'F'
#define VALUE_OPT_SKIPL2BROADCAST 17
#define VALUE_OPT_DLT            18
#define VALUE_OPT_ENET_DMAC      19
#define VALUE_OPT_ENET_SMAC      20
#define VALUE_OPT_ENET_VLAN      21
#define VALUE_OPT_ENET_VLAN_TAG  22
#define OPT_VALUE_ENET_VLAN_TAG  (DESC(ENET_VLAN_TAG).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_CFI  23
#define OPT_VALUE_ENET_VLAN_CFI  (DESC(ENET_VLAN_CFI).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_PRI  24
#define OPT_VALUE_ENET_VLAN_PRI  (DESC(ENET_VLAN_PRI).optArg.argInt)
#define VALUE_OPT_HDLC_CONTROL   25
#define OPT_VALUE_HDLC_CONTROL   (DESC(HDLC_CONTROL).optArg.argInt)
#define VALUE_OPT_HDLC_ADDRESS   26
#define OPT_VALUE_HDLC_ADDRESS   (DESC(HDLC_ADDRESS).optArg.argInt)
#define VALUE_OPT_USER_DLT       27
#define OPT_VALUE_USER_DLT       (DESC(USER_DLT).optArg.argInt)
#define VALUE_OPT_USER_DLINK     28
#ifdef DEBUG
#define VALUE_OPT_DBUG           'd'
#define OPT_VALUE_DBUG           (DESC(DBUG).optArg.argInt)
#endif /* DEBUG */
#define VALUE_OPT_QUIET          'q'
#define VALUE_OPT_TIMER          'T'
#define VALUE_OPT_SLEEP_ACCEL    32
#define OPT_VALUE_SLEEP_ACCEL    (DESC(SLEEP_ACCEL).optArg.argInt)
#define VALUE_OPT_RDTSC_CLICKS   129
#define OPT_VALUE_RDTSC_CLICKS   (DESC(RDTSC_CLICKS).optArg.argInt)
#ifdef ENABLE_VERBOSE
#define VALUE_OPT_VERBOSE        'v'
#define SET_OPT_VERBOSE   STMTS( \
        DESC(VERBOSE).optActualIndex = 34; \
        DESC(VERBOSE).optActualValue = VALUE_OPT_VERBOSE; \
        DESC(VERBOSE).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(VERBOSE).fOptState |= OPTST_SET )
#endif /* ENABLE_VERBOSE */
#ifdef ENABLE_VERBOSE
#define VALUE_OPT_DECODE         'A'
#endif /* ENABLE_VERBOSE */
#define VALUE_OPT_ENABLE_FILE_CACHE 'K'
#define VALUE_OPT_PRELOAD_PCAP   133
#define VALUE_OPT_CACHEFILE      'c'
#define VALUE_OPT_INTF1          'i'
#define VALUE_OPT_INTF2          'I'
#ifdef ENABLE_PCAP_FINDALLDEVS
#define VALUE_OPT_LISTNICS       137
#endif /* ENABLE_PCAP_FINDALLDEVS */
#define VALUE_OPT_LOOP           'l'
#define OPT_VALUE_LOOP           (DESC(LOOP).optArg.argInt)
#define VALUE_OPT_PKTLEN         139
#define VALUE_OPT_LIMIT          'L'
#define OPT_VALUE_LIMIT          (DESC(LIMIT).optArg.argInt)
#define VALUE_OPT_MULTIPLIER     'x'
#define VALUE_OPT_PPS            'p'
#define OPT_VALUE_PPS            (DESC(PPS).optArg.argInt)
#define VALUE_OPT_MBPS           'M'
#define VALUE_OPT_TOPSPEED       't'
#define VALUE_OPT_ONEATATIME     'o'
#define VALUE_OPT_PPS_MULTI      146
#define OPT_VALUE_PPS_MULTI      (DESC(PPS_MULTI).optArg.argInt)
#define VALUE_OPT_PID            'P'
#define VALUE_OPT_STATS          148
#define OPT_VALUE_STATS          (DESC(STATS).optArg.argInt)
#define VALUE_OPT_VERSION        'V'
#define VALUE_OPT_LESS_HELP      'h'
#define VALUE_OPT_HELP          'H'
#define VALUE_OPT_MORE_HELP     '!'
#define VALUE_OPT_SAVE_OPTS     INDEX_OPT_SAVE_OPTS
#define VALUE_OPT_LOAD_OPTS     INDEX_OPT_LOAD_OPTS
#define SET_OPT_SAVE_OPTS(a)   STMTS( \
        DESC(SAVE_OPTS).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SAVE_OPTS).fOptState |= OPTST_SET; \
        DESC(SAVE_OPTS).optArg.argString = (char const*)(a) )
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS( tcpreplayOptions.fOptSet &= ~OPTPROC_ERRSTOP )
#define ERRSTOP_OPTERR  STMTS( tcpreplayOptions.fOptSet |= OPTPROC_ERRSTOP )
#define RESTART_OPT(n)  STMTS( \
                tcpreplayOptions.curOptIdx = (n); \
                tcpreplayOptions.pzCurOpt  = NULL )
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*tcpreplayOptions.pUsageProc)( &tcpreplayOptions, c )
/* extracted from /usr/local/share/autogen/opthead.tpl near line 409 */

/* * * * * *
 *
 *  Declare the tcpreplay option descriptor.
 */
#ifdef  __cplusplus
extern "C" {
#endif

extern tOptions   tcpreplayOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
    static inline char* aoGetsText( char const* pz ) {
        if (pz == NULL) return NULL;
        return (char*)gettext( pz );
    }
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(tcpreplayOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(tcpreplayOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(tcpreplayOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(tcpreplayOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD */
/* tcpreplay_edit_opts.h ends here */
