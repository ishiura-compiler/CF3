#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 23;
static volatile uint16_t x3 = 3174U;
int64_t t0 = 12348447LL;
int64_t x5 = INT64_MIN;
uint64_t x16 = UINT64_MAX;
static volatile uint64_t t3 = 190251778233LLU;
uint16_t x17 = 29303U;
int16_t x20 = 1;
volatile int32_t t4 = -1014144;
static volatile int8_t x23 = -1;
int8_t x28 = -1;
uint32_t x33 = 410U;
volatile uint32_t t8 = 3U;
static int32_t x38 = 40162;
int64_t t9 = -1LL;
volatile int32_t x41 = 14458;
int16_t x48 = INT16_MAX;
volatile uint16_t x51 = 31276U;
volatile uint64_t x54 = 8999801LLU;
static volatile int16_t x55 = -340;
int64_t t14 = 1631LL;
static volatile uint64_t t15 = 98142LLU;
uint16_t x66 = 1U;
int16_t x72 = INT16_MIN;
static int64_t x74 = INT64_MIN;
volatile uint64_t t19 = 1022682691356020LLU;
volatile int16_t x83 = 12083;
static int16_t x84 = 1654;
volatile uint32_t x89 = 202344U;
volatile uint8_t x90 = UINT8_MAX;
int8_t x96 = INT8_MIN;
static int8_t x122 = -2;
int16_t x129 = -1;
static volatile uint8_t x131 = 126U;
volatile int32_t t32 = 1193085;
int64_t x135 = -1LL;
int64_t t33 = 29902283LL;
static int8_t x137 = -1;
uint8_t x138 = 24U;
volatile int64_t x140 = -163947343337136929LL;
int8_t x145 = -1;
uint16_t x151 = 17294U;
static volatile uint64_t t37 = 263935422LLU;
static int16_t x155 = INT16_MIN;
int8_t x159 = INT8_MIN;
volatile int64_t x162 = INT64_MIN;
volatile int64_t x163 = INT64_MAX;
volatile int64_t t41 = INT64_MIN;
volatile uint64_t t42 = 53269916491626238LLU;
int64_t x175 = INT64_MAX;
static int16_t x176 = -79;
volatile int8_t x195 = -1;
int64_t x196 = 66060574339339642LL;
volatile int8_t x201 = INT8_MAX;
static int32_t x203 = 10;
int8_t x204 = -33;
int32_t t50 = -1;
uint8_t x218 = 1U;
static int64_t x219 = INT64_MIN;
static int64_t x225 = 1403978708LL;
uint64_t x226 = 43LLU;
uint64_t x234 = UINT64_MAX;
volatile int32_t x250 = INT32_MIN;
uint16_t x252 = 3539U;
int32_t x254 = INT32_MIN;
uint16_t x260 = UINT16_MAX;
int64_t t65 = -16553284353009176LL;
uint64_t x277 = UINT64_MAX;
int32_t x288 = -1;
int64_t x290 = -225020LL;
int32_t x291 = INT32_MAX;
volatile int64_t t69 = -3667635364LL;
int32_t x293 = INT32_MIN;
uint64_t x297 = 10335512514LLU;
int8_t x298 = INT8_MIN;
volatile int16_t x299 = INT16_MIN;
uint64_t t71 = 16492003LLU;
int8_t x302 = -1;
int32_t x303 = -1;
uint64_t x304 = UINT64_MAX;
uint64_t t72 = 13LLU;
volatile int32_t x307 = INT32_MIN;
uint32_t x308 = 768015U;
int32_t t74 = 0;
int16_t x315 = INT16_MAX;
volatile int16_t x320 = -6031;
uint8_t x328 = 6U;
int16_t x335 = 468;
volatile uint8_t x337 = 2U;
static int8_t x338 = INT8_MIN;
volatile int64_t x343 = INT64_MIN;
int16_t x345 = INT16_MIN;
int32_t x347 = -1;
int32_t t83 = 1;
volatile int64_t x354 = INT64_MIN;
int16_t x356 = -22;
int64_t t86 = INT64_MIN;
int32_t x375 = INT32_MAX;
int64_t x376 = INT64_MIN;
volatile int64_t t90 = 870LL;
volatile uint64_t t91 = 297219128033729LLU;
uint32_t x386 = 271318U;
uint32_t x392 = 16135877U;
volatile int64_t t93 = 122242LL;
int16_t x393 = INT16_MAX;
static uint64_t x411 = 83LLU;
int64_t x412 = 97209803LL;
int32_t x414 = -1;


