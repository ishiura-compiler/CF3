#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x3 = -5641;
volatile int32_t x8 = INT32_MIN;
volatile int64_t t1 = INT64_MIN;
int8_t x10 = INT8_MIN;
static int16_t x13 = -1;
volatile int32_t x23 = 4748;
int64_t x42 = 1334LL;
volatile int16_t x45 = 31;
int64_t x49 = INT64_MIN;
uint32_t x50 = UINT32_MAX;
static uint64_t x54 = 312623956639LLU;
int16_t x56 = 1;
uint16_t x58 = UINT16_MAX;
volatile uint32_t x74 = 2U;
volatile uint16_t x78 = 173U;
volatile int32_t t20 = 1742965;
uint64_t x94 = UINT64_MAX;
volatile uint16_t x98 = 9U;
int64_t x107 = 3147LL;
uint32_t x116 = UINT32_MAX;
int32_t t29 = 836192443;
uint16_t x121 = UINT16_MAX;
static uint8_t x123 = UINT8_MAX;
volatile uint16_t x124 = UINT16_MAX;
static int32_t t31 = -920036;
int64_t x136 = INT64_MIN;
volatile int16_t x141 = 12410;
volatile uint16_t x145 = UINT16_MAX;
int8_t x148 = -4;
uint64_t x152 = 21365496780621LLU;
int32_t t37 = 5;
int8_t x153 = INT8_MIN;
volatile int8_t x160 = -14;
uint32_t x168 = UINT32_MAX;
static int16_t x171 = -1;
static uint16_t x172 = 295U;
uint16_t x173 = 3940U;
static int32_t x176 = INT32_MAX;
int16_t x178 = -510;
static int32_t t44 = INT32_MIN;
static int64_t x189 = -755074994382LL;
int64_t t47 = 113825649468624742LL;
static volatile int8_t x195 = 2;
static int16_t x196 = -5216;
int16_t x202 = INT16_MAX;
volatile uint64_t x203 = UINT64_MAX;
int32_t x204 = INT32_MIN;
int32_t x207 = INT32_MAX;
volatile uint16_t x212 = 1619U;
volatile int32_t t54 = -55378;
volatile int32_t x226 = -13402837;
volatile int32_t t59 = 1;
int8_t x242 = -5;
uint64_t x246 = UINT64_MAX;
int16_t x248 = 6219;
uint16_t x249 = UINT16_MAX;
static volatile uint8_t x255 = UINT8_MAX;
int32_t t63 = -1;
static int64_t x260 = 12LL;
static volatile int32_t t64 = -5;
static int16_t x262 = -1;
int32_t t65 = 8137;
uint8_t x269 = UINT8_MAX;
int16_t x270 = 0;
uint16_t x272 = 2389U;
volatile int64_t x273 = INT64_MAX;
static volatile int64_t t68 = -1937995829834LL;
static int8_t x279 = INT8_MIN;
static int32_t t69 = -16079;
static int8_t x282 = 9;
int64_t x284 = -54430LL;
int64_t x285 = INT64_MAX;
static int32_t x287 = INT32_MIN;
volatile int32_t t72 = -612;
int8_t x295 = INT8_MIN;
uint64_t x300 = 4LLU;
volatile int16_t x309 = INT16_MAX;
int8_t x314 = INT8_MIN;
uint8_t x316 = UINT8_MAX;
int8_t x322 = INT8_MIN;
int16_t x330 = INT16_MAX;
int8_t x338 = INT8_MIN;
int8_t x339 = -16;
uint8_t x340 = UINT8_MAX;
int32_t x346 = -1;
int32_t t86 = 615238361;
int64_t x356 = -1LL;
int32_t t88 = -115;
int32_t x360 = INT32_MIN;
volatile int32_t x369 = -1;
int8_t x381 = -1;
int16_t x390 = INT16_MIN;
uint64_t t97 = 105464690817LLU;
volatile int64_t t99 = -5LL;


