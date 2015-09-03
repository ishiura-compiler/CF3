#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 5792837LL;
uint64_t x5 = 916971LLU;
int16_t x16 = INT16_MIN;
uint32_t x18 = UINT32_MAX;
uint64_t x22 = 1847704790LLU;
int16_t x28 = INT16_MIN;
volatile int8_t x31 = INT8_MIN;
static volatile uint8_t x32 = 3U;
volatile int32_t x42 = 1053362065;
static uint32_t t11 = 4209U;
int64_t x49 = -540608313455863257LL;
int64_t x52 = INT64_MIN;
int64_t t12 = 54LL;
int64_t x56 = INT64_MIN;
int32_t t17 = -1;
int16_t x78 = INT16_MIN;
int32_t t19 = 6718;
static volatile int32_t x81 = -1;
int16_t x83 = -9447;
int8_t x90 = INT8_MIN;
static uint16_t x91 = UINT16_MAX;
uint8_t x94 = UINT8_MAX;
uint32_t x96 = 32046314U;
uint32_t t23 = 1096U;
int16_t x104 = INT16_MIN;
int64_t x106 = -23191837LL;
uint32_t x108 = 596766U;
int64_t x109 = -1LL;
uint64_t x119 = UINT64_MAX;
static int32_t t30 = -5720499;
static volatile int64_t x128 = 1280690220786770005LL;
int16_t x129 = 3;
uint32_t x131 = 28464512U;
int32_t t32 = -365489;
static uint8_t x136 = 7U;
int64_t x138 = INT64_MIN;
int32_t x141 = INT32_MIN;
volatile int32_t t35 = 21375402;
static uint16_t x146 = UINT16_MAX;
volatile uint64_t x147 = 12210LLU;
static volatile uint8_t x155 = UINT8_MAX;
int16_t x164 = -16;
uint32_t x165 = 321749U;
volatile uint64_t x170 = UINT64_MAX;
uint64_t t44 = 8289736131640670LLU;
int32_t x181 = INT32_MAX;
int32_t t46 = 0;
int8_t x191 = 1;
static uint8_t x192 = 13U;
volatile int16_t x193 = -94;
volatile uint64_t x202 = 112LLU;
volatile uint32_t x213 = UINT32_MAX;
volatile uint16_t x215 = 788U;
int16_t x216 = INT16_MAX;
int32_t x217 = INT32_MIN;
int32_t x218 = INT32_MIN;
uint64_t x222 = 4183330432644LLU;
static int8_t x228 = -1;
int64_t x231 = INT64_MIN;
int8_t x232 = INT8_MAX;
int32_t t57 = -134415;
int64_t x240 = INT64_MIN;
int64_t x246 = 1079031299504646LL;
static uint64_t x248 = 2181899LLU;
uint64_t t61 = 3735270209LLU;
volatile uint32_t x249 = UINT32_MAX;
int32_t x251 = INT32_MIN;
int32_t t64 = 76019;
int64_t x274 = INT64_MIN;
int64_t x280 = INT64_MIN;
int64_t x286 = -1LL;
int32_t x289 = INT32_MIN;
static volatile uint64_t t72 = 2437232LLU;
volatile int8_t x293 = 0;
int16_t x298 = -1;
int64_t x299 = -956679962666LL;
int64_t t74 = 24911691212LL;
int16_t x302 = INT16_MAX;
volatile int32_t t76 = 975635;
int16_t x314 = 311;
int32_t t80 = -17;
int16_t x328 = INT16_MIN;
static int8_t x330 = 39;
int16_t x331 = INT16_MAX;
volatile int32_t x335 = INT32_MIN;
static int32_t x336 = -1;
volatile int8_t x337 = INT8_MAX;
int32_t t88 = -96;
int32_t x361 = 504819;
int8_t x367 = 1;
int32_t x371 = INT32_MIN;
int64_t x374 = -42682957LL;
static uint64_t x375 = UINT64_MAX;
static int32_t x378 = INT32_MIN;
int32_t x383 = 58310;
int8_t x384 = -23;
uint8_t x390 = 89U;
uint32_t x394 = 181540U;


