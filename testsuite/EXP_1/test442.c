#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x17 = INT8_MAX;
volatile uint8_t x21 = UINT8_MAX;
int8_t x28 = 0;
volatile uint16_t x29 = 1720U;
uint64_t x34 = 1892041LLU;
static int16_t x47 = INT16_MIN;
uint16_t x59 = 28142U;
int32_t t9 = 18;
int32_t x65 = INT32_MIN;
int32_t x68 = INT32_MIN;
static uint8_t x74 = UINT8_MAX;
int8_t x80 = INT8_MIN;
int16_t x85 = -45;
static volatile int32_t x90 = INT32_MIN;
int8_t x93 = INT8_MIN;
int64_t x102 = -26395382869012LL;
int32_t x105 = 0;
int16_t x114 = 161;
static uint32_t x119 = 6U;
uint64_t x121 = UINT64_MAX;
volatile int64_t x123 = INT64_MIN;
volatile uint64_t x125 = 949LLU;
uint32_t x127 = 1649U;
int8_t x146 = INT8_MAX;
uint64_t x147 = UINT64_MAX;
static int32_t t29 = -25676136;
static int32_t x151 = -1507828;
int32_t t30 = 87217;
static int16_t x164 = -1;
int32_t t31 = -1741300;
int32_t x168 = INT32_MAX;
int32_t x179 = INT32_MAX;
uint8_t x205 = UINT8_MAX;
volatile int32_t x219 = INT32_MIN;
volatile int64_t t42 = INT64_MIN;
static int32_t x225 = INT32_MAX;
uint32_t t47 = 803U;
volatile int64_t x257 = 2393LL;
uint16_t x259 = 80U;
int16_t x261 = -1;
int32_t x263 = 1;
uint16_t x264 = UINT16_MAX;
uint64_t x268 = 87LLU;
int32_t t53 = -28;
uint64_t x283 = UINT64_MAX;
int16_t x284 = INT16_MIN;
int16_t x286 = INT16_MIN;
static uint8_t x288 = 2U;
int32_t x297 = -1;
uint16_t x298 = 15506U;
static int8_t x300 = INT8_MAX;
static uint64_t x304 = 1LLU;
int32_t x310 = 659;
int64_t x342 = -1LL;
static volatile int32_t t66 = -3084;
int32_t x362 = 5116;
uint16_t x363 = 32650U;
int64_t x369 = INT64_MAX;
static uint8_t x372 = 97U;
volatile int32_t t71 = 14;
uint64_t x375 = 6192115417LLU;
uint32_t x376 = 63373857U;
volatile uint8_t x382 = 10U;
volatile int32_t x385 = -1;
int64_t x388 = -1LL;
int64_t x391 = -13LL;
int8_t x405 = -1;
volatile int32_t t79 = -497475120;
int64_t x416 = -1LL;
uint16_t x417 = 1020U;
uint64_t x418 = 3144608021583911164LLU;
static volatile int32_t t81 = -59350;
volatile int8_t x430 = -1;
volatile int8_t x442 = 1;
volatile int32_t t86 = -849529523;
static uint64_t x456 = 25LLU;
static int32_t x463 = -27426;
int8_t x464 = 14;
int8_t x471 = INT8_MIN;
uint16_t x484 = 2U;
int64_t x488 = 269815975817041LL;
int16_t x492 = -1;
int8_t x493 = -1;
int8_t x506 = -14;
uint8_t x512 = 2U;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x2 = -44;
	volatile int32_t x3 = 62437983;
	int32_t x4 = -1;
	int32_t t0 = 3072226;

	t0 = (((x1*x2)==x3)^x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = UINT64_MAX;
	uint64_t x15 = 282480LLU;
	int32_t x16 = -1;
	int32_t t1 = -92263194;

	t1 = (((x13*x14)==x15)^x16);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MAX;
	static volatile int16_t x20 = INT16_MAX;
	static int32_t t2 = 31602;

	t2 = (((x17*x18)==x19)^x20);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = 3;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = 2U;
	uint32_t t3 = 6U;

	t3 = (((x21*x22)==x23)^x24);

	if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 13533909852377LL;
	int64_t x26 = 3LL;
	static volatile uint8_t x27 = 6U;
	int32_t t4 = -6;

	t4 = (((x25*x26)==x27)^x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = -1;
	int32_t x31 = -1;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t5 = INT64_MIN;

	t5 = (((x29*x30)==x31)^x32);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1;
	volatile int32_t t6 = 25;

	t6 = (((x33*x34)==x35)^x36);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 57U;
	volatile int8_t x46 = INT8_MIN;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t7 = 28520890;

	t7 = (((x45*x46)==x47)^x48);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = INT32_MIN;
	static uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -1;
	int32_t t8 = -279;

	t8 = (((x49*x50)==x51)^x52);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 14;
	volatile int8_t x58 = 42;
	volatile int32_t x60 = -251733722;

	t9 = (((x57*x58)==x59)^x60);

	if (t9 != -251733722) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x61 = INT32_MAX;
	uint8_t x62 = 1U;
	volatile int32_t x63 = -1;
	volatile int8_t x64 = INT8_MIN;
	int32_t t10 = -34;

	t10 = (((x61*x62)==x63)^x64);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x66 = -1LL;
	volatile int8_t x67 = INT8_MAX;
	volatile int32_t t11 = INT32_MIN;

	t11 = (((x65*x66)==x67)^x68);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 17735U;
	static volatile int16_t x75 = INT16_MIN;
	volatile int32_t x76 = -1;
	int32_t t12 = -1;

	t12 = (((x73*x74)==x75)^x76);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x77 = -232;
	uint8_t x78 = UINT8_MAX;
	volatile int32_t x79 = -6944090;
	volatile int32_t t13 = -31252;

	t13 = (((x77*x78)==x79)^x80);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x81 = 2895165183910799655LLU;
	volatile uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MIN;
	volatile int16_t x84 = INT16_MIN;
	static int32_t t14 = 106633218;

	t14 = (((x81*x82)==x83)^x84);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x86 = 1871369171LL;
	int16_t x87 = -1;
	uint16_t x88 = 357U;
	int32_t t15 = -4792;

	t15 = (((x85*x86)==x87)^x88);

	if (t15 != 357) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = -1LL;
	volatile int8_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t16 = -29547784;

	t16 = (((x89*x90)==x91)^x92);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x94 = UINT32_MAX;
	int32_t x95 = -15628068;
	int64_t x96 = -16183564LL;
	int64_t t17 = 15564498646967LL;

	t17 = (((x93*x94)==x95)^x96);

	if (t17 != -16183564LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x97 = -1;
	uint64_t x98 = 1LLU;
	int64_t x99 = -22060LL;
	volatile int8_t x100 = 18;
	volatile int32_t t18 = -519604795;

	t18 = (((x97*x98)==x99)^x100);

	if (t18 != 18) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x101 = UINT8_MAX;
	static volatile int16_t x103 = -1;
	int64_t x104 = -1LL;
	int64_t t19 = -213055094423LL;

	t19 = (((x101*x102)==x103)^x104);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x106 = UINT64_MAX;
	uint64_t x107 = 4295533625418597LLU;
	static int64_t x108 = INT64_MIN;
	static volatile int64_t t20 = INT64_MIN;

	t20 = (((x105*x106)==x107)^x108);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x113 = 1292440U;
	int32_t x115 = -6;
	int64_t x116 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = (((x113*x114)==x115)^x116);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = 1898787;
	volatile uint16_t x120 = 77U;
	static volatile int32_t t22 = 197681;

	t22 = (((x117*x118)==x119)^x120);

	if (t22 != 77) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x122 = 226;
	volatile int64_t x124 = -1LL;
	int64_t t23 = 32647475296LL;

	t23 = (((x121*x122)==x123)^x124);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x126 = -42;
	int64_t x128 = 9441797888LL;
	int64_t t24 = 25018842781053LL;

	t24 = (((x125*x126)==x127)^x128);

	if (t24 != 9441797888LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int64_t x131 = 3366082049164074LL;
	int64_t x132 = 10281LL;
	static int64_t t25 = -25700679404531557LL;

	t25 = (((x129*x130)==x131)^x132);

	if (t25 != 10281LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 1728573008LL;
	uint16_t x134 = 162U;
	static volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (((x133*x134)==x135)^x136);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = -1LL;
	int32_t x138 = -1;
	int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t27 = 456982949;

	t27 = (((x137*x138)==x139)^x140);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x141 = 0U;
	int64_t x142 = INT64_MAX;
	int8_t x143 = -1;
	int32_t x144 = -259519230;
	int32_t t28 = -14526520;

	t28 = (((x141*x142)==x143)^x144);

	if (t28 != -259519230) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = -1LL;
	int32_t x148 = 580;

	t29 = (((x145*x146)==x147)^x148);

	if (t29 != 580) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 64U;
	int16_t x150 = -1;
	static volatile int8_t x152 = INT8_MIN;

	t30 = (((x149*x150)==x151)^x152);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -11570756;
	int8_t x162 = INT8_MAX;
	static volatile int32_t x163 = 429;

	t31 = (((x161*x162)==x163)^x164);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MIN;
	int8_t x167 = 32;
	volatile int32_t t32 = INT32_MAX;

	t32 = (((x165*x166)==x167)^x168);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 41U;
	int64_t x170 = 3421825739LL;
	static volatile int16_t x171 = INT16_MIN;
	static volatile uint16_t x172 = 5640U;
	volatile int32_t t33 = 3;

	t33 = (((x169*x170)==x171)^x172);

	if (t33 != 5640) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -36131722491192LL;
	int16_t x174 = INT16_MAX;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t34 = INT32_MIN;

	t34 = (((x173*x174)==x175)^x176);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = 1U;
	int64_t x178 = INT64_MIN;
	static int16_t x180 = -1;
	static int32_t t35 = 164006693;

	t35 = (((x177*x178)==x179)^x180);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	static int64_t x195 = -1LL;
	volatile uint64_t x196 = 1600663669410157097LLU;
	uint64_t t36 = 8418756450067581LLU;

	t36 = (((x193*x194)==x195)^x196);

	if (t36 != 1600663669410157097LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = -1332;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	uint8_t x200 = UINT8_MAX;
	int32_t t37 = 461626;

	t37 = (((x197*x198)==x199)^x200);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = 495U;
	int16_t x202 = INT16_MIN;
	volatile int64_t x203 = -45847505LL;
	int8_t x204 = INT8_MAX;
	static int32_t t38 = -307722746;

	t38 = (((x201*x202)==x203)^x204);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x206 = 37U;
	static volatile int16_t x207 = -1;
	int16_t x208 = 234;
	static volatile int32_t t39 = -353901325;

	t39 = (((x205*x206)==x207)^x208);

	if (t39 != 234) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 8U;
	static volatile uint8_t x210 = 2U;
	int32_t x211 = -1;
	volatile int8_t x212 = 1;
	int32_t t40 = 845580;

	t40 = (((x209*x210)==x211)^x212);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x213 = INT32_MAX;
	static uint32_t x214 = 477910499U;
	int64_t x215 = 60473704LL;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t41 = 62;

	t41 = (((x213*x214)==x215)^x216);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = -1;
	static int8_t x218 = 0;
	static volatile int64_t x220 = INT64_MIN;

	t42 = (((x217*x218)==x219)^x220);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x221 = INT8_MAX;
	int16_t x222 = -372;
	volatile uint16_t x223 = 49U;
	uint32_t x224 = 3505U;
	uint32_t t43 = 3U;

	t43 = (((x221*x222)==x223)^x224);

	if (t43 != 3505U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x226 = -15846162LL;
	uint16_t x227 = 1051U;
	int16_t x228 = -1885;
	volatile int32_t t44 = 56;

	t44 = (((x225*x226)==x227)^x228);

	if (t44 != -1885) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (((x233*x234)==x235)^x236);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	uint8_t x239 = 1U;
	static uint16_t x240 = 104U;
	volatile int32_t t46 = 454;

	t46 = (((x237*x238)==x239)^x240);

	if (t46 != 104) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x253 = INT64_MIN;
	static uint64_t x254 = 6LLU;
	int8_t x255 = INT8_MAX;
	static uint32_t x256 = 4395U;

	t47 = (((x253*x254)==x255)^x256);

	if (t47 != 4395U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x258 = INT8_MIN;
	int16_t x260 = -1;
	volatile int32_t t48 = -9;

	t48 = (((x257*x258)==x259)^x260);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x262 = -1LL;
	int32_t t49 = 23;

	t49 = (((x261*x262)==x263)^x264);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = -3810160683359942727LL;
	uint64_t x266 = 8724414950433679LLU;
	int16_t x267 = INT16_MIN;
	volatile uint64_t t50 = 0LLU;

	t50 = (((x265*x266)==x267)^x268);

	if (t50 != 87LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = -237052LL;
	uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 2U;
	volatile int64_t x272 = -1LL;
	volatile int64_t t51 = 157637833070579042LL;

	t51 = (((x269*x270)==x271)^x272);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	int32_t t52 = -247;

	t52 = (((x273*x274)==x275)^x276);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = 254U;
	int32_t x279 = -32634512;
	int8_t x280 = INT8_MIN;

	t53 = (((x277*x278)==x279)^x280);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x281 = -1LL;
	uint32_t x282 = 141415U;
	volatile int32_t t54 = -106;

	t54 = (((x281*x282)==x283)^x284);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = -140;
	int64_t x287 = INT64_MAX;
	volatile int32_t t55 = -46;

	t55 = (((x285*x286)==x287)^x288);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x293 = 28339LL;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 28U;
	volatile uint32_t t56 = 156439220U;

	t56 = (((x293*x294)==x295)^x296);

	if (t56 != 28U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x299 = UINT64_MAX;
	volatile int32_t t57 = -13;

	t57 = (((x297*x298)==x299)^x300);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = -1;
	uint16_t x302 = 1U;
	int32_t x303 = 3959605;
	volatile uint64_t t58 = 6452026495309012LLU;

	t58 = (((x301*x302)==x303)^x304);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = UINT16_MAX;
	static uint32_t x306 = 272U;
	int16_t x307 = INT16_MIN;
	static int64_t x308 = -1LL;
	volatile int64_t t59 = -11905496630282LL;

	t59 = (((x305*x306)==x307)^x308);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = -1LL;
	volatile int64_t x311 = 15101395881LL;
	static volatile int8_t x312 = -2;
	int32_t t60 = -55855;

	t60 = (((x309*x310)==x311)^x312);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = 1476;
	static uint8_t x322 = 25U;
	int16_t x323 = INT16_MAX;
	int32_t x324 = -197;
	int32_t t61 = 155631;

	t61 = (((x321*x322)==x323)^x324);

	if (t61 != -197) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x325 = UINT32_MAX;
	volatile int8_t x326 = -1;
	int8_t x327 = -1;
	int32_t x328 = -1;
	volatile int32_t t62 = 124196;

	t62 = (((x325*x326)==x327)^x328);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x329 = -1;
	uint32_t x330 = 6115556U;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t63 = 7;

	t63 = (((x329*x330)==x331)^x332);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int16_t x334 = -1;
	int32_t x335 = -108475729;
	static volatile uint64_t x336 = UINT64_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (((x333*x334)==x335)^x336);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x341 = -1;
	uint8_t x343 = 73U;
	uint32_t x344 = 223571U;
	volatile uint32_t t65 = 3846646U;

	t65 = (((x341*x342)==x343)^x344);

	if (t65 != 223571U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	volatile int16_t x347 = -1;
	volatile int16_t x348 = -1;

	t66 = (((x345*x346)==x347)^x348);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x349 = 215632861U;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = 15U;
	volatile int32_t t67 = -38775;

	t67 = (((x349*x350)==x351)^x352);

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = -293865770LL;
	int16_t x354 = INT16_MIN;
	static volatile uint64_t x355 = 30040LLU;
	static int64_t x356 = INT64_MAX;
	int64_t t68 = INT64_MAX;

	t68 = (((x353*x354)==x355)^x356);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x361 = -24;
	static uint64_t x364 = 141LLU;
	uint64_t t69 = 84211LLU;

	t69 = (((x361*x362)==x363)^x364);

	if (t69 != 141LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = -8300;
	uint16_t x367 = 0U;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t70 = INT32_MIN;

	t70 = (((x365*x366)==x367)^x368);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x370 = -1;
	int16_t x371 = 50;

	t71 = (((x369*x370)==x371)^x372);

	if (t71 != 97) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x373 = 3297LLU;
	int64_t x374 = 195695280663633320LL;
	static volatile uint32_t t72 = 133U;

	t72 = (((x373*x374)==x375)^x376);

	if (t72 != 63373857U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 5U;
	int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t73 = INT64_MIN;

	t73 = (((x377*x378)==x379)^x380);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x381 = -1LL;
	static volatile int32_t x383 = INT32_MIN;
	int16_t x384 = 6354;
	int32_t t74 = 1;

	t74 = (((x381*x382)==x383)^x384);

	if (t74 != 6354) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x386 = 97U;
	int8_t x387 = -1;
	volatile int64_t t75 = -3094LL;

	t75 = (((x385*x386)==x387)^x388);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x389 = 5U;
	static volatile int8_t x390 = INT8_MIN;
	int64_t x392 = 8482349614101981LL;
	volatile int64_t t76 = 1265892662LL;

	t76 = (((x389*x390)==x391)^x392);

	if (t76 != 8482349614101981LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x393 = -1;
	uint16_t x394 = 93U;
	static uint16_t x395 = UINT16_MAX;
	uint64_t x396 = UINT64_MAX;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x393*x394)==x395)^x396);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = -1LL;
	static uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MAX;
	static int64_t t78 = INT64_MAX;

	t78 = (((x397*x398)==x399)^x400);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x406 = -1;
	int64_t x407 = -262693LL;
	volatile int32_t x408 = -1;

	t79 = (((x405*x406)==x407)^x408);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x413 = -1;
	volatile uint64_t x414 = 53270997197417611LLU;
	static uint32_t x415 = UINT32_MAX;
	volatile int64_t t80 = -1LL;

	t80 = (((x413*x414)==x415)^x416);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x419 = 0U;
	int16_t x420 = 115;

	t81 = (((x417*x418)==x419)^x420);

	if (t81 != 115) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x421 = 2218861226123LLU;
	static int8_t x422 = -7;
	static volatile uint64_t x423 = 4350336991294158LLU;
	int8_t x424 = 1;
	volatile int32_t t82 = 1024482;

	t82 = (((x421*x422)==x423)^x424);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x429 = 31359;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;
	volatile int32_t t83 = 1533086;

	t83 = (((x429*x430)==x431)^x432);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x433 = 3LLU;
	uint8_t x434 = 29U;
	int64_t x435 = INT64_MIN;
	volatile int32_t x436 = INT32_MAX;
	static volatile int32_t t84 = INT32_MAX;

	t84 = (((x433*x434)==x435)^x436);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x437 = -1LL;
	volatile uint64_t x438 = 8556102637965834LLU;
	int16_t x439 = -3110;
	uint64_t x440 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (((x437*x438)==x439)^x440);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x441 = 6U;
	int64_t x443 = -26240019241982436LL;
	static int16_t x444 = -1;

	t86 = (((x441*x442)==x443)^x444);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x453 = 21U;
	volatile uint32_t x454 = 281U;
	int16_t x455 = 2083;
	volatile uint64_t t87 = 21357145936LLU;

	t87 = (((x453*x454)==x455)^x456);

	if (t87 != 25LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x457 = 1U;
	int64_t x458 = INT64_MAX;
	static volatile uint64_t x459 = 1696338255689849401LLU;
	volatile uint64_t x460 = 1023560905815270714LLU;
	static volatile uint64_t t88 = 1557084740369566LLU;

	t88 = (((x457*x458)==x459)^x460);

	if (t88 != 1023560905815270714LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = 1561;
	int64_t x462 = -1LL;
	static volatile int32_t t89 = 24;

	t89 = (((x461*x462)==x463)^x464);

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x469 = UINT32_MAX;
	static int32_t x470 = -2;
	uint8_t x472 = UINT8_MAX;
	int32_t t90 = 11446;

	t90 = (((x469*x470)==x471)^x472);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x473 = 1075LL;
	uint16_t x474 = UINT16_MAX;
	volatile int16_t x475 = INT16_MIN;
	uint64_t x476 = 24102239965970234LLU;
	uint64_t t91 = 9LLU;

	t91 = (((x473*x474)==x475)^x476);

	if (t91 != 24102239965970234LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x481 = -1;
	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	int32_t t92 = 0;

	t92 = (((x481*x482)==x483)^x484);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x485 = UINT16_MAX;
	uint16_t x486 = 242U;
	uint8_t x487 = 4U;
	volatile int64_t t93 = -2162535LL;

	t93 = (((x485*x486)==x487)^x488);

	if (t93 != 269815975817041LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = INT8_MIN;
	uint64_t x490 = 2930507702LLU;
	volatile uint8_t x491 = 15U;
	int32_t t94 = 24896585;

	t94 = (((x489*x490)==x491)^x492);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x494 = INT64_MAX;
	uint8_t x495 = 33U;
	volatile int16_t x496 = -1;
	volatile int32_t t95 = -402218957;

	t95 = (((x493*x494)==x495)^x496);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x497 = 2081120342493679LLU;
	int32_t x498 = INT32_MAX;
	uint32_t x499 = UINT32_MAX;
	int32_t x500 = -125172168;
	volatile int32_t t96 = -1011258;

	t96 = (((x497*x498)==x499)^x500);

	if (t96 != -125172168) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x501 = 1460317733U;
	uint8_t x502 = UINT8_MAX;
	int16_t x503 = INT16_MAX;
	uint32_t x504 = 247U;
	volatile uint32_t t97 = 463439151U;

	t97 = (((x501*x502)==x503)^x504);

	if (t97 != 247U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x505 = INT16_MIN;
	volatile int8_t x507 = 1;
	int8_t x508 = INT8_MAX;
	int32_t t98 = 1046;

	t98 = (((x505*x506)==x507)^x508);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x509 = 11892831955835LLU;
	int32_t x510 = INT32_MAX;
	int8_t x511 = 0;
	volatile int32_t t99 = 324915045;

	t99 = (((x509*x510)==x511)^x512);

	if (t99 != 2) { NG(); } else { ; }
	
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

