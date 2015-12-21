#ifndef MIKEBD_COMMON_COLLECTION_COMPARE_H
#define MIKEBD_COMMON_COLLECTION_COMPARE_H

#include <functional>

namespace mikebd {
namespace common {
namespace collection {

/**
 * Comparator that sorts by:
 * - Major: size().  e.g. string length
 * - Minor: operator< (). e.g. lexicographically for strings
 *
 * Result: "" < "a" < "b" < "c" < "ab" < "ac" < "bc" < "abc"
 */
template <typename T>
struct compare_size_natural {
    inline constexpr bool operator() (const T & lhs, const T & rhs) const {
        return (lhs.size() < rhs.size()) ||
               ((lhs.size() == rhs.size()) && std::less<T>()(lhs, rhs));
    }
};

} } } // ::mikebd::common::collection

#endif //MIKEBD_COMMON_COLLECTION_COMPARE_H
