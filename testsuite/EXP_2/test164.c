#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 728U;
int64_t x21 = 1338067296LL;
uint32_t x27 = 44406U;
int8_t x28 = INT8_MIN;
static int32_t t5 = -37641;
static int16_t x29 = 2;
int32_t x33 = 454559;
int64_t x36 = INT64_MIN;
static uint32_t x41 = UINT32_MAX;
volatile int32_t t11 = 150717;
int16_t x55 = INT16_MAX;
int8_t x61 = -1;
volatile int32_t x64 = INT32_MIN;
uint32_t x68 = 1991U;
volatile uint32_t x69 = 4301U;
volatile int16_t x71 = INT16_MIN;
int32_t t16 = 1;
static uint8_t x76 = UINT8_MAX;
volatile int32_t t17 = -288898;
volatile int32_t x77 = 251326;
static int16_t x85 = INT16_MIN;
volatile uint32_t x91 = 2402357U;
uint16_t x92 = 495U;
int16_t x94 = INT16_MAX;
uint16_t x96 = UINT16_MAX;
int16_t x98 = INT16_MIN;
int64_t x100 = INT64_MIN;
int32_t t22 = 22;
int8_t x101 = INT8_MIN;
static volatile int32_t t24 = -2;
uint8_t x109 = 49U;
int32_t x111 = INT32_MIN;
int16_t x119 = INT16_MIN;
static int32_t t28 = -63306;
int64_t x135 = INT64_MIN;
int32_t x138 = 357;
static int8_t x146 = -1;
uint8_t x153 = 19U;
int8_t x175 = -1;
uint64_t x182 = UINT64_MAX;
int16_t x184 = 1;
static uint8_t x193 = 0U;
static volatile uint32_t x197 = 49U;
int8_t x200 = INT8_MIN;
volatile int64_t x202 = INT64_MIN;
uint16_t x203 = UINT16_MAX;
volatile int64_t x205 = INT64_MIN;
int64_t x210 = 4688702183846LL;
int32_t x215 = -1;
int32_t t48 = 1050229626;
uint32_t x218 = UINT32_MAX;
int8_t x225 = 10;
uint16_t x226 = 2U;
volatile int32_t x231 = -1;
int32_t x234 = 62035506;
int64_t x240 = INT64_MIN;
volatile int64_t x242 = -1LL;
static volatile int16_t x243 = INT16_MAX;
uint64_t x247 = 32116876LLU;
int8_t x251 = INT8_MIN;
int64_t x255 = -342440219216525437LL;
static int32_t x263 = -1;
static uint32_t x264 = 144894U;
int32_t t59 = -15;
uint32_t x265 = 1195255U;
int16_t x269 = INT16_MIN;
int8_t x279 = 1;
int8_t x284 = 5;
int16_t x285 = INT16_MIN;
volatile uint16_t x299 = 0U;
uint16_t x301 = 2079U;
static int32_t t69 = -60745;
int32_t x309 = -75421889;
int32_t x313 = 245;
volatile int32_t x316 = INT32_MIN;
uint32_t x321 = 1786U;
uint8_t x326 = UINT8_MAX;
volatile int32_t t74 = -345002667;
int64_t x334 = -15041497194LL;
int8_t x338 = -1;
int32_t t77 = -9905301;
static uint64_t x344 = 48247398994567LLU;
int64_t x355 = -1LL;
int8_t x358 = -1;
uint64_t x367 = 1009LLU;
volatile uint64_t x379 = UINT64_MAX;
static int8_t x380 = -10;
static int8_t x382 = INT8_MIN;
int32_t t88 = 72782507;
int8_t x391 = INT8_MIN;
int16_t x401 = INT16_MAX;
int8_t x403 = 0;
int32_t t91 = 21;
static volatile int16_t x422 = INT16_MIN;
int64_t x428 = INT64_MAX;
int32_t x433 = INT32_MIN;
int32_t x438 = INT32_MIN;
static int64_t x443 = -120LL;
uint64_t x447 = 365815495LLU;
static uint32_t x451 = UINT32_MAX;


