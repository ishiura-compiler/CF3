#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int16_t x4 = INT16_MIN;
int64_t x10 = 3636782976764LL;
int16_t x12 = INT16_MIN;
uint32_t x15 = UINT32_MAX;
int64_t x16 = INT64_MIN;
uint64_t x21 = UINT64_MAX;
int32_t x26 = -56256148;
int64_t x35 = -1LL;
int32_t x39 = INT32_MIN;
int32_t x42 = INT32_MIN;
volatile int16_t x43 = INT16_MAX;
int8_t x45 = -53;
int16_t x47 = INT16_MAX;
int8_t x51 = -1;
int16_t x58 = 89;
static uint32_t x60 = 0U;
int8_t x63 = 2;
uint16_t x68 = 331U;
uint8_t x71 = UINT8_MAX;
static int8_t x72 = 0;
int32_t t18 = -77;
volatile uint32_t x89 = UINT32_MAX;
static int64_t x91 = INT64_MAX;
int32_t x96 = -1;
static int32_t t23 = 56429949;
static volatile int8_t x103 = INT8_MAX;
static int64_t x113 = INT64_MIN;
volatile uint16_t x117 = UINT16_MAX;
int16_t x118 = INT16_MIN;
uint8_t x122 = 0U;
int8_t x124 = INT8_MAX;
volatile int64_t t33 = 625482660548LL;
int64_t x144 = INT64_MIN;
static uint16_t x153 = UINT16_MAX;
int8_t x165 = -1;
static uint16_t x170 = 15U;
volatile uint64_t t40 = 9LLU;
int16_t x179 = 1891;
static int32_t x182 = INT32_MIN;
int16_t x184 = INT16_MIN;
static int8_t x188 = INT8_MIN;
int32_t x190 = 65047;
int8_t x195 = -1;
uint16_t x196 = UINT16_MAX;
int16_t x201 = INT16_MIN;
int8_t x203 = INT8_MIN;
volatile uint8_t x208 = 24U;
int32_t t49 = 6228760;
static uint64_t x213 = UINT64_MAX;
static volatile int32_t t51 = INT32_MAX;
static uint16_t x220 = 71U;
volatile uint32_t x223 = 1837271578U;
static volatile uint64_t t54 = 354533069535077263LLU;
int32_t t55 = 3;
int64_t x233 = INT64_MIN;
static int8_t x236 = INT8_MIN;
int32_t t56 = 5507;
int32_t x238 = INT32_MIN;
int64_t x241 = -55441LL;
static uint8_t x245 = 2U;
static volatile int32_t x249 = INT32_MIN;
static uint64_t x253 = 1178476LLU;
int8_t x257 = INT8_MIN;
int32_t x260 = INT32_MIN;
int8_t x264 = 4;
static int32_t t63 = 1;
volatile uint32_t x269 = 141842580U;
volatile uint8_t x276 = 5U;
uint32_t x277 = UINT32_MAX;
int64_t x287 = INT64_MIN;
int8_t x288 = INT8_MAX;
int32_t x290 = 71699444;
int64_t x296 = 1002411481549253LL;
volatile int32_t t72 = 3133128;
static volatile int64_t t74 = 507339875177616LL;
int32_t x313 = -1037753277;
int8_t x314 = INT8_MIN;
static int16_t x318 = -1463;
int16_t x334 = INT16_MIN;
int32_t x336 = INT32_MIN;
volatile int64_t t81 = 29320LL;
int32_t t82 = -160;
uint64_t x342 = 38975502115607LLU;
int32_t t87 = 555533960;
int8_t x362 = 24;
volatile int64_t x366 = INT64_MIN;
uint16_t x367 = UINT16_MAX;
uint32_t t89 = 444U;
volatile int16_t x373 = INT16_MIN;
volatile uint32_t t91 = 1930021336U;
int64_t x384 = INT64_MAX;
volatile int32_t t94 = -3;
int8_t x389 = INT8_MIN;
volatile int32_t t95 = -12;
int32_t x399 = 1874063;
volatile int16_t x402 = INT16_MAX;
volatile uint16_t x403 = 15158U;
volatile uint8_t x404 = 0U;
int32_t t98 = -322;
int8_t x407 = INT8_MIN;


