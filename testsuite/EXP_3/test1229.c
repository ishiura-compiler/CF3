#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 674288108;
volatile uint32_t x13 = 3U;
uint32_t x14 = UINT32_MAX;
uint32_t t3 = 1284216047U;
uint64_t x18 = 12895562LLU;
int64_t x22 = INT64_MIN;
volatile int8_t x28 = INT8_MIN;
static volatile int16_t x34 = INT16_MAX;
static volatile int16_t x37 = 0;
int32_t x41 = INT32_MIN;
volatile int8_t x46 = -1;
int64_t x47 = -1LL;
volatile int32_t t10 = 8528377;
static int16_t x49 = -25;
int16_t x52 = INT16_MAX;
int64_t x59 = -1LL;
int16_t x63 = INT16_MIN;
int32_t t14 = 256;
volatile int32_t t15 = -30599;
uint8_t x81 = UINT8_MAX;
volatile uint64_t t16 = 1313929LLU;
int32_t t17 = -3670085;
volatile uint64_t x96 = 393726462139555282LLU;
uint32_t x101 = 81744027U;
volatile int16_t x103 = INT16_MIN;
static int64_t x104 = INT64_MAX;
volatile uint64_t t20 = 165321272266258575LLU;
uint8_t x113 = 16U;
volatile uint16_t x129 = 1272U;
static int32_t t25 = 0;
volatile int8_t x146 = INT8_MIN;
int16_t x150 = INT16_MAX;
volatile int32_t t30 = -10174544;
static volatile int16_t x174 = 7071;
int64_t x179 = INT64_MAX;
volatile int32_t t33 = -1198205;
int64_t x181 = INT64_MIN;
static int16_t x183 = -621;
int32_t x184 = INT32_MIN;
int64_t t34 = 86719271LL;
uint64_t x196 = 2LLU;
uint64_t x202 = 26136944082535LLU;
int64_t x204 = -1LL;
volatile uint16_t x208 = 819U;
uint32_t t39 = 23297930U;
int16_t x219 = -165;
uint32_t t41 = 353737770U;
int64_t x227 = -1LL;
int8_t x228 = INT8_MIN;
int8_t x241 = INT8_MAX;
static volatile int64_t x242 = 74950362458213LL;
volatile int8_t x258 = INT8_MIN;
uint8_t x260 = UINT8_MAX;
volatile int32_t x261 = 30;
int16_t x264 = -11;
int8_t x269 = INT8_MIN;
int32_t x278 = -1;
volatile int16_t x298 = -1;
volatile int64_t t56 = -480LL;
int64_t x320 = 561149LL;
int32_t x321 = -1;
static int32_t x323 = 122763;
int32_t x324 = INT32_MAX;
uint32_t x326 = UINT32_MAX;
uint16_t x329 = 3U;
int16_t x331 = INT16_MIN;
uint8_t x332 = 23U;
uint64_t t61 = 18723LLU;
uint16_t x352 = UINT16_MAX;
int64_t x353 = -85875571735204LL;
int64_t x359 = -304880317LL;
uint64_t x365 = 106LLU;
int64_t x371 = INT64_MIN;
uint32_t x373 = UINT32_MAX;
volatile int64_t x375 = -11076489840924545LL;
int16_t x380 = INT16_MAX;
static int16_t x392 = INT16_MIN;
volatile int32_t x405 = INT32_MIN;
int32_t x409 = -44190638;
static int16_t x419 = -1;
volatile uint16_t x423 = 6U;
int32_t t78 = 85788;
volatile uint16_t x425 = 848U;
int16_t x428 = 7;
int32_t x435 = -1;
int64_t x439 = 1796157770LL;
int64_t x442 = -1LL;
int32_t x443 = INT32_MAX;
volatile int32_t x444 = INT32_MIN;
int64_t t83 = 1833057942276662579LL;
int64_t x446 = INT64_MIN;
uint16_t x447 = 1U;
int64_t t84 = 782183LL;
int32_t x455 = INT32_MIN;
volatile uint32_t t85 = 6U;
static int64_t x462 = INT64_MIN;
volatile int64_t t86 = 42171565LL;
int16_t x473 = INT16_MAX;
uint16_t x474 = 6629U;
static volatile uint8_t x475 = 2U;
int16_t x481 = -873;
uint8_t x492 = UINT8_MAX;
int16_t x506 = INT16_MIN;
int64_t t93 = -7647018470741LL;
int32_t x519 = INT32_MIN;
volatile uint8_t x533 = UINT8_MAX;
volatile int16_t x534 = INT16_MIN;
static int8_t x536 = INT8_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 2506U;
	static int8_t x3 = 0;
	static int8_t x4 = 34;

	t0 = ((x1/x2)>>(x3==x4));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MAX;
	static int8_t x7 = 1;
	int64_t x8 = -13805150872463LL;
	volatile uint32_t t1 = 921865U;

	t1 = ((x5/x6)>>(x7==x8));

	if (t1 != 33818640U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = -3998;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 94873587601LL;
	volatile int64_t t2 = 2803311273620186221LL;

	t2 = ((x9/x10)>>(x11==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = INT16_MAX;
	static int16_t x16 = 11;

	t3 = ((x13/x14)>>(x15==x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	uint64_t t4 = 1915625187296294LLU;

	t4 = ((x17/x18)>>(x19==x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static volatile int32_t x23 = INT32_MIN;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 1413552662LL;

	t5 = ((x21/x22)>>(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -14;
	int16_t x26 = -251;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = 85830859;

	t6 = ((x25/x26)>>(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 655056613748758LLU;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 107317847011821LLU;
	uint64_t t7 = 61122271286LLU;

	t7 = ((x33/x34)>>(x35==x36));

	if (t7 != 19991351474LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x38 = 5U;
	int8_t x39 = 1;
	int64_t x40 = INT64_MIN;
	volatile uint32_t t8 = 7366U;

	t8 = ((x37/x38)>>(x39==x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	static uint8_t x43 = 3U;
	static int64_t x44 = INT64_MIN;
	static int32_t t9 = -30043;

	t9 = ((x41/x42)>>(x43==x44));

	if (t9 != 16777216) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	static uint16_t x48 = 208U;

	t10 = ((x45/x46)>>(x47==x48));

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	int64_t x51 = -1LL;
	static int32_t t11 = -308177538;

	t11 = ((x49/x50)>>(x51==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 15108U;
	static int64_t x58 = INT64_MIN;
	int16_t x60 = -1;
	volatile int64_t t12 = 65975768346513LL;

	t12 = ((x57/x58)>>(x59==x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = INT64_MIN;
	int64_t x64 = -1LL;
	static volatile int64_t t13 = -40LL;

	t13 = ((x61/x62)>>(x63==x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 22U;
	uint8_t x66 = 98U;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = -1;

	t14 = ((x65/x66)>>(x67==x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	static int64_t x72 = -107947415022912536LL;

	t15 = ((x69/x70)>>(x71==x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x82 = 100426542572537LLU;
	uint32_t x83 = 148941862U;
	int8_t x84 = -1;

	t16 = ((x81/x82)>>(x83==x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -7;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = -664079LL;
	int8_t x88 = 2;

	t17 = ((x85/x86)>>(x87==x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = -1;
	uint8_t x94 = 106U;
	int16_t x95 = -1;
	volatile int32_t t18 = -1005;

	t18 = ((x93/x94)>>(x95==x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x102 = -1;
	uint32_t t19 = 56436U;

	t19 = ((x101/x102)>>(x103==x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static int8_t x110 = -1;
	static int64_t x111 = 14521783333LL;
	static int64_t x112 = -165934025387984284LL;

	t20 = ((x109/x110)>>(x111==x112));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MAX;
	uint8_t x116 = 0U;
	int32_t t21 = 3;

	t21 = ((x113/x114)>>(x115==x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 5U;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t22 = 8239068452262959LLU;

	t22 = ((x121/x122)>>(x123==x124));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	static int8_t x132 = -6;
	static int64_t t23 = 101919735LL;

	t23 = ((x129/x130)>>(x131==x132));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = 80238422507116LLU;
	volatile int64_t x138 = INT64_MIN;
	volatile int32_t x139 = -1;
	int64_t x140 = INT64_MIN;
	static volatile uint64_t t24 = 185405437863LLU;

	t24 = ((x137/x138)>>(x139==x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	static volatile int32_t x144 = -1;

	t25 = ((x141/x142)>>(x143==x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x145 = UINT64_MAX;
	uint64_t x147 = 1605522661108830018LLU;
	int8_t x148 = -3;
	uint64_t t26 = 750025020012LLU;

	t26 = ((x145/x146)>>(x147==x148));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int64_t x151 = -644632283LL;
	uint16_t x152 = UINT16_MAX;
	int32_t t27 = 2585;

	t27 = ((x149/x150)>>(x151==x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MAX;
	uint8_t x156 = 1U;
	volatile uint32_t t28 = 0U;

	t28 = ((x153/x154)>>(x155==x156));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile int64_t x159 = INT64_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t29 = 38;

	t29 = ((x157/x158)>>(x159==x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x161 = INT8_MIN;
	static int8_t x162 = -4;
	uint16_t x163 = 60U;
	int32_t x164 = -116624;

	t30 = ((x161/x162)>>(x163==x164));

	if (t30 != 32) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x165 = 6U;
	static volatile int32_t x166 = INT32_MIN;
	uint16_t x167 = 249U;
	volatile uint64_t x168 = UINT64_MAX;
	volatile int32_t t31 = -436;

	t31 = ((x165/x166)>>(x167==x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x173 = 79U;
	volatile int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	int32_t t32 = -430258784;

	t32 = ((x173/x174)>>(x175==x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MAX;
	static volatile int32_t x178 = -138721027;
	volatile int64_t x180 = INT64_MAX;

	t33 = ((x177/x178)>>(x179==x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x182 = INT8_MIN;

	t34 = ((x181/x182)>>(x183==x184));

	if (t34 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = INT64_MAX;
	static uint16_t x190 = UINT16_MAX;
	static int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MAX;
	int64_t t35 = 230LL;

	t35 = ((x189/x190)>>(x191==x192));

	if (t35 != 140739635871744LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = -116172412032767LL;
	int8_t x194 = -2;
	volatile int64_t x195 = 26136LL;
	volatile int64_t t36 = -375339004LL;

	t36 = ((x193/x194)>>(x195==x196));

	if (t36 != 58086206016383LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	int16_t x203 = -2309;
	static volatile uint64_t t37 = 1189732LLU;

	t37 = ((x201/x202)>>(x203==x204));

	if (t37 != 705772LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x205 = -1;
	uint16_t x206 = 9U;
	static int16_t x207 = INT16_MAX;
	volatile int32_t t38 = 3;

	t38 = ((x205/x206)>>(x207==x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x213 = 13675984U;
	int8_t x214 = INT8_MIN;
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;

	t39 = ((x213/x214)>>(x215==x216));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x217 = 1U;
	uint64_t x218 = 1353555380546385LLU;
	uint32_t x220 = 503617U;
	volatile uint64_t t40 = 30303972LLU;

	t40 = ((x217/x218)>>(x219==x220));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x221 = UINT32_MAX;
	static uint32_t x222 = 1222853537U;
	uint8_t x223 = 12U;
	static uint8_t x224 = 12U;

	t41 = ((x221/x222)>>(x223==x224));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x225 = 1;
	int64_t x226 = INT64_MIN;
	volatile int64_t t42 = -24LL;

	t42 = ((x225/x226)>>(x227==x228));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x237 = 35U;
	int8_t x238 = 25;
	volatile uint8_t x239 = 28U;
	static int64_t x240 = INT64_MIN;
	int32_t t43 = -802122155;

	t43 = ((x237/x238)>>(x239==x240));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x243 = 2U;
	int32_t x244 = INT32_MIN;
	volatile int64_t t44 = -529722278901654578LL;

	t44 = ((x241/x242)>>(x243==x244));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x246 = 15U;
	static int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	uint32_t t45 = 68206U;

	t45 = ((x245/x246)>>(x247==x248));

	if (t45 != 286328968U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x249 = -3249962833614LL;
	int64_t x250 = -1LL;
	uint64_t x251 = UINT64_MAX;
	volatile int16_t x252 = INT16_MAX;
	volatile int64_t t46 = 1975860151LL;

	t46 = ((x249/x250)>>(x251==x252));

	if (t46 != 3249962833614LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = 5U;
	int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MIN;
	int8_t x256 = 14;
	volatile int32_t t47 = 920490756;

	t47 = ((x253/x254)>>(x255==x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = 1;
	int32_t x259 = -3;
	volatile int32_t t48 = -110929821;

	t48 = ((x257/x258)>>(x259==x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x262 = 1U;
	volatile int16_t x263 = INT16_MIN;
	int32_t t49 = -1;

	t49 = ((x261/x262)>>(x263==x264));

	if (t49 != 30) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	volatile uint32_t t50 = 204070342U;

	t50 = ((x269/x270)>>(x271==x272));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x277 = -1LL;
	static volatile int64_t x279 = INT64_MAX;
	uint32_t x280 = UINT32_MAX;
	int64_t t51 = -723396389186704LL;

	t51 = ((x277/x278)>>(x279==x280));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = UINT16_MAX;
	uint32_t x286 = 1799U;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -15;
	uint32_t t52 = 944094412U;

	t52 = ((x285/x286)>>(x287==x288));

	if (t52 != 36U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = -1LL;
	static int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	volatile int64_t t53 = 159567LL;

	t53 = ((x289/x290)>>(x291==x292));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x293 = UINT8_MAX;
	static uint32_t x294 = 616753647U;
	int32_t x295 = -1;
	volatile int8_t x296 = -1;
	volatile uint32_t t54 = 97564U;

	t54 = ((x293/x294)>>(x295==x296));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = -1LL;
	int8_t x299 = 0;
	static int64_t x300 = -1LL;
	int64_t t55 = -43925305612355993LL;

	t55 = ((x297/x298)>>(x299==x300));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MAX;

	t56 = ((x301/x302)>>(x303==x304));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x309 = 451266U;
	static int16_t x310 = 9067;
	int8_t x311 = INT8_MIN;
	static uint16_t x312 = 2U;
	uint32_t t57 = 17818U;

	t57 = ((x309/x310)>>(x311==x312));

	if (t57 != 49U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x317 = 121U;
	static int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MIN;
	static int32_t t58 = 3;

	t58 = ((x317/x318)>>(x319==x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x322 = INT8_MAX;
	int32_t t59 = -19;

	t59 = ((x321/x322)>>(x323==x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = -269;
	static int32_t x327 = INT32_MAX;
	int16_t x328 = -1;
	static volatile uint32_t t60 = 414810060U;

	t60 = ((x325/x326)>>(x327==x328));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x330 = UINT64_MAX;

	t61 = ((x329/x330)>>(x331==x332));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = -1;
	uint16_t x334 = 1090U;
	int8_t x335 = -1;
	static int16_t x336 = INT16_MAX;
	volatile int32_t t62 = -5349723;

	t62 = ((x333/x334)>>(x335==x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x341 = 1365LLU;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	volatile int8_t x344 = 23;
	uint64_t t63 = 2718044415276LLU;

	t63 = ((x341/x342)>>(x343==x344));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = 997613814266770765LL;
	uint16_t x350 = UINT16_MAX;
	volatile uint8_t x351 = 123U;
	volatile int64_t t64 = 111560843657624LL;

	t64 = ((x349/x350)>>(x351==x352));

	if (t64 != 15222611036343LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x354 = -1;
	int8_t x355 = -1;
	int64_t x356 = INT64_MIN;
	volatile int64_t t65 = -14432083198LL;

	t65 = ((x353/x354)>>(x355==x356));

	if (t65 != 85875571735204LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x357 = 91833LL;
	static int8_t x358 = INT8_MAX;
	int16_t x360 = -1;
	volatile int64_t t66 = -149211000772078LL;

	t66 = ((x357/x358)>>(x359==x360));

	if (t66 != 723LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = INT64_MAX;
	static int64_t x362 = INT64_MAX;
	int8_t x363 = 11;
	uint8_t x364 = 21U;
	volatile int64_t t67 = 3455286940306495032LL;

	t67 = ((x361/x362)>>(x363==x364));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = INT32_MIN;
	uint8_t x368 = 3U;
	uint64_t t68 = 6489938619971607LLU;

	t68 = ((x365/x366)>>(x367==x368));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;
	int32_t t69 = 10638760;

	t69 = ((x369/x370)>>(x371==x372));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x374 = -38177563;
	volatile int64_t x376 = 69869945701805LL;
	uint32_t t70 = 6774U;

	t70 = ((x373/x374)>>(x375==x376));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = -1447;
	uint64_t x379 = 15LLU;
	volatile int32_t t71 = 665132774;

	t71 = ((x377/x378)>>(x379==x380));

	if (t71 != 22) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x381 = UINT8_MAX;
	int32_t x382 = 78667531;
	int8_t x383 = -28;
	int16_t x384 = INT16_MIN;
	int32_t t72 = -30;

	t72 = ((x381/x382)>>(x383==x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = 3968LL;
	uint16_t x390 = 2045U;
	static volatile int8_t x391 = -1;
	int64_t t73 = 192596353161678830LL;

	t73 = ((x389/x390)>>(x391==x392));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x393 = 629354696;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -1;
	int64_t x396 = 548754615683956LL;
	volatile int32_t t74 = -11373602;

	t74 = ((x393/x394)>>(x395==x396));

	if (t74 != 9603) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x406 = -7;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;
	volatile int32_t t75 = -43416013;

	t75 = ((x405/x406)>>(x407==x408));

	if (t75 != 306783378) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x410 = 293913455244566174LLU;
	int64_t x411 = 2LL;
	int64_t x412 = INT64_MAX;
	uint64_t t76 = 242613005270522LLU;

	t76 = ((x409/x410)>>(x411==x412));

	if (t76 != 62LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = -509;
	volatile int64_t x418 = INT64_MIN;
	int16_t x420 = -1;
	int64_t t77 = 0LL;

	t77 = ((x417/x418)>>(x419==x420));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = 1U;
	int32_t x422 = -216999597;
	uint8_t x424 = UINT8_MAX;

	t78 = ((x421/x422)>>(x423==x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x426 = 6U;
	uint32_t x427 = 14210U;
	int32_t t79 = -120;

	t79 = ((x425/x426)>>(x427==x428));

	if (t79 != 141) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = INT32_MAX;
	uint16_t x430 = 13249U;
	int16_t x431 = -1;
	static int8_t x432 = 3;
	static int32_t t80 = 2;

	t80 = ((x429/x430)>>(x431==x432));

	if (t80 != 162086) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = 3LL;
	int8_t x434 = INT8_MIN;
	int8_t x436 = INT8_MAX;
	int64_t t81 = -194526LL;

	t81 = ((x433/x434)>>(x435==x436));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x437 = 6;
	int16_t x438 = INT16_MIN;
	int16_t x440 = -110;
	int32_t t82 = 8388190;

	t82 = ((x437/x438)>>(x439==x440));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = INT8_MIN;

	t83 = ((x441/x442)>>(x443==x444));

	if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = -715152LL;
	static int32_t x448 = INT32_MIN;

	t84 = ((x445/x446)>>(x447==x448));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 13U;
	int16_t x454 = INT16_MIN;
	int32_t x456 = INT32_MIN;

	t85 = ((x453/x454)>>(x455==x456));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = INT16_MIN;
	volatile int32_t x463 = INT32_MIN;
	volatile int64_t x464 = INT64_MAX;

	t86 = ((x461/x462)>>(x463==x464));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = 3264;
	uint64_t x471 = 3002097867460180LLU;
	uint32_t x472 = 986U;
	volatile int32_t t87 = 1;

	t87 = ((x469/x470)>>(x471==x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x476 = 45;
	static volatile int32_t t88 = -1;

	t88 = ((x473/x474)>>(x475==x476));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x482 = INT64_MIN;
	int8_t x483 = -1;
	int8_t x484 = INT8_MIN;
	volatile int64_t t89 = 49439LL;

	t89 = ((x481/x482)>>(x483==x484));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x489 = UINT8_MAX;
	static int8_t x490 = INT8_MAX;
	int64_t x491 = -1LL;
	static int32_t t90 = 232;

	t90 = ((x489/x490)>>(x491==x492));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x505 = 764348668U;
	volatile int32_t x507 = INT32_MAX;
	int16_t x508 = 3858;
	uint32_t t91 = 1825313U;

	t91 = ((x505/x506)>>(x507==x508));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	uint64_t x511 = 1874071018548518438LLU;
	int32_t x512 = INT32_MIN;
	volatile int32_t t92 = -3883469;

	t92 = ((x509/x510)>>(x511==x512));

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x513 = INT16_MIN;
	static volatile int64_t x514 = INT64_MIN;
	int16_t x515 = -1;
	volatile int32_t x516 = -1;

	t93 = ((x513/x514)>>(x515==x516));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = 0;
	int16_t x518 = INT16_MIN;
	volatile int16_t x520 = 12896;
	int32_t t94 = 3014527;

	t94 = ((x517/x518)>>(x519==x520));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = -1;
	volatile int8_t x522 = INT8_MIN;
	uint16_t x523 = 2600U;
	uint16_t x524 = 989U;
	static volatile int32_t t95 = 116541435;

	t95 = ((x521/x522)>>(x523==x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x525 = UINT64_MAX;
	uint8_t x526 = 5U;
	volatile int32_t x527 = INT32_MIN;
	volatile uint16_t x528 = 5U;
	volatile uint64_t t96 = 260053239013103LLU;

	t96 = ((x525/x526)>>(x527==x528));

	if (t96 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x529 = 3U;
	uint8_t x530 = 51U;
	int8_t x531 = INT8_MIN;
	volatile uint16_t x532 = 7U;
	int32_t t97 = -41189;

	t97 = ((x529/x530)>>(x531==x532));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x535 = INT8_MAX;
	int32_t t98 = -6265717;

	t98 = ((x533/x534)>>(x535==x536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x537 = 29842LLU;
	int16_t x538 = INT16_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	int32_t x540 = INT32_MAX;
	volatile uint64_t t99 = 15296LLU;

	t99 = ((x537/x538)>>(x539==x540));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

