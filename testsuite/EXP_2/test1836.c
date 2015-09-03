#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -1;
uint64_t t0 = 1029139LLU;
volatile uint32_t t3 = 7U;
int8_t x25 = INT8_MAX;
int64_t x28 = -106337LL;
volatile uint64_t x31 = UINT64_MAX;
volatile int8_t x33 = 0;
uint64_t t10 = 1956319592LLU;
volatile uint64_t t13 = 1436696330LLU;
static int16_t x73 = -3;
volatile int64_t t14 = 153470734LL;
static int8_t x78 = 1;
uint64_t x79 = 1838396078739LLU;
uint8_t x82 = 26U;
static int32_t x100 = 12189;
volatile int64_t t20 = 15501881875LL;
int64_t x106 = INT64_MAX;
int8_t x107 = -52;
uint8_t x108 = 28U;
volatile int8_t x109 = -15;
int64_t x111 = -313647066780919006LL;
static volatile int64_t x115 = INT64_MAX;
int8_t x122 = INT8_MAX;
int16_t x123 = -1;
uint32_t t26 = 3U;
uint8_t x129 = 7U;
int16_t x132 = 360;
static uint32_t t27 = 29814U;
static int32_t t28 = 592;
uint16_t x142 = 12U;
int8_t x147 = INT8_MAX;
uint32_t x150 = 1401U;
static uint64_t x159 = 127844LLU;
uint16_t x161 = UINT16_MAX;
int32_t x171 = INT32_MIN;
int16_t x173 = INT16_MIN;
int64_t x175 = INT64_MAX;
volatile int64_t t38 = 291LL;
int32_t x181 = -1;
int32_t x183 = INT32_MAX;
static int8_t x190 = INT8_MIN;
int16_t x192 = INT16_MIN;
uint16_t x196 = UINT16_MAX;
static volatile int64_t t42 = -123484206LL;
volatile int64_t t43 = -236713LL;
int16_t x209 = -17;
uint16_t x212 = 16093U;
static int32_t t45 = -468470022;
static volatile int64_t x214 = INT64_MIN;
int64_t x215 = INT64_MIN;
volatile int64_t t46 = -7LL;
int8_t x220 = -20;
int64_t x225 = 60040431418LL;
uint16_t x226 = 361U;
static int8_t x233 = -1;
int64_t x234 = INT64_MIN;
int64_t t50 = -30LL;
static volatile uint64_t t51 = 654063100186516026LLU;
static uint64_t x247 = UINT64_MAX;
static volatile int16_t x266 = INT16_MIN;
volatile uint8_t x267 = UINT8_MAX;
uint64_t x275 = 920170283279LLU;
volatile uint64_t t57 = 662285831497445LLU;
static int8_t x285 = INT8_MIN;
uint8_t x294 = 62U;
int8_t x306 = INT8_MIN;
int64_t x307 = INT64_MAX;
int32_t x308 = INT32_MIN;
int32_t t65 = -4;
volatile int8_t x320 = -1;
volatile int8_t x326 = INT8_MIN;
static int32_t t68 = -12597554;
static int32_t x334 = INT32_MIN;
static int32_t x336 = -2343;
int32_t x350 = INT32_MIN;
int8_t x356 = -20;
volatile int32_t t73 = -6;
uint64_t x358 = 2LLU;
static volatile int32_t x359 = INT32_MIN;
uint8_t x366 = UINT8_MAX;
static int16_t x367 = 42;
uint64_t x372 = 155425LLU;
int64_t x381 = -1LL;
static int64_t x382 = INT64_MIN;
volatile int16_t x385 = -1;
uint64_t x386 = 51LLU;
volatile uint8_t x389 = UINT8_MAX;
static volatile uint32_t t81 = 6736872U;
int8_t x394 = -1;
uint64_t t82 = 150373273294LLU;
int8_t x406 = -1;
int16_t x413 = -28;
uint32_t x416 = UINT32_MAX;
volatile uint8_t x418 = UINT8_MAX;
uint16_t x435 = 50U;
int32_t x446 = 124739;
volatile int8_t x447 = INT8_MIN;
uint8_t x448 = UINT8_MAX;
volatile int32_t t91 = -100584;
volatile uint64_t t92 = 5119410350842145804LLU;
static int64_t x465 = -1LL;
uint64_t x473 = 1788664017561263LLU;
uint16_t x474 = 26195U;
static int8_t x478 = -1;


