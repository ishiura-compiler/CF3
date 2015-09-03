#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile int32_t x8 = INT32_MIN;
uint32_t t1 = 1601325U;
volatile uint32_t x10 = UINT32_MAX;
volatile int8_t x11 = INT8_MIN;
volatile uint32_t t2 = UINT32_MAX;
int64_t x13 = 5LL;
int16_t x14 = INT16_MIN;
static volatile int64_t x15 = -1LL;
int16_t x18 = -439;
int32_t x19 = INT32_MIN;
uint32_t x22 = 18U;
static int64_t x24 = INT64_MIN;
static uint16_t x30 = 30675U;
volatile int64_t t7 = -113181948LL;
volatile int64_t x33 = -2144459733999LL;
volatile int32_t x42 = INT32_MIN;
int64_t x54 = -1LL;
int32_t x55 = -1;
uint8_t x72 = 43U;
uint32_t x73 = 5591405U;
static int16_t x86 = INT16_MAX;
int64_t x89 = -374179959369LL;
static volatile int32_t t20 = -15;
uint16_t x98 = 6482U;
volatile int64_t t22 = 395728665LL;
uint16_t x107 = UINT16_MAX;
int64_t x116 = INT64_MIN;
int64_t x138 = -40142381LL;
int64_t x148 = INT64_MAX;
int16_t x150 = -818;
static volatile int32_t x153 = INT32_MIN;
int32_t t35 = 1;
uint16_t x162 = UINT16_MAX;
uint64_t x166 = 165083437LLU;
uint64_t x168 = 2150LLU;
volatile int64_t t38 = -2869694LL;
static uint64_t x173 = 122857287077948450LLU;
int8_t x174 = INT8_MIN;
int64_t x177 = INT64_MIN;
static uint16_t x185 = 14U;
volatile uint8_t x186 = 101U;
int16_t x187 = INT16_MIN;
int64_t x198 = -3LL;
int8_t x203 = INT8_MAX;
int16_t x205 = 2;
volatile uint16_t x210 = 157U;
volatile uint64_t t49 = 3591557961017LLU;
int8_t x240 = INT8_MIN;
int32_t t52 = 1;
static volatile uint16_t x243 = UINT16_MAX;
volatile int8_t x249 = INT8_MAX;
static volatile int64_t x259 = 782689289366140LL;
int32_t x274 = INT32_MIN;
int64_t x276 = -1LL;
int64_t x277 = 133768LL;
volatile int64_t x280 = INT64_MIN;
static int64_t t59 = -16519449LL;
static uint32_t x282 = 52U;
int32_t x286 = INT32_MAX;
uint16_t x293 = UINT16_MAX;
static volatile uint8_t x298 = UINT8_MAX;
static volatile uint32_t x300 = 42U;
volatile uint8_t x303 = 4U;
uint8_t x306 = 7U;
uint32_t x309 = UINT32_MAX;
uint32_t t67 = 7711U;
static int8_t x322 = -1;
int64_t x323 = 126662LL;
volatile int8_t x327 = INT8_MIN;
volatile int32_t x329 = INT32_MIN;
int64_t x352 = INT64_MAX;
uint64_t x355 = 933681925550LLU;
static int8_t x359 = -1;
static volatile int32_t t78 = 166649830;
uint32_t x369 = 17329U;
int32_t x370 = 41589;
uint64_t x373 = UINT64_MAX;
static int16_t x374 = INT16_MIN;
int16_t x376 = -7686;
uint64_t t82 = 2027685293819772520LLU;
int8_t x377 = INT8_MAX;
uint64_t t84 = 33666136520121406LLU;
int8_t x393 = INT8_MIN;
uint8_t x395 = 12U;
static uint8_t x396 = 122U;
volatile int64_t x400 = -1LL;
volatile uint64_t t87 = 78446386329408078LLU;
uint64_t x403 = 1960750811380LLU;
static uint16_t x404 = 562U;
uint8_t x410 = UINT8_MAX;
static int32_t x415 = INT32_MIN;
uint16_t x422 = 430U;
uint8_t x426 = UINT8_MAX;
int32_t t94 = 298;
int32_t x432 = INT32_MIN;
static volatile uint16_t x438 = 1202U;
int64_t x441 = -1LL;
int64_t x443 = -1LL;
uint64_t x446 = UINT64_MAX;
int16_t x463 = INT16_MIN;


