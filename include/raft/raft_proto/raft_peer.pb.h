// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft_peer.proto

#ifndef PROTOBUF_INCLUDED_raft_5fpeer_2eproto
#define PROTOBUF_INCLUDED_raft_5fpeer_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_raft_5fpeer_2eproto

namespace protobuf_raft_5fpeer_2eproto {
// Internal implementation detail -- do not use these members.
	struct TableStruct {
		static const ::google::protobuf::internal::ParseTableField entries[];
		static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
		static const ::google::protobuf::internal::ParseTable schema[4];
		static const ::google::protobuf::internal::FieldMetadata field_metadata[];
		static const ::google::protobuf::internal::SerializationTable serialization_table[];
		static const ::google::protobuf::uint32 offsets[];
	};

	void AddDescriptors();
}  // namespace protobuf_raft_5fpeer_2eproto
class PbAppendEntriesRequest;
class PbAppendEntriesRequestDefaultTypeInternal;
extern PbAppendEntriesRequestDefaultTypeInternal _PbAppendEntriesRequest_default_instance_;
class PbAppendEntriesResponse;
class PbAppendEntriesResponseDefaultTypeInternal;
extern PbAppendEntriesResponseDefaultTypeInternal _PbAppendEntriesResponse_default_instance_;
class PbRequestVoteRequest;
class PbRequestVoteRequestDefaultTypeInternal;
extern PbRequestVoteRequestDefaultTypeInternal _PbRequestVoteRequest_default_instance_;
class PbRequestVoteResponse;
class PbRequestVoteResponseDefaultTypeInternal;
extern PbRequestVoteResponseDefaultTypeInternal _PbRequestVoteResponse_default_instance_;
namespace google {
	namespace protobuf {
		template<>
		::PbAppendEntriesRequest *Arena::CreateMaybeMessage<::PbAppendEntriesRequest>(Arena *);

		template<>
		::PbAppendEntriesResponse *Arena::CreateMaybeMessage<::PbAppendEntriesResponse>(Arena *);

		template<>
		::PbRequestVoteRequest *Arena::CreateMaybeMessage<::PbRequestVoteRequest>(Arena *);

		template<>
		::PbRequestVoteResponse *Arena::CreateMaybeMessage<::PbRequestVoteResponse>(Arena *);
	}  // namespace protobuf
}  // namespace google

// ===================================================================

