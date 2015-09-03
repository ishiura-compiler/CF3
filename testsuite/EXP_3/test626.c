#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile int64_t t1 = -14405482LL;
volatile int32_t t2 = -193725;
uint32_t x15 = 637U;
volatile int32_t t9 = 766;
volatile int64_t x42 = INT64_MIN;
static int64_t t10 = 49289553939LL;
int16_t x49 = INT16_MIN;
uint8_t x51 = UINT8_MAX;
uint32_t x54 = 1488512521U;
int8_t x56 = INT8_MIN;
uint32_t x65 = UINT32_MAX;
int16_t x68 = -1;
int16_t x69 = -1;
volatile int32_t t16 = -24320;
int8_t x80 = -1;
int64_t x86 = -1LL;
volatile int16_t x95 = 1826;
int8_t x99 = INT8_MIN;
static volatile int32_t t23 = -12285065;
int32_t t26 = -118870141;
int16_t x119 = 6174;
int64_t x123 = INT64_MIN;
uint64_t x124 = 6746LLU;
int16_t x133 = -92;
volatile int8_t x135 = -1;
uint32_t t31 = 1737U;
volatile int32_t x140 = INT32_MIN;
int32_t x156 = -10735300;
static int8_t x160 = -34;
int32_t x165 = -278135013;
int16_t x168 = INT16_MIN;
int32_t x170 = -1;
volatile int32_t t40 = 0;
uint8_t x177 = 71U;
static int8_t x179 = -1;
int32_t x183 = INT32_MAX;
uint8_t x186 = 2U;
static int32_t x189 = -1;
int32_t t48 = -2;
int16_t x206 = -8;
static int64_t x213 = 31024090085259444LL;
uint64_t x221 = 47955LLU;
uint64_t x222 = 7LLU;
int32_t x224 = 704;
int8_t x226 = 0;
static uint64_t x227 = 8061541344060LLU;
uint16_t x231 = UINT16_MAX;
int16_t x236 = INT16_MIN;
static int16_t x244 = INT16_MIN;
int8_t x248 = INT8_MIN;
int16_t x251 = 6;
int16_t x252 = -132;
volatile uint8_t x257 = UINT8_MAX;
volatile uint32_t t62 = 13586U;
int32_t x266 = -11746;
int64_t x267 = -1LL;
int32_t x270 = -23187719;
volatile int8_t x272 = INT8_MIN;
static int8_t x287 = INT8_MIN;
static volatile int16_t x300 = 204;
int64_t t75 = -162721LL;
int8_t x328 = -1;
int32_t t78 = 3643;
static uint16_t x329 = UINT16_MAX;
static uint32_t x333 = 1U;
int16_t x340 = 2;
int64_t t82 = -4346LL;
static int64_t x350 = -1LL;
int16_t x352 = INT16_MIN;
uint32_t x353 = 1919650221U;
int32_t t85 = 42957;
int32_t t87 = 97870;
static int16_t x366 = INT16_MIN;
uint32_t x378 = 47U;
volatile int64_t t91 = 4231275192096149391LL;
int32_t x382 = INT32_MIN;
volatile int8_t x384 = INT8_MAX;
int64_t x387 = 143337667159235507LL;
int64_t x392 = 1950655458200327794LL;
static int64_t x393 = INT64_MAX;
volatile uint32_t t95 = 475399511U;
volatile int16_t x397 = INT16_MIN;
volatile uint64_t t96 = 386181174LLU;
volatile int16_t x405 = INT16_MIN;
static uint8_t x407 = 2U;
volatile uint64_t t98 = 5035021498701LLU;


