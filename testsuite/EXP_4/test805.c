#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MAX;
int64_t t2 = INT64_MAX;
static volatile int16_t x15 = 2902;
static int16_t x16 = 1;
volatile uint16_t x18 = 2U;
int32_t x28 = 420249;
int32_t x33 = -1;
static volatile int32_t t8 = 653349550;
volatile int8_t x40 = INT8_MAX;
volatile uint64_t t9 = UINT64_MAX;
uint64_t x47 = 3LLU;
int8_t x53 = INT8_MAX;
int8_t x54 = -2;
uint32_t x62 = UINT32_MAX;
volatile int32_t t19 = 15;
int32_t x81 = 1101;
static int32_t t20 = -230693710;
int64_t x99 = INT64_MIN;
volatile int32_t t24 = INT32_MAX;
int32_t x103 = -1;
static uint64_t x105 = 6494LLU;
volatile uint64_t x110 = UINT64_MAX;
int64_t x114 = 532962883985LL;
static int16_t x115 = -1;
static int64_t x120 = -961545894LL;
int16_t x122 = INT16_MIN;
int32_t t30 = 42;
static int32_t x127 = INT32_MIN;
uint64_t x132 = 1103179990931LLU;
uint32_t x136 = UINT32_MAX;
int16_t x139 = -1708;
static int16_t x145 = -1;
static int64_t x146 = INT64_MIN;
int32_t x164 = 1648093;
int64_t x165 = INT64_MIN;
static int64_t t41 = INT64_MIN;
int16_t x172 = 21;
uint64_t x173 = UINT64_MAX;
static int16_t x181 = 3;
static uint16_t x183 = UINT16_MAX;
int32_t x184 = -221452;
uint32_t x192 = 15783012U;
static int16_t x193 = INT16_MIN;
static volatile int32_t t48 = -377;
static uint64_t x197 = UINT64_MAX;
static volatile int32_t x202 = -1;
int64_t x209 = INT64_MAX;
uint64_t x211 = 1LLU;
volatile uint32_t x215 = UINT32_MAX;
int64_t x232 = INT64_MIN;
static volatile int8_t x237 = -1;
int16_t x242 = -199;
static volatile uint16_t x244 = 19387U;
volatile int8_t x252 = INT8_MIN;
int8_t x253 = -23;
volatile int8_t x257 = 34;
uint8_t x266 = UINT8_MAX;
int32_t t65 = -146000127;
volatile int64_t x269 = INT64_MIN;
int16_t x272 = INT16_MIN;
static uint32_t x274 = 1637268U;
static uint32_t x276 = UINT32_MAX;
uint16_t x279 = 210U;
uint32_t x280 = 2U;
static volatile int32_t x284 = INT32_MIN;
int64_t x286 = INT64_MIN;
int32_t x287 = -67859683;
int64_t t70 = -10993336801004LL;
volatile int32_t x292 = INT32_MIN;
volatile int32_t t71 = -4;
int8_t x295 = INT8_MIN;
uint8_t x296 = 28U;
int16_t x298 = -1;
int32_t x300 = INT32_MIN;
static volatile int64_t t73 = INT64_MIN;
static int32_t t76 = 40176650;
uint8_t x313 = 2U;
volatile int32_t t77 = 1;
uint64_t x319 = UINT64_MAX;
int8_t x320 = 16;
uint16_t x323 = 1U;
static volatile int32_t x324 = INT32_MIN;
int8_t x329 = -1;
uint16_t x333 = UINT16_MAX;
static int8_t x336 = -1;
int8_t x339 = INT8_MIN;
volatile uint16_t x342 = UINT16_MAX;
volatile int32_t x348 = -1;
volatile int64_t x352 = INT64_MAX;
int16_t x356 = INT16_MIN;
volatile int32_t t87 = INT32_MAX;
int64_t x358 = -107842432445LL;
uint16_t x371 = 459U;
volatile int8_t x377 = INT8_MIN;
int64_t x380 = -15671230138068LL;
int8_t x390 = INT8_MAX;
static int16_t x391 = -2792;
static int16_t x392 = 7705;
int32_t x398 = -1;
static volatile int32_t t99 = 4300941;


