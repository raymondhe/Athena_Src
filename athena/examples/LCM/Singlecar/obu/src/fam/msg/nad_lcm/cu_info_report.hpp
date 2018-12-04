/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __nad_lcm_cu_info_report_hpp__
#define __nad_lcm_cu_info_report_hpp__

#include <string>
#include <vector>
#include "nad_lcm/rsu_info.hpp"
#include "nad_lcm/light_info.hpp"
#include "nad_lcm/limspeed_info.hpp"
#include "nad_lcm/block_info.hpp"
#include "nad_lcm/platoon_info.hpp"
#include "nad_lcm/task_info.hpp"

namespace nad_lcm
{

/// csu->oct：每秒上报obu状态，也起到心跳的作用
class cu_info_report
{
    public:
        double     platoon_speed;

        std::string platoon_destination;

        int16_t    num_of_rsu;

        std::vector< nad_lcm::rsu_info > rsu;

        int16_t    num_of_light;

        std::vector< nad_lcm::light_info > light;

        int16_t    num_of_limspeed;

        std::vector< nad_lcm::limspeed_info > limspeed;

        int16_t    num_of_block;

        std::vector< nad_lcm::block_info > block;

        int16_t    num_of_platoon;

        std::vector< nad_lcm::platoon_info > platoon;

        int16_t    num_of_task;

        std::vector< nad_lcm::task_info > task;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "cu_info_report"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int cu_info_report::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int cu_info_report::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int cu_info_report::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t cu_info_report::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* cu_info_report::getTypeName()
{
    return "cu_info_report";
}

int cu_info_report::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->platoon_speed, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* platoon_destination_cstr = (char*) this->platoon_destination.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &platoon_destination_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_rsu, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_rsu; a0++) {
        tlen = this->rsu[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_light, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_light; a0++) {
        tlen = this->light[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_limspeed, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_limspeed; a0++) {
        tlen = this->limspeed[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_block, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_block; a0++) {
        tlen = this->block[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_platoon, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_platoon; a0++) {
        tlen = this->platoon[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_task, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_task; a0++) {
        tlen = this->task[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int cu_info_report::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->platoon_speed, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __platoon_destination_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__platoon_destination_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__platoon_destination_len__ > maxlen - pos) return -1;
    this->platoon_destination.assign(((const char*)buf) + offset + pos, __platoon_destination_len__ - 1);
    pos += __platoon_destination_len__;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_rsu, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->rsu.resize(this->num_of_rsu);
    for (int a0 = 0; a0 < this->num_of_rsu; a0++) {
        tlen = this->rsu[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_light, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->light.resize(this->num_of_light);
    for (int a0 = 0; a0 < this->num_of_light; a0++) {
        tlen = this->light[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_limspeed, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->limspeed.resize(this->num_of_limspeed);
    for (int a0 = 0; a0 < this->num_of_limspeed; a0++) {
        tlen = this->limspeed[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_block, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->block.resize(this->num_of_block);
    for (int a0 = 0; a0 < this->num_of_block; a0++) {
        tlen = this->block[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_platoon, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->platoon.resize(this->num_of_platoon);
    for (int a0 = 0; a0 < this->num_of_platoon; a0++) {
        tlen = this->platoon[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_task, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->task.resize(this->num_of_task);
    for (int a0 = 0; a0 < this->num_of_task; a0++) {
        tlen = this->task[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int cu_info_report::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += this->platoon_destination.size() + 4 + 1;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_rsu; a0++) {
        enc_size += this->rsu[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_light; a0++) {
        enc_size += this->light[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_limspeed; a0++) {
        enc_size += this->limspeed[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_block; a0++) {
        enc_size += this->block[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_platoon; a0++) {
        enc_size += this->platoon[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_task; a0++) {
        enc_size += this->task[a0]._getEncodedSizeNoHash();
    }
    return enc_size;
}

uint64_t cu_info_report::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == cu_info_report::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, (void*)cu_info_report::getHash };

    uint64_t hash = 0x1a0cfa64e4d4ebadLL +
         nad_lcm::rsu_info::_computeHash(&cp) +
         nad_lcm::light_info::_computeHash(&cp) +
         nad_lcm::limspeed_info::_computeHash(&cp) +
         nad_lcm::block_info::_computeHash(&cp) +
         nad_lcm::platoon_info::_computeHash(&cp) +
         nad_lcm::task_info::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif