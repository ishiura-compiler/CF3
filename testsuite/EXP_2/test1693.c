#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -150790877;
int32_t t1 = -45173;
int64_t x9 = -1LL;
volatile int64_t t2 = -22LL;
volatile int32_t x15 = 147475502;
int32_t t3 = -25549228;
int64_t t4 = 64199LL;
int32_t x25 = INT32_MIN;
uint16_t x27 = UINT16_MAX;
static int8_t x28 = 1;
static int8_t x33 = INT8_MIN;
static volatile uint32_t t6 = 14963900U;
int16_t x58 = -1;
volatile int8_t x65 = INT8_MIN;
volatile uint32_t x67 = 685950081U;
volatile int64_t x72 = -4124564580854LL;
uint64_t x83 = 365603735LLU;
int16_t x103 = 1;
static uint16_t x111 = UINT16_MAX;
uint8_t x118 = UINT8_MAX;
static volatile int32_t x126 = INT32_MIN;
uint64_t x144 = 20574LLU;
uint16_t x146 = UINT16_MAX;
static volatile uint32_t x147 = UINT32_MAX;
uint32_t x164 = UINT32_MAX;
int32_t x171 = 7;
static volatile int64_t t32 = 20866LL;
static int64_t x173 = -43018750LL;
int8_t x175 = INT8_MIN;
int32_t x181 = 33495364;
int64_t x183 = -1LL;
int8_t x193 = INT8_MIN;
volatile uint64_t t36 = 50685973665413LLU;
int64_t x198 = -1LL;
volatile int64_t t38 = -2LL;
uint16_t x210 = UINT16_MAX;
uint16_t x230 = 637U;
int64_t x232 = 1LL;
int32_t x237 = INT32_MIN;
static volatile uint32_t x238 = 151228198U;
uint32_t t44 = 0U;
int16_t x249 = -770;
static uint64_t x250 = 496227845150LLU;
static volatile uint64_t t45 = 1294117867597365960LLU;
volatile int32_t t46 = INT32_MAX;
static int8_t x257 = -1;
volatile int32_t t47 = -165;
uint16_t x265 = 17337U;
volatile uint64_t t49 = 289994419LLU;
int32_t t50 = -44753992;
int32_t x277 = -1;
volatile int32_t t53 = 931;
uint32_t t55 = 754949853U;
static int8_t x313 = 1;
int64_t x320 = -2886303650LL;
int64_t t61 = -3LL;
static int8_t x343 = INT8_MAX;
uint32_t x344 = 1U;
volatile uint64_t x345 = 7761233341601630LLU;
volatile uint64_t x355 = 13251LLU;
int8_t x357 = INT8_MIN;
volatile uint16_t x358 = UINT16_MAX;
int16_t x368 = -1;
uint8_t x374 = 11U;
int8_t x378 = INT8_MIN;
static volatile int16_t x379 = -1;
uint64_t x380 = UINT64_MAX;
volatile uint32_t x405 = 1U;
int8_t x416 = -1;
uint64_t t76 = 3455LLU;
static int8_t x419 = INT8_MAX;
int64_t x423 = 76688790739LL;
uint8_t x430 = 39U;
uint8_t x449 = 3U;
uint16_t x452 = 6U;
uint16_t x455 = 1U;
uint16_t x468 = 19U;
int16_t x472 = INT16_MIN;
int16_t x486 = INT16_MAX;
volatile int32_t x492 = 47;
int32_t x495 = -38070;
uint8_t x496 = 1U;
volatile int8_t x508 = 0;
volatile int64_t t94 = 6776720705LL;
static int16_t x515 = 1;
uint8_t x519 = 18U;
int16_t x520 = INT16_MAX;
static uint16_t x527 = 246U;
int64_t x528 = 4223LL;
int64_t x534 = -1LL;
int32_t x536 = INT32_MAX;
static int64_t t98 = -49535717LL;


void f0(void) {
	static volatile int32_t x1 = -154236;
	uint64_t x2 = 95815183809LLU;
	static int16_t x4 = 31;
	uint64_t t0 = 2540610627LLU;

	t0 = ((x1+(x2&x3))*x4);

	if (t0 != 2966095765019LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 88U;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 10847;

	t1 = ((x5+(x6&x7))*x8);

	if (t1 != 954536) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 11U;
	int16_t x11 = 2;
	static volatile uint8_t x12 = 0U;

	t2 = ((x9+(x10&x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	int8_t x14 = -1;
	int32_t x16 = -1;

	t3 = ((x13+(x14&x15))*x16);

	if (t3 != -147475507) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 33U;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	static int16_t x24 = 35;

	t4 = ((x21+(x22&x23))*x24);

	if (t4 != 1155LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MAX;
	int32_t t5 = -5091284;

	t5 = ((x25+(x26&x27))*x28);

	if (t5 != -2147483521) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x34 = 1;
	volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = UINT32_MAX;

	t6 = ((x33+(x34&x35))*x36);

	if (t6 != 127U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 173U;
	volatile int16_t x38 = -1;
	static uint16_t x39 = 16U;
	volatile int16_t x40 = 12;
	int32_t t7 = 320204217;

	t7 = ((x37+(x38&x39))*x40);

	if (t7 != 2268) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	int64_t x42 = 235267LL;
	static int8_t x43 = INT8_MAX;
	static int32_t x44 = INT32_MAX;
	volatile int64_t t8 = -47LL;

	t8 = ((x41+(x42&x43))*x44);

	if (t8 != 4294967294LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MAX;
	static int8_t x46 = INT8_MAX;
	int8_t x47 = -3;
	int8_t x48 = INT8_MAX;
	int32_t t9 = 2751183;

	t9 = ((x45+(x46&x47))*x48);

	if (t9 != 4177284) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -166;
	static int64_t x55 = -193480991530399974LL;
	volatile uint64_t x56 = 301762388872LLU;
	volatile uint64_t t10 = 37259LLU;

	t10 = ((x53+(x54&x55))*x56);

	if (t10 != 13632034623028375624LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 7493U;
	uint32_t t11 = 108515788U;

	t11 = ((x57+(x58&x59))*x60);

	if (t11 != 4050388283U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x66 = 3909350102054770497LLU;
	static uint8_t x68 = 79U;
	uint64_t t12 = 10701LLU;

	t12 = ((x65+(x66&x67))*x68);

	if (t12 != 665359567LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	static int8_t x70 = INT8_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile int64_t t13 = 114LL;

	t13 = ((x69+(x70&x71))*x72);

	if (t13 != -269775395539917578LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MAX;
	int16_t x75 = -1;
	uint16_t x76 = 2705U;
	volatile int32_t t14 = -10523;

	t14 = ((x73+(x74&x75))*x76);

	if (t14 != 177615710) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -2209;
	static int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = 13U;
	int8_t x80 = INT8_MIN;
	int32_t t15 = -2;

	t15 = ((x77+(x78&x79))*x80);

	if (t15 != 282752) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x81 = UINT64_MAX;
	volatile int32_t x82 = -1;
	volatile uint8_t x84 = 24U;
	uint64_t t16 = 73LLU;

	t16 = ((x81+(x82&x83))*x84);

	if (t16 != 8774489616LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 35;
	volatile uint64_t x86 = 8301305239204LLU;
	static int16_t x87 = -1689;
	uint64_t x88 = 62063LLU;
	volatile uint64_t t17 = 4677600091795157331LLU;

	t17 = ((x85+(x86&x87))*x88);

	if (t17 != 515203906959617225LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 77003624;
	static uint32_t x98 = 1358755U;
	static volatile int32_t x99 = INT32_MIN;
	int64_t x100 = -1LL;
	static int64_t t18 = -72826199151LL;

	t18 = ((x97+(x98&x99))*x100);

	if (t18 != -77003624LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = -805023704027LL;
	uint64_t x102 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x101+(x102&x103))*x104);

	if (t19 != 26379016733523968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = 8;
	volatile int32_t x107 = -5798791;
	static volatile int32_t x108 = -1;
	int64_t t20 = 2LL;

	t20 = ((x105+(x106&x107))*x108);

	if (t20 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	static int64_t x110 = INT64_MAX;
	uint16_t x112 = 4832U;
	volatile int64_t t21 = 1224505521470960490LL;

	t21 = ((x109+(x110&x111))*x112);

	if (t21 != 10376957647424LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t22 = 29142;

	t22 = ((x117+(x118&x119))*x120);

	if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x121 = 1289485U;
	int8_t x122 = INT8_MAX;
	uint16_t x123 = 463U;
	static int8_t x124 = 61;
	uint32_t t23 = 52338175U;

	t23 = ((x121+(x122&x123))*x124);

	if (t23 != 78663404U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 4355738969329273791LLU;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t24 = 11338183716496LLU;

	t24 = ((x125+(x126&x127))*x128);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	static uint16_t x131 = UINT16_MAX;
	int8_t x132 = 3;
	int64_t t25 = 2537LL;

	t25 = ((x129+(x130&x131))*x132);

	if (t25 != -6442254339LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	int64_t x135 = -1LL;
	static volatile int8_t x136 = INT8_MAX;
	volatile int64_t t26 = 110620428350156340LL;

	t26 = ((x133+(x134&x135))*x136);

	if (t26 != 545460846338LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = 1;
	uint32_t x138 = 77083U;
	uint32_t x139 = 1538544663U;
	static uint8_t x140 = UINT8_MAX;
	uint32_t t27 = 222U;

	t27 = ((x137+(x138&x139))*x140);

	if (t27 != 266220U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 510561149LLU;
	int32_t x143 = INT32_MAX;
	static volatile uint64_t t28 = 75279LLU;

	t28 = ((x141+(x142&x143))*x144);

	if (t28 != 10503610910694LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = 2;
	static volatile uint32_t x148 = UINT32_MAX;
	uint32_t t29 = 837418981U;

	t29 = ((x145+(x146&x147))*x148);

	if (t29 != 4294901759U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 4370U;
	int16_t x150 = 8;
	uint8_t x151 = 0U;
	uint8_t x152 = UINT8_MAX;
	uint32_t t30 = 41U;

	t30 = ((x149+(x150&x151))*x152);

	if (t30 != 1114350U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile uint32_t t31 = 5U;

	t31 = ((x161+(x162&x163))*x164);

	if (t31 != 4294901762U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -1LL;
	uint16_t x170 = 2660U;
	int8_t x172 = -1;

	t32 = ((x169+(x170&x171))*x172);

	if (t32 != -3LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x174 = INT16_MIN;
	volatile uint16_t x176 = UINT16_MAX;
	int64_t t33 = 545544286963LL;

	t33 = ((x173+(x174&x175))*x176);

	if (t33 != -2821381232130LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x182 = 4U;
	int32_t x184 = INT32_MIN;
	volatile int64_t t34 = -465614LL;

	t34 = ((x181+(x182&x183))*x184);

	if (t34 != -71930755063742464LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = 95U;
	uint64_t x190 = 72754180733760427LLU;
	int16_t x191 = 47;
	int8_t x192 = 4;
	volatile uint64_t t35 = 5534500138149LLU;

	t35 = ((x189+(x190&x191))*x192);

	if (t35 != 552LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x195 = 1;
	uint16_t x196 = UINT16_MAX;

	t36 = ((x193+(x194&x195))*x196);

	if (t36 != 18446744073701228671LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x197 = 3601U;
	uint64_t x199 = 1724672885LLU;
	volatile uint16_t x200 = 2629U;
	volatile uint64_t t37 = 268LLU;

	t37 = ((x197+(x198&x199))*x200);

	if (t37 != 4534174481694LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = -1LL;
	int64_t x202 = -12950230763LL;
	int16_t x203 = -14160;
	static int8_t x204 = INT8_MIN;

	t38 = ((x201+(x202&x203))*x204);

	if (t38 != 1657630619776LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MIN;
	static uint32_t x207 = 50343U;
	int32_t x208 = 3188118;
	uint32_t t39 = 267U;

	t39 = ((x205+(x206&x207))*x208);

	if (t39 != 2774882922U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = 1;
	int32_t x211 = -1;
	uint8_t x212 = 13U;
	int32_t t40 = -1454315;

	t40 = ((x209+(x210&x211))*x212);

	if (t40 != 851968) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x217 = 12540U;
	uint8_t x218 = 30U;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	uint64_t t41 = 13772LLU;

	t41 = ((x217+(x218&x219))*x220);

	if (t41 != 1596390LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x221 = -43;
	uint16_t x222 = UINT16_MAX;
	static int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t42 = -1;

	t42 = ((x221+(x222&x223))*x224);

	if (t42 != -2146041856) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x229 = -5756LL;
	uint64_t x231 = 365243LLU;
	uint64_t t43 = 603283969907195LLU;

	t43 = ((x229+(x230&x231))*x232);

	if (t43 != 18446744073709546429LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x239 = UINT16_MAX;
	volatile int8_t x240 = INT8_MAX;

	t44 = ((x237+(x238&x239))*x240);

	if (t44 != 2152137690U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x251 = -1;
	int32_t x252 = -1;

	t45 = ((x249+(x250&x251))*x252);

	if (t45 != 18446743577481707236LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x253 = 1U;
	static volatile int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	static volatile int16_t x256 = -1;

	t46 = ((x253+(x254&x255))*x256);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x258 = -1;
	int8_t x259 = -1;
	volatile int32_t x260 = -1;

	t47 = ((x257+(x258&x259))*x260);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x261 = 612U;
	static int8_t x262 = -1;
	int8_t x263 = 53;
	int16_t x264 = INT16_MIN;
	volatile uint32_t t48 = 1001U;

	t48 = ((x261+(x262&x263))*x264);

	if (t48 != 4273176576U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x266 = 7480629LLU;
	uint64_t x267 = UINT64_MAX;
	uint64_t x268 = UINT64_MAX;

	t49 = ((x265+(x266&x267))*x268);

	if (t49 != 18446744073702053650LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x269 = INT8_MAX;
	int16_t x270 = INT16_MIN;
	volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = 5U;

	t50 = ((x269+(x270&x271))*x272);

	if (t50 != -163205) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = 10366U;
	uint16_t x274 = 3543U;
	static volatile int16_t x275 = 38;
	int8_t x276 = INT8_MIN;
	int32_t t51 = 6745227;

	t51 = ((x273+(x274&x275))*x276);

	if (t51 != -1327616) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 5U;
	int32_t t52 = 810420;

	t52 = ((x277+(x278&x279))*x280);

	if (t52 != -5) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x281 = INT16_MAX;
	uint8_t x282 = 1U;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;

	t53 = ((x281+(x282&x283))*x284);

	if (t53 != -4194304) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x285 = -1LL;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = 1045U;
	static int64_t t54 = -114884149283172477LL;

	t54 = ((x285+(x286&x287))*x288);

	if (t54 != -1045LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = -39;
	static volatile uint32_t x295 = UINT32_MAX;
	uint16_t x296 = UINT16_MAX;

	t55 = ((x293+(x294&x295))*x296);

	if (t55 != 4284022951U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = 8444281709345LLU;
	uint16_t x304 = 18637U;
	uint64_t t56 = 135572991489LLU;

	t56 = ((x301+(x302&x303))*x304);

	if (t56 != 157449115909732147LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x314 = 46U;
	uint64_t x315 = 12488LLU;
	uint64_t x316 = 459476591716LLU;
	uint64_t t57 = 0LLU;

	t57 = ((x313+(x314&x315))*x316);

	if (t57 != 4135289325444LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x317 = 430;
	volatile int8_t x318 = INT8_MIN;
	static int64_t x319 = -1LL;
	int64_t t58 = -275910848202108LL;

	t58 = ((x317+(x318&x319))*x320);

	if (t58 != -871663702300LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = -237606859LL;
	uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 1U;
	int32_t x324 = -12491716;
	int64_t t59 = -31683994579LL;

	t59 = ((x321+(x322&x323))*x324);

	if (t59 != 2968117389788328LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x325 = -1LL;
	static int8_t x326 = INT8_MIN;
	int8_t x327 = 35;
	static volatile int64_t x328 = 284707930640832007LL;
	int64_t t60 = -17641LL;

	t60 = ((x325+(x326&x327))*x328);

	if (t60 != -284707930640832007LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = INT64_MAX;
	volatile uint16_t x334 = 3163U;
	volatile int16_t x335 = INT16_MIN;
	static volatile int32_t x336 = -1;

	t61 = ((x333+(x334&x335))*x336);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x337 = INT32_MIN;
	static int32_t x338 = 2692;
	uint64_t x339 = UINT64_MAX;
	volatile uint16_t x340 = 13190U;
	volatile uint64_t t62 = 202LLU;

	t62 = ((x337+(x338&x339))*x340);

	if (t62 != 18446715748435741976LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 6747363LLU;
	static int8_t x342 = -1;
	volatile uint64_t t63 = 36766355468755611LLU;

	t63 = ((x341+(x342&x343))*x344);

	if (t63 != 6747490LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x346 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -40;
	volatile uint64_t t64 = 13517748373489LLU;

	t64 = ((x345+(x346&x347))*x348);

	if (t64 != 18136294740045486416LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = -100;
	uint32_t x351 = 7824U;
	uint16_t x352 = UINT16_MAX;
	uint32_t t65 = 206U;

	t65 = ((x349+(x350&x351))*x352);

	if (t65 != 512614769U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x353 = 3546451560953374LLU;
	static int32_t x354 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	uint64_t t66 = 86067838509LLU;

	t66 = ((x353+(x354&x355))*x356);

	if (t66 != 12917083766212493312LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x359 = INT32_MIN;
	static int32_t x360 = -20;
	int32_t t67 = -28338;

	t67 = ((x357+(x358&x359))*x360);

	if (t67 != 2560) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x365 = 7;
	static int8_t x366 = -17;
	static int32_t x367 = INT32_MIN;
	volatile int32_t t68 = 279535936;

	t68 = ((x365+(x366&x367))*x368);

	if (t68 != 2147483641) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int32_t x375 = -1;
	int8_t x376 = -4;
	uint32_t t69 = 579111U;

	t69 = ((x373+(x374&x375))*x376);

	if (t69 != 4294967256U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x377 = -1;
	uint64_t t70 = 14LLU;

	t70 = ((x377+(x378&x379))*x380);

	if (t70 != 129LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x381 = 0LLU;
	uint8_t x382 = 1U;
	uint16_t x383 = 196U;
	int8_t x384 = 5;
	uint64_t t71 = 1320518LLU;

	t71 = ((x381+(x382&x383))*x384);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x385 = 0U;
	uint64_t x386 = 809800536619LLU;
	volatile int16_t x387 = 4;
	int16_t x388 = INT16_MAX;
	static uint64_t t72 = 15LLU;

	t72 = ((x385+(x386&x387))*x388);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x389 = INT64_MIN;
	static volatile uint32_t x390 = 12U;
	volatile uint64_t x391 = UINT64_MAX;
	static int32_t x392 = -1;
	uint64_t t73 = 995892688460015LLU;

	t73 = ((x389+(x390&x391))*x392);

	if (t73 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x401 = 539;
	volatile int16_t x402 = 1;
	int64_t x403 = -1LL;
	int64_t x404 = -1LL;
	static volatile int64_t t74 = -16867019124123LL;

	t74 = ((x401+(x402&x403))*x404);

	if (t74 != -540LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x406 = 13;
	int64_t x407 = 1LL;
	int8_t x408 = INT8_MAX;
	volatile int64_t t75 = -1LL;

	t75 = ((x405+(x406&x407))*x408);

	if (t75 != 254LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	uint64_t x415 = 31627088694661225LLU;

	t76 = ((x413+(x414&x415))*x416);

	if (t76 != 18446744073709531031LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x417 = INT8_MAX;
	volatile int32_t x418 = -1;
	int16_t x420 = -1;
	volatile int32_t t77 = -97;

	t77 = ((x417+(x418&x419))*x420);

	if (t77 != -254) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x421 = INT32_MIN;
	static volatile uint8_t x422 = 58U;
	static uint8_t x424 = 3U;
	volatile int64_t t78 = 916691604848LL;

	t78 = ((x421+(x422&x423))*x424);

	if (t78 != -6442450890LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = INT16_MAX;
	static int16_t x431 = INT16_MAX;
	uint16_t x432 = 1375U;
	volatile int32_t t79 = 265164489;

	t79 = ((x429+(x430&x431))*x432);

	if (t79 != 45108250) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x433 = 25503035331LLU;
	int64_t x434 = -230690138004LL;
	int32_t x435 = -3373;
	static int32_t x436 = INT32_MAX;
	static volatile uint64_t t80 = 5LLU;

	t80 = ((x433+(x434&x435))*x436);

	if (t80 != 2085905710915960829LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x437 = 31211505;
	int32_t x438 = INT32_MIN;
	int16_t x439 = -1;
	static uint64_t x440 = UINT64_MAX;
	uint64_t t81 = 23786LLU;

	t81 = ((x437+(x438&x439))*x440);

	if (t81 != 2116272143LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x445 = INT32_MIN;
	uint16_t x446 = 1U;
	int64_t x447 = -1LL;
	volatile int8_t x448 = INT8_MIN;
	static int64_t t82 = 154LL;

	t82 = ((x445+(x446&x447))*x448);

	if (t82 != 274877906816LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = -1;
	uint32_t t83 = 120996U;

	t83 = ((x449+(x450&x451))*x452);

	if (t83 != 12U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = INT32_MIN;
	volatile uint64_t x454 = UINT64_MAX;
	int16_t x456 = INT16_MAX;
	volatile uint64_t t84 = 919340LLU;

	t84 = ((x453+(x454&x455))*x456);

	if (t84 != 18446673707112890367LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x461 = -1;
	int16_t x462 = INT16_MAX;
	int64_t x463 = INT64_MIN;
	uint64_t x464 = 212848LLU;
	uint64_t t85 = 31244759838LLU;

	t85 = ((x461+(x462&x463))*x464);

	if (t85 != 18446744073709338768LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x465 = -1;
	volatile uint16_t x466 = UINT16_MAX;
	static int8_t x467 = -1;
	static volatile int32_t t86 = -124830;

	t86 = ((x465+(x466&x467))*x468);

	if (t86 != 1245146) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x469 = INT32_MAX;
	volatile int64_t x470 = -1LL;
	int32_t x471 = INT32_MIN;
	volatile int64_t t87 = -13LL;

	t87 = ((x469+(x470&x471))*x472);

	if (t87 != 32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x473 = -57583970;
	static int16_t x474 = 2;
	uint16_t x475 = 4U;
	uint64_t x476 = 217729677144155970LLU;
	uint64_t t88 = 1LLU;

	t88 = ((x473+(x474&x475))*x476);

	if (t88 != 14688031629023700668LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x477 = -1023805319498LL;
	int64_t x478 = 66286809171019177LL;
	int64_t x479 = INT64_MIN;
	uint8_t x480 = 57U;
	int64_t t89 = 886LL;

	t89 = ((x477+(x478&x479))*x480);

	if (t89 != -58356903211386LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x485 = INT16_MAX;
	uint32_t x487 = 11012U;
	uint64_t x488 = UINT64_MAX;
	static volatile uint64_t t90 = 91LLU;

	t90 = ((x485+(x486&x487))*x488);

	if (t90 != 18446744073709507837LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x489 = -250;
	int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MIN;
	volatile int32_t t91 = -11735269;

	t91 = ((x489+(x490&x491))*x492);

	if (t91 != -1551846) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x493 = UINT8_MAX;
	uint16_t x494 = UINT16_MAX;
	volatile int32_t t92 = -3;

	t92 = ((x493+(x494&x495))*x496);

	if (t92 != 27721) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x497 = 6350058463661LLU;
	int8_t x498 = INT8_MIN;
	volatile int16_t x499 = 43;
	static int8_t x500 = INT8_MAX;
	uint64_t t93 = 39515383578096LLU;

	t93 = ((x497+(x498&x499))*x500);

	if (t93 != 806457424884947LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x505 = 7LL;
	volatile int8_t x506 = -1;
	int32_t x507 = INT32_MAX;

	t94 = ((x505+(x506&x507))*x508);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x513 = 91692636LL;
	volatile uint8_t x514 = 29U;
	int32_t x516 = -1;
	int64_t t95 = 56250902713LL;

	t95 = ((x513+(x514&x515))*x516);

	if (t95 != -91692637LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x517 = UINT8_MAX;
	volatile int16_t x518 = INT16_MIN;
	int32_t t96 = -61;

	t96 = ((x517+(x518&x519))*x520);

	if (t96 != 8355585) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x525 = UINT8_MAX;
	uint16_t x526 = 3U;
	static volatile int64_t t97 = 5663975228440LL;

	t97 = ((x525+(x526&x527))*x528);

	if (t97 != 1085311LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x533 = 20U;
	int16_t x535 = -110;

	t98 = ((x533+(x534&x535))*x536);

	if (t98 != -193273528230LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x537 = 271U;
	static int8_t x538 = INT8_MIN;
	int32_t x539 = -27;
	int16_t x540 = -1912;
	int32_t t99 = 34988597;

	t99 = ((x537+(x538&x539))*x540);

	if (t99 != -273416) { NG(); } else { ; }
	
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