class PbAppendEntriesRequest
		: public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbAppendEntriesRequest) */ {
public:
	PbAppendEntriesRequest();

	virtual ~PbAppendEntriesRequest();

	PbAppendEntriesRequest(const PbAppendEntriesRequest &from);

	inline PbAppendEntriesRequest &operator=(const PbAppendEntriesRequest &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	PbAppendEntriesRequest(PbAppendEntriesRequest &&from) noexcept
			: PbAppendEntriesRequest() {
		*this = ::std::move(from);
	}

	inline PbAppendEntriesRequest &operator=(PbAppendEntriesRequest &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const PbAppendEntriesRequest &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const PbAppendEntriesRequest *internal_default_instance() {
		return reinterpret_cast<const PbAppendEntriesRequest *>(
				&_PbAppendEntriesRequest_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			0;

	void Swap(PbAppendEntriesRequest *other);

	friend void swap(PbAppendEntriesRequest &a, PbAppendEntriesRequest &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline PbAppendEntriesRequest *New() const final {
		return CreateMaybeMessage<PbAppendEntriesRequest>(NULL);
	}

	PbAppendEntriesRequest *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<PbAppendEntriesRequest>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const PbAppendEntriesRequest &from);

	void MergeFrom(const PbAppendEntriesRequest &from);

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

	void InternalSwap(PbAppendEntriesRequest *other);

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

	// string leaderId = 2;
	void clear_leaderid();

	static const int kLeaderIdFieldNumber = 2;

	const ::std::string &leaderid() const;

	void set_leaderid(const ::std::string &value);

#if LANG_CXX11

	void set_leaderid(::std::string &&value);

#endif

	void set_leaderid(const char *value);

	void set_leaderid(const char *value, size_t size);

	::std::string *mutable_leaderid();

	::std::string *release_leaderid();

	void set_allocated_leaderid(::std::string *leaderid);

	// int32 term = 1;
	void clear_term();

	static const int kTermFieldNumber = 1;

	::google::protobuf::int32 term() const;

	void set_term(::google::protobuf::int32 value);

	// int32 prevLogIndex = 3;
	void clear_prevlogindex();

	static const int kPrevLogIndexFieldNumber = 3;

	::google::protobuf::int32 prevlogindex() const;

	void set_prevlogindex(::google::protobuf::int32 value);

	// int32 prevLogTerm = 4;
	void clear_prevlogterm();

	static const int kPrevLogTermFieldNumber = 4;

	::google::protobuf::int32 prevlogterm() const;

	void set_prevlogterm(::google::protobuf::int32 value);

	// int32 entries = 5;
	void clear_entries();

	static const int kEntriesFieldNumber = 5;

	::google::protobuf::int32 entries() const;

	void set_entries(::google::protobuf::int32 value);

	// int32 leaderCommit = 6;
	void clear_leadercommit();

	static const int kLeaderCommitFieldNumber = 6;

	::google::protobuf::int32 leadercommit() const;

	void set_leadercommit(::google::protobuf::int32 value);

	// @@protoc_insertion_point(class_scope:PbAppendEntriesRequest)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::internal::ArenaStringPtr leaderid_;
	::google::protobuf::int32 term_;
	::google::protobuf::int32 prevlogindex_;
	::google::protobuf::int32 prevlogterm_;
	::google::protobuf::int32 entries_;
	::google::protobuf::int32 leadercommit_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_raft_5fpeer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PbAppendEntriesResponse
		: public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbAppendEntriesResponse) */ {
public:
	PbAppendEntriesResponse();

	virtual ~PbAppendEntriesResponse();

	PbAppendEntriesResponse(const PbAppendEntriesResponse &from);

	inline PbAppendEntriesResponse &operator=(const PbAppendEntriesResponse &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	PbAppendEntriesResponse(PbAppendEntriesResponse &&from) noexcept
			: PbAppendEntriesResponse() {
		*this = ::std::move(from);
	}

	inline PbAppendEntriesResponse &operator=(PbAppendEntriesResponse &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const PbAppendEntriesResponse &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const PbAppendEntriesResponse *internal_default_instance() {
		return reinterpret_cast<const PbAppendEntriesResponse *>(
				&_PbAppendEntriesResponse_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			1;

	void Swap(PbAppendEntriesResponse *other);

	friend void swap(PbAppendEntriesResponse &a, PbAppendEntriesResponse &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline PbAppendEntriesResponse *New() const final {
		return CreateMaybeMessage<PbAppendEntriesResponse>(NULL);
	}

	PbAppendEntriesResponse *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<PbAppendEntriesResponse>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const PbAppendEntriesResponse &from);

	void MergeFrom(const PbAppendEntriesResponse &from);

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

	void InternalSwap(PbAppendEntriesResponse *other);

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

	// int32 term = 1;
	void clear_term();

	static const int kTermFieldNumber = 1;

	::google::protobuf::int32 term() const;

	void set_term(::google::protobuf::int32 value);

	// bool success = 2;
	void clear_success();

	static const int kSuccessFieldNumber = 2;

	bool success() const;

	void set_success(bool value);

	// @@protoc_insertion_point(class_scope:PbAppendEntriesResponse)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::int32 term_;
	bool success_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_raft_5fpeer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PbRequestVoteRequest
		: public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbRequestVoteRequest) */ {
public:
	PbRequestVoteRequest();

	virtual ~PbRequestVoteRequest();

	PbRequestVoteRequest(const PbRequestVoteRequest &from);

	inline PbRequestVoteRequest &operator=(const PbRequestVoteRequest &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	PbRequestVoteRequest(PbRequestVoteRequest &&from) noexcept
			: PbRequestVoteRequest() {
		*this = ::std::move(from);
	}

	inline PbRequestVoteRequest &operator=(PbRequestVoteRequest &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const PbRequestVoteRequest &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const PbRequestVoteRequest *internal_default_instance() {
		return reinterpret_cast<const PbRequestVoteRequest *>(
				&_PbRequestVoteRequest_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			2;

	void Swap(PbRequestVoteRequest *other);

	friend void swap(PbRequestVoteRequest &a, PbRequestVoteRequest &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline PbRequestVoteRequest *New() const final {
		return CreateMaybeMessage<PbRequestVoteRequest>(NULL);
	}

	PbRequestVoteRequest *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<PbRequestVoteRequest>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const PbRequestVoteRequest &from);

	void MergeFrom(const PbRequestVoteRequest &from);

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

	void InternalSwap(PbRequestVoteRequest *other);

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

	// string candidateId = 2;
	void clear_candidateid();

	static const int kCandidateIdFieldNumber = 2;

	const ::std::string &candidateid() const;

	void set_candidateid(const ::std::string &value);

#if LANG_CXX11

	void set_candidateid(::std::string &&value);

#endif

	void set_candidateid(const char *value);

	void set_candidateid(const char *value, size_t size);

	::std::string *mutable_candidateid();

	::std::string *release_candidateid();

	void set_allocated_candidateid(::std::string *candidateid);

	// int32 term = 1;
	void clear_term();

	static const int kTermFieldNumber = 1;

	::google::protobuf::int32 term() const;

	void set_term(::google::protobuf::int32 value);

	// int32 lastLogIndex = 3;
	void clear_lastlogindex();

	static const int kLastLogIndexFieldNumber = 3;

	::google::protobuf::int32 lastlogindex() const;

	void set_lastlogindex(::google::protobuf::int32 value);

	// int32 lastLogTerm = 4;
	void clear_lastlogterm();

	static const int kLastLogTermFieldNumber = 4;

	::google::protobuf::int32 lastlogterm() const;

	void set_lastlogterm(::google::protobuf::int32 value);

	// @@protoc_insertion_point(class_scope:PbRequestVoteRequest)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::internal::ArenaStringPtr candidateid_;
	::google::protobuf::int32 term_;
	::google::protobuf::int32 lastlogindex_;
	::google::protobuf::int32 lastlogterm_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_raft_5fpeer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PbRequestVoteResponse
		: public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbRequestVoteResponse) */ {
public:
	PbRequestVoteResponse();

	virtual ~PbRequestVoteResponse();

	PbRequestVoteResponse(const PbRequestVoteResponse &from);

	inline PbRequestVoteResponse &operator=(const PbRequestVoteResponse &from) {
		CopyFrom(from);
		return *this;
	}

#if LANG_CXX11

	PbRequestVoteResponse(PbRequestVoteResponse &&from) noexcept
			: PbRequestVoteResponse() {
		*this = ::std::move(from);
	}

	inline PbRequestVoteResponse &operator=(PbRequestVoteResponse &&from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		} else {
			CopyFrom(from);
		}
		return *this;
	}

#endif

	static const ::google::protobuf::Descriptor *descriptor();

	static const PbRequestVoteResponse &default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const PbRequestVoteResponse *internal_default_instance() {
		return reinterpret_cast<const PbRequestVoteResponse *>(
				&_PbRequestVoteResponse_default_instance_);
	}

	static constexpr int kIndexInFileMessages =
			3;

	void Swap(PbRequestVoteResponse *other);

	friend void swap(PbRequestVoteResponse &a, PbRequestVoteResponse &b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline PbRequestVoteResponse *New() const final {
		return CreateMaybeMessage<PbRequestVoteResponse>(NULL);
	}

	PbRequestVoteResponse *New(::google::protobuf::Arena *arena) const final {
		return CreateMaybeMessage<PbRequestVoteResponse>(arena);
	}

	void CopyFrom(const ::google::protobuf::Message &from) final;

	void MergeFrom(const ::google::protobuf::Message &from) final;

	void CopyFrom(const PbRequestVoteResponse &from);

	void MergeFrom(const PbRequestVoteResponse &from);

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

	void InternalSwap(PbRequestVoteResponse *other);

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

	// int32 term = 1;
	void clear_term();

	static const int kTermFieldNumber = 1;

	::google::protobuf::int32 term() const;

	void set_term(::google::protobuf::int32 value);

	// bool voteGranted = 2;
	void clear_votegranted();

	static const int kVoteGrantedFieldNumber = 2;

	bool votegranted() const;

	void set_votegranted(bool value);

	// @@protoc_insertion_point(class_scope:PbRequestVoteResponse)
private:

	::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
	::google::protobuf::int32 term_;
	bool votegranted_;
	mutable ::google::protobuf::internal::CachedSize _cached_size_;
	friend struct ::protobuf_raft_5fpeer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PbAppendEntriesRequest

// int32 term = 1;
inline void PbAppendEntriesRequest::clear_term() {
	term_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesRequest::term() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.term)
	return term_;
}
inline void PbAppendEntriesRequest::set_term(::google::protobuf::int32 value) {

	term_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.term)
}

// string leaderId = 2;
inline void PbAppendEntriesRequest::clear_leaderid() {
	leaderid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline const ::std::string &PbAppendEntriesRequest::leaderid() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.leaderId)
	return leaderid_.GetNoArena();
}

inline void PbAppendEntriesRequest::set_leaderid(const ::std::string &value) {

	leaderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.leaderId)
}

#if LANG_CXX11

inline void PbAppendEntriesRequest::set_leaderid(::std::string &&value) {

	leaderid_.SetNoArena(
			&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:PbAppendEntriesRequest.leaderId)
}

#endif

inline void PbAppendEntriesRequest::set_leaderid(const char *value) {
			GOOGLE_DCHECK(value != NULL);

	leaderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:PbAppendEntriesRequest.leaderId)
}

inline void PbAppendEntriesRequest::set_leaderid(const char *value, size_t size) {

	leaderid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
											 ::std::string(reinterpret_cast<const char *>(value), size));
	// @@protoc_insertion_point(field_set_pointer:PbAppendEntriesRequest.leaderId)
}

inline ::std::string *PbAppendEntriesRequest::mutable_leaderid() {

	// @@protoc_insertion_point(field_mutable:PbAppendEntriesRequest.leaderId)
	return leaderid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline ::std::string *PbAppendEntriesRequest::release_leaderid() {
	// @@protoc_insertion_point(field_release:PbAppendEntriesRequest.leaderId)

	return leaderid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline void PbAppendEntriesRequest::set_allocated_leaderid(::std::string *leaderid) {
	if (leaderid != NULL) {

	} else {

	}
	leaderid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), leaderid);
	// @@protoc_insertion_point(field_set_allocated:PbAppendEntriesRequest.leaderId)
}

// int32 prevLogIndex = 3;
inline void PbAppendEntriesRequest::clear_prevlogindex() {
	prevlogindex_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesRequest::prevlogindex() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.prevLogIndex)
	return prevlogindex_;
}
inline void PbAppendEntriesRequest::set_prevlogindex(::google::protobuf::int32 value) {

	prevlogindex_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.prevLogIndex)
}

// int32 prevLogTerm = 4;
inline void PbAppendEntriesRequest::clear_prevlogterm() {
	prevlogterm_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesRequest::prevlogterm() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.prevLogTerm)
	return prevlogterm_;
}
inline void PbAppendEntriesRequest::set_prevlogterm(::google::protobuf::int32 value) {

	prevlogterm_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.prevLogTerm)
}

// int32 entries = 5;
inline void PbAppendEntriesRequest::clear_entries() {
	entries_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesRequest::entries() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.entries)
	return entries_;
}
inline void PbAppendEntriesRequest::set_entries(::google::protobuf::int32 value) {

	entries_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.entries)
}

// int32 leaderCommit = 6;
inline void PbAppendEntriesRequest::clear_leadercommit() {
	leadercommit_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesRequest::leadercommit() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesRequest.leaderCommit)
	return leadercommit_;
}
inline void PbAppendEntriesRequest::set_leadercommit(::google::protobuf::int32 value) {

	leadercommit_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesRequest.leaderCommit)
}

