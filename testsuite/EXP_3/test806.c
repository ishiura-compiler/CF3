#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint64_t t1 = 5034001776247936956LLU;
int64_t x9 = -3362652804LL;
int16_t x13 = INT16_MAX;
uint16_t x17 = 356U;
int32_t x19 = INT32_MIN;
int64_t x20 = INT64_MIN;
volatile int64_t t8 = 1LL;
int16_t x37 = INT16_MIN;
volatile int32_t x40 = INT32_MIN;
volatile uint32_t t9 = 0U;
int64_t x41 = -39309719LL;
static int32_t x50 = INT32_MAX;
uint64_t x53 = 220765001LLU;
int64_t x61 = INT64_MAX;
volatile int64_t x63 = INT64_MIN;
static uint64_t x71 = 120LLU;
volatile uint32_t x75 = UINT32_MAX;
uint64_t x77 = 16112000LLU;
int8_t x81 = INT8_MAX;
volatile uint16_t x85 = UINT16_MAX;
static int32_t t22 = 6931350;
uint16_t x95 = 3461U;
int32_t t23 = 4026399;
int16_t x101 = INT16_MAX;
int8_t x102 = INT8_MIN;
volatile int32_t t27 = 45;
uint32_t x126 = 60612169U;
int8_t x127 = -20;
int64_t x138 = -1LL;
static int32_t x143 = INT32_MIN;
uint16_t x144 = 1326U;
volatile int32_t t34 = -1;
uint32_t x148 = UINT32_MAX;
int16_t x152 = INT16_MAX;
uint32_t x155 = 1U;
int16_t x157 = 0;
static int64_t x163 = -33LL;
int32_t x164 = INT32_MIN;
uint8_t x167 = 37U;
int32_t x170 = INT32_MAX;
volatile int64_t x179 = INT64_MIN;
int32_t x181 = 116;
int16_t x188 = -1;
static int16_t x201 = INT16_MAX;
static int64_t x206 = INT64_MAX;
volatile uint64_t x207 = UINT64_MAX;
int16_t x208 = 14;
static volatile int16_t x209 = INT16_MIN;
int8_t x210 = 1;
int8_t x215 = INT8_MIN;
uint64_t x216 = UINT64_MAX;
uint8_t x219 = UINT8_MAX;
uint64_t x229 = 7480906797601330219LLU;
int16_t x239 = INT16_MIN;
static int64_t t56 = 14550830065LL;
int8_t x242 = -1;
volatile uint64_t t57 = 21LLU;
int32_t x248 = -4;
volatile int32_t t59 = 197333;
int64_t x256 = -1LL;
uint32_t x261 = 1U;
volatile int64_t x262 = -1LL;
static int8_t x263 = INT8_MAX;
static int64_t x268 = INT64_MIN;
uint64_t x270 = UINT64_MAX;
volatile uint16_t x272 = 17U;
volatile int8_t x289 = INT8_MIN;
int8_t x291 = INT8_MIN;
static volatile uint32_t x293 = UINT32_MAX;
volatile uint32_t x295 = 248U;
int8_t x296 = INT8_MIN;
uint8_t x301 = 82U;
int8_t x302 = 0;
static int64_t t72 = 299391880135LL;
int32_t x310 = INT32_MAX;
int16_t x311 = -2021;
volatile uint64_t t74 = 14LLU;
int16_t x314 = INT16_MIN;
int32_t t75 = 924606802;
int8_t x317 = INT8_MIN;
int64_t x323 = INT64_MAX;
uint64_t t77 = 42340203255954LLU;
int64_t x326 = INT64_MIN;
static int64_t x327 = INT64_MAX;
volatile int64_t t78 = -1893223LL;
volatile uint16_t x343 = 4U;
volatile uint16_t x345 = 56U;
static volatile int32_t t82 = 31;
int16_t x355 = INT16_MIN;
volatile int16_t x357 = INT16_MAX;
uint64_t x358 = 1058184637LLU;
int32_t x359 = INT32_MIN;
int8_t x361 = 1;
int8_t x362 = INT8_MIN;
volatile int32_t t86 = 15248;
int16_t x367 = -486;
static volatile int64_t t87 = 287362064LL;
static int8_t x369 = -1;
int16_t x370 = -1;
int64_t x383 = 218843LL;
uint64_t x386 = 242LLU;
int8_t x387 = INT8_MIN;
static int8_t x388 = INT8_MIN;
static uint32_t x396 = 943U;
static volatile uint32_t t93 = 2U;
uint16_t x411 = 110U;
int8_t x412 = -1;
int32_t x421 = -1;
int32_t x423 = -3519044;
int8_t x424 = -1;


