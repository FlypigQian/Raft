// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello0.proto

#ifndef PROTOBUF_INCLUDED_hello_2eproto
#define PROTOBUF_INCLUDED_hello_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_hello_2eproto

namespace protobuf_hello_2eproto {
// Internal implementation detail -- do not use these members.
	struct TableStruct {
		static const ::google::protobuf::internal::ParseTableField entries[];
		static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
		static const ::google::protobuf::internal::ParseTable schema[2];
		static const ::google::protobuf::internal::FieldMetadata field_metadata[];
		static const ::google::protobuf::internal::SerializationTable serialization_table[];
		static const ::google::protobuf::uint32 offsets[];
	};

	void AddDescriptors();
}  // namespace protobuf_hello_2eproto
class HelloRequest;

class HelloRequestDefaultTypeInternal;

extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;

class HelloResponse;

class HelloResponseDefaultTypeInternal;

extern HelloResponseDefaultTypeInternal _HelloResponse_default_instance_;
namespace google {
	namespace protobuf {
		template<>
		::HelloRequest *Arena::CreateMaybeMessage<::HelloRequest>(Arena *);

		template<>
		::HelloResponse *Arena::CreateMaybeMessage<::HelloResponse>(Arena *);
	}  // namespace protobuf
}  // namespace google

// ===================================================================

class HelloRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HelloRequest) */ {
public:
	HelloRequest();

	virtual ~HelloRequest();

	HelloRequest(const HelloRequest &from);