// -------------------------------------------------------------------

// PbAppendEntriesResponse

// int32 term = 1;
inline void PbAppendEntriesResponse::clear_term() {
	term_ = 0;
}
inline ::google::protobuf::int32 PbAppendEntriesResponse::term() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesResponse.term)
	return term_;
}
inline void PbAppendEntriesResponse::set_term(::google::protobuf::int32 value) {

	term_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesResponse.term)
}

// bool success = 2;
inline void PbAppendEntriesResponse::clear_success() {
	success_ = false;
}
inline bool PbAppendEntriesResponse::success() const {
	// @@protoc_insertion_point(field_get:PbAppendEntriesResponse.success)
	return success_;
}
inline void PbAppendEntriesResponse::set_success(bool value) {

	success_ = value;
	// @@protoc_insertion_point(field_set:PbAppendEntriesResponse.success)
}

// -------------------------------------------------------------------

// PbRequestVoteRequest

// int32 term = 1;
inline void PbRequestVoteRequest::clear_term() {
	term_ = 0;
}
inline ::google::protobuf::int32 PbRequestVoteRequest::term() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteRequest.term)
	return term_;
}
inline void PbRequestVoteRequest::set_term(::google::protobuf::int32 value) {

	term_ = value;
	// @@protoc_insertion_point(field_set:PbRequestVoteRequest.term)
}

