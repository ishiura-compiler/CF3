#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 0U;
int16_t x2 = 9171;
static volatile int32_t x4 = 7;
int64_t x5 = INT64_MAX;
int32_t x6 = 428;
volatile int64_t t3 = -1858485830307831336LL;
volatile uint8_t x26 = UINT8_MAX;
uint8_t x34 = 23U;
static int8_t x35 = INT8_MAX;
uint64_t t6 = 28052878167528LLU;
uint32_t x38 = 1U;
uint16_t x40 = 79U;
static int16_t x61 = 1;
volatile int16_t x62 = 6720;
int32_t x68 = -692027;
static uint8_t x71 = 0U;
int32_t t14 = -11344564;
int32_t x78 = INT32_MIN;
volatile int8_t x81 = -1;
int16_t x83 = INT16_MIN;
volatile int32_t t16 = 8182050;
int64_t x88 = -1835LL;
int8_t x91 = 46;
int32_t x94 = 11111;
uint64_t x101 = 233319954900303LLU;
int32_t x103 = INT32_MIN;
static volatile uint64_t t21 = 3084982172395941330LLU;
int16_t x107 = INT16_MIN;
volatile uint16_t x109 = UINT16_MAX;
static volatile int64_t x113 = -17724LL;
int16_t x115 = INT16_MAX;
volatile uint64_t x118 = 167727777608318LLU;
static uint32_t x119 = 233U;
uint64_t x125 = UINT64_MAX;
int64_t x127 = 139382059757302755LL;
int16_t x131 = -1;
static int64_t x132 = -33527126615LL;
int8_t x142 = INT8_MIN;
uint32_t t31 = 206634U;
uint64_t t33 = 142237927512LLU;
static int16_t x164 = INT16_MAX;
volatile int32_t t37 = 62543250;
volatile int16_t x181 = -1;
uint32_t x184 = 36608411U;
volatile int64_t t41 = 3457040788014416582LL;
int64_t x191 = INT64_MAX;
int64_t x192 = INT64_MIN;
static int64_t x195 = INT64_MIN;
uint8_t x199 = 6U;
uint16_t x207 = 1U;
int8_t x213 = -2;
static int32_t x216 = 1499;
static int64_t x218 = INT64_MAX;
uint16_t x238 = UINT16_MAX;
volatile int64_t t53 = -2548LL;
static int32_t x245 = -3571948;
static volatile int32_t t56 = 6653;
int64_t x258 = INT64_MIN;
int8_t x259 = -1;
static volatile int64_t x261 = -1LL;
int16_t x263 = INT16_MAX;
int16_t x267 = INT16_MAX;
static int16_t x269 = INT16_MIN;
int16_t x270 = INT16_MIN;
static uint64_t x283 = 4460555196011945192LLU;
volatile int64_t x284 = -1LL;
static uint32_t t64 = 24151231U;
uint32_t x293 = 220426U;
volatile int64_t t67 = -2812883247599311948LL;
int32_t x303 = 349936;
int32_t x308 = -1;
volatile uint32_t t70 = 4339938U;
static int32_t x317 = -1;
static uint64_t x318 = 7089LLU;
uint8_t x320 = 1U;
int64_t x325 = INT64_MAX;
volatile int8_t x335 = INT8_MIN;
static uint32_t x338 = UINT32_MAX;
uint64_t x339 = 127859LLU;
int64_t x340 = 737916189670695105LL;
int64_t t77 = 7659923367240437LL;
static uint32_t x341 = 7714795U;
static int32_t x354 = INT32_MIN;
static int32_t x357 = -1;
volatile int16_t x359 = 74;
static int32_t x365 = INT32_MAX;
static uint32_t x368 = 2U;
uint8_t x372 = UINT8_MAX;
volatile uint64_t x375 = 2747LLU;
static volatile int64_t t85 = -368592177374588LL;
static uint8_t x389 = 96U;
uint16_t x392 = 1261U;
volatile int8_t x393 = INT8_MAX;
int64_t x399 = INT64_MIN;
int8_t x401 = -43;
uint16_t x405 = UINT16_MAX;
uint8_t x418 = 1U;
int64_t x421 = INT64_MAX;


