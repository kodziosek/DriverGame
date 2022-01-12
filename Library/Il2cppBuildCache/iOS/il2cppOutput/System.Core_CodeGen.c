#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000018 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000022 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000026 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000045 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000046 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000047 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000048 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000049 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000004B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000050 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000051 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000052 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000056 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000057 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000058 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000059 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000005A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000005B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000060 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000069 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000006A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000006B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000077 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000007A System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007B T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007C System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[125] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[125] = 
{
	4272,
	4460,
	4460,
	4460,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[45] = 
{
	{ 0x02000004, { 73, 4 } },
	{ 0x02000005, { 77, 9 } },
	{ 0x02000006, { 88, 7 } },
	{ 0x02000007, { 97, 10 } },
	{ 0x02000008, { 109, 11 } },
	{ 0x02000009, { 123, 9 } },
	{ 0x0200000A, { 135, 12 } },
	{ 0x0200000B, { 150, 1 } },
	{ 0x0200000C, { 151, 2 } },
	{ 0x0200000D, { 153, 2 } },
	{ 0x0200000F, { 155, 3 } },
	{ 0x02000010, { 160, 5 } },
	{ 0x02000011, { 165, 7 } },
	{ 0x02000012, { 172, 3 } },
	{ 0x02000013, { 175, 7 } },
	{ 0x02000014, { 182, 4 } },
	{ 0x02000015, { 186, 21 } },
	{ 0x02000017, { 207, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 4 } },
	{ 0x0600000E, { 42, 3 } },
	{ 0x0600000F, { 45, 4 } },
	{ 0x06000010, { 49, 4 } },
	{ 0x06000011, { 53, 3 } },
	{ 0x06000012, { 56, 1 } },
	{ 0x06000013, { 57, 1 } },
	{ 0x06000014, { 58, 3 } },
	{ 0x06000015, { 61, 3 } },
	{ 0x06000016, { 64, 2 } },
	{ 0x06000017, { 66, 2 } },
	{ 0x06000018, { 68, 5 } },
	{ 0x06000028, { 86, 2 } },
	{ 0x0600002D, { 95, 2 } },
	{ 0x06000032, { 107, 2 } },
	{ 0x06000038, { 120, 3 } },
	{ 0x0600003D, { 132, 3 } },
	{ 0x06000042, { 147, 3 } },
	{ 0x0600004D, { 158, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[209] = 
{
	{ (Il2CppRGCTXDataType)2, 2117 },
	{ (Il2CppRGCTXDataType)3, 8614 },
	{ (Il2CppRGCTXDataType)2, 3367 },
	{ (Il2CppRGCTXDataType)2, 2866 },
	{ (Il2CppRGCTXDataType)3, 14738 },
	{ (Il2CppRGCTXDataType)2, 2210 },
	{ (Il2CppRGCTXDataType)2, 2873 },
	{ (Il2CppRGCTXDataType)3, 14773 },
	{ (Il2CppRGCTXDataType)2, 2868 },
	{ (Il2CppRGCTXDataType)3, 14750 },
	{ (Il2CppRGCTXDataType)2, 2118 },
	{ (Il2CppRGCTXDataType)3, 8615 },
	{ (Il2CppRGCTXDataType)2, 3399 },
	{ (Il2CppRGCTXDataType)2, 2878 },
	{ (Il2CppRGCTXDataType)3, 14788 },
	{ (Il2CppRGCTXDataType)2, 2227 },
	{ (Il2CppRGCTXDataType)2, 2886 },
	{ (Il2CppRGCTXDataType)3, 14952 },
	{ (Il2CppRGCTXDataType)2, 2882 },
	{ (Il2CppRGCTXDataType)3, 14863 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1288 },
	{ (Il2CppRGCTXDataType)3, 5880 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)3, 5886 },
	{ (Il2CppRGCTXDataType)2, 2593 },
	{ (Il2CppRGCTXDataType)3, 13231 },
	{ (Il2CppRGCTXDataType)3, 6536 },
	{ (Il2CppRGCTXDataType)2, 875 },
	{ (Il2CppRGCTXDataType)3, 977 },
	{ (Il2CppRGCTXDataType)3, 978 },
	{ (Il2CppRGCTXDataType)2, 2211 },
	{ (Il2CppRGCTXDataType)3, 9234 },
	{ (Il2CppRGCTXDataType)2, 1892 },
	{ (Il2CppRGCTXDataType)2, 1460 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)3, 5881 },
	{ (Il2CppRGCTXDataType)2, 1893 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)2, 1894 },
	{ (Il2CppRGCTXDataType)2, 1462 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)2, 1676 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)3, 5882 },
	{ (Il2CppRGCTXDataType)2, 1128 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)2, 1557 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)3, 5879 },
	{ (Il2CppRGCTXDataType)2, 1555 },
	{ (Il2CppRGCTXDataType)2, 1670 },
	{ (Il2CppRGCTXDataType)3, 5878 },
	{ (Il2CppRGCTXDataType)2, 1459 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 1458 },
	{ (Il2CppRGCTXDataType)3, 17898 },
	{ (Il2CppRGCTXDataType)3, 5235 },
	{ (Il2CppRGCTXDataType)2, 1193 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)2, 1770 },
	{ (Il2CppRGCTXDataType)3, 8616 },
	{ (Il2CppRGCTXDataType)3, 8618 },
	{ (Il2CppRGCTXDataType)2, 555 },
	{ (Il2CppRGCTXDataType)3, 8617 },
	{ (Il2CppRGCTXDataType)3, 8626 },
	{ (Il2CppRGCTXDataType)2, 2121 },
	{ (Il2CppRGCTXDataType)2, 2869 },
	{ (Il2CppRGCTXDataType)3, 14751 },
	{ (Il2CppRGCTXDataType)3, 8627 },
	{ (Il2CppRGCTXDataType)2, 1610 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 5893 },
	{ (Il2CppRGCTXDataType)3, 17864 },
	{ (Il2CppRGCTXDataType)2, 2883 },
	{ (Il2CppRGCTXDataType)3, 14864 },
	{ (Il2CppRGCTXDataType)3, 8619 },
	{ (Il2CppRGCTXDataType)2, 2120 },
	{ (Il2CppRGCTXDataType)2, 2867 },
	{ (Il2CppRGCTXDataType)3, 14739 },
	{ (Il2CppRGCTXDataType)3, 5892 },
	{ (Il2CppRGCTXDataType)3, 8620 },
	{ (Il2CppRGCTXDataType)3, 17863 },
	{ (Il2CppRGCTXDataType)2, 2879 },
	{ (Il2CppRGCTXDataType)3, 14789 },
	{ (Il2CppRGCTXDataType)3, 8633 },
	{ (Il2CppRGCTXDataType)2, 2122 },
	{ (Il2CppRGCTXDataType)2, 2874 },
	{ (Il2CppRGCTXDataType)3, 14774 },
	{ (Il2CppRGCTXDataType)3, 9277 },
	{ (Il2CppRGCTXDataType)3, 4116 },
	{ (Il2CppRGCTXDataType)3, 5894 },
	{ (Il2CppRGCTXDataType)3, 4115 },
	{ (Il2CppRGCTXDataType)3, 8634 },
	{ (Il2CppRGCTXDataType)3, 17865 },
	{ (Il2CppRGCTXDataType)2, 2887 },
	{ (Il2CppRGCTXDataType)3, 14953 },
	{ (Il2CppRGCTXDataType)3, 8647 },
	{ (Il2CppRGCTXDataType)2, 2124 },
	{ (Il2CppRGCTXDataType)2, 2885 },
	{ (Il2CppRGCTXDataType)3, 14866 },
	{ (Il2CppRGCTXDataType)3, 8648 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)3, 5898 },
	{ (Il2CppRGCTXDataType)3, 5897 },
	{ (Il2CppRGCTXDataType)2, 2871 },
	{ (Il2CppRGCTXDataType)3, 14753 },
	{ (Il2CppRGCTXDataType)3, 17870 },
	{ (Il2CppRGCTXDataType)2, 2884 },
	{ (Il2CppRGCTXDataType)3, 14865 },
	{ (Il2CppRGCTXDataType)3, 8640 },
	{ (Il2CppRGCTXDataType)2, 2123 },
	{ (Il2CppRGCTXDataType)2, 2881 },
	{ (Il2CppRGCTXDataType)3, 14791 },
	{ (Il2CppRGCTXDataType)3, 5896 },
	{ (Il2CppRGCTXDataType)3, 5895 },
	{ (Il2CppRGCTXDataType)3, 8641 },
	{ (Il2CppRGCTXDataType)2, 2870 },
	{ (Il2CppRGCTXDataType)3, 14752 },
	{ (Il2CppRGCTXDataType)3, 17869 },
	{ (Il2CppRGCTXDataType)2, 2880 },
	{ (Il2CppRGCTXDataType)3, 14790 },
	{ (Il2CppRGCTXDataType)3, 8654 },
	{ (Il2CppRGCTXDataType)2, 2125 },
	{ (Il2CppRGCTXDataType)2, 2889 },
	{ (Il2CppRGCTXDataType)3, 14955 },
	{ (Il2CppRGCTXDataType)3, 9278 },
	{ (Il2CppRGCTXDataType)3, 4118 },
	{ (Il2CppRGCTXDataType)3, 5900 },
	{ (Il2CppRGCTXDataType)3, 5899 },
	{ (Il2CppRGCTXDataType)3, 4117 },
	{ (Il2CppRGCTXDataType)3, 8655 },
	{ (Il2CppRGCTXDataType)2, 2872 },
	{ (Il2CppRGCTXDataType)3, 14754 },
	{ (Il2CppRGCTXDataType)3, 17871 },
	{ (Il2CppRGCTXDataType)2, 2888 },
	{ (Il2CppRGCTXDataType)3, 14954 },
	{ (Il2CppRGCTXDataType)3, 5890 },
	{ (Il2CppRGCTXDataType)3, 5891 },
	{ (Il2CppRGCTXDataType)3, 5904 },
	{ (Il2CppRGCTXDataType)2, 3406 },
	{ (Il2CppRGCTXDataType)2, 1129 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 13218 },
	{ (Il2CppRGCTXDataType)2, 2594 },
	{ (Il2CppRGCTXDataType)3, 13232 },
	{ (Il2CppRGCTXDataType)2, 876 },
	{ (Il2CppRGCTXDataType)3, 979 },
	{ (Il2CppRGCTXDataType)3, 13224 },
	{ (Il2CppRGCTXDataType)3, 4093 },
	{ (Il2CppRGCTXDataType)2, 584 },
	{ (Il2CppRGCTXDataType)3, 13219 },
	{ (Il2CppRGCTXDataType)2, 2590 },
	{ (Il2CppRGCTXDataType)3, 1090 },
	{ (Il2CppRGCTXDataType)2, 910 },
	{ (Il2CppRGCTXDataType)2, 1162 },
	{ (Il2CppRGCTXDataType)3, 4099 },
	{ (Il2CppRGCTXDataType)3, 13220 },
	{ (Il2CppRGCTXDataType)3, 4088 },
	{ (Il2CppRGCTXDataType)3, 4089 },
	{ (Il2CppRGCTXDataType)3, 4087 },
	{ (Il2CppRGCTXDataType)3, 4090 },
	{ (Il2CppRGCTXDataType)2, 1158 },
	{ (Il2CppRGCTXDataType)2, 3453 },
	{ (Il2CppRGCTXDataType)3, 5888 },
	{ (Il2CppRGCTXDataType)3, 4092 },
	{ (Il2CppRGCTXDataType)2, 1538 },
	{ (Il2CppRGCTXDataType)3, 4091 },
	{ (Il2CppRGCTXDataType)2, 1464 },
	{ (Il2CppRGCTXDataType)2, 3402 },
	{ (Il2CppRGCTXDataType)2, 1584 },
	{ (Il2CppRGCTXDataType)2, 1682 },
	{ (Il2CppRGCTXDataType)3, 5253 },
	{ (Il2CppRGCTXDataType)2, 1202 },
	{ (Il2CppRGCTXDataType)3, 6372 },
	{ (Il2CppRGCTXDataType)3, 6373 },
	{ (Il2CppRGCTXDataType)3, 6378 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)3, 6375 },
	{ (Il2CppRGCTXDataType)3, 18563 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 4106 },
	{ (Il2CppRGCTXDataType)1, 1533 },
	{ (Il2CppRGCTXDataType)2, 3414 },
	{ (Il2CppRGCTXDataType)3, 6374 },
	{ (Il2CppRGCTXDataType)1, 3414 },
	{ (Il2CppRGCTXDataType)1, 1778 },
	{ (Il2CppRGCTXDataType)2, 3469 },
	{ (Il2CppRGCTXDataType)2, 3414 },
	{ (Il2CppRGCTXDataType)3, 6379 },
	{ (Il2CppRGCTXDataType)3, 6377 },
	{ (Il2CppRGCTXDataType)3, 6376 },
	{ (Il2CppRGCTXDataType)2, 439 },
	{ (Il2CppRGCTXDataType)3, 4119 },
	{ (Il2CppRGCTXDataType)2, 564 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	125,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	45,
	s_rgctxIndices,
	209,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
