#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = 13;
int32_t x12 = 7952;
volatile int32_t t2 = -41416;
int64_t x23 = 893125180LL;
uint32_t x24 = 11385531U;
int32_t t6 = -80700;
uint16_t x29 = UINT16_MAX;
int32_t x31 = -256254;
static uint16_t x36 = 456U;
int32_t t8 = 75;
volatile int16_t x44 = INT16_MIN;
volatile uint16_t x50 = UINT16_MAX;
int32_t t19 = -1474;
static int32_t x83 = -1;
int8_t x92 = -1;
int64_t x93 = INT64_MIN;
uint16_t x98 = 0U;
int32_t t24 = -50737;
int32_t x104 = INT32_MIN;
static int32_t x107 = -2257;
static uint64_t x110 = 162326130137279LLU;
static int8_t x113 = -56;
volatile int16_t x118 = 11985;
static int8_t x121 = -1;
uint16_t x123 = UINT16_MAX;
uint64_t x127 = 107970LLU;
int64_t x133 = -11054364294404LL;
int8_t x141 = -1;
static int8_t x144 = -1;
int64_t x152 = 0LL;
int32_t t37 = -1484;
static int64_t x154 = -9LL;
int32_t x155 = INT32_MIN;
static int64_t x156 = INT64_MIN;
int16_t x157 = INT16_MAX;
int16_t x158 = -351;
static volatile uint16_t x162 = 24413U;
static volatile int32_t x169 = 15370304;
int8_t x187 = INT8_MAX;
uint16_t x191 = 64U;
volatile int32_t x192 = INT32_MIN;
uint32_t x195 = UINT32_MAX;
int32_t x200 = 25;
volatile int64_t x206 = -1LL;
static int64_t x207 = -1LL;
volatile int8_t x211 = -1;
uint64_t x212 = 90489015051889420LLU;
static volatile int32_t x223 = INT32_MAX;
int32_t t56 = 175817;
volatile int32_t t58 = 0;
uint16_t x244 = UINT16_MAX;
int32_t t60 = 114443149;
uint8_t x259 = 3U;
int8_t x264 = INT8_MAX;
int32_t t65 = 457941;
volatile int32_t t67 = -15294;
static uint8_t x274 = UINT8_MAX;
volatile int32_t t68 = -66372307;
int16_t x280 = -1;
static uint64_t x281 = 358681429267LLU;
static int32_t x282 = 16045;
int16_t x283 = 213;
int64_t x284 = INT64_MIN;
static uint16_t x289 = UINT16_MAX;
uint8_t x293 = UINT8_MAX;
int32_t t73 = 31;
uint32_t x297 = 1118U;
int64_t x307 = -2130021643LL;
uint8_t x312 = UINT8_MAX;
int32_t x318 = INT32_MAX;
static volatile uint32_t x322 = UINT32_MAX;
int64_t x325 = INT64_MIN;
static int32_t t83 = -4787447;
static int32_t x351 = -1;
static volatile uint8_t x352 = 29U;
int64_t x353 = 2LL;
int64_t x359 = INT64_MIN;
int16_t x361 = INT16_MIN;
int32_t x364 = INT32_MIN;
volatile int32_t t90 = 714;
static int16_t x370 = -1;
uint32_t x379 = 425041021U;
static int8_t x391 = 2;
volatile int32_t t97 = -5046;
static volatile int32_t t98 = -1450;
static uint32_t x400 = 0U;


