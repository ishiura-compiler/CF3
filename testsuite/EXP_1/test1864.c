#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = -1;
static volatile uint8_t x18 = UINT8_MAX;
int16_t x21 = INT16_MIN;
volatile uint64_t x23 = 549361442871LLU;
static int8_t x34 = INT8_MAX;
volatile int8_t x43 = -1;
uint16_t x48 = 226U;
int32_t x50 = -1;
int32_t x58 = INT32_MIN;
static volatile int32_t x60 = 28449;
int64_t x61 = 2099084332007921157LL;
static uint8_t x63 = 1U;
static volatile uint16_t x64 = 420U;
uint8_t x65 = 41U;
static int32_t x66 = INT32_MIN;
int32_t x73 = INT32_MIN;
int64_t x75 = 1289190580169877LL;
int8_t x86 = -12;
volatile int32_t t17 = 459225;
int32_t t18 = -2122;
int32_t x97 = INT32_MIN;
static volatile int8_t x100 = INT8_MIN;
static int32_t x103 = -7;
int8_t x104 = -1;
static uint8_t x105 = UINT8_MAX;
static int32_t x106 = INT32_MAX;
uint16_t x112 = 58U;
int32_t x114 = -1;
static int64_t x126 = 20217542180841LL;
static volatile int64_t t26 = 0LL;
int8_t x141 = INT8_MIN;
int64_t x143 = -28152539842599948LL;
volatile int64_t x148 = 105313240614LL;
uint16_t x150 = 59U;
static uint8_t x152 = 16U;
volatile uint32_t t32 = 3U;
static volatile int64_t x157 = -1LL;
uint32_t x159 = 7853208U;
int64_t t34 = 3551710604LL;
uint32_t x167 = 1343U;
volatile int64_t x169 = INT64_MIN;
static int32_t x172 = INT32_MAX;
int64_t x173 = 10251432824170205LL;
static int8_t x175 = 0;
uint32_t x179 = 6998292U;
volatile int64_t t40 = -1LL;
uint64_t x197 = 460430947246836981LLU;
int8_t x198 = INT8_MIN;
static int32_t x199 = 3664;
int16_t x207 = -1;
int32_t x216 = -1;
volatile uint32_t t48 = 1U;
uint8_t x227 = UINT8_MAX;
volatile int64_t x229 = INT64_MAX;
int32_t x230 = INT32_MIN;
static int64_t x241 = INT64_MIN;
int64_t x249 = 164LL;
uint64_t x250 = 1624459461LLU;
static uint64_t t54 = 5676832449087349LLU;
int32_t x264 = INT32_MIN;
int16_t x268 = -1;
uint8_t x269 = 121U;
int8_t x270 = 1;
uint64_t t58 = 1930501332928LLU;
uint16_t x276 = 2123U;
static int64_t x282 = -1LL;
static volatile int16_t x285 = INT16_MAX;
uint64_t x294 = 100796223LLU;
uint64_t x295 = 150371LLU;
volatile uint64_t t66 = 174553943022239LLU;
int8_t x315 = INT8_MAX;
int8_t x322 = 1;
int64_t x323 = INT64_MAX;
uint32_t x325 = 1251U;
uint32_t x338 = 425740U;
static uint8_t x340 = 13U;
volatile int32_t x348 = 15149199;
uint64_t t81 = 109LLU;
static uint16_t x379 = 222U;
volatile int64_t x381 = 1615861395784852276LL;
int32_t x383 = -1;
volatile int64_t t83 = -268LL;
volatile int8_t x387 = 1;
int32_t x388 = -13;
volatile int64_t t84 = 14448628063327180LL;
static volatile int64_t x395 = -1LL;
uint16_t x404 = 5U;
uint16_t x405 = 1335U;
int32_t x406 = 620753;
volatile int32_t t88 = -46741;
int32_t x414 = -8522966;
static uint64_t t95 = 1502LLU;
volatile int16_t x437 = -1;
int16_t x446 = -1;
int32_t x448 = -1;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	int32_t x2 = 636072;
	uint8_t x3 = UINT8_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 8675171667381716519LLU;

	t0 = (((x1|x2)+x3)%x4);

	if (t0 != 254LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = -4980;
	uint32_t x11 = 32442U;
	int16_t x12 = -1;
	volatile uint32_t t1 = 0U;

	t1 = (((x9|x10)+x11)%x12);

	if (t1 != 27462U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 4947U;
	int8_t x14 = 6;
	static int8_t x15 = -1;
	int32_t t2 = 69204;

	t2 = (((x13|x14)+x15)%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = -1;
	int32_t t3 = 25470;

	t3 = (((x17|x18)+x19)%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	static uint32_t x24 = UINT32_MAX;
	static volatile uint64_t t4 = 2LLU;

	t4 = (((x21|x22)+x23)%x24);

	if (t4 != 3900563638LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	static int64_t x26 = 40753040745LL;
	int32_t x27 = INT32_MIN;
	static uint16_t x28 = 52U;
	static uint64_t t5 = 467106896LLU;

	t5 = (((x25|x26)+x27)%x28);

	if (t5 != 43LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile int64_t x30 = INT64_MIN;
	static int8_t x31 = INT8_MAX;
	uint32_t x32 = 1U;
	static int64_t t6 = -106488286268397LL;

	t6 = (((x29|x30)+x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 2U;
	static int32_t x35 = -244592;
	volatile uint8_t x36 = 36U;
	int32_t t7 = -406401906;

	t7 = (((x33|x34)+x35)%x36);

	if (t7 != -25) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MAX;
	int64_t x39 = -16031LL;
	int16_t x40 = -1;
	int64_t t8 = 115LL;

	t8 = (((x37|x38)+x39)%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 7886U;
	static volatile uint8_t x42 = 11U;
	int16_t x44 = 1;
	int32_t t9 = -1;

	t9 = (((x41|x42)+x43)%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	volatile uint32_t x46 = UINT32_MAX;
	uint32_t x47 = UINT32_MAX;
	static volatile uint32_t t10 = 1914924722U;

	t10 = (((x45|x46)+x47)%x48);

	if (t10 != 14U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int32_t x51 = -997212090;
	int8_t x52 = -1;
	volatile int64_t t11 = 809751408132LL;

	t11 = (((x49|x50)+x51)%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MIN;
	volatile int16_t x54 = -1;
	static volatile int16_t x55 = -1;
	int16_t x56 = -1;
	int32_t t12 = 0;

	t12 = (((x53|x54)+x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 107109U;
	uint32_t x59 = UINT32_MAX;
	uint32_t t13 = 5898770U;

	t13 = (((x57|x58)+x59)%x60);

	if (t13 != 4195U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x62 = 4213376326733LL;
	int64_t t14 = -1LL;

	t14 = (((x61|x62)+x63)%x64);

	if (t14 != 366LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x67 = -1;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t15 = 8;

	t15 = (((x65|x66)+x67)%x68);

	if (t15 != -32728) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x74 = INT16_MIN;
	int32_t x76 = -1;
	int64_t t16 = -11894180723LL;

	t16 = (((x73|x74)+x75)%x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x87 = 11U;
	uint8_t x88 = UINT8_MAX;

	t17 = (((x85|x86)+x87)%x88);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	static int16_t x94 = INT16_MAX;
	volatile int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MIN;

	t18 = (((x93|x94)+x95)%x96);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x98 = 8488127381LLU;
	int16_t x99 = 1607;
	volatile uint64_t t19 = 1761714126LLU;

	t19 = (((x97|x98)+x99)%x100);

	if (t19 != 18446744073607746012LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 1;
	int32_t x102 = -366657;
	volatile int32_t t20 = 769895;

	t20 = (((x101|x102)+x103)%x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x107 = -1;
	int64_t x108 = INT64_MAX;
	volatile int64_t t21 = -220LL;

	t21 = (((x105|x106)+x107)%x108);

	if (t21 != 2147483646LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = 0U;
	int8_t x111 = -1;
	int32_t t22 = 339;

	t22 = (((x109|x110)+x111)%x112);

	if (t22 != 54) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = 3;
	int8_t x115 = -1;
	int16_t x116 = -1;
	volatile int32_t t23 = -1;

	t23 = (((x113|x114)+x115)%x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = -51488675661081LL;
	int16_t x119 = -1;
	uint64_t x120 = 2931LLU;
	volatile uint64_t t24 = 11132067539565076LLU;

	t24 = (((x117|x118)+x119)%x120);

	if (t24 != 1532LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x121 = INT64_MIN;
	static uint16_t x122 = 15U;
	uint8_t x123 = 4U;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t25 = 101411133055593699LLU;

	t25 = (((x121|x122)+x123)%x124);

	if (t25 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x125 = 7U;
	static int32_t x127 = -1;
	static int16_t x128 = INT16_MIN;

	t26 = (((x125|x126)+x127)%x128);

	if (t26 != 32750LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = 37LL;
	int16_t x130 = INT16_MIN;
	int16_t x131 = 232;
	int32_t x132 = INT32_MIN;
	int64_t t27 = -10867549422113LL;

	t27 = (((x129|x130)+x131)%x132);

	if (t27 != -32499LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	volatile uint64_t x139 = 33773613395LLU;
	int64_t x140 = INT64_MAX;
	uint64_t t28 = 6933132761863976926LLU;

	t28 = (((x137|x138)+x139)%x140);

	if (t28 != 33773613396LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x142 = -7076804;
	static int64_t x144 = INT64_MIN;
	int64_t t29 = 1689169164285279LL;

	t29 = (((x141|x142)+x143)%x144);

	if (t29 != -28152539842600016LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	static volatile uint16_t x146 = 149U;
	int32_t x147 = 46235445;
	volatile int64_t t30 = 3223867LL;

	t30 = (((x145|x146)+x147)%x148);

	if (t30 != 46235444LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x149 = 93U;
	volatile int16_t x151 = 1639;
	volatile uint32_t t31 = 662428847U;

	t31 = (((x149|x150)+x151)%x152);

	if (t31 != 6U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -1;
	volatile int8_t x154 = 6;
	uint32_t x155 = 7305704U;
	int8_t x156 = -1;

	t32 = (((x153|x154)+x155)%x156);

	if (t32 != 7305703U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x158 = 3U;
	volatile int32_t x160 = INT32_MIN;
	volatile int64_t t33 = -259440LL;

	t33 = (((x157|x158)+x159)%x160);

	if (t33 != 7853207LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MIN;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = 4U;

	t34 = (((x161|x162)+x163)%x164);

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 397U;
	static uint32_t x166 = UINT32_MAX;
	volatile uint8_t x168 = UINT8_MAX;
	volatile uint32_t t35 = 192U;

	t35 = (((x165|x166)+x167)%x168);

	if (t35 != 67U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x170 = UINT8_MAX;
	uint16_t x171 = 225U;
	static volatile int64_t t36 = -104527088641LL;

	t36 = (((x169|x170)+x171)%x172);

	if (t36 != -2147483169LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x174 = 25U;
	int8_t x176 = INT8_MIN;
	static int64_t t37 = 552624192093579LL;

	t37 = (((x173|x174)+x175)%x176);

	if (t37 != 93LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	uint16_t x178 = 103U;
	int64_t x180 = INT64_MIN;
	volatile int64_t t38 = -30554LL;

	t38 = (((x177|x178)+x179)%x180);

	if (t38 != 2154482043LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -5;
	volatile int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	volatile int16_t x184 = 403;
	volatile int64_t t39 = -132795695679LL;

	t39 = (((x181|x182)+x183)%x184);

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 505U;
	volatile int64_t x188 = INT64_MIN;

	t40 = (((x185|x186)+x187)%x188);

	if (t40 != 378LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MAX;
	volatile int32_t x191 = 509;
	int32_t x192 = -1;
	volatile int32_t t41 = 1;

	t41 = (((x189|x190)+x191)%x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x193 = 45U;
	int64_t x194 = 4800LL;
	int32_t x195 = INT32_MIN;
	uint32_t x196 = UINT32_MAX;
	int64_t t42 = -9067099LL;

	t42 = (((x193|x194)+x195)%x196);

	if (t42 != -2147478803LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x200 = INT8_MAX;
	volatile uint64_t t43 = 126068998LLU;

	t43 = (((x197|x198)+x199)%x200);

	if (t43 != 97LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = INT64_MIN;
	uint8_t x202 = 7U;
	uint32_t x203 = 0U;
	uint32_t x204 = 146U;
	int64_t t44 = 3870865LL;

	t44 = (((x201|x202)+x203)%x204);

	if (t44 != -67LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x205 = -1;
	int8_t x206 = 29;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t45 = 217741837;

	t45 = (((x205|x206)+x207)%x208);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 4U;
	int16_t x210 = 0;
	static int16_t x211 = -2555;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t46 = 2;

	t46 = (((x209|x210)+x211)%x212);

	if (t46 != -11) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x213 = 3185625508LL;
	int8_t x214 = INT8_MIN;
	static int16_t x215 = INT16_MIN;
	int64_t t47 = -9014LL;

	t47 = (((x213|x214)+x215)%x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x221 = INT16_MIN;
	uint32_t x222 = 63U;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MIN;

	t48 = (((x221|x222)+x223)%x224);

	if (t48 != 32830U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = 126;
	static volatile int8_t x228 = INT8_MIN;
	static volatile int32_t t49 = 6;

	t49 = (((x225|x226)+x227)%x228);

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x231 = -8;
	uint32_t x232 = UINT32_MAX;
	volatile int64_t t50 = -3225603846227LL;

	t50 = (((x229|x230)+x231)%x232);

	if (t50 != -9LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = 10860413267LL;
	uint16_t x239 = 5U;
	uint64_t x240 = 100150216997846LLU;
	uint64_t t51 = 132824431020LLU;

	t51 = (((x237|x238)+x239)%x240);

	if (t51 != 75604876296836LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x242 = -1;
	int32_t x243 = 316;
	static uint32_t x244 = UINT32_MAX;
	volatile int64_t t52 = -112306LL;

	t52 = (((x241|x242)+x243)%x244);

	if (t52 != 315LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x251 = 7;
	int8_t x252 = INT8_MIN;
	static uint64_t t53 = 1944232275669022LLU;

	t53 = (((x249|x250)+x251)%x252);

	if (t53 != 1624459500LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 15678940141414LLU;
	int16_t x254 = 1571;
	static int64_t x255 = INT64_MAX;
	int64_t x256 = -1LL;

	t54 = (((x253|x254)+x255)%x256);

	if (t54 != 9223387715794917222LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -2721485820111571477LL;
	static int16_t x258 = INT16_MIN;
	static int64_t x259 = -57515923113580LL;
	static int64_t x260 = 1939176191431367LL;
	volatile int64_t t55 = 4025793LL;

	t55 = (((x257|x258)+x259)%x260);

	if (t55 != -57515923132545LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x261 = 32410U;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -2767;
	volatile int32_t t56 = 59718;

	t56 = (((x261|x262)+x263)%x264);

	if (t56 != -2147454005) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x265 = 16547U;
	int8_t x266 = -1;
	static uint32_t x267 = 0U;
	volatile uint32_t t57 = 44U;

	t57 = (((x265|x266)+x267)%x268);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x271 = 2951157613LLU;
	uint32_t x272 = 6474U;

	t58 = (((x269|x270)+x271)%x272);

	if (t58 != 4256LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = 892LL;
	int8_t x275 = INT8_MIN;
	int64_t t59 = -677452478LL;

	t59 = (((x273|x274)+x275)%x276);

	if (t59 != 172LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = 60;
	uint16_t x278 = 79U;
	volatile int64_t x279 = INT64_MIN;
	volatile uint32_t x280 = 107866470U;
	int64_t t60 = 37470225219698428LL;

	t60 = (((x277|x278)+x279)%x280);

	if (t60 != -89709931LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 14U;
	int8_t x283 = -1;
	int8_t x284 = 24;
	volatile int64_t t61 = -203662LL;

	t61 = (((x281|x282)+x283)%x284);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x286 = 14U;
	uint16_t x287 = UINT16_MAX;
	static volatile int8_t x288 = INT8_MIN;
	volatile uint32_t t62 = 1452159856U;

	t62 = (((x285|x286)+x287)%x288);

	if (t62 != 98302U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MIN;
	static volatile int16_t x290 = INT16_MIN;
	uint32_t x291 = 27372620U;
	uint8_t x292 = 31U;
	int64_t t63 = 1LL;

	t63 = (((x289|x290)+x291)%x292);

	if (t63 != 22LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -1;
	int32_t x296 = -1;
	volatile uint64_t t64 = 264457540731779652LLU;

	t64 = (((x293|x294)+x295)%x296);

	if (t64 != 150370LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	static int32_t x298 = 47715;
	int8_t x299 = 0;
	volatile int32_t x300 = -5;
	static volatile uint64_t t65 = 1916987734144LLU;

	t65 = (((x297|x298)+x299)%x300);

	if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MAX;
	volatile uint64_t x303 = 37827305127LLU;
	volatile uint16_t x304 = UINT16_MAX;

	t66 = (((x301|x302)+x303)%x304);

	if (t66 != 44381LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = UINT32_MAX;
	static int64_t x311 = -1LL;
	int64_t x312 = INT64_MAX;
	static volatile int64_t t67 = 786426677LL;

	t67 = (((x309|x310)+x311)%x312);

	if (t67 != 4294967294LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x313 = INT16_MAX;
	int64_t x314 = -220903LL;
	static uint8_t x316 = 6U;
	int64_t t68 = -481363LL;

	t68 = (((x313|x314)+x315)%x316);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x317 = 28U;
	volatile int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MAX;
	volatile uint32_t t69 = 56143929U;

	t69 = (((x317|x318)+x319)%x320);

	if (t69 != 2147450879U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint8_t x324 = 7U;
	volatile int64_t t70 = 203035LL;

	t70 = (((x321|x322)+x323)%x324);

	if (t70 != 6LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	volatile int64_t t71 = -2853906660LL;

	t71 = (((x325|x326)+x327)%x328);

	if (t71 != -121LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x329 = 157U;
	int32_t x330 = -1;
	volatile uint16_t x331 = 32637U;
	int64_t x332 = INT64_MAX;
	volatile int64_t t72 = -32017621620LL;

	t72 = (((x329|x330)+x331)%x332);

	if (t72 != 32636LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = 1126U;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MAX;
	volatile uint32_t t73 = 14U;

	t73 = (((x333|x334)+x335)%x336);

	if (t73 != 101U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = 6;
	int32_t x339 = -2922;
	uint32_t t74 = 1006616U;

	t74 = (((x337|x338)+x339)%x340);

	if (t74 != 8U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = 19;
	volatile int64_t x343 = -1LL;
	int32_t x344 = INT32_MAX;
	int64_t t75 = -163415LL;

	t75 = (((x341|x342)+x343)%x344);

	if (t75 != 126LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x345 = 0;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = 1U;
	int32_t t76 = -29;

	t76 = (((x345|x346)+x347)%x348);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = INT64_MAX;
	static volatile int64_t t77 = -1LL;

	t77 = (((x349|x350)+x351)%x352);

	if (t77 != -32769LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -1;
	volatile int32_t x364 = INT32_MIN;
	volatile uint32_t t78 = 32169U;

	t78 = (((x361|x362)+x363)%x364);

	if (t78 != 2147483646U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x365 = INT32_MIN;
	int64_t x366 = 16727209LL;
	uint16_t x367 = 3668U;
	uint16_t x368 = UINT16_MAX;
	static volatile int64_t t79 = -520865LL;

	t79 = (((x365|x366)+x367)%x368);

	if (t79 != -13316LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = 198191;
	volatile int64_t x370 = -7LL;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = -856028696LL;
	int64_t t80 = 3896918LL;

	t80 = (((x369|x370)+x371)%x372);

	if (t80 != 254LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = 3U;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = 3051360401799LLU;
	uint64_t x376 = 2682266LLU;

	t81 = (((x373|x374)+x375)%x376);

	if (t81 != 1156104LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = 853U;
	uint16_t x378 = UINT16_MAX;
	static volatile int8_t x380 = -1;
	int32_t t82 = -401674363;

	t82 = (((x377|x378)+x379)%x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x382 = -5;
	int32_t x384 = -5352;

	t83 = (((x381|x382)+x383)%x384);

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = 100LL;

	t84 = (((x385|x386)+x387)%x388);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	static int64_t x396 = -1LL;
	int64_t t85 = 16262099901LL;

	t85 = (((x393|x394)+x395)%x396);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MAX;
	uint32_t x400 = 263561780U;
	uint32_t t86 = 359U;

	t86 = (((x397|x398)+x399)%x400);

	if (t86 != 77978815U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 72U;
	int32_t x402 = INT32_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	uint32_t t87 = 7890U;

	t87 = (((x401|x402)+x403)%x404);

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x407 = 7;
	int16_t x408 = 4209;

	t88 = (((x405|x406)+x407)%x408);

	if (t88 != 3355) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = -180;
	int64_t x410 = 23355664LL;
	int32_t x411 = -16717;
	int32_t x412 = -1;
	volatile int64_t t89 = 5LL;

	t89 = (((x409|x410)+x411)%x412);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = -1LL;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 2U;
	volatile int64_t t90 = 3952006344856265494LL;

	t90 = (((x413|x414)+x415)%x416);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x417 = UINT64_MAX;
	uint32_t x418 = UINT32_MAX;
	uint64_t x419 = 56780617744LLU;
	uint32_t x420 = UINT32_MAX;
	uint64_t t91 = 281282684086802268LLU;

	t91 = (((x417|x418)+x419)%x420);

	if (t91 != 946042908LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -2656125494902965LL;
	int32_t x422 = INT32_MIN;
	int8_t x423 = -2;
	int32_t x424 = -1;
	static volatile int64_t t92 = 1LL;

	t92 = (((x421|x422)+x423)%x424);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	volatile int64_t x426 = INT64_MIN;
	uint8_t x427 = 1U;
	static int32_t x428 = INT32_MIN;
	static volatile int64_t t93 = -112118665011LL;

	t93 = (((x425|x426)+x427)%x428);

	if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	volatile int32_t x430 = -1;
	static uint16_t x431 = 2U;
	static volatile int8_t x432 = 1;
	static volatile int32_t t94 = 1;

	t94 = (((x429|x430)+x431)%x432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x433 = UINT64_MAX;
	volatile uint16_t x434 = 11136U;
	int32_t x435 = INT32_MIN;
	int8_t x436 = INT8_MIN;

	t95 = (((x433|x434)+x435)%x436);

	if (t95 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x438 = -1;
	static uint32_t x439 = 1883U;
	volatile uint32_t x440 = UINT32_MAX;
	uint32_t t96 = 114U;

	t96 = (((x437|x438)+x439)%x440);

	if (t96 != 1882U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x441 = UINT32_MAX;
	uint8_t x442 = 2U;
	volatile int64_t x443 = INT64_MIN;
	int64_t x444 = INT64_MIN;
	volatile int64_t t97 = 3729316419722LL;

	t97 = (((x441|x442)+x443)%x444);

	if (t97 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	volatile int32_t t98 = -14;

	t98 = (((x445|x446)+x447)%x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = -256;
	static volatile int64_t x450 = -1LL;
	static uint32_t x451 = 1529613U;
	uint8_t x452 = 2U;
	int64_t t99 = 304719112279558LL;

	t99 = (((x449|x450)+x451)%x452);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