void f0(void) {
	int32_t x2 = INT32_MIN;
	uint8_t x3 = 110U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -27002;

	t0 = ((x1<=x2)-(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5<=x6)-(x7/x8));

	if (t1 != 140739635871745LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -4106;
	int16_t x10 = INT16_MAX;
	uint16_t x11 = 2U;
	volatile int16_t x12 = INT16_MAX;

	t2 = ((x9<=x10)-(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	int64_t x14 = INT64_MIN;
	volatile int16_t x16 = 1;
	volatile uint32_t t3 = 10355U;

	t3 = ((x13<=x14)-(x15/x16));

	if (t3 != 4294966659U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1964046010U;
	static int8_t x18 = -1;
	uint16_t x19 = 29791U;
	static uint16_t x20 = 21U;
	int32_t t4 = 1655;

	t4 = ((x17<=x18)-(x19/x20));

	if (t4 != -1417) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 278606714U;
	static int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 334U;
	int32_t t5 = -94;

	t5 = ((x21<=x22)-(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int64_t x26 = -1LL;
	int64_t x27 = 48299010LL;
	int64_t x28 = -8889504137684LL;
	int64_t t6 = -3159994394043928LL;

	t6 = ((x25<=x26)-(x27/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x30 = -115838;
	int32_t x31 = 42;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 31832;

	t7 = ((x29<=x30)-(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	static int32_t x34 = -1;
	int64_t x35 = INT64_MAX;
	uint16_t x36 = 4081U;
	volatile int64_t t8 = -799146019604019221LL;

	t8 = ((x33<=x34)-(x35/x36));

	if (t8 != -2260076460880855LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile uint16_t x38 = 11U;
	volatile int8_t x39 = 0;
	static int32_t x40 = INT32_MAX;

	t9 = ((x37<=x38)-(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 11763;
	static int64_t x43 = INT64_MIN;
	static uint16_t x44 = UINT16_MAX;

	t10 = ((x41<=x42)-(x43/x44));

	if (t10 != 140739635871744LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 334076119U;
	uint8_t x46 = 11U;
	int16_t x47 = INT16_MIN;
	int16_t x48 = 1954;
	static int32_t t11 = 13728;

	t11 = ((x45<=x46)-(x47/x48));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = UINT8_MAX;
	int16_t x52 = -1;
	int32_t t12 = 147001049;

	t12 = ((x49<=x50)-(x51/x52));

	if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	int16_t x55 = 8378;
	volatile int32_t t13 = -16573982;

	t13 = ((x53<=x54)-(x55/x56));

	if (t13 != 66) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 16;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MAX;
	uint32_t x60 = 177591267U;
	uint32_t t14 = 3U;

	t14 = ((x57<=x58)-(x59/x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MIN;
	int32_t x67 = -392548255;
	int32_t t15 = -252565;

	t15 = ((x65<=x66)-(x67/x68));

	if (t15 != -392548255) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x70 = INT8_MAX;
	static int32_t x71 = INT32_MIN;
	uint8_t x72 = UINT8_MAX;

	t16 = ((x69<=x70)-(x71/x72));

	if (t16 != 8421505) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MIN;
	static volatile int64_t t17 = -8LL;

	t17 = ((x73<=x74)-(x75/x76));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x77 = -205112;
	volatile int16_t x78 = INT16_MAX;
	uint16_t x79 = 7U;
	volatile int32_t t18 = 9374;

	t18 = ((x77<=x78)-(x79/x80));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int32_t x84 = INT32_MAX;
	int32_t t19 = 1;

	t19 = ((x81<=x82)-(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = 1;
	static int16_t x87 = 2478;
	int8_t x88 = -1;
	volatile int32_t t20 = 16378641;

	t20 = ((x85<=x86)-(x87/x88));

	if (t20 != 2478) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 27104U;
	volatile uint32_t x90 = 1430613U;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 184566127069LLU;
	uint64_t t21 = 550117LLU;

	t21 = ((x89<=x90)-(x91/x92));

	if (t21 != 18446744073609605087LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 12;
	uint16_t x94 = 23U;
	static int16_t x96 = -1270;
	static int32_t t22 = 8231354;

	t22 = ((x93<=x94)-(x95/x96));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 7LL;
	int8_t x98 = INT8_MIN;
	int8_t x100 = -1;

	t23 = ((x97<=x98)-(x99/x100));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	uint64_t x102 = 43274LLU;
	int16_t x103 = INT16_MAX;
	uint64_t x104 = 233LLU;
	volatile uint64_t t24 = 21LLU;

	t24 = ((x101<=x102)-(x103/x104));

	if (t24 != 18446744073709551476LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 5500LLU;
	int64_t x106 = -1LL;
	static int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MAX;
	volatile int64_t t25 = -431LL;

	t25 = ((x105<=x106)-(x107/x108));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 3;
	int8_t x110 = -2;
	int16_t x111 = INT16_MIN;
	static int32_t x112 = INT32_MIN;

	t26 = ((x109<=x110)-(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int8_t x120 = -5;
	int32_t t27 = -98;

	t27 = ((x117<=x118)-(x119/x120));

	if (t27 != 1235) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x122 = 1027758U;
	uint64_t t28 = 249887LLU;

	t28 = ((x121<=x122)-(x123/x124));

	if (t28 != 18445376838008861611LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	static uint16_t x126 = 5430U;
	volatile int32_t x127 = INT32_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t29 = 12935920LLU;

	t29 = ((x125<=x126)-(x127/x128));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = -36;
	volatile uint64_t x130 = 3206075622LLU;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = -1LL;
	int64_t t30 = 1704LL;

	t30 = ((x129<=x130)-(x131/x132));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x134 = 24LLU;
	uint32_t x136 = 9859U;

	t31 = ((x133<=x134)-(x135/x136));

	if (t31 != 4294531657U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -159;
	static int32_t x138 = INT32_MAX;
	static uint32_t x139 = UINT32_MAX;
	uint32_t t32 = 234U;

	t32 = ((x137<=x138)-(x139/x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 506827U;
	uint8_t x142 = 74U;
	int32_t x143 = 7734467;
	int16_t x144 = INT16_MIN;
	volatile int32_t t33 = -28;

	t33 = ((x141<=x142)-(x143/x144));

	if (t33 != 236) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -2115254493545058LL;
	int64_t x146 = INT64_MIN;
	int32_t x147 = -954900;
	static int16_t x148 = INT16_MIN;
	int32_t t34 = -1;

	t34 = ((x145<=x146)-(x147/x148));

	if (t34 != -29) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = INT64_MIN;
	static int32_t x150 = 1574;
	int64_t x151 = -22354LL;
	volatile uint64_t x152 = 46784LLU;
	static volatile uint64_t t35 = 2192531298295LLU;

	t35 = ((x149<=x150)-(x151/x152));

	if (t35 != 18446349777709344078LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -348871;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -1;
	volatile int32_t t36 = 347;

	t36 = ((x153<=x154)-(x155/x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MAX;
	int64_t x158 = 147108091710LL;
	int32_t x159 = 1;
	int32_t t37 = -587;

	t37 = ((x157<=x158)-(x159/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile int32_t x163 = INT32_MIN;
	uint64_t x164 = 906654LLU;
	static volatile uint64_t t38 = 7313174154419444LLU;

	t38 = ((x161<=x162)-(x163/x164));

	if (t38 != 18446723727751698277LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x166 = 0U;
	static uint16_t x167 = 173U;
	volatile int32_t t39 = 14095;

	t39 = ((x165<=x166)-(x167/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x169 = 44U;
	static volatile int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;

	t40 = ((x169<=x170)-(x171/x172));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x173 = -1LL;
	static int64_t x174 = -1LL;
	volatile int16_t x175 = -71;
	int64_t x176 = 31585679LL;
	static int64_t t41 = 47886556881LL;

	t41 = ((x173<=x174)-(x175/x176));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = 3085531U;
	static uint64_t x180 = 104824954271LLU;
	uint64_t t42 = 35606128936832495LLU;

	t42 = ((x177<=x178)-(x179/x180));

	if (t42 != 18446744073533574970LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x181 = 1827302200LLU;
	int32_t x182 = -56428;
	volatile int16_t x184 = 14351;
	int32_t t43 = -19547351;

	t43 = ((x181<=x182)-(x183/x184));

	if (t43 != -149639) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	static uint16_t x187 = UINT16_MAX;
	static volatile int64_t x188 = 2015353317938729LL;
	volatile int64_t t44 = -6LL;

	t44 = ((x185<=x186)-(x187/x188));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x190 = UINT8_MAX;
	static int64_t x191 = -1LL;
	static volatile int8_t x192 = INT8_MIN;
	int64_t t45 = -1LL;

	t45 = ((x189<=x190)-(x191/x192));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	static int32_t x196 = INT32_MAX;
	int32_t t46 = -238;

	t46 = ((x193<=x194)-(x195/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = -1LL;
	int16_t x198 = INT16_MIN;
	volatile uint16_t x199 = 4U;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t47 = 13638;

	t47 = ((x197<=x198)-(x199/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	static int8_t x202 = -1;
	volatile int16_t x203 = 262;
	uint8_t x204 = 110U;

	t48 = ((x201<=x202)-(x203/x204));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	volatile int32_t x207 = -1;
	int32_t x208 = 618272;
	volatile int32_t t49 = -105483610;

	t49 = ((x205<=x206)-(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MAX;
	static int16_t x212 = -1;
	static volatile int32_t t50 = 34;

	t50 = ((x209<=x210)-(x211/x212));

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = 8;
	int16_t x215 = INT16_MAX;
	volatile int64_t x216 = INT64_MAX;
	volatile int64_t t51 = -155LL;

	t51 = ((x213<=x214)-(x215/x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MAX;
	static volatile int16_t x219 = INT16_MIN;
	volatile int32_t x220 = 196024398;
	static int32_t t52 = -53;

	t52 = ((x217<=x218)-(x219/x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x223 = 10U;
	static int32_t t53 = -6810;

	t53 = ((x221<=x222)-(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	volatile uint16_t x228 = UINT16_MAX;
	static uint64_t t54 = 53963627LLU;

	t54 = ((x225<=x226)-(x227/x228));

	if (t54 != 18446744073586540382LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = 47;
	int16_t x230 = INT16_MIN;
	int16_t x232 = -1;
	volatile int32_t t55 = 776;

	t55 = ((x229<=x230)-(x231/x232));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -1LL;
	static int32_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	int32_t t56 = 53;

	t56 = ((x233<=x234)-(x235/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = 72972070373900LL;
	uint16_t x238 = 6817U;
	static int16_t x239 = -1;
	volatile int16_t x240 = -1;
	volatile int32_t t57 = 708;

	t57 = ((x237<=x238)-(x239/x240));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 974674902743509838LLU;
	static int32_t x242 = INT32_MIN;
	static int8_t x243 = INT8_MIN;
	int32_t t58 = 0;

	t58 = ((x241<=x242)-(x243/x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = -1;
	int32_t x247 = INT32_MAX;
	volatile int32_t t59 = -29;

	t59 = ((x245<=x246)-(x247/x248));

	if (t59 != 16777216) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 18174U;
	int32_t x250 = 1109832;
	int32_t t60 = -189679765;

	t60 = ((x249<=x250)-(x251/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x253 = 3U;
	volatile int32_t x254 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = 50U;
	static volatile int32_t t61 = -2;

	t61 = ((x253<=x254)-(x255/x256));

	if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x258 = UINT32_MAX;
	uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 67U;

	t62 = ((x257<=x258)-(x259/x260));

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = -118;
	volatile int16_t x262 = 10048;
	int64_t x263 = 137LL;
	volatile int8_t x264 = 4;
	int64_t t63 = -109469735138LL;

	t63 = ((x261<=x262)-(x263/x264));

	if (t63 != -33LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 1630U;
	volatile int16_t x268 = INT16_MIN;
	static volatile int64_t t64 = 271371813LL;

	t64 = ((x265<=x266)-(x267/x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -34520825569914LL;
	int8_t x271 = INT8_MIN;
	volatile int32_t t65 = 82549890;

	t65 = ((x269<=x270)-(x271/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -7;
	int32_t x274 = -4;
	static int64_t x275 = -13946344LL;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t66 = 27283843377120LLU;

	t66 = ((x273<=x274)-(x275/x276));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MAX;
	volatile int32_t t67 = 59;

	t67 = ((x277<=x278)-(x279/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 8U;
	uint8_t x286 = UINT8_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 59266;

	t68 = ((x285<=x286)-(x287/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 297;
	int16_t x290 = 0;
	volatile int32_t x291 = INT32_MIN;
	volatile uint64_t x292 = UINT64_MAX;
	uint64_t t69 = 10500LLU;

	t69 = ((x289<=x290)-(x291/x292));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = UINT64_MAX;
	volatile int8_t x295 = INT8_MIN;
	static int16_t x296 = -2071;
	int32_t t70 = -15;

	t70 = ((x293<=x294)-(x295/x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 6U;
	int32_t x298 = 19800;
	static uint32_t x299 = 1237886U;
	volatile uint32_t t71 = 183577U;

	t71 = ((x297<=x298)-(x299/x300));

	if (t71 != 4294961229U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 277971202651143LLU;
	uint8_t x302 = 1U;
	static int16_t x303 = -1;
	static int64_t x304 = 53LL;
	volatile int64_t t72 = 24486622577243403LL;

	t72 = ((x301<=x302)-(x303/x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = 57;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = 1;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -719982;

	t73 = ((x305<=x306)-(x307/x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -26;
	uint64_t x310 = 992745LLU;
	uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t74 = 11600766;

	t74 = ((x309<=x310)-(x311/x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MAX;

	t75 = ((x313<=x314)-(x315/x316));

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MAX;
	volatile uint8_t x318 = 29U;
	uint16_t x319 = UINT16_MAX;
	static uint8_t x320 = 3U;
	volatile int32_t t76 = -1431378;

	t76 = ((x317<=x318)-(x319/x320));

	if (t76 != -21845) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t77 = 1257168U;

	t77 = ((x321<=x322)-(x323/x324));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = -1;

	t78 = ((x325<=x326)-(x327/x328));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x330 = -1LL;
	static int16_t x331 = -3;
	int64_t x332 = INT64_MIN;
	static int64_t t79 = -125174279208313959LL;

	t79 = ((x329<=x330)-(x331/x332));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x334 = 3LL;
	int16_t x335 = INT16_MAX;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t80 = 1914;

	t80 = ((x333<=x334)-(x335/x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x337 = 1847;
	int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	volatile int32_t t81 = 11626;

	t81 = ((x337<=x338)-(x339/x340));

	if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = 0U;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MIN;
	static int16_t x344 = -208;

	t82 = ((x341<=x342)-(x343/x344));

	if (t82 != -44343134792571036LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = -28;
	int64_t x348 = INT64_MIN;
	int64_t t83 = 467438801LL;

	t83 = ((x345<=x346)-(x347/x348));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int64_t x351 = INT64_MAX;
	volatile int64_t t84 = -2351718578314060LL;

	t84 = ((x349<=x350)-(x351/x352));

	if (t84 != 281474976710655LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MAX;
	volatile int16_t x356 = -1;

	t85 = ((x353<=x354)-(x355/x356));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = INT8_MAX;
	static int32_t x358 = -1;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = 663668718LLU;
	volatile uint64_t t86 = 861807100108949LLU;

	t86 = ((x357<=x358)-(x359/x360));

	if (t86 != 18446744045914443046LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MAX;
	static uint8_t x362 = 1U;
	uint16_t x363 = 347U;
	volatile int32_t x364 = -1;

	t87 = ((x361<=x362)-(x363/x364));

	if (t87 != 347) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 30LLU;
	int8_t x367 = INT8_MIN;
	static int16_t x368 = -1;
	int32_t t88 = -48960;

	t88 = ((x365<=x366)-(x367/x368));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x369 = UINT64_MAX;
	static int64_t x370 = INT64_MIN;
	uint64_t x371 = 6560764506141LLU;
	volatile uint64_t x372 = 2398LLU;
	volatile uint64_t t89 = 750297180913910LLU;

	t89 = ((x369<=x370)-(x371/x372));

	if (t89 != 18446744070973619796LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 52U;
	int16_t x374 = INT16_MIN;
	static int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	volatile int64_t t90 = 120345LL;

	t90 = ((x373<=x374)-(x375/x376));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 91U;
	static int64_t x379 = -1LL;
	volatile int32_t x380 = INT32_MIN;

	t91 = ((x377<=x378)-(x379/x380));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	int16_t x383 = INT16_MAX;
	volatile int32_t t92 = -3157;

	t92 = ((x381<=x382)-(x383/x384));

	if (t92 != -258) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MAX;
	uint16_t x386 = 99U;
	int64_t x388 = -8066750LL;
	volatile int64_t t93 = 37LL;

	t93 = ((x385<=x386)-(x387/x388));

	if (t93 != 17768948728LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x389 = UINT8_MAX;
	volatile int16_t x390 = INT16_MIN;
	volatile int32_t x391 = 13928085;
	int64_t t94 = 7541012678429LL;

	t94 = ((x389<=x390)-(x391/x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = -1;
	volatile int8_t x395 = 5;
	uint32_t x396 = UINT32_MAX;

	t95 = ((x393<=x394)-(x395/x396));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x398 = INT32_MIN;
	uint64_t x399 = 906505LLU;
	int64_t x400 = INT64_MAX;

	t96 = ((x397<=x398)-(x399/x400));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x401 = 29;
	int16_t x402 = -317;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = 4035385184664201017LLU;
	uint64_t t97 = 2LLU;

	t97 = ((x401<=x402)-(x403/x404));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = INT32_MIN;
	uint64_t x408 = 47384097749926368LLU;

	t98 = ((x405<=x406)-(x407/x408));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t99 = -118762;

	t99 = ((x409<=x410)-(x411/x412));

	if (t99 != -65535) { NG(); } else { ; }
	
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

