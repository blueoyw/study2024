#pragma once
#include <memory>

typedef unsigned char byte;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

template<typename T>
using Ptr = std::shared_ptr<T>;

template<typename T>
using WeakPtr = std::weak_ptr<T>;

template<typename T>
using UniquePtr = std::unique_ptr<T>;

using VoidPtr = std::shared_ptr<void>;
using VoidWeakPtr = std::weak_ptr<void>;
