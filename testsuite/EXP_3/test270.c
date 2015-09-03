#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x13 = UINT32_MAX;
volatile int32_t t3 = -452253214;
uint16_t x23 = 2776U;
int8_t x26 = -1;
static int8_t x28 = INT8_MIN;
volatile int32_t t5 = 115218657;
int32_t t7 = 15259;
int8_t x40 = 3;
int16_t x45 = -1;
uint32_t x53 = 12U;
uint64_t x54 = 1335926516901966LLU;
int16_t x56 = INT16_MAX;
volatile int8_t x66 = INT8_MIN;
int64_t x72 = INT64_MIN;
static int32_t x86 = -1;
volatile int32_t t19 = 63362080;
volatile int8_t x98 = -7;
static uint64_t x100 = 1793074912675557LLU;
uint32_t x112 = 51U;
int64_t x114 = 80LL;
uint16_t x115 = 216U;
volatile int8_t x118 = INT8_MAX;
int64_t x120 = -62LL;
int16_t x123 = -8;
uint32_t x127 = 350337U;
uint8_t x128 = UINT8_MAX;
int8_t x130 = INT8_MIN;
uint64_t x135 = 6587415442409LLU;
uint16_t x140 = UINT16_MAX;
int32_t t32 = 55;
int8_t x142 = -1;
volatile int32_t t38 = 38271980;
volatile int32_t x177 = -445534;
int32_t t40 = 55;
volatile int64_t x181 = 295334324LL;
volatile int32_t t41 = -209634565;
volatile int32_t t42 = 2;
volatile int8_t x193 = INT8_MAX;
int16_t x194 = -2;
int32_t t43 = -523;
volatile int32_t t44 = 2071;
static uint8_t x202 = UINT8_MAX;
static uint16_t x213 = 113U;
int16_t x227 = -1;
static volatile int8_t x229 = INT8_MAX;
int32_t x230 = INT32_MAX;
int32_t x235 = INT32_MAX;
uint16_t x243 = 7U;
uint16_t x249 = 5U;
static uint8_t x256 = UINT8_MAX;
uint16_t x263 = 15909U;
int32_t t59 = 508;
uint64_t x266 = UINT64_MAX;
int32_t t60 = 521952;
int8_t x269 = -1;
static int8_t x273 = INT8_MIN;
volatile int8_t x280 = -27;
volatile int16_t x282 = INT16_MIN;
uint64_t x286 = 20602726986257358LLU;
int16_t x287 = INT16_MAX;
volatile int16_t x290 = -1;
static volatile int16_t x291 = INT16_MIN;
uint16_t x292 = 829U;
int8_t x321 = 55;
uint8_t x327 = 12U;
static int8_t x330 = INT8_MAX;
volatile int8_t x335 = INT8_MIN;
int64_t x343 = INT64_MIN;
int32_t t77 = 58;
volatile int16_t x348 = INT16_MIN;
int32_t t79 = 6;
int8_t x360 = -63;
uint64_t x362 = UINT64_MAX;
int32_t x363 = -1;
int32_t t84 = -61;
volatile uint32_t x379 = UINT32_MAX;
static volatile uint32_t x382 = UINT32_MAX;
static volatile int32_t t86 = 58713;
uint64_t x394 = 76969434541636LLU;
int64_t x401 = INT64_MIN;
int32_t x404 = -1;
volatile int32_t t92 = 0;
uint8_t x438 = 11U;
volatile int32_t t96 = -204;
static volatile int64_t x443 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = 6U;
	static int64_t x3 = -117533921026147531LL;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = 1;

	t0 = ((x1==x2)<=(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 496U;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	static int32_t t1 = -247131;

	t1 = ((x9==x10)<=(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = -440123;

	t2 = ((x13==x14)<=(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	int8_t x18 = -13;
	volatile int8_t x19 = -1;
	int32_t x20 = INT32_MIN;

	t3 = ((x17==x18)<=(x19-x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 35;
	static int16_t x22 = -9959;
	int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 3083617;

	t4 = ((x21==x22)<=(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 9U;
	uint64_t x27 = 10LLU;

	t5 = ((x25==x26)<=(x27-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int32_t x30 = INT32_MAX;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 129;

	t6 = ((x29==x30)<=(x31-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static uint8_t x34 = UINT8_MAX;
	int64_t x35 = 7348740395LL;
	uint8_t x36 = 0U;

	t7 = ((x33==x34)<=(x35-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -2080;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	volatile int32_t t8 = -248208;

	t8 = ((x37==x38)<=(x39-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 439U;
	int16_t x42 = -1;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t9 = -256;

	t9 = ((x41==x42)<=(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	static int8_t x48 = INT8_MAX;
	int32_t t10 = -46;

	t10 = ((x45==x46)<=(x47-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 714U;
	static uint8_t x50 = UINT8_MAX;
	volatile int8_t x51 = -1;
	uint8_t x52 = 5U;
	int32_t t11 = 323250;

	t11 = ((x49==x50)<=(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x55 = -1;
	int32_t t12 = 1645;

	t12 = ((x53==x54)<=(x55-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 1521371324U;
	static uint8_t x62 = 0U;
	int8_t x63 = INT8_MIN;
	static volatile int64_t x64 = -1LL;
	static int32_t t13 = -179;

	t13 = ((x61==x62)<=(x63-x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 3912U;
	volatile uint32_t x67 = 23809324U;
	uint64_t x68 = UINT64_MAX;
	static int32_t t14 = 1317;

	t14 = ((x65==x66)<=(x67-x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = 0;
	volatile uint64_t x70 = UINT64_MAX;
	static volatile int64_t x71 = INT64_MIN;
	volatile int32_t t15 = 0;

	t15 = ((x69==x70)<=(x71-x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t16 = -33;

	t16 = ((x73==x74)<=(x75-x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x77 = 27U;
	uint16_t x78 = 121U;
	uint16_t x79 = 69U;
	int64_t x80 = 388LL;
	int32_t t17 = -437579;

	t17 = ((x77==x78)<=(x79-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 133766562U;
	uint8_t x84 = 24U;
	int32_t t18 = 54;

	t18 = ((x81==x82)<=(x83-x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = -1LL;
	volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;

	t19 = ((x85==x86)<=(x87-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 31274LLU;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	static int64_t x92 = -1LL;
	int32_t t20 = -54612504;

	t20 = ((x89==x90)<=(x91-x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MAX;
	static volatile uint16_t x96 = 96U;
	volatile int32_t t21 = 3309434;

	t21 = ((x93==x94)<=(x95-x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 116064508U;
	static uint32_t x99 = 499626494U;
	int32_t t22 = -33;

	t22 = ((x97==x98)<=(x99-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int32_t x102 = -17559413;
	static int8_t x103 = -1;
	uint8_t x104 = 13U;
	static volatile int32_t t23 = 63;

	t23 = ((x101==x102)<=(x103-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int8_t x106 = -1;
	int16_t x107 = -4;
	int32_t x108 = -6;
	int32_t t24 = 224142;

	t24 = ((x105==x106)<=(x107-x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	uint8_t x110 = 1U;
	int64_t x111 = -3666LL;
	volatile int32_t t25 = 64;

	t25 = ((x109==x110)<=(x111-x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = INT16_MAX;
	int8_t x116 = -1;
	static int32_t t26 = 30296052;

	t26 = ((x113==x114)<=(x115-x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	static uint64_t x119 = UINT64_MAX;
	static int32_t t27 = 890208;

	t27 = ((x117==x118)<=(x119-x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = 861;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t28 = -2681728;

	t28 = ((x121==x122)<=(x123-x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -7524;
	int32_t x126 = INT32_MIN;
	int32_t t29 = -18617;

	t29 = ((x125==x126)<=(x127-x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 3U;
	static uint8_t x131 = 51U;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t30 = -54;

	t30 = ((x129==x130)<=(x131-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x133 = 6U;
	volatile int32_t x134 = INT32_MIN;
	static int16_t x136 = INT16_MIN;
	int32_t t31 = 1913;

	t31 = ((x133==x134)<=(x135-x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 531U;
	volatile uint8_t x138 = 54U;
	uint16_t x139 = UINT16_MAX;

	t32 = ((x137==x138)<=(x139-x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	uint8_t x143 = 50U;
	int64_t x144 = INT64_MAX;
	volatile int32_t t33 = -1;

	t33 = ((x141==x142)<=(x143-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 91U;
	int32_t x146 = INT32_MAX;
	volatile int64_t x147 = -692064058LL;
	int32_t x148 = -513;
	static int32_t t34 = 11800;

	t34 = ((x145==x146)<=(x147-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	volatile int8_t x150 = -1;
	volatile int8_t x151 = 0;
	int16_t x152 = -1;
	volatile int32_t t35 = 129466;

	t35 = ((x149==x150)<=(x151-x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = INT32_MIN;
	int16_t x154 = -1;
	static int32_t x155 = -1;
	int64_t x156 = -1LL;
	volatile int32_t t36 = 769097568;

	t36 = ((x153==x154)<=(x155-x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = 10421;
	uint32_t x162 = 0U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	static int32_t t37 = -22;

	t37 = ((x161==x162)<=(x163-x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	static uint8_t x167 = 0U;
	int8_t x168 = -4;

	t38 = ((x165==x166)<=(x167-x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 64792591785183951LLU;
	static int16_t x170 = INT16_MAX;
	uint64_t x171 = 114403898536893LLU;
	int16_t x172 = INT16_MAX;
	volatile int32_t t39 = -91;

	t39 = ((x169==x170)<=(x171-x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x178 = -5;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 69;

	t40 = ((x177==x178)<=(x179-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 8470943225436803LLU;
	uint32_t x184 = 442260U;

	t41 = ((x181==x182)<=(x183-x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 7041;
	int8_t x186 = -1;
	volatile uint64_t x187 = UINT64_MAX;
	uint16_t x188 = UINT16_MAX;

	t42 = ((x185==x186)<=(x187-x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x195 = -1;
	int32_t x196 = -1;

	t43 = ((x193==x194)<=(x195-x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	int16_t x198 = -1;
	static int32_t x199 = INT32_MIN;
	int16_t x200 = -6656;

	t44 = ((x197==x198)<=(x199-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	static uint8_t x203 = 0U;
	static uint32_t x204 = UINT32_MAX;
	volatile int32_t t45 = 54799211;

	t45 = ((x201==x202)<=(x203-x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = INT32_MAX;
	volatile int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int32_t t46 = 0;

	t46 = ((x205==x206)<=(x207-x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -1;
	int16_t x210 = -5;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t47 = -9401;

	t47 = ((x209==x210)<=(x211-x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = -1;
	int8_t x215 = INT8_MIN;
	static volatile int8_t x216 = INT8_MIN;
	int32_t t48 = -163017596;

	t48 = ((x213==x214)<=(x215-x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x217 = 0U;
	uint32_t x218 = 190102U;
	uint8_t x219 = 7U;
	int8_t x220 = -3;
	int32_t t49 = -2034;

	t49 = ((x217==x218)<=(x219-x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x221 = 48952757U;
	volatile int8_t x222 = 9;
	uint64_t x223 = 1385868LLU;
	int32_t x224 = 377259;
	int32_t t50 = -17131;

	t50 = ((x221==x222)<=(x223-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -1LL;
	int16_t x226 = INT16_MAX;
	volatile int64_t x228 = INT64_MIN;
	int32_t t51 = 7449487;

	t51 = ((x225==x226)<=(x227-x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t52 = -179;

	t52 = ((x229==x230)<=(x231-x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = 11;
	int16_t x234 = -1;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t53 = 246;

	t53 = ((x233==x234)<=(x235-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -1;
	volatile int16_t x238 = 11;
	int16_t x239 = -61;
	int8_t x240 = INT8_MAX;
	static int32_t t54 = 182649337;

	t54 = ((x237==x238)<=(x239-x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	int8_t x244 = INT8_MIN;
	int32_t t55 = -21132;

	t55 = ((x241==x242)<=(x243-x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x250 = 2U;
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MAX;
	volatile int32_t t56 = -481822827;

	t56 = ((x249==x250)<=(x251-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = 40843498;
	static uint32_t x255 = 2U;
	static volatile int32_t t57 = -13605155;

	t57 = ((x253==x254)<=(x255-x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 12U;
	volatile int64_t x258 = -1LL;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	static int32_t t58 = -20942521;

	t58 = ((x257==x258)<=(x259-x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = 14012U;
	uint32_t x262 = 153952U;
	int16_t x264 = INT16_MAX;

	t59 = ((x261==x262)<=(x263-x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = INT8_MIN;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;

	t60 = ((x265==x266)<=(x267-x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x270 = UINT64_MAX;
	volatile uint64_t x271 = 107355020LLU;
	static uint16_t x272 = UINT16_MAX;
	int32_t t61 = -6735648;

	t61 = ((x269==x270)<=(x271-x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x274 = INT32_MAX;
	uint16_t x275 = 2U;
	static uint32_t x276 = 18377088U;
	int32_t t62 = 14;

	t62 = ((x273==x274)<=(x275-x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = 363563239364675634LLU;
	volatile int32_t x278 = -1;
	volatile int8_t x279 = INT8_MIN;
	int32_t t63 = 24735;

	t63 = ((x277==x278)<=(x279-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = 578U;
	volatile int32_t x283 = INT32_MIN;
	static uint32_t x284 = 649683U;
	volatile int32_t t64 = 0;

	t64 = ((x281==x282)<=(x283-x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = -1;
	static int16_t x288 = -1;
	volatile int32_t t65 = -890441;

	t65 = ((x285==x286)<=(x287-x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	static int32_t t66 = -364;

	t66 = ((x289==x290)<=(x291-x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = 59230;
	int64_t x294 = 34LL;
	static int64_t x295 = -76442011LL;
	int16_t x296 = INT16_MIN;
	volatile int32_t t67 = -26525;

	t67 = ((x293==x294)<=(x295-x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x305 = 0U;
	int32_t x306 = INT32_MAX;
	int8_t x307 = -1;
	int64_t x308 = 13930016230LL;
	int32_t t68 = -24156;

	t68 = ((x305==x306)<=(x307-x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = UINT32_MAX;
	static int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t69 = -3;

	t69 = ((x309==x310)<=(x311-x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = INT32_MIN;
	static int16_t x314 = INT16_MAX;
	volatile uint64_t x315 = 68101976LLU;
	volatile int8_t x316 = 2;
	int32_t t70 = 74990220;

	t70 = ((x313==x314)<=(x315-x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x317 = INT16_MIN;
	static uint16_t x318 = 2U;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	static int32_t t71 = -455957234;

	t71 = ((x317==x318)<=(x319-x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 14U;
	static uint8_t x324 = 4U;
	int32_t t72 = -13;

	t72 = ((x321==x322)<=(x323-x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x325 = 68U;
	int16_t x326 = INT16_MIN;
	int8_t x328 = -1;
	int32_t t73 = 253001;

	t73 = ((x325==x326)<=(x327-x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	volatile uint32_t x331 = 309253U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t74 = -1119;

	t74 = ((x329==x330)<=(x331-x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	uint8_t x336 = 23U;
	int32_t t75 = 177596789;

	t75 = ((x333==x334)<=(x335-x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 16U;
	volatile int32_t x338 = INT32_MAX;
	volatile int32_t x339 = -59984389;
	volatile int64_t x340 = 253758059LL;
	int32_t t76 = 76365326;

	t76 = ((x337==x338)<=(x339-x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = -82925606056LL;
	int16_t x342 = INT16_MIN;
	int8_t x344 = -1;

	t77 = ((x341==x342)<=(x343-x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = 13U;
	int8_t x346 = INT8_MIN;
	int32_t x347 = 6396281;
	volatile int32_t t78 = -7408655;

	t78 = ((x345==x346)<=(x347-x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = 467;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 64LLU;

	t79 = ((x349==x350)<=(x351-x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile int32_t x354 = INT32_MIN;
	uint8_t x355 = 66U;
	uint8_t x356 = 43U;
	int32_t t80 = -54689;

	t80 = ((x353==x354)<=(x355-x356));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = -1;
	uint8_t x358 = 1U;
	int16_t x359 = -1;
	static volatile int32_t t81 = 1;

	t81 = ((x357==x358)<=(x359-x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MIN;
	int8_t x364 = -25;
	int32_t t82 = -138151503;

	t82 = ((x361==x362)<=(x363-x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	static int32_t x366 = INT32_MIN;
	uint32_t x367 = 10701U;
	uint8_t x368 = 30U;
	volatile int32_t t83 = 662561;

	t83 = ((x365==x366)<=(x367-x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -7LL;
	volatile uint32_t x374 = 1469982745U;
	int64_t x375 = 15852760098LL;
	static int16_t x376 = INT16_MIN;

	t84 = ((x373==x374)<=(x375-x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = INT64_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t85 = 936;

	t85 = ((x377==x378)<=(x379-x380));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -1;
	volatile int32_t x383 = -12584;
	int8_t x384 = 0;

	t86 = ((x381==x382)<=(x383-x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = 22;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -2;
	volatile int32_t t87 = -9696;

	t87 = ((x385==x386)<=(x387-x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = 21;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = -15836205438LL;
	int32_t t88 = -9539906;

	t88 = ((x389==x390)<=(x391-x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t89 = -27630;

	t89 = ((x393==x394)<=(x395-x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 285U;
	int64_t x399 = INT64_MIN;
	static int32_t x400 = -16;
	static int32_t t90 = 70;

	t90 = ((x397==x398)<=(x399-x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x402 = 1U;
	uint32_t x403 = 76720U;
	int32_t t91 = 0;

	t91 = ((x401==x402)<=(x403-x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = 11;
	uint32_t x414 = 252268592U;
	int32_t x415 = -16;
	volatile int8_t x416 = -3;

	t92 = ((x413==x414)<=(x415-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x417 = 3086LLU;
	uint8_t x418 = 2U;
	uint64_t x419 = 2207169548731LLU;
	volatile int64_t x420 = -1LL;
	volatile int32_t t93 = 187053998;

	t93 = ((x417==x418)<=(x419-x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = 117580;
	uint32_t x422 = 5U;
	uint32_t x423 = 2084905U;
	int32_t x424 = -1;
	volatile int32_t t94 = -5;

	t94 = ((x421==x422)<=(x423-x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x429 = 30859U;
	volatile int16_t x430 = -1;
	int16_t x431 = INT16_MAX;
	int64_t x432 = 397782296LL;
	volatile int32_t t95 = -12267;

	t95 = ((x429==x430)<=(x431-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = 703919820;
	uint32_t x439 = 1U;
	uint8_t x440 = 0U;

	t96 = ((x437==x438)<=(x439-x440));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -65362395LL;
	int64_t x442 = 0LL;
	int8_t x444 = -9;
	int32_t t97 = -243345961;

	t97 = ((x441==x442)<=(x443-x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x445 = UINT32_MAX;
	uint8_t x446 = 46U;
	uint16_t x447 = UINT16_MAX;
	int32_t x448 = -4923642;
	int32_t t98 = 13;

	t98 = ((x445==x446)<=(x447-x448));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = 2U;
	int32_t t99 = 213203;

	t99 = ((x449==x450)<=(x451-x452));

	if (t99 != 0) { NG(); } else { ; }
	
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

