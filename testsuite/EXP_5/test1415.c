#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = 22816557752LL;
volatile int8_t x3 = INT8_MAX;
int16_t x14 = -1;
uint8_t x20 = 3U;
volatile int16_t x23 = INT16_MIN;
static int64_t x26 = INT64_MAX;
static int16_t x30 = INT16_MIN;
uint8_t x31 = 114U;
int16_t x33 = INT16_MIN;
static int8_t x37 = INT8_MIN;
static volatile uint8_t x39 = 10U;
int32_t t8 = -627772366;
int64_t x43 = 482241427886138LL;
uint64_t t10 = 3LLU;
int16_t x50 = INT16_MAX;
uint8_t x51 = 13U;
int8_t x53 = -1;
static int8_t x55 = INT8_MIN;
int64_t t13 = 228301640125LL;
uint64_t x64 = 6206006LLU;
uint64_t x65 = 2773085807091565624LLU;
volatile int16_t x67 = -1;
static uint16_t x71 = UINT16_MAX;
int32_t x77 = -6;
int16_t x78 = 12;
volatile int64_t t18 = -9921307498LL;
int8_t x88 = INT8_MIN;
int32_t x98 = INT32_MAX;
int32_t t23 = 2;
static int8_t x108 = -1;
static volatile int64_t x109 = -1LL;
volatile int64_t x115 = INT64_MAX;
volatile uint32_t t29 = 783008U;
uint32_t x131 = 7616122U;
volatile int32_t x136 = -30301;
int8_t x140 = INT8_MAX;
int64_t x145 = INT64_MIN;
int8_t x146 = -1;
int16_t x148 = INT16_MIN;
volatile int64_t t35 = -860733685LL;
int16_t x153 = -1;
static int16_t x156 = -1;
volatile int32_t t36 = 6497;
uint8_t x160 = 30U;
static volatile uint32_t t37 = 63019U;
static volatile int32_t x162 = 38576421;
volatile uint16_t x167 = 1098U;
int8_t x171 = 1;
uint8_t x174 = 7U;
static uint8_t x176 = 13U;
static uint16_t x178 = UINT16_MAX;
int32_t x186 = -5;
int16_t x196 = -1;
int8_t x197 = -4;
static uint64_t t47 = 1LLU;
int64_t x205 = -1LL;
static int64_t x206 = -958LL;
volatile int64_t x208 = INT64_MAX;
static int32_t x220 = INT32_MIN;
int8_t x224 = -27;
volatile int8_t x227 = INT8_MIN;
static int32_t x230 = -1;
uint32_t x231 = UINT32_MAX;
static uint16_t x240 = 28459U;
static uint8_t x242 = 0U;
static uint64_t x243 = 332043021621862014LLU;
int8_t x245 = INT8_MIN;
volatile int32_t t58 = 117715355;
volatile int32_t t62 = -3006255;
int32_t x265 = 5484978;
static uint32_t x270 = UINT32_MAX;
int16_t x272 = -1;
static int16_t x274 = 0;
int32_t x278 = -962;
int64_t x288 = -50LL;
int32_t t71 = -10;
int16_t x305 = INT16_MIN;
int32_t x307 = -1912996;
int32_t x308 = INT32_MIN;
volatile int64_t t74 = -2194029580549095LL;
int32_t x313 = INT32_MIN;
int32_t x323 = 116327624;
static int16_t x328 = INT16_MIN;
uint64_t x333 = UINT64_MAX;
volatile uint64_t x336 = 4376616LLU;
volatile uint32_t x342 = 6729U;
static int64_t x352 = 123938191705LL;
int64_t x353 = INT64_MIN;
int16_t x355 = INT16_MIN;
int64_t x365 = INT64_MAX;
volatile int64_t t87 = -140LL;
uint64_t x369 = 5624334922821LLU;
uint8_t x370 = 2U;
static uint8_t x371 = 0U;
uint64_t x373 = 7933482526242258945LLU;
static volatile uint16_t x375 = 20U;
int32_t x381 = -1;
volatile int8_t x384 = -20;
int16_t x389 = INT16_MAX;
int64_t x391 = INT64_MIN;
int32_t t92 = -11711619;
uint64_t x393 = UINT64_MAX;
uint64_t t93 = 129LLU;
int16_t x414 = INT16_MIN;
uint8_t x417 = 109U;
uint16_t x424 = UINT16_MAX;