void f0(void) {
	volatile uint16_t x1 = 0U;
	int8_t x2 = -1;
	int8_t x3 = 31;
	volatile uint32_t x4 = 3822U;
	int32_t t0 = -2;

	t0 = (x1<=((x2<x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint16_t x6 = UINT16_MAX;
	volatile int64_t x8 = -127419606026633LL;
	int32_t t1 = 65377039;

	t1 = (x5<=((x6<x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	volatile int64_t x11 = -122560403LL;

	t2 = (x9<=((x10<x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MAX;
	static uint32_t x15 = 16U;
	uint16_t x16 = 1U;
	int32_t t3 = 32;

	t3 = (x13<=((x14<x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile uint8_t x18 = 61U;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -115335;

	t4 = (x17<=((x18<x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	uint32_t x22 = UINT32_MAX;
	static int32_t t5 = 2574;

	t5 = (x21<=((x22<x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int8_t x26 = INT8_MIN;
	static int32_t x27 = INT32_MAX;
	uint16_t x28 = 0U;

	t6 = (x25<=((x26<x27)&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int32_t x32 = -1;
	volatile int32_t t7 = -53;

	t7 = (x29<=((x30<x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 3818630397060574197LLU;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;

	t8 = (x33<=((x34<x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 3647140515LL;
	uint64_t x38 = 32LLU;
	uint64_t x39 = 870666849365965LLU;
	uint8_t x40 = 3U;
	int32_t t9 = 339141813;

	t9 = (x37<=((x38<x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	int16_t x42 = 10770;
	int64_t x43 = -8437109717LL;
	volatile int32_t t10 = 710224578;

	t10 = (x41<=((x42<x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 78U;
	int64_t x46 = -374448LL;
	int64_t x47 = 230103839941180046LL;
	volatile uint8_t x48 = 3U;
	volatile int32_t t11 = 27306;

	t11 = (x45<=((x46<x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 5;
	uint32_t x51 = 7353545U;
	int32_t x52 = -9176128;
	static int32_t t12 = -32;

	t12 = (x49<=((x50<x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 10;
	int8_t x54 = INT8_MIN;
	int8_t x55 = 7;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -73;

	t13 = (x53<=((x54<x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -5;
	int32_t x58 = -1;
	static uint16_t x59 = 0U;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 241117668;

	t14 = (x57<=((x58<x59)&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = 1U;
	int16_t x64 = 49;
	volatile int32_t t15 = 4991;

	t15 = (x61<=((x62<x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 5898U;
	static uint8_t x66 = UINT8_MAX;
	int32_t x67 = 3829741;
	volatile uint32_t x68 = 1029608U;
	static int32_t t16 = -521182;

	t16 = (x65<=((x66<x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	static int16_t x71 = 253;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 81951633;

	t17 = (x69<=((x70<x71)&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 13;
	static uint64_t x74 = 630034LLU;
	int8_t x75 = -1;
	static uint16_t x76 = 1U;
	volatile int32_t t18 = -211;

	t18 = (x73<=((x74<x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = -27618;
	static volatile int64_t x78 = -39262357LL;
	int32_t x79 = -1;
	static int8_t x80 = -1;

	t19 = (x77<=((x78<x79)&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	static int64_t x84 = -842119LL;
	int32_t t20 = -334867281;

	t20 = (x81<=((x82<x83)&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 70304U;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MAX;
	uint8_t x88 = 19U;
	int32_t t21 = -4013;

	t21 = (x85<=((x86<x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static int16_t x90 = -1;
	int8_t x91 = -1;
	volatile int32_t t22 = -547668484;

	t22 = (x89<=((x90<x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 1403U;
	volatile uint8_t x96 = 0U;
	volatile int32_t t23 = -6;

	t23 = (x93<=((x94<x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 16318;
	static int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;

	t24 = (x97<=((x98<x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x102 = -14990237861460LL;
	int32_t x103 = 41221614;
	static int32_t t25 = -750866797;

	t25 = (x101<=((x102<x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	uint32_t x106 = 11793637U;
	int64_t x108 = -1LL;
	static int32_t t26 = -1459743;

	t26 = (x105<=((x106<x107)&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x111 = 15;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = 36638697;

	t27 = (x109<=((x110<x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	volatile int32_t x115 = INT32_MIN;
	uint32_t x116 = 17973U;
	volatile int32_t t28 = 911;

	t28 = (x113<=((x114<x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x119 = -1683118;
	static int64_t x120 = -1077955LL;
	int32_t t29 = 448;

	t29 = (x117<=((x118<x119)&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = -1;
	static int16_t x124 = INT16_MAX;
	volatile int32_t t30 = 5292;

	t30 = (x121<=((x122<x123)&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -1LL;
	volatile int32_t x128 = 737;
	static volatile int32_t t31 = -3430;

	t31 = (x125<=((x126<x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	uint16_t x131 = 4U;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -33;

	t32 = (x129<=((x130<x131)&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -60;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 5792893;

	t33 = (x133<=((x134<x135)&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -42;
	int64_t x138 = INT64_MAX;
	volatile uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 284;

	t34 = (x137<=((x138<x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MAX;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t t35 = 3;

	t35 = (x141<=((x142<x143)&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 1336LL;
	static volatile uint32_t x146 = 57U;
	int32_t x147 = 909692;
	static int32_t x148 = INT32_MAX;
	int32_t t36 = -152;

	t36 = (x145<=((x146<x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = 12;
	int32_t x150 = -1;
	uint8_t x151 = 3U;

	t37 = (x149<=((x150<x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	static volatile int32_t t38 = 3089301;

	t38 = (x153<=((x154<x155)&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x159 = -8869850245LL;
	int16_t x160 = -1;
	volatile int32_t t39 = 17063;

	t39 = (x157<=((x158<x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x163 = INT64_MAX;
	static volatile int32_t x164 = -3990;
	int32_t t40 = -40;

	t40 = (x161<=((x162<x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	uint64_t x167 = UINT64_MAX;
	int32_t x168 = -27168;
	int32_t t41 = 21;

	t41 = (x165<=((x166<x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 4U;
	int64_t x171 = INT64_MIN;
	int64_t x172 = -60926743737874LL;
	static int32_t t42 = -245268;

	t42 = (x169<=((x170<x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 872048823LLU;
	volatile int8_t x174 = -1;
	uint16_t x175 = 3U;
	static volatile int32_t x176 = -15190;
	int32_t t43 = -3528;

	t43 = (x173<=((x174<x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 5559099U;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -1;
	static volatile int32_t t44 = 683;

	t44 = (x177<=((x178<x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = 4724;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -59;
	uint32_t x184 = 74059918U;
	volatile int32_t t45 = 1;

	t45 = (x181<=((x182<x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 0U;
	int16_t x186 = -6;
	volatile uint16_t x188 = UINT16_MAX;
	int32_t t46 = 0;

	t46 = (x185<=((x186<x187)&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 227700293;
	uint64_t x190 = 2464633287584324869LLU;
	int32_t t47 = -7;

	t47 = (x189<=((x190<x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -118;

	t48 = (x193<=((x194<x195)&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 503U;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 83U;
	static int32_t t49 = -1873;

	t49 = (x197<=((x198<x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int8_t x202 = 60;
	int16_t x203 = -1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -6080;

	t50 = (x201<=((x202<x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -20;
	int8_t x208 = 0;
	volatile int32_t t51 = 9556257;

	t51 = (x205<=((x206<x207)&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 399LL;
	static int32_t x210 = -1;
	static volatile int32_t t52 = -297606;

	t52 = (x209<=((x210<x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -22;
	uint16_t x214 = 17U;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = -26;
	volatile int32_t t53 = 9253531;

	t53 = (x213<=((x214<x215)&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	int16_t x219 = -4;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 1583;

	t54 = (x217<=((x218<x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int64_t x222 = 352085595541LL;
	uint8_t x224 = 11U;
	int32_t t55 = 1;

	t55 = (x221<=((x222<x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	volatile int16_t x227 = INT16_MAX;
	int8_t x228 = 20;

	t56 = (x225<=((x226<x227)&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int8_t x230 = 26;
	volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -2952761;

	t57 = (x229<=((x230<x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233<=((x234<x235)&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	uint64_t x239 = 3341186032697761LLU;
	uint32_t x240 = 136942U;
	int32_t t59 = -6410;

	t59 = (x237<=((x238<x239)&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -3;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;

	t60 = (x241<=((x242<x243)&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = 957;
	volatile int32_t t61 = 1835;

	t61 = (x245<=((x246<x247)&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 433029953531387LLU;
	volatile int64_t x250 = -1LL;
	uint8_t x251 = 3U;
	uint64_t x252 = 756422228LLU;
	int32_t t62 = -50693717;

	t62 = (x249<=((x250<x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MIN;
	volatile int64_t x255 = INT64_MAX;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = 0;

	t63 = (x253<=((x254<x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = 964003777;
	int8_t x258 = INT8_MAX;
	int32_t x260 = -1695;
	int32_t t64 = -11250;

	t64 = (x257<=((x258<x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	uint16_t x262 = 0U;
	volatile int32_t x263 = -29176013;

	t65 = (x261<=((x262<x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 316877104717084737LLU;
	static int16_t x266 = -1;
	int64_t x267 = 25850841LL;
	static volatile int16_t x268 = -1;
	volatile int32_t t66 = -784787;

	t66 = (x265<=((x266<x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	static int16_t x270 = -1;
	int16_t x271 = -215;
	int8_t x272 = 21;

	t67 = (x269<=((x270<x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	uint64_t x275 = UINT64_MAX;
	static int8_t x276 = INT8_MAX;

	t68 = (x273<=((x274<x275)&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 14926049995LLU;
	volatile int32_t t69 = 0;

	t69 = (x277<=((x278<x279)&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t t70 = -993536;

	t70 = (x281<=((x282<x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t71 = -37;

	t71 = (x285<=((x286<x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	volatile int64_t x291 = INT64_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t72 = 700981;

	t72 = (x289<=((x290<x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = 386960195645807LL;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 7U;

	t73 = (x293<=((x294<x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = -6093019;
	static int32_t t74 = -1;

	t74 = (x297<=((x298<x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t75 = -4088039;

	t75 = (x301<=((x302<x303)&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int64_t x306 = 1162577509452LL;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 319;

	t76 = (x305<=((x306<x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile uint32_t x311 = 203237U;
	static volatile int32_t t77 = -57362153;

	t77 = (x309<=((x310<x311)&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MAX;
	static int32_t t78 = 21850;

	t78 = (x313<=((x314<x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 31006U;
	static uint32_t x319 = 227138265U;
	static int64_t x320 = 483LL;
	int32_t t79 = 8720887;

	t79 = (x317<=((x318<x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 12;
	volatile uint32_t x323 = UINT32_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 1834;

	t80 = (x321<=((x322<x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = -1;
	int32_t x327 = -157;
	volatile int64_t x328 = 2LL;
	static volatile int32_t t81 = 225501;

	t81 = (x325<=((x326<x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = -1LL;
	int32_t x331 = -2973;
	int64_t x332 = 2181219061LL;
	int32_t t82 = 46;

	t82 = (x329<=((x330<x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = UINT64_MAX;

	t83 = (x333<=((x334<x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 9U;
	volatile int8_t x338 = INT8_MAX;
	int16_t x339 = -120;
	uint8_t x340 = 39U;
	volatile int32_t t84 = 1;

	t84 = (x337<=((x338<x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	static uint32_t x342 = 5U;
	int32_t x343 = INT32_MIN;
	volatile int64_t x344 = -1LL;
	volatile int32_t t85 = -4;

	t85 = (x341<=((x342<x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MAX;
	int64_t x346 = -347921545233868LL;
	static volatile int8_t x347 = -1;
	uint16_t x348 = 250U;
	volatile int32_t t86 = -7;

	t86 = (x345<=((x346<x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = UINT16_MAX;
	volatile int32_t x350 = INT32_MIN;
	static int32_t t87 = 169882;

	t87 = (x349<=((x350<x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -106;

	t88 = (x353<=((x354<x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = -112691;

	t89 = (x357<=((x358<x359)&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	volatile int8_t x363 = -1;

	t90 = (x361<=((x362<x363)&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 11364590596277LLU;
	int32_t x366 = INT32_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile uint16_t x368 = 130U;
	int32_t t91 = 30108;

	t91 = (x365<=((x366<x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 63610460;

	t92 = (x369<=((x370<x371)&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -207;
	uint16_t x374 = 0U;
	int8_t x375 = INT8_MAX;
	static volatile int32_t x376 = 2728;
	int32_t t93 = -44855;

	t93 = (x373<=((x374<x375)&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t94 = -35134;

	t94 = (x377<=((x378<x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int16_t x382 = 228;
	volatile uint64_t x383 = 12039651211920473LLU;
	volatile int32_t x384 = -1;
	volatile int32_t t95 = -86;

	t95 = (x381<=((x382<x383)&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	static uint16_t x387 = 2U;
	int32_t x388 = 598991;
	volatile int32_t t96 = -15;

	t96 = (x385<=((x386<x387)&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -52509LL;
	int64_t x390 = -1LL;
	int32_t x392 = INT32_MIN;

	t97 = (x389<=((x390<x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	static int64_t x394 = INT64_MIN;
	volatile int8_t x395 = -20;
	uint64_t x396 = 437994771024LLU;

	t98 = (x393<=((x394<x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	uint32_t x398 = 2006686U;
	uint32_t x399 = 53U;
	int32_t t99 = 4322;

	t99 = (x397<=((x398<x399)&x400));

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

