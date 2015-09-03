#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int32_t x6 = INT32_MIN;
int16_t x17 = INT16_MIN;
uint16_t x20 = 734U;
static int16_t x34 = INT16_MIN;
uint16_t x35 = 3U;
int64_t x36 = 4560LL;
int32_t t8 = 3;
int32_t x46 = INT32_MIN;
static int64_t x50 = INT64_MAX;
int64_t x51 = -3278459587923856LL;
static volatile uint16_t x60 = 178U;
uint32_t x64 = UINT32_MAX;
int8_t x66 = INT8_MIN;
volatile int64_t x69 = INT64_MAX;
int32_t t17 = -1438;
int64_t x73 = 0LL;
int32_t t19 = -6741135;
static int64_t x84 = -15741614666551LL;
volatile int16_t x86 = 1612;
int64_t x88 = -35135090477905LL;
int64_t x89 = 1853001842296596LL;
uint32_t x90 = UINT32_MAX;
volatile int32_t t22 = -606793;
static int32_t x100 = INT32_MIN;
volatile int32_t t25 = -11192381;
volatile int16_t x110 = 1;
int64_t x111 = INT64_MIN;
int16_t x113 = INT16_MIN;
static int32_t t28 = 62;
static uint16_t x119 = 22721U;
volatile int16_t x120 = 3668;
volatile int32_t t30 = -4089;
uint64_t x125 = UINT64_MAX;
int16_t x129 = INT16_MIN;
uint8_t x136 = 82U;
uint64_t x139 = UINT64_MAX;
uint8_t x153 = UINT8_MAX;
int32_t t38 = -450;
uint16_t x157 = 56U;
int32_t t39 = -780;
int16_t x176 = INT16_MIN;
int32_t t43 = 7;
volatile int32_t x180 = -1;
volatile int32_t t45 = -551008261;
volatile int32_t x190 = -1359;
volatile int64_t x192 = 2449091616408LL;
uint32_t x196 = 292U;
static volatile uint32_t x197 = 42413608U;
volatile uint32_t x204 = 4U;
int16_t x206 = -7;
volatile int32_t x207 = INT32_MIN;
int8_t x209 = INT8_MAX;
volatile int16_t x210 = 1487;
int8_t x213 = INT8_MIN;
int16_t x215 = INT16_MAX;
int32_t t53 = -4;
int32_t x218 = -30069;
uint32_t x219 = 10U;
uint64_t x222 = 390600828829LLU;
int32_t t55 = -1935345;
volatile int16_t x226 = INT16_MAX;
uint8_t x231 = UINT8_MAX;
int32_t x234 = -127;
static int32_t x236 = 1;
volatile int32_t t58 = 380616794;
static volatile int8_t x240 = -1;
int32_t x242 = INT32_MIN;
static int32_t x244 = -1;
int32_t x245 = INT32_MIN;
int8_t x254 = INT8_MIN;
int8_t x259 = INT8_MAX;
int32_t x266 = INT32_MIN;
static uint8_t x267 = 1U;
volatile uint16_t x278 = 995U;
static volatile uint64_t x280 = UINT64_MAX;
uint8_t x287 = 115U;
static volatile int32_t t72 = -404401;
int64_t x300 = INT64_MAX;
int32_t t75 = -608492545;
static int32_t x306 = 5608;
uint16_t x307 = 0U;
volatile uint64_t x310 = 30LLU;
uint8_t x312 = 12U;
int32_t t77 = -2296;
volatile int64_t x315 = 9252867778144161LL;
volatile uint32_t x328 = 151421526U;
static volatile int32_t x338 = -993;
int8_t x340 = INT8_MIN;
volatile int16_t x341 = INT16_MIN;
static uint16_t x342 = 15363U;
volatile int32_t t86 = 2092598;
volatile int16_t x356 = 8;
int64_t x358 = INT64_MIN;
static int8_t x361 = INT8_MIN;
volatile int32_t t90 = 8501149;
uint8_t x371 = 0U;
static volatile int64_t x380 = -155653389074LL;
int32_t t95 = -227;
static int32_t x393 = -1;


