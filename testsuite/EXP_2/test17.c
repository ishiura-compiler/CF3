#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int64_t t1 = -1085998520900LL;
static int32_t x13 = INT32_MIN;
int32_t x16 = 63291977;
uint8_t x17 = 12U;
int32_t x19 = INT32_MIN;
static volatile uint64_t t4 = 1212317547289171867LLU;
uint16_t x22 = 7601U;
uint64_t x37 = UINT64_MAX;
int32_t x40 = -1;
static uint64_t t8 = 0LLU;
int64_t x50 = INT64_MIN;
int16_t x55 = -552;
uint16_t x59 = UINT16_MAX;
int64_t x65 = INT64_MIN;
int64_t t13 = 2288430471512436LL;
int64_t x70 = 4054935210230997LL;
int16_t x71 = -1;
uint8_t x83 = UINT8_MAX;
int8_t x96 = -8;
int32_t x101 = INT32_MIN;
volatile uint8_t x103 = UINT8_MAX;
uint32_t t20 = 20660U;
volatile int8_t x128 = -28;
uint64_t x129 = 2289538813751713LLU;
int16_t x139 = INT16_MAX;
int16_t x142 = INT16_MIN;
uint16_t x144 = 6U;
int16_t x149 = -2;
static int8_t x150 = INT8_MIN;
static int32_t t31 = -17662671;
static volatile uint16_t x173 = UINT16_MAX;
uint16_t x175 = 113U;
static uint16_t x177 = 14U;
int8_t x180 = 56;
int16_t x188 = INT16_MAX;
static volatile int32_t t37 = -15;
uint8_t x189 = 77U;
volatile int64_t x191 = INT64_MAX;
static volatile int64_t x192 = 258155LL;
static int32_t x195 = INT32_MIN;
volatile int32_t t39 = -1;
volatile uint64_t x199 = UINT64_MAX;
static uint8_t x200 = UINT8_MAX;
uint16_t x206 = 0U;
uint8_t x207 = 71U;
static int64_t x211 = INT64_MIN;
volatile int64_t x214 = -44686753LL;
static int16_t x224 = -1;
uint16_t x228 = UINT16_MAX;
static volatile int32_t t47 = 45975068;
int32_t x230 = -126501328;
volatile uint8_t x233 = 10U;
static int16_t x241 = -1;
uint32_t x245 = 4170U;
int16_t x271 = INT16_MAX;
uint64_t t57 = 23115302903LLU;
uint16_t x284 = UINT16_MAX;
static uint64_t x297 = 18150122LLU;
int64_t x321 = 50LL;
int8_t x335 = INT8_MIN;
volatile int64_t t69 = -10660LL;
int8_t x364 = -1;
volatile int32_t t71 = 0;
int64_t t74 = -45952LL;
int32_t x378 = INT32_MAX;
static int32_t x383 = INT32_MIN;
int32_t x385 = -1;
int64_t t77 = 2336560713126045LL;
static volatile int16_t x389 = -4;
int64_t t78 = -478LL;
uint8_t x397 = 1U;
uint16_t x399 = UINT16_MAX;
static int64_t x409 = INT64_MIN;
static int32_t x410 = INT32_MIN;
uint16_t x418 = 456U;
static int8_t x421 = INT8_MAX;
uint64_t x426 = 5978LLU;
volatile int8_t x428 = -6;
volatile int64_t x437 = INT64_MAX;
volatile int16_t x444 = -3;
int32_t x445 = INT32_MAX;
static uint64_t x448 = 10865914332547LLU;
volatile uint64_t t90 = 6LLU;
static int8_t x449 = INT8_MIN;
uint32_t x452 = UINT32_MAX;
uint16_t x453 = 1963U;
volatile uint64_t t93 = 9042543825566LLU;
uint8_t x480 = 33U;
uint16_t x481 = 0U;
int64_t x484 = -7765679LL;
volatile int8_t x489 = -1;
uint32_t x492 = 114U;
static uint64_t t96 = 227879890968LLU;
int16_t x495 = INT16_MIN;
int64_t x501 = -1LL;
static int64_t x502 = -1LL;
int64_t x504 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = 1LL;
	static uint8_t x2 = 101U;
	volatile int16_t x3 = INT16_MAX;
	volatile int64_t x4 = INT64_MAX;
	int64_t t0 = -143LL;

	t0 = ((x1-(x2+x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -3504;
	int64_t x6 = -1804749247558503LL;
	uint16_t x7 = 26U;

	t1 = ((x5-(x6+x7))/x8);

	if (t1 != -55076576158LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -202039748353844LL;
	int64_t x10 = -2112080946603539369LL;
	int64_t x11 = -1829LL;
	volatile int16_t x12 = INT16_MIN;
	int64_t t2 = 78452LL;

	t2 = ((x9-(x10+x11))/x12);

	if (t2 != -64449429530492LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int8_t x15 = 3;
	int64_t t3 = -8441744213893919LL;

	t3 = ((x13-(x14+x15))/x16);

	if (t3 != 145727349213LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 2U;
	uint64_t x20 = 818001655379273520LLU;

	t4 = ((x17-(x18+x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static volatile uint8_t x23 = 0U;
	volatile int32_t x24 = -1;
	volatile int32_t t5 = -863227093;

	t5 = ((x21-(x22+x23))/x24);

	if (t5 != 40369) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 1727;
	static int32_t x34 = 1807478;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 574566;

	t6 = ((x33-(x34+x35))/x36);

	if (t6 != 13851) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = 8;
	int32_t x39 = -1;
	volatile uint64_t t7 = 98335805840283102LLU;

	t7 = ((x37-(x38+x39))/x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	static volatile uint64_t x46 = 214332LLU;
	static volatile int64_t x47 = 26LL;
	static int16_t x48 = -1;

	t8 = ((x45-(x46+x47))/x48);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = -1;
	int32_t x51 = 8;
	int16_t x52 = 245;
	volatile int64_t t9 = 1646937620114932032LL;

	t9 = ((x49-(x50+x51))/x52);

	if (t9 != 37646416476958268LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	uint64_t x54 = UINT64_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile uint64_t t10 = 119482LLU;

	t10 = ((x53-(x54+x55))/x56);

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = 0LL;
	static int32_t x58 = 5;
	uint64_t x60 = 172LLU;
	uint64_t t11 = 26683603470716224LLU;

	t11 = ((x57-(x58+x59))/x60);

	if (t11 != 107248512056450500LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	static int64_t x63 = -1LL;
	static int64_t x64 = -1LL;
	int64_t t12 = 251716170981311098LL;

	t12 = ((x61-(x62+x63))/x64);

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = -47LL;
	int8_t x67 = 3;
	int16_t x68 = -15966;

	t13 = ((x65-(x66+x67))/x68);

	if (t13 != 577688340025978LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	static int64_t x72 = INT64_MIN;
	int64_t t14 = 16414508825976536LL;

	t14 = ((x69-(x70+x71))/x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -27;
	uint16_t x74 = 5566U;
	int16_t x75 = -1;
	static volatile uint8_t x76 = 51U;
	volatile int32_t t15 = -154;

	t15 = ((x73-(x74+x75))/x76);

	if (t15 != -109) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 4806LLU;
	int64_t x84 = 709804446907239LL;
	uint64_t t16 = 8LLU;

	t16 = ((x81-(x82+x83))/x84);

	if (t16 != 25988LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static uint8_t x87 = 2U;
	int64_t x88 = 5LL;
	static int64_t t17 = 0LL;

	t17 = ((x85-(x86+x87))/x88);

	if (t17 != -6554LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x93 = INT32_MIN;
	static int16_t x94 = INT16_MIN;
	uint8_t x95 = 1U;
	static int32_t t18 = -102714;

	t18 = ((x93-(x94+x95))/x96);

	if (t18 != 268431360) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 809430812945344923LLU;
	volatile int64_t x98 = -1LL;
	uint16_t x99 = 6U;
	uint64_t x100 = 25757548842381829LLU;
	static volatile uint64_t t19 = 1611495523649049378LLU;

	t19 = ((x97-(x98+x99))/x100);

	if (t19 != 31LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x102 = 416202U;
	int32_t x104 = INT32_MIN;

	t20 = ((x101-(x102+x103))/x104);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x105 = 10U;
	volatile int64_t x106 = 138LL;
	static uint16_t x107 = 7061U;
	int32_t x108 = -259731;
	int64_t t21 = -2082163468826LL;

	t21 = ((x105-(x106+x107))/x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x109 = INT8_MAX;
	int64_t x110 = -16512494390138LL;
	volatile int64_t x111 = 373256LL;
	int8_t x112 = -1;
	int64_t t22 = 12547451897543LL;

	t22 = ((x109-(x110+x111))/x112);

	if (t22 != -16512494017009LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	uint32_t x114 = 1971433U;
	volatile uint8_t x115 = 2U;
	uint64_t x116 = 178547656697LLU;
	uint64_t t23 = 1937720LLU;

	t23 = ((x113-(x114+x115))/x116);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 63161U;
	uint16_t x118 = 236U;
	static volatile int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	uint32_t t24 = 60832567U;

	t24 = ((x117-(x118+x119))/x120);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	static volatile uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	uint64_t t25 = 1210LLU;

	t25 = ((x121-(x122+x123))/x124);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = -1LL;
	uint16_t x126 = 10996U;
	uint32_t x127 = 1U;
	int64_t t26 = -1989562831975LL;

	t26 = ((x125-(x126+x127))/x128);

	if (t26 != 392LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = -14287162;
	static int32_t x131 = -1;
	int32_t x132 = INT32_MIN;
	uint64_t t27 = 3266947802500061LLU;

	t27 = ((x129-(x130+x131))/x132);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = INT32_MAX;
	volatile uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;
	uint8_t x136 = 7U;
	static uint32_t t28 = 5251710U;

	t28 = ((x133-(x134+x135))/x136);

	if (t28 != 306783378U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = -22;
	volatile int16_t x138 = 3985;
	int32_t x140 = INT32_MIN;
	volatile int32_t t29 = 99;

	t29 = ((x137-(x138+x139))/x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -72;
	int64_t x143 = 59575842064676526LL;
	static int64_t t30 = 1806116554712825LL;

	t30 = ((x141-(x142+x143))/x144);

	if (t30 != -9929307010773971LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x151 = INT8_MIN;
	uint8_t x152 = 8U;

	t31 = ((x149-(x150+x151))/x152);

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 17U;
	int32_t x154 = INT32_MAX;
	static int8_t x155 = -1;
	volatile int64_t x156 = INT64_MIN;
	static volatile int64_t t32 = 549LL;

	t32 = ((x153-(x154+x155))/x156);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = -109598407;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 5U;
	static volatile int32_t t33 = 50;

	t33 = ((x157-(x158+x159))/x160);

	if (t33 != 21932763) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = -3;
	volatile int32_t x166 = INT32_MIN;
	volatile int8_t x167 = INT8_MAX;
	static int64_t x168 = -1LL;
	static int64_t t34 = 19975LL;

	t34 = ((x165-(x166+x167))/x168);

	if (t34 != -2147483518LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x174 = 1016270LL;
	int64_t x176 = INT64_MIN;
	int64_t t35 = 1252470582300LL;

	t35 = ((x173-(x174+x175))/x176);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x178 = INT8_MIN;
	int16_t x179 = -37;
	volatile int32_t t36 = -79;

	t36 = ((x177-(x178+x179))/x180);

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x185 = UINT16_MAX;
	int32_t x186 = INT32_MAX;
	int32_t x187 = -1;

	t37 = ((x185-(x186+x187))/x188);

	if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x190 = -1;
	static volatile int64_t t38 = 536374092LL;

	t38 = ((x189-(x190+x191))/x192);

	if (t38 != -35728039498962LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -5;
	int32_t x194 = INT32_MAX;
	int16_t x196 = INT16_MAX;

	t39 = ((x193-(x194+x195))/x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x197 = 1019LLU;
	int64_t x198 = 19591702LL;
	uint64_t t40 = 18482215141LLU;

	t40 = ((x197-(x198+x199))/x200);

	if (t40 != 72340172837999846LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = 8;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 1U;
	uint64_t x204 = 15LLU;
	static uint64_t t41 = 864723958LLU;

	t41 = ((x201-(x202+x203))/x204);

	if (t41 != 9LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 1441U;
	volatile int64_t x208 = -1LL;
	volatile int64_t t42 = 355172855600735274LL;

	t42 = ((x205-(x206+x207))/x208);

	if (t42 != -1370LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x209 = -1;
	volatile int8_t x210 = 3;
	uint64_t x212 = UINT64_MAX;
	uint64_t t43 = 831913676527279893LLU;

	t43 = ((x209-(x210+x211))/x212);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x213 = UINT8_MAX;
	uint16_t x215 = 49U;
	volatile int64_t x216 = -1LL;
	volatile int64_t t44 = 1410975LL;

	t44 = ((x213-(x214+x215))/x216);

	if (t44 != -44686959LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = -34;
	static volatile uint16_t x219 = 15300U;
	static uint16_t x220 = UINT16_MAX;
	int32_t t45 = -410139;

	t45 = ((x217-(x218+x219))/x220);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = 18738LLU;
	int64_t x223 = 357822858LL;
	uint64_t t46 = 12841147LLU;

	t46 = ((x221-(x222+x223))/x224);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x225 = 2;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = 0;

	t47 = ((x225-(x226+x227))/x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MIN;
	static int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t48 = 14388894778LLU;

	t48 = ((x229-(x230+x231))/x232);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x234 = INT8_MAX;
	static int32_t x235 = 1164;
	int8_t x236 = INT8_MIN;
	static int32_t t49 = -464727124;

	t49 = ((x233-(x234+x235))/x236);

	if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = 0;
	volatile uint8_t x238 = 4U;
	uint16_t x239 = 1U;
	volatile int64_t x240 = INT64_MIN;
	int64_t t50 = 128727LL;

	t50 = ((x237-(x238+x239))/x240);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = UINT16_MAX;
	static volatile uint32_t t51 = 389U;

	t51 = ((x241-(x242+x243))/x244);

	if (t51 != 32768U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 6499U;
	uint32_t x248 = 2325936U;
	uint32_t t52 = 5497U;

	t52 = ((x245-(x246+x247))/x248);

	if (t52 != 1846U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = -1;
	uint64_t x250 = 814499LLU;
	int64_t x251 = -4291987318774LL;
	uint32_t x252 = 188U;
	uint64_t t53 = 317682412331988801LLU;

	t53 = ((x249-(x250+x251))/x252);

	if (t53 != 22829715448LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 2LLU;
	uint8_t x258 = 3U;
	int8_t x259 = INT8_MIN;
	volatile int64_t x260 = INT64_MIN;
	uint64_t t54 = 2061864537598LLU;

	t54 = ((x257-(x258+x259))/x260);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	volatile int32_t t55 = -58304581;

	t55 = ((x261-(x262+x263))/x264);

	if (t55 != -2147483392) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = -1644;
	int16_t x272 = INT16_MIN;
	volatile int32_t t56 = 1800;

	t56 = ((x269-(x270+x271))/x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint64_t x274 = 168357LLU;
	uint8_t x275 = 23U;
	uint64_t x276 = 1971422893147272LLU;

	t57 = ((x273-(x274+x275))/x276);

	if (t57 != 9357LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -3105;
	static int32_t x278 = -1391;
	static int32_t x279 = -497259352;
	static volatile int8_t x280 = INT8_MIN;
	static volatile int32_t t58 = 121;

	t58 = ((x277-(x278+x279))/x280);

	if (t58 != -3884825) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x281 = 665U;
	static uint32_t x282 = UINT32_MAX;
	int32_t x283 = 188;
	volatile uint32_t t59 = 3U;

	t59 = ((x281-(x282+x283))/x284);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = 39;
	int8_t x294 = -6;
	int16_t x295 = -1;
	volatile int32_t x296 = -1;
	int32_t t60 = 1822;

	t60 = ((x293-(x294+x295))/x296);

	if (t60 != -46) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x298 = UINT64_MAX;
	volatile uint16_t x299 = 81U;
	uint64_t x300 = UINT64_MAX;
	uint64_t t61 = 1859209966552944LLU;

	t61 = ((x297-(x298+x299))/x300);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = 0U;
	static uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MAX;
	int8_t x308 = -59;
	int32_t t62 = -22197;

	t62 = ((x305-(x306+x307))/x308);

	if (t62 != 559) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = -690579;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -93947;
	volatile int16_t x312 = -1;
	static int32_t t63 = -1;

	t63 = ((x309-(x310+x311))/x312);

	if (t63 != 596504) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MAX;
	int64_t t64 = 63859LL;

	t64 = ((x321-(x322+x323))/x324);

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = INT8_MIN;
	static uint64_t x334 = 2129711396265749LLU;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t65 = 3392273223LLU;

	t65 = ((x333-(x334+x335))/x336);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x337 = 2U;
	static int64_t x338 = 547217138382287LL;
	volatile uint64_t x339 = UINT64_MAX;
	int64_t x340 = -1LL;
	static uint64_t t66 = 917LLU;

	t66 = ((x337-(x338+x339))/x340);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x341 = 15U;
	int16_t x342 = -7524;
	static int16_t x343 = 0;
	int8_t x344 = INT8_MAX;
	volatile uint32_t t67 = 20309U;

	t67 = ((x341-(x342+x343))/x344);

	if (t67 != 59U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	static uint16_t x346 = 8436U;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 11532503U;
	volatile int64_t t68 = 59159LL;

	t68 = ((x345-(x346+x347))/x348);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x349 = 1U;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	static volatile int8_t x352 = INT8_MAX;

	t69 = ((x349-(x350+x351))/x352);

	if (t69 != 72624976668147839LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x353 = 2U;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = 1123617;
	int32_t t70 = 20;

	t70 = ((x353-(x354+x355))/x356);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	volatile uint16_t x363 = 1U;

	t71 = ((x361-(x362+x363))/x364);

	if (t71 != -2147450879) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = -1;
	volatile int32_t x366 = 59831423;
	static int8_t x367 = INT8_MIN;
	static int16_t x368 = 1745;
	volatile int32_t t72 = 1;

	t72 = ((x365-(x366+x367))/x368);

	if (t72 != -34287) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x369 = 11930LL;
	int32_t x370 = -807391;
	int8_t x371 = 0;
	uint32_t x372 = 29624411U;
	volatile int64_t t73 = 29434834966671LL;

	t73 = ((x369-(x370+x371))/x372);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x373 = 1127LL;
	volatile int64_t x374 = INT64_MAX;
	int16_t x375 = -1;
	int32_t x376 = 4249;

	t74 = ((x373-(x374+x375))/x376);

	if (t74 != -2170715941834496LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = 15562116561LL;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = 7LL;
	uint64_t t75 = 5262955408569LLU;

	t75 = ((x377-(x378+x379))/x380);

	if (t75 != 1916376130LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = INT64_MAX;
	static int16_t x384 = INT16_MIN;
	int64_t t76 = 7983903345412849LL;

	t76 = ((x381-(x382+x383))/x384);

	if (t76 != 281474976645119LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x386 = INT8_MAX;
	volatile int64_t x387 = -1LL;
	static volatile int64_t x388 = -7161419681417172LL;

	t77 = ((x385-(x386+x387))/x388);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	volatile uint16_t x392 = UINT16_MAX;

	t78 = ((x389-(x390+x391))/x392);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x398 = INT64_MIN;
	volatile uint8_t x400 = 117U;
	volatile int64_t t79 = 962622074202701220LL;

	t79 = ((x397-(x398+x399))/x400);

	if (t79 != 78832239631236839LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x401 = 11358083U;
	uint64_t x402 = 122987847873262529LLU;
	int32_t x403 = INT32_MIN;
	static volatile int8_t x404 = INT8_MAX;
	static uint64_t t80 = 557816737300022LLU;

	t80 = ((x401-(x402+x403))/x404);

	if (t80 != 144281545102323864LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = 988955316LL;
	int16_t x406 = INT16_MIN;
	static int32_t x407 = 1;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t81 = 78158157471935305LL;

	t81 = ((x405-(x406+x407))/x408);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x411 = 0U;
	volatile uint64_t x412 = 4377342524LLU;
	uint64_t t82 = 51LLU;

	t82 = ((x409-(x410+x411))/x412);

	if (t82 != 2107071125LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x417 = INT16_MIN;
	int16_t x419 = -1;
	static int32_t x420 = -1;
	int32_t t83 = -648823728;

	t83 = ((x417-(x418+x419))/x420);

	if (t83 != 33223) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x422 = -33;
	uint64_t x423 = 3406128591393617923LLU;
	uint32_t x424 = 10913209U;
	volatile uint64_t t84 = 2300713LLU;

	t84 = ((x421-(x422+x423))/x424);

	if (t84 != 1378202825797LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x425 = -550;
	int64_t x427 = -1LL;
	uint64_t t85 = 132060474293942850LLU;

	t85 = ((x425-(x426+x427))/x428);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x429 = 1072715U;
	int32_t x430 = -992456;
	static int8_t x431 = 0;
	static uint16_t x432 = UINT16_MAX;
	uint32_t t86 = 1U;

	t86 = ((x429-(x430+x431))/x432);

	if (t86 != 31U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x433 = UINT32_MAX;
	static volatile uint8_t x434 = UINT8_MAX;
	volatile int8_t x435 = -8;
	volatile uint32_t x436 = 41608U;
	uint32_t t87 = 1386557123U;

	t87 = ((x433-(x434+x435))/x436);

	if (t87 != 103224U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = -1;
	uint32_t x440 = 3U;
	static int64_t t88 = -824234140LL;

	t88 = ((x437-(x438+x439))/x440);

	if (t88 != 3074457345618258517LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x441 = -1;
	int32_t x442 = INT32_MIN;
	volatile uint32_t x443 = UINT32_MAX;
	uint32_t t89 = 39U;

	t89 = ((x441-(x442+x443))/x444);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x446 = UINT16_MAX;
	volatile int16_t x447 = -1;

	t90 = ((x445-(x446+x447))/x448);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x450 = INT32_MIN;
	int8_t x451 = 15;
	uint32_t t91 = 374U;

	t91 = ((x449-(x450+x451))/x452);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x454 = -1;
	int32_t x455 = 0;
	int16_t x456 = 56;
	volatile int32_t t92 = -1562869;

	t92 = ((x453-(x454+x455))/x456);

	if (t92 != 35) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = 339710;
	int32_t x468 = -61;

	t93 = ((x465-(x466+x467))/x468);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x477 = 4056098U;
	static volatile uint16_t x478 = 3334U;
	int8_t x479 = INT8_MIN;
	volatile uint32_t t94 = 583922025U;

	t94 = ((x477-(x478+x479))/x480);

	if (t94 != 122814U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x482 = INT8_MIN;
	uint32_t x483 = UINT32_MAX;
	int64_t t95 = 48LL;

	t95 = ((x481-(x482+x483))/x484);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x490 = 63421;
	uint64_t x491 = UINT64_MAX;

	t96 = ((x489-(x490+x491))/x492);

	if (t96 != 161813544506223580LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x493 = UINT8_MAX;
	volatile int16_t x494 = INT16_MIN;
	uint64_t x496 = 15922626LLU;
	static volatile uint64_t t97 = 1050645117808684LLU;

	t97 = ((x493-(x494+x495))/x496);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x497 = UINT16_MAX;
	int64_t x498 = -1LL;
	int64_t x499 = 6LL;
	int8_t x500 = INT8_MIN;
	volatile int64_t t98 = 12361830411504451LL;

	t98 = ((x497-(x498+x499))/x500);

	if (t98 != -511LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x503 = INT32_MIN;
	volatile int64_t t99 = -78369352360LL;

	t99 = ((x501-(x502+x503))/x504);

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