	inline HelloRequest &operator=(const HelloRequest &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	HelloRequest(HelloRequest &&from) noexcept
			: HelloRequest() {
		*this = ::std::move(from);
	}

	inline HelloRequest &operator=(HelloRequest &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const HelloRequest &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const HelloRequest *internal_default_instance() {
		return reinterpret_cast<const HelloRequest *>(
				&_HelloRequest_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			0;

	void Swap(HelloRequest *other);

	friend void swap(HelloRequest &a, HelloRequest &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline HelloRequest *New() const final {
		return CreateMaybeMessage<HelloRequest>(NULL);
	}

	HelloRequest *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<HelloRequest>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const HelloRequest &from);

	void MergeFrom(const HelloRequest &from);

	void Clear() final;

	bool IsInitialized() const final;

	size_t ByteSizeLong() const final;

	bool MergePartialFromCodedStream(
			::google::protobuf::io::CodedInputStream *input) final;

	void SerializeWithCachedSizes(
			::google::protobuf::io::CodedOutputStream *output) const final;

	::google::protobuf::uint8 *InternalSerializeWithCachedSizesToArray(
			bool deterministic, ::google::protobuf::uint8 *target) const final;

	int GetCachedSize() const final { return _cached_size_.Get(); }

private:
	void SharedCtor();

	void SharedDtor();

	void SetCachedSize(int size) const final;

	void InternalSwap(HelloRequest *other);

private:
	inline ::google::protobuf::Arena *GetArenaNoVirtual() const {
		return NULL;
	}

	inline void *MaybeArenaPtr() const {
		return NULL;
	}

public:

	::google::protobuf::Metadata GetMetadata() const final;

	// nested types ----------------------------------------------------

	// accessors -------------------------------------------------------

	// string greeting = 1;
	void clear_greeting();

	static const int kGreetingFieldNumber = 1;

	const ::std::string &greeting() const;

	void set_greeting(const ::std::string &value);

#if LANG_CXX11

	void set_greeting(::std::string &&value);

#endif

	void set_greeting(const char *value);

	void set_greeting(const char *value, size_t size);

	::std::string *mutable_greeting();

	::std::string *release_greeting();

	void set_allocated_greeting(::std::string *greeting);

	// @@protoc_insertion_point(class_scope:HelloRequest)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::internal::ArenaStringPtr greeting_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_hello_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class HelloResponse
		: public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HelloResponse) */ {
public:
	HelloResponse();

	virtual ~HelloResponse();

	HelloResponse(const HelloResponse &from);

	inline HelloResponse &operator=(const HelloResponse &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	HelloResponse(HelloResponse &&from) noexcept
			: HelloResponse() {
		*this = ::std::move(from);
	}

	inline HelloResponse &operator=(HelloResponse &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const HelloResponse &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const HelloResponse *internal_default_instance() {
		return reinterpret_cast<const HelloResponse *>(
				&_HelloResponse_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			1;

	void Swap(HelloResponse *other);

	friend void swap(HelloResponse &a, HelloResponse &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline HelloResponse *New() const final {
		return CreateMaybeMessage<HelloResponse>(NULL);
	}

	HelloResponse *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<HelloResponse>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const HelloResponse &from);

	void MergeFrom(const HelloResponse &from);

	void Clear() final;

	bool IsInitialized() const final;

	size_t ByteSizeLong() const final;

	bool MergePartialFromCodedStream(
			::google::protobuf::io::CodedInputStream *input) final;

	void SerializeWithCachedSizes(
			::google::protobuf::io::CodedOutputStream *output) const final;

	::google::protobuf::uint8 *InternalSerializeWithCachedSizesToArray(
			bool deterministic, ::google::protobuf::uint8 *target) const final;

	int GetCachedSize() const final { return _cached_size_.Get(); }

private:
	void SharedCtor();

	void SharedDtor();

	void SetCachedSize(int size) const final;

	void InternalSwap(HelloResponse *other);

private:
	inline ::google::protobuf::Arena *GetArenaNoVirtual() const {
		return NULL;
	}

	inline void *MaybeArenaPtr() const {
		return NULL;
	}

public:

	::google::protobuf::Metadata GetMetadata() const final;

	// nested types ----------------------------------------------------

	// accessors -------------------------------------------------------

	// string reply = 1;
	void clear_reply();

	static const int kReplyFieldNumber = 1;

	const ::std::string &reply() const;

	void set_reply(const ::std::string &value);

#if LANG_CXX11

	void set_reply(::std::string &&value);

#endif

	void set_reply(const char *value);

	void set_reply(const char *value, size_t size);

	::std::string *mutable_reply();

	::std::string *release_reply();

	void set_allocated_reply(::std::string *reply);

	// @@protoc_insertion_point(class_scope:HelloResponse)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::internal::ArenaStringPtr reply_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_hello_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// string greeting = 1;
inline void HelloRequest::clear_greeting() {
	greeting_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline const ::std::string &HelloRequest::greeting() const {
	// @@protoc_insertion_point(field_get:HelloRequest.greeting)
	return greeting_.GetNoArena();
}

inline void HelloRequest::set_greeting(const ::std::string &value) {

	greeting_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:HelloRequest.greeting)
}

#if LANG_CXX11

inline void HelloRequest::set_greeting(::std::string &&value) {

	greeting_.SetNoArena(
			&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:HelloRequest.greeting)
}

#endif

inline void HelloRequest::set_greeting(const char *value) {
			GOOGLE_DCHECK(value != NULL);

	greeting_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:HelloRequest.greeting)
}

inline void HelloRequest::set_greeting(const char *value, size_t size) {

	greeting_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
											 ::std::string(reinterpret_cast<const char *>(value), size));
	// @@protoc_insertion_point(field_set_pointer:HelloRequest.greeting)
}

inline ::std::string *HelloRequest::mutable_greeting() {

	// @@protoc_insertion_point(field_mutable:HelloRequest.greeting)
	return greeting_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline ::std::string *HelloRequest::release_greeting() {
	// @@protoc_insertion_point(field_release:HelloRequest.greeting)

	return greeting_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline void HelloRequest::set_allocated_greeting(::std::string *greeting) {
	if (greeting != NULL) {

	} else {

	}
	greeting_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), greeting);
	// @@protoc_insertion_point(field_set_allocated:HelloRequest.greeting)
}

// -------------------------------------------------------------------

// HelloResponse

// string reply = 1;
inline void HelloResponse::clear_reply() {
	reply_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline const ::std::string &HelloResponse::reply() const {
	// @@protoc_insertion_point(field_get:HelloResponse.reply)
	return reply_.GetNoArena();
}

inline void HelloResponse::set_reply(const ::std::string &value) {

	reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:HelloResponse.reply)
}

#if LANG_CXX11

inline void HelloResponse::set_reply(::std::string &&value) {

	reply_.SetNoArena(
			&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:HelloResponse.reply)
}

#endif

inline void HelloResponse::set_reply(const char *value) {
			GOOGLE_DCHECK(value != NULL);

	reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:HelloResponse.reply)
}

inline void HelloResponse::set_reply(const char *value, size_t size) {

	reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
										::std::string(reinterpret_cast<const char *>(value), size));
	// @@protoc_insertion_point(field_set_pointer:HelloResponse.reply)
}

inline ::std::string *HelloResponse::mutable_reply() {

	// @@protoc_insertion_point(field_mutable:HelloResponse.reply)
	return reply_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline ::std::string *HelloResponse::release_reply() {
	// @@protoc_insertion_point(field_release:HelloResponse.reply)

	return reply_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline void HelloResponse::set_allocated_reply(::std::string *reply) {
	if (reply != NULL) {

	} else {

	}
	reply_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reply);
	// @@protoc_insertion_point(field_set_allocated:HelloResponse.reply)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_hello_2eproto
