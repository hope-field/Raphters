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

#include "request.h"

#include "stdlib.h"

char *get_referer(FCGX_Request* _request) {
    return FCGX_GetParam("HTTP_REFERER", _request->envp);
}

char *get_user_agent(FCGX_Request* _request) {
    return FCGX_GetParam("HTTP_USER_AGENT", _request->envp);
}

char *get_path_info(FCGX_Request* _request) {
    return FCGX_GetParam("PATH_INFO", _request->envp);
}

char *get_query_string(FCGX_Request* _request) {
    return FCGX_GetParam("QUERY_STRING"", _request->envp);
}

char *get_remote_addr(FCGX_Request* _request) {
    return FCGX_GetParam("REMOTE_ADDR", _request->envp);
}

char *get_method(FCGX_Request* _request) {
    return FCGX_GetParam("REQUEST_METHOD", _request->envp);
}

char *get_server_name(FCGX_Request* _request) {
    return FCGX_GetParam("SERVER_NAME", _request->envp);
}

char *get_server_port(FCGX_Request* _request) {
    return FCGX_GetParam("SERVER_PORT", _request->envp);
}
