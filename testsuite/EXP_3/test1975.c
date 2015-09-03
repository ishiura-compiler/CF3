#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -608290918530734LL;
volatile uint32_t x2 = UINT32_MAX;
static int16_t x4 = INT16_MIN;
static int16_t x29 = INT16_MIN;
uint32_t x35 = UINT32_MAX;
static int8_t x40 = INT8_MIN;
int64_t x43 = INT64_MIN;
static int8_t x50 = -1;
uint8_t x53 = UINT8_MAX;
int32_t x56 = -143680;
uint32_t x57 = 8U;
static volatile int32_t x60 = INT32_MAX;
uint64_t x62 = 254206444LLU;
static volatile uint16_t x69 = 1281U;
int64_t x81 = INT64_MAX;
static uint16_t x90 = 488U;
int16_t x95 = -2765;
volatile int16_t x103 = INT16_MAX;
int16_t x107 = INT16_MIN;
volatile int8_t x111 = INT8_MIN;
volatile int32_t t27 = 16337569;
uint64_t t28 = UINT64_MAX;
static int8_t x124 = 3;
static int64_t x128 = -1606340LL;
int32_t t35 = -1051;
volatile int8_t x145 = 1;
int32_t t36 = -14096121;
static uint32_t x153 = UINT32_MAX;
volatile int32_t t39 = -16675853;
volatile uint32_t t40 = 32357U;
uint8_t x168 = UINT8_MAX;
static int16_t x172 = INT16_MAX;
volatile int32_t x175 = INT32_MAX;
volatile int32_t t43 = INT32_MAX;
int8_t x177 = -6;
int8_t x180 = INT8_MAX;
uint32_t x182 = 1413161U;
static uint8_t x183 = UINT8_MAX;
uint64_t x187 = 10716296LLU;
int8_t x190 = INT8_MIN;
int32_t x192 = -1;
static volatile int64_t t47 = -2646319549071369619LL;
static int32_t x196 = INT32_MIN;
static uint64_t x201 = 33LLU;
static int64_t x204 = INT64_MIN;
int64_t t50 = 63752531754289698LL;
static volatile int32_t t51 = 12609481;
int32_t t52 = 570127663;
uint16_t x217 = UINT16_MAX;
int64_t x219 = INT64_MIN;
static volatile int64_t t54 = -6896672391032LL;
int16_t x224 = INT16_MIN;
int8_t x236 = INT8_MAX;
volatile int32_t x249 = INT32_MAX;
uint64_t x251 = 2407021765593684LLU;
int32_t x252 = INT32_MIN;
volatile uint64_t t62 = 4893823LLU;
int32_t x254 = 1;
int8_t x257 = 0;
static volatile int64_t x260 = INT64_MIN;
int64_t x268 = -85845495959391LL;
volatile uint16_t x269 = UINT16_MAX;
volatile int64_t t67 = -54363LL;
static uint32_t x273 = 63U;
volatile int64_t x276 = INT64_MAX;
static volatile int32_t t69 = INT32_MAX;
uint64_t t70 = 223576258457LLU;
int8_t x285 = INT8_MIN;
int8_t x287 = INT8_MAX;
static int16_t x289 = -1;
int16_t x296 = INT16_MIN;
static int64_t x300 = -1LL;
int16_t x310 = INT16_MAX;
uint32_t x311 = UINT32_MAX;
int32_t x318 = 11;
volatile int64_t x322 = -1LL;
static volatile uint64_t t81 = 8407817122883475LLU;
int8_t x330 = 1;
int64_t x332 = INT64_MIN;
uint16_t x335 = 13608U;
int32_t x337 = INT32_MIN;
static int16_t x338 = 56;
static uint32_t x339 = 116852517U;
uint32_t x344 = UINT32_MAX;
volatile uint64_t x347 = UINT64_MAX;
uint64_t t86 = UINT64_MAX;
uint16_t x359 = 14384U;
volatile int8_t x360 = 2;
int8_t x362 = 0;
uint8_t x363 = 4U;
static uint8_t x366 = UINT8_MAX;
volatile uint64_t t91 = UINT64_MAX;
uint8_t x370 = UINT8_MAX;
uint8_t x374 = 13U;
volatile uint16_t x391 = UINT16_MAX;
volatile uint32_t x394 = 3820852U;
int16_t x396 = INT16_MIN;
static int32_t x397 = INT32_MIN;
uint64_t x398 = 29372863638701883LLU;
int16_t x400 = INT16_MIN;


