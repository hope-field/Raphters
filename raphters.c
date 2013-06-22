/*
    Copyright (C) 2011 Raphters authors,
    
    This file is part of Raphters.
    
    Raphters is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Raphters is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "raphters.h"

void serve_forever(int listen_socket) {
    init_handlers();
	
	FCGX_Request *request = malloc(sizeof(FCGX_Request));
    FCGX_InitRequest(request, listen_socket, 0);
	
    while(FCGI_Accept_r(request) >= 0) {
        dispatch(request);
		FCGX_Request *request = malloc(sizeof(FCGX_Request));
		if (!request)	break;
		FCGX_InitRequest(request, listen_socket, 0);
	}
    cleanup_handlers();
}
