#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -509353476;
static int64_t x10 = -344450505LL;
int8_t x16 = -1;
static int16_t x19 = -1761;
uint32_t x20 = 793U;
volatile uint16_t x28 = UINT16_MAX;
volatile uint64_t x29 = 1091459LLU;
static volatile int32_t x31 = -57609731;
volatile int32_t t8 = 1231;
uint64_t x37 = UINT64_MAX;
volatile int64_t x39 = 6LL;
int64_t x40 = INT64_MIN;
int16_t x54 = INT16_MIN;
int32_t x57 = -1;
int8_t x63 = INT8_MAX;
static uint32_t x70 = 1U;
volatile int16_t x78 = 329;
volatile int32_t t18 = -45445616;
uint32_t x85 = 2U;
uint16_t x87 = 51U;
static uint16_t x90 = 127U;
static int16_t x91 = INT16_MAX;
static uint16_t x95 = 7953U;
volatile int64_t x106 = -1LL;
static int32_t x107 = INT32_MIN;
int64_t x109 = INT64_MIN;
int16_t x116 = INT16_MAX;
uint8_t x121 = UINT8_MAX;
int16_t x122 = INT16_MAX;
static int16_t x124 = 21;
static int16_t x126 = INT16_MIN;
int32_t t28 = -33483;
uint8_t x140 = UINT8_MAX;
static int8_t x144 = INT8_MAX;
volatile int64_t t31 = 2614LL;
static int64_t x151 = INT64_MIN;
int8_t x153 = INT8_MIN;
int32_t x160 = INT32_MIN;
int64_t x161 = -1LL;
int16_t x162 = INT16_MIN;
int64_t x165 = INT64_MIN;
volatile uint32_t x174 = 33250271U;
volatile int64_t x185 = 593931944704786233LL;
volatile uint16_t x189 = 88U;
int8_t x194 = INT8_MIN;
uint16_t x195 = UINT16_MAX;
int32_t x202 = -110;
int32_t t44 = 4005;
uint16_t x208 = UINT16_MAX;
int32_t x217 = INT32_MIN;
volatile int8_t x220 = INT8_MIN;
volatile uint64_t x226 = 2303LLU;
static volatile int16_t x235 = INT16_MAX;
int32_t x242 = -2387;
int8_t x245 = -1;
int16_t x246 = INT16_MIN;
int32_t t55 = 0;
volatile int16_t x270 = -3217;
int8_t x273 = INT8_MIN;
int16_t x283 = INT16_MAX;
int16_t x284 = INT16_MIN;
static int8_t x287 = INT8_MIN;
int64_t x301 = -572723698957043233LL;
uint64_t x302 = 323179342568223194LLU;
int32_t x303 = INT32_MIN;
uint64_t x305 = 830LLU;
int8_t x307 = -1;
uint64_t t65 = 23725LLU;
uint32_t x314 = UINT32_MAX;
int16_t x317 = -1;
int32_t t68 = -1012301834;
int8_t x327 = INT8_MAX;
volatile int32_t t72 = -1506;
volatile int8_t x346 = -1;
uint16_t x352 = UINT16_MAX;
int64_t t76 = -456983LL;
int8_t x367 = INT8_MAX;
uint32_t x368 = UINT32_MAX;
volatile int16_t x376 = 1939;
static uint8_t x377 = 6U;
int8_t x383 = -1;
int8_t x384 = -1;
int32_t x386 = -1;
uint64_t x393 = UINT64_MAX;
int16_t x404 = -1;
int32_t t86 = -2;
volatile uint64_t t88 = 17967439179078LLU;
int16_t x415 = -1144;
volatile uint64_t x420 = 8804011465388015LLU;
uint64_t x427 = 473002579604685256LLU;
int8_t x428 = 20;
int64_t x432 = 11754LL;
volatile uint64_t x438 = 3391673LLU;
int32_t x443 = INT32_MIN;
int16_t x450 = INT16_MIN;
volatile int8_t x456 = -1;
int8_t x459 = 14;
int64_t x462 = INT64_MIN;
static int16_t x463 = INT16_MIN;