void f0(void) {
	int16_t x3 = -1;
	volatile int32_t t0 = 57603;

	t0 = ((x1<x2)|(x3|x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	static int16_t x7 = -1675;
	int8_t x8 = -26;
	volatile int32_t t1 = 31950;

	t1 = ((x5<x6)|(x7|x8));

	if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	static int64_t t2 = 18240061890LL;

	t2 = ((x9<x10)|(x11|x12));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -14;
	static int8_t x14 = 0;
	int8_t x15 = INT8_MAX;
	volatile int64_t x16 = 376453914758362472LL;
	int64_t t3 = 867LL;

	t3 = ((x13<x14)|(x15|x16));

	if (t3 != 376453914758362495LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 31;
	volatile int64_t x18 = 3LL;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	static int32_t t4 = 101;

	t4 = ((x17<x18)|(x19|x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MIN;
	volatile int64_t x23 = 110233524LL;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = -32710770LL;

	t5 = ((x21<x22)|(x23|x24));

	if (t5 != -30796LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static volatile int16_t x26 = -1074;
	static uint16_t x27 = UINT16_MAX;
	int16_t x28 = -16320;
	int32_t t6 = -1;

	t6 = ((x25<x26)|(x27|x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 279041;
	static int16_t x31 = 162;
	volatile int8_t x32 = 38;
	static int32_t t7 = -3107;

	t7 = ((x29<x30)|(x31|x32));

	if (t7 != 167) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -4217;
	int32_t x34 = 2267;
	uint16_t x36 = UINT16_MAX;
	uint32_t t8 = UINT32_MAX;

	t8 = ((x33<x34)|(x35|x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 17148643402888LLU;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = 2097;
	int32_t t9 = 7705;

	t9 = ((x37<x38)|(x39|x40));

	if (t9 != -79) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 5483980434220775103LLU;
	int32_t x42 = INT32_MIN;
	int32_t x44 = -173;
	volatile int64_t t10 = -454899574LL;

	t10 = ((x41<x42)|(x43|x44));

	if (t10 != -173LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = -1;
	int16_t x47 = 153;
	uint32_t x48 = 19881702U;
	uint32_t t11 = 4999U;

	t11 = ((x45<x46)|(x47|x48));

	if (t11 != 19881727U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -3462;
	static uint32_t x51 = 392412304U;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 62630926LL;

	t12 = ((x49<x50)|(x51|x52));

	if (t12 != -9223372036462363503LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x53<x54)|(x55|x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MAX;
	int64_t t14 = INT64_MAX;

	t14 = ((x57<x58)|(x59|x60));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = 7;
	volatile int8_t x63 = 2;
	int64_t x64 = -1LL;
	static int64_t t15 = 215999577LL;

	t15 = ((x61<x62)|(x63|x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static uint8_t x66 = 18U;
	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 2LLU;
	static volatile uint64_t t16 = 116452LLU;

	t16 = ((x65<x66)|(x67|x68));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 1U;
	uint32_t x71 = 1U;
	uint64_t x72 = UINT64_MAX;
	static uint64_t t17 = UINT64_MAX;

	t17 = ((x69<x70)|(x71|x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = INT16_MAX;
	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = INT8_MIN;
	volatile int8_t x76 = 2;
	volatile int32_t t18 = -222687;

	t18 = ((x73<x74)|(x75|x76));

	if (t18 != -125) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	int8_t x78 = 2;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t19 = -2187865;

	t19 = ((x77<x78)|(x79|x80));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 24U;
	uint64_t x83 = 15003667865285382LLU;
	int64_t x84 = -4072100569LL;
	uint64_t t20 = 14245LLU;

	t20 = ((x81<x82)|(x83|x84));

	if (t20 != 18446744072324955943LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 0;
	int32_t x86 = 53402;
	volatile int32_t x87 = -280003;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x85<x86)|(x87|x88));

	if (t21 != -262145) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 4941U;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 14664316401470LLU;
	static volatile uint64_t t22 = 62694896547628LLU;

	t22 = ((x89<x90)|(x91|x92));

	if (t22 != 9223386701171177278LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 2364;
	static int32_t x94 = -47;
	int8_t x96 = 5;
	volatile int32_t t23 = -618194;

	t23 = ((x93<x94)|(x95|x96));

	if (t23 != -2761) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = 3;
	static int16_t x100 = 7;
	static volatile int32_t t24 = -46863;

	t24 = ((x97<x98)|(x99|x100));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 15;
	int8_t x102 = 2;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -162LL;

	t25 = ((x101<x102)|(x103|x104));

	if (t25 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = 16;
	uint64_t x106 = 121LLU;
	int32_t x108 = -27949;
	static volatile int32_t t26 = 735327052;

	t26 = ((x105<x106)|(x107|x108));

	if (t26 != -27949) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 70576;
	int8_t x110 = -1;
	uint8_t x112 = 6U;

	t27 = ((x109<x110)|(x111|x112));

	if (t27 != -122) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 17U;
	int64_t x114 = -1LL;
	int32_t x115 = -1;
	volatile uint64_t x116 = 305710344528840LLU;

	t28 = ((x113<x114)|(x115|x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static uint16_t x118 = 54U;
	int64_t x119 = 413370061887469LL;
	int8_t x120 = 31;
	int64_t t29 = 316496366LL;

	t29 = ((x117<x118)|(x119|x120));

	if (t29 != 413370061887487LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = -15;
	volatile int32_t t30 = 174;

	t30 = ((x121<x122)|(x123|x124));

	if (t30 != -13) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;
	static int64_t t31 = 3229050227LL;

	t31 = ((x125<x126)|(x127|x128));

	if (t31 != -708LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = INT8_MIN;
	volatile int32_t x130 = INT32_MIN;
	volatile int16_t x131 = 5;
	uint32_t x132 = 3U;
	volatile uint32_t t32 = 23U;

	t32 = ((x129<x130)|(x131|x132));

	if (t32 != 7U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = INT8_MIN;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = -2;
	uint16_t x136 = 5U;
	volatile int32_t t33 = 61202;

	t33 = ((x133<x134)|(x135|x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	int64_t x139 = -1LL;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -22LL;

	t34 = ((x137<x138)|(x139|x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 6307U;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = -1;
	static volatile int16_t x144 = 18;

	t35 = ((x141<x142)|(x143|x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MAX;
	uint16_t x147 = UINT16_MAX;
	uint8_t x148 = UINT8_MAX;

	t36 = ((x145<x146)|(x147|x148));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	static uint8_t x150 = 0U;
	int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = 63;

	t37 = ((x149<x150)|(x151|x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	int64_t x155 = 981279539598465532LL;
	static volatile int64_t x156 = INT64_MIN;
	static volatile int64_t t38 = -6LL;

	t38 = ((x153<x154)|(x155|x156));

	if (t38 != -8242092497256310276LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 32062011U;
	uint64_t x158 = 119391331727LLU;
	volatile int16_t x159 = -1;
	int8_t x160 = 6;

	t39 = ((x157<x158)|(x159|x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 369U;
	static int8_t x162 = 1;
	uint32_t x163 = 0U;
	static int8_t x164 = INT8_MAX;

	t40 = ((x161<x162)|(x163|x164));

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = -1;
	static volatile int32_t t41 = -865576;

	t41 = ((x165<x166)|(x167|x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint8_t x170 = 1U;
	int32_t x171 = INT32_MIN;
	static volatile int32_t t42 = 51;

	t42 = ((x169<x170)|(x171|x172));

	if (t42 != -2147450881) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -9;
	int8_t x174 = 0;
	uint16_t x176 = 25U;

	t43 = ((x173<x174)|(x175|x176));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = 6;
	int32_t x179 = -23824324;
	int32_t t44 = -93;

	t44 = ((x177<x178)|(x179|x180));

	if (t44 != -23824257) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 6449;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = 11;

	t45 = ((x181<x182)|(x183|x184));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	volatile int16_t x186 = 3210;
	int16_t x188 = 11;
	uint64_t t46 = 8803LLU;

	t46 = ((x185<x186)|(x187|x188));

	if (t46 != 10716299LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -25;
	int64_t x191 = -32615779047561953LL;

	t47 = ((x189<x190)|(x191|x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 4U;
	int8_t x194 = INT8_MAX;
	volatile int64_t x195 = INT64_MIN;
	volatile int64_t t48 = -2LL;

	t48 = ((x193<x194)|(x195|x196));

	if (t48 != -2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = 1LL;
	volatile int16_t x199 = INT16_MIN;
	int8_t x200 = -6;
	static int32_t t49 = -1;

	t49 = ((x197<x198)|(x199|x200));

	if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MAX;
	int64_t x203 = -1LL;

	t50 = ((x201<x202)|(x203|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	int8_t x206 = 52;
	int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;

	t51 = ((x205<x206)|(x207|x208));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int64_t x210 = -1579441486762529LL;
	static int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;

	t52 = ((x209<x210)|(x211|x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int8_t x214 = -1;
	static int16_t x215 = -4;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x213<x214)|(x215|x216));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x218 = -3325473125LL;
	volatile int8_t x220 = 10;

	t54 = ((x217<x218)|(x219|x220));

	if (t54 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	static int8_t x222 = INT8_MIN;
	volatile int8_t x223 = INT8_MIN;
	volatile int32_t t55 = -3;

	t55 = ((x221<x222)|(x223|x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = 263761761LL;
	int64_t t56 = -63LL;

	t56 = ((x225<x226)|(x227|x228));

	if (t56 != 263761919LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	static int8_t x232 = 37;
	int32_t t57 = -1589155;

	t57 = ((x229<x230)|(x231|x232));

	if (t57 != -32731) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = 9245986131LL;
	int8_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 84909831;

	t58 = ((x233<x234)|(x235|x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -278LL;
	volatile int32_t x238 = INT32_MIN;
	int16_t x239 = -1;
	int64_t x240 = INT64_MAX;
	static int64_t t59 = -45346690727274334LL;

	t59 = ((x237<x238)|(x239|x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -14;
	int32_t x242 = -1822;
	uint8_t x243 = 9U;
	int8_t x244 = 0;
	volatile int32_t t60 = 2722;

	t60 = ((x241<x242)|(x243|x244));

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x245 = 19986U;
	uint64_t x246 = 334397LLU;
	int32_t x247 = -61645365;
	static int64_t x248 = INT64_MAX;
	volatile int64_t t61 = -443112LL;

	t61 = ((x245<x246)|(x247|x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 140;

	t62 = ((x249<x250)|(x251|x252));

	if (t62 != 18446744073395898964LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x255 = -5140;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t63 = 1318;

	t63 = ((x253<x254)|(x255|x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = INT8_MAX;
	int32_t x259 = -1;
	static int64_t t64 = -26831581005LL;

	t64 = ((x257<x258)|(x259|x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 55U;
	int16_t x262 = -24;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x261<x262)|(x263|x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 5U;
	uint16_t x266 = 2532U;
	int16_t x267 = -16;
	static int64_t t66 = -50658613710911023LL;

	t66 = ((x265<x266)|(x267|x268));

	if (t66 != -15LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	static int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;

	t67 = ((x269<x270)|(x271|x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x274 = UINT32_MAX;
	volatile int8_t x275 = -9;
	int64_t t68 = -726844224538LL;

	t68 = ((x273<x274)|(x275|x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = 68907645413LL;
	int16_t x278 = -2255;
	static uint8_t x279 = 0U;
	volatile int32_t x280 = INT32_MAX;

	t69 = ((x277<x278)|(x279|x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 894;
	int64_t x282 = -2405271109802728032LL;
	uint64_t x283 = 688230833982LLU;
	volatile int8_t x284 = INT8_MIN;

	t70 = ((x281<x282)|(x283|x284));

	if (t70 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x286 = -6453684482908474LL;
	uint8_t x288 = 0U;
	int32_t t71 = -254168035;

	t71 = ((x285<x286)|(x287|x288));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x290 = UINT64_MAX;
	uint32_t x291 = UINT32_MAX;
	static uint32_t x292 = 1230U;
	uint32_t t72 = UINT32_MAX;

	t72 = ((x289<x290)|(x291|x292));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 0;
	int32_t x294 = INT32_MAX;
	static int16_t x295 = -30;
	static volatile int32_t t73 = -25736865;

	t73 = ((x293<x294)|(x295|x296));

	if (t73 != -29) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int64_t x298 = INT64_MIN;
	static volatile int16_t x299 = -1;
	int64_t t74 = -1255390696296LL;

	t74 = ((x297<x298)|(x299|x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MAX;
	static volatile int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 237624163LL;

	t75 = ((x301<x302)|(x303|x304));

	if (t75 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -22;
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t76 = 335606967638902780LL;

	t76 = ((x305<x306)|(x307|x308));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int32_t x312 = INT32_MAX;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x309<x310)|(x311|x312));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	volatile int8_t x314 = -7;
	static int32_t x315 = INT32_MAX;
	static int8_t x316 = 40;
	volatile int32_t t78 = INT32_MAX;

	t78 = ((x313<x314)|(x315|x316));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int16_t x319 = -1;
	volatile int8_t x320 = -6;
	volatile int32_t t79 = 0;

	t79 = ((x317<x318)|(x319|x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int16_t x323 = -1;
	uint8_t x324 = 1U;
	volatile int32_t t80 = 269;

	t80 = ((x321<x322)|(x323|x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static volatile uint8_t x326 = 50U;
	volatile uint64_t x327 = 976275184913976630LLU;
	uint16_t x328 = 1U;

	t81 = ((x325<x326)|(x327|x328));

	if (t81 != 976275184913976631LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	static uint16_t x331 = UINT16_MAX;
	int64_t t82 = -33627339416919LL;

	t82 = ((x329<x330)|(x331|x332));

	if (t82 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 36U;
	int32_t x334 = -1;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t83 = INT32_MAX;

	t83 = ((x333<x334)|(x335|x336));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x340 = -1LL;
	volatile int64_t t84 = 3700396756LL;

	t84 = ((x337<x338)|(x339|x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 15U;
	int32_t x342 = INT32_MAX;
	volatile int16_t x343 = INT16_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = ((x341<x342)|(x343|x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 70136989390LL;
	int64_t x346 = INT64_MIN;
	int32_t x348 = -1;

	t86 = ((x345<x346)|(x347|x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 36025652375181LLU;
	static uint8_t x350 = UINT8_MAX;
	int32_t x351 = -98;
	volatile int64_t x352 = INT64_MAX;
	int64_t t87 = -53LL;

	t87 = ((x349<x350)|(x351|x352));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 997391117492299558LLU;
	static int64_t x355 = 57615487562LL;
	int64_t x356 = -1LL;
	volatile int64_t t88 = 61LL;

	t88 = ((x353<x354)|(x355|x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 653U;
	volatile int64_t x358 = INT64_MIN;
	int32_t t89 = 0;

	t89 = ((x357<x358)|(x359|x360));

	if (t89 != 14386) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 30;
	int64_t x364 = -1LL;
	volatile int64_t t90 = 30286222340LL;

	t90 = ((x361<x362)|(x363|x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	uint64_t x367 = 111596840881LLU;
	int16_t x368 = -1;

	t91 = ((x365<x366)|(x367|x368));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	uint64_t x371 = UINT64_MAX;
	static uint64_t x372 = 273289501025LLU;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x369<x370)|(x371|x372));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 111781U;
	int8_t x375 = -1;
	static int8_t x376 = INT8_MIN;
	int32_t t93 = 465;

	t93 = ((x373<x374)|(x375|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = INT16_MIN;
	uint8_t x379 = 0U;
	uint8_t x380 = 39U;
	int32_t t94 = -1;

	t94 = ((x377<x378)|(x379|x380));

	if (t94 != 39) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	static int64_t x383 = INT64_MIN;
	int16_t x384 = 1;
	volatile int64_t t95 = 103227933296634416LL;

	t95 = ((x381<x382)|(x383|x384));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	volatile uint64_t x386 = 275911548861533457LLU;
	static int8_t x387 = -6;
	static int32_t x388 = -1;
	volatile int32_t t96 = 6;

	t96 = ((x385<x386)|(x387|x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	volatile int16_t x390 = INT16_MIN;
	static int8_t x392 = INT8_MIN;
	int32_t t97 = 83730746;

	t97 = ((x389<x390)|(x391|x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = 31849;
	uint16_t x395 = UINT16_MAX;
	static volatile int32_t t98 = 11257984;

	t98 = ((x393<x394)|(x395|x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x399 = 2;
	static volatile int32_t t99 = -120756;

	t99 = ((x397<x398)|(x399|x400));

	if (t99 != -32766) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

