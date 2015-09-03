#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x10 = 1144LL;
uint32_t x15 = UINT32_MAX;
uint16_t x16 = 114U;
uint32_t x19 = 63502707U;
int32_t x23 = -1;
volatile uint64_t t5 = 261409LLU;
int32_t x27 = INT32_MIN;
int64_t t6 = -115141200208392LL;
static int32_t x29 = -1;
int16_t x31 = -1;
static int32_t x35 = 1;
volatile int32_t x37 = INT32_MAX;
static uint32_t x38 = 0U;
int32_t x43 = -19;
int16_t x46 = INT16_MIN;
volatile uint8_t x52 = UINT8_MAX;
static int64_t t12 = -6LL;
int64_t x55 = INT64_MIN;
int16_t x59 = INT16_MIN;
int32_t x68 = -1;
static uint32_t x71 = 65930974U;
int8_t x76 = INT8_MIN;
int32_t t18 = 7693;
int32_t x78 = INT32_MIN;
uint8_t x80 = 23U;
static volatile int32_t t19 = 31921807;
volatile uint16_t x87 = UINT16_MAX;
volatile uint64_t t21 = 0LLU;
volatile int16_t x92 = -1;
volatile uint16_t x94 = UINT16_MAX;
static volatile int64_t x108 = 350291614LL;
volatile int32_t t28 = 934812836;
static int16_t x121 = INT16_MIN;
uint8_t x124 = UINT8_MAX;
static volatile int32_t t30 = 1970;
volatile uint8_t x125 = 80U;
int16_t x127 = -1;
int64_t x131 = INT64_MIN;
int64_t x135 = -1LL;
volatile int64_t t33 = -182044516075922LL;
uint16_t x139 = UINT16_MAX;
uint64_t x140 = UINT64_MAX;
volatile uint64_t t34 = 80560368445LLU;
volatile int64_t x142 = -1LL;
static int32_t t36 = -1969619;
uint64_t t37 = 662475877LLU;
volatile int32_t x163 = 443;
volatile uint64_t t40 = 6LLU;
uint64_t x168 = 105827LLU;
volatile int8_t x169 = 4;
static int16_t x171 = INT16_MAX;
static uint8_t x174 = 2U;
int8_t x178 = -14;
int8_t x183 = INT8_MAX;
volatile int64_t t45 = 56698148LL;
volatile int8_t x186 = 1;
int64_t x187 = -827LL;
int32_t t47 = -62484795;
uint64_t t48 = 607LLU;
static uint16_t x198 = 1965U;
int32_t t49 = -3;
uint64_t x203 = 622LLU;
static int16_t x208 = 43;
int16_t x211 = INT16_MAX;
int64_t x215 = INT64_MAX;
static int16_t x220 = INT16_MIN;
int32_t x222 = INT32_MAX;
static uint16_t x223 = UINT16_MAX;
uint32_t x224 = UINT32_MAX;
int16_t x226 = -3406;
uint64_t x230 = UINT64_MAX;
uint64_t x236 = 37LLU;
int64_t t59 = 249155LL;
static uint64_t x245 = 1983LLU;
uint64_t x249 = 51LLU;
int64_t x258 = INT64_MIN;
int64_t t64 = 0LL;
static int8_t x263 = INT8_MAX;
volatile int32_t t65 = -554;
uint8_t x268 = 1U;
int32_t x271 = 506236;
int16_t x277 = INT16_MAX;
static volatile int64_t x287 = -1LL;
volatile int32_t x304 = -1;
int16_t x305 = INT16_MIN;
int16_t x309 = INT16_MIN;
int16_t x312 = INT16_MAX;
uint8_t x313 = UINT8_MAX;
static uint8_t x315 = 106U;
volatile int64_t t78 = 51609402890LL;
int8_t x318 = INT8_MIN;
static int16_t x322 = INT16_MAX;
int8_t x323 = INT8_MAX;
int64_t t82 = 534476LL;
static uint32_t x341 = UINT32_MAX;
int8_t x346 = INT8_MAX;
int8_t x356 = INT8_MAX;
uint64_t x357 = 2027225677672LLU;
static int16_t x361 = INT16_MAX;
volatile uint16_t x363 = UINT16_MAX;
int32_t t88 = -500089105;
volatile int32_t t89 = 0;
static int8_t x369 = INT8_MIN;
int16_t x370 = INT16_MIN;
int32_t t90 = 789;
volatile int64_t x373 = -1LL;
uint64_t x380 = UINT64_MAX;
static volatile int64_t x381 = 408065892084314LL;
volatile int32_t x385 = INT32_MIN;
volatile int32_t t94 = 116281780;
int8_t x397 = INT8_MAX;
int64_t x401 = -1LL;
uint32_t x406 = UINT32_MAX;
static uint32_t x407 = 230312491U;
static volatile int32_t x412 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = 317;
	int16_t x3 = -1;
	static uint32_t x4 = 69783U;
	volatile uint32_t t0 = 218U;

	t0 = ((x1*(x2<x3))%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -2429LL;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 6157296;

	t1 = ((x5*(x6<x7))%x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 7718723892125658597LLU;
	int64_t x11 = 1128971117739135592LL;
	static int64_t x12 = 62158235604LL;
	uint64_t t2 = 7896LLU;

	t2 = ((x9*(x10<x11))%x12);

	if (t2 != 35344307721LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int32_t t3 = 1769;

	t3 = ((x13*(x14<x15))%x16);

	if (t3 != -50) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static int32_t x18 = -1;
	static int32_t x20 = INT32_MAX;
	int32_t t4 = 849;

	t4 = ((x17*(x18<x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2LLU;
	uint64_t x22 = 1560102457989LLU;
	int64_t x24 = 2107459510468LL;

	t5 = ((x21*(x22<x23))%x24);

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = -1;
	static int8_t x28 = -1;

	t6 = ((x25*(x26<x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = -1;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = 3LL;

	t7 = ((x29*(x30<x31))%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 2080747482780780139LLU;
	uint16_t x34 = 0U;
	int32_t x36 = INT32_MAX;
	volatile uint64_t t8 = 78433LLU;

	t8 = ((x33*(x34<x35))%x36);

	if (t8 != 1815109642LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x39 = INT32_MIN;
	static int64_t x40 = INT64_MAX;
	static int64_t t9 = 1023096LL;

	t9 = ((x37*(x38<x39))%x40);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 1U;
	int8_t x42 = INT8_MIN;
	static volatile int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -267;

	t10 = ((x41*(x42<x43))%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int32_t x47 = INT32_MAX;
	static uint64_t x48 = 175273008369LLU;
	volatile uint64_t t11 = 1813LLU;

	t11 = ((x45*(x46<x47))%x48);

	if (t11 != 120786643902LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 265623299223183LL;
	volatile uint32_t x50 = UINT32_MAX;
	int64_t x51 = INT64_MIN;

	t12 = ((x49*(x50<x51))%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 3589;
	uint32_t x54 = 361173132U;
	uint16_t x56 = 18U;
	int32_t t13 = 6;

	t13 = ((x53*(x54<x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 297U;
	static int32_t x58 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 6091356154427LLU;

	t14 = ((x57*(x58<x59))%x60);

	if (t14 != 297LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MAX;
	int32_t x63 = INT32_MAX;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = -8;

	t15 = ((x61*(x62<x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	volatile int64_t x66 = -31662525LL;
	int32_t x67 = INT32_MIN;
	int32_t t16 = 7090;

	t16 = ((x65*(x66<x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	volatile uint8_t x70 = UINT8_MAX;
	int32_t x72 = -360827297;
	static int32_t t17 = -64;

	t17 = ((x69*(x70<x71))%x72);

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	static uint64_t x75 = UINT64_MAX;

	t18 = ((x73*(x74<x75))%x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	static int64_t x79 = INT64_MAX;

	t19 = ((x77*(x78<x79))%x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 7LLU;

	t20 = ((x81*(x82<x83))%x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	int8_t x86 = INT8_MAX;
	static uint64_t x88 = UINT64_MAX;

	t21 = ((x85*(x86<x87))%x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1718839U;
	int64_t x90 = 7576LL;
	volatile uint64_t x91 = 620022266636694LLU;
	volatile uint32_t t22 = 0U;

	t22 = ((x89*(x90<x91))%x92);

	if (t22 != 1718839U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1319U;
	int32_t x95 = 33313;
	uint16_t x96 = 1163U;
	volatile uint32_t t23 = 5U;

	t23 = ((x93*(x94<x95))%x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	static volatile int8_t x99 = -34;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = -4021332;

	t24 = ((x97*(x98<x99))%x100);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 5065362805714822LL;
	uint32_t x102 = 3974U;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = -1;
	volatile int64_t t25 = -29LL;

	t25 = ((x101*(x102<x103))%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -139;
	int8_t x106 = -3;
	volatile int16_t x107 = 82;
	int64_t t26 = 1843850465LL;

	t26 = ((x105*(x106<x107))%x108);

	if (t26 != -139LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	volatile uint32_t x112 = 2785769U;
	static uint32_t t27 = 5014319U;

	t27 = ((x109*(x110<x111))%x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int32_t x114 = 1636;
	static int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MAX;

	t28 = ((x113*(x114<x115))%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 21018U;
	int32_t x118 = -2816504;
	uint8_t x119 = UINT8_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t29 = 36857416LLU;

	t29 = ((x117*(x118<x119))%x120);

	if (t29 != 21018LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -30433192LL;
	int16_t x123 = -1;

	t30 = ((x121*(x122<x123))%x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = UINT32_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 135;

	t31 = ((x125*(x126<x127))%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint32_t x130 = UINT32_MAX;
	int64_t x132 = -51LL;
	int64_t t32 = -136938804799LL;

	t32 = ((x129*(x130<x131))%x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -2860190LL;
	volatile int64_t x134 = 0LL;
	int16_t x136 = -1;

	t33 = ((x133*(x134<x135))%x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 1396482U;
	int32_t x138 = INT32_MIN;

	t34 = ((x137*(x138<x139))%x140);

	if (t34 != 1396482LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = 9;
	uint32_t x143 = 226398U;
	volatile int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = 20630;

	t35 = ((x141*(x142<x143))%x144);

	if (t35 != 9) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint8_t x146 = 0U;
	static int8_t x147 = -1;
	volatile int16_t x148 = INT16_MIN;

	t36 = ((x145*(x146<x147))%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 1836090LLU;
	volatile int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MIN;
	volatile int32_t x152 = 13615;

	t37 = ((x149*(x150<x151))%x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 1U;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = 21763531U;
	uint32_t t38 = 305589U;

	t38 = ((x153*(x154<x155))%x156);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 56572LLU;
	int8_t x158 = -1;
	uint64_t x159 = 12310855LLU;
	int16_t x160 = -97;
	uint64_t t39 = 189586LLU;

	t39 = ((x157*(x158<x159))%x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 2022419319666871LLU;
	uint64_t x162 = 174LLU;
	int16_t x164 = 499;

	t40 = ((x161*(x162<x163))%x164);

	if (t40 != 261LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	static volatile uint16_t x166 = 3271U;
	int16_t x167 = INT16_MIN;
	uint64_t t41 = 20LLU;

	t41 = ((x165*(x166<x167))%x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	volatile int8_t x172 = -1;
	static int32_t t42 = 2;

	t42 = ((x169*(x170<x171))%x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static int32_t x175 = INT32_MAX;
	uint64_t x176 = 225LLU;
	uint64_t t43 = 1785348468406331864LLU;

	t43 = ((x173*(x174<x175))%x176);

	if (t43 != 68LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 8U;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 124192968072LLU;
	volatile uint64_t t44 = 28228294811703066LLU;

	t44 = ((x177*(x178<x179))%x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	uint32_t x182 = 40272153U;
	int8_t x184 = 1;

	t45 = ((x181*(x182<x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	static volatile int32_t x188 = -1;
	int32_t t46 = 7843612;

	t46 = ((x185*(x186<x187))%x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MAX;
	static volatile uint8_t x192 = UINT8_MAX;

	t47 = ((x189*(x190<x191))%x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	static volatile int8_t x194 = INT8_MIN;
	volatile int64_t x195 = INT64_MIN;
	uint64_t x196 = 915225521707540LLU;

	t48 = ((x193*(x194<x195))%x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	volatile int16_t x200 = INT16_MIN;

	t49 = ((x197*(x198<x199))%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static uint64_t x202 = 566576775069LLU;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t50 = 335351LLU;

	t50 = ((x201*(x202<x203))%x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	volatile uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MIN;
	int64_t t51 = -78726934788478473LL;

	t51 = ((x205*(x206<x207))%x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static int8_t x210 = 1;
	int8_t x212 = INT8_MAX;
	int64_t t52 = 8LL;

	t52 = ((x209*(x210<x211))%x212);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = INT16_MAX;
	int64_t x216 = -1LL;
	volatile uint64_t t53 = 179709113LLU;

	t53 = ((x213*(x214<x215))%x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 10;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	int32_t t54 = -9144;

	t54 = ((x217*(x218<x219))%x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 0;
	static uint32_t t55 = 125671873U;

	t55 = ((x221*(x222<x223))%x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int8_t x227 = -1;
	int16_t x228 = -6;
	int32_t t56 = -9840;

	t56 = ((x225*(x226<x227))%x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = 0LL;
	int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MAX;
	static volatile int64_t t57 = -1541139952752LL;

	t57 = ((x229*(x230<x231))%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 49;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -1LL;
	static uint64_t t58 = 5449LLU;

	t58 = ((x233*(x234<x235))%x236);

	if (t58 != 12LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 9782LL;
	static uint8_t x238 = 11U;
	int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;

	t59 = ((x237*(x238<x239))%x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 73282656173LLU;
	volatile uint64_t x242 = 0LLU;
	volatile int32_t x243 = -1;
	int64_t x244 = 1LL;
	uint64_t t60 = 878LLU;

	t60 = ((x241*(x242<x243))%x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x246 = 10U;
	int8_t x247 = -1;
	int64_t x248 = -1LL;
	static uint64_t t61 = 9711573859360681LLU;

	t61 = ((x245*(x246<x247))%x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 1U;
	int16_t x252 = -1;
	volatile uint64_t t62 = 131939029LLU;

	t62 = ((x249*(x250<x251))%x252);

	if (t62 != 51LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = -1;
	volatile uint8_t x255 = 6U;
	int64_t x256 = INT64_MAX;
	static volatile int64_t t63 = -28453087809302LL;

	t63 = ((x253*(x254<x255))%x256);

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 6461U;
	uint16_t x259 = 44U;
	static volatile int64_t x260 = 66298782217LL;

	t64 = ((x257*(x258<x259))%x260);

	if (t64 != 6461LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	volatile int16_t x264 = INT16_MIN;

	t65 = ((x261*(x262<x263))%x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 1;
	static int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MAX;
	int32_t t66 = -48958828;

	t66 = ((x265*(x266<x267))%x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = -1LL;
	int32_t x270 = INT32_MAX;
	static uint16_t x272 = 159U;
	volatile int64_t t67 = -12554323LL;

	t67 = ((x269*(x270<x271))%x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 703U;
	uint32_t x274 = 7659U;
	int32_t x275 = 1;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -683;

	t68 = ((x273*(x274<x275))%x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = INT8_MIN;
	volatile uint32_t x279 = 454379U;
	uint32_t x280 = UINT32_MAX;
	uint32_t t69 = 12U;

	t69 = ((x277*(x278<x279))%x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = 291671747U;
	volatile uint32_t x283 = 2052712899U;
	static int16_t x284 = INT16_MAX;
	int32_t t70 = -5899759;

	t70 = ((x281*(x282<x283))%x284);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static volatile int8_t x286 = INT8_MIN;
	int8_t x288 = -1;
	static int64_t t71 = -2528478LL;

	t71 = ((x285*(x286<x287))%x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MAX;
	uint16_t x292 = 622U;
	volatile int32_t t72 = -2;

	t72 = ((x289*(x290<x291))%x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 4;
	uint64_t x294 = 1868893663998711LLU;
	volatile int32_t x295 = INT32_MAX;
	static int16_t x296 = -3;
	int32_t t73 = 1501136;

	t73 = ((x293*(x294<x295))%x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 16;
	static int8_t x298 = -59;
	int32_t x299 = 139;
	uint64_t x300 = 243976670LLU;
	uint64_t t74 = 3852499372203LLU;

	t74 = ((x297*(x298<x299))%x300);

	if (t74 != 16LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = -6722935LL;
	int32_t x303 = 256169;
	volatile int64_t t75 = 87LL;

	t75 = ((x301*(x302<x303))%x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = -1;
	volatile int64_t x308 = INT64_MIN;
	static volatile int64_t t76 = 32044774LL;

	t76 = ((x305*(x306<x307))%x308);

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = 0;
	int8_t x311 = INT8_MIN;
	volatile int32_t t77 = -2690;

	t77 = ((x309*(x310<x311))%x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x314 = 4044LLU;
	int64_t x316 = INT64_MAX;

	t78 = ((x313*(x314<x315))%x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	int8_t x319 = -3;
	int64_t x320 = -6920LL;
	volatile int64_t t79 = 1LL;

	t79 = ((x317*(x318<x319))%x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 34U;
	int64_t x324 = -1LL;
	static int64_t t80 = -28073108610944LL;

	t80 = ((x321*(x322<x323))%x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	static volatile uint64_t x327 = 361232539273366643LLU;
	volatile int16_t x328 = INT16_MAX;
	volatile int64_t t81 = 2483682086139033LL;

	t81 = ((x325*(x326<x327))%x328);

	if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = INT32_MAX;
	uint8_t x334 = 30U;
	static uint8_t x335 = 2U;
	static int64_t x336 = 7414091488280LL;

	t82 = ((x333*(x334<x335))%x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x337 = 3U;
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = 718U;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t83 = 265726077LLU;

	t83 = ((x337*(x338<x339))%x340);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x342 = INT64_MIN;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	static volatile uint32_t t84 = 444696U;

	t84 = ((x341*(x342<x343))%x344);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -7;
	static int16_t x347 = 50;
	int32_t x348 = INT32_MAX;
	volatile int32_t t85 = -496968;

	t85 = ((x345*(x346<x347))%x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	static uint8_t x354 = 6U;
	volatile uint8_t x355 = UINT8_MAX;
	volatile int32_t t86 = -2083299;

	t86 = ((x353*(x354<x355))%x356);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x358 = 11U;
	volatile int32_t x359 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;
	uint64_t t87 = 19768609611286LLU;

	t87 = ((x357*(x358<x359))%x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = 20U;
	int16_t x364 = INT16_MIN;

	t88 = ((x361*(x362<x363))%x364);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 119U;
	uint32_t x366 = 602926U;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -1;

	t89 = ((x365*(x366<x367))%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x371 = 6;
	static uint8_t x372 = 1U;

	t90 = ((x369*(x370<x371))%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x374 = 13U;
	int16_t x375 = 0;
	static int32_t x376 = -466;
	int64_t t91 = 10LL;

	t91 = ((x373*(x374<x375))%x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 62215602U;
	uint64_t x378 = UINT64_MAX;
	volatile int32_t x379 = 9336;
	static volatile uint64_t t92 = 154183568LLU;

	t92 = ((x377*(x378<x379))%x380);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x382 = 1889132824163779LL;
	static uint16_t x383 = UINT16_MAX;
	uint32_t x384 = 267U;
	volatile int64_t t93 = 6573429586295993LL;

	t93 = ((x381*(x382<x383))%x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;
	int16_t x388 = -1;

	t94 = ((x385*(x386<x387))%x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x393 = INT64_MIN;
	int8_t x394 = 1;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	int64_t t95 = -24937172884623810LL;

	t95 = ((x393*(x394<x395))%x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	int32_t t96 = 992586895;

	t96 = ((x397*(x398<x399))%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x402 = 8U;
	uint32_t x403 = 98346U;
	int32_t x404 = -1;
	static int64_t t97 = 394764643759LL;

	t97 = ((x401*(x402<x403))%x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = UINT32_MAX;
	int16_t x408 = 1;
	uint32_t t98 = 19U;

	t98 = ((x405*(x406<x407))%x408);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = -1;
	uint8_t x411 = 110U;
	int32_t t99 = -4141;

	t99 = ((x409*(x410<x411))%x412);

	if (t99 != 255) { NG(); } else { ; }
	
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