void f0(void) {
	int8_t x1 = 1;
	uint16_t x2 = 233U;
	int16_t x3 = -1;
	uint32_t x4 = 437324U;
	static volatile int32_t t0 = 6;

	t0 = ((x1/x2)<<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 6;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = 1732U;
	volatile int8_t x8 = INT8_MAX;

	t1 = ((x5/x6)<<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	uint8_t x11 = 0U;
	int8_t x12 = INT8_MIN;
	volatile int64_t t2 = 2038LL;

	t2 = ((x9/x10)<<(x11==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -59616307538LL;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	int64_t t3 = 93302578LL;

	t3 = ((x13/x14)<<(x15==x16));

	if (t3 != 27LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1615703603905LLU;
	int8_t x18 = 13;
	static uint64_t t4 = 206890611800LLU;

	t4 = ((x17/x18)<<(x19==x20));

	if (t4 != 124284892608LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 20U;
	uint16_t x22 = UINT16_MAX;
	int8_t x23 = -6;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 3722;

	t5 = ((x21/x22)<<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int16_t x26 = 205;
	int16_t x27 = 6;
	int32_t t6 = -249100;

	t6 = ((x25/x26)<<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	volatile uint32_t x32 = 2U;
	uint64_t t7 = 1821604463244LLU;

	t7 = ((x29/x30)<<(x31==x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -6;
	volatile uint8_t x34 = 28U;
	int32_t x35 = -29;
	int64_t x36 = -15230195621791541LL;

	t8 = ((x33/x34)<<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MIN;
	volatile uint64_t t9 = 13755LLU;

	t9 = ((x37/x38)<<(x39==x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -13146887LL;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 1;
	int16_t x44 = INT16_MIN;
	static volatile int64_t t10 = 201LL;

	t10 = ((x41/x42)<<(x43==x44));

	if (t10 != 102710LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 1U;
	int64_t x50 = INT64_MIN;
	int64_t x51 = -1LL;
	volatile int64_t x52 = INT64_MIN;
	volatile int64_t t11 = 1017LL;

	t11 = ((x49/x50)<<(x51==x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x55 = 6;
	int64_t x56 = INT64_MIN;
	volatile uint32_t t12 = 6U;

	t12 = ((x53/x54)<<(x55==x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x58 = 809664684U;
	volatile int16_t x59 = 23;
	static int8_t x60 = 52;
	volatile uint32_t t13 = 7U;

	t13 = ((x57/x58)<<(x59==x60));

	if (t13 != 5U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 1U;
	int64_t x62 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	volatile int64_t t14 = -24501786704LL;

	t14 = ((x61/x62)<<(x63==x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x66 = -2882;
	uint16_t x67 = UINT16_MAX;
	static int64_t x68 = 6977838761925800LL;
	int32_t t15 = 15;

	t15 = ((x65/x66)<<(x67==x68));

	if (t15 != 745136) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MAX;
	int64_t x71 = -1929225195865944139LL;
	int16_t x72 = 14;
	uint32_t t16 = 23U;

	t16 = ((x69/x70)<<(x71==x72));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 18;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = 7875;
	volatile uint32_t x76 = 2U;
	volatile int32_t t17 = -839;

	t17 = ((x73/x74)<<(x75==x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -76;
	int32_t x79 = -107832;
	int32_t x80 = INT32_MAX;

	t18 = ((x77/x78)<<(x79==x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x86 = 112775863629LLU;
	int16_t x88 = INT16_MIN;
	uint64_t t19 = 6723LLU;

	t19 = ((x85/x86)<<(x87==x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 21170685U;
	static uint64_t x92 = UINT64_MAX;
	uint32_t t20 = 3621832U;

	t20 = ((x89/x90)<<(x91==x92));

	if (t20 != 166698U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 2548LLU;
	uint16_t x94 = 14852U;
	int8_t x96 = INT8_MIN;
	uint64_t t21 = 419633946840562LLU;

	t21 = ((x93/x94)<<(x95==x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	static volatile int32_t x98 = 226148;
	static int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t22 = 2017;

	t22 = ((x97/x98)<<(x99==x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 4767526571LLU;
	int32_t x108 = -1;
	uint64_t t23 = 1734874631656494818LLU;

	t23 = ((x105/x106)<<(x107==x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -46;
	static int64_t x111 = -1LL;
	volatile uint64_t x112 = 53116583263211LLU;
	int64_t t24 = -1957849543459547LL;

	t24 = ((x109/x110)<<(x111==x112));

	if (t24 != 200508087757712517LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MAX;
	uint8_t x114 = 5U;
	int64_t x115 = INT64_MAX;
	int64_t t25 = 272899835828721606LL;

	t25 = ((x113/x114)<<(x115==x116));

	if (t25 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x123 = 29U;
	int32_t t26 = 15;

	t26 = ((x121/x122)<<(x123==x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	int64_t x127 = INT64_MAX;
	static volatile uint8_t x128 = 19U;
	static int32_t t27 = 682603177;

	t27 = ((x125/x126)<<(x127==x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	static int16_t x130 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	volatile uint32_t x132 = UINT32_MAX;

	t28 = ((x129/x130)<<(x131==x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	int8_t x134 = INT8_MAX;
	int32_t x135 = 89697;
	volatile int16_t x136 = INT16_MIN;
	int32_t t29 = 13622295;

	t29 = ((x133/x134)<<(x135==x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 26463264442713LLU;
	int16_t x139 = INT16_MIN;
	volatile uint64_t t30 = 666507436378202779LLU;

	t30 = ((x137/x138)<<(x139==x140));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MAX;
	static uint16_t x143 = UINT16_MAX;

	t31 = ((x141/x142)<<(x143==x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t32 = 18040;

	t32 = ((x149/x150)<<(x151==x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = INT32_MAX;
	static int32_t x155 = -1;
	volatile int32_t x156 = INT32_MIN;
	int32_t t33 = -11;

	t33 = ((x153/x154)<<(x155==x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	int32_t x159 = -16059404;
	int64_t t34 = 369794915LL;

	t34 = ((x157/x158)<<(x159==x160));

	if (t34 != 2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x163 = -1LL;
	int32_t x164 = INT32_MAX;
	static volatile int64_t t35 = -613132270439142LL;

	t35 = ((x161/x162)<<(x163==x164));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = -559071017150719083LL;
	uint16_t x167 = 3191U;
	int16_t x168 = -1;
	int64_t t36 = 13496LL;

	t36 = ((x165/x166)<<(x167==x168));

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	volatile int64_t x171 = INT64_MAX;
	int8_t x172 = INT8_MIN;
	volatile int64_t t37 = -1604331951LL;

	t37 = ((x169/x170)<<(x171==x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = INT64_MAX;
	int32_t x175 = -1;
	uint8_t x176 = 61U;
	volatile int64_t t38 = 0LL;

	t38 = ((x173/x174)<<(x175==x176));

	if (t38 != 277392386872LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	uint64_t x180 = 25261909137453669LLU;
	static int32_t t39 = 74;

	t39 = ((x177/x178)<<(x179==x180));

	if (t39 != 16777216) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x181 = UINT64_MAX;
	uint32_t x182 = UINT32_MAX;
	int8_t x183 = 4;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t40 = 8769156226508LLU;

	t40 = ((x181/x182)<<(x183==x184));

	if (t40 != 4294967297LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x186 = INT8_MAX;
	int16_t x187 = INT16_MAX;
	uint64_t x188 = 1052685691LLU;
	int64_t t41 = -12906426LL;

	t41 = ((x185/x186)<<(x187==x188));

	if (t41 != 4676629485864458LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	int64_t t42 = 12138281615153LL;

	t42 = ((x189/x190)<<(x191==x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	int32_t x196 = 105;
	static int32_t t43 = -156939;

	t43 = ((x193/x194)<<(x195==x196));

	if (t43 != 16777216) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = INT16_MIN;
	uint16_t x203 = 1U;
	int8_t x204 = INT8_MIN;

	t44 = ((x201/x202)<<(x203==x204));

	if (t44 != 297) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = INT32_MAX;
	volatile uint16_t x206 = 1010U;
	int8_t x207 = 0;
	int32_t t45 = -1070;

	t45 = ((x205/x206)<<(x207==x208));

	if (t45 != 2126221) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x209 = 832U;
	static uint8_t x210 = UINT8_MAX;
	uint16_t x211 = UINT16_MAX;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t46 = 2120;

	t46 = ((x209/x210)<<(x211==x212));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = -1;
	int32_t x214 = 191;
	uint8_t x215 = 61U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t47 = -10;

	t47 = ((x213/x214)<<(x215==x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = -34;
	volatile uint64_t t48 = 28134200LLU;

	t48 = ((x217/x218)<<(x219==x220));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = 13630;
	static int64_t x222 = -19860722LL;
	volatile uint16_t x223 = 733U;
	int8_t x224 = INT8_MIN;
	int64_t t49 = 75304988326LL;

	t49 = ((x221/x222)<<(x223==x224));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	volatile uint64_t x227 = 645223755907545612LLU;
	int8_t x228 = INT8_MIN;
	uint64_t t50 = 600526149714LLU;

	t50 = ((x225/x226)<<(x227==x228));

	if (t50 != 8009875846161333LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x229 = 14031U;
	int16_t x230 = INT16_MAX;
	int64_t x231 = INT64_MAX;
	static int16_t x232 = -1862;
	volatile int32_t t51 = 177117;

	t51 = ((x229/x230)<<(x231==x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MAX;
	static int8_t x236 = INT8_MAX;
	volatile int32_t t52 = -458624283;

	t52 = ((x233/x234)<<(x235==x236));

	if (t52 != 258) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 7U;
	static volatile int8_t x240 = -1;
	static volatile uint64_t t53 = 3LLU;

	t53 = ((x237/x238)<<(x239==x240));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = 0LL;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 7U;
	static int64_t t54 = 265272761723813LL;

	t54 = ((x241/x242)<<(x243==x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x247 = -1LL;
	uint32_t x248 = 3135303U;

	t55 = ((x245/x246)<<(x247==x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 95U;
	uint8_t x250 = 5U;
	uint32_t x251 = 24220U;
	int16_t x252 = -5446;
	int32_t t56 = 102;

	t56 = ((x249/x250)<<(x251==x252));

	if (t56 != 19) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = -1;
	int16_t x258 = -1;
	static int64_t x259 = -24675727511347224LL;
	int32_t x260 = INT32_MAX;
	static int32_t t57 = -2174979;

	t57 = ((x257/x258)<<(x259==x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 3LL;
	static int32_t x262 = INT32_MAX;
	uint8_t x263 = UINT8_MAX;
	static int32_t x264 = 11;
	int64_t t58 = -1211134289647LL;

	t58 = ((x261/x262)<<(x263==x264));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile uint8_t x271 = 3U;
	volatile int16_t x272 = INT16_MIN;
	static int32_t t59 = 2;

	t59 = ((x269/x270)<<(x271==x272));

	if (t59 != 10) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	int32_t t60 = -18;

	t60 = ((x273/x274)<<(x275==x276));

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	static uint64_t x279 = 17807098675815258LLU;
	int8_t x280 = INT8_MIN;
	int64_t t61 = 634590894772LL;

	t61 = ((x277/x278)<<(x279==x280));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = -1;
	int64_t x282 = -1LL;
	int64_t t62 = -63LL;

	t62 = ((x281/x282)<<(x283==x284));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x285 = 2598U;
	volatile int64_t x286 = INT64_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t63 = 37458LL;

	t63 = ((x285/x286)<<(x287==x288));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x304 = 2243;
	uint64_t t64 = 39142598178582LLU;

	t64 = ((x301/x302)<<(x303==x304));

	if (t64 != 55LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x306 = INT64_MIN;
	static uint16_t x308 = UINT16_MAX;

	t65 = ((x305/x306)<<(x307==x308));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x309 = 1119U;
	int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	static int8_t x312 = -26;
	int64_t t66 = -540376619027LL;

	t66 = ((x309/x310)<<(x311==x312));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = -1;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;
	volatile uint32_t t67 = 1780U;

	t67 = ((x313/x314)<<(x315==x316));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x318 = 2U;
	int64_t x319 = INT64_MAX;
	volatile uint16_t x320 = 0U;

	t68 = ((x317/x318)<<(x319==x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x321 = INT16_MIN;
	int32_t x322 = -3;
	volatile int32_t x323 = 22367;
	int64_t x324 = INT64_MIN;
	static int32_t t69 = -5544;

	t69 = ((x321/x322)<<(x323==x324));

	if (t69 != 10922) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile int16_t x326 = -1;
	uint8_t x328 = 31U;
	int32_t t70 = 164;

	t70 = ((x325/x326)<<(x327==x328));

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = 1370U;
	uint8_t x330 = 1U;
	uint64_t x331 = 104LLU;
	static int16_t x332 = INT16_MAX;
	uint32_t t71 = 111228289U;

	t71 = ((x329/x330)<<(x331==x332));

	if (t71 != 1370U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = 249;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = 9719666LL;
	volatile int16_t x336 = INT16_MAX;

	t72 = ((x333/x334)<<(x335==x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x345 = INT8_MIN;
	uint8_t x347 = 0U;
	static int64_t x348 = 43396LL;
	static volatile int32_t t73 = -123639;

	t73 = ((x345/x346)<<(x347==x348));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x349 = -2;
	volatile int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	static int32_t t74 = 9;

	t74 = ((x349/x350)<<(x351==x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x353 = 8363265247222145608LLU;
	uint16_t x354 = 91U;
	volatile int8_t x355 = -12;
	volatile int8_t x356 = INT8_MIN;
	static uint64_t t75 = 17083893LLU;

	t75 = ((x353/x354)<<(x355==x356));

	if (t75 != 91904013705737863LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1LL;
	volatile int32_t x358 = 62168800;
	uint64_t x359 = UINT64_MAX;
	static int8_t x360 = 2;

	t76 = ((x357/x358)<<(x359==x360));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -1;
	volatile int32_t x366 = 172168242;
	int32_t t77 = -4;

	t77 = ((x365/x366)<<(x367==x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = 6882850LL;
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -1;
	volatile int64_t t78 = -2066818LL;

	t78 = ((x369/x370)<<(x371==x372));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = -316510576460LL;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MAX;
	volatile int64_t t79 = 386482LL;

	t79 = ((x373/x374)<<(x375==x376));

	if (t79 != 147LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	static int64_t x380 = INT64_MAX;
	static volatile int32_t t80 = 1;

	t80 = ((x377/x378)<<(x379==x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x381 = INT16_MAX;
	uint32_t x382 = 774U;
	uint32_t t81 = 1534U;

	t81 = ((x381/x382)<<(x383==x384));

	if (t81 != 84U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = 15816318428LLU;
	int16_t x387 = 0;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t82 = 68433969188636117LLU;

	t82 = ((x385/x386)<<(x387==x388));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x389 = -1;
	static int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	int8_t x392 = 1;
	int32_t t83 = -11;

	t83 = ((x389/x390)<<(x391==x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	uint16_t x396 = 673U;
	uint64_t t84 = 504427LLU;

	t84 = ((x393/x394)<<(x395==x396));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	int16_t x399 = 4;
	int8_t x400 = INT8_MIN;
	int64_t t85 = 1711504330LL;

	t85 = ((x397/x398)<<(x399==x400));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 87U;
	volatile int8_t x402 = 1;
	int8_t x403 = INT8_MAX;

	t86 = ((x401/x402)<<(x403==x404));

	if (t86 != 87) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t87 = 3776741LLU;

	t87 = ((x405/x406)<<(x407==x408));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x409 = UINT64_MAX;
	static volatile int16_t x410 = INT16_MIN;
	volatile uint16_t x411 = 6305U;
	static int16_t x412 = INT16_MAX;

	t88 = ((x409/x410)<<(x411==x412));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = UINT64_MAX;
	static uint64_t x414 = 110LLU;
	volatile int8_t x416 = INT8_MIN;
	uint64_t t89 = 17LLU;

	t89 = ((x413/x414)<<(x415==x416));

	if (t89 != 167697673397359560LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x417 = 492U;
	uint64_t x418 = 619731LLU;
	int8_t x419 = INT8_MIN;
	uint64_t t90 = 2781LLU;

	t90 = ((x417/x418)<<(x419==x420));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -1;
	int16_t x422 = 4543;
	static uint32_t x423 = UINT32_MAX;
	static int16_t x424 = INT16_MIN;
	int32_t t91 = -15229999;

	t91 = ((x421/x422)<<(x423==x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x425 = -1;
	int8_t x426 = -1;
	int32_t t92 = -11;

	t92 = ((x425/x426)<<(x427==x428));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x429 = 1782U;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = INT16_MAX;
	int32_t t93 = 437764125;

	t93 = ((x429/x430)<<(x431==x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = 1650258341426076189LLU;
	uint64_t x439 = 15LLU;
	int64_t x440 = INT64_MAX;
	volatile uint64_t t94 = 8184646183495LLU;

	t94 = ((x437/x438)<<(x439==x440));

	if (t94 != 486561747381LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x441 = UINT32_MAX;
	int64_t x442 = INT64_MIN;
	uint8_t x444 = 14U;
	volatile int64_t t95 = 6662LL;

	t95 = ((x441/x442)<<(x443==x444));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = 1U;
	volatile int32_t x451 = INT32_MIN;
	int64_t x452 = INT64_MIN;
	volatile int32_t t96 = -1944964;

	t96 = ((x449/x450)<<(x451==x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x453 = UINT32_MAX;
	int32_t x454 = 915678967;
	int16_t x455 = 326;
	static uint32_t t97 = 123418288U;

	t97 = ((x453/x454)<<(x455==x456));

	if (t97 != 4U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MIN;
	int16_t x458 = -10;
	int8_t x460 = -1;
	static int32_t t98 = -962415;

	t98 = ((x457/x458)<<(x459==x460));

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 2415141559481214LLU;
	int16_t x464 = -1;
	uint64_t t99 = 352187484569056964LLU;

	t99 = ((x461/x462)<<(x463==x464));

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

