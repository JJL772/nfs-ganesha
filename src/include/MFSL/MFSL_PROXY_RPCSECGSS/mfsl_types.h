/*
 *
 *
 * Copyright CEA/DAM/DIF  (2008)
 * contributeur : Philippe DENIEL   philippe.deniel@cea.fr
 *                Thomas LEIBOVICI  thomas.leibovici@cea.fr
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 * ---------------------------------------
 */

/**
 * \file    mfsl_types.h
 */

#ifndef _MFSL_PROXY_RPCSECGSS_TYPES_H
#define _MFSL_PROXY_RPCSECGSS_TYPES_H

/*
 * labels in the config file
 */

#define CONF_LABEL_MFSL_NULL          "MFSL_NULL"

/* other includes */
#include <sys/types.h>
#include <sys/param.h>
#include <dirent.h>             /* for MAXNAMLEN */
#include "config_parsing.h"
#include "err_fsal.h"
#include "err_mfsl.h"

typedef struct mfsl_parameter__
{

  int i;
} mfsl_parameter_t;

typedef struct mfsl_context__
{

  int i;
} mfsl_context_t;

typedef struct mfsl_object__
{
  int nothing;
} mfsl_object_specific_data_t;

#endif                          /* _MFSL_PROXY_RPCSECGSS_TYPES_H */