void f0(void) {
	static int64_t x2 = -125891479770349LL;
	uint32_t x3 = 27128U;
	volatile uint32_t t0 = 848U;

	t0 = (((x1<=x2)+x3)^x4);

	if (t0 != 4294961656U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 364532LL;
	uint64_t x6 = 25197463651137LLU;
	int64_t x7 = INT64_MIN;
	volatile int32_t x8 = 11;
	volatile int64_t t1 = 0LL;

	t1 = (((x5<=x6)+x7)^x8);

	if (t1 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int64_t x11 = -1LL;
	volatile int64_t t2 = 720830844LL;

	t2 = (((x9<=x10)+x11)^x12);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 2U;
	uint64_t x14 = UINT64_MAX;
	volatile int64_t t3 = INT64_MIN;

	t3 = (((x13<=x14)+x15)^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = 862166737LLU;
	int64_t x20 = INT64_MAX;
	uint64_t t4 = 940822177314575518LLU;

	t4 = (((x17<=x18)+x19)^x20);

	if (t4 != 9223372035992609070LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	volatile int32_t x23 = -240;
	int16_t x24 = -405;
	static int32_t t5 = 251;

	t5 = (((x21<=x22)+x23)^x24);

	if (t5 != 379) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -3;
	int16_t x27 = -1;
	volatile int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = INT64_MAX;

	t6 = (((x25<=x26)+x27)^x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int32_t x30 = -1;
	int64_t x31 = -1LL;
	static int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (((x29<=x30)+x31)^x32);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1792LL;
	int8_t x34 = -1;
	static int32_t x36 = INT32_MIN;
	int64_t t8 = 82LL;

	t8 = (((x33<=x34)+x35)^x36);

	if (t8 != 2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	static int8_t x38 = INT8_MAX;
	int16_t x40 = 1;
	int32_t t9 = 7160191;

	t9 = (((x37<=x38)+x39)^x40);

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 13379889LLU;
	int16_t x44 = 16311;
	int32_t t10 = 542;

	t10 = (((x41<=x42)+x43)^x44);

	if (t10 != 49079) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	int8_t x48 = -5;
	int32_t t11 = 132160056;

	t11 = (((x45<=x46)+x47)^x48);

	if (t11 != -32773) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (((x49<=x50)+x51)^x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 62806921237LLU;
	static uint64_t x54 = 768263863LLU;
	volatile uint8_t x55 = 13U;
	int16_t x56 = -1;
	int32_t t13 = 2787;

	t13 = (((x53<=x54)+x55)^x56);

	if (t13 != -14) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 4016796518LLU;
	uint32_t x59 = 80055U;
	static uint32_t t14 = 261000U;

	t14 = (((x57<=x58)+x59)^x60);

	if (t14 != 80055U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -25949;
	int32_t x62 = INT32_MIN;
	int64_t x64 = 17342397952LL;
	int64_t t15 = -337504382907186486LL;

	t15 = (((x61<=x62)+x63)^x64);

	if (t15 != 17342397954LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -6328577LL;
	int16_t x66 = 7;
	volatile int64_t x67 = -1LL;
	volatile int64_t t16 = -5413170724911LL;

	t16 = (((x65<=x66)+x67)^x68);

	if (t16 != 331LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	volatile int32_t t17 = -57244;

	t17 = (((x69<=x70)+x71)^x72);

	if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -121;
	int32_t x74 = -1;
	volatile uint16_t x75 = 25U;
	int32_t x76 = -11177492;

	t18 = (((x73<=x74)+x75)^x76);

	if (t18 != -11177482) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 456;
	uint64_t x82 = 456116495546LLU;
	static int16_t x83 = -3;
	int64_t x84 = 4814817348LL;
	volatile int64_t t19 = 1420LL;

	t19 = (((x81<=x82)+x83)^x84);

	if (t19 != -4814817350LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 8616U;
	volatile int32_t x86 = INT32_MIN;
	int64_t x87 = -2994LL;
	int8_t x88 = -1;
	volatile int64_t t20 = 0LL;

	t20 = (((x85<=x86)+x87)^x88);

	if (t20 != 2992LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MIN;
	volatile int64_t x92 = 4083778LL;
	static int64_t t21 = -6821131369LL;

	t21 = (((x89<=x90)+x91)^x92);

	if (t21 != 9223372036850692029LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x94 = INT64_MAX;
	int16_t x95 = 23;
	volatile int32_t t22 = 163;

	t22 = (((x93<=x94)+x95)^x96);

	if (t22 != -25) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x98 = -701911547579310411LL;
	uint16_t x99 = 13217U;
	int32_t x100 = 124829;

	t23 = (((x97<=x98)+x99)^x100);

	if (t23 != 119868) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 1450090759767599LLU;
	volatile int64_t x102 = -825544LL;
	int8_t x104 = INT8_MAX;
	int32_t t24 = -29;

	t24 = (((x101<=x102)+x103)^x104);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = -1;
	int8_t x106 = 28;
	static uint32_t x107 = UINT32_MAX;
	static int64_t x108 = INT64_MIN;
	static int64_t t25 = INT64_MIN;

	t25 = (((x105<=x106)+x107)^x108);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 9979777700062793LLU;
	static int8_t x110 = 10;
	int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t26 = 247240;

	t26 = (((x109<=x110)+x111)^x112);

	if (t26 != -2147483393) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = 123U;
	volatile int32_t x115 = -132;
	int64_t x116 = INT64_MIN;
	int64_t t27 = 225059LL;

	t27 = (((x113<=x114)+x115)^x116);

	if (t27 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x119 = 28U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = 454754305;

	t28 = (((x117<=x118)+x119)^x120);

	if (t28 != -2147483620) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	static int32_t t29 = 5630817;

	t29 = (((x121<=x122)+x123)^x124);

	if (t29 != 65663) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = -237;
	int16_t x126 = 30;
	static int8_t x127 = INT8_MIN;
	int64_t x128 = 138244LL;
	static int64_t t30 = 53737487529606LL;

	t30 = (((x125<=x126)+x127)^x128);

	if (t30 != -138363LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = 12U;
	int8_t x131 = -1;
	int32_t x132 = 543;
	int32_t t31 = -70795029;

	t31 = (((x129<=x130)+x131)^x132);

	if (t31 != 543) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -108302;
	uint32_t x134 = 39175U;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	volatile int32_t t32 = -468;

	t32 = (((x133<=x134)+x135)^x136);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -320717;
	int32_t x138 = -1;
	int32_t x139 = INT32_MIN;
	int64_t x140 = 642551549537618005LL;

	t33 = (((x137<=x138)+x139)^x140);

	if (t33 != -642551548595861420LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 316;
	int8_t x142 = INT8_MAX;
	static uint16_t x143 = 8245U;
	volatile int64_t t34 = 96780LL;

	t34 = (((x141<=x142)+x143)^x144);

	if (t34 != -9223372036854767563LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -453704437;
	int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t35 = 246810;

	t35 = (((x145<=x146)+x147)^x148);

	if (t35 != 2147483521) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = -1;
	int16_t x155 = 0;
	int32_t x156 = -323088071;
	int32_t t36 = -57168167;

	t36 = (((x153<=x154)+x155)^x156);

	if (t36 != -323088071) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = 1654925LLU;
	static int32_t x158 = INT32_MIN;
	volatile uint64_t x159 = 8LLU;
	uint8_t x160 = 23U;
	uint64_t t37 = 1953619685912820LLU;

	t37 = (((x157<=x158)+x159)^x160);

	if (t37 != 30LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x161 = 9695840U;
	int8_t x162 = 39;
	volatile int8_t x163 = 41;
	static int8_t x164 = -13;
	volatile int32_t t38 = -438916369;

	t38 = (((x161<=x162)+x163)^x164);

	if (t38 != -38) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x166 = -79194086;
	int64_t x167 = -30LL;
	int16_t x168 = -92;
	volatile int64_t t39 = 1783LL;

	t39 = (((x165<=x166)+x167)^x168);

	if (t39 != 70LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = -916;
	static uint64_t x171 = 20226LLU;
	static int16_t x172 = INT16_MIN;

	t40 = (((x169<=x170)+x171)^x172);

	if (t40 != 18446744073709539075LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 4656U;
	int16_t x174 = INT16_MIN;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t41 = -425;

	t41 = (((x173<=x174)+x175)^x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t x180 = -1;
	static volatile int32_t t42 = -195873568;

	t42 = (((x177<=x178)+x179)^x180);

	if (t42 != -1893) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -131530;
	int16_t x183 = INT16_MIN;
	int32_t t43 = 1580316;

	t43 = (((x181<=x182)+x183)^x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	volatile uint16_t x186 = 356U;
	uint32_t x187 = 106356623U;
	uint32_t t44 = 1429108488U;

	t44 = (((x185<=x186)+x187)^x188);

	if (t44 != 4188610576U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MAX;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	static volatile int64_t t45 = 30408985040270011LL;

	t45 = (((x189<=x190)+x191)^x192);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -9477738;
	int16_t x194 = INT16_MAX;
	int32_t t46 = 6059795;

	t46 = (((x193<=x194)+x195)^x196);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	volatile uint8_t x198 = 2U;
	int16_t x199 = 13119;
	int8_t x200 = INT8_MIN;
	volatile int32_t t47 = 2503;

	t47 = (((x197<=x198)+x199)^x200);

	if (t47 != -13121) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 10U;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t48 = 3285709U;

	t48 = (((x201<=x202)+x203)^x204);

	if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	static uint8_t x206 = 0U;
	int32_t x207 = INT32_MIN;

	t49 = (((x205<=x206)+x207)^x208);

	if (t49 != -2147483624) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = -1LL;
	volatile int64_t t50 = -6367LL;

	t50 = (((x209<=x210)+x211)^x212);

	if (t50 != -4294967296LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = 1326348365LL;
	int8_t x215 = -1;
	int32_t x216 = INT32_MIN;

	t51 = (((x213<=x214)+x215)^x216);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = 3332913U;
	int32_t x218 = INT32_MAX;
	uint64_t x219 = UINT64_MAX;
	volatile uint64_t t52 = 471122875903070LLU;

	t52 = (((x217<=x218)+x219)^x220);

	if (t52 != 71LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t53 = 984926007U;

	t53 = (((x221<=x222)+x223)^x224);

	if (t53 != 2457695643U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = -4;
	int16_t x226 = 15053;
	static uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;

	t54 = (((x225<=x226)+x227)^x228);

	if (t54 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static uint8_t x230 = 91U;
	volatile int16_t x231 = -1;
	int16_t x232 = INT16_MAX;

	t55 = (((x229<=x230)+x231)^x232);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x234 = 4U;
	int32_t x235 = INT32_MIN;

	t56 = (((x233<=x234)+x235)^x236);

	if (t56 != 2147483521) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -1;
	uint32_t x239 = 41498468U;
	int32_t x240 = INT32_MIN;
	uint32_t t57 = 68U;

	t57 = (((x237<=x238)+x239)^x240);

	if (t57 != 2188982116U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = -286343LL;
	uint32_t x244 = 7686513U;
	static int64_t t58 = 72631890848LL;

	t58 = (((x241<=x242)+x243)^x244);

	if (t58 != -7411701LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = -1;
	volatile int64_t x247 = 1008690LL;
	int16_t x248 = INT16_MIN;
	int64_t t59 = -2369246299673LL;

	t59 = (((x245<=x246)+x247)^x248);

	if (t59 != -990158LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x250 = UINT64_MAX;
	volatile int64_t x251 = -11388583363176348LL;
	volatile uint32_t x252 = 95482U;
	int64_t t60 = 3LL;

	t60 = (((x249<=x250)+x251)^x252);

	if (t60 != -11388583363089249LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x254 = INT8_MAX;
	static int32_t x255 = -1;
	int32_t x256 = -30110;
	int32_t t61 = 5998;

	t61 = (((x253<=x254)+x255)^x256);

	if (t61 != 30109) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	static volatile int32_t t62 = -6842325;

	t62 = (((x257<=x258)+x259)^x260);

	if (t62 != 2147483521) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x261 = 4U;
	int16_t x262 = INT16_MIN;
	static int8_t x263 = 14;

	t63 = (((x261<=x262)+x263)^x264);

	if (t63 != 11) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = -1;
	uint16_t x266 = 47U;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = -469435522;
	volatile int32_t t64 = -32;

	t64 = (((x265<=x266)+x267)^x268);

	if (t64 != 469465983) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x270 = 336418183U;
	static int64_t x271 = 1667LL;
	volatile int32_t x272 = INT32_MIN;
	volatile int64_t t65 = 84718419LL;

	t65 = (((x269<=x270)+x271)^x272);

	if (t65 != -2147481980LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -215508913716529358LL;
	int8_t x275 = -1;
	volatile int32_t t66 = 35;

	t66 = (((x273<=x274)+x275)^x276);

	if (t66 != -6) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x278 = 1U;
	int64_t x279 = 50717610807764432LL;
	int8_t x280 = 3;
	volatile int64_t t67 = 755LL;

	t67 = (((x277<=x278)+x279)^x280);

	if (t67 != 50717610807764435LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 538U;
	volatile int16_t x283 = 5;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t68 = -782748078024998171LL;

	t68 = (((x281<=x282)+x283)^x284);

	if (t68 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int16_t x286 = INT16_MIN;
	volatile int64_t t69 = -524869179627413197LL;

	t69 = (((x285<=x286)+x287)^x288);

	if (t69 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MAX;
	int64_t x291 = INT64_MIN;
	int8_t x292 = 0;
	volatile int64_t t70 = 64LL;

	t70 = (((x289<=x290)+x291)^x292);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int64_t t71 = -1LL;

	t71 = (((x293<=x294)+x295)^x296);

	if (t71 != -1002412680230459LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = 7803499U;
	uint32_t x298 = 3U;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = -1;

	t72 = (((x297<=x298)+x299)^x300);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	static uint32_t x302 = 66U;
	static int16_t x303 = -6711;
	int8_t x304 = INT8_MIN;
	int32_t t73 = 108661837;

	t73 = (((x301<=x302)+x303)^x304);

	if (t73 != 6729) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -1;
	uint32_t x306 = 538311718U;
	static int8_t x307 = INT8_MIN;
	int64_t x308 = -1LL;

	t74 = (((x305<=x306)+x307)^x308);

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = 0;
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	uint32_t t75 = 1522U;

	t75 = (((x309<=x310)+x311)^x312);

	if (t75 != 32766U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = -786206;

	t76 = (((x313<=x314)+x315)^x316);

	if (t76 != 2147450881) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = 7;
	static volatile int32_t x319 = -1;
	volatile uint64_t x320 = 1018354383092200906LLU;
	uint64_t t77 = 4763010073LLU;

	t77 = (((x317<=x318)+x319)^x320);

	if (t77 != 17428389690617350709LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 488382040240624843LLU;
	int16_t x322 = -1;
	int8_t x323 = 1;
	int32_t x324 = INT32_MAX;
	int32_t t78 = 1856;

	t78 = (((x321<=x322)+x323)^x324);

	if (t78 != 2147483645) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	uint32_t x326 = 871U;
	static volatile uint32_t x327 = UINT32_MAX;
	int64_t x328 = 732121349LL;
	volatile int64_t t79 = 5281958511LL;

	t79 = (((x325<=x326)+x327)^x328);

	if (t79 != 3562845946LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -3829;
	int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -1;
	static int32_t t80 = -38686;

	t80 = (((x329<=x330)+x331)^x332);

	if (t80 != 126) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int64_t x335 = INT64_MIN;

	t81 = (((x333<=x334)+x335)^x336);

	if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -1;
	uint64_t x338 = 49650994311656LLU;
	int32_t x339 = -1;
	uint16_t x340 = 54U;

	t82 = (((x337<=x338)+x339)^x340);

	if (t82 != -55) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	int32_t x343 = 273595605;
	int8_t x344 = 61;
	volatile int32_t t83 = 620;

	t83 = (((x341<=x342)+x343)^x344);

	if (t83 != 273595627) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = INT8_MAX;
	volatile uint8_t x346 = 0U;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t84 = 64227178542LLU;

	t84 = (((x345<=x346)+x347)^x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x349 = -3;
	volatile int32_t x350 = 543884;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t85 = -23;

	t85 = (((x349<=x350)+x351)^x352);

	if (t85 != -130) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = -1;
	static int32_t x354 = INT32_MAX;
	volatile uint8_t x355 = 89U;
	uint32_t x356 = 2U;
	static uint32_t t86 = 4388U;

	t86 = (((x353<=x354)+x355)^x356);

	if (t86 != 88U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x357 = UINT32_MAX;
	static int64_t x358 = INT64_MIN;
	static volatile uint16_t x359 = 0U;
	int8_t x360 = 9;

	t87 = (((x357<=x358)+x359)^x360);

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = -1;
	volatile int8_t x363 = -4;
	int64_t x364 = INT64_MIN;
	volatile int64_t t88 = -95527252299LL;

	t88 = (((x361<=x362)+x363)^x364);

	if (t88 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = INT8_MIN;
	uint32_t x368 = UINT32_MAX;

	t89 = (((x365<=x366)+x367)^x368);

	if (t89 != 4294901760U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile uint8_t x370 = 2U;
	volatile int32_t x371 = INT32_MIN;
	int32_t x372 = 14843;
	int32_t t90 = -7626478;

	t90 = (((x369<=x370)+x371)^x372);

	if (t90 != -2147468805) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = 3903453085LL;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = -2805;

	t91 = (((x373<=x374)+x375)^x376);

	if (t91 != 4294964491U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x377 = 4U;
	uint32_t x378 = 204690U;
	static int64_t x379 = INT64_MIN;
	static int16_t x380 = INT16_MAX;
	int64_t t92 = 67189LL;

	t92 = (((x377<=x378)+x379)^x380);

	if (t92 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = 1U;
	static uint64_t x383 = 42384217260LLU;
	static volatile uint64_t t93 = 21213856094021LLU;

	t93 = (((x381<=x382)+x383)^x384);

	if (t93 != 9223371994470558546LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = 1773718;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MAX;
	int16_t x388 = -1;

	t94 = (((x385<=x386)+x387)^x388);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x390 = 2U;
	uint16_t x391 = 310U;
	static int32_t x392 = -649076796;

	t95 = (((x389<=x390)+x391)^x392);

	if (t95 != -649077005) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x393 = 3478U;
	uint32_t x394 = 88114U;
	int32_t x395 = -1;
	static uint64_t x396 = 443008LLU;
	uint64_t t96 = 773013248972188054LLU;

	t96 = (((x393<=x394)+x395)^x396);

	if (t96 != 443008LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = -1;
	uint32_t x400 = UINT32_MAX;
	uint32_t t97 = 10135677U;

	t97 = (((x397<=x398)+x399)^x400);

	if (t97 != 4293093231U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;

	t98 = (((x401<=x402)+x403)^x404);

	if (t98 != 15159) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = -1LL;
	uint32_t x406 = 1368U;
	int64_t x408 = INT64_MAX;
	int64_t t99 = 545037422451646LL;

	t99 = (((x405<=x406)+x407)^x408);

	if (t99 != -9223372036854775682LL) { NG(); } else { ; }
	
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