// string candidateId = 2;
inline void PbRequestVoteRequest::clear_candidateid() {
	candidateid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline const ::std::string &PbRequestVoteRequest::candidateid() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteRequest.candidateId)
	return candidateid_.GetNoArena();
}

inline void PbRequestVoteRequest::set_candidateid(const ::std::string &value) {

	candidateid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:PbRequestVoteRequest.candidateId)
}

#if LANG_CXX11

inline void PbRequestVoteRequest::set_candidateid(::std::string &&value) {

	candidateid_.SetNoArena(
			&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:PbRequestVoteRequest.candidateId)
}

#endif

inline void PbRequestVoteRequest::set_candidateid(const char *value) {
			GOOGLE_DCHECK(value != NULL);

	candidateid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:PbRequestVoteRequest.candidateId)
}

inline void PbRequestVoteRequest::set_candidateid(const char *value, size_t size) {

	candidateid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
													::std::string(reinterpret_cast<const char *>(value), size));
	// @@protoc_insertion_point(field_set_pointer:PbRequestVoteRequest.candidateId)
}

inline ::std::string *PbRequestVoteRequest::mutable_candidateid() {

	// @@protoc_insertion_point(field_mutable:PbRequestVoteRequest.candidateId)
	return candidateid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline ::std::string *PbRequestVoteRequest::release_candidateid() {
	// @@protoc_insertion_point(field_release:PbRequestVoteRequest.candidateId)

	return candidateid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

inline void PbRequestVoteRequest::set_allocated_candidateid(::std::string *candidateid) {
	if (candidateid != NULL) {

	} else {

	}
	candidateid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), candidateid);
	// @@protoc_insertion_point(field_set_allocated:PbRequestVoteRequest.candidateId)
}

