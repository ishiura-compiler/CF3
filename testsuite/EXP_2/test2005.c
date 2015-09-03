#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 1;
int16_t x4 = -1;
int16_t x7 = 8172;
int8_t x8 = 0;
volatile uint64_t t2 = 203606602578776252LLU;
int64_t t6 = 70309352LL;
static uint16_t x36 = 88U;
volatile uint16_t x39 = UINT16_MAX;
volatile int64_t x53 = 3LL;
volatile uint32_t x56 = 1481987U;
static int64_t x57 = INT64_MAX;
int32_t x61 = 513849428;
static uint32_t t13 = 55U;
static uint32_t x69 = UINT32_MAX;
volatile int32_t x74 = INT32_MIN;
int8_t x75 = -1;
static volatile int8_t x93 = INT8_MIN;
int16_t x98 = 8956;
uint64_t t20 = 26012591LLU;
volatile int32_t t21 = 1050;
int64_t x105 = INT64_MIN;
int8_t x108 = -1;
int16_t x111 = 45;
int8_t x113 = INT8_MAX;
static uint16_t x117 = UINT16_MAX;
int16_t x118 = INT16_MAX;
int32_t t25 = 11;
int16_t x122 = 10115;
int8_t x136 = 0;
uint16_t x140 = UINT16_MAX;
static uint16_t x142 = UINT16_MAX;
uint8_t x148 = 2U;
volatile int64_t t31 = 2416840018156177070LL;
int32_t x150 = INT32_MIN;
volatile int64_t x154 = INT64_MIN;
uint64_t t33 = 785877318450522LLU;
int16_t x167 = INT16_MIN;
static volatile int64_t t36 = 24439214957770307LL;
volatile int64_t t37 = -25546LL;
uint16_t x176 = 123U;
int64_t t38 = -98906LL;
int8_t x181 = 5;
uint8_t x184 = 1U;
static volatile int64_t t40 = -201LL;
uint64_t x189 = UINT64_MAX;
int8_t x194 = -1;
uint64_t x198 = 8863589208692LLU;
volatile uint64_t t43 = 4861939472LLU;
volatile uint64_t t44 = 540877882774483LLU;
uint64_t x205 = UINT64_MAX;
int16_t x209 = INT16_MIN;
uint8_t x212 = UINT8_MAX;
volatile int64_t t46 = 90474428LL;
int8_t x217 = -38;
uint64_t x227 = 521555664958134LLU;
uint64_t t48 = 3592624LLU;
static int32_t x229 = INT32_MIN;
uint64_t x235 = UINT64_MAX;
int64_t x240 = 181LL;
static int32_t x248 = INT32_MIN;
static volatile uint32_t t54 = 48739851U;
volatile uint16_t x254 = 1U;
uint8_t x256 = UINT8_MAX;
static int32_t x258 = -3291;
volatile int32_t t56 = -3597;
int32_t x261 = -1;
uint64_t t58 = 27420016830LLU;
uint32_t x271 = 8U;
uint8_t x285 = 0U;
int64_t x291 = INT64_MIN;
uint32_t x296 = 44U;
volatile int64_t x298 = -1LL;
int64_t x314 = INT64_MIN;
uint16_t x337 = UINT16_MAX;
static int8_t x342 = INT8_MIN;
static uint32_t x349 = UINT32_MAX;
uint16_t x350 = 5448U;
uint32_t x351 = 14U;
uint64_t x368 = UINT64_MAX;
static volatile uint64_t t77 = 11289LLU;
volatile uint8_t x370 = UINT8_MAX;
int32_t x372 = -1;
int64_t x373 = INT64_MIN;
int32_t x382 = -1;
static volatile uint16_t x386 = 27U;
volatile uint32_t t82 = 125778572U;
int32_t x390 = -10531921;
uint16_t x402 = 28387U;
uint64_t x411 = UINT64_MAX;
int32_t x429 = 1721954;
static volatile int64_t x431 = INT64_MAX;
int32_t x432 = -1;
int16_t x438 = INT16_MIN;
static volatile int8_t x439 = INT8_MAX;
volatile int16_t x447 = -37;
int32_t x457 = 42;
uint16_t x459 = 16U;
static int64_t x460 = -1LL;
volatile int32_t t99 = 884213;


