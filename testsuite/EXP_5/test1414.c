#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
static volatile uint8_t x3 = UINT8_MAX;
static int64_t x5 = INT64_MIN;
uint16_t x10 = 448U;
volatile int32_t t3 = -26046;
volatile int8_t x21 = -61;
int32_t x24 = 2678;
uint16_t x31 = UINT16_MAX;
int8_t x32 = INT8_MIN;
volatile uint8_t x36 = UINT8_MAX;
static int32_t x44 = INT32_MIN;
int32_t t10 = -8075934;
int8_t x51 = -1;
int32_t t12 = -15781153;
int16_t x54 = -29;
static int32_t x58 = -1;
static int16_t x72 = INT16_MIN;
volatile uint16_t x77 = UINT16_MAX;
static int32_t t19 = -6;
uint32_t x82 = 15U;
int64_t x88 = INT64_MIN;
int64_t x94 = -3490235005428225549LL;
int32_t t24 = 0;
volatile int32_t t26 = 1;
int32_t t30 = 194;
static int8_t x125 = INT8_MIN;
volatile uint64_t x128 = 1163010LLU;
int16_t x131 = INT16_MIN;
static volatile int32_t t36 = -822;
uint64_t x150 = 4068924896LLU;
volatile int32_t t37 = -1;
static volatile int64_t x157 = INT64_MIN;
uint8_t x160 = 12U;
int16_t x169 = -1;
int32_t t43 = -181876;
uint8_t x195 = 3U;
uint8_t x196 = UINT8_MAX;
static volatile int16_t x200 = INT16_MIN;
volatile int32_t t50 = 3;
static volatile uint32_t x209 = UINT32_MAX;
volatile int32_t t52 = -62;
static uint32_t x216 = UINT32_MAX;
static uint32_t x217 = UINT32_MAX;
static int16_t x220 = INT16_MIN;
volatile int32_t t54 = 11316;
static int8_t x221 = INT8_MIN;
uint8_t x222 = UINT8_MAX;
volatile int16_t x223 = INT16_MIN;
uint8_t x225 = 3U;
int8_t x234 = INT8_MAX;
static int8_t x235 = -1;
int64_t x237 = -1LL;
volatile int64_t x239 = INT64_MIN;
int32_t x240 = -1;
static int32_t t59 = -269218;
volatile uint16_t x243 = 15U;
static volatile int32_t t66 = -66;
volatile int32_t x271 = INT32_MIN;
volatile int64_t x275 = -113939094LL;
volatile int8_t x278 = 37;
uint16_t x280 = UINT16_MAX;
int32_t x288 = INT32_MIN;
int32_t x292 = INT32_MAX;
volatile int32_t t72 = 13;
volatile uint32_t x296 = 5784901U;
volatile int32_t t74 = -5;
int32_t t75 = 1;
static int64_t x305 = INT64_MIN;
volatile int32_t t76 = 2;
uint32_t x309 = UINT32_MAX;
static int8_t x310 = 1;
uint16_t x312 = 14432U;
volatile int32_t t79 = -421;
static int32_t x321 = INT32_MIN;
volatile int32_t t81 = -1;
static volatile int64_t x331 = INT64_MIN;
int64_t x332 = -82049LL;
int32_t x340 = INT32_MIN;
int16_t x343 = -1;
uint32_t x354 = 123798U;
uint32_t x355 = 65U;
volatile int32_t t88 = 28266;
static uint16_t x359 = 13754U;
static volatile uint64_t x361 = 8485846654LLU;
uint16_t x362 = 23U;
static int32_t t90 = 311;
int32_t x373 = INT32_MAX;
int64_t x377 = INT64_MAX;
int16_t x380 = -1;
int64_t x385 = 7900LL;
volatile int32_t t96 = -9018;
uint64_t x396 = 206944211439622551LLU;
static uint32_t x399 = 503U;