void f0(void) {
	int16_t x1 = -6408;
	int64_t x4 = INT64_MAX;

	t0 = ((x1|(x2/x3))&x4);

	if (t0 != 9223372036854769400LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 4;
	int64_t x7 = 243532570712333011LL;
	static uint8_t x8 = 5U;
	volatile int64_t t1 = -3064LL;

	t1 = ((x5|(x6/x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	volatile int16_t x10 = 34;
	int8_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = ((x9|(x10/x11))&x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 0U;
	volatile int32_t x14 = INT32_MAX;
	volatile uint64_t x15 = 66388989144759LLU;

	t3 = ((x13|(x14/x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	static int32_t x19 = -965291248;

	t4 = ((x17|(x18/x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 1183U;
	int16_t x22 = -1;
	int16_t x24 = INT16_MIN;
	uint32_t t5 = 79U;

	t5 = ((x21|(x22/x23))&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -30;
	uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 2U;
	static uint32_t t6 = UINT32_MAX;

	t6 = ((x25|(x26/x27))&x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	uint64_t x30 = 87014552351031820LLU;
	uint32_t x31 = 333336U;
	int16_t x32 = 606;
	volatile uint64_t t7 = 416686541LLU;

	t7 = ((x29|(x30/x31))&x32);

	if (t7 != 592LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = -942011;
	uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = INT32_MIN;

	t8 = ((x33|(x34/x35))&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	uint16_t x39 = 50U;
	int32_t x40 = INT32_MIN;

	t9 = ((x37|(x38/x39))&x40);

	if (t9 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MIN;
	static int32_t x43 = INT32_MAX;
	int64_t x44 = -1LL;
	volatile int64_t t10 = 28834207651484878LL;

	t10 = ((x41|(x42/x43))&x44);

	if (t10 != 14458LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = 130819589;
	int16_t x47 = INT16_MAX;
	static volatile int32_t t11 = 412192;

	t11 = ((x45|(x46/x47))&x48);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MAX;
	uint16_t x50 = UINT16_MAX;
	static int32_t x52 = -217;
	static volatile int32_t t12 = -77;

	t12 = ((x49|(x50/x51))&x52);

	if (t12 != 32551) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 7162764;
	int16_t x56 = 2828;
	volatile uint64_t t13 = 15645760904LLU;

	t13 = ((x53|(x54/x55))&x56);

	if (t13 != 2828LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = INT32_MIN;
	int8_t x59 = -3;
	uint8_t x60 = 4U;

	t14 = ((x57|(x58/x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 69U;
	uint64_t x62 = 3196090725368145494LLU;
	int64_t x63 = INT64_MAX;
	uint32_t x64 = UINT32_MAX;

	t15 = ((x61|(x62/x63))&x64);

	if (t15 != 69LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static uint64_t x67 = 260948557368LLU;
	uint64_t x68 = 41785796913733LLU;
	volatile uint64_t t16 = 271353482152093206LLU;

	t16 = ((x65|(x66/x67))&x68);

	if (t16 != 41785796913733LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	uint32_t x70 = UINT32_MAX;
	static volatile int16_t x71 = -1;
	static volatile uint32_t t17 = 11U;

	t17 = ((x69|(x70/x71))&x72);

	if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int8_t x75 = 1;
	int8_t x76 = 0;
	int64_t t18 = 1LL;

	t18 = ((x73|(x74/x75))&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 38856567LLU;
	int32_t x78 = -1;
	int16_t x79 = -5080;
	int64_t x80 = INT64_MIN;

	t19 = ((x77|(x78/x79))&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 1349558696381459LLU;
	int32_t x82 = INT32_MAX;
	volatile uint64_t t20 = 1845035LLU;

	t20 = ((x81|(x82/x83))&x84);

	if (t20 != 1590LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 2;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	static uint64_t x88 = 6257579870LLU;
	volatile uint64_t t21 = 261229428LLU;

	t21 = ((x85|(x86/x87))&x88);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x91 = -14268963;
	volatile uint8_t x92 = 6U;
	uint32_t t22 = 12896U;

	t22 = ((x89|(x90/x91))&x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x94 = 2793;
	static uint8_t x95 = UINT8_MAX;
	int32_t t23 = -1679625;

	t23 = ((x93|(x94/x95))&x96);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 2565U;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 43U;
	volatile int16_t x100 = -3095;
	static volatile uint32_t t24 = 419445U;

	t24 = ((x97|(x98/x99))&x100);

	if (t24 != 49939433U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -73;
	int16_t x102 = INT16_MAX;
	int32_t x103 = -1;
	int32_t x104 = -1;
	int32_t t25 = -12;

	t25 = ((x101|(x102/x103))&x104);

	if (t25 != -73) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	int32_t x107 = 2080;
	uint8_t x108 = UINT8_MAX;
	uint64_t t26 = 288105LLU;

	t26 = ((x105|(x106/x107))&x108);

	if (t26 != 255LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = 327;
	volatile int64_t x111 = -85121687858LL;
	uint64_t x112 = 279168675491097021LLU;
	uint64_t t27 = 54677500570LLU;

	t27 = ((x109|(x110/x111))&x112);

	if (t27 != 279168675491097021LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static volatile uint64_t x114 = 10493LLU;
	static uint8_t x115 = 99U;
	volatile int8_t x116 = INT8_MAX;
	volatile uint64_t t28 = 563269382759LLU;

	t28 = ((x113|(x114/x115))&x116);

	if (t28 != 105LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 136275294011080651LLU;
	int64_t x118 = -1LL;
	volatile int64_t x119 = INT64_MAX;
	volatile int64_t x120 = INT64_MIN;
	uint64_t t29 = 7LLU;

	t29 = ((x117|(x118/x119))&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 6U;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = 454963219408LLU;
	static volatile uint64_t t30 = 21316706490LLU;

	t30 = ((x121|(x122/x123))&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int8_t x126 = INT8_MAX;
	static int32_t x127 = INT32_MIN;
	int8_t x128 = 1;
	int32_t t31 = -166585;

	t31 = ((x125|(x126/x127))&x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	int8_t x132 = INT8_MIN;

	t32 = ((x129|(x130/x131))&x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -49;
	volatile int32_t x134 = 16;
	int16_t x136 = -1;

	t33 = ((x133|(x134/x135))&x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = 4478LLU;
	volatile uint64_t t34 = 23781592436674488LLU;

	t34 = ((x137|(x138/x139))&x140);

	if (t34 != 18282796730372414687LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 7641LLU;
	static uint16_t x142 = UINT16_MAX;
	static int16_t x143 = INT16_MIN;
	volatile uint64_t x144 = UINT64_MAX;
	static uint64_t t35 = UINT64_MAX;

	t35 = ((x141|(x142/x143))&x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 174137057608204LLU;
	int8_t x147 = INT8_MAX;
	static int8_t x148 = INT8_MIN;
	static volatile uint64_t t36 = 0LLU;

	t36 = ((x145|(x146/x147))&x148);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -1LL;
	uint8_t x150 = 2U;
	uint64_t x152 = 3723080502LLU;

	t37 = ((x149|(x150/x151))&x152);

	if (t37 != 3723080502LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x153 = 6U;
	static int32_t x154 = -1;
	int64_t x156 = -1LL;
	static volatile int64_t t38 = 1782386563LL;

	t38 = ((x153|(x154/x155))&x156);

	if (t38 != 6LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -1;
	volatile uint64_t x158 = 65995999042LLU;
	int64_t x160 = 2944814447194055LL;
	uint64_t t39 = 110801104396LLU;

	t39 = ((x157|(x158/x159))&x160);

	if (t39 != 2944814447194055LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x164 = 3613U;
	int64_t t40 = 538722626LL;

	t40 = ((x161|(x162/x163))&x164);

	if (t40 != 3613LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = -14;
	static volatile uint8_t x167 = UINT8_MAX;
	int16_t x168 = INT16_MIN;

	t41 = ((x165|(x166/x167))&x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 2;
	int64_t x170 = 3LL;
	static uint64_t x171 = UINT64_MAX;
	volatile int32_t x172 = -1;

	t42 = ((x169|(x170/x171))&x172);

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MAX;
	uint32_t x174 = 58702U;
	int64_t t43 = 378810124256774095LL;

	t43 = ((x173|(x174/x175))&x176);

	if (t43 != 2147483569LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MAX;
	int16_t x179 = -11401;
	int64_t x180 = -1LL;
	int64_t t44 = 11421361594LL;

	t44 = ((x177|(x178/x179))&x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MAX;
	int16_t x183 = -4032;
	int32_t x184 = INT32_MIN;
	volatile int64_t t45 = INT64_MIN;

	t45 = ((x181|(x182/x183))&x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = -1LL;
	int32_t x187 = -31650;
	int32_t x188 = 496;
	static int64_t t46 = 1755860160LL;

	t46 = ((x185|(x186/x187))&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	volatile int32_t x190 = INT32_MAX;
	uint32_t x191 = 105U;
	static uint16_t x192 = 30U;
	static uint32_t t47 = 1U;

	t47 = ((x189|(x190/x191))&x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 871330035U;
	static int32_t x194 = 2747630;
	volatile int64_t t48 = -1871817455LL;

	t48 = ((x193|(x194/x195))&x196);

	if (t48 != 187109746LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = INT32_MAX;
	static int32_t x199 = 15;
	volatile int16_t x200 = 5251;
	int32_t t49 = -24651466;

	t49 = ((x197|(x198/x199))&x200);

	if (t49 != 5251) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = 0;

	t50 = ((x201|(x202/x203))&x204);

	if (t50 != 95) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = -1LL;
	int64_t x210 = 4LL;
	uint64_t x211 = 1059403633724731LLU;
	static uint8_t x212 = UINT8_MAX;
	static volatile uint64_t t51 = 6036528596393905847LLU;

	t51 = ((x209|(x210/x211))&x212);

	if (t51 != 255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	uint8_t x220 = 64U;
	int64_t t52 = 723594740LL;

	t52 = ((x217|(x218/x219))&x220);

	if (t52 != 64LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	uint32_t x222 = 502403U;
	uint16_t x223 = 1U;
	volatile int16_t x224 = -1;
	static uint32_t t53 = UINT32_MAX;

	t53 = ((x221|(x222/x223))&x224);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x227 = -90;
	volatile int64_t x228 = -1917760552LL;
	uint64_t t54 = 76728LLU;

	t54 = ((x225|(x226/x227))&x228);

	if (t54 != 27329488LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x229 = -3532748384667LL;
	static int8_t x230 = -1;
	static volatile int64_t x231 = INT64_MIN;
	static uint32_t x232 = 7743084U;
	volatile int64_t t55 = -114262209201LL;

	t55 = ((x229|(x230/x231))&x232);

	if (t55 != 4195940LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t56 = 121621339392LLU;

	t56 = ((x233|(x234/x235))&x236);

	if (t56 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -1LL;
	uint16_t x238 = 7U;
	static int8_t x239 = -13;
	uint64_t x240 = 11306051043757477LLU;
	uint64_t t57 = 25122616962134LLU;

	t57 = ((x237|(x238/x239))&x240);

	if (t57 != 11306051043757477LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 54070091U;
	static int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int64_t t58 = 0LL;

	t58 = ((x245|(x246/x247))&x248);

	if (t58 != 75LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 10312U;
	uint8_t x251 = UINT8_MAX;
	static volatile int32_t t59 = 11397139;

	t59 = ((x249|(x250/x251))&x252);

	if (t59 != 3520) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -1LL;
	uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 967118974U;
	volatile int64_t t60 = -8041113549795793LL;

	t60 = ((x253|(x254/x255))&x256);

	if (t60 != 967118974LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x257 = INT64_MIN;
	uint32_t x258 = 1193U;
	static int64_t x259 = INT64_MAX;
	static volatile int64_t t61 = -82844377353074234LL;

	t61 = ((x257|(x258/x259))&x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	static int64_t x262 = -29765659LL;
	int32_t x263 = -1;
	int32_t x264 = INT32_MAX;
	volatile int64_t t62 = 4055352924546907LL;

	t62 = ((x261|(x262/x263))&x264);

	if (t62 != 29765659LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	int32_t x267 = INT32_MAX;
	int16_t x268 = -1;
	static volatile int32_t t63 = -682;

	t63 = ((x265|(x266/x267))&x268);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x269 = -1LL;
	int32_t x270 = 369;
	int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	int64_t t64 = 358056625507873424LL;

	t64 = ((x269|(x270/x271))&x272);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = INT64_MIN;
	int64_t x274 = 466LL;
	static int16_t x275 = -1;
	int32_t x276 = -17;

	t65 = ((x273|(x274/x275))&x276);

	if (t65 != -466LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x278 = -511222;
	static uint16_t x279 = UINT16_MAX;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t66 = 199372953321532936LLU;

	t66 = ((x277|(x278/x279))&x280);

	if (t66 != 2147483647LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x281 = 12U;
	int64_t x282 = 886LL;
	int16_t x283 = 4;
	int8_t x284 = INT8_MAX;
	int64_t t67 = 0LL;

	t67 = ((x281|(x282/x283))&x284);

	if (t67 != 93LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MAX;
	uint32_t x286 = 117U;
	int32_t x287 = INT32_MIN;
	static uint32_t t68 = 2739U;

	t68 = ((x285|(x286/x287))&x288);

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x289 = -601;
	volatile uint16_t x292 = 26U;

	t69 = ((x289|(x290/x291))&x292);

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int64_t t70 = -53054072939787LL;

	t70 = ((x293|(x294/x295))&x296);

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x300 = 227U;

	t71 = ((x297|(x298/x299))&x300);

	if (t71 != 194LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 15LLU;

	t72 = ((x301|(x302/x303))&x304);

	if (t72 != 15LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -1;
	int16_t x306 = 42;
	volatile uint32_t t73 = 9U;

	t73 = ((x305|(x306/x307))&x308);

	if (t73 != 768015U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x310 = 3;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = -1;

	t74 = ((x309|(x310/x311))&x312);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = -1LL;
	uint8_t x314 = 24U;
	uint16_t x316 = 6076U;
	volatile int64_t t75 = -1LL;

	t75 = ((x313|(x314/x315))&x316);

	if (t75 != 6076LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -1LL;
	uint32_t x318 = 195544U;
	volatile uint8_t x319 = 47U;
	volatile int64_t t76 = -10542929679338LL;

	t76 = ((x317|(x318/x319))&x320);

	if (t76 != -6031LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = 502406966864929LL;
	volatile uint8_t x323 = 32U;
	int32_t x324 = -252618;
	volatile int64_t t77 = -110460LL;

	t77 = ((x321|(x322/x323))&x324);

	if (t77 != -260832LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x325 = UINT8_MAX;
	static int64_t x326 = 3695LL;
	static int32_t x327 = 257642;
	static volatile int64_t t78 = -2161524644565LL;

	t78 = ((x325|(x326/x327))&x328);

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = 343574U;
	int8_t x334 = 41;
	static int64_t x336 = -5LL;
	volatile int64_t t79 = -42480997847497848LL;

	t79 = ((x333|(x334/x335))&x336);

	if (t79 != 343570LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t80 = -1;

	t80 = ((x337|(x338/x339))&x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x342 = 7U;
	uint64_t x344 = 7080584490587472990LLU;
	volatile uint64_t t81 = 99586LLU;

	t81 = ((x341|(x342/x343))&x344);

	if (t81 != 7080584490587472896LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = -58618324;
	static volatile uint32_t x348 = UINT32_MAX;
	uint32_t t82 = 271U;

	t82 = ((x345|(x346/x347))&x348);

	if (t82 != 4294963668U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = INT8_MIN;
	int16_t x350 = 1;
	int32_t x351 = -1;
	int16_t x352 = INT16_MIN;

	t83 = ((x349|(x350/x351))&x352);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	uint64_t x355 = 123661033509206441LLU;
	uint64_t t84 = 794469606194632167LLU;

	t84 = ((x353|(x354/x355))&x356);

	if (t84 != 2147483626LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = -1;
	uint32_t x359 = 133697U;
	uint16_t x360 = 6U;
	uint32_t t85 = 49239U;

	t85 = ((x357|(x358/x359))&x360);

	if (t85 != 4U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = 1;
	int8_t x363 = INT8_MIN;
	static int64_t x364 = INT64_MIN;

	t86 = ((x361|(x362/x363))&x364);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	volatile int16_t x367 = INT16_MIN;
	static int32_t x368 = INT32_MIN;
	uint64_t t87 = 68LLU;

	t87 = ((x365|(x366/x367))&x368);

	if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x369 = 10717U;
	volatile int32_t x370 = -3177;
	int16_t x371 = -95;
	volatile uint64_t x372 = UINT64_MAX;
	static uint64_t t88 = 47LLU;

	t88 = ((x369|(x370/x371))&x372);

	if (t88 != 10749LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x373 = 35U;
	int8_t x374 = INT8_MIN;
	volatile int64_t t89 = 123484373958832LL;

	t89 = ((x373|(x374/x375))&x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -26699LL;
	int32_t x378 = INT32_MAX;
	uint16_t x379 = UINT16_MAX;
	static volatile int32_t x380 = INT32_MIN;

	t90 = ((x377|(x378/x379))&x380);

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = -1;
	static uint8_t x382 = 41U;
	volatile int32_t x383 = INT32_MIN;
	uint64_t x384 = 4181034331LLU;

	t91 = ((x381|(x382/x383))&x384);

	if (t91 != 4181034331LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 1U;
	int16_t x387 = 356;
	int16_t x388 = -1;
	volatile uint32_t t92 = 11021U;

	t92 = ((x385|(x386/x387))&x388);

	if (t92 != 763U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MAX;
	volatile int64_t x391 = INT64_MIN;

	t93 = ((x389|(x390/x391))&x392);

	if (t93 != 14021LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = -5128622333LL;
	int16_t x395 = -3165;
	static uint16_t x396 = 2U;
	int64_t t94 = -13741050144LL;

	t94 = ((x393|(x394/x395))&x396);

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -3552833215517380LL;
	volatile uint16_t x399 = 51U;
	int64_t x400 = INT64_MAX;
	volatile int64_t t95 = 122752232333049818LL;

	t95 = ((x397|(x398/x399))&x400);

	if (t95 != 9223302376780201983LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	static volatile uint32_t x404 = UINT32_MAX;
	volatile uint64_t t96 = 7148484LLU;

	t96 = ((x401|(x402/x403))&x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x405 = -1;
	static volatile int16_t x406 = 4;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = UINT64_MAX;
	static uint64_t t97 = UINT64_MAX;

	t97 = ((x405|(x406/x407))&x408);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x409 = 1381U;
	volatile int32_t x410 = 941365281;
	uint64_t t98 = 2LLU;

	t98 = ((x409|(x410/x411))&x412);

	if (t98 != 8981955LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x415 = INT32_MAX;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t99 = -2255234348687643LL;

	t99 = ((x413|(x414/x415))&x416);

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