void f0(void) {
	uint16_t x2 = 1820U;
	volatile int32_t x4 = INT32_MAX;
	volatile int64_t t0 = 1596258475523008LL;

	t0 = (x1&((x2<x3)%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int64_t x10 = -199899742159LL;
	uint64_t x11 = 221LLU;
	int16_t x12 = INT16_MAX;
	volatile int32_t t1 = -435072885;

	t1 = (x9&((x10<x11)%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static volatile int8_t x15 = -1;
	uint32_t x16 = 1291798701U;
	static volatile uint32_t t2 = 21560898U;

	t2 = (x13&((x14<x15)%x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 5624LLU;
	uint32_t x19 = 46104U;
	uint32_t t3 = 1395188699U;

	t3 = (x17&((x18<x19)%x20));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 226U;
	volatile uint16_t x22 = 21248U;
	uint64_t x24 = 703370LLU;
	volatile uint64_t t4 = 2001LLU;

	t4 = (x21&((x22<x23)%x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	uint16_t x27 = UINT16_MAX;
	static int32_t x28 = INT32_MAX;
	volatile uint32_t t5 = 60682U;

	t5 = (x25&((x26<x27)%x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MIN;
	int16_t x32 = 159;
	int32_t t6 = 59926040;

	t6 = (x29&((x30<x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	int64_t x35 = 53259094529267LL;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = 3449527LL;

	t7 = (x33&((x34<x35)%x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -380574LL;
	int16_t x40 = -1;

	t8 = (x37&((x38<x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MIN;
	static int16_t x42 = 0;
	volatile uint64_t x44 = 496720875773LLU;
	volatile uint64_t t9 = 6495LLU;

	t9 = (x41&((x42<x43)%x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int64_t x46 = -144439248403LL;
	volatile int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;

	t10 = (x45&((x46<x47)%x48));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 92U;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t11 = -36;

	t11 = (x49&((x50<x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x54 = -1;
	uint32_t x56 = 230997943U;
	uint32_t t12 = 45156U;

	t12 = (x53&((x54<x55)%x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;

	t13 = (x57&((x58<x59)%x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 14466U;
	uint8_t x62 = 47U;
	int64_t x63 = INT64_MIN;
	volatile uint64_t t14 = 11488LLU;

	t14 = (x61&((x62<x63)%x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MAX;
	volatile int64_t x68 = INT64_MIN;
	uint64_t t15 = 65075406354LLU;

	t15 = (x65&((x66<x67)%x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = -1LL;
	static int32_t x72 = INT32_MIN;
	volatile int64_t t16 = 4344265329011351LL;

	t16 = (x69&((x70<x71)%x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MIN;
	static int32_t x75 = INT32_MIN;
	int16_t x76 = -2118;
	volatile uint32_t t17 = 738453865U;

	t17 = (x73&((x74<x75)%x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x79 = INT16_MAX;
	static int64_t x80 = -1LL;

	t18 = (x77&((x78<x79)%x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MAX;
	volatile uint64_t x83 = 7531594LLU;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t19 = 30941745;

	t19 = (x81&((x82<x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = 27352;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = -1;
	int32_t t20 = 8286414;

	t20 = (x85&((x86<x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 103208468261886310LLU;
	volatile int8_t x90 = 63;
	int64_t x91 = 22000449413662LL;
	static int16_t x92 = INT16_MAX;
	uint64_t t21 = 24028007243098629LLU;

	t21 = (x89&((x90<x91)%x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 54LL;
	static uint64_t x94 = 496LLU;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 9154264690448LLU;
	uint64_t t22 = 3529006720868849960LLU;

	t22 = (x93&((x94<x95)%x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	static int16_t x99 = -1;
	volatile int16_t x100 = 195;

	t23 = (x97&((x98<x99)%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -5463351143367LL;
	static uint8_t x102 = 41U;
	static uint8_t x103 = 1U;
	volatile int8_t x104 = INT8_MIN;
	volatile int64_t t24 = -85431LL;

	t24 = (x101&((x102<x103)%x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 0U;
	static uint8_t x106 = 82U;
	uint64_t x107 = UINT64_MAX;
	int32_t t25 = -55;

	t25 = (x105&((x106<x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x110 = INT64_MIN;
	uint64_t x111 = 215273164348LLU;
	int64_t x112 = INT64_MAX;
	volatile int64_t t26 = 1LL;

	t26 = (x109&((x110<x111)%x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 842345529709561LL;
	volatile uint8_t x114 = 15U;
	int32_t x116 = INT32_MIN;
	volatile int64_t t27 = -933752LL;

	t27 = (x113&((x114<x115)%x116));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MAX;
	int64_t x119 = 2894841817354LL;
	int32_t x120 = INT32_MAX;
	volatile int32_t t28 = 891;

	t28 = (x117&((x118<x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MIN;
	int8_t x124 = -3;

	t29 = (x121&((x122<x123)%x124));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	volatile int32_t x126 = -30;
	int32_t x127 = -214525255;
	int16_t x128 = 58;
	static volatile int64_t t30 = -139LL;

	t30 = (x125&((x126<x127)%x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = 2;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -193;

	t31 = (x129&((x130<x131)%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -269592348;
	volatile int32_t x134 = 468803;
	static uint32_t x135 = 168717U;
	int32_t t32 = 3496201;

	t32 = (x133&((x134<x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -1;
	int64_t t33 = -7846125LL;

	t33 = (x137&((x138<x139)%x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = 469;
	static uint32_t x143 = 321815474U;
	uint16_t x144 = 292U;
	volatile int32_t t34 = -113712;

	t34 = (x141&((x142<x143)%x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x147 = INT8_MIN;

	t35 = (x145&((x146<x147)%x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MIN;

	t36 = (x153&((x154<x155)%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = 412020U;
	volatile uint8_t x158 = 1U;
	int16_t x159 = INT16_MAX;

	t37 = (x157&((x158<x159)%x160));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 8U;
	uint64_t x163 = 379199LLU;
	int32_t x164 = -13601;
	static int32_t t38 = 2994277;

	t38 = (x161&((x162<x163)%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t39 = 15659795U;

	t39 = (x165&((x166<x167)%x168));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MIN;
	uint64_t x170 = UINT64_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t40 = 1;

	t40 = (x169&((x170<x171)%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 1U;
	volatile int16_t x175 = 0;
	int32_t t41 = 311;

	t41 = (x173&((x174<x175)%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x177 = 7940U;
	uint32_t x179 = 0U;
	volatile int32_t x180 = INT32_MAX;
	volatile uint32_t t42 = 185027U;

	t42 = (x177&((x178<x179)%x180));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = -1LL;
	static int8_t x187 = -1;
	static uint32_t x188 = UINT32_MAX;
	volatile int64_t t43 = -3342122LL;

	t43 = (x185&((x186<x187)%x188));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x191 = 1;
	int64_t x192 = INT64_MAX;
	volatile int64_t t44 = 588712215449037LL;

	t44 = (x189&((x190<x191)%x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = INT32_MAX;
	static uint8_t x194 = 10U;
	static volatile int64_t x195 = INT64_MIN;
	int32_t t45 = 26768809;

	t45 = (x193&((x194<x195)%x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x198 = -1LL;
	static uint64_t x199 = 2217641080026LLU;
	static uint8_t x200 = 81U;
	int32_t t46 = 1603991;

	t46 = (x197&((x198<x199)%x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MAX;
	uint8_t x203 = 20U;
	uint64_t x204 = UINT64_MAX;

	t47 = (x201&((x202<x203)%x204));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x207 = INT64_MIN;
	volatile int64_t t48 = -4925833LL;

	t48 = (x205&((x206<x207)%x208));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = 261LLU;
	int8_t x210 = 23;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MIN;
	uint64_t t49 = 865595407680877436LLU;

	t49 = (x209&((x210<x211)%x212));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = INT16_MIN;
	uint8_t x215 = 119U;
	uint32_t x216 = UINT32_MAX;
	uint64_t t50 = 127092LLU;

	t50 = (x213&((x214<x215)%x216));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = 545U;
	uint64_t x218 = 594184605512345316LLU;
	uint8_t x219 = UINT8_MAX;
	volatile uint32_t t51 = 190524U;

	t51 = (x217&((x218<x219)%x220));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = -7547;
	int8_t x222 = -1;
	int64_t x223 = -20882011117LL;
	volatile int32_t t52 = -71844;

	t52 = (x221&((x222<x223)%x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 7;
	static volatile int16_t x226 = INT16_MIN;
	static volatile int8_t x228 = -3;
	volatile int32_t t53 = 0;

	t53 = (x225&((x226<x227)%x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	static int32_t x232 = -8899;
	int64_t t54 = -29LL;

	t54 = (x229&((x230<x231)%x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	volatile int32_t x234 = 422064;
	int8_t x235 = 15;
	volatile int8_t x236 = INT8_MIN;
	static int32_t t55 = 13070;

	t55 = (x233&((x234<x235)%x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = 174009079LL;
	int8_t x239 = INT8_MAX;
	volatile int32_t t56 = 231445;

	t56 = (x237&((x238<x239)%x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int32_t x244 = 12;
	volatile int32_t t57 = 3966;

	t57 = (x241&((x242<x243)%x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x246 = UINT64_MAX;
	uint64_t x247 = 2573215LLU;
	uint16_t x248 = 833U;

	t58 = (x245&((x246<x247)%x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	int32_t x251 = INT32_MAX;
	uint16_t x252 = UINT16_MAX;
	int32_t t59 = 184;

	t59 = (x249&((x250<x251)%x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MIN;
	volatile int8_t x256 = -1;
	volatile uint32_t t60 = 2360U;

	t60 = (x253&((x254<x255)%x256));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	int64_t t61 = -30398913155363785LL;

	t61 = (x257&((x258<x259)%x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int8_t x262 = 0;
	static volatile uint32_t x263 = 4868413U;
	volatile uint8_t x264 = UINT8_MAX;

	t62 = (x261&((x262<x263)%x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x266 = -1;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -13;
	volatile int32_t t63 = -62528;

	t63 = (x265&((x266<x267)%x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 676U;
	int32_t x271 = INT32_MIN;
	static volatile uint32_t t64 = 4U;

	t64 = (x269&((x270<x271)%x272));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = 2316057330LL;
	int32_t x275 = -1;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t65 = -82LL;

	t65 = (x273&((x274<x275)%x276));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 7000886797376LLU;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile uint64_t t66 = 465LLU;

	t66 = (x277&((x278<x279)%x280));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x282 = -948484714;
	int8_t x283 = INT8_MAX;
	int8_t x284 = -4;
	volatile int32_t t67 = -15915978;

	t67 = (x281&((x282<x283)%x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -1;
	static uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	volatile int64_t t68 = 8468615469LL;

	t68 = (x285&((x286<x287)%x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = -1LL;
	int32_t x290 = INT32_MIN;
	uint8_t x291 = UINT8_MAX;
	static uint32_t x292 = 1836U;
	volatile int64_t t69 = 9673928924LL;

	t69 = (x289&((x290<x291)%x292));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = 2149713754874626198LLU;
	static int32_t x295 = INT32_MIN;
	uint64_t x296 = 2966758770924194615LLU;
	volatile uint64_t t70 = 2853LLU;

	t70 = (x293&((x294<x295)%x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	static volatile int8_t x300 = INT8_MAX;

	t71 = (x297&((x298<x299)%x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	uint8_t x303 = 3U;
	volatile int8_t x304 = INT8_MAX;
	int64_t t72 = -9479831205841809LL;

	t72 = (x301&((x302<x303)%x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = -1;
	volatile int32_t t73 = -10811;

	t73 = (x305&((x306<x307)%x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MAX;
	static uint8_t x310 = 4U;
	int8_t x311 = -62;
	uint8_t x312 = UINT8_MAX;

	t74 = (x309&((x310<x311)%x312));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x314 = 246U;
	int64_t x315 = INT64_MIN;
	static uint8_t x316 = UINT8_MAX;
	static int32_t t75 = 388;

	t75 = (x313&((x314<x315)%x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = 286;
	static uint16_t x318 = 2959U;
	uint64_t x319 = 15876LLU;
	static int32_t x320 = 3879394;
	int32_t t76 = 981588541;

	t76 = (x317&((x318<x319)%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x321 = -1LL;
	int64_t x322 = INT64_MAX;
	uint32_t x324 = 47U;
	int64_t t77 = 237816756826120LL;

	t77 = (x321&((x322<x323)%x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = -14;
	static volatile int8_t x327 = INT8_MAX;
	static int32_t t78 = 1;

	t78 = (x325&((x326<x327)%x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static uint32_t x331 = 442035345U;
	uint16_t x332 = 3U;
	int32_t t79 = 9;

	t79 = (x329&((x330<x331)%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = INT32_MAX;
	int32_t x335 = 4;
	static uint64_t t80 = 2289527462951419LLU;

	t80 = (x333&((x334<x335)%x336));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x341 = -1;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = 8;
	int32_t t81 = -91;

	t81 = (x341&((x342<x343)%x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 491U;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 56U;
	int32_t x348 = -58601;
	int32_t t82 = 4;

	t82 = (x345&((x346<x347)%x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x349 = -125;
	int8_t x350 = -1;
	int8_t x351 = INT8_MAX;
	int64_t t83 = -118560187LL;

	t83 = (x349&((x350<x351)%x352));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x354 = INT16_MIN;
	uint8_t x356 = 45U;
	int64_t t84 = -853306LL;

	t84 = (x353&((x354<x355)%x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int16_t x358 = 10;
	int64_t x359 = -3780015328007LL;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t85 = -151528871;

	t85 = (x357&((x358<x359)%x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MAX;
	int16_t x364 = 8;
	volatile int32_t t86 = -1160162;

	t86 = (x361&((x362<x363)%x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = INT64_MAX;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;

	t87 = (x365&((x366<x367)%x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x372 = 8856190673417LLU;
	volatile uint64_t t88 = 1825741069229LLU;

	t88 = (x369&((x370<x371)%x372));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x374 = INT8_MAX;
	volatile uint8_t x376 = 1U;
	uint64_t t89 = 4022253LLU;

	t89 = (x373&((x374<x375)%x376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -21;
	int16_t x378 = -1428;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t90 = -92933;

	t90 = (x377&((x378<x379)%x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x382 = 23U;
	static int64_t x383 = -1LL;
	static volatile int32_t t91 = -65;

	t91 = (x381&((x382<x383)%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x390 = UINT8_MAX;
	uint16_t x392 = 546U;

	t92 = (x389&((x390<x391)%x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x394 = -31;
	uint8_t x395 = UINT8_MAX;
	volatile int16_t x396 = INT16_MIN;

	t93 = (x393&((x394<x395)%x396));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = INT32_MIN;
	int16_t x399 = -3;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t94 = 57U;

	t94 = (x397&((x398<x399)%x400));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 7846797U;
	static uint64_t x402 = 1274365323511LLU;
	int16_t x403 = -1;
	uint16_t x404 = 48U;
	uint32_t t95 = 0U;

	t95 = (x401&((x402<x403)%x404));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x405 = 1;
	static int64_t x406 = -1LL;
	static int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t96 = 94245LL;

	t96 = (x405&((x406<x407)%x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = 0;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = 115U;
	static int32_t t97 = -364264454;

	t97 = (x413&((x414<x415)%x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x418 = -1;
	int64_t x419 = -1LL;
	uint16_t x420 = 105U;
	volatile int32_t t98 = 104;

	t98 = (x417&((x418<x419)%x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = UINT16_MAX;
	static int16_t x422 = INT16_MAX;
	int8_t x423 = 1;
	int32_t t99 = 529702225;

	t99 = (x421&((x422<x423)%x424));

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