void f0(void) {
	uint32_t x2 = 2133875U;
	int16_t x3 = -1;
	static int32_t x4 = 4072738;
	uint32_t t0 = 1286U;

	t0 = ((x1+x2)^(x3<x4));

	if (t0 != 2133746U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 134192057U;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;

	t1 = ((x5+x6)^(x7<x8));

	if (t1 != 134159289U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint16_t x12 = 7876U;

	t2 = ((x9+x10)^(x11<x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x16 = 15U;
	volatile int64_t t3 = -13588329LL;

	t3 = ((x13+x14)^(x15<x16));

	if (t3 != -32764LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -127;
	int8_t x20 = -4;
	volatile int32_t t4 = -98376;

	t4 = ((x17+x18)^(x19<x20));

	if (t4 != -565) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	volatile uint32_t t5 = 1U;

	t5 = ((x21+x22)^(x23<x24));

	if (t5 != 17U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int64_t x26 = 19300LL;
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int64_t t6 = 1609052LL;

	t6 = ((x25+x26)^(x27<x28));

	if (t6 != 4294986595LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x31 = 13;
	int8_t x32 = 14;

	t7 = ((x29+x30)^(x31<x32));

	if (t7 != -9223372036854745134LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 1;
	volatile int64_t t8 = 0LL;

	t8 = ((x33+x34)^(x35<x36));

	if (t8 != -2144459668463LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = -1;
	int32_t t9 = 730515;

	t9 = ((x37+x38)^(x39<x40));

	if (t9 != -2147483393) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint16_t x43 = 4U;
	int16_t x44 = 11265;
	static uint64_t t10 = 61515154538246LLU;

	t10 = ((x41+x42)^(x43<x44));

	if (t10 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	volatile int8_t x46 = INT8_MIN;
	int8_t x47 = -1;
	uint16_t x48 = 2010U;
	volatile int32_t t11 = 30902899;

	t11 = ((x45+x46)^(x47<x48));

	if (t11 != 2147483518) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x53 = -1;
	int8_t x56 = -1;
	volatile int64_t t12 = 39285232303555LL;

	t12 = ((x53+x54)^(x55<x56));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 1U;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	int32_t x60 = -1;
	int32_t t13 = -182;

	t13 = ((x57+x58)^(x59<x60));

	if (t13 != 65536) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 278912976750566LLU;
	static uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	uint64_t x68 = 14655592LLU;
	static uint64_t t14 = 1064756132557471LLU;

	t14 = ((x65+x66)^(x67<x68));

	if (t14 != 278912976750565LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	uint64_t x70 = 2945230794453LLU;
	int32_t x71 = -1;
	uint64_t t15 = 123882498488006LLU;

	t15 = ((x69+x70)^(x71<x72));

	if (t15 != 2947378278101LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x74 = 7853;
	volatile int16_t x75 = INT16_MIN;
	static volatile uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t16 = 107U;

	t16 = ((x73+x74)^(x75<x76));

	if (t16 != 5599259U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = -7;
	int8_t x80 = INT8_MIN;
	int32_t t17 = 448591;

	t17 = ((x77+x78)^(x79<x80));

	if (t17 != -256) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	int32_t t18 = -448279017;

	t18 = ((x85+x86)^(x87<x88));

	if (t18 != 32639) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x90 = 0U;
	volatile int8_t x91 = INT8_MAX;
	static volatile int16_t x92 = -556;
	volatile int64_t t19 = 93564509980717LL;

	t19 = ((x89+x90)^(x91<x92));

	if (t19 != -374179959369LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -12767;
	static int16_t x94 = 11;
	uint32_t x95 = 3904U;
	int32_t x96 = INT32_MIN;

	t20 = ((x93+x94)^(x95<x96));

	if (t20 != -12755) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	uint32_t x99 = UINT32_MAX;
	uint8_t x100 = 94U;
	int32_t t21 = -5;

	t21 = ((x97+x98)^(x99<x100));

	if (t21 != 6481) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 17U;
	volatile int64_t x102 = INT64_MIN;
	uint16_t x103 = UINT16_MAX;
	static int32_t x104 = 148;

	t22 = ((x101+x102)^(x103<x104));

	if (t22 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = -1;
	uint16_t x106 = 9802U;
	volatile uint16_t x108 = 192U;
	static volatile int32_t t23 = -1;

	t23 = ((x105+x106)^(x107<x108));

	if (t23 != 9801) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -3671LL;
	uint16_t x114 = 11287U;
	int8_t x115 = INT8_MIN;
	static volatile int64_t t24 = 48946851862063LL;

	t24 = ((x113+x114)^(x115<x116));

	if (t24 != 7616LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 915429854U;
	int8_t x118 = -33;
	int16_t x119 = -2393;
	int8_t x120 = 1;
	uint32_t t25 = 90U;

	t25 = ((x117+x118)^(x119<x120));

	if (t25 != 915429820U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 14U;
	int32_t x122 = -1;
	int64_t x123 = 363LL;
	int8_t x124 = -1;
	volatile int32_t t26 = -198220;

	t26 = ((x121+x122)^(x123<x124));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -968;
	volatile int32_t x126 = INT32_MAX;
	int8_t x127 = -1;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t27 = 871016956;

	t27 = ((x125+x126)^(x127<x128));

	if (t27 != 2147482679) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 0U;
	uint64_t x130 = 116925076LLU;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MAX;
	static volatile uint64_t t28 = 2593LLU;

	t28 = ((x129+x130)^(x131<x132));

	if (t28 != 116925077LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = -42;
	static int8_t x134 = -1;
	int8_t x135 = INT8_MAX;
	static int8_t x136 = 0;
	int32_t t29 = -123322964;

	t29 = ((x133+x134)^(x135<x136));

	if (t29 != -43) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -1200LL;
	uint32_t x139 = 99518653U;
	int32_t x140 = -1;
	static int64_t t30 = -54361202LL;

	t30 = ((x137+x138)^(x139<x140));

	if (t30 != -40143582LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -38;
	static volatile int64_t x142 = 1LL;
	int8_t x143 = 1;
	int32_t x144 = INT32_MIN;
	static int64_t t31 = 1839284712LL;

	t31 = ((x141+x142)^(x143<x144));

	if (t31 != -37LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x145 = -1;
	int16_t x146 = INT16_MAX;
	uint8_t x147 = 10U;
	volatile int32_t t32 = -57242;

	t32 = ((x145+x146)^(x147<x148));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	uint8_t x151 = 95U;
	int16_t x152 = 2;
	volatile int32_t t33 = 13;

	t33 = ((x149+x150)^(x151<x152));

	if (t33 != 64717) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MIN;
	volatile int8_t x156 = INT8_MAX;
	static volatile int32_t t34 = 61;

	t34 = ((x153+x154)^(x155<x156));

	if (t34 != -2147483522) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MIN;
	uint16_t x158 = 5846U;
	int8_t x159 = 0;
	uint16_t x160 = UINT16_MAX;

	t35 = ((x157+x158)^(x159<x160));

	if (t35 != -26921) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = 204886854LL;
	static volatile uint32_t x163 = 502U;
	static int32_t x164 = INT32_MAX;
	int64_t t36 = -105445836579LL;

	t36 = ((x161+x162)^(x163<x164));

	if (t36 != 204952388LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = INT8_MAX;
	uint16_t x167 = 553U;
	volatile uint64_t t37 = 583996758LLU;

	t37 = ((x165+x166)^(x167<x168));

	if (t37 != 165083565LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 23626U;
	int64_t x170 = -397047815016LL;
	uint16_t x171 = 15349U;
	int16_t x172 = -113;

	t38 = ((x169+x170)^(x171<x172));

	if (t38 != -397047791390LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x175 = INT32_MIN;
	static int8_t x176 = INT8_MIN;
	volatile uint64_t t39 = 79LLU;

	t39 = ((x173+x174)^(x175<x176));

	if (t39 != 122857287077948323LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = 56045116791LL;
	volatile uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 26524829958897135LLU;
	static int64_t t40 = 7669466LL;

	t40 = ((x177+x178)^(x179<x180));

	if (t40 != -9223371980809659017LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = 1;
	volatile uint32_t x183 = 3U;
	int64_t x184 = INT64_MIN;
	uint64_t t41 = 11591502152LLU;

	t41 = ((x181+x182)^(x183<x184));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x188 = INT32_MIN;
	volatile int32_t t42 = 22;

	t42 = ((x185+x186)^(x187<x188));

	if (t42 != 115) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = -1LL;
	volatile int32_t x190 = -7389;
	static int64_t x191 = 983849LL;
	int32_t x192 = INT32_MIN;
	volatile int64_t t43 = -18923937824774815LL;

	t43 = ((x189+x190)^(x191<x192));

	if (t43 != -7390LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	static uint8_t x196 = 4U;
	uint64_t t44 = 3367226922530232LLU;

	t44 = ((x193+x194)^(x195<x196));

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 13;
	uint8_t x199 = 10U;
	int8_t x200 = INT8_MIN;
	volatile int64_t t45 = 41LL;

	t45 = ((x197+x198)^(x199<x200));

	if (t45 != 10LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 21;
	int32_t x202 = 2;
	int16_t x204 = -1;
	int32_t t46 = -2;

	t46 = ((x201+x202)^(x203<x204));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = UINT16_MAX;
	static uint64_t x207 = UINT64_MAX;
	int8_t x208 = -1;
	volatile int32_t t47 = 1849263;

	t47 = ((x205+x206)^(x207<x208));

	if (t47 != 65537) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	int64_t t48 = 242889911015LL;

	t48 = ((x209+x210)^(x211<x212));

	if (t48 != -9223372036854775652LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 50LLU;
	volatile int16_t x218 = 13916;
	int32_t x219 = 0;
	volatile uint64_t x220 = 8726LLU;

	t49 = ((x217+x218)^(x219<x220));

	if (t49 != 13967LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = 48312U;
	int16_t x223 = -1;
	static int8_t x224 = INT8_MAX;
	volatile int64_t t50 = 174087231750227234LL;

	t50 = ((x221+x222)^(x223<x224));

	if (t50 != -9223372036854727495LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MAX;
	volatile uint32_t t51 = 14U;

	t51 = ((x233+x234)^(x235<x236));

	if (t51 != 4294967167U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x237 = 89U;
	uint8_t x238 = 0U;
	static volatile int64_t x239 = INT64_MIN;

	t52 = ((x237+x238)^(x239<x240));

	if (t52 != 88) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = 0;
	int64_t x242 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	static volatile int64_t t53 = INT64_MIN;

	t53 = ((x241+x242)^(x243<x244));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x250 = -2453703LL;
	static int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MAX;
	volatile int64_t t54 = -1LL;

	t54 = ((x249+x250)^(x251<x252));

	if (t54 != -2453575LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MAX;
	volatile uint32_t x258 = 23U;
	int64_t x260 = INT64_MIN;
	volatile uint32_t t55 = 8816486U;

	t55 = ((x257+x258)^(x259<x260));

	if (t55 != 150U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 10U;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = 0;
	static volatile int32_t t56 = 0;

	t56 = ((x261+x262)^(x263<x264));

	if (t56 != 65545) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	static int32_t x270 = -1;
	volatile uint16_t x271 = 3U;
	volatile int32_t x272 = 15;
	int32_t t57 = 2087036;

	t57 = ((x269+x270)^(x271<x272));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x273 = UINT16_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	int32_t t58 = 98;

	t58 = ((x273+x274)^(x275<x276));

	if (t58 != -2147418113) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x278 = 2;
	volatile int16_t x279 = INT16_MAX;

	t59 = ((x277+x278)^(x279<x280));

	if (t59 != 133770LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x281 = 24545;
	int64_t x283 = INT64_MAX;
	int64_t x284 = INT64_MAX;
	volatile uint32_t t60 = 29663U;

	t60 = ((x281+x282)^(x283<x284));

	if (t60 != 24597U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = INT8_MIN;
	int64_t x287 = 1LL;
	static volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t61 = -11;

	t61 = ((x285+x286)^(x287<x288));

	if (t61 != 2147483519) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = -3;
	uint64_t x290 = 743657LLU;
	static volatile int8_t x291 = INT8_MAX;
	static uint8_t x292 = 15U;
	volatile uint64_t t62 = 255LLU;

	t62 = ((x289+x290)^(x291<x292));

	if (t62 != 743654LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x294 = 4U;
	static volatile int16_t x295 = -1;
	static int16_t x296 = -696;
	int32_t t63 = 57;

	t63 = ((x293+x294)^(x295<x296));

	if (t63 != 65539) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MIN;
	int32_t x299 = -3148;
	volatile int64_t t64 = -1447344249LL;

	t64 = ((x297+x298)^(x299<x300));

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x301 = 43U;
	uint32_t x302 = 2033891U;
	static volatile int8_t x304 = INT8_MIN;
	volatile uint32_t t65 = 36069U;

	t65 = ((x301+x302)^(x303<x304));

	if (t65 != 2033934U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = 2U;
	uint8_t x307 = 3U;
	uint8_t x308 = 14U;
	int32_t t66 = -37;

	t66 = ((x305+x306)^(x307<x308));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x310 = INT8_MIN;
	static volatile int32_t x311 = -1;
	uint16_t x312 = 3U;

	t67 = ((x309+x310)^(x311<x312));

	if (t67 != 4294967166U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x313 = -4LL;
	int16_t x314 = 1476;
	int32_t x315 = INT32_MIN;
	uint16_t x316 = 24184U;
	volatile int64_t t68 = 363206LL;

	t68 = ((x313+x314)^(x315<x316));

	if (t68 != 1473LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x321 = 109688639LLU;
	int64_t x324 = 17818176LL;
	static volatile uint64_t t69 = 17722152471LLU;

	t69 = ((x321+x322)^(x323<x324));

	if (t69 != 109688639LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = 3344522564532163369LLU;
	uint32_t x326 = 224684U;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t70 = 101915441647LLU;

	t70 = ((x325+x326)^(x327<x328));

	if (t70 != 3344522564532388053LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -6;
	uint64_t x332 = 24LLU;
	uint32_t t71 = 366402U;

	t71 = ((x329+x330)^(x331<x332));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x333 = 0;
	int32_t x334 = -201679;
	volatile int64_t x335 = 0LL;
	static int16_t x336 = -1;
	volatile int32_t t72 = 15238;

	t72 = ((x333+x334)^(x335<x336));

	if (t72 != -201679) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 3532329U;
	uint32_t x340 = UINT32_MAX;
	static int32_t t73 = -213411432;

	t73 = ((x337+x338)^(x339<x340));

	if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x341 = INT16_MIN;
	int8_t x342 = 0;
	volatile int8_t x343 = -1;
	volatile uint8_t x344 = 102U;
	static int32_t t74 = -496776;

	t74 = ((x341+x342)^(x343<x344));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = 2006317;
	volatile int32_t x346 = -1;
	int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	int32_t t75 = -8;

	t75 = ((x345+x346)^(x347<x348));

	if (t75 != 2006316) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = 206757;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	static volatile int32_t t76 = 1;

	t76 = ((x349+x350)^(x351<x352));

	if (t76 != -2147276892) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 10U;
	uint32_t x354 = 463529665U;
	uint16_t x356 = UINT16_MAX;
	uint32_t t77 = 347558U;

	t77 = ((x353+x354)^(x355<x356));

	if (t77 != 463529675U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 7196U;
	uint8_t x358 = UINT8_MAX;
	int16_t x360 = -1;

	t78 = ((x357+x358)^(x359<x360));

	if (t78 != 7451) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 4431LLU;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = -9;
	volatile uint64_t t79 = 27286426738LLU;

	t79 = ((x361+x362)^(x363<x364));

	if (t79 != 4431LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x365 = INT16_MIN;
	volatile int64_t x366 = -1LL;
	static int16_t x367 = INT16_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int64_t t80 = -4784040340LL;

	t80 = ((x365+x366)^(x367<x368));

	if (t80 != -32769LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x371 = 17801U;
	volatile int32_t x372 = INT32_MAX;
	static volatile uint32_t t81 = 2U;

	t81 = ((x369+x370)^(x371<x372));

	if (t81 != 58919U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x375 = 119769421937313930LLU;

	t82 = ((x373+x374)^(x375<x376));

	if (t82 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x378 = 845U;
	uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 3953U;
	volatile uint32_t t83 = 5145705U;

	t83 = ((x377+x378)^(x379<x380));

	if (t83 != 972U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MAX;
	uint8_t x383 = 88U;
	int32_t x384 = INT32_MAX;

	t84 = ((x381+x382)^(x383<x384));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x389 = 10U;
	uint32_t x390 = 41U;
	int16_t x391 = -16;
	volatile uint64_t x392 = 104071974882LLU;
	uint32_t t85 = 31738U;

	t85 = ((x389+x390)^(x391<x392));

	if (t85 != 51U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x394 = 6853758U;
	static volatile uint32_t t86 = 22044U;

	t86 = ((x393+x394)^(x395<x396));

	if (t86 != 6853631U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x397 = UINT64_MAX;
	uint8_t x398 = UINT8_MAX;
	static int64_t x399 = -275757634171339LL;

	t87 = ((x397+x398)^(x399<x400));

	if (t87 != 255LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x401 = 610U;
	volatile int8_t x402 = 0;
	static volatile int32_t t88 = 17382;

	t88 = ((x401+x402)^(x403<x404));

	if (t88 != 610) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 6359102U;
	static uint32_t x406 = 12U;
	static int16_t x407 = INT16_MIN;
	uint32_t x408 = 213661347U;
	static volatile uint32_t t89 = 2249047U;

	t89 = ((x405+x406)^(x407<x408));

	if (t89 != 6359114U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x411 = -54;
	int64_t x412 = -3LL;
	int32_t t90 = -483;

	t90 = ((x409+x410)^(x411<x412));

	if (t90 != 511) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 1230891LLU;
	volatile uint64_t x414 = 4519910986421392LLU;
	uint64_t x416 = 4357584671LLU;
	static volatile uint64_t t91 = 7463303414LLU;

	t91 = ((x413+x414)^(x415<x416));

	if (t91 != 4519910987652283LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = -1;
	int32_t x418 = INT32_MAX;
	static uint32_t x419 = 508U;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t92 = INT32_MAX;

	t92 = ((x417+x418)^(x419<x420));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int16_t x423 = INT16_MAX;
	static uint32_t x424 = 2749U;
	uint32_t t93 = 267U;

	t93 = ((x421+x422)^(x423<x424));

	if (t93 != 429U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	int64_t x427 = -1LL;
	int32_t x428 = -61;

	t94 = ((x425+x426)^(x427<x428));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x429 = 5157U;
	static int32_t x430 = -1;
	int16_t x431 = INT16_MIN;
	volatile int32_t t95 = -15;

	t95 = ((x429+x430)^(x431<x432));

	if (t95 != 5156) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = 3U;
	int32_t x439 = 31140501;
	volatile int16_t x440 = -1;
	static volatile int32_t t96 = 374234003;

	t96 = ((x437+x438)^(x439<x440));

	if (t96 != 1205) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x442 = INT16_MAX;
	int64_t x444 = -1LL;
	volatile int64_t t97 = -82614804382468385LL;

	t97 = ((x441+x442)^(x443<x444));

	if (t97 != 32766LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = 0;
	static int32_t x447 = INT32_MAX;
	uint16_t x448 = 11127U;
	static volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x445+x446)^(x447<x448));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x461 = INT32_MAX;
	static int64_t x462 = 405LL;
	int64_t x464 = INT64_MAX;
	static int64_t t99 = -8101LL;

	t99 = ((x461+x462)^(x463<x464));

	if (t99 != 2147484053LL) { NG(); } else { ; }
	
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