void f0(void) {
	static int16_t x3 = -12;
	int32_t t0 = 13106330;

	t0 = ((x1-(x2<=x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x7 = -5;
	volatile int8_t x8 = 29;
	volatile int64_t t1 = 8077534138412LL;

	t1 = ((x5-(x6<=x7))/x8);

	if (t1 != 318047311615681924LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3756;
	int64_t x10 = -1LL;
	volatile int8_t x11 = INT8_MIN;
	static uint64_t x12 = 1053907375253LLU;
	uint64_t t2 = 1LLU;

	t2 = ((x9-(x10<=x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MAX;
	int64_t x24 = -1LL;

	t3 = ((x21-(x22<=x23))/x24);

	if (t3 != -65534LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 7927U;
	int32_t x27 = -19834;
	int32_t x28 = -1;
	static volatile int32_t t4 = -18;

	t4 = ((x25-(x26<=x27))/x28);

	if (t4 != -7927) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 1U;
	uint16_t x30 = 0U;
	uint8_t x31 = 86U;
	int32_t x32 = 24156754;
	int32_t t5 = 51931786;

	t5 = ((x29-(x30<=x31))/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 856015738473523225LLU;
	volatile int8_t x36 = -7;

	t6 = ((x33-(x34<=x35))/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 15;
	int8_t x39 = INT8_MIN;
	int32_t t7 = 245498;

	t7 = ((x37-(x38<=x39))/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -3630933LL;
	static int16_t x46 = INT16_MAX;
	volatile uint64_t x47 = 56LLU;
	uint8_t x48 = 3U;
	int64_t t8 = 17877993377LL;

	t8 = ((x45-(x46<=x47))/x48);

	if (t8 != -1210311LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 1LLU;
	static int32_t x50 = INT32_MIN;
	uint64_t x51 = 78LLU;
	int16_t x52 = -38;
	uint64_t t9 = 875985245LLU;

	t9 = ((x49-(x50<=x51))/x52);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = -52;
	int32_t x54 = INT32_MIN;
	static uint64_t x55 = 7LLU;
	static int64_t x56 = INT64_MAX;
	static int64_t t10 = 143099LL;

	t10 = ((x53-(x54<=x55))/x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x63 = -2;
	uint8_t x64 = 4U;
	volatile int32_t t11 = 562437;

	t11 = ((x61-(x62<=x63))/x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 6U;
	int64_t x66 = 289023445893919LL;
	int16_t x67 = INT16_MIN;
	static volatile int32_t t12 = -999409;

	t12 = ((x65-(x66<=x67))/x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 12474983U;
	int64_t x70 = 7247373LL;
	int8_t x72 = INT8_MIN;
	uint32_t t13 = 15038949U;

	t13 = ((x69-(x70<=x71))/x72);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = 9210;
	static volatile int8_t x74 = -1;
	int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;

	t14 = ((x73-(x74<=x75))/x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 201676U;
	static int32_t x79 = 1220115;
	uint64_t x80 = 3705254LLU;
	static uint64_t t15 = 49LLU;

	t15 = ((x77-(x78<=x79))/x80);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x82 = 62;
	volatile int32_t x84 = INT32_MAX;

	t16 = ((x81-(x82<=x83))/x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x85 = -1;
	volatile int32_t x86 = INT32_MAX;
	int8_t x87 = -59;
	int64_t t17 = 11102456LL;

	t17 = ((x85-(x86<=x87))/x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x89 = 6U;
	uint16_t x90 = 1U;
	int8_t x92 = -14;
	volatile int32_t t18 = 821169;

	t18 = ((x89-(x90<=x91))/x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 8433U;
	volatile uint64_t t19 = 171437885LLU;

	t19 = ((x93-(x94<=x95))/x96);

	if (t19 != 2187447417729106LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = 22;
	static volatile uint64_t x98 = 1544007380279LLU;
	volatile int8_t x99 = 21;
	volatile int16_t x100 = -1;
	static volatile int32_t t20 = -17297797;

	t20 = ((x97-(x98<=x99))/x100);

	if (t20 != -22) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = INT8_MIN;
	uint64_t x104 = 150945910182672647LLU;

	t21 = ((x101-(x102<=x103))/x104);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = 19U;
	int8_t x106 = -1;
	static int16_t x108 = INT16_MIN;
	int32_t t22 = 0;

	t22 = ((x105-(x106<=x107))/x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x110 = UINT8_MAX;
	static uint8_t x111 = 15U;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t23 = 148LLU;

	t23 = ((x109-(x110<=x111))/x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x114 = UINT32_MAX;
	uint32_t x116 = 749502546U;
	int64_t t24 = -278874135314518LL;

	t24 = ((x113-(x114<=x115))/x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	int16_t x120 = -235;
	volatile int32_t t25 = 23703766;

	t25 = ((x117-(x118<=x119))/x120);

	if (t25 != 9138228) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = -1LL;
	int64_t x123 = 7036680339878667LL;
	int64_t x124 = -123431668LL;
	volatile int64_t t26 = 110512351529LL;

	t26 = ((x121-(x122<=x123))/x124);

	if (t26 != -74724519131LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x126 = 10233869;
	static uint32_t x128 = UINT32_MAX;
	volatile uint64_t t27 = 209701365782259728LLU;

	t27 = ((x125-(x126<=x127))/x128);

	if (t27 != 4294967296LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 314379LLU;
	uint8_t x130 = 14U;
	uint64_t t28 = 21948LLU;

	t28 = ((x129-(x130<=x131))/x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -4848933;
	int32_t x135 = 15;
	int64_t x136 = 2485449073335047LL;
	volatile int64_t t29 = -67LL;

	t29 = ((x133-(x134<=x135))/x136);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	volatile uint64_t x138 = 3654LLU;
	int32_t x139 = 53279;
	static volatile uint16_t x140 = UINT16_MAX;
	volatile int64_t t30 = -985774460675079LL;

	t30 = ((x137-(x138<=x139))/x140);

	if (t30 != 140739635871744LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	static int64_t x143 = INT64_MAX;
	uint32_t x144 = UINT32_MAX;

	t31 = ((x141-(x142<=x143))/x144);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MIN;
	int8_t x146 = -3;
	int16_t x147 = INT16_MIN;
	static uint8_t x148 = UINT8_MAX;
	static volatile int32_t t32 = 1;

	t32 = ((x145-(x146<=x147))/x148);

	if (t32 != -8421504) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	static uint64_t x154 = 3509499165241LLU;
	static uint16_t x155 = 7549U;
	static int32_t x156 = 133515;

	t33 = ((x153-(x154<=x155))/x156);

	if (t33 != 138162334372239LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 24U;
	int8_t x158 = -30;
	static uint16_t x159 = 105U;
	int32_t x160 = -1;
	int32_t t34 = 105604;

	t34 = ((x157-(x158<=x159))/x160);

	if (t34 != -23) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x161 = 2791U;
	int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 744344312577626LLU;
	int32_t t35 = -1;

	t35 = ((x161-(x162<=x163))/x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = 20;
	static int32_t x166 = -100123989;
	static int8_t x167 = INT8_MIN;
	volatile int16_t x168 = INT16_MAX;
	volatile int32_t t36 = -829383641;

	t36 = ((x165-(x166<=x167))/x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x169 = -1;
	static int64_t x170 = -1LL;
	static int16_t x171 = INT16_MAX;
	int32_t x172 = -1;

	t37 = ((x169-(x170<=x171))/x172);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 16U;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 13LLU;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t38 = -241;

	t38 = ((x173-(x174<=x175))/x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 2746U;
	uint8_t x178 = 16U;
	uint64_t x179 = 131185212014211691LLU;
	int32_t x180 = -1;
	uint32_t t39 = 1731U;

	t39 = ((x177-(x178<=x179))/x180);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = INT64_MIN;
	static int32_t x183 = -1;
	volatile uint32_t t40 = 361U;

	t40 = ((x181-(x182<=x183))/x184);

	if (t40 != 117U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x185 = -4337LL;
	int16_t x186 = INT16_MIN;
	static int8_t x187 = 0;
	volatile int16_t x188 = 465;

	t41 = ((x185-(x186<=x187))/x188);

	if (t41 != -9LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x189 = 3821U;
	uint32_t x190 = 1676U;
	volatile int64_t t42 = -610999922185908498LL;

	t42 = ((x189-(x190<=x191))/x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = INT32_MAX;
	volatile int64_t x194 = INT64_MIN;
	uint16_t x196 = 84U;
	int32_t t43 = -629330;

	t43 = ((x193-(x194<=x195))/x196);

	if (t43 != 25565281) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -28522169941LL;
	static uint32_t x198 = 153U;
	volatile int32_t x200 = INT32_MIN;
	volatile int64_t t44 = 2669505783489413LL;

	t44 = ((x197-(x198<=x199))/x200);

	if (t44 != 13LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	int64_t x202 = -574475480974942446LL;
	uint64_t x203 = UINT64_MAX;
	uint16_t x204 = 961U;
	volatile int64_t t45 = -41581593651LL;

	t45 = ((x201-(x202<=x203))/x204);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 20239216550961237LL;
	uint8_t x206 = 4U;
	uint16_t x208 = 58U;
	int64_t t46 = -1531436691845LL;

	t46 = ((x205-(x206<=x207))/x208);

	if (t46 != 348952009499331LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x209 = 2628410606525LLU;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = -1;
	volatile uint64_t t47 = 19521065LLU;

	t47 = ((x209-(x210<=x211))/x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x214 = 1U;
	int16_t x215 = 1;
	volatile int32_t t48 = -242;

	t48 = ((x213-(x214<=x215))/x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -1;
	volatile uint8_t x219 = 16U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t49 = -74558;

	t49 = ((x217-(x218<=x219))/x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 448391271466815661LLU;
	int8_t x224 = -1;
	static int32_t t50 = -138413168;

	t50 = ((x221-(x222<=x223))/x224);

	if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = -1;
	static volatile int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t51 = 13257;

	t51 = ((x225-(x226<=x227))/x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MIN;
	static volatile int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t52 = 0;

	t52 = ((x229-(x230<=x231))/x232);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 6520U;
	static int8_t x239 = INT8_MIN;
	static int64_t x240 = INT64_MIN;

	t53 = ((x237-(x238<=x239))/x240);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 1575064699214LLU;
	int32_t x242 = -1;
	volatile uint32_t x243 = UINT32_MAX;
	volatile int16_t x244 = INT16_MIN;
	static uint64_t t54 = 15716LLU;

	t54 = ((x241-(x242<=x243))/x244);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x246 = 39891102994896LLU;
	volatile uint16_t x247 = 20503U;
	static volatile uint64_t x248 = 13601045LLU;
	volatile uint64_t t55 = 18853513572LLU;

	t55 = ((x245-(x246<=x247))/x248);

	if (t55 != 1356274027010LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = UINT8_MAX;
	static int64_t x251 = 1445012LL;
	static uint16_t x252 = 2U;

	t56 = ((x249-(x250<=x251))/x252);

	if (t56 != 16383) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = INT64_MIN;
	volatile int8_t x254 = 1;
	volatile int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int64_t t57 = 10716500510LL;

	t57 = ((x253-(x254<=x255))/x256);

	if (t57 != 4294967296LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = 3;
	int8_t x260 = INT8_MAX;
	int32_t t58 = -27;

	t58 = ((x257-(x258<=x259))/x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = 32008442LLU;
	int16_t x264 = 1;
	int64_t t59 = 2828779299LL;

	t59 = ((x261-(x262<=x263))/x264);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = 8;
	int64_t x266 = INT64_MIN;
	static volatile int64_t x268 = 1LL;
	volatile int64_t t60 = -2970499LL;

	t60 = ((x265-(x266<=x267))/x268);

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x271 = 119415369371120851LLU;
	int8_t x272 = INT8_MAX;
	volatile int32_t t61 = 222;

	t61 = ((x269-(x270<=x271))/x272);

	if (t61 != -258) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = -84648;
	static volatile uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	uint32_t x276 = UINT32_MAX;
	uint32_t t62 = 1354U;

	t62 = ((x273-(x274<=x275))/x276);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x281 = 1288LL;
	int16_t x282 = INT16_MIN;
	static volatile int64_t t63 = 25275028312LL;

	t63 = ((x281-(x282<=x283))/x284);

	if (t63 != -1288LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 307882381U;
	int8_t x286 = -1;
	static uint32_t x287 = UINT32_MAX;
	uint16_t x288 = UINT16_MAX;

	t64 = ((x285-(x286<=x287))/x288);

	if (t64 != 4697U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = 4U;
	uint8_t x290 = UINT8_MAX;
	uint8_t x291 = 79U;
	static int16_t x292 = -1;
	volatile int32_t t65 = 23;

	t65 = ((x289-(x290<=x291))/x292);

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x294 = UINT32_MAX;
	static uint64_t x295 = 1018026127187219979LLU;
	uint16_t x296 = 1775U;
	volatile uint32_t t66 = 140273595U;

	t66 = ((x293-(x294<=x295))/x296);

	if (t66 != 124U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x297 = -1;
	volatile uint8_t x298 = 1U;
	volatile uint16_t x299 = UINT16_MAX;
	volatile int64_t x300 = -1LL;

	t67 = ((x297-(x298<=x299))/x300);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x301 = INT8_MIN;
	uint32_t x302 = 1137146U;
	int64_t x304 = 4802709LL;
	int64_t t68 = -3196869060LL;

	t68 = ((x301-(x302<=x303))/x304);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = 1240LLU;
	uint64_t x306 = 1614LLU;
	int8_t x307 = INT8_MAX;
	volatile uint64_t t69 = 397208653211997LLU;

	t69 = ((x305-(x306<=x307))/x308);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 88U;
	uint64_t x310 = 272794827LLU;
	volatile int64_t x311 = -1LL;
	volatile uint32_t x312 = 28633168U;

	t70 = ((x309-(x310<=x311))/x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	volatile int32_t x315 = INT32_MIN;
	volatile int64_t x316 = -1LL;
	static int64_t t71 = -7353275521062LL;

	t71 = ((x313-(x314<=x315))/x316);

	if (t71 != 32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x319 = -1LL;
	volatile int32_t t72 = -421556777;

	t72 = ((x317-(x318<=x319))/x320);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 0U;
	volatile uint64_t x322 = 393888658LLU;
	int64_t x323 = INT64_MAX;
	volatile int16_t x324 = -4;
	volatile int32_t t73 = 449;

	t73 = ((x321-(x322<=x323))/x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x326 = -3;
	static int8_t x327 = -1;
	volatile int32_t x328 = INT32_MIN;
	volatile int64_t t74 = -2483124254298240LL;

	t74 = ((x325-(x326<=x327))/x328);

	if (t74 != -4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = 44;
	int8_t x331 = -1;
	int64_t x332 = INT64_MIN;
	volatile uint64_t t75 = 969057LLU;

	t75 = ((x329-(x330<=x331))/x332);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x333 = 92U;
	static volatile uint8_t x334 = UINT8_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t76 = 0;

	t76 = ((x333-(x334<=x335))/x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = -1;

	t77 = ((x337-(x338<=x339))/x340);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile uint32_t t78 = 6U;

	t78 = ((x341-(x342<=x343))/x344);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x345 = 2U;
	static int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	volatile uint32_t x348 = 4724989U;
	uint32_t t79 = 28421U;

	t79 = ((x345-(x346<=x347))/x348);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x349 = 14821829053LLU;
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = 211819U;
	int16_t x352 = 47;
	uint64_t t80 = 6914326LLU;

	t80 = ((x349-(x350<=x351))/x352);

	if (t80 != 315358064LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x353 = -1LL;
	int64_t x355 = -17431LL;
	int16_t x356 = INT16_MAX;
	volatile int64_t t81 = -392052447347430LL;

	t81 = ((x353-(x354<=x355))/x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x358 = 51532LL;
	static uint8_t x360 = 24U;
	int32_t t82 = -71201500;

	t82 = ((x357-(x358<=x359))/x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x366 = -1;
	int64_t x367 = INT64_MAX;
	volatile uint32_t t83 = 21U;

	t83 = ((x365-(x366<=x367))/x368);

	if (t83 != 1073741823U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = INT16_MIN;
	static volatile int16_t x370 = -1;
	volatile int64_t x371 = INT64_MAX;
	int32_t t84 = 3082;

	t84 = ((x369-(x370<=x371))/x372);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -1;
	int64_t x376 = INT64_MIN;

	t85 = ((x373-(x374<=x375))/x376);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	int32_t x384 = -6064;
	int32_t t86 = -5;

	t86 = ((x381-(x382<=x383))/x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = -1;
	uint16_t x386 = 0U;
	static int32_t x387 = INT32_MIN;
	int8_t x388 = 2;
	int32_t t87 = 254107716;

	t87 = ((x385-(x386<=x387))/x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MAX;
	volatile int32_t t88 = 21209;

	t88 = ((x389-(x390<=x391))/x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x394 = INT64_MIN;
	static uint64_t x395 = 10LLU;
	volatile uint8_t x396 = 13U;
	int32_t t89 = -48968078;

	t89 = ((x393-(x394<=x395))/x396);

	if (t89 != 9) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	uint16_t x400 = UINT16_MAX;
	int32_t t90 = -23060;

	t90 = ((x397-(x398<=x399))/x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x402 = -1;
	int16_t x403 = 7;
	static int16_t x404 = 500;
	volatile int32_t t91 = -59;

	t91 = ((x401-(x402<=x403))/x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x406 = -2081879455063102LL;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = 360220U;
	static uint32_t t92 = 189U;

	t92 = ((x405-(x406<=x407))/x408);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x409 = 3750;
	static int8_t x410 = INT8_MIN;
	static int64_t x411 = INT64_MIN;
	int16_t x412 = 22;
	static volatile int32_t t93 = 357;

	t93 = ((x409-(x410<=x411))/x412);

	if (t93 != 170) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x413 = UINT64_MAX;
	uint32_t x414 = 135U;
	uint32_t x415 = 4002U;
	uint64_t x416 = 3133267941946LLU;
	volatile uint64_t t94 = 8LLU;

	t94 = ((x413-(x414<=x415))/x416);

	if (t94 != 5887381LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = 116959;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = -1;
	static volatile int32_t t95 = -1;

	t95 = ((x417-(x418<=x419))/x420);

	if (t95 != -116958) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x422 = 295282831;
	static volatile uint64_t x423 = 3099689LLU;
	int64_t x424 = INT64_MAX;
	static int64_t t96 = -40418700160LL;

	t96 = ((x421-(x422<=x423))/x424);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x425 = 2180415079722793LLU;
	static uint64_t x426 = 4546365166LLU;
	int64_t x427 = -1LL;
	static int64_t x428 = INT64_MAX;
	uint64_t t97 = 15242778476607LLU;

	t97 = ((x425-(x426<=x427))/x428);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = 23397U;
	volatile uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MIN;
	int64_t x432 = -122727820935326LL;
	volatile int64_t t98 = 907564LL;

	t98 = ((x429-(x430<=x431))/x432);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x433 = -1LL;
	uint64_t x434 = UINT64_MAX;
	static uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MIN;
	int64_t t99 = -808929437LL;

	t99 = ((x433-(x434<=x435))/x436);

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

