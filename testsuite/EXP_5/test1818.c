#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = UINT16_MAX;
volatile int8_t x10 = INT8_MIN;
static volatile int32_t t2 = -112945833;
uint8_t x20 = 125U;
int32_t t5 = 338;
uint64_t t6 = 756237117936830834LLU;
uint8_t x29 = UINT8_MAX;
volatile int64_t x35 = INT64_MAX;
uint64_t x44 = 907374406808063LLU;
int8_t x45 = 0;
static int32_t x48 = -1;
static volatile int32_t t14 = 842762932;
static volatile int32_t x69 = -1228;
int32_t x76 = INT32_MIN;
int16_t x81 = -1;
volatile uint32_t x82 = 447U;
uint8_t x83 = UINT8_MAX;
int32_t t20 = 534951283;
volatile int32_t x89 = INT32_MIN;
uint16_t x99 = UINT16_MAX;
uint8_t x105 = 3U;
int32_t x106 = INT32_MIN;
int32_t t26 = 3;
int16_t x112 = -1;
uint32_t x114 = 24865U;
uint32_t t28 = 1066712084U;
uint32_t x129 = 1478456U;
uint32_t x136 = 66441U;
int32_t t34 = 13;
uint32_t x141 = 9353730U;
static volatile uint16_t x144 = UINT16_MAX;
uint16_t x149 = 7370U;
int16_t x150 = INT16_MAX;
static int16_t x151 = -466;
static volatile int32_t t37 = 1;
volatile uint8_t x156 = 11U;
int16_t x167 = 145;
uint16_t x173 = 1088U;
volatile int32_t t43 = -98623;
int16_t x177 = -3127;
uint64_t x178 = 931LLU;
static int32_t x181 = -1;
volatile int64_t x185 = -1LL;
static volatile int8_t x186 = -3;
int64_t t46 = 82436495651LL;
int16_t x191 = INT16_MAX;
volatile int64_t t47 = 14191795LL;
static volatile uint16_t x200 = 152U;
int8_t x202 = -1;
static int16_t x203 = 194;
int64_t x206 = INT64_MAX;
int8_t x210 = INT8_MIN;
volatile uint16_t x214 = 3298U;
int64_t x215 = -1LL;
int16_t x227 = INT16_MIN;
volatile int16_t x229 = INT16_MIN;
static int8_t x233 = 0;
static uint64_t x236 = UINT64_MAX;
int32_t t58 = 912338;
volatile int8_t x237 = 27;
static int8_t x239 = 26;
volatile int32_t t61 = -10806863;
int32_t x250 = INT32_MIN;
uint8_t x252 = 7U;
static int32_t t63 = 251199981;
int32_t x257 = INT32_MIN;
int32_t x259 = INT32_MIN;
uint8_t x270 = 51U;
volatile uint64_t x273 = 17625968060515354LLU;
static uint32_t x274 = 1039627517U;
int32_t x276 = -1;
static int16_t x277 = -1;
uint8_t x280 = 35U;
uint32_t x282 = 953959996U;
volatile int32_t t71 = 11;
uint64_t x296 = 396311714240402963LLU;
int8_t x298 = INT8_MAX;
int32_t x302 = INT32_MIN;
static int16_t x304 = -1;
int16_t x306 = INT16_MAX;
static int16_t x308 = INT16_MAX;
int32_t x309 = -3884570;
volatile int32_t x310 = INT32_MIN;
int8_t x316 = 0;
volatile uint64_t t79 = 2173593461493469078LLU;
static uint32_t x325 = 1335562U;
int16_t x327 = INT16_MAX;
int16_t x333 = INT16_MIN;
int64_t x337 = 1LL;
int16_t x340 = -8404;
static uint32_t x342 = 1045741U;
volatile uint64_t t87 = 127661897510LLU;
int8_t x355 = INT8_MIN;
int64_t t88 = -3178547709440LL;
int32_t x359 = INT32_MAX;
volatile int64_t x360 = 1221810823LL;
volatile uint16_t x363 = 29948U;
int64_t x372 = -1478855004513LL;
uint32_t x374 = UINT32_MAX;
static int32_t x375 = INT32_MAX;
int32_t t93 = 1035;
int64_t x379 = -82251895409880LL;
int16_t x380 = INT16_MIN;
volatile uint32_t x384 = 267705U;
int32_t t95 = 142372235;
volatile int32_t t97 = 1;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 208659;

	t0 = (x1&((x2&x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	static volatile int64_t x7 = INT64_MIN;
	int64_t x8 = 8645LL;
	int32_t t1 = 0;

	t1 = (x5&((x6&x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MIN;

	t2 = (x9&((x10&x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -171588;
	int64_t x14 = INT64_MAX;
	static volatile int8_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 306;

	t3 = (x13&((x14&x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	static int32_t x18 = -1;
	volatile uint64_t x19 = UINT64_MAX;
	volatile int32_t t4 = 5561;

	t4 = (x17&((x18&x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int16_t x22 = 193;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = -105;

	t5 = (x21&((x22&x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 615727660254LLU;
	volatile int64_t x26 = INT64_MIN;
	int8_t x27 = 10;
	uint16_t x28 = 1298U;

	t6 = (x25&((x26&x27)<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	uint8_t x31 = 1U;
	uint8_t x32 = 37U;
	static int32_t t7 = -1247;

	t7 = (x29&((x30&x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 35;
	uint8_t x34 = UINT8_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 0;

	t8 = (x33&((x34&x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 158;

	t9 = (x37&((x38&x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 16;
	static int32_t x42 = 85;
	int16_t x43 = 7648;
	int32_t t10 = -14;

	t10 = (x41&((x42&x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	static int32_t x47 = INT32_MIN;
	int32_t t11 = -26442;

	t11 = (x45&((x46&x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	int16_t x50 = INT16_MAX;
	static uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	int64_t t12 = -883317255462LL;

	t12 = (x49&((x50&x51)<=x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile uint64_t x54 = 4664474496LLU;
	uint8_t x55 = 3U;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 1928;

	t13 = (x53&((x54&x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint8_t x58 = 28U;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 0U;

	t14 = (x57&((x58&x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1708;
	int32_t x62 = -147789;
	int8_t x63 = INT8_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = -62907543;

	t15 = (x61&((x62&x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 129U;
	int8_t x66 = 19;
	int16_t x67 = -197;
	uint16_t x68 = 0U;
	volatile int32_t t16 = -1;

	t16 = (x65&((x66&x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = UINT16_MAX;
	volatile uint32_t x71 = 21189U;
	int8_t x72 = -2;
	static int32_t t17 = -73582326;

	t17 = (x69&((x70&x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	volatile int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	int32_t t18 = 0;

	t18 = (x73&((x74&x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t19 = 101210393;

	t19 = (x77&((x78&x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x84 = 1105968312180174457LLU;

	t20 = (x81&((x82&x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 490693701673LLU;
	int8_t x88 = -1;
	volatile int32_t t21 = -8277443;

	t21 = (x85&((x86&x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 57U;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 428;

	t22 = (x89&((x90&x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	volatile int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	volatile int64_t x96 = -144666885174LL;
	int32_t t23 = 0;

	t23 = (x93&((x94&x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x98 = 115U;
	volatile int16_t x100 = 2;
	static int32_t t24 = -113773087;

	t24 = (x97&((x98&x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -773;
	volatile int32_t x104 = -1;
	volatile int32_t t25 = -186075;

	t25 = (x101&((x102&x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = 1506444;
	static int32_t x108 = -1;

	t26 = (x105&((x106&x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -3;
	int32_t x110 = -1;
	int16_t x111 = -268;
	volatile int32_t t27 = -64457;

	t27 = (x109&((x110&x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int16_t x115 = -1;
	volatile uint64_t x116 = 6041943LLU;

	t28 = (x113&((x114&x115)<=x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 46U;
	volatile int8_t x118 = -11;
	volatile int64_t x119 = -1LL;
	uint8_t x120 = 6U;
	static volatile uint32_t t29 = 17169438U;

	t29 = (x117&((x118&x119)<=x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 1U;
	static int8_t x122 = -1;
	volatile int8_t x123 = -1;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -6866;

	t30 = (x121&((x122&x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	static volatile int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	int64_t x128 = -52681559508305382LL;
	int64_t t31 = 117LL;

	t31 = (x125&((x126&x127)<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 0U;
	uint8_t x131 = 58U;
	int32_t x132 = -435593;
	uint32_t t32 = 3160721U;

	t32 = (x129&((x130&x131)<=x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 20U;
	volatile int8_t x134 = INT8_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	uint32_t t33 = 15617043U;

	t33 = (x133&((x134&x135)<=x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = -209100LL;

	t34 = (x137&((x138&x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x142 = INT16_MAX;
	int8_t x143 = 6;
	uint32_t t35 = 490U;

	t35 = (x141&((x142&x143)<=x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 611U;
	volatile int16_t x146 = 3959;
	uint64_t x147 = 1894631LLU;
	uint8_t x148 = 4U;
	static uint32_t t36 = 477386612U;

	t36 = (x145&((x146&x147)<=x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x152 = INT8_MAX;

	t37 = (x149&((x150&x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	static volatile int32_t t38 = 7;

	t38 = (x153&((x154&x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = 121019;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 387322290;

	t39 = (x157&((x158&x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 238U;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t40 = 11;

	t40 = (x161&((x162&x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	static uint8_t x166 = 2U;
	int64_t x168 = -15072656313069LL;
	int32_t t41 = -934;

	t41 = (x165&((x166&x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -110LL;
	int8_t x170 = -1;
	uint32_t x171 = 8U;
	int32_t x172 = 12234;
	volatile int64_t t42 = 1762224132505048LL;

	t42 = (x169&((x170&x171)<=x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 1U;

	t43 = (x173&((x174&x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x179 = 12U;
	uint32_t x180 = UINT32_MAX;
	static volatile int32_t t44 = -3370269;

	t44 = (x177&((x178&x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MAX;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -1LL;
	int32_t t45 = 64306;

	t45 = (x181&((x182&x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x187 = -1;
	static volatile int16_t x188 = -1;

	t46 = (x185&((x186&x187)<=x188));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	static int8_t x190 = INT8_MIN;
	uint64_t x192 = 681LLU;

	t47 = (x189&((x190&x191)<=x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 783;
	uint16_t x194 = 29624U;
	uint64_t x195 = 6715989054341LLU;
	static uint64_t x196 = 1112759719166248LLU;
	int32_t t48 = 3;

	t48 = (x193&((x194&x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 137535868U;
	uint64_t x198 = 7LLU;
	static int16_t x199 = INT16_MIN;
	uint32_t t49 = 2U;

	t49 = (x197&((x198&x199)<=x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 1U;
	int8_t x204 = 1;
	volatile int32_t t50 = -657500;

	t50 = (x201&((x202&x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int64_t x207 = -1109776603217798001LL;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = -3523;

	t51 = (x205&((x206&x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = 6537776851197222LL;
	volatile int32_t t52 = -918739;

	t52 = (x209&((x210&x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = 1;
	uint32_t x216 = 247089228U;
	int32_t t53 = -142541851;

	t53 = (x213&((x214&x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 497LL;
	int8_t x218 = INT8_MIN;
	uint16_t x219 = 44U;
	int8_t x220 = -1;
	int64_t t54 = 3044087177219933843LL;

	t54 = (x217&((x218&x219)<=x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 110716427045301233LLU;
	static int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 14U;
	static uint64_t t55 = 1LLU;

	t55 = (x221&((x222&x223)<=x224));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = -1LL;
	static int64_t x226 = 56LL;
	uint8_t x228 = 4U;
	static volatile int64_t t56 = 4058LL;

	t56 = (x225&((x226&x227)<=x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = -51;
	int16_t x232 = INT16_MIN;
	static int32_t t57 = -15935;

	t57 = (x229&((x230&x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 2U;
	int16_t x235 = INT16_MAX;

	t58 = (x233&((x234&x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 162;

	t59 = (x237&((x238&x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x242 = 25U;
	int32_t x243 = INT32_MAX;
	volatile int16_t x244 = INT16_MIN;
	volatile int64_t t60 = -5553991LL;

	t60 = (x241&((x242&x243)<=x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = UINT16_MAX;
	uint32_t x246 = 26U;
	uint32_t x247 = 33U;
	int8_t x248 = -6;

	t61 = (x245&((x246&x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 48LLU;
	int16_t x251 = 15652;
	static uint64_t t62 = 457987923639956871LLU;

	t62 = (x249&((x250&x251)<=x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int8_t x254 = INT8_MAX;
	static int64_t x255 = -1LL;
	int16_t x256 = 2;

	t63 = (x253&((x254&x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x258 = 2193687660752LLU;
	volatile uint32_t x260 = 10674911U;
	int32_t t64 = 25;

	t64 = (x257&((x258&x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = UINT32_MAX;
	uint64_t t65 = 32756387572LLU;

	t65 = (x261&((x262&x263)<=x264));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 1;
	uint64_t x266 = 3653080755028398040LLU;
	uint8_t x267 = 58U;
	int64_t x268 = 230100680644LL;
	static volatile int32_t t66 = 378;

	t66 = (x265&((x266&x267)<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 460058683LLU;
	static int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	uint64_t t67 = 3LLU;

	t67 = (x269&((x270&x271)<=x272));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x275 = -1;
	volatile uint64_t t68 = 6356761767LLU;

	t68 = (x273&((x274&x275)<=x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MAX;
	int64_t x279 = -1LL;
	int32_t t69 = -19815533;

	t69 = (x277&((x278&x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int8_t x283 = 7;
	int64_t x284 = INT64_MAX;
	int32_t t70 = -1;

	t70 = (x281&((x282&x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int64_t x286 = INT64_MIN;
	volatile uint16_t x287 = 16565U;
	int64_t x288 = 46598368079616987LL;

	t71 = (x285&((x286&x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t72 = -81943;

	t72 = (x289&((x290&x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 1U;
	static volatile int64_t x294 = -1LL;
	static volatile uint32_t x295 = 2021223792U;
	volatile int32_t t73 = 1246;

	t73 = (x293&((x294&x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	uint32_t x299 = 6466162U;
	int64_t x300 = -1LL;
	static int32_t t74 = 19;

	t74 = (x297&((x298&x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x303 = 3U;
	static int32_t t75 = 0;

	t75 = (x301&((x302&x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x307 = -1;
	volatile int32_t t76 = -33;

	t76 = (x305&((x306&x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x311 = -171084;
	int16_t x312 = 1;
	volatile int32_t t77 = 3;

	t77 = (x309&((x310&x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 1;
	int16_t x314 = -12;
	volatile int16_t x315 = -12;
	volatile int32_t t78 = 48241951;

	t78 = (x313&((x314&x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x317 = 7LLU;
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = -1;
	uint16_t x320 = 6U;

	t79 = (x317&((x318&x319)<=x320));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	int8_t x323 = INT8_MAX;
	uint64_t x324 = UINT64_MAX;
	static int32_t t80 = 560;

	t80 = (x321&((x322&x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	int32_t x328 = 120;
	volatile uint32_t t81 = 22U;

	t81 = (x325&((x326&x327)<=x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 715U;
	int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -59;

	t82 = (x329&((x330&x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x334 = 24934U;
	int16_t x335 = INT16_MAX;
	volatile int32_t x336 = INT32_MAX;
	static int32_t t83 = -58347486;

	t83 = (x333&((x334&x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	static volatile int64_t t84 = 34LL;

	t84 = (x337&((x338&x339)<=x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 1;
	uint8_t x343 = 40U;
	volatile int64_t x344 = INT64_MAX;
	int32_t t85 = -1;

	t85 = (x341&((x342&x343)<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 1944019768U;
	static uint16_t x346 = 111U;
	int64_t x347 = -1LL;
	uint64_t x348 = UINT64_MAX;
	volatile uint32_t t86 = 4850U;

	t86 = (x345&((x346&x347)<=x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 3191063695LLU;
	int16_t x350 = INT16_MAX;
	int64_t x351 = 1084504943969273LL;
	int32_t x352 = INT32_MIN;

	t87 = (x349&((x350&x351)<=x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -1LL;
	static uint16_t x356 = UINT16_MAX;

	t88 = (x353&((x354&x355)<=x356));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	static int32_t x358 = -1;
	volatile int32_t t89 = -23;

	t89 = (x357&((x358&x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int64_t x362 = -66146343547LL;
	static volatile int32_t x364 = -64418169;
	volatile int32_t t90 = 717869276;

	t90 = (x361&((x362&x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int64_t x366 = INT64_MIN;
	uint32_t x367 = 137U;
	static uint64_t x368 = 22LLU;
	int32_t t91 = 29;

	t91 = (x365&((x366&x367)<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -5909;
	static volatile uint32_t x370 = 11U;
	int16_t x371 = INT16_MIN;
	volatile int32_t t92 = -6237;

	t92 = (x369&((x370&x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x376 = 353U;

	t93 = (x373&((x374&x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int64_t x378 = 616495422241LL;
	volatile int64_t t94 = 3440363606230LL;

	t94 = (x377&((x378&x379)<=x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = 34U;
	volatile uint64_t x383 = 1497822LLU;

	t95 = (x381&((x382&x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	uint64_t x386 = 8074778LLU;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 3U;
	int32_t t96 = 180;

	t96 = (x385&((x386&x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 21U;
	uint8_t x391 = 97U;
	volatile uint64_t x392 = 26291015177686LLU;

	t97 = (x389&((x390&x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 6250U;
	int16_t x394 = 5;
	static int64_t x395 = INT64_MIN;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 1110;

	t98 = (x393&((x394&x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	uint32_t x399 = UINT32_MAX;
	static int64_t x400 = -2782LL;
	volatile uint64_t t99 = 3153963085369LLU;

	t99 = (x397&((x398&x399)<=x400));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

