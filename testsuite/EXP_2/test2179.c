#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x4 = INT16_MIN;
volatile int32_t x16 = INT32_MIN;
int16_t x17 = -1;
int32_t x24 = INT32_MAX;
uint16_t x32 = 1607U;
volatile uint16_t x38 = UINT16_MAX;
volatile uint16_t x39 = 89U;
uint64_t x51 = 21380057599LLU;
static volatile int8_t x53 = INT8_MIN;
volatile int32_t x54 = -90209;
uint8_t x57 = 2U;
static volatile int32_t t14 = -13044966;
int32_t t15 = -15378;
int16_t x74 = -789;
int16_t x87 = INT16_MAX;
volatile int16_t x88 = INT16_MIN;
uint32_t x92 = 3U;
uint16_t x98 = 7049U;
int32_t x99 = -690339665;
volatile uint16_t x103 = 27U;
volatile int64_t x107 = INT64_MIN;
volatile int32_t t26 = 2952;
int64_t x110 = INT64_MIN;
volatile int16_t x112 = 3;
int32_t t29 = 40838;
volatile int16_t x121 = 58;
volatile int32_t x126 = 119421;
int64_t x133 = -1LL;
uint64_t x136 = 28791034576LLU;
int64_t x137 = INT64_MAX;
static volatile int64_t x139 = INT64_MIN;
uint64_t x144 = 135528904547297645LLU;
static uint16_t x147 = UINT16_MAX;
int16_t x154 = -1;
int32_t t38 = -302687;
int32_t t40 = 88;
uint64_t x167 = 79LLU;
static uint8_t x176 = UINT8_MAX;
int64_t x177 = INT64_MAX;
int32_t t44 = 202273;
uint64_t x182 = UINT64_MAX;
int16_t x184 = 0;
int32_t t47 = 79517327;
int8_t x194 = 1;
uint64_t x200 = UINT64_MAX;
int32_t x201 = -1;
volatile int32_t x205 = -5;
volatile uint32_t x217 = UINT32_MAX;
int64_t x218 = 8LL;
int8_t x220 = 0;
static volatile uint8_t x221 = UINT8_MAX;
static int32_t x224 = 994984891;
int8_t x235 = -3;
volatile int32_t t59 = -2116216;
int64_t x255 = -368431310LL;
int64_t x257 = INT64_MIN;
static uint64_t x260 = UINT64_MAX;
int32_t t64 = 15839582;
int64_t x262 = -98255433LL;
int32_t x265 = 6416662;
uint32_t x273 = 9395U;
volatile uint64_t x284 = 5451518448393510026LLU;
uint8_t x289 = 6U;
static uint8_t x292 = 16U;
volatile int32_t t72 = -18887;
static int32_t t73 = 65233721;
uint32_t x303 = 1709535U;
uint8_t x304 = 0U;
int8_t x306 = INT8_MIN;
uint64_t x308 = UINT64_MAX;
int32_t x310 = INT32_MIN;
int32_t x312 = INT32_MIN;
uint64_t x320 = UINT64_MAX;
volatile int8_t x329 = INT8_MAX;
static volatile int32_t t82 = 207770;
volatile uint64_t x335 = 518972642584LLU;
int8_t x337 = INT8_MAX;
volatile int32_t t84 = 375077;
int64_t x343 = -1LL;
static uint32_t x347 = 41209U;
static int8_t x352 = -1;
int32_t t87 = 5;
int64_t x360 = -1LL;
uint64_t x362 = 5670102712LLU;
int64_t x370 = INT64_MAX;
static int32_t t94 = -173589413;
volatile int16_t x383 = INT16_MAX;
int32_t t95 = -145;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int64_t x3 = INT64_MAX;
	int32_t t0 = 242619;

	t0 = ((x1|(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 298;
	int16_t x6 = INT16_MAX;
	static uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 2819863LLU;
	volatile int32_t t1 = 9;

	t1 = ((x5|(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 70U;
	static int8_t x10 = INT8_MAX;
	uint8_t x11 = 9U;
	static uint8_t x12 = 37U;
	int32_t t2 = 5737069;

	t2 = ((x9|(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3LLU;
	int8_t x14 = INT8_MAX;
	static volatile int8_t x15 = INT8_MIN;
	int32_t t3 = 653;

	t3 = ((x13|(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	uint8_t x19 = 99U;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 140406;

	t4 = ((x17|(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MAX;
	static int8_t x23 = INT8_MIN;
	int32_t t5 = -176060481;

	t5 = ((x21|(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -1;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = -405948806;

	t6 = ((x25|(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 30U;
	int32_t x30 = -1;
	int32_t x31 = INT32_MAX;
	volatile int32_t t7 = 22271046;

	t7 = ((x29|(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	int32_t x36 = -396973845;
	volatile int32_t t8 = 3184;

	t8 = ((x33|(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 35U;
	uint64_t x40 = 396LLU;
	volatile int32_t t9 = -2;

	t9 = ((x37|(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	volatile int32_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -52;
	int32_t t10 = 149;

	t10 = ((x41|(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int64_t x46 = INT64_MAX;
	volatile uint16_t x47 = 457U;
	volatile int16_t x48 = -1;
	volatile int32_t t11 = 504;

	t11 = ((x45|(x46^x47))==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	volatile int8_t x50 = -2;
	static int16_t x52 = 2;
	volatile int32_t t12 = 153717;

	t12 = ((x49|(x50^x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = -15;

	t13 = ((x53|(x54^x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 5948101375280LLU;
	uint16_t x60 = 2U;

	t14 = ((x57|(x58^x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	static int64_t x62 = -1LL;
	uint8_t x63 = 14U;
	int32_t x64 = INT32_MIN;

	t15 = ((x61|(x62^x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MAX;
	static uint8_t x67 = 23U;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 7462;

	t16 = ((x65|(x66^x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 1;
	static int64_t x70 = INT64_MIN;
	uint8_t x71 = 0U;
	volatile int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 76465165;

	t17 = ((x69|(x70^x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 123197761187LLU;
	uint32_t x75 = 10U;
	int32_t x76 = -166430762;
	volatile int32_t t18 = 15566587;

	t18 = ((x73|(x74^x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 22U;
	int64_t x78 = INT64_MIN;
	static uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;
	static volatile int32_t t19 = -518090408;

	t19 = ((x77|(x78^x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 2U;
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 0U;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = 0;

	t20 = ((x81|(x82^x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MIN;
	static int32_t t21 = 373785;

	t21 = ((x85|(x86^x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	uint8_t x90 = 0U;
	int8_t x91 = INT8_MIN;
	int32_t t22 = 4954;

	t22 = ((x89|(x90^x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 32517770910397LLU;
	int64_t x94 = INT64_MIN;
	volatile int64_t x95 = -68528052351LL;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 217;

	t23 = ((x93|(x94^x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = 48615224421861587LL;
	int64_t x100 = -1LL;
	volatile int32_t t24 = 261021;

	t24 = ((x97|(x98^x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	volatile int16_t x102 = 0;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 895686231;

	t25 = ((x101|(x102^x103))==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	static int16_t x106 = -35;
	volatile uint8_t x108 = 12U;

	t26 = ((x105|(x106^x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 0LLU;
	int8_t x111 = INT8_MIN;
	volatile int32_t t27 = -8727;

	t27 = ((x109|(x110^x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	int8_t x115 = 0;
	uint32_t x116 = 15747U;
	int32_t t28 = 3207;

	t28 = ((x113|(x114^x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 208U;
	int8_t x118 = 3;
	int32_t x119 = INT32_MAX;
	int16_t x120 = -154;

	t29 = ((x117|(x118^x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MAX;
	volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	int32_t t30 = 8842439;

	t30 = ((x121|(x122^x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x127 = -53;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 16;

	t31 = ((x125|(x126^x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 14U;
	volatile int16_t x132 = -1;
	static volatile int32_t t32 = -1;

	t32 = ((x129|(x130^x131))==x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	int16_t x135 = -1;
	int32_t t33 = 12;

	t33 = ((x133|(x134^x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 1U;
	uint8_t x140 = 106U;
	static int32_t t34 = 15;

	t34 = ((x137|(x138^x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile uint64_t x142 = 62179657632044LLU;
	uint64_t x143 = 429925336LLU;
	int32_t t35 = -787344277;

	t35 = ((x141|(x142^x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	volatile int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -14328104;

	t36 = ((x145|(x146^x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 60869740230258623LLU;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = 8625588550083922LLU;
	int32_t t37 = 96413256;

	t37 = ((x149|(x150^x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 12U;
	uint64_t x155 = 333574LLU;
	volatile uint8_t x156 = 1U;

	t38 = ((x153|(x154^x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MAX;
	volatile int8_t x159 = INT8_MIN;
	volatile int8_t x160 = INT8_MAX;
	int32_t t39 = 437909;

	t39 = ((x157|(x158^x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161|(x162^x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 54326139U;
	uint8_t x166 = 1U;
	uint32_t x168 = 15U;
	static int32_t t41 = 3942;

	t41 = ((x165|(x166^x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = -21;
	volatile int32_t t42 = 13204021;

	t42 = ((x169|(x170^x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MAX;
	volatile int32_t t43 = 356;

	t43 = ((x173|(x174^x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 53U;
	static volatile uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = -1;

	t44 = ((x177|(x178^x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -9;
	int16_t x183 = -1;
	volatile int32_t t45 = -79018786;

	t45 = ((x181|(x182^x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -7;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = -1476248;

	t46 = ((x185|(x186^x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = UINT64_MAX;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 11257839452795LLU;
	int64_t x192 = -1992082595298674LL;

	t47 = ((x189|(x190^x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -7;
	volatile uint8_t x195 = UINT8_MAX;
	int8_t x196 = -1;
	static int32_t t48 = 19;

	t48 = ((x193|(x194^x195))==x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 50;
	static int8_t x198 = 0;
	volatile int16_t x199 = 1940;
	volatile int32_t t49 = 40;

	t49 = ((x197|(x198^x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = 32207280095793LL;
	int32_t x203 = INT32_MIN;
	static int16_t x204 = 5;
	static int32_t t50 = 1;

	t50 = ((x201|(x202^x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x206 = 835LLU;
	volatile int64_t x207 = INT64_MIN;
	static int8_t x208 = -5;
	int32_t t51 = -144;

	t51 = ((x205|(x206^x207))==x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = 9098LL;
	static uint16_t x211 = 13U;
	static int32_t x212 = -919182;
	int32_t t52 = -1;

	t52 = ((x209|(x210^x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 0;
	int16_t x214 = INT16_MAX;
	static int8_t x215 = INT8_MAX;
	volatile int64_t x216 = INT64_MIN;
	static volatile int32_t t53 = -9803;

	t53 = ((x213|(x214^x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x219 = INT16_MIN;
	volatile int32_t t54 = 1754662;

	t54 = ((x217|(x218^x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = UINT8_MAX;
	static int32_t x223 = INT32_MIN;
	volatile int32_t t55 = -1003719622;

	t55 = ((x221|(x222^x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = -1;
	int16_t x228 = 111;
	static volatile int32_t t56 = -21844;

	t56 = ((x225|(x226^x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	static volatile uint8_t x231 = 1U;
	uint16_t x232 = 4U;
	int32_t t57 = 1;

	t57 = ((x229|(x230^x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = 2826483;
	uint16_t x236 = 3422U;
	int32_t t58 = 18162;

	t58 = ((x233|(x234^x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 49U;
	int8_t x238 = -1;
	uint32_t x239 = 26712727U;
	volatile int32_t x240 = INT32_MIN;

	t59 = ((x237|(x238^x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 3U;
	static volatile int8_t x242 = 6;
	uint64_t x243 = 15884553676967853LLU;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 86;

	t60 = ((x241|(x242^x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 6063U;
	uint64_t x246 = UINT64_MAX;
	volatile int8_t x247 = -1;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -1;

	t61 = ((x245|(x246^x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	static volatile int32_t x250 = -1;
	int8_t x251 = 17;
	uint16_t x252 = 0U;
	volatile int32_t t62 = 202249;

	t62 = ((x249|(x250^x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -24;
	static uint16_t x254 = 1U;
	int64_t x256 = INT64_MAX;
	static int32_t t63 = 38922;

	t63 = ((x253|(x254^x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x258 = 24792U;
	static int32_t x259 = INT32_MIN;

	t64 = ((x257|(x258^x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	uint32_t x263 = 517114U;
	uint8_t x264 = 2U;
	static volatile int32_t t65 = -86726986;

	t65 = ((x261|(x262^x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -522;

	t66 = ((x265|(x266^x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x270 = -1LL;
	static int8_t x271 = INT8_MIN;
	uint32_t x272 = 834695695U;
	volatile int32_t t67 = -65086;

	t67 = ((x269|(x270^x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = UINT32_MAX;
	static uint16_t x275 = 52U;
	static uint64_t x276 = UINT64_MAX;
	static int32_t t68 = 59;

	t68 = ((x273|(x274^x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	static int32_t x278 = 6;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -3381;

	t69 = ((x277|(x278^x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 80678611LL;
	volatile int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	volatile int32_t t70 = -841896;

	t70 = ((x281|(x282^x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x285 = 4U;
	int8_t x286 = INT8_MAX;
	int32_t x287 = -1;
	uint32_t x288 = 56U;
	static int32_t t71 = 2;

	t71 = ((x285|(x286^x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = -1;

	t72 = ((x289|(x290^x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 1;
	static int8_t x296 = -1;

	t73 = ((x293|(x294^x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -14;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = 110U;
	volatile uint32_t x300 = 15793U;
	static volatile int32_t t74 = 25;

	t74 = ((x297|(x298^x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static volatile int64_t x302 = INT64_MIN;
	int32_t t75 = -106581;

	t75 = ((x301|(x302^x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	volatile uint16_t x307 = 7846U;
	int32_t t76 = 145271;

	t76 = ((x305|(x306^x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static int16_t x311 = -6;
	int32_t t77 = -8140768;

	t77 = ((x309|(x310^x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	volatile uint8_t x314 = 38U;
	int8_t x315 = -1;
	static int8_t x316 = -1;
	volatile int32_t t78 = -7;

	t78 = ((x313|(x314^x315))==x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static volatile int32_t x318 = 200833974;
	int64_t x319 = INT64_MAX;
	int32_t t79 = 33299905;

	t79 = ((x317|(x318^x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = 50;
	int32_t x323 = INT32_MAX;
	uint64_t x324 = 124529162LLU;
	int32_t t80 = -10905719;

	t80 = ((x321|(x322^x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 1LL;
	volatile uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MAX;
	volatile uint64_t x328 = 10909932792808LLU;
	volatile int32_t t81 = 0;

	t81 = ((x325|(x326^x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	volatile int32_t x331 = INT32_MIN;
	static uint8_t x332 = 5U;

	t82 = ((x329|(x330^x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static volatile int16_t x334 = 6280;
	int32_t x336 = INT32_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x333|(x334^x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x338 = 2882146U;
	uint64_t x339 = 5273187585LLU;
	volatile uint64_t x340 = UINT64_MAX;

	t84 = ((x337|(x338^x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	static uint32_t x342 = 35U;
	volatile int16_t x344 = 1;
	volatile int32_t t85 = -126;

	t85 = ((x341|(x342^x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = -1LL;
	int64_t x348 = 0LL;
	volatile int32_t t86 = 1309339;

	t86 = ((x345|(x346^x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 0U;
	volatile int64_t x350 = -35184249110368LL;
	int64_t x351 = INT64_MAX;

	t87 = ((x349|(x350^x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static uint16_t x354 = 5U;
	int64_t x355 = INT64_MIN;
	static uint8_t x356 = UINT8_MAX;
	static int32_t t88 = 47557134;

	t88 = ((x353|(x354^x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -119;
	volatile uint16_t x358 = UINT16_MAX;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t t89 = 5494;

	t89 = ((x357|(x358^x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 1261585;
	volatile int8_t x363 = 4;
	int64_t x364 = 37LL;
	int32_t t90 = -24820802;

	t90 = ((x361|(x362^x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = -1LL;
	static volatile int32_t t91 = 1;

	t91 = ((x365|(x366^x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 134680117972LLU;
	int8_t x371 = INT8_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 1;

	t92 = ((x369|(x370^x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 5U;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -1;
	volatile uint16_t x376 = 13U;
	int32_t t93 = -19;

	t93 = ((x373|(x374^x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 38U;
	int16_t x379 = -1;
	uint32_t x380 = UINT32_MAX;

	t94 = ((x377|(x378^x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 55U;
	int8_t x382 = INT8_MIN;
	uint16_t x384 = 100U;

	t95 = ((x381|(x382^x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = 122933LL;
	int32_t x386 = -1;
	int16_t x387 = -1;
	uint16_t x388 = 2348U;
	volatile int32_t t96 = 0;

	t96 = ((x385|(x386^x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 20;
	uint16_t x390 = 6U;
	int64_t x391 = 1916321902422503LL;
	uint16_t x392 = 902U;
	volatile int32_t t97 = 24906;

	t97 = ((x389|(x390^x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	int32_t x394 = 4;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -3916;

	t98 = ((x393|(x394^x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 0;
	volatile int32_t x398 = INT32_MIN;
	static uint8_t x399 = 11U;
	static int16_t x400 = INT16_MAX;
	static volatile int32_t t99 = 53285;

	t99 = ((x397|(x398^x399))==x400);

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