void f0(void) {
	uint32_t x2 = 4620412U;
	static int8_t x3 = -1;
	static int32_t x4 = 177;
	static int32_t t0 = -127924728;

	t0 = ((x1|x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint16_t x7 = 194U;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -32268344;

	t1 = ((x5|x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int16_t x10 = -1;
	volatile int16_t x11 = INT16_MIN;
	static int8_t x12 = 2;
	int32_t t2 = -2647;

	t2 = ((x9|x10)<=(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int64_t x14 = 1LL;
	int64_t x15 = -1LL;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -948;

	t3 = ((x13|x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	static int8_t x19 = INT8_MIN;
	volatile int32_t t4 = 186;

	t4 = ((x17|x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	volatile int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 1514994110057236LL;
	int32_t t5 = -23762;

	t5 = ((x21|x22)<=(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	int64_t x26 = 5064309LL;
	int32_t x27 = 475280;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -1030910;

	t6 = ((x25|x26)<=(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 15757U;
	int16_t x30 = 1;
	int8_t x31 = -1;
	int8_t x32 = 1;
	volatile int32_t t7 = -16345;

	t7 = ((x29|x30)<=(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 318321U;

	t8 = ((x33|x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -30077834;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 9348U;
	uint64_t x40 = UINT64_MAX;
	static int32_t t9 = 1214;

	t9 = ((x37|x38)<=(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	int32_t x43 = 70;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 61860;

	t10 = ((x41|x42)<=(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	volatile int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 344831;

	t11 = ((x45|x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 57U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 18;

	t12 = ((x49|x50)<=(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	int8_t x56 = -1;
	volatile int32_t t13 = 3;

	t13 = ((x53|x54)<=(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 8;
	static int16_t x58 = -6;
	int32_t x59 = -262912;
	int32_t t14 = 1;

	t14 = ((x57|x58)<=(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -51346;
	uint8_t x62 = 2U;
	int16_t x63 = INT16_MAX;
	volatile int32_t t15 = -3207216;

	t15 = ((x61|x62)<=(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 1U;
	int8_t x67 = -7;
	volatile int64_t x68 = INT64_MAX;
	int32_t t16 = 13247;

	t16 = ((x65|x66)<=(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -36;
	int32_t x71 = INT32_MIN;
	static volatile uint16_t x72 = 8815U;

	t17 = ((x69|x70)<=(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = -2990LL;
	uint64_t x76 = 712216427LLU;
	int32_t t18 = 15742;

	t18 = ((x73|x74)<=(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = -174228716741486181LL;
	volatile uint64_t x79 = 0LLU;
	int32_t x80 = INT32_MIN;

	t19 = ((x77|x78)<=(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = 14;
	uint8_t x83 = 3U;
	volatile int32_t t20 = 0;

	t20 = ((x81|x82)<=(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 299;
	static uint16_t x87 = 6U;
	volatile int32_t t21 = 45673;

	t21 = ((x85|x86)<=(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = -1;
	uint32_t x92 = 27U;

	t22 = ((x89|x90)<=(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 705LLU;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = -1;
	int64_t x96 = 1LL;
	int32_t t23 = 3041;

	t23 = ((x93|x94)<=(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	static int64_t x98 = 1904256164LL;
	volatile uint8_t x99 = 50U;
	volatile int32_t t24 = -74180068;

	t24 = ((x97|x98)<=(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MAX;
	uint16_t x103 = 10067U;
	uint16_t x104 = UINT16_MAX;

	t25 = ((x101|x102)<=(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 13913784642747LLU;
	int8_t x106 = 22;
	uint8_t x107 = 0U;
	uint16_t x108 = 258U;
	volatile int32_t t26 = 70010;

	t26 = ((x105|x106)<=(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -8266729;

	t27 = ((x109|x110)<=(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	static int8_t x115 = 1;
	static int32_t x116 = -1;

	t28 = ((x113|x114)<=(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 15;
	int16_t x118 = INT16_MAX;
	volatile int32_t t29 = 0;

	t29 = ((x117|x118)<=(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 38;
	int16_t x122 = INT16_MAX;
	volatile int8_t x123 = -1;
	uint32_t x124 = UINT32_MAX;

	t30 = ((x121|x122)<=(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	volatile uint8_t x127 = UINT8_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t31 = -12408;

	t31 = ((x125|x126)<=(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x130 = UINT8_MAX;
	int16_t x131 = 0;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 2049;

	t32 = ((x129|x130)<=(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	uint32_t x135 = 54418U;
	volatile int32_t t33 = 115;

	t33 = ((x133|x134)<=(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 116484;

	t34 = ((x137|x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 41586411LLU;
	int32_t x142 = -1;
	static int8_t x143 = -1;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -2212216;

	t35 = ((x141|x142)<=(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static volatile uint32_t x146 = 147451U;
	int32_t x147 = INT32_MIN;
	volatile int64_t x148 = -4884901374784336LL;
	static volatile int32_t t36 = 41;

	t36 = ((x145|x146)<=(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 14U;
	volatile int16_t x150 = INT16_MAX;
	static int8_t x151 = 1;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -249;

	t37 = ((x149|x150)<=(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	volatile int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;

	t38 = ((x153|x154)<=(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = INT16_MAX;

	t39 = ((x157|x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 2022307LLU;
	static int16_t x162 = -23;
	uint8_t x163 = 102U;
	static int32_t x164 = INT32_MIN;
	int32_t t40 = 47226198;

	t40 = ((x161|x162)<=(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	uint16_t x166 = 4312U;
	uint32_t x167 = 6U;
	uint16_t x168 = 16U;
	static volatile int32_t t41 = 22;

	t41 = ((x165|x166)<=(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 419969905LLU;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t42 = 73224;

	t42 = ((x169|x170)<=(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = UINT16_MAX;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;

	t43 = ((x173|x174)<=(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 532636LLU;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t44 = -210;

	t44 = ((x177|x178)<=(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	uint8_t x183 = UINT8_MAX;
	uint64_t x184 = UINT64_MAX;

	t45 = ((x181|x182)<=(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	uint8_t x186 = 122U;
	uint64_t x187 = 13789LLU;
	uint8_t x188 = 1U;
	int32_t t46 = -12661;

	t46 = ((x185|x186)<=(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	volatile int32_t t47 = 66776896;

	t47 = ((x189|x190)<=(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	volatile int64_t x194 = INT64_MIN;
	static volatile int16_t x195 = INT16_MAX;
	int32_t t48 = -1;

	t48 = ((x193|x194)<=(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int8_t x199 = 1;
	uint8_t x200 = 16U;
	volatile int32_t t49 = 15285920;

	t49 = ((x197|x198)<=(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint64_t x202 = 2435456LLU;
	int8_t x203 = 0;
	volatile int32_t t50 = 0;

	t50 = ((x201|x202)<=(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 56U;
	static int64_t x208 = -1LL;
	volatile int32_t t51 = -295;

	t51 = ((x205|x206)<=(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x211 = UINT32_MAX;
	static int64_t x212 = -1LL;
	int32_t t52 = 504891753;

	t52 = ((x209|x210)<=(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x214 = INT32_MAX;
	uint64_t x216 = UINT64_MAX;

	t53 = ((x213|x214)<=(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int8_t x220 = 1;
	static int32_t t54 = -2;

	t54 = ((x217|x218)<=(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	uint8_t x223 = 0U;
	static uint64_t x224 = UINT64_MAX;

	t55 = ((x221|x222)<=(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int8_t x227 = INT8_MAX;
	int32_t x228 = -1942299;
	int32_t t56 = 599;

	t56 = ((x225|x226)<=(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 5;
	static uint16_t x230 = 923U;
	int32_t x232 = -1;
	int32_t t57 = 6;

	t57 = ((x229|x230)<=(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = 45;
	int64_t x235 = -1LL;

	t58 = ((x233|x234)<=(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = 0U;
	static volatile int32_t t59 = 3488;

	t59 = ((x237|x238)<=(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t x243 = 1069205296;
	volatile int32_t t60 = 5;

	t60 = ((x241|x242)<=(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 22768871U;
	static int32_t x248 = INT32_MIN;
	static volatile int32_t t61 = -107957;

	t61 = ((x245|x246)<=(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 764U;
	volatile uint64_t x250 = 14512997774010960LLU;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -1;
	int32_t t62 = 2;

	t62 = ((x249|x250)<=(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -441587;

	t63 = ((x253|x254)<=(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = -1LL;
	int16_t x260 = 0;
	int32_t t64 = 9773134;

	t64 = ((x257|x258)<=(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x261 = 0;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = INT64_MIN;
	int8_t x264 = 0;
	int32_t t65 = 394;

	t65 = ((x261|x262)<=(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 834LL;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t66 = 855860896;

	t66 = ((x265|x266)<=(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 3;
	int16_t x270 = -1;
	static volatile int32_t x271 = -14250;
	uint8_t x272 = 2U;
	int32_t t67 = -19;

	t67 = ((x269|x270)<=(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 21;
	int32_t x274 = -578;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MAX;
	static volatile int32_t t68 = 1;

	t68 = ((x273|x274)<=(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	int16_t x279 = 6;
	int32_t t69 = -52;

	t69 = ((x277|x278)<=(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 126740LL;
	uint8_t x282 = 9U;
	uint16_t x283 = 1155U;
	int8_t x284 = 4;
	volatile int32_t t70 = -59;

	t70 = ((x281|x282)<=(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 0LLU;
	uint8_t x286 = 3U;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = -58585498;

	t71 = ((x285|x286)<=(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = -1;
	int8_t x291 = 46;
	int32_t x292 = -1;

	t72 = ((x289|x290)<=(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = -2;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -1LL;
	int32_t t73 = -28847102;

	t73 = ((x293|x294)<=(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 78392247446LLU;
	int64_t x298 = -1059601757853LL;
	volatile uint32_t x299 = UINT32_MAX;
	volatile int32_t t74 = -43;

	t74 = ((x297|x298)<=(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 3943U;
	int8_t x302 = 0;
	static int32_t x303 = 118554;
	int8_t x304 = INT8_MIN;

	t75 = ((x301|x302)<=(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 3U;
	volatile int8_t x308 = 1;
	static volatile int32_t t76 = 1;

	t76 = ((x305|x306)<=(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MAX;
	int64_t x311 = 258LL;

	t77 = ((x309|x310)<=(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MAX;
	static volatile int16_t x316 = 7;
	int32_t t78 = -81156;

	t78 = ((x313|x314)<=(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MAX;
	int32_t x319 = -231;
	int64_t x320 = -1LL;
	int32_t t79 = 1238852;

	t79 = ((x317|x318)<=(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile int64_t x322 = -1LL;
	static volatile int16_t x323 = INT16_MAX;
	volatile uint8_t x324 = 79U;
	volatile int32_t t80 = 2571;

	t80 = ((x321|x322)<=(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 41U;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	int32_t t81 = -60;

	t81 = ((x325|x326)<=(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	static volatile uint64_t x330 = UINT64_MAX;
	uint16_t x331 = 3U;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -1;

	t82 = ((x329|x330)<=(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -963873381653578LL;
	uint32_t x334 = 12935681U;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t83 = 90210;

	t83 = ((x333|x334)<=(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 631074LLU;
	uint64_t x339 = 68332915446LLU;
	int32_t t84 = -191130519;

	t84 = ((x337|x338)<=(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x343 = INT64_MAX;
	int32_t x344 = 7483;
	int32_t t85 = 3653;

	t85 = ((x341|x342)<=(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MAX;
	static int8_t x346 = -1;
	uint16_t x347 = 293U;
	int64_t x348 = -1LL;

	t86 = ((x345|x346)<=(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	volatile int8_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -12924;

	t87 = ((x349|x350)<=(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	volatile int16_t x354 = 20;
	uint64_t x355 = 6439403551827165123LLU;
	volatile int32_t t88 = -338;

	t88 = ((x353|x354)<=(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	static int16_t x360 = -629;
	int32_t t89 = 474;

	t89 = ((x357|x358)<=(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 38U;
	int64_t x364 = 38850859183976LL;

	t90 = ((x361|x362)<=(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = INT32_MAX;
	volatile uint16_t x366 = 303U;
	uint8_t x367 = 2U;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = 50565200;

	t91 = ((x365|x366)<=(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -215;
	static uint8_t x370 = 75U;
	int16_t x372 = INT16_MIN;
	static int32_t t92 = -9513;

	t92 = ((x369|x370)<=(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	static int64_t x375 = 61642717LL;
	int16_t x376 = -1;
	int32_t t93 = 1;

	t93 = ((x373|x374)<=(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	int32_t x378 = INT32_MIN;
	int64_t x379 = -1LL;
	static volatile int32_t t94 = -15549;

	t94 = ((x377|x378)<=(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MAX;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -2;

	t95 = ((x381|x382)<=(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	volatile int64_t x386 = -1LL;
	volatile uint16_t x387 = 12212U;
	int16_t x388 = -1481;
	volatile int32_t t96 = 2098255;

	t96 = ((x385|x386)<=(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 98U;
	int8_t x390 = -1;
	static int8_t x391 = INT8_MIN;
	volatile int32_t x392 = -1;
	static int32_t t97 = 1509;

	t97 = ((x389|x390)<=(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = 1LL;
	static uint16_t x395 = 32569U;
	static uint16_t x396 = 1651U;
	int32_t t98 = -39682;

	t98 = ((x393|x394)<=(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	static int16_t x398 = -29;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -47;
	static volatile int32_t t99 = -2249107;

	t99 = ((x397|x398)<=(x399<x400));

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

