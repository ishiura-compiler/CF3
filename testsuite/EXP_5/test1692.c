#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 3U;
volatile uint32_t t2 = 19U;
int64_t x23 = INT64_MAX;
static int32_t x36 = INT32_MIN;
int64_t x38 = -1LL;
static volatile uint8_t x40 = UINT8_MAX;
volatile int32_t x41 = INT32_MAX;
static volatile int64_t t10 = 4LL;
int8_t x63 = INT8_MAX;
static int64_t x76 = INT64_MIN;
volatile int64_t t16 = 408LL;
volatile uint8_t x79 = 3U;
static int16_t x81 = -1;
static uint32_t x95 = 298778U;
uint64_t t22 = 6248404473LLU;
int8_t x102 = INT8_MAX;
int32_t x103 = INT32_MIN;
volatile int32_t x108 = INT32_MAX;
uint64_t t25 = 119312173818264LLU;
static uint64_t t28 = 748LLU;
uint64_t x130 = 516225157LLU;
volatile uint64_t t30 = 1098LLU;
volatile uint16_t x136 = UINT16_MAX;
static int16_t x138 = INT16_MAX;
int32_t x145 = -22594548;
volatile uint64_t x148 = 6365559990738LLU;
int32_t x149 = -587643988;
static int32_t x159 = -1;
uint16_t x169 = 214U;
uint16_t x170 = 7375U;
static int64_t x185 = INT64_MIN;
int8_t x187 = 2;
uint64_t t43 = 1127LLU;
int64_t x198 = -1721053318460499LL;
uint16_t x201 = 881U;
int8_t x203 = -31;
static int32_t x206 = -1;
uint8_t x216 = UINT8_MAX;
volatile int16_t x229 = -24;
uint64_t t51 = 482190580LLU;
int32_t x235 = INT32_MIN;
volatile uint64_t x237 = UINT64_MAX;
int64_t x240 = INT64_MAX;
uint64_t x245 = 1187771022LLU;
volatile uint64_t t55 = 23LLU;
volatile int8_t x252 = -1;
volatile int64_t t56 = 3784810314LL;
volatile uint32_t x259 = 2U;
int8_t x261 = 47;
int16_t x264 = INT16_MIN;
static int32_t x265 = -1494975;
volatile uint64_t x266 = 4917339761459LLU;
static volatile int32_t x267 = 6;
int8_t x271 = -1;
int16_t x275 = INT16_MAX;
static volatile int16_t x278 = -1731;
int64_t x283 = INT64_MIN;
int64_t t63 = -287718570166985987LL;
int16_t x285 = -1;
volatile uint64_t t64 = 311496496948132514LLU;
int16_t x291 = -1;
static int32_t x302 = INT32_MIN;
volatile uint64_t t68 = 112405413773519LLU;
int16_t x313 = INT16_MIN;
volatile uint32_t x320 = 2U;
volatile uint32_t x323 = UINT32_MAX;
int32_t x325 = 2056323;
uint64_t t73 = 664221011LLU;
static volatile int64_t x333 = INT64_MIN;
int64_t x335 = -1LL;
int32_t x336 = -1;
uint32_t t76 = 957U;
uint8_t x341 = 2U;
int32_t x344 = -1;
volatile uint64_t t78 = 6733030203588605694LLU;
volatile uint16_t x349 = 14196U;
int8_t x358 = INT8_MIN;
volatile int32_t x362 = 6;
volatile int64_t x365 = INT64_MIN;
volatile int8_t x376 = INT8_MAX;
static int8_t x377 = -47;
int8_t x379 = -1;
volatile uint32_t x380 = 1U;
int64_t x383 = -1LL;
uint64_t x389 = 362962274LLU;
static int16_t x392 = INT16_MIN;
uint64_t t89 = 1041074779LLU;
volatile uint64_t t90 = 1448LLU;
uint64_t x397 = UINT64_MAX;
volatile uint8_t x404 = 16U;
int32_t x408 = -271;
static uint32_t x409 = UINT32_MAX;
static uint16_t x416 = UINT16_MAX;
static int32_t x421 = -4585;
uint8_t x442 = 87U;
int16_t x443 = INT16_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	static int32_t x2 = 1;
	static int32_t x3 = INT32_MIN;
	static int64_t x4 = INT64_MAX;
	static int64_t t0 = 13324329LL;

	t0 = (x1-((x2&x3)+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	volatile uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 17U;

	t1 = (x5-((x6&x7)+x8));

	if (t1 != 32766U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x10 = 4U;
	uint8_t x11 = 1U;
	int8_t x12 = INT8_MAX;

	t2 = (x9-((x10&x11)+x12));

	if (t2 != 2147483521U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MAX;
	uint64_t x16 = 9777LLU;
	static uint64_t t3 = 7351LLU;

	t3 = (x13-((x14&x15)+x16));

	if (t3 != 18446744073709509071LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint64_t x22 = 2219514LLU;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t4 = 971LLU;

	t4 = (x21-((x22&x23)+x24));

	if (t4 != 18446744073707365125LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int16_t x26 = -430;
	static volatile uint8_t x27 = UINT8_MAX;
	volatile uint32_t x28 = 13U;
	uint32_t t5 = 50U;

	t5 = (x25-((x26&x27)+x28));

	if (t5 != 160U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 7;
	uint8_t x30 = 56U;
	static int64_t x31 = INT64_MAX;
	uint64_t x32 = 463432960027850186LLU;
	volatile uint64_t t6 = 20711250815346LLU;

	t6 = (x29-((x30&x31)+x32));

	if (t6 != 17983311113681701381LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	volatile uint64_t t7 = 104147099LLU;

	t7 = (x33-((x34&x35)+x36));

	if (t7 != 9223372039002292223LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 0;
	volatile int16_t x39 = -1;
	static volatile int64_t t8 = -1676LL;

	t8 = (x37-((x38&x39)+x40));

	if (t8 != -254LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = 2817U;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile uint32_t t9 = 985U;

	t9 = (x41-((x42&x43)+x44));

	if (t9 != 2147483520U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x45 = -14850945923LL;
	int16_t x46 = -1;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;

	t10 = (x45-((x46&x47)+x48));

	if (t10 != -12703462530LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 1545U;
	int32_t x51 = INT32_MIN;
	volatile uint16_t x52 = UINT16_MAX;
	static volatile uint32_t t11 = 60497048U;

	t11 = (x49-((x50&x51)+x52));

	if (t11 != 4294901633U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile int64_t t12 = -7LL;

	t12 = (x53-((x54&x55)+x56));

	if (t12 != -256LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = 5638883U;
	uint64_t x62 = 28157359LLU;
	int64_t x64 = INT64_MAX;
	uint64_t t13 = 214907969219LLU;

	t13 = (x61-((x62&x63)+x64));

	if (t13 != 9223372036860414645LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = 345594U;
	int8_t x68 = INT8_MIN;
	volatile uint32_t t14 = 1U;

	t14 = (x65-((x66&x67)+x68));

	if (t14 != 2147483776U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 0;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 27U;
	uint64_t x72 = 614502840181904LLU;
	volatile uint64_t t15 = 159733LLU;

	t15 = (x69-((x70&x71)+x72));

	if (t15 != 18446129570869369712LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int64_t x75 = -151853755019853LL;

	t16 = (x73-((x74&x75)+x76));

	if (t16 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 0U;
	volatile int8_t x78 = 15;
	int32_t x80 = -1;
	volatile int32_t t17 = 1;

	t17 = (x77-((x78&x79)+x80));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x82 = -240LL;
	static volatile uint16_t x83 = UINT16_MAX;
	uint32_t x84 = UINT32_MAX;
	static volatile int64_t t18 = 82634190LL;

	t18 = (x81-((x82&x83)+x84));

	if (t18 != -4295032592LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -1LL;
	static volatile uint16_t x87 = UINT16_MAX;
	int64_t x88 = 568370645LL;
	static int64_t t19 = -1805273844777LL;

	t19 = (x85-((x86&x87)+x88));

	if (t19 != -2715919828LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	static volatile int16_t x90 = INT16_MIN;
	volatile int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t20 = 437;

	t20 = (x89-((x90&x91)+x92));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	static uint32_t x94 = 110865272U;
	static int64_t x96 = INT64_MIN;
	int64_t t21 = 225154LL;

	t21 = (x93-((x94&x95)+x96));

	if (t21 != 9223372036854707432LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	static volatile uint64_t x98 = 8581518819224LLU;
	static uint16_t x99 = 1024U;
	uint16_t x100 = 47U;

	t22 = (x97-((x98&x99)+x100));

	if (t22 != 9223372036854774737LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	int32_t t23 = 121;

	t23 = (x101-((x102&x103)+x104));

	if (t23 != 2147450880) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 12644U;
	volatile int8_t x106 = -54;
	uint32_t x107 = UINT32_MAX;
	volatile uint32_t t24 = 16891U;

	t24 = (x105-((x106&x107)+x108));

	if (t24 != 2147496347U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	volatile uint64_t x112 = UINT64_MAX;

	t25 = (x109-((x110&x111)+x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = INT64_MIN;
	static int8_t x114 = INT8_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t26 = 149655LLU;

	t26 = (x113-((x114&x115)+x116));

	if (t26 != 9223372032559808641LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = UINT64_MAX;
	static int64_t x118 = 17272245254LL;
	int64_t x119 = INT64_MIN;
	volatile uint64_t x120 = 1LLU;
	uint64_t t27 = 316448190421003LLU;

	t27 = (x117-((x118&x119)+x120));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 199018455842686LLU;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = INT32_MAX;
	volatile uint16_t x124 = 7397U;

	t28 = (x121-((x122&x123)+x124));

	if (t28 != 199018455835034LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = 977;
	static int32_t x127 = INT32_MIN;
	static int16_t x128 = 1;
	int32_t t29 = 152;

	t29 = (x125-((x126&x127)+x128));

	if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -349432LL;
	static int16_t x131 = INT16_MIN;
	int32_t x132 = -1;

	t30 = (x129-((x130&x131)+x132));

	if (t30 != 18446744073193007881LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 1101857878U;
	int8_t x134 = 0;
	static int32_t x135 = -1;
	volatile uint32_t t31 = 456542520U;

	t31 = (x133-((x134&x135)+x136));

	if (t31 != 1101792343U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int16_t x139 = INT16_MAX;
	int32_t x140 = INT32_MIN;
	static int32_t t32 = 62119;

	t32 = (x137-((x138&x139)+x140));

	if (t32 != 2147418113) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	volatile uint64_t t33 = 28993738618511LLU;

	t33 = (x145-((x146&x147)+x148));

	if (t33 != 18446737710274449978LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = -9;
	uint32_t x151 = 1231U;
	int32_t x152 = INT32_MIN;
	uint32_t t34 = 1U;

	t34 = (x149-((x150&x151)+x152));

	if (t34 != 1559838437U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = -51;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = 8678008986LL;
	int64_t t35 = 137607766535LL;

	t35 = (x153-((x154&x155)+x156));

	if (t35 != -6530525211LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t36 = 502058526;

	t36 = (x157-((x158&x159)+x160));

	if (t36 != 98303) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -1LL;
	static int32_t x162 = INT32_MIN;
	static volatile uint32_t x163 = 477U;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t37 = 5679309LLU;

	t37 = (x161-((x162&x163)+x164));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -961;
	uint64_t x166 = 445374LLU;
	int32_t x167 = INT32_MAX;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t38 = 3666595392127LLU;

	t38 = (x165-((x166&x167)+x168));

	if (t38 != 18446744073709105282LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;
	int64_t t39 = 49947421252LL;

	t39 = (x169-((x170&x171)+x172));

	if (t39 != 215LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	volatile int8_t x175 = INT8_MAX;
	static int8_t x176 = -1;
	int64_t t40 = -285944221040118997LL;

	t40 = (x173-((x174&x175)+x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	static int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = 3021291U;
	volatile uint32_t t41 = 2074105U;

	t41 = (x177-((x178&x179)+x180));

	if (t41 != 2144462356U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = 63592LL;
	int64_t x188 = -3618710648331LL;
	volatile int64_t t42 = -10942460LL;

	t42 = (x185-((x186&x187)+x188));

	if (t42 != -9223368418144127477LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 78109507201906LLU;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	int16_t x196 = 0;

	t43 = (x193-((x194&x195)+x196));

	if (t43 != 78109507201906LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = -2;
	uint32_t x199 = 100604486U;
	static int16_t x200 = 1;
	int64_t t44 = 3984180404LL;

	t44 = (x197-((x198&x199)+x200));

	if (t44 != -72354311LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x202 = 0;
	int8_t x204 = INT8_MAX;
	int32_t t45 = -237651776;

	t45 = (x201-((x202&x203)+x204));

	if (t45 != 754) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = INT32_MIN;
	static int16_t x207 = -10611;
	uint8_t x208 = 14U;
	volatile int32_t t46 = 4020;

	t46 = (x205-((x206&x207)+x208));

	if (t46 != -2147473051) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = 398LL;
	volatile int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = 783U;
	volatile int64_t t47 = 0LL;

	t47 = (x209-((x210&x211)+x212));

	if (t47 != -385LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	static uint64_t t48 = 19LLU;

	t48 = (x213-((x214&x215)+x216));

	if (t48 != 18446744071562034946LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -1;
	static int8_t x222 = -1;
	uint32_t x223 = 256804U;
	uint8_t x224 = UINT8_MAX;
	static uint32_t t49 = 613717U;

	t49 = (x221-((x222&x223)+x224));

	if (t49 != 4294710236U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = 26;
	static uint8_t x226 = 0U;
	int16_t x227 = INT16_MAX;
	int64_t x228 = -1LL;
	int64_t t50 = -4173LL;

	t50 = (x225-((x226&x227)+x228));

	if (t50 != 27LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x230 = 0LLU;
	uint16_t x231 = 798U;
	static volatile uint64_t x232 = 19771261LLU;

	t51 = (x229-((x230&x231)+x232));

	if (t51 != 18446744073689780331LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int32_t x234 = -1;
	static volatile uint32_t x236 = UINT32_MAX;
	volatile uint32_t t52 = 22U;

	t52 = (x233-((x234&x235)+x236));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = -1;
	uint64_t t53 = 61723565789237LLU;

	t53 = (x237-((x238&x239)+x240));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x241 = UINT16_MAX;
	volatile int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = 226LL;
	static volatile int64_t t54 = 414488LL;

	t54 = (x241-((x242&x243)+x244));

	if (t54 != 2147548957LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x246 = 22;
	uint32_t x247 = 11431U;
	volatile uint8_t x248 = 1U;

	t55 = (x245-((x246&x247)+x248));

	if (t55 != 1187771015LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = -1LL;
	int64_t x250 = -678726204LL;
	volatile int8_t x251 = -1;

	t56 = (x249-((x250&x251)+x252));

	if (t56 != 678726204LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x257 = 31U;
	volatile int8_t x258 = INT8_MAX;
	int64_t x260 = -778LL;
	static volatile int64_t t57 = 197998289528LL;

	t57 = (x257-((x258&x259)+x260));

	if (t57 != 807LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x262 = INT32_MIN;
	uint16_t x263 = 14214U;
	volatile int32_t t58 = 17777593;

	t58 = (x261-((x262&x263)+x264));

	if (t58 != 32815) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x268 = 13351U;
	volatile uint64_t t59 = 61023920993902116LLU;

	t59 = (x265-((x266&x267)+x268));

	if (t59 != 18446744073708043288LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = -193;
	uint8_t x270 = 48U;
	int32_t x272 = INT32_MIN;
	volatile int32_t t60 = 949229494;

	t60 = (x269-((x270&x271)+x272));

	if (t60 != 2147483407) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = UINT32_MAX;
	static int16_t x276 = 1;
	uint32_t t61 = 33475041U;

	t61 = (x273-((x274&x275)+x276));

	if (t61 != 2147450880U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x279 = 5LL;
	static volatile int32_t x280 = INT32_MIN;
	static int64_t t62 = 4847651851690131LL;

	t62 = (x277-((x278&x279)+x280));

	if (t62 != 6442450938LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = -1;
	int16_t x284 = 888;

	t63 = (x281-((x282&x283)+x284));

	if (t63 != 9223372034707291272LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MAX;
	uint64_t x288 = UINT64_MAX;

	t64 = (x285-((x286&x287)+x288));

	if (t64 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x289 = 10330929LLU;
	uint8_t x290 = UINT8_MAX;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t65 = 203735287990815596LLU;

	t65 = (x289-((x290&x291)+x292));

	if (t65 != 10330802LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -2071LL;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 10;
	uint32_t x296 = 456476U;
	int64_t t66 = 14615LL;

	t66 = (x293-((x294&x295)+x296));

	if (t66 != -458547LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x297 = 507517U;
	int64_t x298 = -1LL;
	volatile uint64_t x299 = 138092LLU;
	volatile int64_t x300 = -501957LL;
	uint64_t t67 = 954768583921LLU;

	t67 = (x297-((x298&x299)+x300));

	if (t67 != 871382LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x301 = UINT64_MAX;
	static int8_t x303 = 0;
	static int32_t x304 = 17;

	t68 = (x301-((x302&x303)+x304));

	if (t68 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x309 = INT8_MIN;
	uint32_t x310 = 57746281U;
	volatile uint32_t x311 = UINT32_MAX;
	volatile int32_t x312 = -120;
	uint32_t t69 = 79241453U;

	t69 = (x309-((x310&x311)+x312));

	if (t69 != 4237221007U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = -1;
	int16_t x315 = -184;
	uint32_t x316 = UINT32_MAX;
	uint32_t t70 = 60U;

	t70 = (x313-((x314&x315)+x316));

	if (t70 != 4294934713U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	uint32_t x318 = 27U;
	volatile int8_t x319 = INT8_MIN;
	uint32_t t71 = 3U;

	t71 = (x317-((x318&x319)+x320));

	if (t71 != 32765U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	int32_t x324 = -1037483779;
	uint32_t t72 = 6994U;

	t72 = (x321-((x322&x323)+x324));

	if (t72 != 3184967299U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x326 = 150161825LLU;
	static int8_t x327 = -7;
	uint64_t x328 = UINT64_MAX;

	t73 = (x325-((x326&x327)+x328));

	if (t73 != 18446744073561446115LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	static int64_t x332 = -1LL;
	static volatile int64_t t74 = 894626453737339906LL;

	t74 = (x329-((x330&x331)+x332));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x334 = -1;
	volatile int64_t t75 = -29742487LL;

	t75 = (x333-((x334&x335)+x336));

	if (t75 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 3815U;
	uint16_t x338 = 5323U;
	int8_t x339 = INT8_MAX;
	uint32_t x340 = UINT32_MAX;

	t76 = (x337-((x338&x339)+x340));

	if (t76 != 3741U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x342 = INT16_MAX;
	uint32_t x343 = 7827U;
	uint32_t t77 = 1878355U;

	t77 = (x341-((x342&x343)+x344));

	if (t77 != 4294959472U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = 66083983731201LLU;
	volatile int8_t x346 = 0;
	int8_t x347 = -1;
	volatile int8_t x348 = INT8_MIN;

	t78 = (x345-((x346&x347)+x348));

	if (t78 != 66083983731329LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x350 = 395846259LLU;
	volatile uint64_t x351 = UINT64_MAX;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t79 = 7LLU;

	t79 = (x349-((x350&x351)+x352));

	if (t79 != 1751651585LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x353 = -1;
	static uint64_t x354 = 301LLU;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 2U;
	static uint64_t t80 = 84373491579801779LLU;

	t80 = (x353-((x354&x355)+x356));

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = INT16_MAX;
	static uint16_t x359 = 2308U;
	static int8_t x360 = -1;
	static int32_t t81 = 281001166;

	t81 = (x357-((x358&x359)+x360));

	if (t81 != 30464) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MAX;
	int64_t x363 = -816466203470LL;
	int16_t x364 = INT16_MAX;
	volatile int64_t t82 = 825839315090182LL;

	t82 = (x361-((x362&x363)+x364));

	if (t82 != 2147450878LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x366 = -7;
	int8_t x367 = 1;
	static uint64_t x368 = UINT64_MAX;
	volatile uint64_t t83 = 60908692632LLU;

	t83 = (x365-((x366&x367)+x368));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x369 = UINT16_MAX;
	static int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MAX;
	static volatile uint32_t x372 = 245175750U;
	int64_t t84 = 412LL;

	t84 = (x369-((x370&x371)+x372));

	if (t84 != -9223372034952402375LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x373 = 83333748666LLU;
	static int8_t x374 = 5;
	int8_t x375 = INT8_MAX;
	uint64_t t85 = 41342982707LLU;

	t85 = (x373-((x374&x375)+x376));

	if (t85 != 83333748534LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x378 = 853;
	static volatile uint32_t t86 = 73954776U;

	t86 = (x377-((x378&x379)+x380));

	if (t86 != 4294966395U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 365274469804232LLU;
	static volatile int32_t x382 = -15609;
	int16_t x384 = 0;
	volatile uint64_t t87 = 94236815LLU;

	t87 = (x381-((x382&x383)+x384));

	if (t87 != 365274469819841LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = 23458626;
	uint16_t x386 = 5U;
	uint8_t x387 = 25U;
	int32_t x388 = -1;
	volatile int32_t t88 = -159;

	t88 = (x385-((x386&x387)+x388));

	if (t88 != 23458626) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x390 = 1612U;
	volatile int32_t x391 = 1275525;

	t89 = (x389-((x390&x391)+x392));

	if (t89 != 362993502LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 0U;
	volatile int64_t x394 = 709155248819LL;
	static uint64_t x395 = UINT64_MAX;
	uint64_t x396 = UINT64_MAX;

	t90 = (x393-((x394&x395)+x396));

	if (t90 != 18446743364554302798LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = 0;
	uint8_t x399 = 22U;
	uint16_t x400 = 100U;
	static uint64_t t91 = 109932160810LLU;

	t91 = (x397-((x398&x399)+x400));

	if (t91 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x401 = 1U;
	volatile int32_t x402 = -86606;
	volatile int32_t x403 = -916;
	int32_t t92 = 57072678;

	t92 = (x401-((x402&x403)+x404));

	if (t92 != 86993) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x405 = UINT8_MAX;
	int32_t x406 = INT32_MAX;
	uint32_t x407 = 1177558U;
	static volatile uint32_t t93 = 53U;

	t93 = (x405-((x406&x407)+x408));

	if (t93 != 4293790264U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x410 = 0;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -207527903;
	static volatile uint32_t t94 = 8U;

	t94 = (x409-((x410&x411)+x412));

	if (t94 != 207527902U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x413 = 444U;
	int16_t x414 = 1;
	static int16_t x415 = INT16_MIN;
	static int32_t t95 = 6945;

	t95 = (x413-((x414&x415)+x416));

	if (t95 != -65091) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x417 = 68U;
	volatile uint32_t x418 = 440U;
	int16_t x419 = INT16_MIN;
	static int16_t x420 = INT16_MAX;
	static uint32_t t96 = 208U;

	t96 = (x417-((x418&x419)+x420));

	if (t96 != 4294934597U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x422 = 40U;
	int32_t x423 = INT32_MIN;
	int32_t x424 = -1;
	volatile int32_t t97 = -68;

	t97 = (x421-((x422&x423)+x424));

	if (t97 != -4584) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MAX;
	volatile uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 30U;
	int32_t x432 = -1;
	static int32_t t98 = -16918;

	t98 = (x429-((x430&x431)+x432));

	if (t98 != 32738) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x441 = INT32_MAX;
	uint32_t x444 = 626967U;
	uint32_t t99 = 7728U;

	t99 = (x441-((x442&x443)+x444));

	if (t99 != 2146856680U) { NG(); } else { ; }
	
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

