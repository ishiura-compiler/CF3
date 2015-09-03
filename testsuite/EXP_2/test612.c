#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x24 = INT64_MIN;
static int8_t x25 = -42;
uint16_t x26 = 21494U;
volatile uint8_t x30 = UINT8_MAX;
volatile int16_t x34 = INT16_MAX;
int64_t x35 = INT64_MIN;
volatile int32_t t6 = -4955350;
int8_t x40 = 0;
static int8_t x42 = -3;
volatile int32_t t8 = 800048;
int32_t x45 = INT32_MIN;
int16_t x49 = INT16_MIN;
static uint64_t x54 = 0LLU;
volatile int16_t x56 = INT16_MAX;
int8_t x58 = -1;
volatile int16_t x66 = INT16_MIN;
uint8_t x69 = 6U;
uint64_t x71 = 16121595007788779LLU;
int8_t x73 = 15;
int32_t x76 = -51;
uint64_t x79 = 16033283452974LLU;
static uint16_t x80 = 199U;
static volatile int32_t t17 = -257960574;
uint8_t x82 = 0U;
uint64_t x83 = 3LLU;
volatile uint32_t t18 = UINT32_MAX;
int16_t x93 = INT16_MIN;
volatile int32_t x97 = INT32_MAX;
volatile int32_t x105 = -124920;
volatile int32_t x109 = -1;
int32_t t25 = 82;
static int16_t x117 = INT16_MIN;
volatile int32_t t27 = INT32_MIN;
static int32_t t28 = -11160;
uint64_t x136 = 217968242482728326LLU;
static int32_t x143 = 35;
uint64_t x144 = UINT64_MAX;
volatile int32_t x166 = -1;
volatile int32_t x175 = INT32_MIN;
volatile int16_t x180 = -1;
uint64_t x183 = UINT64_MAX;
uint64_t x187 = UINT64_MAX;
uint32_t t42 = 19U;
volatile int8_t x193 = INT8_MAX;
int64_t x195 = -366727594060LL;
int32_t x203 = INT32_MIN;
uint64_t x208 = 954591268224554LLU;
int8_t x209 = INT8_MIN;
int16_t x211 = -4;
int16_t x215 = -8;
int32_t x221 = 97;
volatile uint32_t x225 = 355451433U;
int16_t x226 = -6;
volatile uint16_t x230 = 697U;
static uint32_t x233 = 1U;
int64_t x234 = -1LL;
static uint16_t x240 = 11501U;
uint16_t x246 = 968U;
int64_t x250 = -268530LL;
volatile int64_t x254 = INT64_MIN;
static volatile uint64_t x259 = 52765948664460228LLU;
int64_t x263 = INT64_MIN;
int32_t x274 = 3729;
static int64_t x275 = INT64_MIN;
int8_t x276 = INT8_MAX;
static uint16_t x278 = UINT16_MAX;
volatile int8_t x286 = 1;
volatile uint32_t x292 = 775U;
int8_t x311 = INT8_MAX;
int32_t t73 = -37;
int8_t x334 = INT8_MIN;
int64_t x339 = INT64_MAX;
int32_t x342 = INT32_MIN;
volatile int64_t t77 = 25478717854825727LL;
uint16_t x350 = 59U;
uint32_t x352 = 2032U;
uint64_t x358 = 2289411188217920586LLU;
int16_t x362 = INT16_MIN;
static uint64_t x365 = 946LLU;
int8_t x366 = -7;
static uint8_t x372 = 9U;
uint32_t x375 = UINT32_MAX;
int32_t t85 = -5846545;
static volatile uint64_t x385 = UINT64_MAX;
uint64_t x388 = UINT64_MAX;
static uint64_t t88 = UINT64_MAX;
static int8_t x389 = INT8_MIN;
uint16_t x390 = 11634U;
int64_t x392 = -73386831327010LL;
static int64_t t89 = -3125207458372562LL;
int32_t x398 = INT32_MAX;
int16_t x399 = INT16_MIN;
volatile int64_t t90 = INT64_MIN;
int64_t x406 = INT64_MAX;
int8_t x409 = -2;
int32_t x416 = -1;
static int32_t t94 = 83327;
volatile int64_t x418 = INT64_MIN;
volatile int8_t x422 = INT8_MIN;
uint64_t x427 = 2922746066907346358LLU;
int32_t t97 = -215544;
int16_t x431 = INT16_MIN;
static volatile int64_t x433 = INT64_MIN;
static volatile int8_t x436 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile uint32_t x2 = 5133U;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -283;

	t0 = ((x1<(x2/x3))+x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 8658220LLU;
	uint32_t x6 = 198161354U;
	int16_t x7 = -24;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = INT32_MIN;

	t1 = ((x5<(x6/x7))+x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	static uint64_t x18 = 21914017970LLU;
	uint16_t x19 = 5U;
	uint8_t x20 = 0U;
	volatile int32_t t2 = 102806;

	t2 = ((x17<(x18/x19))+x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	static volatile int32_t x23 = INT32_MAX;
	int64_t t3 = 12766902LL;

	t3 = ((x21<(x22/x23))+x24);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x27 = -238834165;
	uint64_t x28 = 73LLU;
	static volatile uint64_t t4 = 378253833992857LLU;

	t4 = ((x25<(x26/x27))+x28);

	if (t4 != 74LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = -1;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -2;
	volatile int32_t t5 = -12433;

	t5 = ((x29<(x30/x31))+x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint16_t x36 = 126U;

	t6 = ((x33<(x34/x35))+x36);

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = -54212873;
	int8_t x38 = INT8_MIN;
	volatile uint16_t x39 = 72U;
	volatile int32_t t7 = -13915;

	t7 = ((x37<(x38/x39))+x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x43 = -1;
	int8_t x44 = INT8_MIN;

	t8 = ((x41<(x42/x43))+x44);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = -1;
	int8_t x47 = 1;
	volatile int64_t x48 = -97927828873LL;
	volatile int64_t t9 = -413361129LL;

	t9 = ((x45<(x46/x47))+x48);

	if (t9 != -97927828872LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t10 = INT32_MAX;

	t10 = ((x49<(x50/x51))+x52);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x53 = 102559163453LLU;
	int32_t x55 = INT32_MIN;
	volatile int32_t t11 = 1;

	t11 = ((x53<(x54/x55))+x56);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 29297753140LLU;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = 107U;
	static volatile int32_t t12 = -3723657;

	t12 = ((x57<(x58/x59))+x60);

	if (t12 != 107) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	volatile uint32_t x62 = UINT32_MAX;
	uint64_t x63 = 24741652164776392LLU;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 2632;

	t13 = ((x61<(x62/x63))+x64);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MIN;
	static volatile uint64_t x67 = 20317431904410062LLU;
	static int64_t x68 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = ((x65<(x66/x67))+x68);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x70 = UINT8_MAX;
	static int64_t x72 = 29062332LL;
	int64_t t15 = 14086561095LL;

	t15 = ((x69<(x70/x71))+x72);

	if (t15 != 29062332LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MIN;
	uint8_t x75 = 61U;
	static int32_t t16 = -128019;

	t16 = ((x73<(x74/x75))+x76);

	if (t16 != -51) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = -1;
	static volatile int32_t x78 = -52;

	t17 = ((x77<(x78/x79))+x80);

	if (t17 != 199) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	uint32_t x84 = UINT32_MAX;

	t18 = ((x81<(x82/x83))+x84);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 20;
	int32_t x86 = 69745;
	uint16_t x87 = 81U;
	volatile int8_t x88 = INT8_MIN;
	int32_t t19 = -14274050;

	t19 = ((x85<(x86/x87))+x88);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	static int8_t x92 = 1;
	volatile int32_t t20 = 794963456;

	t20 = ((x89<(x90/x91))+x92);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x94 = INT64_MIN;
	int16_t x95 = -2;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t21 = -59684629697LL;

	t21 = ((x93<(x94/x95))+x96);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x98 = 8U;
	volatile int64_t x99 = INT64_MIN;
	static int8_t x100 = -3;
	volatile int32_t t22 = 991;

	t22 = ((x97<(x98/x99))+x100);

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = INT8_MIN;
	int64_t x102 = 69137034897102LL;
	int8_t x103 = -55;
	volatile int16_t x104 = INT16_MAX;
	static volatile int32_t t23 = 13;

	t23 = ((x101<(x102/x103))+x104);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	volatile uint8_t x107 = 88U;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = ((x105<(x106/x107))+x108);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MAX;
	static int8_t x112 = INT8_MAX;

	t25 = ((x109<(x110/x111))+x112);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	static int32_t x114 = INT32_MIN;
	static int64_t x115 = INT64_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x113<(x114/x115))+x116);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = -11;
	uint32_t x119 = 161U;
	int32_t x120 = INT32_MIN;

	t27 = ((x117<(x118/x119))+x120);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x126 = -1LL;
	uint64_t x127 = 3845128LLU;
	int8_t x128 = 1;

	t28 = ((x125<(x126/x127))+x128);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x129 = -46;
	uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = -1LL;
	static int32_t x132 = 64354;
	volatile int32_t t29 = -815816;

	t29 = ((x129<(x130/x131))+x132);

	if (t29 != 64354) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 83LL;
	uint32_t x134 = 868154U;
	int32_t x135 = -1838121;
	volatile uint64_t t30 = 71027820LLU;

	t30 = ((x133<(x134/x135))+x136);

	if (t30 != 217968242482728326LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x137 = -18;
	int32_t x138 = INT32_MIN;
	volatile uint16_t x139 = 15U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x137<(x138/x139))+x140);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = 8;
	int64_t x142 = INT64_MIN;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = ((x141<(x142/x143))+x144);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	static int8_t x146 = 1;
	volatile int8_t x147 = 7;
	int64_t x148 = INT64_MIN;
	int64_t t33 = -273236659702822506LL;

	t33 = ((x145<(x146/x147))+x148);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = -19;
	int32_t x152 = INT32_MIN;
	volatile int32_t t34 = 235;

	t34 = ((x149<(x150/x151))+x152);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = UINT64_MAX;
	volatile uint64_t x154 = UINT64_MAX;
	uint32_t x155 = 1649U;
	volatile uint8_t x156 = 0U;
	volatile int32_t t35 = 175;

	t35 = ((x153<(x154/x155))+x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 4460574337531274LL;
	int16_t x162 = INT16_MIN;
	static uint8_t x163 = UINT8_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t36 = -10095;

	t36 = ((x161<(x162/x163))+x164);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x165 = 59U;
	static uint32_t x167 = UINT32_MAX;
	int8_t x168 = 1;
	int32_t t37 = 15746;

	t37 = ((x165<(x166/x167))+x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = 270;
	uint8_t x170 = 28U;
	int8_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = ((x169<(x170/x171))+x172);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = -1LL;
	int16_t x174 = -229;
	int8_t x176 = INT8_MIN;
	int32_t t39 = -2881;

	t39 = ((x173<(x174/x175))+x176);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = INT32_MIN;
	static uint8_t x178 = UINT8_MAX;
	static int16_t x179 = INT16_MAX;
	int32_t t40 = 134357;

	t40 = ((x177<(x178/x179))+x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MAX;
	volatile uint8_t x182 = 6U;
	int64_t x184 = 144221LL;
	int64_t t41 = 3LL;

	t41 = ((x181<(x182/x183))+x184);

	if (t41 != 144221LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = 12U;
	static uint32_t x188 = 782118341U;

	t42 = ((x185<(x186/x187))+x188);

	if (t42 != 782118341U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x189 = 9U;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = -1;
	int32_t x192 = 7895109;
	int32_t t43 = 37;

	t43 = ((x189<(x190/x191))+x192);

	if (t43 != 7895109) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = INT32_MIN;
	uint32_t x196 = 2U;
	uint32_t t44 = 88051000U;

	t44 = ((x193<(x194/x195))+x196);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 0U;
	static uint64_t x199 = UINT64_MAX;
	static uint64_t x200 = 8403842812625LLU;
	volatile uint64_t t45 = 1259269500LLU;

	t45 = ((x197<(x198/x199))+x200);

	if (t45 != 8403842812625LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 14;
	volatile int8_t x202 = -1;
	int8_t x204 = 1;
	static volatile int32_t t46 = -581890;

	t46 = ((x201<(x202/x203))+x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 5136U;
	int8_t x206 = -47;
	int64_t x207 = 586130LL;
	static volatile uint64_t t47 = 195081067440182190LLU;

	t47 = ((x205<(x206/x207))+x208);

	if (t47 != 954591268224554LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x210 = 5825LL;
	int32_t x212 = -18812933;
	volatile int32_t t48 = -99;

	t48 = ((x209<(x210/x211))+x212);

	if (t48 != -18812933) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x214 = 20929137LL;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = ((x213<(x214/x215))+x216);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t50 = -2932283;

	t50 = ((x221<(x222/x223))+x224);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x227 = INT8_MAX;
	int8_t x228 = -26;
	volatile int32_t t51 = -5583;

	t51 = ((x225<(x226/x227))+x228);

	if (t51 != -26) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	volatile uint16_t x231 = 8963U;
	int64_t x232 = 399571673007809944LL;
	int64_t t52 = 411794764112845991LL;

	t52 = ((x229<(x230/x231))+x232);

	if (t52 != 399571673007809945LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x235 = 2U;
	int16_t x236 = -1;
	int32_t t53 = 522754;

	t53 = ((x233<(x234/x235))+x236);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MAX;
	static int16_t x239 = 2693;
	volatile int32_t t54 = 124;

	t54 = ((x237<(x238/x239))+x240);

	if (t54 != 11502) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x241 = 55U;
	uint8_t x242 = 5U;
	int64_t x243 = -2753889419474569LL;
	uint32_t x244 = 3067U;
	volatile uint32_t t55 = 2U;

	t55 = ((x241<(x242/x243))+x244);

	if (t55 != 3067U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x247 = 1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t56 = -112;

	t56 = ((x245<(x246/x247))+x248);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 0U;
	uint16_t x251 = 1U;
	int8_t x252 = 1;
	volatile int32_t t57 = -10776998;

	t57 = ((x249<(x250/x251))+x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MAX;
	int64_t x255 = INT64_MIN;
	int32_t x256 = 38;
	int32_t t58 = 74;

	t58 = ((x253<(x254/x255))+x256);

	if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = -1;
	int32_t x258 = INT32_MAX;
	volatile int64_t x260 = -3850698400190951LL;
	volatile int64_t t59 = 213369915125508LL;

	t59 = ((x257<(x258/x259))+x260);

	if (t59 != -3850698400190951LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = UINT16_MAX;
	static volatile int8_t x262 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = ((x261<(x262/x263))+x264);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	int64_t x266 = -937407187792345213LL;
	volatile int32_t x267 = INT32_MAX;
	volatile int16_t x268 = -390;
	int32_t t61 = -120629052;

	t61 = ((x265<(x266/x267))+x268);

	if (t61 != -390) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	volatile int64_t x271 = -9064LL;
	static int32_t x272 = 445447241;
	int32_t t62 = 7213;

	t62 = ((x269<(x270/x271))+x272);

	if (t62 != 445447241) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	int32_t t63 = 20764;

	t63 = ((x273<(x274/x275))+x276);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MAX;
	int32_t t64 = INT32_MAX;

	t64 = ((x277<(x278/x279))+x280);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x281 = 1089;
	int64_t x282 = 1LL;
	int8_t x283 = -1;
	int64_t x284 = -4031LL;
	int64_t t65 = -30919132911687LL;

	t65 = ((x281<(x282/x283))+x284);

	if (t65 != -4031LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = -1;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = 1U;
	static volatile int32_t t66 = 0;

	t66 = ((x285<(x286/x287))+x288);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	uint32_t t67 = 48358026U;

	t67 = ((x289<(x290/x291))+x292);

	if (t67 != 776U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x293 = INT16_MIN;
	static int32_t x294 = INT32_MAX;
	int32_t x295 = INT32_MIN;
	volatile int64_t x296 = INT64_MIN;
	static int64_t t68 = 0LL;

	t68 = ((x293<(x294/x295))+x296);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	static int16_t x299 = INT16_MAX;
	int16_t x300 = 2717;
	int32_t t69 = 381239;

	t69 = ((x297<(x298/x299))+x300);

	if (t69 != 2717) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 1U;
	int32_t x302 = -1599937;
	uint16_t x303 = 5671U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = ((x301<(x302/x303))+x304);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MIN;
	volatile int32_t x306 = 1657;
	volatile uint8_t x307 = 24U;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t71 = -58722;

	t71 = ((x305<(x306/x307))+x308);

	if (t71 != 65536) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x309 = 5U;
	static int32_t x310 = 6;
	uint64_t x312 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x309<(x310/x311))+x312);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x317 = -1;
	uint8_t x318 = 126U;
	uint32_t x319 = 55U;
	static int32_t x320 = -1;

	t73 = ((x317<(x318/x319))+x320);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -1;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = 15327LLU;
	volatile int8_t x324 = INT8_MIN;
	int32_t t74 = -2694914;

	t74 = ((x321<(x322/x323))+x324);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x333 = 29;
	volatile int64_t x335 = -1LL;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t75 = -2063591;

	t75 = ((x333<(x334/x335))+x336);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MAX;
	uint64_t x338 = UINT64_MAX;
	int16_t x340 = 252;
	int32_t t76 = 4;

	t76 = ((x337<(x338/x339))+x340);

	if (t76 != 252) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x341 = 431;
	int64_t x343 = -6416LL;
	int64_t x344 = -491LL;

	t77 = ((x341<(x342/x343))+x344);

	if (t77 != -490LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = 199182947U;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	int8_t x348 = 5;
	volatile int32_t t78 = 32853;

	t78 = ((x345<(x346/x347))+x348);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x349 = INT16_MIN;
	uint8_t x351 = 11U;
	uint32_t t79 = 53956732U;

	t79 = ((x349<(x350/x351))+x352);

	if (t79 != 2033U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x353 = -47369;
	int32_t x354 = -1;
	int8_t x355 = INT8_MAX;
	uint32_t x356 = 2507338U;
	uint32_t t80 = 14245U;

	t80 = ((x353<(x354/x355))+x356);

	if (t80 != 2507339U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = 109633U;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t81 = -3903047;

	t81 = ((x357<(x358/x359))+x360);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = 0LL;
	volatile int8_t x363 = -1;
	int16_t x364 = -1;
	int32_t t82 = 1951410;

	t82 = ((x361<(x362/x363))+x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t83 = -12837;

	t83 = ((x365<(x366/x367))+x368);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = -1;
	static int32_t x371 = -6510;
	static volatile int32_t t84 = -3;

	t84 = ((x369<(x370/x371))+x372);

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MAX;
	static volatile int8_t x376 = INT8_MIN;

	t85 = ((x373<(x374/x375))+x376);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = -1;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = -1LL;
	static int64_t t86 = 7369974723LL;

	t86 = ((x377<(x378/x379))+x380);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = 5499841U;
	static int64_t x382 = -47764869656882501LL;
	int32_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	uint32_t t87 = 34003508U;

	t87 = ((x381<(x382/x383))+x384);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x386 = 0LLU;
	volatile int16_t x387 = 2880;

	t88 = ((x385<(x386/x387))+x388);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x391 = INT32_MIN;

	t89 = ((x389<(x390/x391))+x392);

	if (t89 != -73386831327009LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile int64_t x400 = INT64_MIN;

	t90 = ((x397<(x398/x399))+x400);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = 3;
	uint8_t x402 = UINT8_MAX;
	static int32_t x403 = -1;
	volatile int16_t x404 = 206;
	static volatile int32_t t91 = -375659;

	t91 = ((x401<(x402/x403))+x404);

	if (t91 != 206) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x407 = 1;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t92 = -119751;

	t92 = ((x405<(x406/x407))+x408);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x410 = 96U;
	int8_t x411 = INT8_MAX;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t93 = 123;

	t93 = ((x409<(x410/x411))+x412);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = 0;
	static volatile int64_t x414 = -1LL;
	uint64_t x415 = 1000LLU;

	t94 = ((x413<(x414/x415))+x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x417 = INT8_MAX;
	int32_t x419 = -448328877;
	uint64_t x420 = 4356497182511LLU;
	volatile uint64_t t95 = 2688767180478LLU;

	t95 = ((x417<(x418/x419))+x420);

	if (t95 != 4356497182512LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x421 = 5;
	uint32_t x423 = 102986466U;
	uint16_t x424 = 0U;
	volatile int32_t t96 = -5841696;

	t96 = ((x421<(x422/x423))+x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = INT64_MIN;
	static uint8_t x426 = 8U;
	int8_t x428 = -1;

	t97 = ((x425<(x426/x427))+x428);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = 8138U;
	int32_t x430 = INT32_MIN;
	volatile int32_t x432 = 890748;
	volatile int32_t t98 = -1022;

	t98 = ((x429<(x430/x431))+x432);

	if (t98 != 890749) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x434 = 6175U;
	uint16_t x435 = UINT16_MAX;
	int32_t t99 = -1;

	t99 = ((x433<(x434/x435))+x436);

	if (t99 != -127) { NG(); } else { ; }
	
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