void f0(void) {
	volatile int16_t x1 = -965;
	volatile int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -12;

	t0 = ((x1<=x2)^(x3%x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 12U;
	volatile int32_t x6 = INT32_MIN;
	uint16_t x7 = 10U;
	uint64_t x8 = 1708919447LLU;

	t1 = ((x5<=x6)^(x7%x8));

	if (t1 != 10LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 9568697LL;

	t2 = ((x9<=x10)^(x11%x12));

	if (t2 != 65534LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	volatile uint8_t x15 = 0U;
	uint16_t x16 = 121U;
	int32_t t3 = 21228947;

	t3 = ((x13<=x14)^(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	volatile int64_t t4 = -2823755578486LL;

	t4 = ((x17<=x18)^(x19%x20));

	if (t4 != -2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;
	static int16_t x24 = INT16_MIN;
	int64_t t5 = -878099863LL;

	t5 = ((x21<=x22)^(x23%x24));

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile int8_t x26 = -28;
	int32_t x27 = INT32_MIN;
	volatile int8_t x28 = INT8_MAX;
	int32_t t6 = -7486;

	t6 = ((x25<=x26)^(x27%x28));

	if (t6 != -8) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	static volatile uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 1U;
	static volatile int32_t t7 = -6;

	t7 = ((x29<=x30)^(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MIN;

	t8 = ((x33<=x34)^(x35%x36));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = -3063;
	uint32_t x39 = 1U;

	t9 = ((x37<=x38)^(x39%x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -8797414887136915LL;
	int8_t x43 = 1;
	int8_t x44 = 1;
	volatile int32_t t10 = 214047;

	t10 = ((x41<=x42)^(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 29U;
	uint32_t x46 = 201003135U;
	int8_t x47 = INT8_MAX;
	uint64_t x48 = 547266510LLU;
	volatile uint64_t t11 = 2648824637363LLU;

	t11 = ((x45<=x46)^(x47%x48));

	if (t11 != 126LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -55184LL;
	volatile int64_t x51 = -5LL;
	int32_t x52 = -1;
	int64_t t12 = -2612767691827509452LL;

	t12 = ((x49<=x50)^(x51%x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = UINT16_MAX;
	volatile int8_t x55 = -1;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = 319519801;

	t13 = ((x53<=x54)^(x55%x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 12046U;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 31U;
	volatile int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 8950;

	t14 = ((x57<=x58)^(x59%x60));

	if (t14 != 31) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	static volatile int32_t x64 = INT32_MIN;
	volatile int64_t t15 = 825611835LL;

	t15 = ((x61<=x62)^(x63%x64));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x65 = 7216091U;
	static uint8_t x66 = 1U;
	int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	int32_t t16 = 30169;

	t16 = ((x65<=x66)^(x67%x68));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 0;
	static int8_t x70 = INT8_MAX;
	int32_t x72 = -1;
	volatile uint64_t t17 = 9799774826662323LLU;

	t17 = ((x69<=x70)^(x71%x72));

	if (t17 != 121LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	static int64_t x76 = -100515LL;
	volatile int64_t t18 = 39LL;

	t18 = ((x73<=x74)^(x75%x76));

	if (t18 != 61861LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = -229;
	uint16_t x79 = 633U;
	static int8_t x80 = INT8_MAX;
	int32_t t19 = -147588;

	t19 = ((x77<=x78)^(x79%x80));

	if (t19 != 124) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 57U;
	int64_t x83 = -1LL;
	volatile uint8_t x84 = 41U;
	volatile int64_t t20 = 795943734638LL;

	t20 = ((x81<=x82)^(x83%x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MIN;
	static volatile uint16_t x87 = 147U;
	uint8_t x88 = 1U;
	int32_t t21 = -194199194;

	t21 = ((x85<=x86)^(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -15273;
	static volatile int16_t x90 = INT16_MIN;
	static uint8_t x91 = 15U;
	int16_t x92 = INT16_MIN;

	t22 = ((x89<=x90)^(x91%x92));

	if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = 1929602237909772530LL;
	static int16_t x96 = 2;

	t23 = ((x93<=x94)^(x95%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = 24796573;
	int64_t t24 = 14976630LL;

	t24 = ((x97<=x98)^(x99%x100));

	if (t24 != -22139935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = 11;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 1111158498442015LL;

	t25 = ((x101<=x102)^(x103%x104));

	if (t25 != 11LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 0;
	int64_t x106 = 1LL;
	int32_t x107 = 278281759;
	uint64_t x108 = UINT64_MAX;
	uint64_t t26 = 209LLU;

	t26 = ((x105<=x106)^(x107%x108));

	if (t26 != 278281758LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MAX;
	static uint16_t x111 = UINT16_MAX;
	static int32_t x112 = INT32_MAX;

	t27 = ((x109<=x110)^(x111%x112));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 0U;
	static volatile int32_t x114 = -210;
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = -5541;

	t28 = ((x113<=x114)^(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	static int16_t x122 = 5;
	static uint16_t x123 = 60U;
	int16_t x124 = INT16_MIN;
	int32_t t29 = 272;

	t29 = ((x121<=x122)^(x123%x124));

	if (t29 != 60) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 4U;
	uint32_t x128 = UINT32_MAX;
	uint32_t t30 = 806521U;

	t30 = ((x125<=x126)^(x127%x128));

	if (t30 != 4294967277U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int32_t x130 = 128254;
	uint64_t x131 = 126LLU;
	static int32_t x132 = -230296;
	uint64_t t31 = 1937355818675LLU;

	t31 = ((x129<=x130)^(x131%x132));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint32_t x134 = UINT32_MAX;
	static int64_t x135 = -1LL;
	volatile uint16_t x136 = 10U;
	static volatile int64_t t32 = -56062991LL;

	t32 = ((x133<=x134)^(x135%x136));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 239U;
	static uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t33 = -283620;

	t33 = ((x137<=x138)^(x139%x140));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = -1;

	t34 = ((x141<=x142)^(x143%x144));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	static uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	volatile int64_t t35 = -12841334867389LL;

	t35 = ((x145<=x146)^(x147%x148));

	if (t35 != -2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x149 = -1;
	volatile int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	int32_t t36 = -1004038376;

	t36 = ((x149<=x150)^(x151%x152));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 3424210752547870LLU;
	int32_t x154 = -1;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t37 = 14286U;

	t37 = ((x153<=x154)^(x155%x156));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = -1;
	volatile int16_t x159 = -1;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -12008585LL;

	t38 = ((x157<=x158)^(x159%x160));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = 561;
	static uint32_t x162 = 41065969U;
	int64_t t39 = 42720879LL;

	t39 = ((x161<=x162)^(x163%x164));

	if (t39 != -34LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 87U;
	uint32_t x166 = 7U;
	uint16_t x168 = UINT16_MAX;
	int32_t t40 = -14;

	t40 = ((x165<=x166)^(x167%x168));

	if (t40 != 37) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 1921U;
	int8_t x171 = INT8_MIN;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = 403;

	t41 = ((x169<=x170)^(x171%x172));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = 0;
	volatile int64_t x174 = INT64_MAX;
	int8_t x175 = 0;
	int32_t x176 = INT32_MIN;
	static int32_t t42 = 106465463;

	t42 = ((x173<=x174)^(x175%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 47316;
	static uint32_t x178 = UINT32_MAX;
	volatile uint64_t x180 = 16287677728878886LLU;
	volatile uint64_t t43 = 2220037720903224LLU;

	t43 = ((x177<=x178)^(x179%x180));

	if (t43 != 4546442309326333LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x182 = INT64_MIN;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t44 = -17713;

	t44 = ((x181<=x182)^(x183%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1;
	static int64_t x186 = -468907067852LL;
	uint64_t x187 = 17420LLU;
	static uint64_t t45 = 764173637LLU;

	t45 = ((x185<=x186)^(x187%x188));

	if (t45 != 17420LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = -569;
	int8_t x190 = -1;
	volatile int16_t x191 = 1;
	static uint16_t x192 = 11U;
	volatile int32_t t46 = -3;

	t46 = ((x189<=x190)^(x191%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = -3407LL;
	volatile uint16_t x199 = 12U;
	static int16_t x200 = 1;
	int32_t t47 = 3903;

	t47 = ((x197<=x198)^(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = 1881U;
	int8_t x204 = -1;
	int32_t t48 = 5960027;

	t48 = ((x201<=x202)^(x203%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	uint64_t t49 = 950822437LLU;

	t49 = ((x205<=x206)^(x207%x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MAX;
	int64_t t50 = -863586169LL;

	t50 = ((x209<=x210)^(x211%x212));

	if (t50 != 2147483646LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = 34;
	static uint16_t x214 = 221U;
	static uint64_t t51 = 654192417441340LLU;

	t51 = ((x213<=x214)^(x215%x216));

	if (t51 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MAX;
	volatile int8_t x218 = -1;
	int8_t x220 = 48;
	static volatile int32_t t52 = -1;

	t52 = ((x217<=x218)^(x219%x220));

	if (t52 != 15) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x221 = 268U;
	int32_t x222 = INT32_MAX;
	int8_t x223 = -12;
	int8_t x224 = -1;
	int32_t t53 = -92764;

	t53 = ((x221<=x222)^(x223%x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = 656U;
	uint8_t x228 = 4U;
	int32_t t54 = 27950;

	t54 = ((x225<=x226)^(x227%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x230 = 1U;
	static int16_t x231 = INT16_MAX;
	int8_t x232 = 10;
	int32_t t55 = 27994;

	t55 = ((x229<=x230)^(x231%x232));

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x238 = 72881LLU;
	int64_t x240 = INT64_MIN;

	t56 = ((x237<=x238)^(x239%x240));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x243 = 32575544036LLU;
	static uint8_t x244 = 13U;

	t57 = ((x241<=x242)^(x243%x244));

	if (t57 != 9LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = 5LL;
	int32_t x247 = -30037;
	volatile int32_t t58 = 480;

	t58 = ((x245<=x246)^(x247%x248));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = 1403;
	uint8_t x250 = 2U;
	int8_t x251 = 0;
	int16_t x252 = INT16_MIN;

	t59 = ((x249<=x250)^(x251%x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	static int16_t x254 = INT16_MIN;
	uint16_t x255 = 7011U;
	volatile int64_t t60 = -4LL;

	t60 = ((x253<=x254)^(x255%x256));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -1;
	volatile uint32_t x258 = 0U;
	uint32_t x259 = 128807U;
	int16_t x260 = -1;
	volatile uint32_t t61 = 941738U;

	t61 = ((x257<=x258)^(x259%x260));

	if (t61 != 128807U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x264 = 1;
	volatile int32_t t62 = 17;

	t62 = ((x261<=x262)^(x263%x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 16;
	volatile int8_t x266 = 0;
	int16_t x267 = -1;
	int64_t t63 = 11304116LL;

	t63 = ((x265<=x266)^(x267%x268));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int16_t x271 = 1;
	volatile int32_t t64 = 36205;

	t64 = ((x269<=x270)^(x271%x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MAX;
	uint64_t x275 = 1246214740056844205LLU;
	int32_t x276 = 733229;
	uint64_t t65 = 642410252735953089LLU;

	t65 = ((x273<=x274)^(x275%x276));

	if (t65 != 27319LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = 1U;
	int8_t x278 = INT8_MAX;
	static int64_t x279 = INT64_MAX;
	volatile uint8_t x280 = 2U;
	volatile int64_t t66 = 82LL;

	t66 = ((x277<=x278)^(x279%x280));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = 13LL;
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	volatile int16_t x284 = INT16_MIN;
	static int32_t t67 = -1005931012;

	t67 = ((x281<=x282)^(x283%x284));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = 885540LLU;
	int8_t x286 = INT8_MAX;
	int32_t x287 = -226178;
	int64_t x288 = -102LL;
	volatile int64_t t68 = -909776875LL;

	t68 = ((x285<=x286)^(x287%x288));

	if (t68 != -44LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x290 = -1LL;
	uint64_t x292 = 1105751201909981003LLU;
	static uint64_t t69 = 1147115257LLU;

	t69 = ((x289<=x290)^(x291%x292));

	if (t69 != 754724843149855441LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x294 = INT8_MAX;
	volatile uint32_t t70 = 0U;

	t70 = ((x293<=x294)^(x295%x296));

	if (t70 != 248U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = -11;
	volatile uint16_t x299 = 2713U;
	int32_t x300 = INT32_MAX;
	int32_t t71 = 6848;

	t71 = ((x297<=x298)^(x299%x300));

	if (t71 != 2713) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x303 = -1LL;
	static uint16_t x304 = 5U;

	t72 = ((x301<=x302)^(x303%x304));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 5421977U;
	uint16_t x306 = 0U;
	static uint8_t x307 = 0U;
	volatile int8_t x308 = INT8_MIN;
	int32_t t73 = 983;

	t73 = ((x305<=x306)^(x307%x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x309 = -3345775703242614160LL;
	uint64_t x312 = 2531LLU;

	t74 = ((x309<=x310)^(x311%x312));

	if (t74 != 1472LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x313 = UINT64_MAX;
	volatile int32_t x315 = 930;
	int32_t x316 = INT32_MIN;

	t75 = ((x313<=x314)^(x315%x316));

	if (t75 != 930) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = 1953256U;
	volatile int64_t x320 = 1293259921212485403LL;
	static int64_t t76 = -53790812682269476LL;

	t76 = ((x317<=x318)^(x319%x320));

	if (t76 != 1953256LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = INT32_MIN;
	uint64_t x324 = 201466987879579152LLU;

	t77 = ((x321<=x322)^(x323%x324));

	if (t77 != 157357582273713967LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x325 = 71359436413854416LLU;
	static uint16_t x328 = 45U;

	t78 = ((x325<=x326)^(x327%x328));

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = INT64_MIN;
	static int16_t x334 = -1;
	uint16_t x335 = 7806U;
	int16_t x336 = -1;
	volatile int32_t t79 = -16686874;

	t79 = ((x333<=x334)^(x335%x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x337 = -1;
	int64_t x338 = -19864002995LL;
	volatile uint16_t x339 = 1U;
	static uint16_t x340 = UINT16_MAX;
	int32_t t80 = -2;

	t80 = ((x337<=x338)^(x339%x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	uint16_t x342 = 3592U;
	volatile int16_t x344 = -1;
	volatile int32_t t81 = -126478185;

	t81 = ((x341<=x342)^(x343%x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x346 = -1LL;
	volatile uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MAX;

	t82 = ((x345<=x346)^(x347%x348));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = UINT8_MAX;
	static int8_t x350 = -1;
	uint16_t x351 = 13U;
	volatile int16_t x352 = 9;
	volatile int32_t t83 = -3911;

	t83 = ((x349<=x350)^(x351%x352));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = 0;
	volatile int32_t x354 = -897;
	uint64_t x356 = 70797595322927LLU;
	volatile uint64_t t84 = 31015458LLU;

	t84 = ((x353<=x354)^(x355%x356));

	if (t84 != 5826748951436LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x360 = INT16_MIN;
	int32_t t85 = 1146;

	t85 = ((x357<=x358)^(x359%x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x363 = 27444U;
	int8_t x364 = -1;

	t86 = ((x361<=x362)^(x363%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 419;
	static int8_t x366 = 1;
	volatile int64_t x368 = INT64_MIN;

	t87 = ((x365<=x366)^(x367%x368));

	if (t87 != -486LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x371 = 1873U;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t88 = 4;

	t88 = ((x369<=x370)^(x371%x372));

	if (t88 != 1872) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x373 = 80216LLU;
	volatile int8_t x374 = INT8_MIN;
	static volatile int16_t x375 = INT16_MIN;
	uint16_t x376 = 522U;
	static int32_t t89 = -201;

	t89 = ((x373<=x374)^(x375%x376));

	if (t89 != -403) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = 95862;
	int16_t x378 = 3370;
	int8_t x379 = INT8_MAX;
	int32_t x380 = -1;
	int32_t t90 = 3602656;

	t90 = ((x377<=x378)^(x379%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	int16_t x384 = INT16_MIN;
	int64_t t91 = -4409LL;

	t91 = ((x381<=x382)^(x383%x384));

	if (t91 != 22234LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -23546468;
	volatile int32_t t92 = 342;

	t92 = ((x385<=x386)^(x387%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x393 = 13U;
	int8_t x394 = INT8_MIN;
	volatile uint8_t x395 = 0U;

	t93 = ((x393<=x394)^(x395%x396));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = 34401737;
	uint64_t x402 = 22287228787LLU;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	static int32_t t94 = -218572675;

	t94 = ((x401<=x402)^(x403%x404));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x405 = 1;
	int8_t x406 = INT8_MIN;
	static uint32_t x407 = 63438U;
	int64_t x408 = INT64_MAX;
	int64_t t95 = 17504775584414808LL;

	t95 = ((x405<=x406)^(x407%x408));

	if (t95 != 63438LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = -237907874;
	uint32_t x410 = UINT32_MAX;
	volatile int32_t t96 = -1;

	t96 = ((x409<=x410)^(x411%x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 91U;
	static uint64_t x414 = UINT64_MAX;
	int32_t x415 = -72;
	static uint32_t x416 = UINT32_MAX;
	volatile uint32_t t97 = 6636U;

	t97 = ((x413<=x414)^(x415%x416));

	if (t97 != 4294967225U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x417 = UINT8_MAX;
	volatile int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MAX;
	volatile uint32_t x420 = 1878626U;
	uint32_t t98 = 503746790U;

	t98 = ((x417<=x418)^(x419%x420));

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x422 = UINT16_MAX;
	volatile int32_t t99 = 1478;

	t99 = ((x421<=x422)^(x423%x424));

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