void f0(void) {
	uint8_t x1 = 2U;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	uint32_t x4 = 1005617U;
	int32_t t0 = 13751635;

	t0 = (x1|(x2<=(x3%x4)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MIN;
	uint8_t x7 = 4U;
	static int32_t x8 = -1;
	int32_t t1 = INT32_MAX;

	t1 = (x5|(x6<=(x7%x8)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int8_t x10 = INT8_MAX;
	static volatile int16_t x11 = 1934;

	t2 = (x9|(x10<=(x11%x12)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 1907455207605LLU;
	uint16_t x14 = 33U;
	uint64_t t3 = 3184866867445LLU;

	t3 = (x13|(x14<=(x15%x16)));

	if (t3 != 1907455207605LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 3311;
	volatile uint16_t x19 = 4523U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 1855;

	t4 = (x17|(x18<=(x19%x20)));

	if (t4 != 3311) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	int16_t x22 = -148;
	uint32_t x23 = 1475709303U;
	int16_t x24 = -1;
	int32_t t5 = 467;

	t5 = (x21|(x22<=(x23%x24)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	static int64_t x27 = 4238593LL;
	volatile int32_t t6 = -30941136;

	t6 = (x25|(x26<=(x27%x28)));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MAX;
	volatile int16_t x32 = INT16_MIN;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29|(x30<=(x31%x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MAX;
	int8_t x35 = 36;
	int64_t x36 = INT64_MAX;

	t8 = (x33|(x34<=(x35%x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = -1;
	int16_t x39 = -7;

	t9 = (x37|(x38<=(x39%x40)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 56582408U;
	int32_t x42 = INT32_MIN;
	static uint32_t x43 = 680U;
	uint64_t x44 = UINT64_MAX;
	uint32_t t10 = 14034952U;

	t10 = (x41|(x42<=(x43%x44)));

	if (t10 != 56582408U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	static int32_t x48 = INT32_MAX;
	int32_t t11 = 3496;

	t11 = (x45|(x46<=(x47%x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static uint16_t x50 = UINT16_MAX;
	volatile int32_t x51 = INT32_MAX;
	int16_t x52 = 469;
	int32_t t12 = 3390612;

	t12 = (x49|(x50<=(x51%x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -572;
	uint64_t x56 = 39613LLU;
	volatile int32_t t13 = -111590386;

	t13 = (x53|(x54<=(x55%x56)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -2001;
	int64_t x58 = -1LL;
	volatile int16_t x59 = INT16_MIN;
	static int32_t x60 = 32663;
	static int32_t t14 = 4332;

	t14 = (x57|(x58<=(x59%x60)));

	if (t14 != -2001) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x63 = -1;
	uint32_t x64 = 1013U;
	volatile int32_t t15 = -2936686;

	t15 = (x61|(x62<=(x63%x64)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int8_t x66 = -13;
	static int8_t x67 = -1;
	static uint16_t x68 = 393U;
	int32_t t16 = -6043;

	t16 = (x65|(x66<=(x67%x68)));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 23U;
	static int32_t x70 = -738138;
	int8_t x71 = INT8_MAX;
	int16_t x72 = -1;
	volatile int32_t t17 = -13579409;

	t17 = (x69|(x70<=(x71%x72)));

	if (t17 != 23) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 550621LL;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 119447227U;
	int64_t x76 = -971112LL;
	volatile int64_t t18 = -4358781768836999LL;

	t18 = (x73|(x74<=(x75%x76)));

	if (t18 != 550621LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	static uint8_t x80 = 103U;

	t19 = (x77|(x78<=(x79%x80)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 95U;
	uint8_t x83 = 6U;
	int16_t x84 = INT16_MAX;

	t20 = (x81|(x82<=(x83%x84)));

	if (t20 != 1101) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = 83;
	int32_t x88 = INT32_MIN;
	static int32_t t21 = 0;

	t21 = (x85|(x86<=(x87%x88)));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	int64_t x90 = -1035095364692LL;
	int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 2079098;

	t22 = (x89|(x90<=(x91%x92)));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 4U;
	int64_t x94 = 10067335980LL;
	uint32_t x95 = 1U;
	volatile uint8_t x96 = UINT8_MAX;
	uint32_t t23 = 1141267664U;

	t23 = (x93|(x94<=(x95%x96)));

	if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MAX;
	volatile int32_t x100 = -1;

	t24 = (x97|(x98<=(x99%x100)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -243458;

	t25 = (x101|(x102<=(x103%x104)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MAX;
	int64_t x108 = INT64_MIN;
	volatile uint64_t t26 = 55935643260482LLU;

	t26 = (x105|(x106<=(x107%x108)));

	if (t26 != 6494LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = -252;
	uint64_t x111 = 435LLU;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -224;

	t27 = (x109|(x110<=(x111%x112)));

	if (t27 != -252) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static uint32_t x116 = 257861422U;
	int32_t t28 = INT32_MAX;

	t28 = (x113|(x114<=(x115%x116)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = -1;
	int32_t x118 = INT32_MIN;
	static int8_t x119 = 0;
	int32_t t29 = -9840;

	t29 = (x117|(x118<=(x119%x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int32_t x123 = INT32_MIN;
	volatile int32_t x124 = -1;

	t30 = (x121|(x122<=(x123%x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	volatile uint16_t x126 = 1U;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = -1134696;

	t31 = (x125|(x126<=(x127%x128)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -29;
	uint16_t x130 = UINT16_MAX;
	volatile uint32_t x131 = 2141427202U;
	int32_t t32 = -210;

	t32 = (x129|(x130<=(x131%x132)));

	if (t32 != -29) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 24U;
	int64_t x134 = -1LL;
	int32_t x135 = INT32_MIN;
	uint32_t t33 = 34U;

	t33 = (x133|(x134<=(x135%x136)));

	if (t33 != 25U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	static int16_t x138 = 5;
	int32_t x140 = INT32_MIN;
	int64_t t34 = 216885LL;

	t34 = (x137|(x138<=(x139%x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = INT8_MAX;
	static int16_t x143 = 0;
	uint32_t x144 = 11570945U;
	static volatile int64_t t35 = INT64_MIN;

	t35 = (x141|(x142<=(x143%x144)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = INT32_MIN;
	int64_t x148 = 27782276LL;
	int32_t t36 = -1;

	t36 = (x145|(x146<=(x147%x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = INT16_MIN;
	static volatile int64_t x152 = 8167565410LL;
	int32_t t37 = 395972;

	t37 = (x149|(x150<=(x151%x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	uint16_t x154 = 21U;
	volatile uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 0;

	t38 = (x153|(x154<=(x155%x156)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = 12;
	uint16_t x159 = 95U;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x157|(x158<=(x159%x160)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1453U;
	int16_t x162 = INT16_MIN;
	static int8_t x163 = -1;
	volatile int32_t t40 = 4;

	t40 = (x161|(x162<=(x163%x164)));

	if (t40 != 1453) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MAX;
	uint32_t x167 = 434667771U;
	uint32_t x168 = 345632U;

	t41 = (x165|(x166<=(x167%x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static volatile uint16_t x170 = 2076U;
	int32_t x171 = -1;
	static int32_t t42 = 47091;

	t42 = (x169|(x170<=(x171%x172)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = -1LL;
	int64_t x175 = 2020474486361921LL;
	int64_t x176 = INT64_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = (x173|(x174<=(x175%x176)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = 0;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t x180 = 211712438;
	volatile int32_t t44 = -50;

	t44 = (x177|(x178<=(x179%x180)));

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x182 = INT32_MIN;
	volatile int32_t t45 = -5470;

	t45 = (x181|(x182<=(x183%x184)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 960476645791797375LLU;
	uint16_t x186 = 1237U;
	static volatile int64_t x187 = -15201631087060331LL;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t46 = 104778830550225LLU;

	t46 = (x185|(x186<=(x187%x188)));

	if (t46 != 960476645791797375LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 49U;
	static uint32_t x190 = UINT32_MAX;
	volatile int16_t x191 = -11911;
	int32_t t47 = -8;

	t47 = (x189|(x190<=(x191%x192)));

	if (t47 != 49) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = -44;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

	t48 = (x193|(x194<=(x195%x196)));

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 10U;
	int64_t x199 = INT64_MAX;
	uint16_t x200 = 3U;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197|(x198<=(x199%x200)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	uint16_t x203 = 164U;
	uint32_t x204 = UINT32_MAX;
	uint32_t t50 = UINT32_MAX;

	t50 = (x201|(x202<=(x203%x204)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = 2;
	volatile uint8_t x208 = 113U;
	volatile int32_t t51 = -1171177;

	t51 = (x205|(x206<=(x207%x208)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = INT32_MAX;
	uint8_t x212 = UINT8_MAX;
	int64_t t52 = INT64_MAX;

	t52 = (x209|(x210<=(x211%x212)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint16_t x214 = 3658U;
	int64_t x216 = INT64_MAX;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (x213|(x214<=(x215%x216)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -23565;
	int64_t x222 = INT64_MAX;
	volatile int8_t x223 = 20;
	static uint16_t x224 = 13U;
	volatile int32_t t54 = 121352763;

	t54 = (x221|(x222<=(x223%x224)));

	if (t54 != -23565) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	static int32_t x226 = -23;
	int32_t x227 = 29;
	uint64_t x228 = 1833LLU;
	int64_t t55 = INT64_MIN;

	t55 = (x225|(x226<=(x227%x228)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = UINT32_MAX;
	volatile uint32_t x231 = 3530248U;
	volatile int32_t t56 = -83745;

	t56 = (x229|(x230<=(x231%x232)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t57 = 5;

	t57 = (x233|(x234<=(x235%x236)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x238 = 90;
	int16_t x239 = INT16_MIN;
	volatile int16_t x240 = -113;
	volatile int32_t t58 = -5787;

	t58 = (x237|(x238<=(x239%x240)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MAX;
	static int32_t x243 = -247135;
	volatile int32_t t59 = -395;

	t59 = (x241|(x242<=(x243%x244)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -1;
	static int32_t x246 = INT32_MIN;
	int32_t x247 = -224270;
	int8_t x248 = -1;
	volatile int32_t t60 = -59033;

	t60 = (x245|(x246<=(x247%x248)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = 0U;
	static volatile int32_t t61 = 3256924;

	t61 = (x249|(x250<=(x251%x252)));

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x254 = 13U;
	int64_t x255 = 172890LL;
	int16_t x256 = -15;
	int32_t t62 = 14819969;

	t62 = (x253|(x254<=(x255%x256)));

	if (t62 != -23) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x258 = 0;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 931503LLU;
	static volatile int32_t t63 = -4;

	t63 = (x257|(x258<=(x259%x260)));

	if (t63 != 35) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MAX;
	int8_t x263 = 53;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x261|(x262<=(x263%x264)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	static uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;

	t65 = (x265|(x266<=(x267%x268)));

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x270 = -1;
	static volatile uint32_t x271 = UINT32_MAX;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x269|(x270<=(x271%x272)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 12U;
	uint8_t x275 = UINT8_MAX;
	static volatile int32_t t67 = -400349488;

	t67 = (x273|(x274<=(x275%x276)));

	if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	static uint16_t x278 = UINT16_MAX;
	volatile int32_t t68 = 3635;

	t68 = (x277|(x278<=(x279%x280)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 5427767U;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MIN;
	uint32_t t69 = 1388071U;

	t69 = (x281|(x282<=(x283%x284)));

	if (t69 != 5427767U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x285 = 400633464LL;
	volatile int16_t x288 = INT16_MAX;

	t70 = (x285|(x286<=(x287%x288)));

	if (t70 != 400633465LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = -15;

	t71 = (x289|(x290<=(x291%x292)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x293 = -1LL;
	uint8_t x294 = UINT8_MAX;
	volatile int64_t t72 = -10252941LL;

	t72 = (x293|(x294<=(x295%x296)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x299 = 25494035U;

	t73 = (x297|(x298<=(x299%x300)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 8;
	uint32_t x302 = UINT32_MAX;
	static int8_t x303 = 1;
	volatile uint16_t x304 = 8U;
	int32_t t74 = 53;

	t74 = (x301|(x302<=(x303%x304)));

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = -1;
	static volatile uint16_t x306 = UINT16_MAX;
	uint32_t x307 = 342393422U;
	int32_t x308 = 18170;
	volatile int32_t t75 = -87431;

	t75 = (x305|(x306<=(x307%x308)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = INT8_MAX;
	static uint64_t x310 = 160314271LLU;
	uint8_t x311 = UINT8_MAX;
	static uint16_t x312 = 70U;

	t76 = (x309|(x310<=(x311%x312)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x314 = 400580662U;
	static int8_t x315 = 14;
	static uint8_t x316 = 35U;

	t77 = (x313|(x314<=(x315%x316)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = 716624;
	int32_t t78 = INT32_MIN;

	t78 = (x317|(x318<=(x319%x320)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	static int32_t t79 = 0;

	t79 = (x321|(x322<=(x323%x324)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	static int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = 2573U;
	volatile int64_t t80 = INT64_MIN;

	t80 = (x325|(x326<=(x327%x328)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x330 = INT64_MAX;
	int64_t x331 = -1LL;
	static int32_t x332 = -1;
	volatile int32_t t81 = 145800998;

	t81 = (x329|(x330<=(x331%x332)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = INT64_MIN;
	uint16_t x335 = 178U;
	int32_t t82 = 1;

	t82 = (x333|(x334<=(x335%x336)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MAX;
	volatile int32_t x340 = 7736;
	int32_t t83 = INT32_MIN;

	t83 = (x337|(x338<=(x339%x340)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile uint64_t x343 = 10597397217398LLU;
	int16_t x344 = -1;
	volatile int32_t t84 = -398107450;

	t84 = (x341|(x342<=(x343%x344)));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = INT16_MAX;
	volatile uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = INT64_MIN;
	int32_t t85 = 205718;

	t85 = (x345|(x346<=(x347%x348)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x349 = UINT32_MAX;
	volatile uint16_t x350 = 30U;
	int8_t x351 = -1;
	uint32_t t86 = UINT32_MAX;

	t86 = (x349|(x350<=(x351%x352)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MAX;
	static uint64_t x354 = 63499136LLU;
	int32_t x355 = -1;

	t87 = (x353|(x354<=(x355%x356)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -1LL;
	volatile uint32_t x359 = 477955845U;
	int8_t x360 = -1;
	volatile int64_t t88 = -454LL;

	t88 = (x357|(x358<=(x359%x360)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = -19;
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	static volatile uint64_t x364 = UINT64_MAX;
	int32_t t89 = 168259;

	t89 = (x361|(x362<=(x363%x364)));

	if (t89 != -19) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = -1LL;
	int16_t x366 = 1;
	static int8_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile int64_t t90 = 48489LL;

	t90 = (x365|(x366<=(x367%x368)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 19214U;
	int16_t x372 = INT16_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x369|(x370<=(x371%x372)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = -6;
	int64_t x374 = INT64_MAX;
	uint64_t x375 = 159337546LLU;
	uint64_t x376 = 3647670LLU;
	static int32_t t92 = 151345;

	t92 = (x373|(x374<=(x375%x376)));

	if (t92 != -6) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x378 = INT64_MAX;
	int8_t x379 = -1;
	int32_t t93 = -2417;

	t93 = (x377|(x378<=(x379%x380)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x381 = 2U;
	int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t94 = -323;

	t94 = (x381|(x382<=(x383%x384)));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = 2661LL;
	int16_t x386 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MIN;
	static volatile int64_t t95 = 146371943249659LL;

	t95 = (x385|(x386<=(x387%x388)));

	if (t95 != 2661LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MAX;
	int32_t t96 = 5030;

	t96 = (x389|(x390<=(x391%x392)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = 30;
	int16_t x395 = INT16_MAX;
	volatile int32_t x396 = 425;
	volatile int32_t t97 = -520943;

	t97 = (x393|(x394<=(x395%x396)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x397 = INT32_MIN;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	int32_t t98 = INT32_MIN;

	t98 = (x397|(x398<=(x399%x400)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = INT16_MIN;
	static uint8_t x402 = UINT8_MAX;
	int8_t x403 = -1;
	static int64_t x404 = -1LL;

	t99 = (x401|(x402<=(x403%x404)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

