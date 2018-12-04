/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __nad_lcm_cu_call_park_info_report_hpp__
#define __nad_lcm_cu_call_park_info_report_hpp__

#include <string>
#include <vector>
#include "nad_lcm/obu_info.hpp"
#include "nad_lcm/route_line_point.hpp"
#include "nad_lcm/key_point_info.hpp"
#include "nad_lcm/obstacle_info.hpp"

namespace nad_lcm
{

/**
 * 每秒上报消息
 *
 */
class cu_call_park_info_report
{
    public:
        int16_t    car_status;

        nad_lcm::obu_info obu;

        std::string obu_color;

        int16_t    cur_point_index;

        int16_t    num_of_point;

        std::vector< nad_lcm::route_line_point > line;

        int16_t    num_of_key;

        std::vector< nad_lcm::key_point_info > key_point;

        int16_t    num_of_obstacle;

        std::vector< nad_lcm::obstacle_info > obstacle;

        int16_t    reserve;

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
         * Returns "cu_call_park_info_report"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int cu_call_park_info_report::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int cu_call_park_info_report::decode(const void *buf, int offset, int maxlen)
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

int cu_call_park_info_report::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t cu_call_park_info_report::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* cu_call_park_info_report::getTypeName()
{
    return "cu_call_park_info_report";
}

int cu_call_park_info_report::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->car_status, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->obu._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    char* obu_color_cstr = (char*) this->obu_color.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &obu_color_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->cur_point_index, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_point, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_point; a0++) {
        tlen = this->line[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_key, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_key; a0++) {
        tlen = this->key_point[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_of_obstacle, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_of_obstacle; a0++) {
        tlen = this->obstacle[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->reserve, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int cu_call_park_info_report::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->car_status, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->obu._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __obu_color_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__obu_color_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__obu_color_len__ > maxlen - pos) return -1;
    this->obu_color.assign(((const char*)buf) + offset + pos, __obu_color_len__ - 1);
    pos += __obu_color_len__;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->cur_point_index, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_point, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->line.resize(this->num_of_point);
    for (int a0 = 0; a0 < this->num_of_point; a0++) {
        tlen = this->line[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_key, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->key_point.resize(this->num_of_key);
    for (int a0 = 0; a0 < this->num_of_key; a0++) {
        tlen = this->key_point[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_of_obstacle, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->obstacle.resize(this->num_of_obstacle);
    for (int a0 = 0; a0 < this->num_of_obstacle; a0++) {
        tlen = this->obstacle[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->reserve, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int cu_call_park_info_report::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    enc_size += this->obu._getEncodedSizeNoHash();
    enc_size += this->obu_color.size() + 4 + 1;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_point; a0++) {
        enc_size += this->line[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_key; a0++) {
        enc_size += this->key_point[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_of_obstacle; a0++) {
        enc_size += this->obstacle[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t cu_call_park_info_report::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == cu_call_park_info_report::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, (void*)cu_call_park_info_report::getHash };

    uint64_t hash = 0x45af18c946cdc692LL +
         nad_lcm::obu_info::_computeHash(&cp) +
         nad_lcm::route_line_point::_computeHash(&cp) +
         nad_lcm::key_point_info::_computeHash(&cp) +
         nad_lcm::obstacle_info::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif