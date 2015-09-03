#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x17 = -103140;
uint32_t x21 = 516596811U;
volatile int32_t x25 = INT32_MIN;
int8_t x26 = -1;
int64_t x32 = -54921645LL;
static int32_t x33 = 0;
int64_t x34 = INT64_MIN;
volatile int8_t x36 = -1;
uint32_t x45 = 13U;
int32_t t7 = -68080;
static uint32_t x53 = UINT32_MAX;
int64_t x58 = -1539988055LL;
int16_t x61 = 1;
int32_t x65 = -1;
static uint64_t x76 = 318149LLU;
int8_t x78 = INT8_MAX;
uint32_t x82 = UINT32_MAX;
int8_t x85 = -19;
volatile int32_t t17 = 1;
volatile uint64_t x96 = 21506912618962LLU;
int16_t x102 = -1;
int8_t x103 = INT8_MIN;
uint32_t x105 = 58007U;
volatile int32_t t22 = 8;
static int64_t x109 = INT64_MIN;
int32_t t23 = 7138394;
int8_t x123 = -1;
volatile uint8_t x127 = 38U;
int8_t x133 = INT8_MIN;
int32_t x134 = 3975270;
int64_t x137 = 306653965460682LL;
uint32_t x145 = 147U;
static volatile int32_t t32 = 29676;
int8_t x154 = -1;
int8_t x159 = INT8_MIN;
int64_t x163 = 2522359193894684822LL;
int8_t x170 = -1;
volatile int64_t x179 = 3588203335LL;
int8_t x180 = INT8_MIN;
volatile int8_t x182 = INT8_MIN;
int16_t x185 = INT16_MIN;
int8_t x188 = INT8_MIN;
int32_t t41 = -543843;
int8_t x191 = INT8_MAX;
uint8_t x199 = 0U;
uint32_t x208 = UINT32_MAX;
volatile int32_t t45 = 2033613;
int64_t x214 = -1LL;
int32_t x216 = INT32_MIN;
int32_t t47 = 11;
uint8_t x222 = 0U;
uint64_t x236 = 26944LLU;
static uint16_t x239 = UINT16_MAX;
int32_t t52 = -73135;
int8_t x241 = 1;
int64_t x252 = INT64_MAX;
static volatile int32_t t54 = 317;
int16_t x253 = INT16_MIN;
int32_t x261 = INT32_MIN;
volatile int8_t x264 = -2;
static uint8_t x266 = 1U;
static uint8_t x267 = 0U;
volatile int64_t x270 = INT64_MAX;
static int16_t x271 = INT16_MIN;
int64_t x274 = -1LL;
volatile int32_t t59 = -456;
uint64_t x288 = 434159325LLU;
int16_t x292 = 6692;
int8_t x297 = 0;
volatile int32_t t64 = 471723;
uint32_t x315 = 385U;
uint16_t x316 = UINT16_MAX;
static uint8_t x318 = UINT8_MAX;
static int8_t x326 = INT8_MIN;
uint64_t x327 = UINT64_MAX;
static volatile int32_t x338 = INT32_MIN;
volatile int8_t x340 = -1;
int32_t x343 = -20;
int32_t x344 = INT32_MIN;
int64_t x345 = -1LL;
static int16_t x346 = INT16_MIN;
int32_t t74 = 35659720;
uint32_t x365 = UINT32_MAX;
int32_t t78 = -149055;
int32_t x379 = INT32_MAX;
volatile int32_t t80 = 4;
volatile int16_t x402 = INT16_MIN;
static int32_t t85 = -33560;
volatile int32_t t86 = -1;
int64_t x430 = -1LL;
static int8_t x433 = INT8_MIN;
int32_t t89 = 45;
int64_t x453 = 569731LL;
uint16_t x455 = 1U;
static volatile int32_t x457 = INT32_MIN;
static volatile int32_t x464 = INT32_MIN;
static volatile int32_t t95 = -599037;
static int8_t x465 = INT8_MIN;
static uint16_t x466 = UINT16_MAX;
int64_t x473 = -45406054356271LL;
static int8_t x476 = INT8_MAX;
volatile int16_t x484 = INT16_MIN;
uint32_t x487 = 874491284U;
static volatile int8_t x488 = -55;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	static volatile int8_t x6 = INT8_MIN;
	uint32_t x7 = 36801U;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 1926;

	t0 = (x5<=((x6+x7)%x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x18 = 3;
	int64_t x19 = -290LL;
	int32_t x20 = -1;
	int32_t t1 = -647670;

	t1 = (x17<=((x18+x19)%x20));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x22 = -57;
	volatile int16_t x23 = 5;
	uint8_t x24 = 1U;
	static volatile int32_t t2 = -37019;

	t2 = (x21<=((x22+x23)%x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x27 = 14722595527992LL;
	int8_t x28 = INT8_MAX;
	volatile int32_t t3 = 6;

	t3 = (x25<=((x26+x27)%x28));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -14;
	volatile int64_t x30 = INT64_MAX;
	static volatile uint64_t x31 = UINT64_MAX;
	volatile int32_t t4 = 265117198;

	t4 = (x29<=((x30+x31)%x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x35 = INT16_MAX;
	volatile int32_t t5 = -14398660;

	t5 = (x33<=((x34+x35)%x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	int32_t x43 = 30;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t6 = -216149;

	t6 = (x41<=((x42+x43)%x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x46 = 39U;
	int32_t x47 = INT32_MIN;
	static int64_t x48 = -52630387LL;

	t7 = (x45<=((x46+x47)%x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = -1;
	uint16_t x51 = 2U;
	static int64_t x52 = -1LL;
	volatile int32_t t8 = 7049;

	t8 = (x49<=((x50+x51)%x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x54 = INT32_MIN;
	static int8_t x55 = INT8_MAX;
	static uint32_t x56 = 19599U;
	static int32_t t9 = -34;

	t9 = (x53<=((x54+x55)%x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t10 = 34205;

	t10 = (x57<=((x58+x59)%x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x62 = INT64_MAX;
	volatile int64_t x63 = -2952572502987LL;
	int16_t x64 = -3;
	int32_t t11 = 14;

	t11 = (x61<=((x62+x63)%x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x66 = 12U;
	uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = INT16_MAX;
	volatile int32_t t12 = 247;

	t12 = (x65<=((x66+x67)%x68));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MAX;
	static int8_t x70 = 1;
	static uint64_t x71 = 8057906LLU;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t13 = -194;

	t13 = (x69<=((x70+x71)%x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MAX;
	static volatile int8_t x74 = INT8_MIN;
	static int64_t x75 = INT64_MAX;
	static int32_t t14 = -246;

	t14 = (x73<=((x74+x75)%x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 3218U;
	volatile uint32_t x79 = 21305886U;
	int16_t x80 = 1466;
	static volatile int32_t t15 = -1;

	t15 = (x77<=((x78+x79)%x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	static volatile uint16_t x83 = UINT16_MAX;
	volatile uint8_t x84 = 20U;
	int32_t t16 = 1;

	t16 = (x81<=((x82+x83)%x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x86 = 3U;
	volatile int8_t x87 = INT8_MAX;
	volatile int8_t x88 = 1;

	t17 = (x85<=((x86+x87)%x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -14;
	int64_t x90 = -1905LL;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = -92239087;
	static int32_t t18 = -236263;

	t18 = (x89<=((x90+x91)%x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = -1LL;
	int16_t x94 = 29;
	int16_t x95 = INT16_MIN;
	int32_t t19 = -764227;

	t19 = (x93<=((x94+x95)%x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = 22U;
	uint8_t x98 = 13U;
	uint64_t x99 = 933LLU;
	volatile uint32_t x100 = 5427U;
	volatile int32_t t20 = 17337449;

	t20 = (x97<=((x98+x99)%x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int16_t x104 = INT16_MAX;
	int32_t t21 = 953;

	t21 = (x101<=((x102+x103)%x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x106 = -25LL;
	uint32_t x107 = 27U;
	volatile int8_t x108 = INT8_MIN;

	t22 = (x105<=((x106+x107)%x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x110 = 6;
	int16_t x111 = INT16_MAX;
	int32_t x112 = -49653;

	t23 = (x109<=((x110+x111)%x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 212U;
	volatile uint64_t x114 = UINT64_MAX;
	int64_t x115 = -55LL;
	int16_t x116 = INT16_MAX;
	int32_t t24 = 827;

	t24 = (x113<=((x114+x115)%x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -9;
	volatile int32_t t25 = 1;

	t25 = (x117<=((x118+x119)%x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MIN;
	static int16_t x122 = INT16_MAX;
	static uint64_t x124 = 1LLU;
	int32_t t26 = -119138352;

	t26 = (x121<=((x122+x123)%x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 0U;
	int32_t x126 = 16343788;
	int8_t x128 = 1;
	volatile int32_t t27 = 2;

	t27 = (x125<=((x126+x127)%x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = INT32_MIN;
	volatile int16_t x130 = INT16_MIN;
	int32_t x131 = -1990;
	int16_t x132 = 10;
	int32_t t28 = -399;

	t28 = (x129<=((x130+x131)%x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x135 = -1;
	int16_t x136 = 91;
	int32_t t29 = -43;

	t29 = (x133<=((x134+x135)%x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x138 = UINT8_MAX;
	int8_t x139 = INT8_MAX;
	int64_t x140 = -58500843103944LL;
	int32_t t30 = 15369;

	t30 = (x137<=((x138+x139)%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 1873296LLU;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = -1LL;
	uint64_t x144 = 2326LLU;
	int32_t t31 = -415187167;

	t31 = (x141<=((x142+x143)%x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = 0U;
	int32_t x147 = -1;
	uint8_t x148 = UINT8_MAX;

	t32 = (x145<=((x146+x147)%x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	int32_t t33 = 20083501;

	t33 = (x153<=((x154+x155)%x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	static volatile int16_t x158 = -1;
	uint8_t x160 = 21U;
	volatile int32_t t34 = 447411;

	t34 = (x157<=((x158+x159)%x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x161 = 10519U;
	static int32_t x162 = INT32_MIN;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t35 = 1;

	t35 = (x161<=((x162+x163)%x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x165 = 109U;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t36 = 230904;

	t36 = (x165<=((x166+x167)%x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x169 = 1626U;
	volatile int64_t x171 = INT64_MAX;
	uint64_t x172 = 1430461473LLU;
	int32_t t37 = 12724602;

	t37 = (x169<=((x170+x171)%x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t38 = 40250664;

	t38 = (x173<=((x174+x175)%x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = INT32_MIN;
	static volatile int32_t t39 = 49366;

	t39 = (x177<=((x178+x179)%x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = 1;
	int64_t x183 = -1LL;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t40 = 217;

	t40 = (x181<=((x182+x183)%x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x186 = -1;
	int16_t x187 = 884;

	t41 = (x185<=((x186+x187)%x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -117718046941LL;
	static volatile int64_t x190 = INT64_MIN;
	static int8_t x192 = INT8_MAX;
	int32_t t42 = 166248;

	t42 = (x189<=((x190+x191)%x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MAX;
	volatile int16_t x198 = INT16_MAX;
	static int64_t x200 = INT64_MAX;
	int32_t t43 = 331877;

	t43 = (x197<=((x198+x199)%x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = 5006;
	static uint8_t x203 = 0U;
	volatile int64_t x204 = -212595730296460LL;
	static volatile int32_t t44 = 12129;

	t44 = (x201<=((x202+x203)%x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MAX;
	uint32_t x206 = 0U;
	int16_t x207 = -25;

	t45 = (x205<=((x206+x207)%x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 1151990075117172907LLU;
	volatile uint16_t x215 = 96U;
	volatile int32_t t46 = -705;

	t46 = (x213<=((x214+x215)%x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x217 = 0U;
	uint8_t x218 = 1U;
	static volatile uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;

	t47 = (x217<=((x218+x219)%x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MIN;
	int16_t x223 = 32;
	uint16_t x224 = UINT16_MAX;
	int32_t t48 = 2683;

	t48 = (x221<=((x222+x223)%x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MAX;
	static int16_t x226 = -1;
	int64_t x227 = 537911139143LL;
	int64_t x228 = -1LL;
	int32_t t49 = 208;

	t49 = (x225<=((x226+x227)%x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = UINT32_MAX;
	static uint16_t x230 = 1067U;
	int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	int32_t t50 = -8;

	t50 = (x229<=((x230+x231)%x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MAX;
	static volatile int16_t x234 = -2231;
	int8_t x235 = INT8_MIN;
	int32_t t51 = 519;

	t51 = (x233<=((x234+x235)%x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = -1LL;
	volatile uint8_t x238 = UINT8_MAX;
	static int8_t x240 = INT8_MIN;

	t52 = (x237<=((x238+x239)%x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x242 = 1U;
	uint8_t x243 = 22U;
	uint32_t x244 = UINT32_MAX;
	static int32_t t53 = 1;

	t53 = (x241<=((x242+x243)%x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = -38;
	int16_t x251 = INT16_MAX;

	t54 = (x249<=((x250+x251)%x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x254 = -1;
	static int8_t x255 = -1;
	int16_t x256 = -3964;
	int32_t t55 = -3;

	t55 = (x253<=((x254+x255)%x256));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x262 = 20699656U;
	static uint64_t x263 = UINT64_MAX;
	int32_t t56 = 70;

	t56 = (x261<=((x262+x263)%x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -7;
	volatile uint16_t x268 = 7239U;
	volatile int32_t t57 = -15;

	t57 = (x265<=((x266+x267)%x268));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -1LL;
	int16_t x272 = -1;
	int32_t t58 = -11370918;

	t58 = (x269<=((x270+x271)%x272));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -53;
	static int32_t x275 = 5;
	volatile uint64_t x276 = UINT64_MAX;

	t59 = (x273<=((x274+x275)%x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = -1LL;
	int16_t x286 = INT16_MIN;
	static int8_t x287 = INT8_MAX;
	int32_t t60 = -5556548;

	t60 = (x285<=((x286+x287)%x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	static int64_t x291 = -1LL;
	static int32_t t61 = 3510;

	t61 = (x289<=((x290+x291)%x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = INT64_MIN;
	static int16_t x294 = INT16_MAX;
	static int16_t x295 = INT16_MAX;
	static uint16_t x296 = 1559U;
	static int32_t t62 = -2922385;

	t62 = (x293<=((x294+x295)%x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = 1815U;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t63 = -200795;

	t63 = (x297<=((x298+x299)%x300));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x309 = INT32_MIN;
	uint32_t x310 = 73U;
	static int64_t x311 = 10LL;
	int8_t x312 = INT8_MIN;

	t64 = (x309<=((x310+x311)%x312));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	volatile int32_t t65 = 92430;

	t65 = (x313<=((x314+x315)%x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x317 = UINT32_MAX;
	int8_t x319 = 0;
	static volatile int32_t x320 = -76269;
	int32_t t66 = 5088460;

	t66 = (x317<=((x318+x319)%x320));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile uint64_t x323 = 169639351257LLU;
	volatile int8_t x324 = INT8_MIN;
	int32_t t67 = -44983107;

	t67 = (x321<=((x322+x323)%x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x325 = 221368U;
	static volatile int64_t x328 = -917514719828628944LL;
	int32_t t68 = 157179;

	t68 = (x325<=((x326+x327)%x328));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x330 = -40733218;
	int64_t x331 = -74742443325593LL;
	volatile int8_t x332 = INT8_MIN;
	int32_t t69 = -6;

	t69 = (x329<=((x330+x331)%x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = -1095641670685324LL;
	static uint64_t x335 = 7635LLU;
	int16_t x336 = INT16_MIN;
	int32_t t70 = 1;

	t70 = (x333<=((x334+x335)%x336));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x337 = 385150LLU;
	int32_t x339 = INT32_MAX;
	static volatile int32_t t71 = 858114;

	t71 = (x337<=((x338+x339)%x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = 495;
	int32_t x342 = 362;
	volatile int32_t t72 = -6044858;

	t72 = (x341<=((x342+x343)%x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x347 = -26;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t73 = 1008704;

	t73 = (x345<=((x346+x347)%x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x349 = -1;
	int64_t x350 = 163LL;
	int8_t x351 = INT8_MAX;
	static int64_t x352 = INT64_MIN;

	t74 = (x349<=((x350+x351)%x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = -1;
	uint32_t x354 = 1652478U;
	int64_t x355 = INT64_MIN;
	static uint16_t x356 = UINT16_MAX;
	static int32_t t75 = -828405;

	t75 = (x353<=((x354+x355)%x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x361 = INT32_MIN;
	int8_t x362 = 27;
	uint64_t x363 = 4046040LLU;
	static int32_t x364 = 4;
	int32_t t76 = -240;

	t76 = (x361<=((x362+x363)%x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x366 = INT8_MAX;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = -39;
	int32_t t77 = -31325307;

	t77 = (x365<=((x366+x367)%x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = INT8_MAX;
	static int8_t x370 = INT8_MAX;
	int32_t x371 = -26178114;
	static volatile int64_t x372 = INT64_MIN;

	t78 = (x369<=((x370+x371)%x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MAX;
	static int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = 1641U;
	int32_t t79 = 120;

	t79 = (x373<=((x374+x375)%x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = INT32_MAX;
	volatile int16_t x378 = -93;
	int16_t x380 = INT16_MIN;

	t80 = (x377<=((x378+x379)%x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x389 = INT32_MIN;
	static volatile int32_t x390 = INT32_MIN;
	uint16_t x391 = 4058U;
	volatile int32_t x392 = -1;
	int32_t t81 = 370;

	t81 = (x389<=((x390+x391)%x392));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = INT8_MIN;
	uint64_t x395 = 1LLU;
	int8_t x396 = -3;
	volatile int32_t t82 = 172811771;

	t82 = (x393<=((x394+x395)%x396));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x401 = 114960458LLU;
	int8_t x403 = 63;
	uint32_t x404 = 3875U;
	static int32_t t83 = 9835;

	t83 = (x401<=((x402+x403)%x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = 1U;
	static int8_t x407 = -1;
	uint16_t x408 = 275U;
	static int32_t t84 = 439;

	t84 = (x405<=((x406+x407)%x408));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x417 = 7U;
	volatile uint8_t x418 = UINT8_MAX;
	uint16_t x419 = 53U;
	uint16_t x420 = 14142U;

	t85 = (x417<=((x418+x419)%x420));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x421 = -1;
	volatile int8_t x422 = -1;
	volatile uint16_t x423 = 672U;
	uint8_t x424 = 124U;

	t86 = (x421<=((x422+x423)%x424));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x425 = 47U;
	int64_t x426 = INT64_MIN;
	int64_t x427 = 4LL;
	int32_t x428 = INT32_MIN;
	static int32_t t87 = 414156;

	t87 = (x425<=((x426+x427)%x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x429 = INT64_MIN;
	int8_t x431 = -17;
	int16_t x432 = -1;
	volatile int32_t t88 = 761;

	t88 = (x429<=((x430+x431)%x432));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x434 = INT8_MIN;
	int8_t x435 = -9;
	uint64_t x436 = UINT64_MAX;

	t89 = (x433<=((x434+x435)%x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MIN;
	int64_t x439 = -1LL;
	uint16_t x440 = 3310U;
	int32_t t90 = -177516;

	t90 = (x437<=((x438+x439)%x440));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x441 = -1;
	uint32_t x442 = UINT32_MAX;
	uint16_t x443 = UINT16_MAX;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t91 = 13;

	t91 = (x441<=((x442+x443)%x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x445 = 3U;
	uint8_t x446 = 59U;
	static uint32_t x447 = UINT32_MAX;
	int16_t x448 = INT16_MIN;
	volatile int32_t t92 = 1028820;

	t92 = (x445<=((x446+x447)%x448));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x454 = UINT8_MAX;
	static volatile uint16_t x456 = 54U;
	volatile int32_t t93 = 3462903;

	t93 = (x453<=((x454+x455)%x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x458 = INT64_MIN;
	int32_t x459 = 1;
	volatile int8_t x460 = INT8_MAX;
	static int32_t t94 = -306;

	t94 = (x457<=((x458+x459)%x460));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x461 = 1;
	int64_t x462 = -1LL;
	static volatile int8_t x463 = INT8_MIN;

	t95 = (x461<=((x462+x463)%x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x467 = INT16_MAX;
	uint64_t x468 = 257372805359LLU;
	int32_t t96 = 65257;

	t96 = (x465<=((x466+x467)%x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x474 = 542467227LL;
	uint32_t x475 = 0U;
	int32_t t97 = -23;

	t97 = (x473<=((x474+x475)%x476));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = INT64_MAX;
	static int16_t x482 = 1;
	int32_t x483 = -42073584;
	volatile int32_t t98 = 167488;

	t98 = (x481<=((x482+x483)%x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x485 = -34;
	int16_t x486 = 142;
	int32_t t99 = -31255;

	t99 = (x485<=((x486+x487)%x488));

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

