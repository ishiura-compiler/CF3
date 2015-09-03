#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x3 = -2237;
static volatile uint8_t x9 = 1U;
uint32_t x11 = 31U;
static volatile uint32_t x12 = 14312312U;
uint8_t x28 = 3U;
volatile int8_t x29 = INT8_MIN;
int8_t x38 = -1;
int16_t x39 = 1025;
volatile int32_t t9 = -149391915;
int16_t x42 = -1;
uint32_t x57 = 5U;
static int32_t x62 = INT32_MIN;
uint32_t x69 = 641U;
uint32_t x71 = UINT32_MAX;
static uint64_t x81 = UINT64_MAX;
static volatile int16_t x85 = -1;
int8_t x90 = INT8_MAX;
int32_t t22 = -23661346;
uint32_t x98 = UINT32_MAX;
volatile int8_t x107 = INT8_MIN;
volatile int32_t t26 = -3580726;
int32_t x116 = 2914;
uint32_t t29 = 6529381U;
uint32_t x121 = UINT32_MAX;
static volatile int16_t x132 = -110;
static int8_t x146 = INT8_MAX;
uint8_t x147 = UINT8_MAX;
uint32_t x148 = 29968U;
volatile int32_t t38 = -111;
uint16_t x157 = 309U;
static volatile int64_t t40 = 1LL;
int32_t x169 = 15832;
int16_t x174 = -115;
int32_t t43 = -5023;
static uint8_t x178 = UINT8_MAX;
volatile uint16_t x180 = 745U;
int16_t x185 = 11;
static int64_t x190 = 61416177LL;
int8_t x192 = -19;
uint16_t x193 = UINT16_MAX;
int16_t x195 = -1;
int16_t x197 = INT16_MIN;
static int8_t x203 = -1;
int8_t x209 = -15;
volatile int32_t t52 = 117;
volatile uint32_t x213 = UINT32_MAX;
int16_t x215 = 1;
int8_t x216 = INT8_MAX;
int64_t x223 = INT64_MIN;
uint8_t x224 = UINT8_MAX;
static int16_t x228 = INT16_MAX;
static uint64_t t57 = 3068152LLU;
uint32_t x233 = 4U;
uint8_t x241 = 1U;
int16_t x243 = INT16_MAX;
volatile uint32_t x247 = 0U;
uint64_t x250 = 1480187254257395360LLU;
uint8_t x251 = UINT8_MAX;
int32_t x253 = -1;
static int32_t t63 = 26483;
uint16_t x271 = UINT16_MAX;
volatile int32_t t68 = -16117617;
static int32_t x281 = 1720300;
int32_t x294 = INT32_MIN;
int32_t x296 = INT32_MIN;
int32_t x297 = INT32_MIN;
uint8_t x303 = 0U;
int16_t x304 = INT16_MIN;
int8_t x309 = 0;
volatile int64_t x313 = INT64_MIN;
uint64_t x317 = 166206477864LLU;
uint64_t x320 = 59619303720223939LLU;
int16_t x325 = -1;
static int32_t t81 = -498310214;
uint16_t x340 = 47U;
static int32_t t84 = 241;
int16_t x361 = -409;
static int16_t x362 = INT16_MIN;
static volatile int32_t t90 = -31358;
int64_t x367 = INT64_MIN;
volatile uint64_t x368 = 796873106987958336LLU;
int32_t t91 = 16058;
int64_t x369 = -1LL;
int64_t t92 = 191LL;
uint32_t t93 = 2631646U;
uint64_t x380 = UINT64_MAX;
uint8_t x381 = UINT8_MAX;
static volatile uint64_t x387 = 682832175083075LLU;
static volatile int32_t t96 = -4084;
int32_t x389 = 75994688;
int8_t x392 = -2;
int32_t x399 = INT32_MIN;
int32_t t99 = -251;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	uint32_t x4 = 1U;
	volatile int64_t t0 = -9290907LL;

	t0 = (x1&((x2<=x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int16_t x6 = -1;
	volatile uint32_t x7 = 150912U;
	int32_t x8 = -125;
	volatile int32_t t1 = 99743012;

	t1 = (x5&((x6<=x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int32_t t2 = -700;

	t2 = (x9&((x10<=x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	volatile uint16_t x14 = 1U;
	int8_t x15 = INT8_MIN;
	volatile int64_t x16 = INT64_MAX;
	uint32_t t3 = 899U;

	t3 = (x13&((x14<=x15)==x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = UINT32_MAX;
	static int16_t x19 = INT16_MIN;
	int64_t x20 = 22545LL;
	int32_t t4 = 29963;

	t4 = (x17&((x18<=x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int16_t x22 = -35;
	static int64_t x23 = INT64_MIN;
	static volatile uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = 0;

	t5 = (x21&((x22<=x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -32292683465325245LL;
	static int64_t x26 = -32977595168964LL;
	int64_t x27 = INT64_MAX;
	volatile int64_t t6 = -126717842LL;

	t6 = (x25&((x26<=x27)==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -45;
	uint32_t x31 = 61235235U;
	uint16_t x32 = 44U;
	int32_t t7 = 26;

	t7 = (x29&((x30<=x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 123968LLU;
	int8_t x34 = 0;
	int32_t x35 = -4209589;
	int16_t x36 = -48;
	volatile uint64_t t8 = 64037LLU;

	t8 = (x33&((x34<=x35)==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x40 = 563U;

	t9 = (x37&((x38<=x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -9;
	static uint32_t x43 = 6175367U;
	static uint32_t x44 = 38U;
	volatile int32_t t10 = -31718631;

	t10 = (x41&((x42<=x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 771592008;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = 4880;
	static volatile uint64_t x48 = 3LLU;
	volatile int32_t t11 = 13188709;

	t11 = (x45&((x46<=x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static int8_t x50 = -1;
	static int64_t x51 = 897293789071754086LL;
	static int32_t x52 = 180775;
	static int32_t t12 = 699377479;

	t12 = (x49&((x50<=x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MAX;
	static uint16_t x55 = UINT16_MAX;
	uint64_t x56 = 0LLU;
	uint32_t t13 = 1624685U;

	t13 = (x53&((x54<=x55)==x56));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	uint32_t x59 = 894U;
	static int16_t x60 = -1;
	volatile uint32_t t14 = 164854U;

	t14 = (x57&((x58<=x59)==x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MAX;
	int64_t x63 = -1369806LL;
	uint8_t x64 = 56U;
	static volatile int64_t t15 = 5583830833496LL;

	t15 = (x61&((x62<=x63)==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 807226348U;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = UINT64_MAX;
	static int8_t x68 = INT8_MAX;
	volatile uint32_t t16 = 97U;

	t16 = (x65&((x66<=x67)==x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	static int8_t x72 = -1;
	uint32_t t17 = 28U;

	t17 = (x69&((x70<=x71)==x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MIN;
	volatile int8_t x75 = INT8_MIN;
	uint64_t x76 = 62LLU;
	volatile int32_t t18 = 725433558;

	t18 = (x73&((x74<=x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = 14U;
	int8_t x80 = INT8_MAX;
	int32_t t19 = 160346102;

	t19 = (x77&((x78<=x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = -1383LL;
	int16_t x83 = INT16_MIN;
	volatile int64_t x84 = -1LL;
	static volatile uint64_t t20 = 63LLU;

	t20 = (x81&((x82<=x83)==x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int16_t x87 = -1;
	static int64_t x88 = INT64_MIN;
	int32_t t21 = 2887687;

	t21 = (x85&((x86<=x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1U;
	volatile int64_t x91 = 61LL;
	int16_t x92 = -24;

	t22 = (x89&((x90<=x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int64_t x94 = -9LL;
	uint8_t x95 = 2U;
	static uint8_t x96 = UINT8_MAX;
	int32_t t23 = -67291905;

	t23 = (x93&((x94<=x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int32_t x99 = INT32_MAX;
	int64_t x100 = -1LL;
	static uint32_t t24 = 30831U;

	t24 = (x97&((x98<=x99)==x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2685U;
	static int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 25348;

	t25 = (x101&((x102<=x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	int32_t x108 = -1;

	t26 = (x105&((x106<=x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -27;
	int32_t x110 = 13878;
	uint16_t x111 = UINT16_MAX;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = 3062504;

	t27 = (x109&((x110<=x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = 6;
	int64_t t28 = -1622676993887LL;

	t28 = (x113&((x114<=x115)==x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 662U;
	uint8_t x118 = 4U;
	static volatile int32_t x119 = 0;
	static int32_t x120 = 16207222;

	t29 = (x117&((x118<=x119)==x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = -962131480LL;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = 10U;
	uint32_t t30 = 108U;

	t30 = (x121&((x122<=x123)==x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 2U;
	static int32_t x126 = 657;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 91U;
	int32_t t31 = -99229099;

	t31 = (x125&((x126<=x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 3U;
	uint16_t x130 = 80U;
	int64_t x131 = INT64_MIN;
	int32_t t32 = -6836;

	t32 = (x129&((x130<=x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 3431U;
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 3540LLU;
	uint16_t x136 = 404U;
	volatile uint32_t t33 = 302650121U;

	t33 = (x133&((x134<=x135)==x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -13;
	uint32_t x140 = 20092908U;
	volatile int32_t t34 = -13234;

	t34 = (x137&((x138<=x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MAX;
	uint32_t x142 = 3073261U;
	uint16_t x143 = UINT16_MAX;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = 32412292;

	t35 = (x141&((x142<=x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t t36 = 193U;

	t36 = (x145&((x146<=x147)==x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = 12;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 10714024;

	t37 = (x149&((x150<=x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = -1;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MIN;

	t38 = (x153&((x154<=x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 11404U;
	static int64_t x159 = -910859733LL;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = -6;

	t39 = (x157&((x158<=x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = 106442872946724LL;
	int32_t x162 = -4284;
	volatile uint16_t x163 = 812U;
	static uint8_t x164 = UINT8_MAX;

	t40 = (x161&((x162<=x163)==x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static volatile uint8_t x166 = 14U;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile uint32_t t41 = 429211U;

	t41 = (x165&((x166<=x167)==x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = 0U;
	static int32_t x171 = INT32_MAX;
	static int32_t x172 = -1790;
	int32_t t42 = -1817008;

	t42 = (x169&((x170<=x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -62;
	volatile uint8_t x175 = 1U;
	int16_t x176 = -1;

	t43 = (x173&((x174<=x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	volatile uint64_t x179 = UINT64_MAX;
	volatile int32_t t44 = 9;

	t44 = (x177&((x178<=x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static volatile int8_t x182 = INT8_MIN;
	uint32_t x183 = 13U;
	int8_t x184 = INT8_MIN;
	static volatile int64_t t45 = -384603560515LL;

	t45 = (x181&((x182<=x183)==x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -64;

	t46 = (x185&((x186<=x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 550U;
	uint32_t x191 = 6170400U;
	uint32_t t47 = 2049473876U;

	t47 = (x189&((x190<=x191)==x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -1;
	static int32_t x196 = INT32_MIN;
	int32_t t48 = 22131;

	t48 = (x193&((x194<=x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x198 = UINT8_MAX;
	static uint64_t x199 = 2304743438113059411LLU;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = -46502;

	t49 = (x197&((x198<=x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	volatile int16_t x204 = INT16_MIN;
	int32_t t50 = -109588;

	t50 = (x201&((x202<=x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint8_t x206 = 3U;
	volatile uint16_t x207 = 1668U;
	static int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = -105562718;

	t51 = (x205&((x206<=x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = INT32_MIN;
	int64_t x211 = -146410522862483LL;
	volatile uint16_t x212 = 4U;

	t52 = (x209&((x210<=x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = 1;
	uint32_t t53 = 2519461U;

	t53 = (x213&((x214<=x215)==x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -298;
	int64_t x218 = -1LL;
	int32_t x219 = INT32_MAX;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t54 = -3398359;

	t54 = (x217&((x218<=x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -352;
	int64_t x222 = INT64_MAX;
	volatile int32_t t55 = -41401595;

	t55 = (x221&((x222<=x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = -90188LL;
	volatile uint8_t x226 = 0U;
	int64_t x227 = INT64_MIN;
	volatile int64_t t56 = 6317LL;

	t56 = (x225&((x226<=x227)==x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 143681119327LLU;
	static int64_t x230 = 3731075404070467LL;
	uint32_t x231 = 547548U;
	static int16_t x232 = INT16_MAX;

	t57 = (x229&((x230<=x231)==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 104451;
	int8_t x235 = 0;
	uint64_t x236 = 708LLU;
	uint32_t t58 = 34U;

	t58 = (x233&((x234<=x235)==x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	static int32_t x238 = 8054461;
	static int8_t x239 = -54;
	int64_t x240 = 263702914554LL;
	int32_t t59 = -9244316;

	t59 = (x237&((x238<=x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x242 = -1;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 546;

	t60 = (x241&((x242<=x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 220125742;
	static int64_t x246 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = 72437;

	t61 = (x245&((x246<=x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	static int32_t x252 = -817657;
	volatile int32_t t62 = 23457285;

	t62 = (x249&((x250<=x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -23;
	uint32_t x255 = 124U;
	int16_t x256 = INT16_MIN;

	t63 = (x253&((x254<=x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	static volatile uint32_t x259 = 9327857U;
	int64_t x260 = 722LL;
	volatile int32_t t64 = 76746130;

	t64 = (x257&((x258<=x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 614LLU;
	int16_t x262 = 1820;
	static uint8_t x263 = 22U;
	uint16_t x264 = UINT16_MAX;
	static uint64_t t65 = 6910023017169628LLU;

	t65 = (x261&((x262<=x263)==x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -230LL;
	uint16_t x266 = 2U;
	volatile int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	volatile int64_t t66 = -55438979248384LL;

	t66 = (x265&((x266<=x267)==x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MAX;
	int8_t x272 = INT8_MIN;
	static int32_t t67 = 1;

	t67 = (x269&((x270<=x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -14858;
	int16_t x274 = INT16_MAX;
	int32_t x275 = -9830;
	volatile int16_t x276 = -1;

	t68 = (x273&((x274<=x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = -1;
	int32_t x279 = -669983;
	int16_t x280 = -1;
	volatile int32_t t69 = -1702654;

	t69 = (x277&((x278<=x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	int64_t x283 = INT64_MIN;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 557299;

	t70 = (x281&((x282<=x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t71 = -1129529684900LL;

	t71 = (x285&((x286<=x287)==x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = 28;
	int16_t x290 = -1;
	uint16_t x291 = 243U;
	volatile uint64_t x292 = 340LLU;
	static volatile int32_t t72 = -3759;

	t72 = (x289&((x290<=x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 1U;
	int64_t x295 = -28LL;
	int32_t t73 = -4135;

	t73 = (x293&((x294<=x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MAX;
	int8_t x299 = -1;
	int16_t x300 = -977;
	int32_t t74 = 391;

	t74 = (x297&((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 214309LLU;
	volatile int32_t x302 = 1981576;
	uint64_t t75 = 2003191413642LLU;

	t75 = (x301&((x302<=x303)==x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 1U;
	int64_t x308 = -57260LL;
	volatile int64_t t76 = -206937223423641200LL;

	t76 = (x305&((x306<=x307)==x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -118LL;
	volatile uint64_t x311 = 34519333571174LLU;
	static uint32_t x312 = 130005588U;
	int32_t t77 = 3;

	t77 = (x309&((x310<=x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	static volatile uint8_t x315 = 1U;
	int8_t x316 = INT8_MIN;
	int64_t t78 = -28163LL;

	t78 = (x313&((x314<=x315)==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = 11172185230LL;
	int8_t x319 = INT8_MIN;
	volatile uint64_t t79 = 16204LLU;

	t79 = (x317&((x318<=x319)==x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 967U;
	int32_t x322 = INT32_MAX;
	static int8_t x323 = INT8_MAX;
	uint64_t x324 = 502693LLU;
	int32_t t80 = -819041399;

	t80 = (x321&((x322<=x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;

	t81 = (x325&((x326<=x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -32315;

	t82 = (x329&((x330<=x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 31439324U;
	int32_t x334 = -176728840;
	volatile int64_t x335 = -40LL;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t83 = 96261U;

	t83 = (x333&((x334<=x335)==x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint8_t x338 = 15U;
	static int32_t x339 = -97845475;

	t84 = (x337&((x338<=x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 30U;
	volatile int8_t x342 = 1;
	volatile uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 7932672316896474094LLU;
	int32_t t85 = 315075897;

	t85 = (x341&((x342<=x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	static uint16_t x347 = 31U;
	static uint64_t x348 = 8460908140645LLU;
	int64_t t86 = -8320499182007685LL;

	t86 = (x345&((x346<=x347)==x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	static uint32_t x351 = 123560U;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = 1034393088;

	t87 = (x349&((x350<=x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = 0;
	volatile int16_t x356 = 28;
	volatile int32_t t88 = 766883243;

	t88 = (x353&((x354<=x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	int8_t x358 = 7;
	uint64_t x359 = 70LLU;
	int32_t x360 = -1;
	static volatile int32_t t89 = 7373825;

	t89 = (x357&((x358<=x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x363 = INT64_MIN;
	int16_t x364 = 3;

	t90 = (x361&((x362<=x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -20;
	int64_t x366 = INT64_MIN;

	t91 = (x365&((x366<=x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = -186LL;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = UINT64_MAX;

	t92 = (x369&((x370<=x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	static int64_t x374 = INT64_MAX;
	int32_t x375 = 577461665;
	int32_t x376 = INT32_MAX;

	t93 = (x373&((x374<=x375)==x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 686727223557220LLU;
	int64_t x379 = 17LL;
	int32_t t94 = 4;

	t94 = (x377&((x378<=x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = -1;
	uint16_t x384 = 200U;
	volatile int32_t t95 = 12294158;

	t95 = (x381&((x382<=x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 2U;
	int64_t x386 = INT64_MIN;
	uint16_t x388 = 1384U;

	t96 = (x385&((x386<=x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = -2;
	volatile int16_t x391 = INT16_MAX;
	int32_t t97 = 40;

	t97 = (x389&((x390<=x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	static volatile uint8_t x394 = 1U;
	static int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = 61472;

	t98 = (x393&((x394<=x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	static int8_t x398 = INT8_MIN;
	static uint64_t x400 = 4991520929751588LLU;

	t99 = (x397&((x398<=x399)==x400));

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

