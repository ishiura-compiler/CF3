#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int32_t t0 = -1058750;
volatile int32_t x8 = INT32_MIN;
volatile int8_t x11 = -1;
volatile uint64_t t2 = 10266LLU;
static int32_t x17 = -212;
int32_t x24 = -2675;
volatile uint8_t x25 = 0U;
int64_t x26 = -143402479815880457LL;
volatile int16_t x30 = -1;
volatile int64_t x33 = -1LL;
uint8_t x34 = UINT8_MAX;
volatile int64_t t8 = -21999515LL;
int64_t x37 = INT64_MIN;
int32_t x44 = INT32_MAX;
int8_t x47 = INT8_MAX;
volatile int32_t t11 = 5265;
int32_t x51 = -2864922;
int16_t x55 = -4773;
int32_t x59 = -34560;
uint8_t x67 = 11U;
uint8_t x69 = 0U;
static int32_t x73 = -90648;
int32_t x74 = -1;
int16_t x77 = -1;
static uint64_t x78 = 8828LLU;
int32_t x86 = 461;
volatile int16_t x96 = -1;
int64_t x97 = 3078755LL;
uint32_t x100 = UINT32_MAX;
int16_t x106 = 298;
volatile uint16_t x111 = 18U;
volatile int8_t x112 = 0;
int64_t x113 = INT64_MIN;
volatile int64_t t30 = -1378099313082456LL;
static int16_t x126 = -7588;
uint16_t x128 = UINT16_MAX;
int32_t t31 = 1;
static volatile int64_t x138 = 1158929LL;
static volatile int32_t x140 = INT32_MIN;
int16_t x143 = INT16_MIN;
uint8_t x146 = 11U;
int32_t x149 = -1;
static int8_t x151 = -30;
volatile int8_t x154 = INT8_MAX;
int8_t x157 = -1;
static volatile int8_t x161 = 1;
volatile uint8_t x165 = 71U;
int32_t x172 = -1;
static int64_t x177 = INT64_MIN;
volatile int64_t t44 = 3LL;
volatile uint16_t x192 = 40U;
static int64_t x193 = INT64_MIN;
uint32_t x194 = 15291U;
volatile int64_t t47 = 145LL;
uint32_t x216 = 482855194U;
volatile int16_t x218 = -1;
int8_t x223 = 0;
static int8_t x224 = INT8_MIN;
int16_t x228 = INT16_MIN;
volatile int32_t x231 = INT32_MIN;
int64_t x232 = INT64_MIN;
int16_t x237 = INT16_MIN;
int32_t x240 = 275188557;
static int32_t t58 = 378838;
int8_t x251 = INT8_MAX;
uint16_t x253 = UINT16_MAX;
static volatile int64_t x257 = -967349LL;
uint64_t x281 = UINT64_MAX;
int16_t x285 = -11939;
volatile int16_t x296 = INT16_MAX;
uint8_t x300 = 6U;
int16_t x304 = 21;
static uint64_t t74 = 2LLU;
volatile uint64_t t75 = 191LLU;
uint32_t x324 = 1U;
volatile uint64_t t78 = 5138191LLU;
int16_t x325 = -1;
volatile int16_t x326 = INT16_MIN;
int16_t x327 = INT16_MIN;
int32_t t80 = -13943394;
static uint8_t x333 = UINT8_MAX;
volatile int16_t x334 = INT16_MIN;
uint16_t x335 = 5U;
int64_t x339 = -446729234079660082LL;
uint8_t x343 = 0U;
int64_t x346 = 146821815628214471LL;
int16_t x347 = -1;
uint64_t x356 = UINT64_MAX;
uint64_t t86 = 964000LLU;
int64_t x357 = INT64_MIN;
int16_t x360 = INT16_MIN;
int64_t t87 = -2044543484699LL;
int16_t x366 = INT16_MAX;
static int16_t x368 = -1750;
int32_t t91 = -1239150;
uint16_t x377 = 10U;
int8_t x378 = INT8_MIN;
int64_t x387 = INT64_MAX;
int16_t x391 = INT16_MIN;
int16_t x393 = INT16_MIN;
uint64_t x398 = UINT64_MAX;
volatile int32_t x399 = INT32_MIN;
volatile uint16_t x408 = 51U;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	static int16_t x2 = INT16_MIN;
	int32_t x4 = INT32_MAX;

	t0 = (x1/((x2&x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int16_t x6 = -1522;
	int64_t x7 = INT64_MIN;
	int64_t t1 = 13473780801885LL;

	t1 = (x5/((x6&x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 2U;
	uint64_t x10 = 2099LLU;
	int16_t x12 = INT16_MIN;

	t2 = (x9/((x10&x11)^x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -157552550;
	int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	int64_t x16 = -10LL;
	volatile int64_t t3 = 32632734801540116LL;

	t3 = (x13/((x14&x15)^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 19406U;
	volatile int8_t x19 = -2;
	int16_t x20 = 651;
	int32_t t4 = 1575;

	t4 = (x17/((x18&x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MAX;
	uint16_t x23 = 2999U;
	volatile int32_t t5 = 795464;

	t5 = (x21/((x22&x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x27 = 1296435U;
	uint8_t x28 = 126U;
	int64_t t6 = -104985LL;

	t6 = (x25/((x26&x27)^x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	uint16_t x31 = 114U;
	static int64_t x32 = -913683LL;
	int64_t t7 = 0LL;

	t7 = (x29/((x30&x31)^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;

	t8 = (x33/((x34&x35)^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -3;
	static uint32_t x39 = 1667730U;
	volatile int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = -162413426678LL;

	t9 = (x37/((x38&x39)^x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 856538962;
	uint64_t x42 = UINT64_MAX;
	volatile int8_t x43 = 15;
	volatile uint64_t t10 = 653205817681891LLU;

	t10 = (x41/((x42&x43)^x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	volatile uint8_t x46 = 0U;
	static uint16_t x48 = UINT16_MAX;

	t11 = (x45/((x46&x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int8_t x50 = -1;
	int64_t x52 = 608640687510924344LL;
	static volatile int64_t t12 = 2341592776340961456LL;

	t12 = (x49/((x50&x51)^x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -6873654480383856LL;
	int16_t x56 = -122;
	volatile int64_t t13 = -9715938185LL;

	t13 = (x53/((x54&x55)^x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 126469166LLU;
	volatile int32_t x58 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t14 = 129692987698283126LLU;

	t14 = (x57/((x58&x59)^x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -20;
	uint32_t x62 = 9U;
	int8_t x63 = 0;
	int32_t x64 = -1;
	uint32_t t15 = 10U;

	t15 = (x61/((x62&x63)^x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 2026;
	static int32_t x66 = INT32_MIN;
	static uint8_t x68 = 79U;
	static volatile int32_t t16 = -25171202;

	t16 = (x65/((x66&x67)^x68));

	if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 21;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = -1;
	volatile int32_t t17 = 82429;

	t17 = (x69/((x70&x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x75 = 61911U;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t18 = 761U;

	t18 = (x73/((x74&x75)^x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 37U;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t19 = 11627097910LLU;

	t19 = (x77/((x78&x79)^x80));

	if (t19 != 84231708099130372LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 3;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t20 = 82491775865510490LLU;

	t20 = (x81/((x82&x83)^x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 35463047083337409LL;
	uint16_t x87 = 1U;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t21 = 3LL;

	t21 = (x85/((x86&x87)^x88));

	if (t21 != 8256884LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = 63;
	int64_t x91 = INT64_MIN;
	uint16_t x92 = 12U;
	int64_t t22 = -1710034586473217LL;

	t22 = (x89/((x90&x91)^x92));

	if (t22 != 21LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	volatile uint64_t x95 = 142085519618477293LLU;
	uint64_t t23 = 126887007337594LLU;

	t23 = (x93/((x94&x95)^x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x98 = 462427356U;
	uint8_t x99 = 28U;
	int64_t t24 = 5223345856171487LL;

	t24 = (x97/((x98&x99)^x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -1;
	int64_t x103 = INT64_MIN;
	volatile int64_t x104 = 431177347994117LL;
	volatile int64_t t25 = 295759872LL;

	t25 = (x101/((x102&x103)^x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 29968LL;
	volatile uint8_t x107 = 2U;
	int32_t x108 = -1;
	int64_t t26 = -1617591LL;

	t26 = (x105/((x106&x107)^x108));

	if (t26 != -9989LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	static int16_t x110 = -1;
	int32_t t27 = 6771;

	t27 = (x109/((x110&x111)^x112));

	if (t27 != 14) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = 9U;
	static volatile uint8_t x115 = 58U;
	int8_t x116 = -1;
	volatile int64_t t28 = -580660LL;

	t28 = (x113/((x114&x115)^x116));

	if (t28 != -2147483652LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	int32_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	static int8_t x120 = 0;
	volatile int32_t t29 = 30811464;

	t29 = (x117/((x118&x119)^x120));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MAX;
	int64_t x124 = -138728968618LL;

	t30 = (x121/((x122&x123)^x124));

	if (t30 != -66692774LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = 547702;
	int32_t x127 = INT32_MIN;

	t31 = (x125/((x126&x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 346061140U;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = 15;
	int32_t x132 = INT32_MAX;
	uint32_t t32 = 1556693122U;

	t32 = (x129/((x130&x131)^x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 740385U;
	uint32_t t33 = 233802643U;

	t33 = (x133/((x134&x135)^x136));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MIN;
	uint8_t x139 = UINT8_MAX;
	volatile int64_t t34 = 66265263LL;

	t34 = (x137/((x138&x139)^x140));

	if (t34 != 4294967330LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	static int64_t x142 = -1LL;
	int64_t x144 = INT64_MAX;
	volatile int64_t t35 = -2LL;

	t35 = (x141/((x142&x143)^x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -319;
	int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MAX;
	int32_t t36 = -110;

	t36 = (x145/((x146&x147)^x148));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x150 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	uint32_t t37 = 15U;

	t37 = (x149/((x150&x151)^x152));

	if (t37 != 131192U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	static uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = 0;
	int64_t t38 = 181888941944LL;

	t38 = (x153/((x154&x155)^x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x158 = -2;
	static int8_t x159 = 1;
	int32_t x160 = INT32_MIN;
	int32_t t39 = 5147420;

	t39 = (x157/((x158&x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x162 = 117U;
	static int32_t x163 = -7047;
	int32_t x164 = 155;
	int32_t t40 = 364002;

	t40 = (x161/((x162&x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 152545490U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = 2;
	volatile uint32_t t41 = 1713626U;

	t41 = (x165/((x166&x167)^x168));

	if (t41 != 35U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	int64_t x170 = 41246724LL;
	int64_t x171 = 12387665344313LL;
	int64_t t42 = 2175414025LL;

	t42 = (x169/((x170&x171)^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile int64_t x174 = INT64_MAX;
	volatile uint32_t x175 = 19U;
	uint32_t x176 = UINT32_MAX;
	static int64_t t43 = -914398169721LL;

	t43 = (x173/((x174&x175)^x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -8923186790006142LL;
	int32_t x179 = INT32_MIN;
	uint8_t x180 = UINT8_MAX;

	t44 = (x177/((x178&x179)^x180));

	if (t44 != 1033LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 12671U;
	int64_t x182 = INT64_MIN;
	uint8_t x183 = UINT8_MAX;
	static volatile uint16_t x184 = UINT16_MAX;
	int64_t t45 = -1LL;

	t45 = (x181/((x182&x183)^x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 7U;
	volatile int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int32_t t46 = 56739188;

	t46 = (x189/((x190&x191)^x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x195 = -1;
	int8_t x196 = INT8_MIN;

	t47 = (x193/((x194&x195)^x196));

	if (t47 != -2147491298LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x197 = 198335805477LLU;
	uint16_t x198 = 1406U;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	static volatile uint64_t t48 = 4185120884094231299LLU;

	t48 = (x197/((x198&x199)^x200));

	if (t48 != 3026410LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = 3648;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 389401118559LLU;
	uint64_t t49 = 38910491835529LLU;

	t49 = (x201/((x202&x203)^x204));

	if (t49 != 47372087LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = -2;
	static int64_t x206 = 176157LL;
	volatile int64_t x207 = 12231852118LL;
	int64_t x208 = INT64_MAX;
	int64_t t50 = -12121694649LL;

	t50 = (x205/((x206&x207)^x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -126LL;
	volatile uint16_t x210 = 5U;
	int32_t x211 = -130490036;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t51 = 19341089576340866LL;

	t51 = (x209/((x210&x211)^x212));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	static int16_t x214 = INT16_MAX;
	int8_t x215 = -1;
	volatile uint32_t t52 = 2U;

	t52 = (x213/((x214&x215)^x216));

	if (t52 != 8U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x217 = 37729;
	int64_t x219 = 140633798605871382LL;
	static int64_t x220 = INT64_MAX;
	static int64_t t53 = -2483LL;

	t53 = (x217/((x218&x219)^x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 0;
	uint8_t x222 = 2U;
	volatile int32_t t54 = 7;

	t54 = (x221/((x222&x223)^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = 1LLU;
	static uint16_t x226 = 148U;
	uint16_t x227 = 59U;
	volatile uint64_t t55 = 2224251784LLU;

	t55 = (x225/((x226&x227)^x228));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	volatile uint64_t x230 = UINT64_MAX;
	uint64_t t56 = 0LLU;

	t56 = (x229/((x230&x231)^x232));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MAX;
	static uint64_t x234 = 5043286LLU;
	uint8_t x235 = 3U;
	int16_t x236 = INT16_MAX;
	volatile uint64_t t57 = 77926809944LLU;

	t57 = (x233/((x234&x235)^x236));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 3U;
	int32_t x239 = 176104;

	t58 = (x237/((x238&x239)^x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = INT8_MAX;
	volatile int16_t x242 = 1;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	int64_t t59 = 86941964876447644LL;

	t59 = (x241/((x242&x243)^x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 1U;
	int32_t x252 = -3760;
	uint32_t t60 = 2162U;

	t60 = (x249/((x250&x251)^x252));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = INT32_MAX;
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = 15131058;
	volatile int32_t t61 = 254187;

	t61 = (x253/((x254&x255)^x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x258 = INT16_MAX;
	volatile int32_t x259 = -1;
	volatile uint64_t x260 = 518LLU;
	uint64_t t62 = 16113LLU;

	t62 = (x257/((x258&x259)^x260));

	if (t62 != 572009801039058LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MIN;
	volatile int64_t t63 = 6578061054738LL;

	t63 = (x261/((x262&x263)^x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 41079683LLU;
	volatile uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 116U;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t64 = 5510645020067396LLU;

	t64 = (x265/((x266&x267)^x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -3;
	int8_t x270 = -23;
	volatile int16_t x271 = 8;
	static int8_t x272 = -1;
	volatile int32_t t65 = 1;

	t65 = (x269/((x270&x271)^x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x273 = UINT32_MAX;
	volatile int16_t x274 = -11;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = UINT64_MAX;
	uint64_t t66 = 227017061407241566LLU;

	t66 = (x273/((x274&x275)^x276));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 11U;
	static uint16_t x278 = 439U;
	static volatile int16_t x279 = -1;
	int64_t x280 = -52395465905254LL;
	int64_t t67 = 7739532LL;

	t67 = (x277/((x278&x279)^x280));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = -61304;
	volatile int32_t x283 = -650;
	int32_t x284 = -1;
	uint64_t t68 = 74266612LLU;

	t68 = (x281/((x282&x283)^x284));

	if (t68 != 300244861955916LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x286 = INT8_MAX;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int16_t x288 = INT16_MAX;
	int32_t t69 = 206;

	t69 = (x285/((x286&x287)^x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 622U;
	static volatile int16_t x290 = INT16_MAX;
	static int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	volatile int64_t t70 = -1055233256LL;

	t70 = (x289/((x290&x291)^x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = 3517234325LL;
	uint32_t x295 = UINT32_MAX;
	volatile uint64_t t71 = 4067LLU;

	t71 = (x293/((x294&x295)^x296));

	if (t71 != 5244670441LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 651314296U;
	static volatile int64_t x298 = 93LL;
	int8_t x299 = INT8_MIN;
	volatile int64_t t72 = 1585LL;

	t72 = (x297/((x298&x299)^x300));

	if (t72 != 108552382LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 207U;
	int8_t x302 = INT8_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	volatile uint32_t t73 = 2920U;

	t73 = (x301/((x302&x303)^x304));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = 2171237;
	static uint64_t x306 = 2382LLU;
	int32_t x307 = -1;
	uint16_t x308 = 0U;

	t74 = (x305/((x306&x307)^x308));

	if (t74 != 911LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	static uint64_t x310 = 544LLU;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;

	t75 = (x309/((x310&x311)^x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = 1293;
	static volatile int64_t x314 = INT64_MIN;
	volatile int16_t x315 = -295;
	volatile uint32_t x316 = UINT32_MAX;
	int64_t t76 = 15234463301LL;

	t76 = (x313/((x314&x315)^x316));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x317 = 11U;
	volatile int32_t x318 = -3664;
	static int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t77 = -795009532601LL;

	t77 = (x317/((x318&x319)^x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -1051847963027146LL;
	volatile uint64_t x322 = UINT64_MAX;
	int16_t x323 = 30;

	t78 = (x321/((x322&x323)^x324));

	if (t78 != 595022329862791111LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x328 = 28808U;
	volatile uint32_t t79 = 19U;

	t79 = (x325/((x326&x327)^x328));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;

	t80 = (x329/((x330&x331)^x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x336 = 10457U;
	int32_t t81 = 2;

	t81 = (x333/((x334&x335)^x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	uint16_t x338 = UINT16_MAX;
	static int32_t x340 = INT32_MAX;
	int64_t t82 = -1692LL;

	t82 = (x337/((x338&x339)^x340));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 0U;
	uint32_t x342 = UINT32_MAX;
	static int8_t x344 = INT8_MAX;
	static volatile uint32_t t83 = 153562056U;

	t83 = (x341/((x342&x343)^x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x345 = 147951523LLU;
	volatile int16_t x348 = -1;
	volatile uint64_t t84 = 17715002LLU;

	t84 = (x345/((x346&x347)^x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	volatile uint16_t x351 = 4U;
	uint64_t x352 = 951739119473047LLU;
	volatile uint64_t t85 = 480144513364152LLU;

	t85 = (x349/((x350&x351)^x352));

	if (t85 != 19382LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int32_t x355 = -2;

	t86 = (x353/((x354&x355)^x356));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x358 = 2;
	int64_t x359 = 1215283509022412975LL;

	t87 = (x357/((x358&x359)^x360));

	if (t87 != 281492157628480LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	static uint16_t x362 = 14U;
	volatile int8_t x363 = 29;
	volatile int64_t x364 = -13520LL;
	int64_t t88 = -83637LL;

	t88 = (x361/((x362&x363)^x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -637;
	int16_t x367 = INT16_MIN;
	static volatile int32_t t89 = -35222;

	t89 = (x365/((x366&x367)^x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x369 = 235816U;
	uint8_t x370 = 63U;
	uint8_t x371 = UINT8_MAX;
	volatile uint16_t x372 = 12U;
	uint32_t t90 = 714782190U;

	t90 = (x369/((x370&x371)^x372));

	if (t90 != 4623U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int16_t x374 = -745;
	static volatile int32_t x375 = -1;
	int8_t x376 = 21;

	t91 = (x373/((x374&x375)^x376));

	if (t91 != -85) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t92 = 55456184LL;

	t92 = (x377/((x378&x379)^x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = -9;
	static int16_t x382 = INT16_MAX;
	int8_t x383 = 5;
	volatile int64_t x384 = -2878601017170553LL;
	static volatile int64_t t93 = 6877LL;

	t93 = (x381/((x382&x383)^x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 93841279LLU;
	int32_t x386 = INT32_MIN;
	static volatile int16_t x388 = -1;
	static uint64_t t94 = 2729754700862815904LLU;

	t94 = (x385/((x386&x387)^x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 3036523824949LLU;
	volatile int32_t x390 = INT32_MIN;
	uint32_t x392 = 9U;
	static volatile uint64_t t95 = 32563850LLU;

	t95 = (x389/((x390&x391)^x392));

	if (t95 != 1413LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x394 = 1739861818383082LLU;
	int16_t x395 = -2;
	uint64_t x396 = 7LLU;
	uint64_t t96 = 130153762848363602LLU;

	t96 = (x393/((x394&x395)^x396));

	if (t96 != 10602LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 38U;
	int16_t x400 = -427;
	volatile uint64_t t97 = 9621740266LLU;

	t97 = (x397/((x398&x399)^x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x403 = 11;
	int8_t x404 = INT8_MAX;
	static int32_t t98 = -3886;

	t98 = (x401/((x402&x403)^x404));

	if (t98 != -258) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x405 = 17U;
	volatile int16_t x406 = -63;
	int64_t x407 = -1LL;
	static volatile int64_t t99 = -689434311426LL;

	t99 = (x405/((x406&x407)^x408));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

