#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int32_t t1 = -965915414;
static volatile int64_t x12 = -1LL;
int64_t t5 = -14520581379LL;
uint32_t x25 = 0U;
int32_t t7 = 11232857;
uint32_t x40 = 206611U;
int8_t x50 = INT8_MIN;
int8_t x52 = 1;
int16_t x53 = 0;
int32_t t12 = -1006702;
uint16_t x64 = 5U;
int16_t x69 = INT16_MAX;
int64_t x78 = INT64_MIN;
volatile int32_t t18 = -73496974;
uint32_t x96 = 49370U;
int8_t x103 = -1;
uint8_t x108 = 13U;
int32_t t21 = -740080199;
int8_t x126 = 0;
int32_t t25 = 2556;
static volatile int32_t t26 = 149432800;
uint64_t x136 = UINT64_MAX;
uint64_t t27 = 4338855250826252705LLU;
volatile int8_t x138 = -1;
int32_t x142 = INT32_MIN;
int8_t x145 = INT8_MAX;
uint32_t x149 = 3266253U;
static volatile uint16_t x151 = UINT16_MAX;
uint32_t x152 = 1701094006U;
volatile uint32_t t31 = 63292889U;
int64_t x164 = 1574LL;
static int64_t t33 = 3118484LL;
volatile uint32_t x173 = UINT32_MAX;
static int64_t x175 = -1LL;
int64_t t36 = -761050713529809619LL;
int8_t x177 = INT8_MIN;
uint8_t x181 = UINT8_MAX;
volatile int32_t x190 = INT32_MIN;
int8_t x195 = INT8_MIN;
int16_t x198 = 419;
uint32_t x203 = 110484U;
int8_t x215 = 0;
int64_t x227 = INT64_MIN;
volatile int32_t t48 = -494724;
int32_t x242 = -4705712;
volatile uint16_t x244 = 3U;
volatile int64_t x251 = INT64_MAX;
static int16_t x254 = -1;
int32_t t54 = 23;
uint8_t x261 = 1U;
int8_t x262 = -1;
int16_t x265 = -1;
volatile int32_t t57 = 132586782;
uint16_t x280 = 123U;
uint8_t x284 = 1U;
volatile int32_t t60 = -8941;
uint16_t x285 = 116U;
static int32_t x286 = -1;
volatile uint8_t x288 = 113U;
int16_t x292 = INT16_MAX;
int16_t x294 = INT16_MIN;
static volatile uint32_t t63 = 27U;
int16_t x298 = INT16_MAX;
volatile int32_t t64 = -44738221;
int32_t x302 = 24870535;
int8_t x305 = -1;
static int8_t x310 = -1;
int64_t x313 = INT64_MIN;
uint32_t x314 = 27423U;
static int16_t x318 = -1;
uint16_t x324 = 1U;
int32_t t70 = 14065581;
volatile int32_t t71 = -568962175;
volatile int8_t x329 = 1;
volatile uint64_t x344 = UINT64_MAX;
volatile int16_t x347 = -1;
volatile int32_t t75 = 8258815;
static int8_t x352 = INT8_MAX;
volatile int32_t x358 = INT32_MIN;
static int32_t x360 = -118;
uint32_t x361 = 1954080440U;
int8_t x366 = -3;
int64_t x368 = -1LL;
volatile int64_t t80 = -70LL;
int16_t x379 = -1;
uint32_t x380 = 2013198U;
int32_t x384 = 340302293;
uint8_t x405 = 6U;
volatile uint8_t x406 = UINT8_MAX;
int8_t x414 = -29;
int32_t t92 = 1167778;
int8_t x426 = INT8_MAX;
volatile int16_t x430 = 104;
volatile int16_t x440 = 110;


