/*
  Copyright (c) 2008-2010 Gluster, Inc. <http://www.gluster.com>
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

#ifndef _IB_VERBS_NAME_H
#define _IB_VERBS_NAME_H

#include <sys/socket.h>
#include <sys/un.h>

#include "compat.h"

int32_t
gf_ibverbs_client_bind (transport_t *this,
                        struct sockaddr *sockaddr,
                        socklen_t *sockaddr_len,
                        int sock);

int32_t
gf_ibverbs_client_get_remote_sockaddr (transport_t *this,
                                    struct sockaddr *sockaddr,
                                    socklen_t *sockaddr_len);

int32_t
gf_ibverbs_server_get_local_sockaddr (transport_t *this,
                                   struct sockaddr *addr,
                                   socklen_t *addr_len);

int32_t
gf_ibverbs_get_transport_identifiers (transport_t *this);

#endif /* _IB_VERBS_NAME_H */
