/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

/*
** This file is generated. Do not modify it manually!
*/

#include <osquery/events.h>
#include <osquery/logger.h>
#include <osquery/tables.h>

namespace osquery {
namespace tables {

auto quicklookCacheRegister = []() {
/// BEGIN[GENTABLE]
  class quicklookCacheTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rowid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("fs_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("volume_id", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_hit_date", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hit_count", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("icon_mode", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cache_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("quicklook_cache",
      std::make_shared<quicklookCacheTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}