void f0(void) {
	int64_t x1 = 707039LL;
	static int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MIN;
	volatile uint32_t t0 = 409U;

	t0 = ((x1==(x2^x3))-x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MAX;

	t1 = ((x5==(x6^x7))-x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	uint32_t x10 = 10134U;
	volatile int32_t x11 = INT32_MAX;
	volatile int64_t t2 = -1599259508917694188LL;

	t2 = ((x9==(x10^x11))-x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	static int16_t x14 = -1;
	uint32_t x15 = 43953682U;
	int8_t x16 = -2;
	static volatile int32_t t3 = 459618;

	t3 = ((x13==(x14^x15))-x16);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1283U;
	int16_t x18 = INT16_MIN;
	volatile int16_t x19 = INT16_MIN;
	int32_t x20 = -39;
	static int32_t t4 = 3;

	t4 = ((x17==(x18^x19))-x20);

	if (t4 != 39) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 270353;
	uint8_t x22 = UINT8_MAX;
	static int8_t x23 = 1;
	int64_t x24 = 1608LL;

	t5 = ((x21==(x22^x23))-x24);

	if (t5 != -1608LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x26 = 196LLU;
	int16_t x27 = INT16_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	static int32_t t6 = -2096785;

	t6 = ((x25==(x26^x27))-x28);

	if (t6 != -65535) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	volatile int32_t x30 = INT32_MAX;
	int64_t x31 = 27919076234489184LL;
	int8_t x32 = -1;

	t7 = ((x29==(x30^x31))-x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -485;
	volatile int32_t x38 = -278219642;
	int32_t x39 = INT32_MAX;
	volatile uint32_t t8 = 350551102U;

	t8 = ((x37==(x38^x39))-x40);

	if (t8 != 4294760685U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	int16_t x42 = -541;
	static int8_t x43 = -3;
	int64_t x44 = -4LL;
	static volatile int64_t t9 = 1260LL;

	t9 = ((x41==(x42^x43))-x44);

	if (t9 != 4LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 112739718920332LL;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 1;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 23;

	t10 = ((x45==(x46^x47))-x48);

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile int64_t x51 = INT64_MIN;
	static int32_t t11 = -495891;

	t11 = ((x49==(x50^x51))-x52);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x54 = -1;
	static uint64_t x55 = 43690714925254867LLU;
	volatile uint8_t x56 = 91U;

	t12 = ((x53==(x54^x55))-x56);

	if (t12 != -91) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	volatile int16_t x58 = 140;
	static uint8_t x59 = UINT8_MAX;
	volatile int32_t x60 = -311124;
	volatile int32_t t13 = -1067622;

	t13 = ((x57==(x58^x59))-x60);

	if (t13 != 311124) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 38213U;
	int64_t x63 = INT64_MAX;
	volatile int32_t t14 = -187;

	t14 = ((x61==(x62^x63))-x64);

	if (t14 != -5) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	int64_t x72 = -3412843175498941LL;
	volatile int64_t t15 = -414572LL;

	t15 = ((x69==(x70^x71))-x72);

	if (t15 != 3412843175498941LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = -1;
	static uint8_t x79 = 59U;
	uint32_t x80 = 3741106U;
	volatile uint32_t t16 = 11456U;

	t16 = ((x77==(x78^x79))-x80);

	if (t16 != 4291226190U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 8U;
	static int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MIN;
	static int8_t x84 = 1;
	int32_t t17 = 325391545;

	t17 = ((x81==(x82^x83))-x84);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 756311U;
	volatile int32_t x86 = INT32_MAX;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;

	t18 = ((x85==(x86^x87))-x88);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 1453U;
	volatile uint16_t x94 = UINT16_MAX;
	static int16_t x95 = INT16_MIN;
	volatile uint32_t t19 = 5U;

	t19 = ((x93==(x94^x95))-x96);

	if (t19 != 4294917926U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 1;
	int16_t x102 = INT16_MAX;
	uint64_t x104 = 414776433440010705LLU;
	volatile uint64_t t20 = 2474LLU;

	t20 = ((x101==(x102^x103))-x104);

	if (t20 != 18031967640269540911LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	int32_t x107 = INT32_MIN;

	t21 = ((x105==(x106^x107))-x108);

	if (t21 != -13) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -1LL;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t22 = 1008780;

	t22 = ((x109==(x110^x111))-x112);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 1300548LL;
	static int8_t x114 = INT8_MIN;
	static int64_t x115 = -1LL;
	int8_t x116 = -1;
	int32_t t23 = -648662;

	t23 = ((x113==(x114^x115))-x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = INT32_MAX;
	int16_t x119 = -1;
	volatile uint16_t x120 = 22U;
	int32_t t24 = -13;

	t24 = ((x117==(x118^x119))-x120);

	if (t24 != -22) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = -7253;
	static volatile int32_t x127 = -1;
	static uint8_t x128 = 7U;

	t25 = ((x125==(x126^x127))-x128);

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = 1;
	int16_t x130 = -3678;
	int8_t x131 = INT8_MAX;
	volatile int16_t x132 = INT16_MIN;

	t26 = ((x129==(x130^x131))-x132);

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = 2;
	static volatile int8_t x134 = 0;
	int32_t x135 = 127;

	t27 = ((x133==(x134^x135))-x136);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x137 = UINT8_MAX;
	uint32_t x139 = 283592U;
	volatile int32_t x140 = 19277;
	volatile int32_t t28 = 4984775;

	t28 = ((x137==(x138^x139))-x140);

	if (t28 != -19277) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -1834706200LL;
	static volatile int8_t x143 = INT8_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t29 = -1;

	t29 = ((x141==(x142^x143))-x144);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t30 = 1380U;

	t30 = ((x145==(x146^x147))-x148);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x150 = INT16_MIN;

	t31 = ((x149==(x150^x151))-x152);

	if (t31 != 2593873290U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x153 = 28418554U;
	static volatile int64_t x154 = -1LL;
	int8_t x155 = 5;
	int64_t x156 = -1LL;
	volatile int64_t t32 = -2200807817844772828LL;

	t32 = ((x153==(x154^x155))-x156);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x161 = 222898915LLU;
	uint64_t x162 = 978357928109LLU;
	volatile int32_t x163 = INT32_MIN;

	t33 = ((x161==(x162^x163))-x164);

	if (t33 != -1574LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	static int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MIN;
	int32_t t34 = 1801;

	t34 = ((x165==(x166^x167))-x168);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x169 = 7U;
	int32_t x170 = INT32_MAX;
	uint32_t x171 = 3240251U;
	uint64_t x172 = 592537054840LLU;
	volatile uint64_t t35 = 982314865442563LLU;

	t35 = ((x169==(x170^x171))-x172);

	if (t35 != 18446743481172496776LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x174 = -1;
	int64_t x176 = -12402477763LL;

	t36 = ((x173==(x174^x175))-x176);

	if (t36 != 12402477763LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	int64_t x180 = -1LL;
	volatile int64_t t37 = 9089176903LL;

	t37 = ((x177==(x178^x179))-x180);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x182 = UINT16_MAX;
	int16_t x183 = -1;
	int32_t x184 = -178;
	int32_t t38 = 213702;

	t38 = ((x181==(x182^x183))-x184);

	if (t38 != 178) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 6082U;
	int16_t x191 = 3885;
	int16_t x192 = INT16_MIN;
	volatile int32_t t39 = -20803;

	t39 = ((x189==(x190^x191))-x192);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = -1;
	int8_t x194 = 12;
	static int16_t x196 = -1;
	volatile int32_t t40 = 6758;

	t40 = ((x193==(x194^x195))-x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = 0LL;
	int16_t x199 = INT16_MIN;
	volatile int8_t x200 = 0;
	int32_t t41 = 621;

	t41 = ((x197==(x198^x199))-x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x201 = -27;
	volatile uint8_t x202 = 0U;
	uint16_t x204 = 14557U;
	static volatile int32_t t42 = -12;

	t42 = ((x201==(x202^x203))-x204);

	if (t42 != -14557) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x209 = 4U;
	volatile int8_t x210 = -1;
	static int32_t x211 = -1;
	int8_t x212 = -6;
	int32_t t43 = -3228;

	t43 = ((x209==(x210^x211))-x212);

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MAX;
	static int32_t x214 = INT32_MIN;
	int16_t x216 = -1;
	volatile int32_t t44 = -1220;

	t44 = ((x213==(x214^x215))-x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = INT8_MIN;
	volatile int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	int8_t x220 = -1;
	static volatile int32_t t45 = 1;

	t45 = ((x217==(x218^x219))-x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x221 = INT64_MAX;
	int8_t x222 = INT8_MIN;
	static int64_t x223 = INT64_MAX;
	int32_t x224 = -376796565;
	volatile int32_t t46 = -3056485;

	t46 = ((x221==(x222^x223))-x224);

	if (t46 != 376796565) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	uint64_t x228 = 8978911353698249LLU;
	uint64_t t47 = 8539600367565970LLU;

	t47 = ((x225==(x226^x227))-x228);

	if (t47 != 18437765162355853367LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MAX;
	static int16_t x230 = INT16_MIN;
	uint64_t x231 = 365LLU;
	int8_t x232 = -14;

	t48 = ((x229==(x230^x231))-x232);

	if (t48 != 14) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x233 = -1LL;
	volatile int64_t x234 = -488901LL;
	uint16_t x235 = 5U;
	int8_t x236 = INT8_MAX;
	volatile int32_t t49 = -460;

	t49 = ((x233==(x234^x235))-x236);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = -1LL;
	volatile uint16_t x238 = 3U;
	int16_t x239 = INT16_MAX;
	volatile uint16_t x240 = 14540U;
	int32_t t50 = -31;

	t50 = ((x237==(x238^x239))-x240);

	if (t50 != -14540) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = UINT16_MAX;
	static uint8_t x243 = UINT8_MAX;
	int32_t t51 = 834085;

	t51 = ((x241==(x242^x243))-x244);

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MAX;
	volatile uint64_t x247 = 512612875297LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t52 = -1446336;

	t52 = ((x245==(x246^x247))-x248);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x249 = INT16_MIN;
	static uint16_t x250 = UINT16_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t53 = -56;

	t53 = ((x249==(x250^x251))-x252);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 1910U;
	int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;

	t54 = ((x253==(x254^x255))-x256);

	if (t54 != -65535) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -23;
	volatile uint16_t x258 = UINT16_MAX;
	volatile uint8_t x259 = 54U;
	int64_t x260 = 6LL;
	int64_t t55 = 62978728LL;

	t55 = ((x257==(x258^x259))-x260);

	if (t55 != -6LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x263 = 30843U;
	int16_t x264 = -34;
	volatile int32_t t56 = -402;

	t56 = ((x261==(x262^x263))-x264);

	if (t56 != 34) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x266 = 2U;
	static int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;

	t57 = ((x265==(x266^x267))-x268);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -1LL;
	static volatile uint32_t x274 = 668312U;
	volatile int16_t x275 = INT16_MIN;
	static volatile int16_t x276 = INT16_MAX;
	static int32_t t58 = -5139;

	t58 = ((x273==(x274^x275))-x276);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	uint64_t x279 = 244LLU;
	volatile int32_t t59 = 581455700;

	t59 = ((x277==(x278^x279))-x280);

	if (t59 != -123) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 736922195;
	volatile int64_t x282 = -219662LL;
	int8_t x283 = 7;

	t60 = ((x281==(x282^x283))-x284);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x287 = INT32_MIN;
	volatile int32_t t61 = 38749964;

	t61 = ((x285==(x286^x287))-x288);

	if (t61 != -113) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = 0;
	static volatile int32_t x290 = 122930593;
	int64_t x291 = 2924478LL;
	int32_t t62 = -3895765;

	t62 = ((x289==(x290^x291))-x292);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = 3U;
	int16_t x295 = INT16_MAX;
	static uint32_t x296 = 63235U;

	t63 = ((x293==(x294^x295))-x296);

	if (t63 != 4294904061U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = -367594861LL;
	static int16_t x299 = -1;
	volatile int32_t x300 = -1;

	t64 = ((x297==(x298^x299))-x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 9U;
	volatile int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 2U;
	int32_t t65 = 231626;

	t65 = ((x301==(x302^x303))-x304);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x306 = 0U;
	int64_t x307 = -66384679LL;
	volatile uint64_t x308 = 6132389567463LLU;
	uint64_t t66 = 165950387520LLU;

	t66 = ((x305==(x306^x307))-x308);

	if (t66 != 18446737941319984153LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -1LL;
	int8_t x311 = INT8_MAX;
	int16_t x312 = -15;
	volatile int32_t t67 = -38;

	t67 = ((x309==(x310^x311))-x312);

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x315 = -1;
	int16_t x316 = -7;
	static volatile int32_t t68 = 5399;

	t68 = ((x313==(x314^x315))-x316);

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = UINT16_MAX;
	uint8_t x319 = 26U;
	volatile int8_t x320 = INT8_MIN;
	int32_t t69 = 166;

	t69 = ((x317==(x318^x319))-x320);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x321 = 1833U;
	int64_t x322 = 1042886541690204LL;
	static int32_t x323 = 1001092;

	t70 = ((x321==(x322^x323))-x324);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MAX;
	static int64_t x327 = INT64_MIN;
	int16_t x328 = -1131;

	t71 = ((x325==(x326^x327))-x328);

	if (t71 != 1131) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	static volatile int32_t t72 = 75534;

	t72 = ((x329==(x330^x331))-x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	int16_t x334 = INT16_MIN;
	static volatile uint32_t x335 = 1184682U;
	int32_t x336 = -1;
	static int32_t t73 = -6320172;

	t73 = ((x333==(x334^x335))-x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	int64_t x343 = -37472563LL;
	volatile uint64_t t74 = 2027842205955686102LLU;

	t74 = ((x341==(x342^x343))-x344);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = -1LL;
	static int8_t x346 = 28;
	volatile int8_t x348 = INT8_MIN;

	t75 = ((x345==(x346^x347))-x348);

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = INT32_MIN;
	uint32_t x350 = 58678517U;
	static int8_t x351 = INT8_MIN;
	static int32_t t76 = -229264;

	t76 = ((x349==(x350^x351))-x352);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x353 = INT32_MAX;
	volatile int8_t x354 = INT8_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	int8_t x356 = -17;
	int32_t t77 = -5;

	t77 = ((x353==(x354^x355))-x356);

	if (t77 != 17) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = INT64_MIN;
	volatile uint16_t x359 = 4U;
	int32_t t78 = 29966;

	t78 = ((x357==(x358^x359))-x360);

	if (t78 != 118) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x362 = -1;
	int16_t x363 = 2;
	volatile uint8_t x364 = 7U;
	int32_t t79 = 0;

	t79 = ((x361==(x362^x363))-x364);

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x365 = INT8_MAX;
	volatile int16_t x367 = -1;

	t80 = ((x365==(x366^x367))-x368);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x369 = INT32_MAX;
	uint32_t x370 = 6798772U;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 1683LLU;
	uint64_t t81 = 238346LLU;

	t81 = ((x369==(x370^x371))-x372);

	if (t81 != 18446744073709549933LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = -1;
	int64_t x374 = INT64_MIN;
	static int16_t x375 = INT16_MIN;
	static uint64_t x376 = UINT64_MAX;
	uint64_t t82 = 40644466535296456LLU;

	t82 = ((x373==(x374^x375))-x376);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x377 = INT16_MAX;
	volatile int16_t x378 = INT16_MAX;
	static uint32_t t83 = 0U;

	t83 = ((x377==(x378^x379))-x380);

	if (t83 != 4292954098U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x381 = INT8_MIN;
	int16_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	int32_t t84 = -1;

	t84 = ((x381==(x382^x383))-x384);

	if (t84 != -340302293) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 19U;
	int8_t x386 = INT8_MIN;
	volatile int16_t x387 = 97;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t85 = 2U;

	t85 = ((x385==(x386^x387))-x388);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x393 = 77;
	static uint32_t x394 = 9625U;
	volatile uint64_t x395 = 2356687824300LLU;
	int16_t x396 = INT16_MAX;
	volatile int32_t t86 = 414815648;

	t86 = ((x393==(x394^x395))-x396);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = 6049U;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t87 = 5;

	t87 = ((x397==(x398^x399))-x400);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x401 = -1;
	volatile int16_t x402 = INT16_MIN;
	uint16_t x403 = 27925U;
	int8_t x404 = INT8_MAX;
	static volatile int32_t t88 = -437849350;

	t88 = ((x401==(x402^x403))-x404);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t89 = 325225915;

	t89 = ((x405==(x406^x407))-x408);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x409 = INT8_MIN;
	static uint8_t x410 = UINT8_MAX;
	static uint8_t x411 = UINT8_MAX;
	static int32_t x412 = -1;
	static int32_t t90 = 801437610;

	t90 = ((x409==(x410^x411))-x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x413 = 133263979541LLU;
	int64_t x415 = 7041LL;
	static volatile int64_t x416 = INT64_MAX;
	int64_t t91 = 885895051037092559LL;

	t91 = ((x413==(x414^x415))-x416);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = 0U;
	int8_t x420 = -1;

	t92 = ((x417==(x418^x419))-x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = 16251U;
	volatile uint8_t x422 = UINT8_MAX;
	static int8_t x423 = INT8_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t93 = 72248LLU;

	t93 = ((x421==(x422^x423))-x424);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x425 = -1;
	volatile uint8_t x427 = 0U;
	volatile uint64_t x428 = 5697LLU;
	volatile uint64_t t94 = 2517980LLU;

	t94 = ((x425==(x426^x427))-x428);

	if (t94 != 18446744073709545919LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x429 = 12U;
	int16_t x431 = -68;
	int16_t x432 = INT16_MAX;
	int32_t t95 = -52418;

	t95 = ((x429==(x430^x431))-x432);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = INT64_MAX;
	volatile uint16_t x434 = 6907U;
	int32_t x435 = 202369;
	int64_t x436 = -1LL;
	int64_t t96 = 19924738472309387LL;

	t96 = ((x433==(x434^x435))-x436);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x437 = INT8_MAX;
	volatile int64_t x438 = -1LL;
	static volatile int8_t x439 = INT8_MIN;
	static int32_t t97 = 1;

	t97 = ((x437==(x438^x439))-x440);

	if (t97 != -109) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x441 = UINT64_MAX;
	uint32_t x442 = 13U;
	int32_t x443 = -1;
	int32_t x444 = 376;
	volatile int32_t t98 = -101418020;

	t98 = ((x441==(x442^x443))-x444);

	if (t98 != -376) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = 37;
	uint32_t x446 = 63U;
	int64_t x447 = INT64_MIN;
	int64_t x448 = 1LL;
	int64_t t99 = 1LL;

	t99 = ((x445==(x446^x447))-x448);

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