void f0(void) {
	int32_t x1 = 14436100;
	volatile int64_t x4 = -1456747031986914938LL;
	volatile int32_t t0 = -4220773;

	t0 = (x1^((x2<=x3)<=x4));

	if (t0 != 14436100) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 11U;

	t1 = (x5^((x6<=x7)<=x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x11 = -9216916;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MAX;

	t2 = (x9^((x10<=x11)<=x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 1245U;
	int32_t t3 = 33613814;

	t3 = (x13^((x14<=x15)<=x16));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 841117050031923545LLU;
	static int64_t x18 = 1808235703LL;
	int64_t x19 = INT64_MIN;
	volatile int64_t x20 = -1LL;
	static uint64_t t4 = 213964182198669LLU;

	t4 = (x17^((x18<=x19)<=x20));

	if (t4 != 841117050031923545LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static volatile int64_t x22 = INT64_MIN;
	volatile int8_t x24 = -17;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21^((x22<=x23)<=x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = INT8_MIN;
	volatile int16_t x27 = 2982;
	int32_t x28 = -1;
	volatile int32_t t6 = 9;

	t6 = (x25^((x26<=x27)<=x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = 0;
	volatile uint32_t x31 = 48261U;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x29^((x30<=x31)<=x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 79940346;
	static volatile int32_t x34 = 809574;
	int8_t x35 = 3;
	int64_t x36 = -1LL;
	volatile int32_t t8 = 76;

	t8 = (x33^((x34<=x35)<=x36));

	if (t8 != 79940346) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 244;
	int64_t x38 = -1LL;
	static uint32_t x39 = 444834U;
	uint32_t x40 = 912U;
	volatile int32_t t9 = 13;

	t9 = (x37^((x38<=x39)<=x40));

	if (t9 != 245) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int8_t x43 = INT8_MIN;
	uint32_t x44 = 53795U;
	volatile int64_t t10 = 62300359277LL;

	t10 = (x41^((x42<=x43)<=x44));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x46 = UINT16_MAX;
	uint64_t x47 = 99750839139425LLU;
	static int8_t x48 = 1;
	static volatile int32_t t11 = -22663629;

	t11 = (x45^((x46<=x47)<=x48));

	if (t11 != 30) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 2U;
	int64_t t12 = 11867789468462LL;

	t12 = (x49^((x50<=x51)<=x52));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 803871607841395500LL;
	int16_t x55 = INT16_MIN;
	volatile int64_t t13 = -158770LL;

	t13 = (x53^((x54<=x55)<=x56));

	if (t13 != 803871607841395501LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int16_t x59 = -125;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t14 = -137556;

	t14 = (x57^((x58<=x59)<=x60));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint16_t x62 = UINT16_MAX;
	volatile int16_t x63 = 0;
	static volatile int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -55672094;

	t15 = (x61^((x62<=x63)<=x64));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 0;
	uint32_t x66 = 11U;
	static uint16_t x67 = 22U;
	static volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 162;

	t16 = (x65^((x66<=x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 8350208U;
	static volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -1;

	t17 = (x69^((x70<=x71)<=x72));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 1;
	int32_t x75 = -7967308;
	volatile int8_t x76 = -9;
	int32_t t18 = -1;

	t18 = (x73^((x74<=x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -14;
	static int32_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -754198569;

	t19 = (x77^((x78<=x79)<=x80));

	if (t19 != -14) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1152U;
	uint8_t x82 = 3U;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;

	t20 = (x81^((x82<=x83)<=x84));

	if (t20 != 1153) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile uint16_t x86 = 3867U;
	static int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = (x85^((x86<=x87)<=x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = -1;
	volatile uint16_t x91 = 3312U;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 103065876;

	t22 = (x89^((x90<=x91)<=x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	volatile uint64_t x95 = UINT64_MAX;
	uint32_t x96 = 7315134U;
	int32_t t23 = -1;

	t23 = (x93^((x94<=x95)<=x96));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -9958;
	int8_t x99 = -1;
	int8_t x100 = 3;
	volatile int32_t t24 = -429;

	t24 = (x97^((x98<=x99)<=x100));

	if (t24 != -9957) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	uint16_t x102 = 1U;
	static int16_t x103 = 0;
	int64_t x104 = 6LL;
	int64_t t25 = -7505745239255842LL;

	t25 = (x101^((x102<=x103)<=x104));

	if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -1;
	int16_t x106 = -511;
	static int16_t x108 = -1;
	static volatile int32_t t26 = 432;

	t26 = (x105^((x106<=x107)<=x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = UINT64_MAX;
	volatile int64_t x110 = INT64_MAX;
	int16_t x111 = -5473;
	volatile uint64_t x112 = 198028590LLU;
	uint64_t t27 = 259152798834725LLU;

	t27 = (x109^((x110<=x111)<=x112));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = -1LL;
	int64_t x115 = 0LL;
	volatile int32_t t28 = 5378451;

	t28 = (x113^((x114<=x115)<=x116));

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 80;
	volatile uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 1U;
	int16_t x120 = -1;

	t29 = (x117^((x118<=x119)<=x120));

	if (t29 != 80) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1624871723LL;
	volatile int32_t t30 = -66819;

	t30 = (x121^((x122<=x123)<=x124));

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 3;
	int16_t x126 = 1;
	int8_t x127 = INT8_MIN;
	static int64_t x128 = INT64_MIN;

	t31 = (x125^((x126<=x127)<=x128));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 42925001940479LLU;
	static volatile int64_t x130 = 414281995712LL;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t32 = 0LLU;

	t32 = (x129^((x130<=x131)<=x132));

	if (t32 != 42925001940479LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	int32_t x134 = INT32_MAX;
	static int32_t x135 = -22999;
	volatile int32_t t33 = -5001;

	t33 = (x133^((x134<=x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = INT64_MIN;
	static int32_t x139 = -2060211;
	volatile int8_t x140 = -1;
	uint64_t t34 = UINT64_MAX;

	t34 = (x137^((x138<=x139)<=x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	static uint16_t x143 = 7U;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 272;

	t35 = (x141^((x142<=x143)<=x144));

	if (t35 != 12410) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	uint16_t x147 = 17166U;
	int32_t t36 = 459119;

	t36 = (x145^((x146<=x147)<=x148));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1U;
	static int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MIN;

	t37 = (x149^((x150<=x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 8U;
	volatile int8_t x155 = -1;
	uint32_t x156 = 3138U;
	volatile int32_t t38 = -167018284;

	t38 = (x153^((x154<=x155)<=x156));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 16U;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = 17U;
	static int32_t t39 = -22314;

	t39 = (x157^((x158<=x159)<=x160));

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -6314061;
	int8_t x162 = INT8_MAX;
	int64_t x163 = -1282LL;
	int64_t x164 = 320744025804LL;
	int32_t t40 = 3;

	t40 = (x161^((x162<=x163)<=x164));

	if (t40 != -6314062) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 15U;
	int16_t x166 = INT16_MIN;
	static uint64_t x167 = UINT64_MAX;
	volatile uint32_t t41 = 0U;

	t41 = (x165^((x166<=x167)<=x168));

	if (t41 != 14U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	static uint8_t x170 = 3U;
	int32_t t42 = -3298655;

	t42 = (x169^((x170<=x171)<=x172));

	if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = INT64_MAX;
	uint64_t x175 = 591706614702814LLU;
	int32_t t43 = 29594;

	t43 = (x173^((x174<=x175)<=x176));

	if (t43 != 3941) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	static int8_t x179 = -1;
	int8_t x180 = INT8_MIN;

	t44 = (x177^((x178<=x179)<=x180));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MAX;
	uint8_t x182 = 9U;
	uint8_t x183 = 65U;
	static int32_t x184 = -1;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x181^((x182<=x183)<=x184));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x185 = 3028487LLU;
	int8_t x186 = -1;
	static uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 1U;
	volatile uint64_t t46 = 13999324LLU;

	t46 = (x185^((x186<=x187)<=x188));

	if (t46 != 3028486LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = 9;
	int32_t x191 = -2952;
	int32_t x192 = INT32_MIN;

	t47 = (x189^((x190<=x191)<=x192));

	if (t47 != -755074994382LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile int64_t x194 = -1LL;
	volatile int32_t t48 = -17505;

	t48 = (x193^((x194<=x195)<=x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -2288211252661473398LL;
	volatile int8_t x198 = -1;
	uint16_t x199 = 3U;
	volatile int32_t x200 = INT32_MIN;
	volatile int64_t t49 = -159399320202902536LL;

	t49 = (x197^((x198<=x199)<=x200));

	if (t49 != -2288211252661473398LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 11722LLU;
	uint64_t t50 = 46925008LLU;

	t50 = (x201^((x202<=x203)<=x204));

	if (t50 != 11722LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static uint8_t x206 = UINT8_MAX;
	uint8_t x208 = 4U;
	int32_t t51 = 11794710;

	t51 = (x205^((x206<=x207)<=x208));

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = 24127LLU;
	static uint32_t x210 = UINT32_MAX;
	uint32_t x211 = 181192010U;
	uint64_t t52 = 244654LLU;

	t52 = (x209^((x210<=x211)<=x212));

	if (t52 != 24126LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = -2;
	int16_t x215 = INT16_MAX;
	volatile int32_t x216 = -1;
	int32_t t53 = -7;

	t53 = (x213^((x214<=x215)<=x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	int64_t x218 = -49958LL;
	uint16_t x219 = 1U;
	int16_t x220 = -1;

	t54 = (x217^((x218<=x219)<=x220));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 0U;
	int16_t x222 = 39;
	int64_t x223 = 20358067LL;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 35476;

	t55 = (x221^((x222<=x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1383;
	uint64_t x227 = 39715880LLU;
	uint64_t x228 = 17563888581272099LLU;
	volatile int32_t t56 = 0;

	t56 = (x225^((x226<=x227)<=x228));

	if (t56 != -1384) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = 246636448;
	uint32_t x230 = 2U;
	uint64_t x231 = UINT64_MAX;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -8055;

	t57 = (x229^((x230<=x231)<=x232));

	if (t57 != 246636448) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int32_t x234 = INT32_MIN;
	static int16_t x235 = -7117;
	static uint8_t x236 = UINT8_MAX;
	static int32_t t58 = -107103;

	t58 = (x233^((x234<=x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 287U;
	uint16_t x240 = 3U;

	t59 = (x237^((x238<=x239)<=x240));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -5;
	int64_t x243 = -55316392681LL;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -69415;

	t60 = (x241^((x242<=x243)<=x244));

	if (t60 != -5) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 2892U;
	volatile int64_t x247 = INT64_MAX;
	uint32_t t61 = 1475114U;

	t61 = (x245^((x246<=x247)<=x248));

	if (t61 != 2893U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = 21U;
	int8_t x251 = 0;
	volatile uint32_t x252 = 8U;
	volatile int32_t t62 = -8397015;

	t62 = (x249^((x250<=x251)<=x252));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int64_t x256 = 3660825651962147849LL;

	t63 = (x253^((x254<=x255)<=x256));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = 1709;
	uint64_t x259 = 3598652542166153615LLU;

	t64 = (x257^((x258<=x259)<=x260));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	int32_t x263 = INT32_MIN;
	volatile uint64_t x264 = UINT64_MAX;

	t65 = (x261^((x262<=x263)<=x264));

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -1;
	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 5U;
	uint64_t x268 = 803692453464878383LLU;
	volatile int32_t t66 = 15445;

	t66 = (x265^((x266<=x267)<=x268));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x271 = 299454812U;
	volatile int32_t t67 = 114723;

	t67 = (x269^((x270<=x271)<=x272));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 136U;

	t68 = (x273^((x274<=x275)<=x276));

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint32_t x278 = UINT32_MAX;
	uint32_t x280 = UINT32_MAX;

	t69 = (x277^((x278<=x279)<=x280));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 1U;
	uint64_t x283 = 4572808031449287LLU;
	int32_t t70 = -200975;

	t70 = (x281^((x282<=x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 4U;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t71 = INT64_MAX;

	t71 = (x285^((x286<=x287)<=x288));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	volatile uint32_t x291 = 51462U;
	int64_t x292 = -67013994471469LL;

	t72 = (x289^((x290<=x291)<=x292));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int8_t x294 = -1;
	int64_t x296 = 13398999LL;
	volatile uint32_t t73 = 28390U;

	t73 = (x293^((x294<=x295)<=x296));

	if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	int32_t t74 = 206;

	t74 = (x297^((x298<=x299)<=x300));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	static uint16_t x302 = 1219U;
	static volatile int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 97;

	t75 = (x301^((x302<=x303)<=x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 33U;
	static uint64_t x306 = UINT64_MAX;
	static int8_t x307 = INT8_MIN;
	int64_t x308 = -1LL;
	int32_t t76 = -286;

	t76 = (x305^((x306<=x307)<=x308));

	if (t76 != 33) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x310 = 23;
	static int8_t x311 = INT8_MIN;
	volatile uint64_t x312 = 42371251004108LLU;
	int32_t t77 = -344350241;

	t77 = (x309^((x310<=x311)<=x312));

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x315 = -1;
	int64_t t78 = 4324LL;

	t78 = (x313^((x314<=x315)<=x316));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	volatile uint16_t x318 = UINT16_MAX;
	int32_t x319 = 59813040;
	static int16_t x320 = -1;
	volatile int32_t t79 = -127687256;

	t79 = (x317^((x318<=x319)<=x320));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	static int64_t x323 = INT64_MIN;
	int64_t x324 = -1LL;
	int32_t t80 = 3;

	t80 = (x321^((x322<=x323)<=x324));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = 0U;
	uint16_t x327 = 4U;
	volatile int16_t x328 = 28;
	int32_t t81 = -216;

	t81 = (x325^((x326<=x327)<=x328));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static uint32_t x331 = 272695U;
	int32_t x332 = INT32_MAX;
	static int32_t t82 = -263394;

	t82 = (x329^((x330<=x331)<=x332));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 3U;
	static uint64_t x334 = UINT64_MAX;
	static int16_t x335 = -1;
	uint64_t x336 = 4329645539351LLU;
	volatile int32_t t83 = -1825;

	t83 = (x333^((x334<=x335)<=x336));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	volatile int32_t t84 = 56581253;

	t84 = (x337^((x338<=x339)<=x340));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -4;
	static uint32_t x342 = 153055198U;
	volatile uint8_t x343 = 6U;
	volatile int16_t x344 = 1;
	int32_t t85 = 0;

	t85 = (x341^((x342<=x343)<=x344));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x347 = 10LL;
	int8_t x348 = INT8_MIN;

	t86 = (x345^((x346<=x347)<=x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 433733236838LLU;
	int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 1U;
	uint64_t t87 = 590LLU;

	t87 = (x349^((x350<=x351)<=x352));

	if (t87 != 433733236839LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1U;
	uint64_t x354 = 10900871873LLU;
	static int8_t x355 = -1;

	t88 = (x353^((x354<=x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 34;
	int16_t x358 = INT16_MIN;
	static int32_t x359 = -1;
	volatile int32_t t89 = -1290203;

	t89 = (x357^((x358<=x359)<=x360));

	if (t89 != 34) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 3LLU;
	int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = 6697U;
	uint32_t x364 = UINT32_MAX;
	volatile uint64_t t90 = 27437219146076502LLU;

	t90 = (x361^((x362<=x363)<=x364));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 3820;
	static int64_t x366 = INT64_MAX;
	int64_t x367 = -84418000520LL;
	int32_t x368 = -1618;
	int32_t t91 = -3;

	t91 = (x365^((x366<=x367)<=x368));

	if (t91 != 3820) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -221;

	t92 = (x369^((x370<=x371)<=x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	volatile int32_t x374 = 30219;
	static int16_t x375 = -1;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x373^((x374<=x375)<=x376));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = 0;
	volatile int16_t x379 = 1;
	uint16_t x380 = 5U;
	volatile int32_t t94 = -268162657;

	t94 = (x377^((x378<=x379)<=x380));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	uint8_t x383 = 3U;
	int16_t x384 = -1;
	int32_t t95 = -17;

	t95 = (x381^((x382<=x383)<=x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	int32_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (x385^((x386<=x387)<=x388));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 837754225159096298LLU;
	static volatile uint64_t x391 = UINT64_MAX;
	volatile uint8_t x392 = UINT8_MAX;

	t97 = (x389^((x390<=x391)<=x392));

	if (t97 != 837754225159096299LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 905981U;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = 13;
	int16_t x396 = -1;
	volatile uint32_t t98 = 4268U;

	t98 = (x393^((x394<=x395)<=x396));

	if (t98 != 905981U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -68504484LL;
	uint16_t x398 = 17700U;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MIN;

	t99 = (x397^((x398<=x399)<=x400));

	if (t99 != -68504484LL) { NG(); } else { ; }
	
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

