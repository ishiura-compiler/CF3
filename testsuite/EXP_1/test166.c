#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -1867;
int16_t x13 = 1564;
int16_t x26 = 73;
int16_t x27 = -1;
volatile int64_t x28 = -1LL;
uint8_t x41 = 13U;
static int8_t x50 = -1;
int16_t x55 = INT16_MIN;
int32_t t15 = 3;
volatile uint32_t x70 = 12U;
uint16_t x72 = 7890U;
volatile int32_t t16 = 6487;
static volatile uint64_t x73 = UINT64_MAX;
static int64_t x76 = INT64_MIN;
int32_t t21 = 6370;
volatile int32_t t25 = 331659040;
uint32_t x124 = 640U;
static volatile int8_t x127 = -47;
int64_t x131 = INT64_MIN;
int32_t t29 = 0;
uint64_t x142 = UINT64_MAX;
int16_t x144 = INT16_MAX;
int32_t t32 = 77880786;
int8_t x149 = 16;
uint32_t x177 = 20184U;
volatile int64_t x180 = -19848804011327100LL;
static volatile int16_t x182 = -67;
static uint16_t x184 = 0U;
static volatile int32_t t42 = -23476641;
int16_t x189 = -1;
int32_t x191 = -27;
static int32_t t46 = 283346;
int32_t x204 = -1;
int32_t x215 = 1;
uint16_t x222 = UINT16_MAX;
int8_t x227 = -14;
int32_t x228 = -13995957;
volatile int16_t x233 = INT16_MIN;
volatile uint32_t x234 = 80U;
int64_t x241 = -1LL;
int8_t x247 = 1;
uint64_t x248 = UINT64_MAX;
uint8_t x254 = 2U;
volatile int32_t t56 = 145548233;
int16_t x258 = -1;
uint64_t x265 = UINT64_MAX;
int64_t x266 = INT64_MAX;
int8_t x278 = -1;
static int32_t x279 = -52157;
uint64_t x282 = 2022498719LLU;
int32_t t61 = -293;
int64_t x289 = INT64_MIN;
volatile int32_t t63 = 1030659380;
int16_t x296 = -2144;
int32_t x299 = -1;
int8_t x300 = INT8_MIN;
static int16_t x301 = INT16_MIN;
volatile int32_t x303 = -1;
volatile uint32_t x318 = 13835U;
static int32_t t70 = 863;
volatile uint8_t x329 = 8U;
static int8_t x331 = INT8_MIN;
int32_t x337 = -1;
static int16_t x343 = -1;
volatile int8_t x348 = -1;
volatile int8_t x352 = -1;
int32_t x354 = INT32_MIN;
static uint64_t x365 = 3492306374885LLU;
static uint16_t x381 = UINT16_MAX;
static int32_t x383 = 426537494;
volatile int32_t t84 = -124864;
volatile int32_t t85 = 11;
volatile uint32_t x403 = 254U;
volatile int32_t t87 = 46308;
int16_t x418 = 10153;
static int32_t x424 = INT32_MIN;
int32_t x438 = INT32_MAX;
int8_t x440 = INT8_MAX;
static int32_t t92 = 1661085;
int8_t x454 = -1;
volatile int8_t x455 = -5;
int32_t x459 = -1;
int8_t x464 = -1;
int16_t x467 = -4516;
int64_t x468 = -1LL;