void f0(void) {
	volatile int64_t x5 = INT64_MIN;
	uint8_t x6 = 1U;
	int64_t x8 = INT64_MIN;
	volatile int32_t t0 = 64501;

	t0 = ((x5^(x6+x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	static int16_t x10 = -1;
	volatile int8_t x11 = -1;
	int16_t x12 = -1;
	int32_t t1 = -43365129;

	t1 = ((x9^(x10+x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 13LLU;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 2970253U;
	int64_t x16 = INT64_MAX;
	int32_t t2 = -432361695;

	t2 = ((x13^(x14+x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 27U;
	volatile uint32_t x18 = UINT32_MAX;
	uint16_t x19 = 52U;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 227;

	t3 = ((x17^(x18+x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = UINT8_MAX;
	static volatile uint16_t x23 = 22541U;
	static uint64_t x24 = 591870097128241447LLU;
	static int32_t t4 = 11;

	t4 = ((x21^(x22+x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = INT64_MIN;
	static uint64_t x26 = 726512093LLU;

	t5 = ((x25^(x26+x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = INT8_MIN;
	static int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	int32_t t6 = -249;

	t6 = ((x29^(x30+x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 14U;
	uint64_t x35 = 10682150543475LLU;
	int32_t t7 = 102985035;

	t7 = ((x33^(x34+x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = INT32_MIN;
	static volatile int8_t x40 = -1;
	static int32_t t8 = -2;

	t8 = ((x37^(x38+x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 15U;
	int8_t x44 = 2;
	volatile int32_t t9 = 32367215;

	t9 = ((x41^(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	static uint64_t x46 = UINT64_MAX;
	static int16_t x47 = -168;
	uint64_t x48 = 6798267496LLU;
	static volatile int32_t t10 = 103207;

	t10 = ((x45^(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 8U;
	int8_t x50 = 0;
	int8_t x51 = 12;
	uint32_t x52 = 189331912U;

	t11 = ((x49^(x50+x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 280593U;
	int16_t x54 = INT16_MAX;
	volatile int16_t x56 = INT16_MIN;
	static volatile int32_t t12 = 1012157123;

	t12 = ((x53^(x54+x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = -1;
	volatile int8_t x59 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;
	static volatile int32_t t13 = 221;

	t13 = ((x57^(x58+x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = -38;
	int32_t t14 = -5295767;

	t14 = ((x61^(x62+x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -649;
	int64_t x66 = INT64_MIN;
	static volatile int32_t x67 = 13;
	static volatile int32_t t15 = 4;

	t15 = ((x65^(x66+x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = 95U;
	volatile int8_t x72 = INT8_MIN;

	t16 = ((x69^(x70+x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	volatile uint16_t x74 = 0U;
	static volatile uint8_t x75 = UINT8_MAX;

	t17 = ((x73^(x74+x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t18 = 0;

	t18 = ((x77^(x78+x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = 379522U;
	static uint64_t x87 = 420199838593517964LLU;
	uint64_t x88 = UINT64_MAX;
	int32_t t19 = 399664923;

	t19 = ((x85^(x86+x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -1;
	volatile uint16_t x90 = 374U;
	volatile int32_t t20 = 2;

	t20 = ((x89^(x90+x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int64_t x95 = 4808333LL;
	static int32_t t21 = 0;

	t21 = ((x93^(x94+x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = 51U;
	volatile uint32_t x99 = UINT32_MAX;

	t22 = ((x97^(x98+x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = INT8_MIN;
	int8_t x103 = 53;
	uint64_t x104 = 3513386128715164LLU;
	static volatile int32_t t23 = -493;

	t23 = ((x101^(x102+x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x105 = INT64_MIN;
	static int32_t x106 = -12422789;
	int32_t x107 = INT32_MAX;
	static volatile int64_t x108 = 1017377578459LL;

	t24 = ((x105^(x106+x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x110 = UINT16_MAX;
	static uint32_t x112 = 33030128U;
	volatile int32_t t25 = -22;

	t25 = ((x109^(x110+x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -1;
	uint32_t x114 = 11773881U;
	uint64_t x115 = 196213208078923LLU;
	int16_t x116 = INT16_MAX;
	int32_t t26 = 18334;

	t26 = ((x113^(x114+x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = 449;
	volatile int8_t x118 = -1;
	volatile int16_t x120 = INT16_MIN;
	int32_t t27 = 82907170;

	t27 = ((x117^(x118+x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	static int32_t x122 = -388504120;
	uint8_t x123 = 64U;
	int64_t x124 = 2779505986328980LL;

	t28 = ((x121^(x122+x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 10U;
	uint64_t x126 = UINT64_MAX;
	volatile uint8_t x127 = 0U;
	int16_t x128 = -7;
	volatile int32_t t29 = 1;

	t29 = ((x125^(x126+x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x129 = 9U;
	uint64_t x130 = 1566LLU;
	uint32_t x131 = 294985311U;
	int8_t x132 = 0;
	int32_t t30 = 0;

	t30 = ((x129^(x130+x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	int8_t x136 = -1;
	volatile int32_t t31 = -204310221;

	t31 = ((x133^(x134+x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -1LL;
	volatile uint8_t x139 = 3U;
	volatile uint64_t x140 = 19416LLU;
	static int32_t t32 = -209;

	t32 = ((x137^(x138+x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 1U;
	int8_t x142 = INT8_MAX;
	uint8_t x143 = 28U;
	int64_t x144 = 3888774LL;
	int32_t t33 = -30964;

	t33 = ((x141^(x142+x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	volatile uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MIN;
	static volatile int32_t t34 = -188809;

	t34 = ((x145^(x146+x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = -1;
	int16_t x151 = -7;
	int64_t x152 = INT64_MAX;
	int32_t t35 = 893;

	t35 = ((x149^(x150+x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MIN;
	static int32_t x155 = INT32_MAX;
	volatile int32_t x156 = -1;
	volatile int32_t t36 = -4396;

	t36 = ((x153^(x154+x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 13U;
	int32_t x158 = 8;
	volatile int16_t x159 = -5;
	int64_t x160 = INT64_MIN;
	int32_t t37 = 3;

	t37 = ((x157^(x158+x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -7;
	static int32_t x166 = INT32_MIN;
	volatile int16_t x167 = 3;
	volatile int64_t x168 = INT64_MAX;
	static int32_t t38 = 10118267;

	t38 = ((x165^(x166+x167))==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 6U;
	uint16_t x174 = UINT16_MAX;
	uint64_t x176 = 49990143972LLU;
	int32_t t39 = -5;

	t39 = ((x173^(x174+x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x183 = -34249356162LL;
	volatile int32_t t40 = 1;

	t40 = ((x181^(x182+x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 924U;
	volatile int8_t x186 = -1;
	int16_t x187 = -54;
	int8_t x188 = -40;
	int32_t t41 = 94304;

	t41 = ((x185^(x186+x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = -325682932LL;
	uint32_t x191 = UINT32_MAX;
	uint8_t x192 = 69U;
	int32_t t42 = 7;

	t42 = ((x189^(x190+x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x194 = 37U;
	int16_t x195 = 1071;
	volatile uint16_t x196 = 763U;
	volatile int32_t t43 = 6107438;

	t43 = ((x193^(x194+x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = -1LL;
	int8_t x199 = 30;
	int32_t t44 = 14588347;

	t44 = ((x197^(x198+x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t45 = 2;

	t45 = ((x201^(x202+x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x206 = 2488337U;
	uint32_t x207 = 20U;
	uint8_t x208 = 0U;
	int32_t t46 = 200;

	t46 = ((x205^(x206+x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x209 = 1U;
	uint8_t x211 = 5U;
	int16_t x212 = INT16_MIN;
	int32_t t47 = -8029497;

	t47 = ((x209^(x210+x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MAX;
	uint32_t x216 = 2035611135U;

	t48 = ((x213^(x214+x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x219 = -1;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t49 = 255821;

	t49 = ((x217^(x218+x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x221 = -236;
	int16_t x222 = -8019;
	volatile int16_t x223 = INT16_MAX;
	volatile uint8_t x224 = 8U;
	volatile int32_t t50 = 229316;

	t50 = ((x221^(x222+x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t51 = 257171375;

	t51 = ((x225^(x226+x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MAX;
	int16_t x230 = -3;
	int64_t x232 = INT64_MIN;
	int32_t t52 = -138075880;

	t52 = ((x229^(x230+x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	static volatile int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t53 = -271875;

	t53 = ((x233^(x234+x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -1658;
	uint8_t x238 = 27U;
	int16_t x239 = INT16_MIN;
	volatile int32_t t54 = -3107;

	t54 = ((x237^(x238+x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	int8_t x244 = -3;
	int32_t t55 = 69;

	t55 = ((x241^(x242+x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = -1;
	static int8_t x246 = -1;
	int8_t x248 = -1;
	static volatile int32_t t56 = 687687176;

	t56 = ((x245^(x246+x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 442494815LLU;
	static volatile int8_t x250 = -1;
	uint16_t x252 = 31U;
	static volatile int32_t t57 = -6651203;

	t57 = ((x249^(x250+x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MAX;
	uint32_t x256 = UINT32_MAX;
	static int32_t t58 = 101897;

	t58 = ((x253^(x254+x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	static int64_t x262 = 618454369931011LL;

	t59 = ((x261^(x262+x263))==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x266 = 5U;
	static uint32_t x267 = 3654466U;
	static int64_t x268 = 11LL;
	static int32_t t60 = -29;

	t60 = ((x265^(x266+x267))==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x270 = 3884U;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	static int32_t t61 = -105997542;

	t61 = ((x269^(x270+x271))==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MAX;
	static volatile int8_t x274 = INT8_MIN;
	int16_t x275 = 1181;
	static volatile uint32_t x276 = 3U;
	int32_t t62 = -1359;

	t62 = ((x273^(x274+x275))==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = 2405;
	int16_t x278 = -1;
	int32_t x280 = INT32_MIN;
	volatile int32_t t63 = -137138;

	t63 = ((x277^(x278+x279))==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x281 = -1;
	volatile uint8_t x282 = UINT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	static volatile int32_t t64 = -1758126;

	t64 = ((x281^(x282+x283))==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x286 = 237479U;
	int16_t x287 = -1;
	int8_t x288 = 29;
	static int32_t t65 = 0;

	t65 = ((x285^(x286+x287))==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int64_t x294 = -1LL;
	int64_t x295 = -246500LL;
	int32_t x296 = INT32_MAX;
	volatile int32_t t66 = 406782558;

	t66 = ((x293^(x294+x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = -1;
	uint16_t x300 = 1U;
	static volatile int32_t t67 = -3373;

	t67 = ((x297^(x298+x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x302 = INT64_MAX;
	static volatile int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MAX;
	volatile int32_t t68 = 40144;

	t68 = ((x301^(x302+x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = -1;
	uint8_t x306 = 2U;
	int8_t x307 = -1;
	volatile int16_t x308 = 0;

	t69 = ((x305^(x306+x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x310 = -1LL;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 1443664264783834LLU;
	static int32_t t70 = -1124267;

	t70 = ((x309^(x310+x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x314 = 3026LL;
	static int64_t x315 = -5666443766474615LL;
	int32_t t71 = -750;

	t71 = ((x313^(x314+x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = -1LL;
	static int64_t x319 = INT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t72 = -91166166;

	t72 = ((x317^(x318+x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = -1LL;
	volatile int32_t t73 = 0;

	t73 = ((x321^(x322+x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	int32_t x327 = -118;
	int32_t x328 = INT32_MIN;

	t74 = ((x325^(x326+x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = 0;
	int8_t x330 = INT8_MAX;
	static int8_t x331 = 55;
	int16_t x332 = -5;
	int32_t t75 = 7;

	t75 = ((x329^(x330+x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = 0;
	uint8_t x335 = 0U;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t76 = 823209;

	t76 = ((x333^(x334+x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -27;
	uint64_t x339 = 57364974925978LLU;
	int8_t x340 = 2;

	t77 = ((x337^(x338+x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 6468911LLU;
	volatile int8_t x342 = -1;
	int32_t x343 = -4;
	int32_t t78 = -92709397;

	t78 = ((x341^(x342+x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x345 = 12U;
	int64_t x346 = -1LL;
	int8_t x347 = 51;
	volatile int16_t x348 = INT16_MIN;
	int32_t t79 = -1;

	t79 = ((x345^(x346+x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x349 = 5U;
	volatile int64_t x350 = -411597473466421LL;
	uint16_t x351 = 1U;
	volatile uint32_t x352 = 4094469U;
	volatile int32_t t80 = -16179;

	t80 = ((x349^(x350+x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x353 = 126;
	volatile int8_t x354 = -1;
	int16_t x356 = INT16_MAX;
	volatile int32_t t81 = 1757;

	t81 = ((x353^(x354+x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint64_t x359 = 324LLU;
	uint8_t x360 = 97U;
	int32_t t82 = -1;

	t82 = ((x357^(x358+x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -1720914199335LL;
	volatile int16_t x362 = INT16_MAX;
	int8_t x363 = -13;
	static int32_t x364 = -1;
	volatile int32_t t83 = 285692;

	t83 = ((x361^(x362+x363))==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x365 = -1491LL;
	static volatile uint16_t x366 = UINT16_MAX;
	int8_t x368 = -1;
	volatile int32_t t84 = 396364544;

	t84 = ((x365^(x366+x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = INT64_MAX;
	static volatile int16_t x370 = 14273;
	volatile uint64_t x371 = UINT64_MAX;
	uint16_t x372 = 53U;
	volatile int32_t t85 = 29;

	t85 = ((x369^(x370+x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MIN;
	uint32_t x378 = UINT32_MAX;
	static int32_t t86 = -64042286;

	t86 = ((x377^(x378+x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 1;
	static int32_t x383 = INT32_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t87 = 229978;

	t87 = ((x381^(x382+x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x385 = INT16_MIN;
	uint16_t x386 = 50U;
	int32_t x387 = -269844710;
	int8_t x388 = 3;

	t88 = ((x385^(x386+x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x389 = 34962466348273LLU;
	int64_t x390 = 1LL;
	uint16_t x392 = 3U;
	int32_t t89 = -292120;

	t89 = ((x389^(x390+x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -20;
	int16_t x398 = 1;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t90 = -75;

	t90 = ((x397^(x398+x399))==x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x402 = UINT8_MAX;
	static uint64_t x404 = UINT64_MAX;

	t91 = ((x401^(x402+x403))==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int64_t x410 = 662LL;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	int32_t t92 = -642390872;

	t92 = ((x409^(x410+x411))==x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MAX;
	volatile int64_t x423 = -1LL;
	int64_t x424 = -1LL;
	static int32_t t93 = -19;

	t93 = ((x421^(x422+x423))==x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x425 = INT8_MIN;
	static int32_t x426 = -1;
	uint8_t x427 = 0U;
	volatile int32_t t94 = -241213;

	t94 = ((x425^(x426+x427))==x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x434 = 1;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MAX;
	volatile int32_t t95 = -417554690;

	t95 = ((x433^(x434+x435))==x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = UINT8_MAX;
	uint64_t x439 = 6753673827LLU;
	static uint8_t x440 = 27U;
	int32_t t96 = -43548572;

	t96 = ((x437^(x438+x439))==x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x441 = INT16_MIN;
	int8_t x442 = -1;
	uint16_t x444 = 3U;
	int32_t t97 = 58981672;

	t97 = ((x441^(x442+x443))==x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x445 = INT8_MAX;
	int64_t x446 = -491869489363377LL;
	int32_t x448 = -1;
	volatile int32_t t98 = -5098;

	t98 = ((x445^(x446+x447))==x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x449 = 147093LLU;
	int64_t x450 = INT64_MIN;
	int8_t x452 = -9;
	int32_t t99 = 173;

	t99 = ((x449^(x450+x451))==x452);

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

