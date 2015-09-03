#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = 4307496873LL;
volatile int64_t t1 = -186850973249901119LL;
static volatile int64_t x15 = INT64_MIN;
static uint16_t x20 = 8U;
int64_t x28 = -3460727LL;
static uint64_t x35 = UINT64_MAX;
volatile uint64_t t8 = 1494130997063LLU;
volatile int16_t x37 = -1;
static volatile int8_t x45 = INT8_MAX;
uint8_t x64 = 1U;
volatile uint32_t t16 = 0U;
uint16_t x82 = 22U;
static int8_t x88 = INT8_MIN;
int8_t x91 = INT8_MAX;
int16_t x107 = -7;
uint8_t x108 = UINT8_MAX;
int32_t t24 = -815172;
int32_t x109 = -17062;
uint32_t x113 = 6711U;
int16_t x114 = 0;
uint32_t x116 = 3U;
int64_t x131 = 16LL;
uint8_t x140 = 7U;
uint32_t t31 = 156U;
static uint16_t x141 = 17268U;
int64_t x145 = -5289441LL;
int32_t x146 = 4831784;
uint64_t x147 = UINT64_MAX;
volatile int8_t x153 = 1;
int16_t x154 = 17;
int32_t t34 = -77281628;
static int8_t x158 = INT8_MIN;
uint64_t t36 = 1180LLU;
uint32_t x171 = 1262345519U;
static uint8_t x172 = UINT8_MAX;
volatile uint8_t x173 = 27U;
int64_t x178 = INT64_MIN;
int16_t x179 = INT16_MIN;
int64_t x183 = INT64_MIN;
int64_t x190 = -1LL;
static uint64_t t44 = 1630530LLU;
volatile uint16_t x206 = 12177U;
uint8_t x210 = 1U;
int16_t x213 = 2;
volatile int64_t t47 = -6157765689174LL;
uint8_t x218 = UINT8_MAX;
uint8_t x221 = UINT8_MAX;
int32_t x232 = -102024198;
int64_t x234 = -955599253108LL;
static int32_t x248 = INT32_MIN;
uint64_t x254 = 14408975LLU;
int8_t x258 = INT8_MAX;
int16_t x261 = 5;
volatile int8_t x262 = INT8_MIN;
volatile int32_t t59 = 5607;
int8_t x270 = INT8_MAX;
volatile int8_t x271 = 26;
int32_t x279 = INT32_MAX;
int16_t x289 = INT16_MAX;
volatile uint64_t x291 = 79740LLU;
uint64_t t65 = 19301733867677LLU;
uint8_t x299 = 33U;
static int8_t x308 = INT8_MIN;
static int8_t x312 = 28;
int16_t x323 = INT16_MIN;
uint16_t x327 = UINT16_MAX;
static uint64_t t74 = 73306566LLU;
uint16_t x332 = 81U;
int32_t x342 = -1;
uint8_t x347 = 1U;
int32_t x352 = 385150;
volatile int32_t t80 = 12357413;
int16_t x360 = -1370;
uint16_t x364 = 10U;
int32_t x365 = -1;
int64_t x370 = 38275LL;
static volatile int32_t x375 = INT32_MAX;
static uint64_t x383 = 10339LLU;
int16_t x384 = 2448;
volatile int64_t x395 = INT64_MIN;
int16_t x397 = -1;
uint16_t x400 = UINT16_MAX;
static volatile uint16_t x402 = 901U;
volatile int64_t t91 = -216743092LL;
volatile int32_t t92 = -1397270;
int16_t x423 = INT16_MAX;
uint32_t t96 = 12543066U;
uint16_t x427 = 20U;
int64_t x430 = INT64_MIN;
int64_t x432 = INT64_MIN;
volatile int32_t x433 = 50;
volatile uint32_t t99 = 65119U;


