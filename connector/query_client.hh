#pragma once

#include "push_client.hh"
#include <data.pb.h>

namespace virtdb { namespace connector {
  
  class query_client final :
      public push_client<interface::pb::Query>
  {
    typedef push_client<interface::pb::Query> push_base_type;
    
  public:
    query_client(endpoint_client & ep_clnt,
                 const std::string & server);
    
    virtual ~query_client();
  };
}}