void f0(void) {
	static int64_t x5 = INT64_MIN;
	static uint64_t x6 = 3766530399198985109LLU;
	int16_t x7 = INT16_MAX;

	t0 = ((x5|(x6&x7))*x8);

	if (t0 != 9223372036854760555LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 122080006218803LL;
	uint16_t x10 = 17490U;
	uint32_t x11 = 61U;
	int16_t x12 = -29;
	static int64_t t1 = 899979506983706LL;

	t1 = ((x9|(x10&x11))*x12);

	if (t1 != -3540320180345287LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = UINT16_MAX;
	static uint32_t x14 = 90U;
	int32_t x15 = INT32_MIN;
	volatile int16_t x16 = INT16_MIN;
	static volatile uint32_t t2 = 62U;

	t2 = ((x13|(x14&x15))*x16);

	if (t2 != 2147516416U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -19;
	int16_t x18 = INT16_MIN;
	uint32_t x19 = 3U;
	volatile int8_t x20 = INT8_MAX;

	t3 = ((x17|(x18&x19))*x20);

	if (t3 != 4294964883U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 1U;
	int8_t x22 = 11;
	int64_t x23 = 8102LL;
	int32_t x24 = -1;
	volatile int64_t t4 = -32448LL;

	t4 = ((x21|(x22&x23))*x24);

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 1LL;
	int16_t x27 = INT16_MIN;
	int64_t t5 = -173142866LL;

	t5 = ((x25|(x26&x27))*x28);

	if (t5 != -13504799LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int64_t x30 = 1319736087010739252LL;
	int32_t x32 = -1;
	uint64_t t6 = 15805377LLU;

	t6 = ((x29|(x30&x31))*x32);

	if (t6 != 17127007986698747905LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 48U;
	static int64_t x35 = 1399549083518674828LL;
	int64_t x36 = -864843008425897LL;
	int64_t t7 = 1992591794356697065LL;

	t7 = ((x33|(x34&x35))*x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	volatile int64_t x38 = INT64_MIN;
	static uint16_t x39 = 0U;
	int8_t x40 = 35;
	volatile int64_t t8 = 123192428092LL;

	t8 = ((x37|(x38&x39))*x40);

	if (t8 != 1146845LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	volatile uint8_t x43 = 1U;
	int16_t x44 = INT16_MIN;
	static int64_t t9 = 4525534881876444305LL;

	t9 = ((x41|(x42&x43))*x44);

	if (t9 != 32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = 59;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;

	t10 = ((x53|(x54&x55))*x56);

	if (t10 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	static volatile uint8_t x60 = 93U;
	uint64_t t11 = 6909524620832LLU;

	t11 = ((x57|(x58&x59))*x60);

	if (t11 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 15845338LLU;
	int16_t x66 = -1;
	int64_t x67 = -1LL;
	int32_t x68 = 116942565;
	static uint64_t t12 = 905194717952430LLU;

	t12 = ((x65|(x66&x67))*x68);

	if (t12 != 18446744073592609051LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 609517LL;
	int64_t x70 = -2630631540330812038LL;
	uint16_t x71 = 27688U;
	uint64_t x72 = 37LLU;

	t13 = ((x69|(x70&x71))*x72);

	if (t13 != 22855233LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = 30;
	volatile int64_t x75 = INT64_MIN;
	uint16_t x76 = 1664U;

	t14 = ((x73|(x74&x75))*x76);

	if (t14 != -4992LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -9;
	int64_t x80 = 1LL;
	volatile uint64_t t15 = 15234424576263214LLU;

	t15 = ((x77|(x78&x79))*x80);

	if (t15 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x81 = 0U;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t16 = 489442746281395LLU;

	t16 = ((x81|(x82&x83))*x84);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 0;
	volatile int8_t x86 = -30;
	static int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	volatile int32_t t17 = 1;

	t17 = ((x85|(x86&x87))*x88);

	if (t17 != 4194304) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = -1;
	static int8_t x90 = -1;
	int32_t x91 = -1;
	volatile int32_t x92 = 2725779;
	static volatile int32_t t18 = 6874;

	t18 = ((x89|(x90&x91))*x92);

	if (t18 != -2725779) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 1557222LLU;
	int16_t x94 = INT16_MAX;
	int8_t x95 = -21;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t19 = 20971651613573LLU;

	t19 = ((x93|(x94&x95))*x96);

	if (t19 != 18446744073508227200LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;

	t20 = ((x97|(x98&x99))*x100);

	if (t20 != -12189LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -61;
	uint8_t x102 = 19U;
	int16_t x103 = -1;
	volatile int8_t x104 = -20;
	static int32_t t21 = -25072847;

	t21 = ((x101|(x102&x103))*x104);

	if (t21 != 900) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = INT16_MIN;
	static volatile int64_t t22 = 8848334292926LL;

	t22 = ((x105|(x106&x107))*x108);

	if (t22 != -1456LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -35;
	int16_t x112 = -73;
	volatile int64_t t23 = -54LL;

	t23 = ((x109|(x110&x111))*x112);

	if (t23 != 1095LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x116 = 7718;
	int64_t t24 = -25435LL;

	t24 = ((x113|(x114&x115))*x116);

	if (t24 != -987904LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = 241U;
	int8_t x124 = INT8_MAX;
	volatile uint32_t t25 = 850816323U;

	t25 = ((x121|(x122&x123))*x124);

	if (t25 != 32385U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 1640089386U;
	uint32_t x128 = 173363U;

	t26 = ((x125|(x126&x127))*x128);

	if (t26 != 1772535646U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x130 = 4186U;
	static uint16_t x131 = 250U;

	t27 = ((x129|(x130&x131))*x132);

	if (t27 != 34200U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -1;
	static uint16_t x134 = 133U;
	static volatile int16_t x135 = INT16_MAX;
	volatile uint8_t x136 = 7U;

	t28 = ((x133|(x134&x135))*x136);

	if (t28 != -7) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = 9;
	static uint8_t x138 = 48U;
	uint16_t x139 = 194U;
	int64_t x140 = 256769603LL;
	int64_t t29 = -19205416LL;

	t29 = ((x137|(x138&x139))*x140);

	if (t29 != 2310926427LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	volatile int64_t x143 = -137371958LL;
	volatile int8_t x144 = INT8_MIN;
	volatile int64_t t30 = -16807290619479LL;

	t30 = ((x141|(x142&x143))*x144);

	if (t30 != 15360LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = 16;
	int8_t x146 = 3;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t31 = 379291;

	t31 = ((x145|(x146&x147))*x148);

	if (t31 != 4845) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x149 = -92467LL;
	static uint32_t x151 = 100228U;
	int8_t x152 = -1;
	static int64_t t32 = 1418319241052212987LL;

	t32 = ((x149|(x150&x151))*x152);

	if (t32 != 92211LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t33 = 71;

	t33 = ((x153|(x154&x155))*x156);

	if (t33 != 16711425) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int8_t x158 = -3;
	uint64_t x160 = 1009231799740577381LLU;
	volatile uint64_t t34 = 58641981785502364LLU;

	t34 = ((x157|(x158&x159))*x160);

	if (t34 != 17437512273968974235LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x162 = 434U;
	int32_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t35 = 2018797978895LLU;

	t35 = ((x161|(x162&x163))*x164);

	if (t35 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	int32_t x166 = -1;
	static volatile int32_t x167 = -6;
	int64_t x168 = -4LL;
	int64_t t36 = -28LL;

	t36 = ((x165|(x166&x167))*x168);

	if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	uint32_t x170 = 101668032U;
	int16_t x172 = INT16_MIN;
	volatile uint32_t t37 = 0U;

	t37 = ((x169|(x170&x171))*x172);

	if (t37 != 3221258240U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x174 = 0U;
	uint16_t x176 = 3297U;

	t38 = ((x173|(x174&x175))*x176);

	if (t38 != -108036096LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x177 = 304245816178321LLU;
	uint8_t x178 = 37U;
	int8_t x179 = -1;
	int64_t x180 = -1LL;
	uint64_t t39 = 13375477900711LLU;

	t39 = ((x177|(x178&x179))*x180);

	if (t39 != 18446439827893373259LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = INT64_MIN;
	int64_t x184 = -1LL;
	volatile int64_t t40 = -4930LL;

	t40 = ((x181|(x182&x183))*x184);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 529;
	int16_t x191 = INT16_MIN;
	int32_t t41 = 118;

	t41 = ((x189|(x190&x191))*x192);

	if (t41 != 1056407552) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	int64_t x194 = -1LL;
	int64_t x195 = -966885952LL;

	t42 = ((x193|(x194&x195))*x196);

	if (t42 != -63364866735615LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = 10323LL;
	int8_t x202 = 21;
	static int16_t x203 = INT16_MIN;
	uint8_t x204 = UINT8_MAX;

	t43 = ((x201|(x202&x203))*x204);

	if (t43 != 2632365LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int32_t x206 = 489458;
	int32_t x207 = INT32_MAX;
	volatile int8_t x208 = INT8_MIN;
	volatile uint32_t t44 = 11U;

	t44 = ((x205|(x206&x207))*x208);

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x210 = -1;
	int16_t x211 = -32;

	t45 = ((x209|(x210&x211))*x212);

	if (t45 != -273581) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MIN;
	int64_t x216 = -30573632465351LL;

	t46 = ((x213|(x214&x215))*x216);

	if (t46 != 3913424955564928LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = -1;
	static int64_t x219 = INT64_MIN;
	int64_t t47 = 221345LL;

	t47 = ((x217|(x218&x219))*x220);

	if (t47 != 42949672960LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x227 = INT16_MAX;
	volatile int32_t x228 = -1;
	int64_t t48 = 1083311490005698058LL;

	t48 = ((x225|(x226&x227))*x228);

	if (t48 != -60040431483LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 3U;
	int8_t x230 = 6;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = -1LL;
	static int64_t t49 = -489462981661LL;

	t49 = ((x229|(x230&x231))*x232);

	if (t49 != -7LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x235 = 3U;
	static int16_t x236 = -1;

	t50 = ((x233|(x234&x235))*x236);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = -113;

	t51 = ((x237|(x238&x239))*x240);

	if (t51 != 113LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = 9022330;
	uint16_t x246 = UINT16_MAX;
	int16_t x248 = 3293;
	volatile uint64_t t52 = 21892LLU;

	t52 = ((x245|(x246&x247))*x248);

	if (t52 != 29781783331LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x257 = -3;
	uint64_t x258 = 260391LLU;
	int32_t x259 = INT32_MIN;
	static volatile uint16_t x260 = UINT16_MAX;
	volatile uint64_t t53 = 13LLU;

	t53 = ((x257|(x258&x259))*x260);

	if (t53 != 18446744073709355011LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = 10;
	uint32_t x268 = 158U;
	volatile uint32_t t54 = 308507U;

	t54 = ((x265|(x266&x267))*x268);

	if (t54 != 1580U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	static int16_t x272 = -1;
	int32_t t55 = 2;

	t55 = ((x269|(x270&x271))*x272);

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = -1LL;
	uint8_t x274 = UINT8_MAX;
	uint32_t x276 = 78335U;
	uint64_t t56 = 1LLU;

	t56 = ((x273|(x274&x275))*x276);

	if (t56 != 18446744073709473281LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = INT8_MAX;
	static int32_t x278 = INT32_MAX;
	uint32_t x279 = 179312182U;
	uint64_t x280 = 2431235LLU;

	t57 = ((x277|(x278&x279))*x280);

	if (t57 != 435950230284925LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = 12U;
	volatile uint64_t x283 = 22855LLU;
	static int64_t x284 = INT64_MIN;
	volatile uint64_t t58 = 176307670857041045LLU;

	t58 = ((x281|(x282&x283))*x284);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x286 = INT8_MAX;
	static uint64_t x287 = 1530274LLU;
	int32_t x288 = 6;
	volatile uint64_t t59 = 879689587LLU;

	t59 = ((x285|(x286&x287))*x288);

	if (t59 != 18446744073709551052LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = 254383082LL;
	volatile uint64_t x295 = 721504403064838922LLU;
	uint64_t x296 = 48814830868019126LLU;
	uint64_t t60 = 3513729109LLU;

	t60 = ((x293|(x294&x295))*x296);

	if (t60 != 1542624897612344924LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 3U;
	int64_t x300 = INT64_MAX;
	volatile uint64_t t61 = 110340585154342636LLU;

	t61 = ((x297|(x298&x299))*x300);

	if (t61 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x301 = 45U;
	int32_t x302 = INT32_MIN;
	volatile int8_t x303 = 1;
	int16_t x304 = 1;
	static volatile int32_t t62 = 24;

	t62 = ((x301|(x302&x303))*x304);

	if (t62 != 45) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = INT16_MIN;
	int64_t t63 = -133280347668732137LL;

	t63 = ((x305|(x306&x307))*x308);

	if (t63 != 274877906944LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x309 = UINT32_MAX;
	static volatile int8_t x310 = 32;
	uint64_t x311 = 6894LLU;
	int8_t x312 = INT8_MAX;
	uint64_t t64 = 2108928300922449LLU;

	t64 = ((x309|(x310&x311))*x312);

	if (t64 != 545460846465LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = -13;
	static int8_t x314 = INT8_MIN;
	static uint8_t x315 = UINT8_MAX;
	static int16_t x316 = -1;

	t65 = ((x313|(x314&x315))*x316);

	if (t65 != 13) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = 14019032LLU;
	int16_t x318 = INT16_MAX;
	static int8_t x319 = -1;
	static uint64_t t66 = 76554499455950LLU;

	t66 = ((x317|(x318&x319))*x320);

	if (t66 != 18446744073695526913LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = -1;
	uint64_t x322 = 2026045261LLU;
	static uint8_t x323 = 74U;
	volatile uint32_t x324 = 286U;
	static uint64_t t67 = 1680942879337012174LLU;

	t67 = ((x321|(x322&x323))*x324);

	if (t67 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile int32_t x327 = -1;
	static int16_t x328 = INT16_MIN;

	t68 = ((x325|(x326&x327))*x328);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x333 = 111U;
	volatile uint32_t x335 = 24300U;
	volatile uint32_t t69 = 26597U;

	t69 = ((x333|(x334&x335))*x336);

	if (t69 != 4294707223U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	static uint32_t x339 = 763U;
	volatile int64_t x340 = -1LL;
	volatile int64_t t70 = 87LL;

	t70 = ((x337|(x338&x339))*x340);

	if (t70 != -4294967168LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = 66975650;
	static volatile int8_t x346 = INT8_MIN;
	static volatile int64_t x347 = INT64_MAX;
	static int16_t x348 = -1;
	int64_t t71 = -26091679531576528LL;

	t71 = ((x345|(x346&x347))*x348);

	if (t71 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -1;
	volatile int32_t x351 = 7;
	volatile int16_t x352 = 42;
	int32_t t72 = 3;

	t72 = ((x349|(x350&x351))*x352);

	if (t72 != -42) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = 4;
	int32_t x354 = -23904225;
	int16_t x355 = 392;

	t73 = ((x353|(x354&x355))*x356);

	if (t73 != -240) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -1;
	uint8_t x360 = 57U;
	static uint64_t t74 = 4LLU;

	t74 = ((x357|(x358&x359))*x360);

	if (t74 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x368 = 114388814LLU;
	volatile uint64_t t75 = 500097539605172120LLU;

	t75 = ((x365|(x366&x367))*x368);

	if (t75 != 3748178268338LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x369 = 0;
	static volatile int64_t x370 = INT64_MIN;
	int64_t x371 = 650649LL;
	static uint64_t t76 = 10525319878LLU;

	t76 = ((x369|(x370&x371))*x372);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x373 = 0;
	volatile uint16_t x374 = UINT16_MAX;
	uint16_t x375 = 3U;
	uint16_t x376 = 4U;
	volatile int32_t t77 = 357;

	t77 = ((x373|(x374&x375))*x376);

	if (t77 != 12) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile uint32_t x378 = 11U;
	static volatile uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MAX;
	uint64_t t78 = 422442953282599LLU;

	t78 = ((x377|(x378&x379))*x380);

	if (t78 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x383 = -2;
	static volatile int16_t x384 = INT16_MIN;
	volatile int64_t t79 = 812024016358LL;

	t79 = ((x381|(x382&x383))*x384);

	if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x387 = INT16_MAX;
	static int8_t x388 = -27;
	volatile uint64_t t80 = 1041608315444721380LLU;

	t80 = ((x385|(x386&x387))*x388);

	if (t80 != 27LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x390 = -7;
	uint8_t x391 = 1U;
	uint32_t x392 = 23486242U;

	t81 = ((x389|(x390&x391))*x392);

	if (t81 != 1694024414U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	static uint64_t x396 = UINT64_MAX;

	t82 = ((x393|(x394&x395))*x396);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x405 = 1484535575373210LLU;
	uint8_t x407 = 1U;
	static volatile uint32_t x408 = 20193U;
	uint64_t t83 = 105723687LLU;

	t83 = ((x405|(x406&x407))*x408);

	if (t83 != 11530482799801698107LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x409 = INT64_MIN;
	static uint32_t x410 = 56472U;
	static int16_t x411 = -333;
	int64_t x412 = -1LL;
	volatile int64_t t84 = -1611LL;

	t84 = ((x409|(x410&x411))*x412);

	if (t84 != 9223372036854719344LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x414 = -1LL;
	uint32_t x415 = 0U;
	volatile int64_t t85 = -10LL;

	t85 = ((x413|(x414&x415))*x416);

	if (t85 != -120259084260LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = -1;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t86 = 0;

	t86 = ((x417|(x418&x419))*x420);

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = UINT64_MAX;
	volatile uint16_t x422 = 6U;
	static int16_t x423 = INT16_MIN;
	static uint64_t x424 = 648543955074LLU;
	static volatile uint64_t t87 = 2070761000LLU;

	t87 = ((x421|(x422&x423))*x424);

	if (t87 != 18446743425165596542LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x425 = UINT8_MAX;
	static int16_t x426 = 417;
	int8_t x427 = -7;
	volatile int8_t x428 = INT8_MAX;
	static int32_t t88 = 13179;

	t88 = ((x425|(x426&x427))*x428);

	if (t88 != 64897) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = INT16_MAX;
	int32_t x430 = INT32_MIN;
	static uint64_t x431 = 848346693461207764LLU;
	static int16_t x432 = 1;
	volatile uint64_t t89 = 14056762059LLU;

	t89 = ((x429|(x430&x431))*x432);

	if (t89 != 848346692687265791LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x433 = 1U;
	int8_t x434 = INT8_MIN;
	volatile int64_t x436 = -1LL;
	int64_t t90 = 1509368LL;

	t90 = ((x433|(x434&x435))*x436);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x445 = 55U;

	t91 = ((x445|(x446&x447))*x448);

	if (t91 != 31805385) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = -1;
	int64_t x450 = INT64_MAX;
	uint64_t x451 = 565LLU;
	volatile int16_t x452 = 2;

	t92 = ((x449|(x450&x451))*x452);

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = -1;
	static int16_t x455 = INT16_MIN;
	int16_t x456 = -28;
	volatile int32_t t93 = -5639;

	t93 = ((x453|(x454&x455))*x456);

	if (t93 != 3584) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = UINT64_MAX;
	static int16_t x458 = INT16_MIN;
	volatile int64_t x459 = INT64_MIN;
	uint64_t x460 = UINT64_MAX;
	uint64_t t94 = 4232484728265LLU;

	t94 = ((x457|(x458&x459))*x460);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MIN;
	static int32_t x463 = INT32_MIN;
	uint32_t x464 = 8351424U;
	uint32_t t95 = 3707U;

	t95 = ((x461|(x462&x463))*x464);

	if (t95 != 4286615872U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x466 = 46U;
	int16_t x467 = -1;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t96 = 7784303958500569LLU;

	t96 = ((x465|(x466&x467))*x468);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 2U;
	int64_t x470 = INT64_MIN;
	uint8_t x471 = 7U;
	int16_t x472 = INT16_MIN;
	volatile int64_t t97 = -1023507322845LL;

	t97 = ((x469|(x470&x471))*x472);

	if (t97 != -65536LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x475 = INT16_MAX;
	static int16_t x476 = -1;
	static uint64_t t98 = 25550029LLU;

	t98 = ((x473|(x474&x475))*x476);

	if (t98 != 18444955409691973889LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x477 = -1LL;
	static int8_t x479 = 46;
	uint64_t x480 = 264332119957477LLU;
	static volatile uint64_t t99 = 661526534846288325LLU;

	t99 = ((x477|(x478&x479))*x480);

	if (t99 != 18446479741589594139LLU) { NG(); } else { ; }
	
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

