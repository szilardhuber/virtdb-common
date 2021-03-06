#include "column_client.hh"

using namespace virtdb::interface;
using namespace virtdb::util;

namespace virtdb { namespace connector {
  
  column_client::column_client(endpoint_client & ep_client,
                               const std::string & server_name)
  : sub_base_type(ep_client, server_name)
  {
  }
  
  column_client::~column_client()
  {
  }
  
}}