void f0(void) {
	int64_t x2 = -4766566LL;
	static int64_t x4 = -1LL;
	static volatile int32_t t0 = -34800533;

	t0 = (x1<=((x2<x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1755U;
	uint8_t x7 = 3U;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 580809441;

	t1 = (x5<=((x6<x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x11 = -109LL;
	static volatile uint32_t x12 = 6U;
	volatile int32_t t2 = -315245;

	t2 = (x9<=((x10<x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	static int8_t x14 = 48;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;

	t3 = (x13<=((x14<x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	static int64_t x19 = -126236378LL;
	volatile int16_t x20 = -367;
	static int32_t t4 = 41197;

	t4 = (x17<=((x18<x19)%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	static uint16_t x23 = UINT16_MAX;
	static int32_t t5 = 2565;

	t5 = (x21<=((x22<x23)%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -20625332356972LL;
	static int16_t x26 = INT16_MIN;
	static uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -14;

	t6 = (x25<=((x26<x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 26640U;
	volatile int32_t x30 = INT32_MAX;
	int32_t t7 = -320915914;

	t7 = (x29<=((x30<x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint64_t x34 = 847LLU;
	static uint64_t x35 = UINT64_MAX;
	int32_t t8 = 42764252;

	t8 = (x33<=((x34<x35)%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int64_t x38 = -1LL;
	volatile uint64_t x39 = 21238977866LLU;
	static int8_t x40 = -1;
	int32_t t9 = 97;

	t9 = (x37<=((x38<x39)%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 2LL;
	uint64_t x42 = UINT64_MAX;
	static uint64_t x43 = UINT64_MAX;

	t10 = (x41<=((x42<x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = 101254233;
	static uint16_t x48 = 23U;
	volatile int32_t t11 = -1589;

	t11 = (x45<=((x46<x47)%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = 46863039;
	int16_t x50 = 266;
	uint32_t x52 = UINT32_MAX;

	t12 = (x49<=((x50<x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	static int64_t x56 = 38138227789282LL;
	int32_t t13 = 259701595;

	t13 = (x53<=((x54<x55)%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint16_t x59 = 22531U;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = 1;

	t14 = (x57<=((x58<x59)%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 1U;
	int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 0;

	t15 = (x61<=((x62<x63)%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = 20U;
	volatile int16_t x67 = -451;
	static int64_t x68 = -1LL;
	int32_t t16 = 13511897;

	t16 = (x65<=((x66<x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 14;
	int8_t x70 = 0;
	int32_t x71 = INT32_MAX;
	static volatile int32_t t17 = 110332;

	t17 = (x69<=((x70<x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = 111U;
	int16_t x76 = -1;
	volatile int32_t t18 = -22;

	t18 = (x73<=((x74<x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 23320U;
	volatile uint64_t x79 = 25856900546032692LLU;
	int16_t x80 = INT16_MAX;

	t19 = (x77<=((x78<x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = 840;
	static uint16_t x84 = UINT16_MAX;
	static int32_t t20 = 1;

	t20 = (x81<=((x82<x83)%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int64_t x86 = 5267728135546227LL;
	uint8_t x87 = UINT8_MAX;
	int32_t t21 = -793763478;

	t21 = (x85<=((x86<x87)%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = 119U;
	static uint16_t x91 = 13231U;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -128;

	t22 = (x89<=((x90<x91)%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 91616U;
	static int64_t x95 = -273093253999LL;
	int32_t x96 = INT32_MIN;
	int32_t t23 = -28;

	t23 = (x93<=((x94<x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static uint8_t x98 = 11U;
	uint8_t x99 = 47U;
	uint64_t x100 = UINT64_MAX;

	t24 = (x97<=((x98<x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	static int8_t x102 = INT8_MAX;
	static volatile int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -480883623;

	t25 = (x101<=((x102<x103)%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 40U;
	int16_t x106 = -1;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;

	t26 = (x105<=((x106<x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint32_t x110 = 67176956U;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 621657031;

	t27 = (x109<=((x110<x111)%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 2U;
	uint64_t x114 = 1847515LLU;
	static int32_t x115 = 28;
	int16_t x116 = -1;
	int32_t t28 = -40;

	t28 = (x113<=((x114<x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	static int16_t x120 = -148;
	volatile int32_t t29 = -4;

	t29 = (x117<=((x118<x119)%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 81119255582LLU;
	int32_t x122 = -1;
	static int32_t x123 = -9748343;
	volatile int64_t x124 = 88514947LL;

	t30 = (x121<=((x122<x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	volatile int8_t x127 = -1;
	int32_t t31 = -390244665;

	t31 = (x125<=((x126<x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 11U;
	volatile int64_t x130 = INT64_MIN;
	uint8_t x132 = 20U;
	int32_t t32 = 744085;

	t32 = (x129<=((x130<x131)%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = -15;

	t33 = (x133<=((x134<x135)%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static uint16_t x138 = UINT16_MAX;
	int64_t x139 = INT64_MIN;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = 24;

	t34 = (x137<=((x138<x139)%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 799U;
	uint64_t x142 = 386927LLU;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -55;

	t35 = (x141<=((x142<x143)%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = -1;
	uint16_t x148 = 140U;

	t36 = (x145<=((x146<x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	int16_t x152 = -1;

	t37 = (x149<=((x150<x151)%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	uint8_t x154 = 56U;
	volatile uint8_t x155 = 1U;
	volatile int16_t x156 = -732;
	int32_t t38 = -1;

	t38 = (x153<=((x154<x155)%x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	uint64_t x159 = 1055LLU;
	int32_t t39 = -87208;

	t39 = (x157<=((x158<x159)%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = -49;
	int8_t x163 = 0;
	int8_t x164 = 12;
	volatile int32_t t40 = 49182;

	t40 = (x161<=((x162<x163)%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 0;
	uint32_t x167 = 627521928U;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -97;

	t41 = (x165<=((x166<x167)%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 0U;
	int64_t x171 = -16554810LL;
	int64_t x172 = -3304086LL;
	volatile int32_t t42 = 0;

	t42 = (x169<=((x170<x171)%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int64_t x174 = -1LL;
	int32_t x175 = -1;
	uint64_t x176 = 1933910062LLU;

	t43 = (x173<=((x174<x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -9462;
	volatile uint8_t x178 = UINT8_MAX;
	int32_t x179 = -1;
	int32_t x180 = -1;
	int32_t t44 = -888736;

	t44 = (x177<=((x178<x179)%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	volatile int32_t x183 = 448162998;
	volatile int32_t x184 = -39840;
	int32_t t45 = 10303;

	t45 = (x181<=((x182<x183)%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint64_t x186 = 958445176LLU;
	static uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -4811;

	t46 = (x185<=((x186<x187)%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t47 = 691;

	t47 = (x189<=((x190<x191)%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 61U;
	int64_t x194 = INT64_MIN;
	int32_t t48 = 190839;

	t48 = (x193<=((x194<x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint32_t x198 = UINT32_MAX;
	static int8_t x199 = 1;
	static int32_t t49 = 0;

	t49 = (x197<=((x198<x199)%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MAX;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -227;

	t50 = (x201<=((x202<x203)%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = 61309LLU;
	static uint16_t x207 = UINT16_MAX;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -15;

	t51 = (x205<=((x206<x207)%x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x210 = 3173U;
	uint8_t x211 = 16U;
	int16_t x212 = -11;

	t52 = (x209<=((x210<x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 24U;
	int16_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	int32_t t53 = 190680733;

	t53 = (x213<=((x214<x215)%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 37225605U;

	t54 = (x217<=((x218<x219)%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x224 = UINT64_MAX;
	int32_t t55 = 81;

	t55 = (x221<=((x222<x223)%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = 1;
	uint16_t x227 = 0U;
	static int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -973477;

	t56 = (x225<=((x226<x227)%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint16_t x230 = UINT16_MAX;
	static uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 5U;
	static volatile int32_t t57 = -1718;

	t57 = (x229<=((x230<x231)%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1183;
	uint64_t x236 = 1LLU;
	volatile int32_t t58 = 951170043;

	t58 = (x233<=((x234<x235)%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;

	t59 = (x237<=((x238<x239)%x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	static int64_t x242 = -26514740666LL;
	static uint64_t x244 = 2162247943LLU;
	volatile int32_t t60 = 3554;

	t60 = (x241<=((x242<x243)%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 14U;
	int8_t x247 = -1;
	volatile int16_t x248 = INT16_MAX;
	int32_t t61 = -116817;

	t61 = (x245<=((x246<x247)%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -1LL;
	int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = 2890850468LLU;
	int64_t x252 = 163082660618550402LL;
	static int32_t t62 = -1076409;

	t62 = (x249<=((x250<x251)%x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 10LLU;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t63 = -4;

	t63 = (x253<=((x254<x255)%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -1;
	uint16_t x258 = 11U;
	uint16_t x259 = UINT16_MAX;
	uint8_t x260 = 31U;
	int32_t t64 = -3;

	t64 = (x257<=((x258<x259)%x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 1178315LLU;
	int8_t x262 = INT8_MAX;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	int32_t t65 = -5715;

	t65 = (x261<=((x262<x263)%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint64_t x266 = UINT64_MAX;
	static uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;

	t66 = (x265<=((x266<x267)%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	int8_t x272 = -1;
	volatile int32_t t67 = -856;

	t67 = (x269<=((x270<x271)%x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -1;
	static uint16_t x274 = 12884U;
	static uint64_t x276 = 163LLU;
	volatile int32_t t68 = 250864362;

	t68 = (x273<=((x274<x275)%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	static int32_t t69 = -4;

	t69 = (x277<=((x278<x279)%x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -118;
	uint32_t x282 = 1646U;
	int32_t x283 = -5;
	int16_t x284 = INT16_MIN;
	static int32_t t70 = 858588798;

	t70 = (x281<=((x282<x283)%x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x285 = 10U;
	volatile uint16_t x286 = 26U;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = -383;

	t71 = (x285<=((x286<x287)%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;

	t72 = (x289<=((x290<x291)%x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	uint32_t x294 = 55810U;
	volatile int16_t x295 = INT16_MIN;
	int32_t t73 = 1502261;

	t73 = (x293<=((x294<x295)%x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -5;
	static int32_t x298 = INT32_MIN;
	int32_t x299 = -226128;
	uint32_t x300 = 2183667U;

	t74 = (x297<=((x298<x299)%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = -15;
	int32_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	int16_t x304 = -895;

	t75 = (x301<=((x302<x303)%x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x306 = 15LLU;
	int16_t x307 = INT16_MIN;
	volatile uint64_t x308 = 72LLU;

	t76 = (x305<=((x306<x307)%x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x311 = INT32_MIN;
	static int32_t t77 = -2010;

	t77 = (x309<=((x310<x311)%x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	uint8_t x314 = 2U;
	static volatile int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 0;

	t78 = (x313<=((x314<x315)%x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 38223716U;
	static uint16_t x320 = UINT16_MAX;

	t79 = (x317<=((x318<x319)%x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 255U;
	static int32_t t80 = 14532392;

	t80 = (x321<=((x322<x323)%x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = -1;
	int16_t x326 = 473;
	uint64_t x327 = 7055888LLU;
	static int32_t x328 = INT32_MAX;

	t81 = (x325<=((x326<x327)%x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 1523LLU;
	static int32_t t82 = -2902;

	t82 = (x329<=((x330<x331)%x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -114;
	int32_t x334 = -1;
	uint8_t x335 = 21U;
	static int64_t x336 = 15LL;
	static volatile int32_t t83 = 6366;

	t83 = (x333<=((x334<x335)%x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	int32_t t84 = 1;

	t84 = (x337<=((x338<x339)%x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = -1;
	static int32_t x344 = INT32_MAX;
	int32_t t85 = 58;

	t85 = (x341<=((x342<x343)%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -8;
	uint32_t x346 = 1U;
	volatile int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 54;

	t86 = (x345<=((x346<x347)%x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	static int8_t x351 = INT8_MAX;
	volatile uint16_t x352 = 4446U;
	int32_t t87 = 1069231;

	t87 = (x349<=((x350<x351)%x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MAX;
	static volatile int32_t x356 = 10510;

	t88 = (x353<=((x354<x355)%x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = 7;
	volatile uint16_t x358 = UINT16_MAX;
	int16_t x360 = 1766;
	int32_t t89 = 0;

	t89 = (x357<=((x358<x359)%x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x363 = 0;
	int32_t x364 = INT32_MIN;

	t90 = (x361<=((x362<x363)%x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 2477;
	int16_t x366 = INT16_MAX;
	static int32_t x367 = INT32_MIN;
	volatile int64_t x368 = -783388729789LL;
	int32_t t91 = -107;

	t91 = (x365<=((x366<x367)%x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = 10U;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 327;

	t92 = (x369<=((x370<x371)%x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	volatile uint16_t x376 = 410U;
	volatile int32_t t93 = -378980626;

	t93 = (x373<=((x374<x375)%x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = -558967LL;
	volatile uint32_t x379 = 254047302U;
	volatile int32_t t94 = 11;

	t94 = (x377<=((x378<x379)%x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MAX;
	int8_t x383 = -1;
	uint64_t x384 = 13459079641610681LLU;
	static int32_t t95 = 11;

	t95 = (x381<=((x382<x383)%x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x386 = UINT8_MAX;
	int8_t x387 = -1;
	volatile int64_t x388 = INT64_MIN;

	t96 = (x385<=((x386<x387)%x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -87LL;
	static int8_t x390 = -10;
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	static int32_t t97 = -27104;

	t97 = (x389<=((x390<x391)%x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	volatile uint32_t x394 = 1070853U;
	uint8_t x395 = UINT8_MAX;
	int32_t t98 = 41;

	t98 = (x393<=((x394<x395)%x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static uint8_t x398 = 3U;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -13300;

	t99 = (x397<=((x398<x399)%x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