void f0(void) {
	int16_t x1 = 183;
	uint32_t x2 = 90305U;
	volatile int32_t x3 = INT32_MIN;
	uint32_t x4 = 109U;
	volatile int32_t t0 = -51;

	t0 = (((x1+x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = -1;
	uint8_t x8 = 9U;
	int32_t t1 = -50501;

	t1 = (((x5+x6)^x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 288U;
	int32_t x10 = 6318;
	static uint8_t x11 = UINT8_MAX;
	static volatile int8_t x12 = 4;

	t2 = (((x9+x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 22379;

	t3 = (((x13+x14)^x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -1;
	volatile int32_t x19 = -1;
	uint32_t x20 = 6U;
	int32_t t4 = 3;

	t4 = (((x17+x18)^x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 672040271;

	t5 = (((x21+x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	volatile int32_t t6 = -3758831;

	t6 = (((x25+x26)^x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int8_t x30 = -33;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = 19U;
	int32_t t7 = 1042720;

	t7 = (((x29+x30)^x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint16_t x34 = 9U;
	int16_t x35 = 1;
	volatile int64_t x36 = -1LL;
	static int32_t t8 = 17;

	t8 = (((x33+x34)^x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -241;
	uint64_t x38 = UINT64_MAX;
	volatile int8_t x39 = INT8_MIN;
	uint64_t x40 = 235911106LLU;
	volatile int32_t t9 = 368;

	t9 = (((x37+x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 1U;
	int16_t x43 = -2102;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 26;

	t10 = (((x41+x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 0U;
	uint16_t x46 = UINT16_MAX;
	static int64_t x47 = INT64_MIN;
	uint8_t x48 = 111U;
	volatile int32_t t11 = 1;

	t11 = (((x45+x46)^x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 0U;
	static int32_t x51 = INT32_MAX;
	volatile int64_t x52 = 310023LL;
	static int32_t t12 = -2815531;

	t12 = (((x49+x50)^x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 226;
	static int16_t x54 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -480;

	t13 = (((x53+x54)^x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 60;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 228699759U;
	static int32_t t14 = 177367414;

	t14 = (((x57+x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x66 = 4039U;
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MIN;

	t15 = (((x65+x66)^x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x69 = -1;
	int8_t x71 = 18;

	t16 = (((x69+x70)^x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x74 = UINT16_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	volatile int32_t t17 = -8423;

	t17 = (((x73+x74)^x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = 27U;
	int32_t t18 = -83653496;

	t18 = (((x77+x78)^x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 5436189LLU;
	int8_t x82 = -1;
	static int64_t x83 = 87LL;
	int64_t x84 = -709368104328269LL;
	volatile int32_t t19 = -3;

	t19 = (((x81+x82)^x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 466U;
	volatile uint16_t x86 = 28U;
	int8_t x87 = 45;
	int8_t x88 = 12;
	volatile int32_t t20 = 608;

	t20 = (((x85+x86)^x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -1LL;

	t21 = (((x89+x90)^x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 6696768237LLU;
	static int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	static int16_t x96 = -1;
	int32_t t22 = 14412;

	t22 = (((x93+x94)^x95)<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int8_t x98 = 2;
	int32_t x99 = INT32_MAX;
	volatile int32_t x100 = INT32_MAX;
	int32_t t23 = 90;

	t23 = (((x97+x98)^x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	static int8_t x110 = -10;
	static volatile uint64_t x111 = 6411859476LLU;
	int16_t x112 = -11060;
	volatile int32_t t24 = 1022672396;

	t24 = (((x109+x110)^x111)<=x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	uint32_t x114 = 54093391U;
	volatile int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;

	t25 = (((x113+x114)^x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x117 = UINT32_MAX;
	uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = -1LL;
	int8_t x120 = -1;
	int32_t t26 = -61532;

	t26 = (((x117+x118)^x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 404U;
	uint64_t x122 = 64913657926LLU;
	static int32_t x123 = -187319927;
	int32_t t27 = -20;

	t27 = (((x121+x122)^x123)<=x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = 373245193523239LLU;
	int64_t x126 = 13234LL;
	uint8_t x128 = 1U;
	int32_t t28 = 3392688;

	t28 = (((x125+x126)^x127)<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -1;
	volatile uint64_t x130 = 3257500209322916841LLU;
	int64_t x132 = INT64_MIN;

	t29 = (((x129+x130)^x131)<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 47998LLU;
	volatile uint16_t x134 = 1728U;
	static int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t30 = -1;

	t30 = (((x133+x134)^x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = UINT32_MAX;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = 4;
	static volatile int16_t x140 = INT16_MIN;
	int32_t t31 = -4345;

	t31 = (((x137+x138)^x139)<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	int8_t x143 = 2;

	t32 = (((x141+x142)^x143)<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 3438U;
	volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	volatile uint8_t x148 = 91U;
	int32_t t33 = -472;

	t33 = (((x145+x146)^x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MAX;
	static int32_t x152 = -2540093;
	volatile int32_t t34 = 1313;

	t34 = (((x149+x150)^x151)<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 351811749LLU;
	uint32_t x154 = 233U;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = -1163;

	t35 = (((x153+x154)^x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 6835LL;
	int8_t x158 = INT8_MIN;
	volatile int8_t x159 = 5;
	int16_t x160 = INT16_MIN;
	volatile int32_t t36 = -3;

	t36 = (((x157+x158)^x159)<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = 1;
	volatile uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 79566U;
	int32_t t37 = -235;

	t37 = (((x161+x162)^x163)<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	static int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MAX;
	volatile int32_t t38 = -1750557;

	t38 = (((x165+x166)^x167)<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = 6069;
	int16_t x170 = -2;
	uint8_t x171 = 0U;
	volatile int16_t x172 = INT16_MAX;
	static int32_t t39 = -5217915;

	t39 = (((x169+x170)^x171)<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -700909314144LL;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = 3U;
	static int16_t x176 = 1302;
	volatile int32_t t40 = -830710203;

	t40 = (((x173+x174)^x175)<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t41 = -751052;

	t41 = (((x177+x178)^x179)<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MAX;
	volatile uint16_t x183 = UINT16_MAX;

	t42 = (((x181+x182)^x183)<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 14;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t43 = -61620861;

	t43 = (((x185+x186)^x187)<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x190 = 1U;
	int16_t x192 = 6986;
	int32_t t44 = -13868865;

	t44 = (((x189+x190)^x191)<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	static volatile int16_t x194 = 45;
	int64_t x195 = 1LL;
	static int32_t x196 = INT32_MIN;
	volatile int32_t t45 = 1;

	t45 = (((x193+x194)^x195)<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = 4;
	uint8_t x198 = 14U;
	uint64_t x199 = 1243LLU;
	uint32_t x200 = UINT32_MAX;

	t46 = (((x197+x198)^x199)<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 15021579130LLU;
	int64_t x202 = -15078380LL;
	int64_t x203 = INT64_MIN;
	volatile int32_t t47 = -735894;

	t47 = (((x201+x202)^x203)<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = 1008994006714LL;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 6U;
	int16_t x208 = -931;
	static int32_t t48 = 5635348;

	t48 = (((x205+x206)^x207)<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x213 = 114LL;
	int16_t x214 = INT16_MAX;
	volatile int8_t x216 = INT8_MIN;
	static volatile int32_t t49 = 94;

	t49 = (((x213+x214)^x215)<=x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -1;
	int16_t x223 = 13;
	int16_t x224 = 1879;
	int32_t t50 = 242661851;

	t50 = (((x221+x222)^x223)<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MIN;
	uint16_t x226 = 834U;
	static volatile int32_t t51 = 89070294;

	t51 = (((x225+x226)^x227)<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x235 = INT32_MIN;
	volatile int64_t x236 = -8312238LL;
	volatile int32_t t52 = -63911270;

	t52 = (((x233+x234)^x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MIN;
	int16_t x239 = 218;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t53 = -6;

	t53 = (((x237+x238)^x239)<=x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x242 = 1272058301693LL;
	static uint64_t x243 = 7048299765138402029LLU;
	int32_t x244 = INT32_MIN;
	volatile int32_t t54 = -1292;

	t54 = (((x241+x242)^x243)<=x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	int32_t x246 = -40670;
	int32_t t55 = -485;

	t55 = (((x245+x246)^x247)<=x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = 6;
	int32_t x255 = INT32_MAX;
	int8_t x256 = -25;

	t56 = (((x253+x254)^x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 23U;
	uint64_t x259 = 12LLU;
	uint32_t x260 = UINT32_MAX;
	int32_t t57 = 4008;

	t57 = (((x257+x258)^x259)<=x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x267 = -1;
	uint8_t x268 = 0U;
	volatile int32_t t58 = -1621;

	t58 = (((x265+x266)^x267)<=x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -237;
	int8_t x274 = 24;
	uint32_t x275 = UINT32_MAX;
	static int32_t x276 = INT32_MIN;
	static volatile int32_t t59 = 15;

	t59 = (((x273+x274)^x275)<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = 16621506LL;
	static uint8_t x280 = 60U;
	static volatile int32_t t60 = 990;

	t60 = (((x277+x278)^x279)<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MAX;
	volatile int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MIN;

	t61 = (((x281+x282)^x283)<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x285 = UINT64_MAX;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = -279;
	int32_t x288 = -1;
	int32_t t62 = 2157;

	t62 = (((x285+x286)^x287)<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x290 = UINT32_MAX;
	volatile uint64_t x291 = 315735LLU;
	uint32_t x292 = 1108935815U;

	t63 = (((x289+x290)^x291)<=x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x293 = -53;
	volatile int16_t x294 = INT16_MIN;
	volatile uint8_t x295 = 0U;
	volatile int32_t t64 = -25084189;

	t64 = (((x293+x294)^x295)<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = 51;
	int32_t x298 = -1;
	int32_t t65 = 329776411;

	t65 = (((x297+x298)^x299)<=x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x302 = INT16_MIN;
	uint8_t x304 = 2U;
	int32_t t66 = -6;

	t66 = (((x301+x302)^x303)<=x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x309 = 1U;
	uint32_t x310 = UINT32_MAX;
	static uint16_t x311 = UINT16_MAX;
	uint64_t x312 = UINT64_MAX;
	int32_t t67 = 501786;

	t67 = (((x309+x310)^x311)<=x312);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = 221143580913875309LL;
	volatile int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = 3LLU;
	int32_t t68 = -7912;

	t68 = (((x313+x314)^x315)<=x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x317 = 158;
	uint32_t x319 = 1794U;
	static uint8_t x320 = 2U;
	volatile int32_t t69 = -50619;

	t69 = (((x317+x318)^x319)<=x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x325 = 0;
	int8_t x326 = INT8_MIN;
	int64_t x327 = -1LL;
	int64_t x328 = INT64_MAX;

	t70 = (((x325+x326)^x327)<=x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x330 = UINT8_MAX;
	uint64_t x332 = 329LLU;
	volatile int32_t t71 = 5;

	t71 = (((x329+x330)^x331)<=x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t72 = 925;

	t72 = (((x337+x338)^x339)<=x340);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = 1U;
	volatile int64_t x344 = INT64_MAX;
	int32_t t73 = 88;

	t73 = (((x341+x342)^x343)<=x344);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x345 = 1435225537291011060LLU;
	int64_t x346 = INT64_MAX;
	static int64_t x347 = -1LL;
	volatile int32_t t74 = 0;

	t74 = (((x345+x346)^x347)<=x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x349 = 4021552520707331LLU;
	int64_t x350 = -62810435LL;
	int8_t x351 = INT8_MIN;
	int32_t t75 = 325875003;

	t75 = (((x349+x350)^x351)<=x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x353 = 137047U;
	static int16_t x355 = INT16_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	volatile int32_t t76 = -6997887;

	t76 = (((x353+x354)^x355)<=x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = 190965;
	int32_t x358 = INT32_MIN;
	static volatile int16_t x359 = INT16_MIN;
	static volatile int8_t x360 = -56;
	volatile int32_t t77 = -42091597;

	t77 = (((x357+x358)^x359)<=x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = 3329110924328135LL;
	volatile int64_t x362 = -400LL;
	volatile uint32_t x363 = UINT32_MAX;
	uint64_t x364 = 830630560509LLU;
	static volatile int32_t t78 = 1730574;

	t78 = (((x361+x362)^x363)<=x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x366 = 25U;
	int32_t x367 = INT32_MAX;
	int16_t x368 = -762;
	int32_t t79 = -3560232;

	t79 = (((x365+x366)^x367)<=x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x373 = 4008914U;
	uint64_t x374 = 718678166LLU;
	int8_t x375 = INT8_MIN;
	static uint32_t x376 = 33556U;
	int32_t t80 = -3;

	t80 = (((x373+x374)^x375)<=x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x382 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	int32_t t81 = 276486;

	t81 = (((x381+x382)^x383)<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = -45929;
	int8_t x386 = -1;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -22366708;
	volatile int32_t t82 = -298;

	t82 = (((x385+x386)^x387)<=x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 5879U;
	static int8_t x391 = -2;
	int8_t x392 = -2;
	static volatile int32_t t83 = 5780;

	t83 = (((x389+x390)^x391)<=x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = 1;
	int32_t x394 = -941;
	uint8_t x395 = 6U;
	int16_t x396 = -1;

	t84 = (((x393+x394)^x395)<=x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MIN;

	t85 = (((x397+x398)^x399)<=x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x401 = INT8_MIN;
	static int32_t x402 = INT32_MAX;
	volatile int16_t x404 = 6790;
	int32_t t86 = -22380;

	t86 = (((x401+x402)^x403)<=x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x409 = -1;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MAX;
	int64_t x412 = INT64_MIN;

	t87 = (((x409+x410)^x411)<=x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = -186;
	int64_t x414 = -1LL;
	uint32_t x415 = 80769U;
	int32_t x416 = -1;
	int32_t t88 = -17431;

	t88 = (((x413+x414)^x415)<=x416);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = 175U;
	int16_t x419 = -1;
	static volatile uint16_t x420 = 15U;
	int32_t t89 = 38054;

	t89 = (((x417+x418)^x419)<=x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = -1;
	int16_t x422 = -309;
	int64_t x423 = INT64_MIN;
	int32_t t90 = -3652526;

	t90 = (((x421+x422)^x423)<=x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x429 = 17148U;
	int16_t x430 = 53;
	int16_t x431 = -37;
	int64_t x432 = -1LL;
	static int32_t t91 = 34369;

	t91 = (((x429+x430)^x431)<=x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = INT64_MIN;
	int8_t x439 = INT8_MIN;

	t92 = (((x437+x438)^x439)<=x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x441 = -1;
	int16_t x442 = 0;
	uint32_t x443 = 0U;
	static int8_t x444 = -1;
	volatile int32_t t93 = -2601194;

	t93 = (((x441+x442)^x443)<=x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = INT8_MAX;
	int16_t x446 = -1;
	uint64_t x447 = 3513402LLU;
	uint16_t x448 = 26962U;
	volatile int32_t t94 = 21;

	t94 = (((x445+x446)^x447)<=x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = INT16_MIN;
	static uint16_t x450 = UINT16_MAX;
	uint16_t x451 = 444U;
	int64_t x452 = INT64_MIN;
	int32_t t95 = -26711796;

	t95 = (((x449+x450)^x451)<=x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x453 = INT16_MIN;
	static int16_t x456 = INT16_MIN;
	static volatile int32_t t96 = 80;

	t96 = (((x453+x454)^x455)<=x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x457 = 0;
	volatile int8_t x458 = 2;
	int32_t x460 = INT32_MIN;
	int32_t t97 = 102;

	t97 = (((x457+x458)^x459)<=x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x461 = -1;
	volatile uint64_t x462 = UINT64_MAX;
	int32_t x463 = -1;
	volatile int32_t t98 = -1;

	t98 = (((x461+x462)^x463)<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MAX;
	volatile int16_t x466 = INT16_MIN;
	volatile int32_t t99 = -58;

	t99 = (((x465+x466)^x467)<=x468);

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

