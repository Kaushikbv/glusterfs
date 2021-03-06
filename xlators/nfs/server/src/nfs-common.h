/*
  Copyright (c) 2010 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU Affero General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Affero General Public License for more details.

  You should have received a copy of the GNU Affero General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/

#ifndef _NFS_COMMON_H_
#define _NFS_COMMON_H_

#ifndef _CONFIG_H
#define _CONFIG_H
#include "config.h"
#endif

#include <unistd.h>

#include "xlator.h"
#include "rpcsvc.h"
#include "iatt.h"
#include "uuid.h"

#define NFS_PATH_MAX    PATH_MAX
#define NFS_NAME_MAX    NAME_MAX

#define NFS_DEFAULT_CREATE_MODE 0644

extern xlator_t *
nfs_xlid_to_xlator (xlator_list_t *cl, uint8_t xlid);

extern uint16_t
nfs_xlator_to_xlid (xlator_list_t *cl, xlator_t *xl);

extern xlator_t *
nfs_path_to_xlator (xlator_list_t *cl, char *path);

extern xlator_t *
nfs_mntpath_to_xlator (xlator_list_t *cl, char *path);

extern int
nfs_zero_filled_stat (struct iatt *buf);

extern void
nfs_loc_wipe (loc_t *loc);

extern int
nfs_loc_copy (loc_t *dst, loc_t *src);

extern int
nfs_loc_fill (loc_t *loc, inode_t *inode, inode_t *parent, char *path);

#define NFS_RESOLVE_EXIST       1
#define NFS_RESOLVE_CREATE      2

extern int
nfs_inode_loc_fill (inode_t *inode, loc_t *loc);

extern int
nfs_ino_loc_fill (inode_table_t *itable, uuid_t gfid, loc_t *l);

extern int
nfs_entry_loc_fill (inode_table_t *itable, uuid_t pargfid, char *entry,
                    loc_t *loc, int how);

extern int
nfs_root_loc_fill (inode_table_t *itable, loc_t *loc);

extern uint32_t
nfs_hash_gfid (uuid_t gfid);
#endif
