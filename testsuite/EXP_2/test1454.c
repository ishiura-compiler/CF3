#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 2U;
int32_t x8 = 2;
int16_t x15 = INT16_MIN;
int16_t x18 = INT16_MIN;
int16_t x22 = INT16_MIN;
volatile int32_t x23 = -1;
uint16_t x25 = 1850U;
static int16_t x33 = INT16_MIN;
int8_t x34 = -1;
uint64_t x36 = 15LLU;
static volatile int64_t t9 = 232936896998263057LL;
static int64_t x42 = -5616982633959LL;
int64_t x46 = INT64_MAX;
int32_t x53 = INT32_MAX;
uint64_t x55 = 499679215322LLU;
static int8_t x56 = INT8_MIN;
volatile uint64_t x58 = 1865354402576LLU;
int64_t t17 = 16485146844582LL;
uint64_t x73 = UINT64_MAX;
uint16_t x75 = 1161U;
static int8_t x77 = 0;
int32_t x82 = -124686988;
int32_t x84 = -14;
static int32_t x87 = -17;
int64_t x91 = INT64_MIN;
int16_t x94 = INT16_MIN;
int16_t x96 = INT16_MAX;
int32_t t23 = 99;
int8_t x97 = INT8_MAX;
static int64_t t24 = -3LL;
static int32_t x103 = INT32_MIN;
int8_t x104 = -2;
static volatile int32_t t25 = 0;
static volatile int8_t x109 = INT8_MAX;
static int64_t x116 = INT64_MIN;
volatile int16_t x119 = -1;
volatile int32_t x122 = -1;
int32_t x124 = 511006;
volatile int32_t t30 = -31029850;
static int16_t x130 = -1;
uint16_t x135 = 266U;
int32_t x137 = -1;
int32_t x140 = INT32_MIN;
uint8_t x143 = 122U;
uint16_t x150 = 22U;
int64_t x151 = INT64_MIN;
static uint64_t t39 = 13989444155532LLU;
int32_t x164 = INT32_MIN;
int64_t x165 = -4330730223LL;
int32_t t41 = -124660075;
static uint32_t x171 = 41084U;
int16_t x174 = INT16_MAX;
uint16_t x177 = 12695U;
uint32_t x179 = UINT32_MAX;
uint32_t x181 = 3321446U;
uint8_t x182 = UINT8_MAX;
int32_t t45 = 140;
int8_t x185 = INT8_MIN;
static volatile uint32_t t47 = 57989U;
static volatile uint16_t x193 = 56U;
int32_t x198 = INT32_MIN;
int32_t x215 = 14;
int8_t x219 = INT8_MIN;
static int8_t x226 = -1;
uint8_t x229 = 2U;
uint64_t x230 = 2468992799LLU;
int8_t x232 = 5;
int32_t t59 = 965;
static volatile int32_t x241 = 32520;
static volatile int8_t x244 = INT8_MAX;
int64_t t62 = -246077416099411LL;
uint8_t x256 = 12U;
int32_t x260 = INT32_MAX;
int32_t x267 = -1;
uint16_t x274 = UINT16_MAX;
int64_t x280 = -233147466781LL;
uint16_t x283 = 2U;
volatile int8_t x285 = -1;
static uint32_t x288 = UINT32_MAX;
int64_t x303 = -1LL;
static int32_t x305 = INT32_MIN;
volatile int32_t t76 = -14161;
int32_t x313 = 137871456;
static int8_t x316 = INT8_MAX;
int64_t x317 = -1573088822LL;
static int32_t x331 = -1;
int32_t t82 = 377;
int16_t x333 = -1;
uint64_t x337 = 365LLU;
static uint16_t x341 = 137U;
int8_t x343 = -1;
int32_t x344 = -1;
volatile uint64_t x351 = 543686525244922932LLU;
volatile int8_t x352 = 22;
volatile int32_t t87 = -1;
int32_t t88 = -14212388;
static int64_t x357 = INT64_MIN;
static uint64_t t89 = 13693998LLU;
static int16_t x377 = -1;
int32_t x388 = 42651503;
static volatile int64_t t97 = -1LL;
volatile uint64_t x395 = 2917012583LLU;
int32_t x397 = -427673;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	static uint32_t x4 = 331747889U;
	uint32_t t0 = 3U;

	t0 = ((x1==(x2<x3))&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 190504905363LLU;
	static uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 39;

	t1 = ((x5==(x6<x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = UINT64_MAX;
	static volatile int16_t x11 = -1;
	uint16_t x12 = 688U;
	int32_t t2 = 0;

	t2 = ((x9==(x10<x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile uint8_t x14 = 9U;
	static int64_t x16 = -1LL;
	int64_t t3 = -2LL;

	t3 = ((x13==(x14<x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -301LL;
	static int64_t t4 = 422954672313632858LL;

	t4 = ((x17==(x18<x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -423;
	static int32_t x24 = INT32_MAX;
	int32_t t5 = 3389458;

	t5 = ((x21==(x22<x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 19618LL;

	t6 = ((x25==(x26<x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = 0;
	uint16_t x31 = 41U;
	uint32_t x32 = 223921U;
	uint32_t t7 = 2U;

	t7 = ((x29==(x30<x31))&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x35 = -17710465;
	static uint64_t t8 = 316111480892080217LLU;

	t8 = ((x33==(x34<x35))&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 6U;
	uint64_t x38 = 150985912585707721LLU;
	int32_t x39 = INT32_MIN;
	static volatile int64_t x40 = INT64_MAX;

	t9 = ((x37==(x38<x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	static uint16_t x43 = 12954U;
	int8_t x44 = 24;
	volatile int32_t t10 = 28;

	t10 = ((x41==(x42<x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	static uint32_t x47 = UINT32_MAX;
	static int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = 6;

	t11 = ((x45==(x46<x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = -19;
	int16_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 8173LLU;

	t12 = ((x49==(x50<x51))&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	int32_t t13 = -1555656;

	t13 = ((x53==(x54<x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x59 = INT32_MAX;
	static int64_t x60 = INT64_MAX;
	volatile int64_t t14 = 73269204036LL;

	t14 = ((x57==(x58<x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 0U;
	uint32_t x62 = 131U;
	static uint8_t x63 = 78U;
	uint64_t x64 = 12021783624LLU;
	volatile uint64_t t15 = 4LLU;

	t15 = ((x61==(x62<x63))&x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -153;
	uint32_t x66 = 1040U;
	volatile int16_t x67 = INT16_MAX;
	int64_t x68 = 397LL;
	volatile int64_t t16 = 3715451556820380521LL;

	t16 = ((x65==(x66<x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int64_t x70 = -1LL;
	volatile int64_t x71 = INT64_MAX;
	int64_t x72 = -13740577996025LL;

	t17 = ((x69==(x70<x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 3739U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -7;

	t18 = ((x73==(x74<x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = -1;
	volatile int64_t x79 = INT64_MIN;
	static uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 14479255U;

	t19 = ((x77==(x78<x79))&x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 0U;
	uint64_t x83 = 2145380LLU;
	volatile int32_t t20 = -372;

	t20 = ((x81==(x82<x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -63244;

	t21 = ((x85==(x86<x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	static int8_t x90 = INT8_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = 43;

	t22 = ((x89==(x90<x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	uint8_t x95 = 46U;

	t23 = ((x93==(x94<x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MIN;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = 3304356LL;

	t24 = ((x97==(x98<x99))&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MAX;

	t25 = ((x101==(x102<x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 3U;
	int8_t x106 = -10;
	static int64_t x107 = -5103LL;
	int16_t x108 = -1;
	volatile int32_t t26 = -217;

	t26 = ((x105==(x106<x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MAX;
	uint16_t x111 = 15U;
	int64_t x112 = 5509LL;
	static int64_t t27 = 53232304LL;

	t27 = ((x109==(x110<x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	static int16_t x115 = -1;
	static volatile int64_t t28 = -1197548553713659LL;

	t28 = ((x113==(x114<x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -58;
	static int32_t x118 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -59848;

	t29 = ((x117==(x118<x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 65U;
	volatile int32_t x123 = -1;

	t30 = ((x121==(x122<x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile int32_t x126 = -1;
	int64_t x127 = INT64_MAX;
	int32_t x128 = -104;
	int32_t t31 = 65354481;

	t31 = ((x125==(x126<x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 0LL;
	static int16_t x131 = -1;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = -2;

	t32 = ((x129==(x130<x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	int64_t x134 = -355297370468665170LL;
	int16_t x136 = 3822;
	int32_t t33 = 1056038651;

	t33 = ((x133==(x134<x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	volatile int32_t t34 = 680701644;

	t34 = ((x137==(x138<x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	static int32_t x144 = 37;
	int32_t t35 = -2578;

	t35 = ((x141==(x142<x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = -1;
	volatile int16_t x147 = -2045;
	uint32_t x148 = 1797U;
	uint32_t t36 = 7343U;

	t36 = ((x145==(x146<x147))&x148);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int32_t x152 = -1;
	int32_t t37 = -5367469;

	t37 = ((x149==(x150<x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	static int8_t x154 = -6;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = 59993126;
	int32_t t38 = 15889454;

	t38 = ((x153==(x154<x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MIN;
	static uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;

	t39 = ((x157==(x158<x159))&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MAX;
	uint16_t x162 = 114U;
	int16_t x163 = 21;
	volatile int32_t t40 = -208113;

	t40 = ((x161==(x162<x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 2796U;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -262458712;

	t41 = ((x165==(x166<x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 21605;

	t42 = ((x169==(x170<x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -7;

	t43 = ((x173==(x174<x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = UINT8_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = 355498572LLU;

	t44 = ((x177==(x178<x179))&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x183 = 6168U;
	volatile uint16_t x184 = 77U;

	t45 = ((x181==(x182<x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -2627625990921000217LL;
	uint32_t x187 = 363303U;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t46 = 16011523140347933LLU;

	t46 = ((x185==(x186<x187))&x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = -6;
	int16_t x191 = INT16_MIN;
	static volatile uint32_t x192 = UINT32_MAX;

	t47 = ((x189==(x190<x191))&x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -1LL;
	int32_t x195 = -1;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -4;

	t48 = ((x193==(x194<x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -186;
	int16_t x199 = -23;
	static int32_t x200 = 1;
	static volatile int32_t t49 = -1;

	t49 = ((x197==(x198<x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 118589;
	volatile int32_t x202 = -894;
	volatile int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 4498103;

	t50 = ((x201==(x202<x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 0;
	static int8_t x206 = -1;
	uint32_t x207 = 25411U;
	static uint8_t x208 = 16U;
	int32_t t51 = 86857;

	t51 = ((x205==(x206<x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MIN;
	static uint16_t x211 = 23498U;
	static uint8_t x212 = 56U;
	int32_t t52 = 17565;

	t52 = ((x209==(x210<x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	static volatile int16_t x214 = INT16_MAX;
	static uint8_t x216 = 25U;
	int32_t t53 = 0;

	t53 = ((x213==(x214<x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	uint64_t x218 = 3178968578430556LLU;
	uint32_t x220 = 53U;
	uint32_t t54 = 242U;

	t54 = ((x217==(x218<x219))&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 3U;
	uint8_t x222 = 71U;
	int32_t x223 = INT32_MAX;
	volatile uint8_t x224 = 0U;
	static int32_t t55 = 8148;

	t55 = ((x221==(x222<x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 0LL;
	int32_t x227 = INT32_MAX;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = -13;

	t56 = ((x225==(x226<x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x231 = UINT32_MAX;
	int32_t t57 = 9;

	t57 = ((x229==(x230<x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = 895135893U;
	volatile int64_t x235 = INT64_MIN;
	int16_t x236 = 4;
	volatile int32_t t58 = -42739;

	t58 = ((x233==(x234<x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 28;
	static int32_t x238 = 4863842;
	static int16_t x239 = INT16_MIN;
	int16_t x240 = -7741;

	t59 = ((x237==(x238<x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x242 = 1U;
	int32_t x243 = -1;
	int32_t t60 = -371846;

	t60 = ((x241==(x242<x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	int32_t x247 = -532395;
	static uint16_t x248 = 201U;
	volatile int32_t t61 = -3701;

	t61 = ((x245==(x246<x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 1021;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	int64_t x252 = 4146433LL;

	t62 = ((x249==(x250<x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	uint8_t x254 = 108U;
	int16_t x255 = INT16_MIN;
	int32_t t63 = -120;

	t63 = ((x253==(x254<x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = 73U;
	int32_t t64 = 400760;

	t64 = ((x257==(x258<x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 122;
	int16_t x262 = INT16_MIN;
	volatile int64_t x263 = INT64_MAX;
	volatile int16_t x264 = 617;
	int32_t t65 = -11337777;

	t65 = ((x261==(x262<x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	static int8_t x266 = 0;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 12739687;

	t66 = ((x265==(x266<x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = -1;
	volatile int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -7953825;

	t67 = ((x269==(x270<x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int16_t x275 = -1;
	uint16_t x276 = 416U;
	static int32_t t68 = 8;

	t68 = ((x273==(x274<x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 261718973275255367LLU;
	volatile int64_t x278 = INT64_MIN;
	uint8_t x279 = 40U;
	volatile int64_t t69 = 754668898LL;

	t69 = ((x277==(x278<x279))&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 52U;
	int64_t x282 = -1LL;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -7101;

	t70 = ((x281==(x282<x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = 35;
	volatile int8_t x287 = INT8_MIN;
	uint32_t t71 = 47037268U;

	t71 = ((x285==(x286<x287))&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	int64_t x290 = -1LL;
	uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 0;

	t72 = ((x289==(x290<x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	static uint16_t x294 = 5802U;
	uint8_t x295 = 36U;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t73 = -32LL;

	t73 = ((x293==(x294<x295))&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 194230651696636LL;
	uint64_t x298 = 11000169745998881LLU;
	uint64_t x299 = 15590709343115931LLU;
	int32_t x300 = -144;
	int32_t t74 = 178277;

	t74 = ((x297==(x298<x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	volatile int8_t x302 = 13;
	static int16_t x304 = -149;
	int32_t t75 = 9;

	t75 = ((x301==(x302<x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = 14133U;
	int16_t x307 = INT16_MIN;
	static int32_t x308 = INT32_MIN;

	t76 = ((x305==(x306<x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x310 = INT64_MIN;
	static volatile uint8_t x311 = 19U;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 148402875;

	t77 = ((x309==(x310<x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MAX;
	static volatile int32_t t78 = -9207280;

	t78 = ((x313==(x314<x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 5060819LLU;
	uint64_t t79 = 216261479LLU;

	t79 = ((x317==(x318<x319))&x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 0U;
	uint64_t x322 = 1400190580910121927LLU;
	volatile int64_t x323 = 99424LL;
	int32_t x324 = -26160980;
	volatile int32_t t80 = 7;

	t80 = ((x321==(x322<x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x325 = 57U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MAX;
	volatile int8_t x328 = -1;
	volatile int32_t t81 = 28;

	t81 = ((x325==(x326<x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x332 = INT32_MAX;

	t82 = ((x329==(x330<x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 94137378761001397LLU;
	volatile uint64_t t83 = 30055586270494LLU;

	t83 = ((x333==(x334<x335))&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	static int16_t x340 = -273;
	volatile int32_t t84 = -37082523;

	t84 = ((x337==(x338<x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 13745;
	int32_t t85 = 12100;

	t85 = ((x341==(x342<x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 1685U;
	uint32_t x346 = 5U;
	volatile int32_t x347 = -1;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -420295;

	t86 = ((x345==(x346<x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int8_t x350 = INT8_MAX;

	t87 = ((x349==(x350<x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -1;
	static int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 2877U;

	t88 = ((x353==(x354<x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = 43U;
	volatile int8_t x359 = 43;
	uint64_t x360 = 3079117269638053745LLU;

	t89 = ((x357==(x358<x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 520012379;

	t90 = ((x361==(x362<x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	uint64_t x366 = 4014LLU;
	static volatile uint16_t x367 = 1814U;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = 880;

	t91 = ((x365==(x366<x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	int32_t x372 = -34044;
	volatile int32_t t92 = 26561;

	t92 = ((x369==(x370<x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 3U;
	uint16_t x376 = 7805U;
	volatile int32_t t93 = 1549;

	t93 = ((x373==(x374<x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 22U;
	uint16_t x379 = 23301U;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 0;

	t94 = ((x377==(x378<x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	static int32_t x383 = INT32_MIN;
	static int8_t x384 = INT8_MIN;
	int32_t t95 = -1787;

	t95 = ((x381==(x382<x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -2;
	int16_t x386 = -1;
	uint32_t x387 = 96530242U;
	static volatile int32_t t96 = -12896;

	t96 = ((x385==(x386<x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -7;
	uint8_t x390 = UINT8_MAX;
	volatile int64_t x391 = INT64_MAX;
	volatile int64_t x392 = -1LL;

	t97 = ((x389==(x390<x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = 0;
	int32_t x396 = INT32_MIN;
	static int32_t t98 = 40090;

	t98 = ((x393==(x394<x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = -1;
	static uint8_t x400 = 0U;
	static int32_t t99 = -2663140;

	t99 = ((x397==(x398<x399))&x400);

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

