#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = INT32_MIN;
volatile int32_t t1 = -514426550;
uint8_t x13 = 1U;
volatile int16_t x25 = -340;
volatile uint32_t x36 = UINT32_MAX;
uint8_t x43 = 1U;
volatile int64_t t8 = 3391LL;
int32_t x46 = INT32_MAX;
int32_t x50 = -54;
volatile uint16_t x57 = 0U;
uint64_t x59 = 253804463865LLU;
volatile uint8_t x66 = 3U;
uint32_t x67 = 9611396U;
int8_t x69 = INT8_MAX;
int64_t x71 = INT64_MIN;
uint8_t x72 = 2U;
int64_t x74 = -1LL;
int32_t x84 = INT32_MIN;
volatile uint32_t x85 = UINT32_MAX;
int8_t x110 = 3;
static uint32_t x113 = UINT32_MAX;
int32_t x118 = 482942073;
static int8_t x119 = -1;
static int16_t x137 = INT16_MIN;
int8_t x138 = -57;
volatile int64_t t31 = -795420LL;
int64_t x153 = -1LL;
static int64_t x154 = INT64_MAX;
volatile uint64_t t32 = 7400706LLU;
uint8_t x163 = UINT8_MAX;
static uint16_t x166 = UINT16_MAX;
uint64_t x182 = UINT64_MAX;
int16_t x197 = -11;
int32_t x201 = -1;
int16_t x204 = INT16_MAX;
static uint32_t x205 = 28643U;
int16_t x212 = INT16_MIN;
int32_t x214 = INT32_MIN;
static uint32_t x216 = UINT32_MAX;
volatile int32_t t48 = 5696;
int8_t x249 = -1;
volatile uint64_t t50 = 434341704475LLU;
int8_t x261 = INT8_MIN;
int16_t x272 = -1;
static uint64_t x273 = 639996LLU;
volatile int8_t x280 = INT8_MAX;
int8_t x289 = -15;
int16_t x296 = INT16_MIN;
int8_t x297 = -1;
static int16_t x298 = 3822;
volatile int64_t t62 = -4856904LL;
volatile int32_t x315 = INT32_MIN;
volatile uint64_t t65 = 29LLU;
static uint64_t x329 = 994382716215423220LLU;
static int8_t x336 = INT8_MIN;
static volatile int64_t x344 = INT64_MIN;
volatile int16_t x348 = -1;
int64_t x350 = -1LL;
static uint16_t x352 = UINT16_MAX;
int32_t t74 = 1920281;
static volatile uint8_t x367 = 0U;
volatile int32_t x373 = INT32_MAX;
static volatile uint32_t x378 = UINT32_MAX;
uint32_t x379 = UINT32_MAX;
static int16_t x381 = -1;
uint32_t x384 = 695021U;
int64_t t82 = 60910312105LL;
static volatile int8_t x400 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
volatile int8_t x406 = INT8_MAX;
int16_t x415 = INT16_MIN;
int32_t t86 = 10206;
int8_t x424 = -3;
uint64_t t89 = 180912719000689LLU;
static int8_t x429 = -26;
int16_t x435 = INT16_MIN;
volatile int32_t t92 = -218564327;
volatile uint8_t x441 = 0U;
static int32_t x442 = INT32_MAX;
volatile uint64_t x445 = 110489558211642LLU;
uint32_t x451 = 28U;
volatile int32_t x452 = 6;
volatile int32_t t95 = 13113;
uint64_t x455 = UINT64_MAX;
int8_t x468 = 1;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	volatile int64_t x2 = 639LL;
	int64_t x3 = -1LL;
	int64_t x4 = -1LL;
	static volatile int64_t t0 = 262111235275103LL;

	t0 = ((x1|(x2==x3))+x4);

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MIN;
	int16_t x8 = 28;

	t1 = ((x5|(x6==x7))+x8);

	if (t1 != -2147483619) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = -1;
	uint64_t x15 = 809217LLU;
	int32_t x16 = 15497;
	volatile int32_t t2 = -221891070;

	t2 = ((x13|(x14==x15))+x16);

	if (t2 != 15498) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 456057351252LL;
	int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	static volatile int8_t x24 = 1;
	volatile int64_t t3 = 0LL;

	t3 = ((x21|(x22==x23))+x24);

	if (t3 != 456057351253LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = -1LL;
	volatile int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t4 = -257;

	t4 = ((x25|(x26==x27))+x28);

	if (t4 != -467) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	volatile int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t5 = -458441566;

	t5 = ((x29|(x30==x31))+x32);

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -104465;
	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	volatile uint32_t t6 = 26625U;

	t6 = ((x33|(x34==x35))+x36);

	if (t6 != 4294862830U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = -15;
	int64_t x40 = 485LL;
	static int64_t t7 = -2677LL;

	t7 = ((x37|(x38==x39))+x40);

	if (t7 != 357LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -519256LL;
	int16_t x42 = -1;
	int32_t x44 = INT32_MIN;

	t8 = ((x41|(x42==x43))+x44);

	if (t8 != -2148002904LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1203LL;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = 4;
	int64_t t9 = -82297LL;

	t9 = ((x45|(x46==x47))+x48);

	if (t9 != -1199LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = -1020;
	int32_t x51 = INT32_MIN;
	volatile uint32_t x52 = 2301U;
	volatile uint32_t t10 = 223U;

	t10 = ((x49|(x50==x51))+x52);

	if (t10 != 1281U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x58 = 1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t11 = 14680379;

	t11 = ((x57|(x58==x59))+x60);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	uint32_t x64 = 27322U;
	volatile uint32_t t12 = 10288527U;

	t12 = ((x61|(x62==x63))+x64);

	if (t12 != 27321U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 0U;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t13 = INT32_MIN;

	t13 = ((x65|(x66==x67))+x68);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x70 = 894405373;
	int32_t t14 = 347;

	t14 = ((x69|(x70==x71))+x72);

	if (t14 != 129) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 690133U;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t15 = 48341U;

	t15 = ((x73|(x74==x75))+x76);

	if (t15 != 657365U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x81 = 7U;
	uint32_t x82 = 7U;
	uint16_t x83 = UINT16_MAX;
	int32_t t16 = 0;

	t16 = ((x81|(x82==x83))+x84);

	if (t16 != -2147483641) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x86 = INT32_MAX;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = -1LL;
	int64_t t17 = -72535739244LL;

	t17 = ((x85|(x86==x87))+x88);

	if (t17 != 4294967294LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 61LL;
	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = -1;
	static uint16_t x96 = 1U;
	static volatile int64_t t18 = -409898596768248326LL;

	t18 = ((x93|(x94==x95))+x96);

	if (t18 != 62LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = INT64_MIN;
	volatile int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 1058U;
	static volatile int64_t t19 = 77LL;

	t19 = ((x97|(x98==x99))+x100);

	if (t19 != -9223372036854774750LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = 1;
	uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 1U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t20 = 7571;

	t20 = ((x105|(x106==x107))+x108);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x109 = INT64_MAX;
	int16_t x111 = -2378;
	int32_t x112 = INT32_MIN;
	static int64_t t21 = -1648491983LL;

	t21 = ((x109|(x110==x111))+x112);

	if (t21 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x114 = 10417853LLU;
	int16_t x115 = -81;
	uint64_t x116 = 7306925LLU;
	volatile uint64_t t22 = 32063236059537019LLU;

	t22 = ((x113|(x114==x115))+x116);

	if (t22 != 4302274220LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 15;
	int32_t x120 = -35723131;
	static volatile int32_t t23 = 62;

	t23 = ((x117|(x118==x119))+x120);

	if (t23 != -35723116) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 120LLU;
	int16_t x122 = 978;
	volatile int64_t x123 = 871378597LL;
	int64_t x124 = INT64_MIN;
	uint64_t t24 = 378LLU;

	t24 = ((x121|(x122==x123))+x124);

	if (t24 != 9223372036854775928LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MAX;
	int64_t x127 = 18402022LL;
	static volatile uint8_t x128 = 55U;
	volatile int32_t t25 = 17;

	t25 = ((x125|(x126==x127))+x128);

	if (t25 != -2147483593) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	static uint16_t x131 = 3U;
	volatile uint8_t x132 = 77U;
	volatile int32_t t26 = 43;

	t26 = ((x129|(x130==x131))+x132);

	if (t26 != 76) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 108U;
	int8_t x134 = INT8_MIN;
	volatile int16_t x135 = INT16_MAX;
	int32_t x136 = 415;
	volatile int32_t t27 = 1015342393;

	t27 = ((x133|(x134==x135))+x136);

	if (t27 != 523) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x139 = -4LL;
	int32_t x140 = -66202;
	static volatile int32_t t28 = 3563943;

	t28 = ((x137|(x138==x139))+x140);

	if (t28 != -98970) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = 13396;
	int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t29 = 1;

	t29 = ((x141|(x142==x143))+x144);

	if (t29 != 46163) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = INT16_MIN;
	static int8_t x146 = -1;
	int32_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t30 = 177491503;

	t30 = ((x145|(x146==x147))+x148);

	if (t30 != -32512) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = INT16_MAX;
	volatile int64_t x150 = -1LL;
	static int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;

	t31 = ((x149|(x150==x151))+x152);

	if (t31 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x155 = 240425LLU;
	volatile uint64_t x156 = UINT64_MAX;

	t32 = ((x153|(x154==x155))+x156);

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 24931247279741670LLU;
	static uint16_t x162 = 55U;
	volatile int8_t x164 = 1;
	volatile uint64_t t33 = 21095LLU;

	t33 = ((x161|(x162==x163))+x164);

	if (t33 != 24931247279741671LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MAX;
	uint16_t x167 = 1U;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t34 = 8590LL;

	t34 = ((x165|(x166==x167))+x168);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 2664277660367612LLU;
	int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = 2110;
	volatile uint64_t t35 = 1098795313LLU;

	t35 = ((x173|(x174==x175))+x176);

	if (t35 != 2664277660369722LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = INT32_MAX;
	volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 10U;
	volatile int32_t t36 = 367;

	t36 = ((x177|(x178==x179))+x180);

	if (t36 != 265) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x181 = -1;
	int64_t x183 = INT64_MIN;
	int8_t x184 = -7;
	int32_t t37 = -2;

	t37 = ((x181|(x182==x183))+x184);

	if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = 0;
	int32_t x191 = INT32_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t38 = -413139936017738LL;

	t38 = ((x189|(x190==x191))+x192);

	if (t38 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = INT16_MIN;
	volatile int16_t x194 = INT16_MAX;
	volatile uint16_t x195 = UINT16_MAX;
	volatile uint32_t x196 = 24U;
	volatile uint32_t t39 = 1276192264U;

	t39 = ((x193|(x194==x195))+x196);

	if (t39 != 4294934552U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = -110118;
	int32_t t40 = -1105;

	t40 = ((x197|(x198==x199))+x200);

	if (t40 != -110129) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = INT16_MIN;
	static int32_t x203 = INT32_MIN;
	volatile int32_t t41 = -29;

	t41 = ((x201|(x202==x203))+x204);

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	static volatile int32_t x208 = 1265584;
	volatile uint32_t t42 = 27338U;

	t42 = ((x205|(x206==x207))+x208);

	if (t42 != 1294227U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MAX;
	uint8_t x210 = 0U;
	static int32_t x211 = -44512306;
	volatile int32_t t43 = 224166;

	t43 = ((x209|(x210==x211))+x212);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x215 = 53U;
	uint32_t t44 = 6095909U;

	t44 = ((x213|(x214==x215))+x216);

	if (t44 != 4294934527U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x217 = UINT32_MAX;
	int64_t x218 = -1LL;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = 24;
	uint32_t t45 = 9062U;

	t45 = ((x217|(x218==x219))+x220);

	if (t45 != 23U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x225 = 5694U;
	uint8_t x226 = 51U;
	uint32_t x227 = 4U;
	uint32_t x228 = 5U;
	static uint32_t t46 = 2212U;

	t46 = ((x225|(x226==x227))+x228);

	if (t46 != 5699U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = -4532;
	volatile uint64_t x238 = 5234864396553442423LLU;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 22U;
	volatile int32_t t47 = 2415762;

	t47 = ((x237|(x238==x239))+x240);

	if (t47 != -4510) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = 23;
	int16_t x242 = -1;
	int16_t x243 = -5;
	uint8_t x244 = UINT8_MAX;

	t48 = ((x241|(x242==x243))+x244);

	if (t48 != 278) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = 53611U;
	int8_t x246 = -46;
	int64_t x247 = INT64_MAX;
	uint8_t x248 = 123U;
	volatile uint32_t t49 = 1151027053U;

	t49 = ((x245|(x246==x247))+x248);

	if (t49 != 53734U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x250 = 90U;
	int16_t x251 = 3;
	uint64_t x252 = 1576799807LLU;

	t50 = ((x249|(x250==x251))+x252);

	if (t50 != 1576799806LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x253 = INT64_MAX;
	int16_t x254 = 0;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;
	int64_t t51 = -1969760509090295383LL;

	t51 = ((x253|(x254==x255))+x256);

	if (t51 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x257 = -35587428LL;
	volatile int32_t x258 = INT32_MAX;
	uint64_t x259 = 943LLU;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t52 = 32542735512LLU;

	t52 = ((x257|(x258==x259))+x260);

	if (t52 != 18446744073673964187LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MAX;
	uint64_t x264 = 657443LLU;
	volatile uint64_t t53 = 7597101LLU;

	t53 = ((x261|(x262==x263))+x264);

	if (t53 != 657315LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MIN;
	uint64_t x268 = 838782127453LLU;
	uint64_t t54 = 7LLU;

	t54 = ((x265|(x266==x267))+x268);

	if (t54 != 838782094686LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = 11538LL;
	uint32_t x270 = UINT32_MAX;
	static int16_t x271 = -1975;
	volatile int64_t t55 = -2LL;

	t55 = ((x269|(x270==x271))+x272);

	if (t55 != 11537LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x274 = 95U;
	int32_t x275 = INT32_MIN;
	static int32_t x276 = -1;
	static uint64_t t56 = 5373843396000767548LLU;

	t56 = ((x273|(x274==x275))+x276);

	if (t56 != 639995LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x277 = 837879LLU;
	int32_t x278 = INT32_MAX;
	static uint32_t x279 = UINT32_MAX;
	uint64_t t57 = 28512142087354513LLU;

	t57 = ((x277|(x278==x279))+x280);

	if (t57 != 838006LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = -3253797073518866LL;
	volatile int8_t x282 = -1;
	int32_t x283 = -78572;
	int8_t x284 = INT8_MAX;
	int64_t t58 = -10355LL;

	t58 = ((x281|(x282==x283))+x284);

	if (t58 != -3253797073518739LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x290 = 0;
	volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = 247965048378725LLU;
	uint64_t t59 = 1973023LLU;

	t59 = ((x289|(x290==x291))+x292);

	if (t59 != 247965048378710LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = 1636757U;
	static int32_t x294 = INT32_MIN;
	static int8_t x295 = 7;
	volatile uint32_t t60 = 17284U;

	t60 = ((x293|(x294==x295))+x296);

	if (t60 != 1603989U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t61 = -3764;

	t61 = ((x297|(x298==x299))+x300);

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = 0;
	static int8_t x302 = -11;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -1LL;

	t62 = ((x301|(x302==x303))+x304);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x305 = 33U;
	volatile uint64_t x306 = 122922459LLU;
	volatile uint8_t x307 = 2U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t63 = 567;

	t63 = ((x305|(x306==x307))+x308);

	if (t63 != 65568) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x309 = -13734;
	uint64_t x310 = 26997164LLU;
	static uint32_t x311 = 1U;
	int32_t x312 = -1993523;
	int32_t t64 = -93494;

	t64 = ((x309|(x310==x311))+x312);

	if (t64 != -2007257) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 242261364908LLU;
	static uint32_t x314 = 862297301U;
	uint8_t x316 = 126U;

	t65 = ((x313|(x314==x315))+x316);

	if (t65 != 242261365034LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x317 = UINT8_MAX;
	volatile uint64_t x318 = 47261802LLU;
	volatile int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int32_t t66 = 154037746;

	t66 = ((x317|(x318==x319))+x320);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MAX;
	static uint32_t x322 = 6657892U;
	int32_t x323 = INT32_MAX;
	int8_t x324 = -1;
	volatile int32_t t67 = -212456;

	t67 = ((x321|(x322==x323))+x324);

	if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x330 = 29822621967404LLU;
	static int16_t x331 = 2;
	static volatile int64_t x332 = INT64_MAX;
	uint64_t t68 = 31LLU;

	t68 = ((x329|(x330==x331))+x332);

	if (t68 != 10217754753070199027LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = 848909;
	int64_t x335 = INT64_MAX;
	static volatile int32_t t69 = 108910;

	t69 = ((x333|(x334==x335))+x336);

	if (t69 != -256) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x341 = INT8_MAX;
	int64_t x342 = 21LL;
	int16_t x343 = INT16_MAX;
	volatile int64_t t70 = -512181362LL;

	t70 = ((x341|(x342==x343))+x344);

	if (t70 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = -9421;
	int64_t x347 = INT64_MIN;
	int32_t t71 = -12055523;

	t71 = ((x345|(x346==x347))+x348);

	if (t71 != -129) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x349 = UINT8_MAX;
	static int32_t x351 = INT32_MAX;
	static int32_t t72 = -8786;

	t72 = ((x349|(x350==x351))+x352);

	if (t72 != 65790) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x357 = 167401U;
	int8_t x358 = INT8_MIN;
	static int32_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t73 = 6U;

	t73 = ((x357|(x358==x359))+x360);

	if (t73 != 167400U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x361 = 930U;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = -1;
	int16_t x364 = INT16_MIN;

	t74 = ((x361|(x362==x363))+x364);

	if (t74 != -31837) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = INT8_MAX;
	uint16_t x366 = 17240U;
	static volatile uint16_t x368 = UINT16_MAX;
	int32_t t75 = 896;

	t75 = ((x365|(x366==x367))+x368);

	if (t75 != 65662) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x369 = -6140387358LL;
	volatile uint64_t x370 = 15212450LLU;
	uint32_t x371 = 3U;
	int16_t x372 = -1;
	int64_t t76 = 9421555LL;

	t76 = ((x369|(x370==x371))+x372);

	if (t76 != -6140387359LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x374 = -429;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t77 = 10241;

	t77 = ((x373|(x374==x375))+x376);

	if (t77 != 2147483519) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x380 = -6717;
	volatile int32_t t78 = 202339;

	t78 = ((x377|(x378==x379))+x380);

	if (t78 != -6462) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x382 = INT32_MAX;
	static int8_t x383 = 47;
	volatile uint32_t t79 = 387993421U;

	t79 = ((x381|(x382==x383))+x384);

	if (t79 != 695020U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x385 = 28U;
	int16_t x386 = -96;
	int64_t x387 = INT64_MIN;
	int8_t x388 = -1;
	static uint32_t t80 = 227231U;

	t80 = ((x385|(x386==x387))+x388);

	if (t80 != 27U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = 3U;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 26U;
	int32_t x392 = INT32_MAX;
	uint32_t t81 = 12839733U;

	t81 = ((x389|(x390==x391))+x392);

	if (t81 != 2147483650U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = -16640494286108111LL;
	int8_t x394 = -1;
	uint64_t x395 = 20297183624624108LLU;
	int16_t x396 = INT16_MIN;

	t82 = ((x393|(x394==x395))+x396);

	if (t82 != -16640494286140879LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	uint32_t x399 = 113743U;
	static uint32_t t83 = 16133U;

	t83 = ((x397|(x398==x399))+x400);

	if (t83 != 4294967167U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x401 = 4138348825726622115LLU;
	int32_t x402 = INT32_MAX;
	int16_t x404 = -1;
	volatile uint64_t t84 = 7990691LLU;

	t84 = ((x401|(x402==x403))+x404);

	if (t84 != 4138348825726622114LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = INT32_MIN;
	int32_t x407 = INT32_MAX;
	int64_t x408 = -170224184280877752LL;
	static volatile int64_t t85 = 269742396546LL;

	t85 = ((x405|(x406==x407))+x408);

	if (t85 != -170224186428361400LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x413 = 2U;
	uint16_t x414 = 6005U;
	int32_t x416 = INT32_MIN;

	t86 = ((x413|(x414==x415))+x416);

	if (t86 != -2147483646) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = 1099005643LL;
	volatile int64_t x418 = -1LL;
	int32_t x419 = 29;
	int8_t x420 = 9;
	int64_t t87 = 155979655892670LL;

	t87 = ((x417|(x418==x419))+x420);

	if (t87 != 1099005652LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MIN;
	int64_t x423 = 2039080LL;
	static volatile int32_t t88 = 336435;

	t88 = ((x421|(x422==x423))+x424);

	if (t88 != -131) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = 2885759832502888LLU;
	int64_t x426 = INT64_MAX;
	volatile uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 31U;

	t89 = ((x425|(x426==x427))+x428);

	if (t89 != 2885759832502919LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x430 = -67283194;
	volatile int16_t x431 = -3;
	int64_t x432 = INT64_MAX;
	int64_t t90 = 24LL;

	t90 = ((x429|(x430==x431))+x432);

	if (t90 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x433 = 1331;
	static int16_t x434 = INT16_MIN;
	static int16_t x436 = 17;
	int32_t t91 = -488956337;

	t91 = ((x433|(x434==x435))+x436);

	if (t91 != 1348) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x437 = 1U;
	int64_t x438 = INT64_MAX;
	int16_t x439 = INT16_MIN;
	int32_t x440 = -1;

	t92 = ((x437|(x438==x439))+x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x443 = -1;
	int32_t x444 = INT32_MAX;
	static int32_t t93 = INT32_MAX;

	t93 = ((x441|(x442==x443))+x444);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x446 = 91U;
	int32_t x447 = INT32_MIN;
	static volatile int32_t x448 = INT32_MAX;
	uint64_t t94 = 317LLU;

	t94 = ((x445|(x446==x447))+x448);

	if (t94 != 110491705695289LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x449 = INT16_MIN;
	static volatile int32_t x450 = INT32_MIN;

	t95 = ((x449|(x450==x451))+x452);

	if (t95 != -32762) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MAX;
	uint32_t x454 = 600884U;
	static uint64_t x456 = 7LLU;
	volatile uint64_t t96 = 6195146LLU;

	t96 = ((x453|(x454==x455))+x456);

	if (t96 != 134LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x457 = INT8_MIN;
	volatile uint16_t x458 = UINT16_MAX;
	static volatile uint64_t x459 = 51823LLU;
	int64_t x460 = INT64_MAX;
	volatile int64_t t97 = 1509828125270635LL;

	t97 = ((x457|(x458==x459))+x460);

	if (t97 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x461 = 57679511LLU;
	uint32_t x462 = UINT32_MAX;
	volatile int16_t x463 = -1;
	int16_t x464 = 0;
	volatile uint64_t t98 = 4083761084LLU;

	t98 = ((x461|(x462==x463))+x464);

	if (t98 != 57679511LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = -1;
	int16_t x466 = -1;
	int32_t x467 = INT32_MAX;
	volatile int32_t t99 = -23695253;

	t99 = ((x465|(x466==x467))+x468);

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