void f0(void) {
	static int32_t x1 = -1;
	int8_t x2 = 0;
	int32_t t0 = 0;

	t0 = ((x1|(x2|x3))*x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 80;
	uint64_t x6 = 41819675005LLU;
	volatile uint64_t t1 = 35127904370694LLU;

	t1 = ((x5|(x6|x7))*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -6;
	volatile uint32_t x10 = 115940U;
	uint16_t x11 = 32401U;
	uint64_t x12 = 11380012093LLU;

	t2 = ((x9|(x10|x11))*x12);

	if (t2 != 11983291608720395203LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint16_t x14 = 693U;
	int16_t x15 = 761;
	static volatile int64_t x16 = INT64_MAX;
	int64_t t3 = -12074888LL;

	t3 = ((x13|(x14|x15))*x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile uint64_t x18 = UINT64_MAX;
	static int32_t x19 = -1;
	int16_t x20 = INT16_MAX;
	uint64_t t4 = 1952LLU;

	t4 = ((x17|(x18|x19))*x20);

	if (t4 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 2105225667526LLU;
	static int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MIN;
	uint16_t x28 = 323U;
	volatile uint64_t t5 = 29706LLU;

	t5 = ((x25|(x26|x27))*x28);

	if (t5 != 18446744073709551293LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 373U;
	static volatile int16_t x30 = INT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = -13LL;

	t6 = ((x29|(x30|x31))*x32);

	if (t6 != -55834574835LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x33 = UINT16_MAX;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	volatile uint64_t t7 = 73996203797LLU;

	t7 = ((x33|(x34|x35))*x36);

	if (t7 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 711100887U;
	volatile int8_t x38 = 1;
	int32_t x40 = -1;
	uint32_t t8 = 320U;

	t8 = ((x37|(x38|x39))*x40);

	if (t8 != 3583836161U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = UINT16_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = 0;
	static uint32_t x44 = 16U;
	static volatile int64_t t9 = -2442716472239431LL;

	t9 = ((x41|(x42|x43))*x44);

	if (t9 != -16LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = 2;
	int8_t x50 = -1;
	int16_t x51 = -364;
	static uint64_t x52 = UINT64_MAX;
	uint64_t t10 = 17554504678688886LLU;

	t10 = ((x49|(x50|x51))*x52);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MAX;
	int64_t t11 = -1864554847822342LL;

	t11 = ((x53|(x54|x55))*x56);

	if (t11 != -1481987LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 12777005364616LLU;
	int8_t x59 = 0;
	uint8_t x60 = 4U;
	uint64_t t12 = 903102396940184LLU;

	t12 = ((x57|(x58|x59))*x60);

	if (t12 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = 2U;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -1;

	t13 = ((x61|(x62|x63))*x64);

	if (t13 != 1633634218U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = -1;
	int64_t x66 = 17435623198678LL;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int64_t t14 = -16859423247LL;

	t14 = ((x65|(x66|x67))*x68);

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x70 = 78U;
	int8_t x71 = INT8_MAX;
	int16_t x72 = -1;
	volatile uint32_t t15 = 62128U;

	t15 = ((x69|(x70|x71))*x72);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MAX;
	int16_t x76 = 1664;
	int32_t t16 = 508943;

	t16 = ((x73|(x74|x75))*x76);

	if (t16 != -1664) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = 10174;
	uint64_t x82 = 22382LLU;
	int64_t x83 = INT64_MAX;
	static int32_t x84 = -9922875;
	uint64_t t17 = 1320466276LLU;

	t17 = ((x81|(x82|x83))*x84);

	if (t17 != 9223372036864698683LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x85 = 52U;
	int64_t x86 = 491788992952LL;
	static volatile int16_t x87 = -1;
	uint16_t x88 = 526U;
	int64_t t18 = -551969359396235LL;

	t18 = ((x85|(x86|x87))*x88);

	if (t18 != -526LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = INT8_MIN;
	int64_t x95 = 8511818754136981LL;
	int32_t x96 = INT32_MIN;
	volatile int64_t t19 = 710485041223076LL;

	t19 = ((x93|(x94|x95))*x96);

	if (t19 != 229780750336LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 202LLU;
	static int16_t x99 = INT16_MIN;
	uint16_t x100 = 64U;

	t20 = ((x97|(x98|x99))*x100);

	if (t20 != 18446744073708027776LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	int32_t x102 = -1;
	int16_t x103 = 1;
	static int32_t x104 = -7269;

	t21 = ((x101|(x102|x103))*x104);

	if (t21 != 7269) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x106 = -453649074564544043LL;
	static int16_t x107 = INT16_MIN;
	volatile int64_t t22 = 94872999932LL;

	t22 = ((x105|(x106|x107))*x108);

	if (t22 != 13867LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = 10LL;
	static int8_t x112 = INT8_MIN;
	volatile int64_t t23 = 8015578780655983LL;

	t23 = ((x109|(x110|x111))*x112);

	if (t23 != -8388480LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x114 = UINT64_MAX;
	volatile int16_t x115 = 67;
	uint8_t x116 = UINT8_MAX;
	volatile uint64_t t24 = 303LLU;

	t24 = ((x113|(x114|x115))*x116);

	if (t24 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x119 = -1;
	static volatile int16_t x120 = INT16_MIN;

	t25 = ((x117|(x118|x119))*x120);

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MIN;
	uint8_t x123 = 1U;
	int8_t x124 = 1;
	static int32_t t26 = -64577;

	t26 = ((x121|(x122|x123))*x124);

	if (t26 != -22653) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x125 = 10888U;
	uint64_t x126 = 1428066044LLU;
	int64_t x127 = INT64_MAX;
	volatile int16_t x128 = INT16_MAX;
	uint64_t t27 = 161446774LLU;

	t27 = ((x125|(x126|x127))*x128);

	if (t27 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = -1;
	int8_t x134 = 0;
	static int64_t x135 = 2LL;
	static volatile int64_t t28 = -80457534LL;

	t28 = ((x133|(x134|x135))*x136);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	uint8_t x138 = UINT8_MAX;
	uint8_t x139 = 1U;
	static uint32_t t29 = 7329U;

	t29 = ((x137|(x138|x139))*x140);

	if (t29 != 4294901761U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x143 = 1U;
	int8_t x144 = -1;
	volatile int64_t t30 = -413713LL;

	t30 = ((x141|(x142|x143))*x144);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -1LL;
	uint32_t x146 = 729U;
	int8_t x147 = -28;

	t31 = ((x145|(x146|x147))*x148);

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	volatile int64_t x151 = 6966726543693LL;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t32 = 74936227LLU;

	t32 = ((x149|(x150|x151))*x152);

	if (t32 != 1857880065LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	static int8_t x155 = INT8_MIN;
	uint64_t x156 = 24555904514195067LLU;

	t33 = ((x153|(x154|x155))*x156);

	if (t33 != 18422188169195356549LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 43006244076360909LLU;
	volatile int64_t x159 = -1LL;
	uint16_t x160 = 1U;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x157|(x158|x159))*x160);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	static uint8_t x162 = 5U;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t35 = 916555885182793464LLU;

	t35 = ((x161|(x162|x163))*x164);

	if (t35 != 123LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -11635137;
	int64_t x166 = -27447617LL;
	int32_t x168 = -1;

	t36 = ((x165|(x166|x167))*x168);

	if (t36 != 321LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MAX;
	volatile int8_t x170 = -1;
	uint16_t x171 = 5745U;
	static int8_t x172 = -1;

	t37 = ((x169|(x170|x171))*x172);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = -505;
	static uint16_t x174 = 21796U;
	int64_t x175 = INT64_MAX;

	t38 = ((x173|(x174|x175))*x176);

	if (t38 != -123LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -4;
	uint64_t x178 = UINT64_MAX;
	static uint64_t x179 = 560LLU;
	int8_t x180 = INT8_MIN;
	static volatile uint64_t t39 = 237580493732078LLU;

	t39 = ((x177|(x178|x179))*x180);

	if (t39 != 128LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = -1LL;
	volatile int32_t x183 = -1;

	t40 = ((x181|(x182|x183))*x184);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x190 = 7493;
	uint64_t x191 = 762974LLU;
	uint8_t x192 = UINT8_MAX;
	uint64_t t41 = 1492LLU;

	t41 = ((x189|(x190|x191))*x192);

	if (t41 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	static int64_t x195 = INT64_MIN;
	uint8_t x196 = 0U;
	volatile int64_t t42 = -20071367597679LL;

	t42 = ((x193|(x194|x195))*x196);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 7215912;
	static int32_t x199 = -8;
	uint64_t x200 = UINT64_MAX;

	t43 = ((x197|(x198|x199))*x200);

	if (t43 != 4LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 0U;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = 17U;
	uint64_t x204 = 5803733629LLU;

	t44 = ((x201|(x202|x203))*x204);

	if (t44 != 9223372135518247501LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x206 = 138451046332685556LLU;
	static int64_t x207 = -1LL;
	int8_t x208 = 4;
	volatile uint64_t t45 = 288LLU;

	t45 = ((x205|(x206|x207))*x208);

	if (t45 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x210 = INT64_MIN;
	volatile int32_t x211 = INT32_MIN;

	t46 = ((x209|(x210|x211))*x212);

	if (t46 != -8355840LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x218 = 121U;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = 11U;
	int32_t t47 = -1;

	t47 = ((x217|(x218|x219))*x220);

	if (t47 != -55) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x225 = 25U;
	static uint8_t x226 = 8U;
	int16_t x228 = 1;

	t48 = ((x225|(x226|x227))*x228);

	if (t48 != 521555664958143LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x230 = 138509896U;
	static volatile int8_t x231 = 7;
	int16_t x232 = -1;
	static volatile uint32_t t49 = 11001U;

	t49 = ((x229|(x230|x231))*x232);

	if (t49 != 2008973745U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = UINT32_MAX;
	static uint32_t x234 = 9U;
	uint8_t x236 = UINT8_MAX;
	static volatile uint64_t t50 = 252LLU;

	t50 = ((x233|(x234|x235))*x236);

	if (t50 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -2039327793445745LL;
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = -1;
	int64_t t51 = 30202045556869LL;

	t51 = ((x237|(x238|x239))*x240);

	if (t51 != -181LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x241 = INT32_MIN;
	int64_t x242 = -62727874807LL;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	int64_t t52 = 65506816760920147LL;

	t52 = ((x241|(x242|x243))*x244);

	if (t52 != 880508928LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 0U;
	uint32_t x246 = 1666133833U;
	int8_t x247 = INT8_MAX;
	uint32_t t53 = 1985042U;

	t53 = ((x245|(x246|x247))*x248);

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -1;
	int32_t x250 = INT32_MIN;
	static uint8_t x251 = 45U;
	static uint32_t x252 = 900U;

	t54 = ((x249|(x250|x251))*x252);

	if (t54 != 4294966396U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x253 = 1435397LLU;
	int16_t x255 = 434;
	static uint64_t t55 = 213592997210LLU;

	t55 = ((x253|(x254|x255))*x256);

	if (t55 != 366071625LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x259 = 21927U;
	static int16_t x260 = -1;

	t56 = ((x257|(x258|x259))*x260);

	if (t56 != 2137) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x262 = -12;
	int32_t x263 = INT32_MAX;
	static uint16_t x264 = 6U;
	static volatile int32_t t57 = 0;

	t57 = ((x261|(x262|x263))*x264);

	if (t57 != -6) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	static int64_t x267 = INT64_MIN;
	int16_t x268 = -1;

	t58 = ((x265|(x266|x267))*x268);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x269 = -1LL;
	int8_t x270 = INT8_MAX;
	int32_t x272 = INT32_MIN;
	static int64_t t59 = 376011LL;

	t59 = ((x269|(x270|x271))*x272);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x274 = 1864U;
	int16_t x275 = 6313;
	uint64_t x276 = 324379114236824009LLU;
	volatile uint64_t t60 = 44216546LLU;

	t60 = ((x273|(x274|x275))*x276);

	if (t60 != 8898992922617951799LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MAX;
	static int32_t x278 = -7369067;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = 2U;
	static int64_t t61 = 1LL;

	t61 = ((x277|(x278|x279))*x280);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 130;
	uint8_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t62 = -743130;

	t62 = ((x281|(x282|x283))*x284);

	if (t62 != 16000) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int64_t x288 = INT64_MAX;
	int64_t t63 = -812322LL;

	t63 = ((x285|(x286|x287))*x288);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 121U;
	volatile uint64_t x290 = 11454484LLU;
	static volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t64 = 10995424877019277LLU;

	t64 = ((x289|(x290|x291))*x292);

	if (t64 != 18446744072243364224LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x294 = 458U;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t t65 = 0LLU;

	t65 = ((x293|(x294|x295))*x296);

	if (t65 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x297 = 38U;
	int8_t x299 = -1;
	int32_t x300 = 3623;
	int64_t t66 = -13469816LL;

	t66 = ((x297|(x298|x299))*x300);

	if (t66 != -3623LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 3821U;
	static int8_t x303 = -1;
	uint64_t x304 = 93635767626LLU;
	volatile uint64_t t67 = 188183715644LLU;

	t67 = ((x301|(x302|x303))*x304);

	if (t67 != 18446743980073783990LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = 261134LL;
	int64_t x306 = 16474320LL;
	int8_t x307 = -1;
	static uint16_t x308 = UINT16_MAX;
	volatile int64_t t68 = 1LL;

	t68 = ((x305|(x306|x307))*x308);

	if (t68 != -65535LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = UINT16_MAX;
	uint64_t x315 = UINT64_MAX;
	static int64_t x316 = -10508376321LL;
	static uint64_t t69 = 22527624231037LLU;

	t69 = ((x313|(x314|x315))*x316);

	if (t69 != 10508376321LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 5U;
	uint64_t x318 = 72465350485500LLU;
	uint16_t x319 = 1786U;
	uint64_t x320 = 1LLU;
	static volatile uint64_t t70 = 681LLU;

	t70 = ((x317|(x318|x319))*x320);

	if (t70 != 72465350486015LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x325 = 1341;
	int32_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MIN;
	volatile int64_t t71 = 2680LL;

	t71 = ((x325|(x326|x327))*x328);

	if (t71 != 128LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = 6LLU;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	uint32_t x332 = 0U;
	static uint64_t t72 = 20860661633474340LLU;

	t72 = ((x329|(x330|x331))*x332);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x338 = INT16_MIN;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 1672418U;
	volatile uint32_t t73 = 1361802546U;

	t73 = ((x337|(x338|x339))*x340);

	if (t73 != 4293294878U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x341 = -1;
	volatile uint32_t x343 = 1U;
	static volatile int32_t x344 = INT32_MIN;
	uint32_t t74 = 1U;

	t74 = ((x341|(x342|x343))*x344);

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x352 = -1;
	volatile uint32_t t75 = 6677686U;

	t75 = ((x349|(x350|x351))*x352);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x357 = 280517928710890012LL;
	uint8_t x358 = 45U;
	static int32_t x359 = INT32_MIN;
	volatile uint16_t x360 = 0U;
	int64_t t76 = 0LL;

	t76 = ((x357|(x358|x359))*x360);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -1;
	uint64_t x366 = 13198LLU;
	int32_t x367 = -1;

	t77 = ((x365|(x366|x367))*x368);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x369 = -13208735;
	static int32_t x371 = -991067;
	int32_t t78 = -118;

	t78 = ((x369|(x370|x371))*x372);

	if (t78 != 592897) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x374 = 978930LLU;
	int64_t x375 = INT64_MIN;
	int8_t x376 = 58;
	volatile uint64_t t79 = 1475LLU;

	t79 = ((x373|(x374|x375))*x376);

	if (t79 != 56777940LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = -1LL;
	int64_t x378 = INT64_MAX;
	int8_t x379 = INT8_MAX;
	static uint16_t x380 = 12562U;
	static int64_t t80 = 52736615062779540LL;

	t80 = ((x377|(x378|x379))*x380);

	if (t80 != -12562LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MAX;
	static int32_t x383 = 9;
	static int64_t x384 = -15734LL;
	int64_t t81 = -23731941950433591LL;

	t81 = ((x381|(x382|x383))*x384);

	if (t81 != 15734LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -2;
	uint32_t x387 = 11806411U;
	int8_t x388 = 5;

	t82 = ((x385|(x386|x387))*x388);

	if (t82 != 4294967291U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = 24;
	uint8_t x391 = 5U;
	int16_t x392 = -1;
	static volatile int32_t t83 = -2;

	t83 = ((x389|(x390|x391))*x392);

	if (t83 != 10531905) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = 28U;
	int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	volatile int64_t t84 = 8781683651779LL;

	t84 = ((x393|(x394|x395))*x396);

	if (t84 != 32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x397 = 23732U;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 96U;
	int16_t x400 = -1;
	int64_t t85 = 240514LL;

	t85 = ((x397|(x398|x399))*x400);

	if (t85 != 9223372036854752012LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = -1;
	uint8_t x403 = 3U;
	uint16_t x404 = 5670U;
	volatile int32_t t86 = 7;

	t86 = ((x401|(x402|x403))*x404);

	if (t86 != -5670) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = UINT64_MAX;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t87 = 4737093217838047LLU;

	t87 = ((x405|(x406|x407))*x408);

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = 17;
	int64_t x410 = -1LL;
	int16_t x412 = INT16_MIN;
	uint64_t t88 = 104796LLU;

	t88 = ((x409|(x410|x411))*x412);

	if (t88 != 32768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = 30553342297668475LL;
	uint64_t x418 = 7LLU;
	static int32_t x419 = -1;
	uint64_t x420 = 1828811202800279LLU;
	uint64_t t89 = 5527617089471248LLU;

	t89 = ((x417|(x418|x419))*x420);

	if (t89 != 18444915262506751337LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = INT64_MAX;
	static int64_t x422 = INT64_MIN;
	uint64_t x423 = 1855LLU;
	static uint16_t x424 = 24324U;
	volatile uint64_t t90 = 147197918657389LLU;

	t90 = ((x421|(x422|x423))*x424);

	if (t90 != 18446744073709527292LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x430 = -1;
	volatile int64_t t91 = 2540437749128137825LL;

	t91 = ((x429|(x430|x431))*x432);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MIN;
	volatile int8_t x435 = -1;
	int16_t x436 = INT16_MAX;
	int64_t t92 = 53809LL;

	t92 = ((x433|(x434|x435))*x436);

	if (t92 != -32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x437 = INT8_MIN;
	int64_t x440 = INT64_MAX;
	static volatile int64_t t93 = 6164259LL;

	t93 = ((x437|(x438|x439))*x440);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MAX;
	int8_t x442 = 1;
	int16_t x443 = 6;
	uint32_t x444 = 6751743U;
	volatile uint32_t t94 = 336112U;

	t94 = ((x441|(x442|x443))*x444);

	if (t94 != 2140731905U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x445 = INT8_MIN;
	uint8_t x446 = 20U;
	int32_t x448 = -2;
	volatile int32_t t95 = -1;

	t95 = ((x445|(x446|x447))*x448);

	if (t95 != 66) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x449 = 11123044U;
	volatile int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MAX;
	uint32_t x452 = 1U;
	volatile int64_t t96 = -2915975132LL;

	t96 = ((x449|(x450|x451))*x452);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	volatile uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MAX;
	uint32_t t97 = 56454U;

	t97 = ((x453|(x454|x455))*x456);

	if (t97 != 2147483649U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x458 = 1056309506371588153LLU;
	uint64_t t98 = 7468LLU;

	t98 = ((x457|(x458|x459))*x460);

	if (t98 != 17390434567337963461LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x461 = -1;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = INT8_MIN;
	int8_t x464 = -1;

	t99 = ((x461|(x462|x463))*x464);

	if (t99 != 1) { NG(); } else { ; }
	
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