void f0(void) {
	static int32_t x1 = 2;
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = -1893;
	int16_t x4 = -5172;
	volatile int32_t t0 = -98378;

	t0 = ((x1-(x2|x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;

	t1 = ((x5-(x6|x7))&x8);

	if (t1 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -74;
	volatile uint32_t x10 = UINT32_MAX;
	volatile uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 21755801630731550LLU;

	t2 = ((x9-(x10|x11))&x12);

	if (t2 != 183LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x14 = -69;
	int32_t x16 = -1;
	volatile int64_t t3 = 674413511567689089LL;

	t3 = ((x13-(x14|x15))&x16);

	if (t3 != 324LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -2440;
	int32_t t4 = 23411350;

	t4 = ((x17-(x18|x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -1;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = 4U;
	static volatile int32_t t5 = -138089709;

	t5 = ((x21-(x22|x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	static int32_t x27 = INT32_MIN;
	volatile int64_t t6 = 32387219131LL;

	t6 = ((x25-(x26|x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	static int64_t t7 = -442099490933994650LL;

	t7 = ((x29-(x30|x31))&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	int8_t x36 = INT8_MAX;

	t8 = ((x33-(x34|x35))&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = 13357478445198LL;
	uint8_t x39 = 4U;
	int16_t x40 = INT16_MAX;
	int64_t t9 = 11181490667572LL;

	t9 = ((x37-(x38|x39))&x40);

	if (t9 != 32625LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	static uint64_t x42 = UINT64_MAX;
	int8_t x43 = 57;
	int16_t x44 = INT16_MIN;
	uint64_t t10 = 1745007771LLU;

	t10 = ((x41-(x42|x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	uint16_t x47 = UINT16_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -374;

	t11 = ((x45-(x46|x47))&x48);

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MAX;
	uint8_t x51 = 5U;
	static uint8_t x52 = 20U;
	static int64_t t12 = -33LL;

	t12 = ((x49-(x50|x51))&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -13168LL;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	int8_t x60 = -1;
	int64_t t13 = 0LL;

	t13 = ((x57-(x58|x59))&x60);

	if (t13 != 9223372036854762385LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	int8_t x62 = -1;
	uint8_t x63 = 2U;
	volatile int32_t t14 = -100;

	t14 = ((x61-(x62|x63))&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int16_t x66 = INT16_MAX;
	static uint16_t x67 = 5428U;
	uint16_t x68 = 1992U;
	int32_t t15 = -63;

	t15 = ((x65-(x66|x67))&x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 879U;
	uint8_t x71 = 52U;
	uint32_t x72 = 25U;

	t16 = ((x69-(x70|x71))&x72);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = 309754;
	int32_t x74 = -1226;
	static volatile int64_t x75 = -1LL;
	int16_t x76 = INT16_MIN;
	int64_t t17 = -330355190177LL;

	t17 = ((x73-(x74|x75))&x76);

	if (t17 != 294912LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = -832;
	int32_t t18 = 1;

	t18 = ((x81-(x82|x83))&x84);

	if (t18 != -65536) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 235424558900LL;
	int16_t x86 = -1;
	int32_t x87 = INT32_MIN;
	int64_t t19 = 1981002231570654LL;

	t19 = ((x85-(x86|x87))&x88);

	if (t19 != 235424558848LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 53030LLU;
	int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	static volatile uint64_t t20 = 416LLU;

	t20 = ((x89-(x90|x91))&x92);

	if (t20 != 9223372036854828672LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 5532U;
	static int32_t t21 = -7259;

	t21 = ((x93-(x94|x95))&x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = 28216205522LL;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = INT8_MIN;
	uint16_t x100 = 11U;
	int64_t t22 = -226LL;

	t22 = ((x97-(x98|x99))&x100);

	if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -7558;
	int64_t x102 = INT64_MAX;
	static int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MAX;
	int64_t t23 = -507543055014411LL;

	t23 = ((x101-(x102|x103))&x104);

	if (t23 != 9223372036854768251LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = 70;

	t24 = ((x105-(x106|x107))&x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = -1LL;
	uint64_t x111 = 4485604LLU;
	static int64_t x112 = INT64_MIN;
	static uint64_t t25 = 21707791752885185LLU;

	t25 = ((x109-(x110|x111))&x112);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x115 = INT16_MIN;
	uint32_t t26 = 102U;

	t26 = ((x113-(x114|x115))&x116);

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	static int32_t x118 = INT32_MAX;
	uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MIN;
	static uint64_t t27 = 2003LLU;

	t27 = ((x117-(x118|x119))&x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 417343941599LLU;
	volatile int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MAX;
	volatile uint16_t x128 = 22682U;
	volatile uint64_t t28 = 879615LLU;

	t28 = ((x125-(x126|x127))&x128);

	if (t28 != 2048LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x130 = INT64_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = ((x129-(x130|x131))&x132);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 829975U;
	int8_t x134 = INT8_MAX;
	uint16_t x135 = 1679U;
	uint32_t x136 = 8040370U;
	uint32_t t30 = 0U;

	t30 = ((x133-(x134|x135))&x136);

	if (t30 != 566032U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x137 = 25U;
	static uint32_t x138 = 1835546312U;
	int16_t x139 = -16;

	t31 = ((x137-(x138|x139))&x140);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x142 = 19U;
	uint64_t x143 = 80LLU;
	volatile int64_t x144 = INT64_MIN;
	volatile uint64_t t32 = 184755LLU;

	t32 = ((x141-(x142|x143))&x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x148 = INT64_MAX;
	volatile uint64_t t33 = 1460431785955LLU;

	t33 = ((x145-(x146|x147))&x148);

	if (t33 != 9223372036849486368LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x155 = -9015647;
	int8_t x156 = 1;

	t34 = ((x153-(x154|x155))&x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x157 = 93U;
	int16_t x159 = INT16_MAX;
	uint32_t x160 = 1340565528U;
	static volatile uint32_t t35 = 519983U;

	t35 = ((x157-(x158|x159))&x160);

	if (t35 != 24U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 13524U;
	static uint32_t x166 = 63U;
	static volatile uint8_t x167 = UINT8_MAX;
	volatile uint64_t x168 = 1666092036418591LLU;

	t36 = ((x165-(x166|x167))&x168);

	if (t36 != 8213LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	uint32_t t37 = 11904U;

	t37 = ((x169-(x170|x171))&x172);

	if (t37 != 81U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x174 = -11125LL;
	static int8_t x175 = -1;
	volatile int8_t x176 = 58;
	volatile int64_t t38 = -4447221301673644LL;

	t38 = ((x173-(x174|x175))&x176);

	if (t38 != 24LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x177 = 31LLU;
	uint32_t x180 = 1968U;
	uint64_t t39 = 40396LLU;

	t39 = ((x177-(x178|x179))&x180);

	if (t39 != 16LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x181 = 14LLU;
	volatile uint32_t x182 = 24242U;
	int32_t x184 = -1;
	static volatile uint64_t t40 = 1251138LLU;

	t40 = ((x181-(x182|x183))&x184);

	if (t40 != 9223372036854751580LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = 0U;
	volatile int32_t t41 = -1067;

	t41 = ((x185-(x186|x187))&x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x191 = 1U;
	int16_t x192 = INT16_MAX;
	volatile int64_t t42 = 140LL;

	t42 = ((x189-(x190|x191))&x192);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 3817423U;
	volatile int8_t x194 = -1;
	int8_t x195 = -1;
	static uint8_t x196 = 3U;
	static uint32_t t43 = 4057145U;

	t43 = ((x193-(x194|x195))&x196);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x197 = 15909LLU;
	uint16_t x198 = 1349U;
	int32_t x199 = -18912;
	volatile uint64_t x200 = UINT64_MAX;

	t44 = ((x197-(x198|x199))&x200);

	if (t44 != 34496LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 17269163LLU;
	static uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MAX;
	static volatile uint64_t t45 = 91174636267885LLU;

	t45 = ((x205-(x206|x207))&x208);

	if (t45 != 17256876LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = 29;
	static int64_t x211 = 2539776687336LL;
	uint16_t x212 = 21975U;
	static int64_t t46 = -598107526898LL;

	t46 = ((x209-(x210|x211))&x212);

	if (t46 != 16660LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MAX;
	int64_t x216 = 1734LL;

	t47 = ((x213-(x214|x215))&x216);

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = INT32_MIN;
	volatile int8_t x219 = INT8_MIN;
	uint16_t x220 = 439U;
	volatile int32_t t48 = 507932;

	t48 = ((x217-(x218|x219))&x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x222 = INT8_MIN;
	static uint64_t x223 = 496674686LLU;
	static int8_t x224 = -1;
	static volatile uint64_t t49 = 29621083113021LLU;

	t49 = ((x221-(x222|x223))&x224);

	if (t49 != 257LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = INT16_MAX;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t50 = -1650;

	t50 = ((x225-(x226|x227))&x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 0U;
	static volatile int32_t x230 = 4;
	int64_t x231 = 3LL;
	volatile int64_t t51 = 1544LL;

	t51 = ((x229-(x230|x231))&x232);

	if (t51 != -102024200LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x233 = 260;
	int8_t x235 = -1;
	int8_t x236 = -1;
	int64_t t52 = -1628216614052553772LL;

	t52 = ((x233-(x234|x235))&x236);

	if (t52 != 261LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x237 = 936;
	int32_t x238 = -1;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int16_t x240 = INT16_MIN;
	uint64_t t53 = 329026311711951LLU;

	t53 = ((x237-(x238|x239))&x240);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = -65782500941LL;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 57304U;
	volatile int64_t t54 = -849995831158694LL;

	t54 = ((x241-(x242|x243))&x244);

	if (t54 != 20040LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x245 = -5647479;
	volatile int16_t x246 = 7;
	int16_t x247 = -1;
	int32_t t55 = INT32_MIN;

	t55 = ((x245-(x246|x247))&x248);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 4U;
	volatile int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t56 = 59155807;

	t56 = ((x249-(x250|x251))&x252);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = INT64_MAX;
	static int16_t x255 = -1;
	uint64_t x256 = 188LLU;
	volatile uint64_t t57 = 1123279215325722LLU;

	t57 = ((x253-(x254|x255))&x256);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 9U;
	volatile int8_t x259 = -12;
	volatile int16_t x260 = 1;
	int32_t t58 = 63859;

	t58 = ((x257-(x258|x259))&x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;

	t59 = ((x261-(x262|x263))&x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = 17234;
	static volatile int32_t x266 = INT32_MAX;
	static int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t60 = -58347712502LL;

	t60 = ((x265-(x266|x267))&x268);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = -1LL;
	int8_t x272 = INT8_MIN;
	int64_t t61 = -281401413570976036LL;

	t61 = ((x269-(x270|x271))&x272);

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x273 = -1;
	uint16_t x274 = 1673U;
	static uint64_t x275 = UINT64_MAX;
	volatile int32_t x276 = INT32_MIN;
	volatile uint64_t t62 = 523508379201007422LLU;

	t62 = ((x273-(x274|x275))&x276);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x277 = 80671LLU;
	static int32_t x278 = -525170;
	int8_t x280 = INT8_MIN;
	uint64_t t63 = 7485989589934362LLU;

	t63 = ((x277-(x278|x279))&x280);

	if (t63 != 80640LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = -1LL;
	int32_t x286 = -1;
	int16_t x287 = -1;
	volatile uint32_t x288 = 422749U;
	volatile int64_t t64 = 2941426393LL;

	t64 = ((x285-(x286|x287))&x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x290 = INT8_MIN;
	static int8_t x292 = -1;

	t65 = ((x289-(x290|x291))&x292);

	if (t65 != 32771LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	uint64_t t66 = 6LLU;

	t66 = ((x293-(x294|x295))&x296);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x297 = INT16_MIN;
	uint8_t x298 = UINT8_MAX;
	static volatile int64_t x300 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = ((x297-(x298|x299))&x300);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = -114124;
	int16_t x302 = INT16_MAX;
	static int64_t x303 = 1LL;
	int64_t x304 = INT64_MAX;
	static int64_t t68 = -10853LL;

	t68 = ((x301-(x302|x303))&x304);

	if (t68 != 9223372036854628917LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	static int16_t x307 = 58;
	volatile int32_t t69 = -133797;

	t69 = ((x305-(x306|x307))&x308);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 27U;
	int64_t t70 = -5078869130550341LL;

	t70 = ((x309-(x310|x311))&x312);

	if (t70 != 4LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = 75;
	volatile int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = 1U;
	int64_t t71 = 741554212167LL;

	t71 = ((x313-(x314|x315))&x316);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x318 = -108;
	volatile int8_t x319 = INT8_MIN;
	static volatile int8_t x320 = INT8_MAX;
	volatile int64_t t72 = 9817108407599LL;

	t72 = ((x317-(x318|x319))&x320);

	if (t72 != 108LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = 6;
	volatile uint32_t x324 = 1175U;
	volatile uint32_t t73 = 55840069U;

	t73 = ((x321-(x322|x323))&x324);

	if (t73 != 1042U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 4437927184923292235LLU;
	int8_t x326 = INT8_MIN;
	static uint16_t x328 = 2U;

	t74 = ((x325-(x326|x327))&x328);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x329 = INT16_MIN;
	uint64_t x330 = UINT64_MAX;
	uint16_t x331 = 3U;
	static uint64_t t75 = 2LLU;

	t75 = ((x329-(x330|x331))&x332);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = 238;
	static volatile uint16_t x334 = 0U;
	uint8_t x335 = 0U;
	uint16_t x336 = 1024U;
	int32_t t76 = 9600;

	t76 = ((x333-(x334|x335))&x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 65776LLU;
	static int64_t x338 = -14463824LL;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;
	uint64_t t77 = 17910973813446538LLU;

	t77 = ((x337-(x338|x339))&x340);

	if (t77 != 64LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	volatile int32_t x343 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	static int32_t t78 = 32286181;

	t78 = ((x341-(x342|x343))&x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x345 = INT64_MIN;
	static int8_t x346 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	int64_t t79 = -84508233142648LL;

	t79 = ((x345-(x346|x347))&x348);

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;

	t80 = ((x349-(x350|x351))&x352);

	if (t80 != 65662) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -152422;
	volatile int8_t x354 = -1;
	static int32_t x355 = INT32_MAX;
	uint8_t x356 = 24U;
	volatile int32_t t81 = -352736241;

	t81 = ((x353-(x354|x355))&x356);

	if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x357 = 1783;
	uint8_t x358 = UINT8_MAX;
	static uint8_t x359 = 1U;
	static int32_t t82 = 867;

	t82 = ((x357-(x358|x359))&x360);

	if (t82 != 160) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = 4409;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = -1;
	volatile int32_t t83 = -47537;

	t83 = ((x361-(x362|x363))&x364);

	if (t83 != 10) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x366 = 912606;
	uint64_t x367 = 31LLU;
	static uint16_t x368 = 69U;
	static volatile uint64_t t84 = 145071747314676LLU;

	t84 = ((x365-(x366|x367))&x368);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = -1LL;
	uint64_t x371 = 93LLU;
	static int16_t x372 = INT16_MIN;
	static uint64_t t85 = 160947842586LLU;

	t85 = ((x369-(x370|x371))&x372);

	if (t85 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = UINT8_MAX;
	volatile uint16_t x374 = 0U;
	volatile int32_t x376 = -1;
	volatile int32_t t86 = 139;

	t86 = ((x373-(x374|x375))&x376);

	if (t86 != -2147483392) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MIN;
	uint64_t t87 = 12LLU;

	t87 = ((x381-(x382|x383))&x384);

	if (t87 != 16LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MIN;
	static uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	static uint8_t x392 = UINT8_MAX;
	static uint64_t t88 = 142736474348LLU;

	t88 = ((x389-(x390|x391))&x392);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	static uint64_t t89 = 3530872931364760210LLU;

	t89 = ((x393-(x394|x395))&x396);

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x398 = 22U;
	uint8_t x399 = 0U;
	int32_t t90 = 114732338;

	t90 = ((x397-(x398|x399))&x400);

	if (t90 != 65513) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = -321LL;
	uint16_t x403 = 2U;
	uint32_t x404 = UINT32_MAX;

	t91 = ((x401-(x402|x403))&x404);

	if (t91 != 4294966072LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	int16_t x407 = -82;
	uint16_t x408 = 210U;

	t92 = ((x405-(x406|x407))&x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	uint64_t x410 = 57090LLU;
	static int8_t x411 = INT8_MAX;
	volatile int8_t x412 = 1;
	uint64_t t93 = 455175841LLU;

	t93 = ((x409-(x410|x411))&x412);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x413 = 48310LL;
	int64_t x414 = INT64_MAX;
	volatile int16_t x415 = INT16_MIN;
	int32_t x416 = -511249;
	volatile int64_t t94 = -5243517566004LL;

	t94 = ((x413-(x414|x415))&x416);

	if (t94 != 12455LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = -1;
	int16_t x418 = 4365;
	int8_t x419 = -1;
	static int64_t x420 = INT64_MAX;
	static volatile int64_t t95 = 1353727LL;

	t95 = ((x417-(x418|x419))&x420);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x421 = 3670035U;
	int32_t x422 = INT32_MAX;
	int32_t x424 = 1;

	t96 = ((x421-(x422|x423))&x424);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 14U;
	int16_t x426 = INT16_MAX;
	static int32_t x428 = INT32_MIN;
	static volatile int32_t t97 = INT32_MIN;

	t97 = ((x425-(x426|x427))&x428);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x429 = -2078900386126231176LL;
	int16_t x431 = INT16_MIN;
	static int64_t t98 = INT64_MIN;

	t98 = ((x429-(x430|x431))&x432);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x434 = 10U;
	uint8_t x435 = 11U;
	int16_t x436 = -8;

	t99 = ((x433-(x434|x435))&x436);

	if (t99 != 32U) { NG(); } else { ; }
	
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

