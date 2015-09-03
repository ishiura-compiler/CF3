#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = 0U;
static volatile int32_t t1 = -25979214;
volatile int32_t x20 = INT32_MAX;
static volatile int32_t t4 = INT32_MAX;
int16_t x31 = -1;
int8_t x32 = INT8_MAX;
int32_t t7 = 48127288;
int64_t x36 = -1LL;
volatile int16_t x38 = INT16_MIN;
uint64_t x40 = 37431LLU;
uint32_t x41 = UINT32_MAX;
int32_t t10 = 1011;
volatile int32_t t12 = 14372;
int16_t x56 = -1;
int32_t t15 = -18546431;
static int64_t x65 = -1LL;
int32_t x66 = 17108;
volatile int64_t t16 = 1248110LL;
static int32_t t18 = 1;
static int8_t x80 = 0;
volatile int8_t x82 = -18;
int32_t x83 = 15667000;
volatile int64_t t20 = 501024348086LL;
int16_t x86 = INT16_MIN;
int32_t x88 = INT32_MIN;
int64_t x92 = 12LL;
int8_t x94 = INT8_MAX;
int32_t t23 = -95469653;
int16_t x97 = -1;
int32_t x98 = -1;
int32_t x99 = INT32_MAX;
int32_t x101 = INT32_MIN;
volatile int8_t x104 = INT8_MIN;
static uint8_t x120 = UINT8_MAX;
volatile int16_t x121 = INT16_MAX;
int32_t x130 = -1;
int64_t x135 = INT64_MAX;
uint32_t x136 = UINT32_MAX;
volatile uint32_t t33 = UINT32_MAX;
int8_t x144 = -6;
volatile int32_t t35 = 5;
int32_t x148 = INT32_MAX;
volatile uint16_t x150 = UINT16_MAX;
static int32_t x158 = -1;
static uint8_t x160 = UINT8_MAX;
int64_t x161 = INT64_MAX;
int64_t x163 = 1382LL;
volatile int8_t x167 = -1;
volatile int32_t t42 = INT32_MAX;
int32_t x175 = -640968;
static volatile int32_t t44 = -534916352;
int16_t x182 = -75;
uint8_t x190 = 7U;
volatile int32_t t48 = -590198332;
int32_t x202 = -1;
int8_t x203 = INT8_MIN;
volatile int32_t x204 = -58162395;
int8_t x205 = INT8_MIN;
static uint64_t x207 = UINT64_MAX;
int32_t x208 = 2;
int8_t x211 = -2;
static volatile uint64_t t55 = 13159LLU;
int16_t x236 = -1;
int64_t x237 = INT64_MAX;
static int64_t x242 = -12439394074775026LL;
static uint32_t x243 = 3547U;
int32_t x245 = INT32_MAX;
int64_t x248 = INT64_MIN;
int16_t x251 = INT16_MIN;
int8_t x254 = INT8_MAX;
uint16_t x255 = UINT16_MAX;
int16_t x258 = -935;
uint64_t x259 = 1311LLU;
volatile uint32_t x260 = 1260U;
int64_t x265 = -108057830505LL;
static int8_t x266 = -1;
int32_t x270 = -3701;
volatile int32_t x273 = -1;
int32_t x274 = INT32_MAX;
int16_t x288 = INT16_MIN;
static volatile int32_t t71 = 7507;
uint32_t x289 = UINT32_MAX;
static volatile int32_t x292 = INT32_MIN;
volatile int32_t t74 = -222677;
int8_t x301 = INT8_MIN;
int32_t x312 = -1;
uint64_t x314 = 23LLU;
int32_t x315 = INT32_MIN;
volatile uint32_t x320 = 1214608U;
volatile uint32_t x324 = 7U;
volatile int32_t t80 = 1643;
int8_t x330 = -1;
int32_t x331 = 253354053;
volatile int32_t t83 = -3576919;
int16_t x347 = INT16_MIN;
volatile int32_t x349 = INT32_MIN;
volatile int64_t x352 = -26305741645LL;
uint32_t x353 = 106401629U;
static volatile int8_t x361 = INT8_MAX;
int32_t x368 = INT32_MIN;
int32_t t90 = INT32_MIN;
int8_t x373 = 0;
uint32_t x379 = 652U;
static volatile int32_t x384 = -678974722;
static uint64_t x389 = UINT64_MAX;
int8_t x395 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int64_t x2 = -1LL;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 13511981215LLU;
	volatile uint64_t t0 = 82513LLU;

	t0 = ((x1==(x2<x3))+x4);

	if (t0 != 13511981215LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 11803U;
	int8_t x8 = INT8_MIN;

	t1 = ((x5==(x6<x7))+x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint8_t x10 = 0U;
	volatile uint64_t x11 = 302465603134484LLU;
	volatile uint16_t x12 = UINT16_MAX;
	static int32_t t2 = -1985;

	t2 = ((x9==(x10<x11))+x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -28;
	uint64_t x14 = UINT64_MAX;
	static volatile int32_t x15 = 369577821;
	int16_t x16 = -1;
	volatile int32_t t3 = 114514209;

	t3 = ((x13==(x14<x15))+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int64_t x18 = INT64_MIN;
	volatile int32_t x19 = 51463418;

	t4 = ((x17==(x18<x19))+x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint32_t x22 = 638U;
	static int32_t x23 = -1;
	int64_t x24 = -74119493071779LL;
	volatile int64_t t5 = 7994719672LL;

	t5 = ((x21==(x22<x23))+x24);

	if (t5 != -74119493071779LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	static int32_t x26 = -1;
	static int32_t x27 = 2;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = ((x25==(x26<x27))+x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile uint64_t x30 = 628941LLU;

	t7 = ((x29==(x30<x31))+x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = 26;
	int8_t x35 = INT8_MAX;
	volatile int64_t t8 = -36141158438333LL;

	t8 = ((x33==(x34<x35))+x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint64_t x39 = 64795393LLU;
	uint64_t t9 = 17352710002878LLU;

	t9 = ((x37==(x38<x39))+x40);

	if (t9 != 37431LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = 14;
	static uint8_t x43 = UINT8_MAX;
	static uint16_t x44 = UINT16_MAX;

	t10 = ((x41==(x42<x43))+x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 5;
	volatile int8_t x46 = INT8_MAX;
	uint64_t x47 = 45726701LLU;
	volatile int8_t x48 = INT8_MAX;
	static int32_t t11 = -168;

	t11 = ((x45==(x46<x47))+x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 1412921231648828LLU;
	static int64_t x50 = -1LL;
	static int16_t x51 = 29;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49==(x50<x51))+x52);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 18778309U;
	int16_t x54 = -1;
	static volatile uint8_t x55 = 5U;
	static int32_t t13 = -1450;

	t13 = ((x53==(x54<x55))+x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 0;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	static volatile int16_t x60 = 15;
	int32_t t14 = 18791;

	t14 = ((x57==(x58<x59))+x60);

	if (t14 != 15) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 283U;
	uint16_t x62 = 4U;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;

	t15 = ((x61==(x62<x63))+x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x67 = 170130938847LLU;
	static int64_t x68 = 49674881288254489LL;

	t16 = ((x65==(x66<x67))+x68);

	if (t16 != 49674881288254489LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = 650;
	static uint64_t x70 = 25377LLU;
	int64_t x71 = INT64_MAX;
	static int16_t x72 = INT16_MAX;
	int32_t t17 = 123;

	t17 = ((x69==(x70<x71))+x72);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	int32_t x76 = -1;

	t18 = ((x73==(x74<x75))+x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x78 = INT16_MIN;
	static int32_t x79 = INT32_MIN;
	int32_t t19 = 399;

	t19 = ((x77==(x78<x79))+x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int64_t x84 = -43LL;

	t20 = ((x81==(x82<x83))+x84);

	if (t20 != -43LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = ((x85==(x86<x87))+x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = INT32_MAX;
	int16_t x91 = INT16_MIN;
	static int64_t t22 = -2503150853989LL;

	t22 = ((x89==(x90<x91))+x92);

	if (t22 != 12LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 3838541372866299527LL;
	uint8_t x95 = UINT8_MAX;
	static int8_t x96 = 13;

	t23 = ((x93==(x94<x95))+x96);

	if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x100 = UINT8_MAX;
	int32_t t24 = -127;

	t24 = ((x97==(x98<x99))+x100);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 9454;
	uint32_t x103 = 1919694U;
	int32_t t25 = -53126;

	t25 = ((x101==(x102<x103))+x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = 792U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = ((x105==(x106<x107))+x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	volatile uint32_t x111 = 437542U;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -159;

	t27 = ((x109==(x110<x111))+x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	int16_t x114 = -1;
	volatile uint8_t x115 = 10U;
	static int64_t x116 = INT64_MAX;
	int64_t t28 = INT64_MAX;

	t28 = ((x113==(x114<x115))+x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MAX;
	volatile int32_t t29 = -504854268;

	t29 = ((x117==(x118<x119))+x120);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	uint16_t x124 = 17454U;
	int32_t t30 = 43806;

	t30 = ((x121==(x122<x123))+x124);

	if (t30 != 17454) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 83339740215718188LLU;
	volatile int64_t x126 = 12004972LL;
	int64_t x127 = -1LL;
	int64_t x128 = -1LL;
	volatile int64_t t31 = 195717881894749961LL;

	t31 = ((x125==(x126<x127))+x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = INT32_MAX;

	t32 = ((x129==(x130<x131))+x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -36;
	uint32_t x134 = 4180015U;

	t33 = ((x133==(x134<x135))+x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1875367;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	static int32_t t34 = 26;

	t34 = ((x137==(x138<x139))+x140);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = 104U;
	static int8_t x143 = INT8_MAX;

	t35 = ((x141==(x142<x143))+x144);

	if (t35 != -6) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -42006LL;
	int32_t x146 = INT32_MIN;
	int64_t x147 = 2488LL;
	static int32_t t36 = INT32_MAX;

	t36 = ((x145==(x146<x147))+x148);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	int8_t x151 = INT8_MAX;
	static int16_t x152 = INT16_MAX;
	static volatile int32_t t37 = -16177239;

	t37 = ((x149==(x150<x151))+x152);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	volatile uint8_t x154 = 7U;
	static int32_t x155 = -1;
	int16_t x156 = -1;
	int32_t t38 = 1014;

	t38 = ((x153==(x154<x155))+x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = 1;
	int32_t x159 = 0;
	volatile int32_t t39 = -222516;

	t39 = ((x157==(x158<x159))+x160);

	if (t39 != 256) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	int32_t x164 = 500016;
	int32_t t40 = 0;

	t40 = ((x161==(x162<x163))+x164);

	if (t40 != 500016) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int64_t x166 = -1LL;
	int16_t x168 = -1;
	volatile int32_t t41 = -4456846;

	t41 = ((x165==(x166<x167))+x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = INT32_MAX;

	t42 = ((x169==(x170<x171))+x172);

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int32_t x174 = INT32_MIN;
	int8_t x176 = 25;
	int32_t t43 = 28846;

	t43 = ((x173==(x174<x175))+x176);

	if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = 42;
	int16_t x180 = INT16_MIN;

	t44 = ((x177==(x178<x179))+x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = 3196600263244LL;
	int64_t x183 = INT64_MIN;
	int8_t x184 = -1;
	volatile int32_t t45 = -2;

	t45 = ((x181==(x182<x183))+x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 712LLU;
	int16_t x186 = INT16_MAX;
	int64_t x187 = -1LL;
	static volatile int8_t x188 = INT8_MIN;
	static int32_t t46 = 22433;

	t46 = ((x185==(x186<x187))+x188);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -7209;
	uint64_t x191 = 3081140723948333LLU;
	volatile int64_t x192 = 1LL;
	volatile int64_t t47 = -223411267940615LL;

	t47 = ((x189==(x190<x191))+x192);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	static int64_t x194 = -1LL;
	volatile uint32_t x195 = 2U;
	int32_t x196 = -3349;

	t48 = ((x193==(x194<x195))+x196);

	if (t48 != -3349) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = UINT64_MAX;
	uint16_t x198 = 17U;
	int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = ((x197==(x198<x199))+x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = UINT64_MAX;
	volatile int32_t t50 = 71622;

	t50 = ((x201==(x202<x203))+x204);

	if (t50 != -58162395) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = INT8_MIN;
	static volatile int32_t t51 = -6435;

	t51 = ((x205==(x206<x207))+x208);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	uint32_t x210 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	static volatile int32_t t52 = -3890;

	t52 = ((x209==(x210<x211))+x212);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MAX;
	int16_t x214 = -12248;
	static volatile uint32_t x215 = 6896502U;
	int16_t x216 = INT16_MIN;
	static int32_t t53 = -8;

	t53 = ((x213==(x214<x215))+x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 35U;
	volatile int64_t x218 = INT64_MAX;
	uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 15U;
	int32_t t54 = 22041;

	t54 = ((x217==(x218<x219))+x220);

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 348733346LLU;
	uint8_t x222 = 60U;
	int32_t x223 = 1;
	uint64_t x224 = 14LLU;

	t55 = ((x221==(x222<x223))+x224);

	if (t55 != 14LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -16;
	static volatile int32_t x226 = 297005605;
	volatile int8_t x227 = 1;
	int32_t x228 = -2415;
	int32_t t56 = 93343;

	t56 = ((x225==(x226<x227))+x228);

	if (t56 != -2415) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 4377105738446LLU;
	volatile uint64_t t57 = 7378997924147747383LLU;

	t57 = ((x229==(x230<x231))+x232);

	if (t57 != 4377105738446LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 26370LL;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 4825;

	t58 = ((x233==(x234<x235))+x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = 45200782195LLU;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = -1LL;
	volatile int64_t t59 = -130052337725189527LL;

	t59 = ((x237==(x238<x239))+x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 32LLU;
	static int8_t x244 = 1;
	static volatile int32_t t60 = -1363;

	t60 = ((x241==(x242<x243))+x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = INT16_MIN;
	volatile int16_t x247 = -8377;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x245==(x246<x247))+x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	static volatile int64_t x250 = INT64_MAX;
	volatile uint64_t x252 = 7836865LLU;
	static volatile uint64_t t62 = 1431LLU;

	t62 = ((x249==(x250<x251))+x252);

	if (t62 != 7836865LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 6807U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 3033892;

	t63 = ((x253==(x254<x255))+x256);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	volatile uint32_t t64 = 1280U;

	t64 = ((x257==(x258<x259))+x260);

	if (t64 != 1260U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	uint16_t x262 = 660U;
	int16_t x263 = INT16_MIN;
	int64_t x264 = 360312912460LL;
	volatile int64_t t65 = -53860216616087LL;

	t65 = ((x261==(x262<x263))+x264);

	if (t65 != 360312912460LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x267 = UINT8_MAX;
	static volatile uint16_t x268 = 5U;
	static int32_t t66 = 74994035;

	t66 = ((x265==(x266<x267))+x268);

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 63;
	static volatile uint32_t x271 = 70U;
	int32_t x272 = INT32_MIN;
	int32_t t67 = INT32_MIN;

	t67 = ((x269==(x270<x271))+x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x275 = INT64_MIN;
	uint16_t x276 = 3U;
	static volatile int32_t t68 = 633659;

	t68 = ((x273==(x274<x275))+x276);

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile uint32_t x278 = 24U;
	int64_t x279 = -1LL;
	uint32_t x280 = UINT32_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = ((x277==(x278<x279))+x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	int64_t x284 = INT64_MIN;
	static int64_t t70 = INT64_MIN;

	t70 = ((x281==(x282<x283))+x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 51U;
	int32_t x287 = -1;

	t71 = ((x285==(x286<x287))+x288);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = -92;
	static uint16_t x291 = UINT16_MAX;
	int32_t t72 = INT32_MIN;

	t72 = ((x289==(x290<x291))+x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = 4442918240458431236LL;
	uint64_t x295 = UINT64_MAX;
	static uint16_t x296 = UINT16_MAX;
	static int32_t t73 = 247;

	t73 = ((x293==(x294<x295))+x296);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 0U;
	uint8_t x298 = UINT8_MAX;
	uint64_t x299 = 1363551408520704983LLU;
	int16_t x300 = -1;

	t74 = ((x297==(x298<x299))+x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 1070559651;

	t75 = ((x301==(x302<x303))+x304);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = 4363843736132LLU;
	int64_t x310 = 0LL;
	int8_t x311 = INT8_MAX;
	int32_t t76 = -1;

	t76 = ((x309==(x310<x311))+x312);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 114972714;
	int64_t x316 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x313==(x314<x315))+x316);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	static int32_t x319 = INT32_MIN;
	uint32_t t78 = 2615490U;

	t78 = ((x317==(x318<x319))+x320);

	if (t78 != 1214608U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 672645458U;
	uint16_t x322 = 11U;
	int64_t x323 = INT64_MIN;
	volatile uint32_t t79 = 4U;

	t79 = ((x321==(x322<x323))+x324);

	if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 2553332790214LLU;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = 749;
	int16_t x328 = -1106;

	t80 = ((x325==(x326<x327))+x328);

	if (t80 != -1106) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = 174LLU;
	static uint8_t x332 = UINT8_MAX;
	static volatile int32_t t81 = 234;

	t81 = ((x329==(x330<x331))+x332);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MAX;
	volatile uint16_t x334 = 1U;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t82 = 1;

	t82 = ((x333==(x334<x335))+x336);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 0U;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MAX;
	int8_t x340 = INT8_MIN;

	t83 = ((x337==(x338<x339))+x340);

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1;
	int64_t x342 = 7191370705497LL;
	volatile int8_t x343 = 18;
	uint32_t x344 = 41U;
	volatile uint32_t t84 = 296U;

	t84 = ((x341==(x342<x343))+x344);

	if (t84 != 41U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MIN;
	static uint8_t x346 = 5U;
	int64_t x348 = -29826491769298933LL;
	static int64_t t85 = 58567790188LL;

	t85 = ((x345==(x346<x347))+x348);

	if (t85 != -29826491769298933LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = INT32_MIN;
	int16_t x351 = -64;
	int64_t t86 = -155LL;

	t86 = ((x349==(x350<x351))+x352);

	if (t86 != -26305741645LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x354 = UINT32_MAX;
	volatile int8_t x355 = 2;
	int64_t x356 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = ((x353==(x354<x355))+x356);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = 1LL;
	static volatile uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t88 = 21016;

	t88 = ((x357==(x358<x359))+x360);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = 905186U;
	uint32_t t89 = 848951469U;

	t89 = ((x361==(x362<x363))+x364);

	if (t89 != 905186U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = 13;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = UINT8_MAX;

	t90 = ((x365==(x366<x367))+x368);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = INT16_MIN;
	volatile uint8_t x370 = UINT8_MAX;
	int16_t x371 = 12;
	uint16_t x372 = 9052U;
	volatile int32_t t91 = -112302824;

	t91 = ((x369==(x370<x371))+x372);

	if (t91 != 9052) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x374 = -9LL;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = 0;
	volatile int32_t t92 = 22537466;

	t92 = ((x373==(x374<x375))+x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -4864227;
	int32_t x378 = -17962804;
	uint8_t x380 = 125U;
	int32_t t93 = -245;

	t93 = ((x377==(x378<x379))+x380);

	if (t93 != 125) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = 6940U;
	static uint16_t x382 = 6898U;
	int8_t x383 = -1;
	int32_t t94 = -21050;

	t94 = ((x381==(x382<x383))+x384);

	if (t94 != -678974722) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x385 = -6067921;
	static int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	uint8_t x388 = 0U;
	int32_t t95 = -182422;

	t95 = ((x385==(x386<x387))+x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = INT64_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x389==(x390<x391))+x392);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = 234;
	volatile int16_t x394 = INT16_MIN;
	uint32_t x396 = 7U;
	volatile uint32_t t97 = 50777U;

	t97 = ((x393==(x394<x395))+x396);

	if (t97 != 7U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MIN;
	static volatile int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = ((x397==(x398<x399))+x400);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = -2;
	volatile uint8_t x403 = 1U;
	int8_t x404 = INT8_MAX;
	static int32_t t99 = 10656;

	t99 = ((x401==(x402<x403))+x404);

	if (t99 != 127) { NG(); } else { ; }
	
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