void f0(void) {
	volatile int8_t x1 = -1;
	static uint8_t x2 = UINT8_MAX;
	int32_t x3 = -1;
	int64_t x4 = -1LL;

	t0 = (((x1<x2)==x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 62;
	static int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 27657270LL;

	t1 = (((x5<x6)==x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MAX;
	static int64_t x11 = -1LL;
	int8_t x12 = -1;
	int32_t t2 = -3019371;

	t2 = (((x9<x10)==x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static volatile int64_t x14 = -747360198317448LL;
	int32_t x15 = 0;
	volatile int32_t t3 = 22151738;

	t3 = (((x13<x14)==x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 0LL;
	volatile uint32_t x19 = 83002662U;
	volatile int8_t x20 = -1;
	int32_t t4 = -1;

	t4 = (((x17<x18)==x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int8_t x23 = -19;
	static int8_t x24 = 5;
	volatile int32_t t5 = 3627;

	t5 = (((x21<x22)==x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = -591591952716219366LL;
	volatile int32_t t6 = -7287504;

	t6 = (((x25<x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x30 = -1;
	int32_t t7 = 365468;

	t7 = (((x29<x30)==x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 866;
	static int64_t x34 = -40485725673789344LL;
	volatile uint8_t x35 = 48U;
	static int16_t x36 = -654;
	int32_t t8 = 250368592;

	t8 = (((x33<x34)==x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 10863;
	volatile int8_t x38 = INT8_MAX;
	int16_t x39 = 10;
	int8_t x40 = -1;
	int32_t t9 = 56193;

	t9 = (((x37<x38)==x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -8;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 329201453LLU;
	uint64_t t10 = 9155593186949LLU;

	t10 = (((x41<x42)==x43)&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MAX;
	static uint32_t x48 = 14U;

	t11 = (((x45<x46)==x47)&x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int8_t x51 = -1;

	t12 = (((x49<x50)==x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MAX;
	volatile int8_t x55 = -1;
	volatile int64_t t13 = -337LL;

	t13 = (((x53<x54)==x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	volatile int64_t x58 = 1721686LL;
	int8_t x59 = INT8_MAX;
	uint64_t x60 = 11262301LLU;
	volatile uint64_t t14 = 3737364046459376LLU;

	t14 = (((x57<x58)==x59)&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 57;
	uint64_t x62 = UINT64_MAX;
	static volatile int16_t x63 = -1;
	static uint16_t x64 = 4761U;
	volatile int32_t t15 = -699378;

	t15 = (((x61<x62)==x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 1;
	int16_t x66 = -1;
	int8_t x67 = INT8_MIN;
	static volatile int8_t x68 = -1;
	int32_t t16 = -10762000;

	t16 = (((x65<x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	static int8_t x72 = INT8_MIN;

	t17 = (((x69<x70)==x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = 0;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 31391966U;

	t18 = (((x73<x74)==x75)&x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static uint8_t x79 = 19U;
	int8_t x80 = -1;

	t19 = (((x77<x78)==x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 41308LL;
	uint64_t x84 = 1LLU;
	volatile uint64_t t20 = 363416857259946107LLU;

	t20 = (((x81<x82)==x83)&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 1LL;
	int16_t x86 = 11217;
	int32_t x87 = INT32_MIN;
	static volatile int64_t x88 = -1LL;
	static int64_t t21 = -75LL;

	t21 = (((x85<x86)==x87)&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -12899;
	volatile int64_t x92 = -2LL;
	volatile int64_t t22 = 3721101773975973LL;

	t22 = (((x89<x90)==x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -4LL;
	volatile int32_t x95 = INT32_MAX;

	t23 = (((x93<x94)==x95)&x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 3665U;
	static int32_t x98 = -5899923;
	static int16_t x99 = INT16_MIN;
	uint8_t x100 = 9U;
	int32_t t24 = 33295334;

	t24 = (((x97<x98)==x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 29U;
	int64_t x103 = -3639571979518593641LL;
	int32_t t25 = 58919;

	t25 = (((x101<x102)==x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -382;
	volatile int32_t x107 = INT32_MAX;
	static volatile uint32_t t26 = 644U;

	t26 = (((x105<x106)==x107)&x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = INT64_MAX;
	int8_t x111 = INT8_MIN;
	static volatile uint8_t x112 = 2U;
	volatile int32_t t27 = -1;

	t27 = (((x109<x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	static uint8_t x115 = 8U;
	uint8_t x116 = 8U;
	int32_t t28 = -90715;

	t28 = (((x113<x114)==x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int64_t x118 = 0LL;
	static volatile uint32_t x120 = 4U;
	uint32_t t29 = 1009368399U;

	t29 = (((x117<x118)==x119)&x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = -21786324716397LL;
	int8_t x123 = -7;
	int16_t x124 = INT16_MIN;

	t30 = (((x121<x122)==x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 1315;
	uint16_t x126 = 1U;
	volatile int64_t x127 = INT64_MAX;
	int64_t t31 = -60226978328708LL;

	t31 = (((x125<x126)==x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = -1;
	static int8_t x132 = 0;

	t32 = (((x129<x130)==x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 3818447895081547LLU;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t t33 = -15;

	t33 = (((x133<x134)==x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 6764754LLU;
	volatile uint8_t x139 = 33U;
	int64_t x140 = INT64_MAX;
	static int64_t t34 = -630LL;

	t34 = (((x137<x138)==x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;

	t35 = (((x141<x142)==x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	static int8_t x148 = -1;
	int32_t t36 = -1;

	t36 = (((x145<x146)==x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 855934LLU;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = 0;
	volatile int32_t t37 = 110;

	t37 = (((x149<x150)==x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	volatile int8_t x154 = 1;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = -11356445597551276LL;

	t38 = (((x153<x154)==x155)&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = 42U;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t39 = 64591;

	t39 = (((x157<x158)==x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 46U;
	int32_t x162 = -1865976;
	static uint16_t x163 = UINT16_MAX;
	static int32_t t40 = 1050655455;

	t40 = (((x161<x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = 0;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MAX;
	int32_t t41 = -1;

	t41 = (((x165<x166)==x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -2LL;
	static uint64_t x171 = 193120763997040LLU;
	int32_t x172 = INT32_MAX;
	int32_t t42 = -11;

	t42 = (((x169<x170)==x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = 813999548503190LL;
	int8_t x174 = -1;
	int8_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	int32_t t43 = 13410154;

	t43 = (((x173<x174)==x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 642U;
	int64_t x178 = -2068511LL;
	volatile int64_t x179 = 6320584681LL;
	uint64_t x180 = 83983LLU;

	t44 = (((x177<x178)==x179)&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 196;
	static volatile int32_t t45 = -3559;

	t45 = (((x181<x182)==x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = -132;
	int16_t x187 = -1;
	int8_t x188 = -1;

	t46 = (((x185<x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MAX;
	volatile int32_t t47 = -21485961;

	t47 = (((x189<x190)==x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 4U;
	uint64_t x195 = 4039358268729340354LLU;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t48 = 174456224U;

	t48 = (((x193<x194)==x195)&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 8U;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = -1555956;

	t49 = (((x197<x198)==x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -251600485;
	volatile uint16_t x203 = 3166U;
	int16_t x204 = 1;
	static volatile int32_t t50 = -17525;

	t50 = (((x201<x202)==x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static volatile int64_t x206 = 2841474655797696LL;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t51 = 368293162921693235LL;

	t51 = (((x205<x206)==x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = 29790338074365864LLU;
	int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 10743514;

	t52 = (((x209<x210)==x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 3U;
	int32_t t53 = 18;

	t53 = (((x213<x214)==x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = -1LL;
	static volatile int32_t x220 = INT32_MAX;
	int32_t t54 = 22322017;

	t54 = (((x217<x218)==x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -13246705891990591LL;
	int8_t x223 = INT8_MIN;
	static uint16_t x224 = 11U;
	volatile int32_t t55 = 5;

	t55 = (((x221<x222)==x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x227 = -16;
	volatile int32_t t56 = -5506290;

	t56 = (((x225<x226)==x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = UINT8_MAX;
	volatile int32_t x230 = 0;

	t57 = (((x229<x230)==x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = 1;
	int8_t x234 = -1;
	volatile int32_t x235 = -1;
	int16_t x236 = 7;
	volatile int32_t t58 = -77576;

	t58 = (((x233<x234)==x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 21812289U;
	int16_t x239 = -1;
	volatile int64_t t59 = 32184569884497265LL;

	t59 = (((x237<x238)==x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	static uint32_t x242 = 24U;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = 447948687;

	t60 = (((x241<x242)==x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	int16_t x247 = INT16_MAX;

	t61 = (((x245<x246)==x247)&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	static int32_t x252 = 901;
	int32_t t62 = 2;

	t62 = (((x249<x250)==x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 4U;
	static uint32_t x254 = 6873U;
	int64_t x255 = INT64_MIN;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -30403;

	t63 = (((x253<x254)==x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int32_t x258 = 479;
	volatile int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MAX;

	t64 = (((x257<x258)==x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -505;
	int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MIN;
	static uint32_t x264 = 489381331U;
	uint32_t t65 = 371U;

	t65 = (((x261<x262)==x263)&x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 4785283579221326167LLU;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = INT64_MIN;
	int16_t x268 = 59;
	volatile int32_t t66 = -27687;

	t66 = (((x265<x266)==x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	static int64_t x270 = INT64_MIN;
	static int64_t x271 = -4889944320180458LL;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -5;

	t67 = (((x269<x270)==x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 35U;
	uint16_t x275 = 2340U;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 833826505;

	t68 = (((x273<x274)==x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	volatile uint64_t x278 = UINT64_MAX;
	int16_t x279 = -8901;
	volatile int64_t t69 = 483332655754156018LL;

	t69 = (((x277<x278)==x279)&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	static uint8_t x282 = 1U;
	static int32_t x283 = 4895578;
	volatile uint32_t x284 = UINT32_MAX;
	volatile uint32_t t70 = 1U;

	t70 = (((x281<x282)==x283)&x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint32_t x287 = 4U;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = -149;

	t71 = (((x285<x286)==x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = 48;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = 49455507112857264LLU;

	t72 = (((x289<x290)==x291)&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x294 = 813883558U;
	static int16_t x295 = INT16_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -190950824;

	t73 = (((x293<x294)==x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 810569783972050LLU;
	int64_t x300 = 164880LL;

	t74 = (((x297<x298)==x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -2633;
	uint16_t x303 = 2U;
	uint32_t x304 = 5033493U;
	volatile uint32_t t75 = 67U;

	t75 = (((x301<x302)==x303)&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int32_t x306 = 12603293;
	int16_t x307 = INT16_MAX;
	volatile int8_t x308 = -1;

	t76 = (((x305<x306)==x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x309 = INT32_MIN;
	uint16_t x310 = 13U;
	static uint32_t x311 = 1178U;
	int64_t x312 = -125836037LL;
	volatile int64_t t77 = 334275321102747LL;

	t77 = (((x309<x310)==x311)&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 616902843U;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = 9;
	int32_t t78 = 1519;

	t78 = (((x313<x314)==x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = UINT16_MAX;
	uint32_t x318 = 4272U;
	static int32_t x319 = INT32_MAX;
	static int8_t x320 = -1;
	volatile int32_t t79 = 0;

	t79 = (((x317<x318)==x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = -35655643;

	t80 = (((x321<x322)==x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 670159218058LLU;
	volatile int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	static int32_t t81 = -1559;

	t81 = (((x325<x326)==x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 8U;
	uint64_t x332 = 1273945LLU;
	volatile uint64_t t82 = 933131059LLU;

	t82 = (((x329<x330)==x331)&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 240;
	uint8_t x334 = 0U;
	int32_t t83 = -1052487914;

	t83 = (((x333<x334)==x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t84 = 85053901LLU;

	t84 = (((x337<x338)==x339)&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	static int16_t x344 = INT16_MIN;
	static int32_t t85 = -1;

	t85 = (((x341<x342)==x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = 1;
	int64_t x348 = INT64_MIN;
	int64_t t86 = -238668712756212663LL;

	t86 = (((x345<x346)==x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int32_t x350 = INT32_MAX;
	int8_t x351 = -37;
	uint16_t x352 = 9635U;
	int32_t t87 = 397666;

	t87 = (((x349<x350)==x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = 26770;

	t88 = (((x353<x354)==x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = UINT64_MAX;
	volatile int8_t x359 = INT8_MIN;
	static int8_t x360 = 1;
	int32_t t89 = -971107;

	t89 = (((x357<x358)==x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = 4;
	uint32_t x363 = 189U;
	int64_t x364 = -1LL;
	volatile int64_t t90 = -661416250093574789LL;

	t90 = (((x361<x362)==x363)&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -193553262486LL;
	int8_t x366 = -18;
	static int64_t x368 = 137560785632672LL;
	static int64_t t91 = 671632LL;

	t91 = (((x365<x366)==x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	uint16_t x370 = 397U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -97383605245647LL;

	t92 = (((x369<x370)==x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 3U;
	int32_t x376 = -385;
	volatile int32_t t93 = -22;

	t93 = (((x373<x374)==x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 2U;
	volatile int16_t x379 = INT16_MIN;
	uint64_t x380 = 9374LLU;
	static uint64_t t94 = 60184048626460LLU;

	t94 = (((x377<x378)==x379)&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = 2624715;
	int32_t t95 = 9308;

	t95 = (((x381<x382)==x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = -1;
	int16_t x387 = 9;
	int32_t x388 = -536579449;
	int32_t t96 = -6;

	t96 = (((x385<x386)==x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 11U;
	int64_t x391 = 2421LL;
	uint8_t x392 = 28U;
	static int32_t t97 = -64210815;

	t97 = (((x389<x390)==x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -32852284505606049LL;
	int8_t x395 = INT8_MAX;
	static int16_t x396 = -1;
	static int32_t t98 = 24292574;

	t98 = (((x393<x394)==x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 3U;
	int32_t x398 = INT32_MAX;
	uint8_t x399 = 9U;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -7000732;

	t99 = (((x397<x398)==x399)&x400);

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