// int32 lastLogIndex = 3;
inline void PbRequestVoteRequest::clear_lastlogindex() {
	lastlogindex_ = 0;
}
inline ::google::protobuf::int32 PbRequestVoteRequest::lastlogindex() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteRequest.lastLogIndex)
	return lastlogindex_;
}
inline void PbRequestVoteRequest::set_lastlogindex(::google::protobuf::int32 value) {

	lastlogindex_ = value;
	// @@protoc_insertion_point(field_set:PbRequestVoteRequest.lastLogIndex)
}

// int32 lastLogTerm = 4;
inline void PbRequestVoteRequest::clear_lastlogterm() {
	lastlogterm_ = 0;
}
inline ::google::protobuf::int32 PbRequestVoteRequest::lastlogterm() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteRequest.lastLogTerm)
	return lastlogterm_;
}
inline void PbRequestVoteRequest::set_lastlogterm(::google::protobuf::int32 value) {

	lastlogterm_ = value;
	// @@protoc_insertion_point(field_set:PbRequestVoteRequest.lastLogTerm)
}

// -------------------------------------------------------------------

// PbRequestVoteResponse

// int32 term = 1;
inline void PbRequestVoteResponse::clear_term() {
	term_ = 0;
}
inline ::google::protobuf::int32 PbRequestVoteResponse::term() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteResponse.term)
	return term_;
}
inline void PbRequestVoteResponse::set_term(::google::protobuf::int32 value) {

	term_ = value;
	// @@protoc_insertion_point(field_set:PbRequestVoteResponse.term)
}

// bool voteGranted = 2;
inline void PbRequestVoteResponse::clear_votegranted() {
	votegranted_ = false;
}
inline bool PbRequestVoteResponse::votegranted() const {
	// @@protoc_insertion_point(field_get:PbRequestVoteResponse.voteGranted)
	return votegranted_;
}
inline void PbRequestVoteResponse::set_votegranted(bool value) {

	votegranted_ = value;
	// @@protoc_insertion_point(field_set:PbRequestVoteResponse.voteGranted)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_raft_5fpeer_2eproto
