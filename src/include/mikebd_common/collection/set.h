#ifndef MIKEBD_COMMON_COLLECTION_SET_H
#define MIKEBD_COMMON_COLLECTION_SET_H

#include "compare.h"
#include <set>

namespace mikebd {
namespace common {
namespace collection {

/**
 * Set with a comparator that sorts by:
 * - Major: size().  e.g. string length
 * - Minor: operator< (). e.g. lexicographically for strings
 *
 * Result: { "", "a", "b", "c", "ab", "ac", "bc", "abc" }
 */
template <typename T, typename Alloc = std::allocator<T>>
using set_compare_size_natural = std::set<T, compare_size_natural<T>, Alloc>;

} } } // ::mikebd::common::collection

#endif //MIKEBD_COMMON_COLLECTION_SET_H
