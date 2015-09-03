#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static int8_t x9 = 0;
int64_t x11 = INT64_MIN;
volatile uint64_t x14 = 174062852165020LLU;
volatile int32_t t4 = 1358137;
int32_t t5 = -11;
int16_t x26 = INT16_MIN;
volatile int64_t x28 = -1LL;
int32_t x31 = INT32_MIN;
static int32_t t7 = 127052;
volatile uint8_t x33 = 33U;
volatile int32_t t8 = -236274385;
static volatile uint16_t x44 = 121U;
int64_t x46 = -1LL;
int8_t x48 = INT8_MIN;
static int16_t x60 = -11;
volatile uint16_t x63 = 17U;
volatile int32_t t15 = 848912;
int16_t x84 = -1;
volatile int32_t x87 = INT32_MIN;
uint16_t x90 = 4U;
uint8_t x95 = 1U;
volatile int16_t x96 = INT16_MIN;
volatile int32_t t23 = -3338;
int64_t x106 = -123239335861638874LL;
volatile int32_t t26 = -49089678;
static int16_t x118 = INT16_MIN;
volatile int8_t x121 = -1;
int16_t x126 = INT16_MIN;
volatile int8_t x130 = 2;
volatile int32_t t32 = -9171974;
static int32_t x135 = INT32_MIN;
static volatile int32_t x139 = INT32_MIN;
volatile int8_t x144 = INT8_MAX;
int8_t x145 = INT8_MIN;
int16_t x147 = INT16_MIN;
static int32_t t36 = 477;
int16_t x151 = -1;
volatile int8_t x152 = INT8_MAX;
uint32_t x156 = UINT32_MAX;
volatile int32_t t39 = -16492;
uint8_t x173 = 6U;
uint16_t x184 = UINT16_MAX;
int64_t x185 = -145649334LL;
static int32_t t46 = -61093055;
static volatile int16_t x190 = -1;
uint8_t x192 = UINT8_MAX;
int32_t x197 = 1999653;
volatile int32_t x199 = -1;
static int8_t x202 = 1;
volatile int8_t x203 = -8;
int8_t x208 = INT8_MAX;
uint16_t x216 = UINT16_MAX;
volatile int16_t x223 = INT16_MAX;
int8_t x226 = -1;
static uint64_t x229 = 5541LLU;
int32_t t57 = 4752;
uint8_t x233 = UINT8_MAX;
static int32_t t58 = 3441579;
int32_t x237 = -1;
static int64_t x249 = -1LL;
static uint16_t x255 = 186U;
static int32_t t63 = -1;
uint8_t x266 = 95U;
static uint8_t x270 = UINT8_MAX;
int32_t t70 = -48;
uint64_t x288 = 46938021677LLU;
volatile int32_t t71 = -966635;
int32_t x290 = 455665;
uint16_t x292 = 1U;
int32_t x295 = -1;
int32_t x298 = -1;
int64_t x301 = -1LL;
volatile int32_t t76 = -469304;
static int16_t x313 = -1;
int16_t x315 = -1;
volatile int32_t t78 = -5;
int16_t x320 = 0;
int32_t t79 = 3;
uint32_t x325 = 1U;
int8_t x334 = INT8_MIN;
int64_t x335 = INT64_MIN;
uint32_t x338 = 272087U;
static int32_t x344 = -60892;
int32_t t85 = -9336559;
int8_t x346 = INT8_MIN;
int8_t x360 = INT8_MIN;
static uint64_t x361 = UINT64_MAX;
int32_t x362 = 2;
static int32_t x363 = INT32_MAX;
int32_t x368 = INT32_MAX;
int16_t x371 = -430;
int32_t x379 = INT32_MIN;
static int32_t x381 = -2558;
int32_t t96 = -34177;
int32_t x392 = -933;
int32_t x399 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 194602172055168LLU;
	volatile int32_t t0 = 3866;

	t0 = ((x1<x2)<(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int8_t x6 = INT8_MIN;
	volatile uint64_t x7 = 24970530LLU;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 34;

	t1 = ((x5<x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 3LLU;
	uint8_t x12 = 0U;
	int32_t t2 = 31;

	t2 = ((x9<x10)<(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 59;

	t3 = ((x13<x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 43793LLU;
	static volatile uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = 27830;

	t4 = ((x17<x18)<(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 9U;
	static int16_t x22 = -1;
	static uint16_t x23 = 199U;
	uint64_t x24 = UINT64_MAX;

	t5 = ((x21<x22)<(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	uint64_t x27 = 1212224LLU;
	int32_t t6 = -41;

	t6 = ((x25<x26)<(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 3;
	int64_t x30 = INT64_MAX;
	volatile uint64_t x32 = 7406009840LLU;

	t7 = ((x29<x30)<(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MAX;

	t8 = ((x33<x34)<(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 28U;
	int16_t x38 = -2;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -33;

	t9 = ((x37<x38)<(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	static volatile int32_t x43 = INT32_MAX;
	int32_t t10 = -2087308;

	t10 = ((x41<x42)<(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 184LL;
	int32_t x47 = -1;
	static int32_t t11 = -9155;

	t11 = ((x45<x46)<(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int64_t x50 = -906683999085613320LL;
	volatile int64_t x51 = -1LL;
	static uint16_t x52 = 437U;
	volatile int32_t t12 = -19;

	t12 = ((x49<x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	int16_t x56 = -3;
	int32_t t13 = 377244936;

	t13 = ((x53<x54)<(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = 12384;
	int16_t x59 = -1;
	volatile int32_t t14 = -46236;

	t14 = ((x57<x58)<(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static volatile int64_t x62 = -1LL;
	uint32_t x64 = UINT32_MAX;

	t15 = ((x61<x62)<(x63|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 5795;

	t16 = ((x65<x66)<(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 7U;
	volatile uint32_t x70 = UINT32_MAX;
	int64_t x71 = -1LL;
	static int8_t x72 = INT8_MAX;
	int32_t t17 = 531173415;

	t17 = ((x69<x70)<(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	volatile int64_t x74 = -1LL;
	static volatile uint32_t x75 = 13758243U;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -57;

	t18 = ((x73<x74)<(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	uint16_t x78 = 10U;
	static int64_t x79 = -377067760209293074LL;
	uint64_t x80 = 40873119146338547LLU;
	int32_t t19 = -4904570;

	t19 = ((x77<x78)<(x79|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -299;
	int8_t x82 = 0;
	int8_t x83 = 0;
	volatile int32_t t20 = 153385344;

	t20 = ((x81<x82)<(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 41000337U;
	int64_t x86 = -1LL;
	static uint8_t x88 = 1U;
	static int32_t t21 = 405321;

	t21 = ((x85<x86)<(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static volatile int64_t x91 = -1LL;
	static int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 414964465;

	t22 = ((x89<x90)<(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = 6963U;

	t23 = ((x93<x94)<(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 29;

	t24 = ((x97<x98)<(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	uint32_t x103 = 406280U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -37823;

	t25 = ((x101<x102)<(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x107 = INT16_MIN;
	static uint64_t x108 = 3488379970LLU;

	t26 = ((x105<x106)<(x107|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile int16_t x110 = 1;
	int16_t x111 = -13;
	volatile int16_t x112 = -1;
	int32_t t27 = 29665159;

	t27 = ((x109<x110)<(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = 1776;
	int16_t x115 = -1;
	uint8_t x116 = 3U;
	volatile int32_t t28 = 38552;

	t28 = ((x113<x114)<(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int8_t x119 = INT8_MIN;
	static int16_t x120 = -1;
	volatile int32_t t29 = 886183;

	t29 = ((x117<x118)<(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	volatile int16_t x123 = -1;
	static uint64_t x124 = 448759001671LLU;
	volatile int32_t t30 = -254232;

	t30 = ((x121<x122)<(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 53492125U;
	static uint16_t x127 = 19557U;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = -9140515;

	t31 = ((x125<x126)<(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 2U;
	volatile int32_t x131 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;

	t32 = ((x129<x130)<(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	uint32_t x134 = UINT32_MAX;
	volatile int8_t x136 = -1;
	volatile int32_t t33 = 873;

	t33 = ((x133<x134)<(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = 2256967542307229LL;
	uint32_t x138 = 2U;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = -24;

	t34 = ((x137<x138)<(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 2U;
	uint32_t x142 = 0U;
	int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 32146972;

	t35 = ((x141<x142)<(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = 12609U;
	volatile int64_t x148 = INT64_MAX;

	t36 = ((x145<x146)<(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = 1699839U;
	volatile int32_t t37 = -15816055;

	t37 = ((x149<x150)<(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int32_t t38 = -9934150;

	t38 = ((x153<x154)<(x155|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 282U;
	int8_t x158 = 9;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -1;

	t39 = ((x157<x158)<(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int64_t x162 = INT64_MAX;
	static uint16_t x163 = 129U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 4;

	t40 = ((x161<x162)<(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 0;
	int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 0U;
	static int32_t t41 = 9996;

	t41 = ((x165<x166)<(x167|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	volatile int16_t x170 = -1891;
	static int64_t x171 = 21833LL;
	volatile int32_t x172 = -6209919;
	static int32_t t42 = 188022599;

	t42 = ((x169<x170)<(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 28647U;
	int32_t t43 = -490375392;

	t43 = ((x173<x174)<(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	static uint8_t x178 = 3U;
	int32_t x179 = -1;
	static int16_t x180 = 4;
	int32_t t44 = -27123;

	t44 = ((x177<x178)<(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 0;
	int64_t x182 = INT64_MAX;
	uint8_t x183 = 3U;
	int32_t t45 = 87;

	t45 = ((x181<x182)<(x183|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	volatile int16_t x187 = INT16_MAX;
	static uint32_t x188 = 283U;

	t46 = ((x185<x186)<(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 12;
	static int8_t x191 = -1;
	volatile int32_t t47 = -27377;

	t47 = ((x189<x190)<(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -25133;

	t48 = ((x193<x194)<(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	volatile int8_t x200 = -1;
	static volatile int32_t t49 = 238;

	t49 = ((x197<x198)<(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = 1;
	uint32_t x204 = 244944U;
	int32_t t50 = -398710714;

	t50 = ((x201<x202)<(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int16_t x206 = -1839;
	int32_t x207 = INT32_MIN;
	int32_t t51 = -56802;

	t51 = ((x205<x206)<(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 1126U;
	int64_t x210 = -130928677491443406LL;
	int8_t x211 = INT8_MAX;
	int64_t x212 = -125394905213599363LL;
	static int32_t t52 = -1924;

	t52 = ((x209<x210)<(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	volatile uint8_t x214 = UINT8_MAX;
	volatile int16_t x215 = -1;
	static volatile int32_t t53 = -8501516;

	t53 = ((x213<x214)<(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 23529U;
	uint16_t x218 = 2U;
	int8_t x219 = 61;
	static uint16_t x220 = 0U;
	int32_t t54 = 971;

	t54 = ((x217<x218)<(x219|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	int64_t x222 = INT64_MIN;
	uint16_t x224 = 37U;
	int32_t t55 = 15753049;

	t55 = ((x221<x222)<(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	static uint16_t x227 = 910U;
	int16_t x228 = INT16_MIN;
	static int32_t t56 = -2;

	t56 = ((x225<x226)<(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 146715LLU;
	int8_t x231 = 0;
	volatile int8_t x232 = INT8_MIN;

	t57 = ((x229<x230)<(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 767774525213207859LLU;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = -1;

	t58 = ((x233<x234)<(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = -4329497884453207LL;
	volatile int64_t x239 = INT64_MIN;
	static int32_t x240 = -1;
	static volatile int32_t t59 = -1009631319;

	t59 = ((x237<x238)<(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MAX;
	static uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -77107;

	t60 = ((x241<x242)<(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	static volatile uint16_t x246 = 255U;
	int8_t x247 = -2;
	uint64_t x248 = 7187475LLU;
	static volatile int32_t t61 = 63504874;

	t61 = ((x245<x246)<(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = -6;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -7028;

	t62 = ((x249<x250)<(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	static volatile int8_t x254 = INT8_MAX;
	static volatile int64_t x256 = INT64_MAX;

	t63 = ((x253<x254)<(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -1;
	int64_t x258 = 2017LL;
	int64_t x259 = -290338LL;
	int64_t x260 = 0LL;
	volatile int32_t t64 = 11333213;

	t64 = ((x257<x258)<(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 1;
	static uint64_t x262 = 1334806354594682LLU;
	int16_t x263 = 4;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -72;

	t65 = ((x261<x262)<(x263|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	int16_t x267 = 1;
	volatile int16_t x268 = INT16_MIN;
	int32_t t66 = -2610;

	t66 = ((x265<x266)<(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	static int8_t x271 = -10;
	static int16_t x272 = 124;
	volatile int32_t t67 = -46845;

	t67 = ((x269<x270)<(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 58224622LLU;
	static int32_t x274 = 712;
	int64_t x275 = -1LL;
	uint8_t x276 = 0U;
	volatile int32_t t68 = 0;

	t68 = ((x273<x274)<(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 3979U;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 109302;

	t69 = ((x277<x278)<(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 19927U;
	static volatile int16_t x284 = INT16_MIN;

	t70 = ((x281<x282)<(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 16;
	uint8_t x286 = 3U;
	int8_t x287 = 46;

	t71 = ((x285<x286)<(x287|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	volatile int32_t t72 = -170;

	t72 = ((x289<x290)<(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	volatile int64_t x294 = INT64_MAX;
	int32_t x296 = -1;
	int32_t t73 = 267772193;

	t73 = ((x293<x294)<(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 7285727LLU;
	int16_t x299 = 30;
	static uint8_t x300 = 1U;
	volatile int32_t t74 = -51689044;

	t74 = ((x297<x298)<(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	static int64_t x303 = INT64_MIN;
	volatile int8_t x304 = 0;
	static volatile int32_t t75 = 50552;

	t75 = ((x301<x302)<(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = 563115;
	static volatile uint16_t x306 = 299U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;

	t76 = ((x305<x306)<(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x309 = 47U;
	int64_t x310 = 16316994LL;
	uint64_t x311 = UINT64_MAX;
	static volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 18837;

	t77 = ((x309<x310)<(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	int16_t x316 = -1;

	t78 = ((x313<x314)<(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = -1;
	int8_t x318 = 12;
	int16_t x319 = -572;

	t79 = ((x317<x318)<(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	static int64_t x322 = INT64_MAX;
	static int16_t x323 = -1;
	int8_t x324 = 0;
	static volatile int32_t t80 = -13292;

	t80 = ((x321<x322)<(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = 13912734511573994LL;
	volatile int8_t x327 = -17;
	int32_t x328 = -1;
	static volatile int32_t t81 = 18678;

	t81 = ((x325<x326)<(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	static int16_t x330 = -17;
	static volatile int32_t x331 = INT32_MAX;
	int8_t x332 = 0;
	volatile int32_t t82 = -21;

	t82 = ((x329<x330)<(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 2257;

	t83 = ((x333<x334)<(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 31U;
	uint8_t x339 = 30U;
	static int32_t x340 = INT32_MIN;
	volatile int32_t t84 = 1;

	t84 = ((x337<x338)<(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	uint8_t x342 = 0U;
	int32_t x343 = 7790;

	t85 = ((x341<x342)<(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	volatile int32_t x347 = 106218106;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 31;

	t86 = ((x345<x346)<(x347|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 24U;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = -3520469;

	t87 = ((x349<x350)<(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -584;
	static uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = INT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 6213789;

	t88 = ((x353<x354)<(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 2U;
	static volatile int8_t x358 = -12;
	int16_t x359 = -1;
	static int32_t t89 = 261336777;

	t89 = ((x357<x358)<(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x364 = -2;
	volatile int32_t t90 = 13;

	t90 = ((x361<x362)<(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	volatile int32_t t91 = -5899591;

	t91 = ((x365<x366)<(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = 279963310420325LLU;
	int64_t x370 = -1LL;
	uint32_t x372 = 57465573U;
	int32_t t92 = 23;

	t92 = ((x369<x370)<(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	volatile int16_t x374 = -6;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 2206;

	t93 = ((x373<x374)<(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = 33936LL;
	volatile int8_t x380 = 1;
	int32_t t94 = 35976;

	t94 = ((x377<x378)<(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x382 = -195;
	uint16_t x383 = 13476U;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 10;

	t95 = ((x381<x382)<(x383|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 484827;
	volatile uint8_t x386 = 65U;
	volatile int64_t x387 = -1LL;
	int32_t x388 = INT32_MAX;

	t96 = ((x385<x386)<(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = -2;
	volatile int16_t x391 = INT16_MIN;
	static int32_t t97 = -1;

	t97 = ((x389<x390)<(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t98 = 16435;

	t98 = ((x393<x394)<(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	uint8_t x398 = 3U;
	volatile int8_t x400 = -1;
	static int32_t t99 = 550;

	t99 = ((x397<x398)<(x399|x400));

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

