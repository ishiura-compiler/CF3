#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 8166595;
int8_t x8 = INT8_MAX;
uint32_t x11 = UINT32_MAX;
uint64_t x17 = UINT64_MAX;
int16_t x18 = INT16_MIN;
int8_t x21 = 1;
int64_t x24 = INT64_MAX;
int32_t x25 = 9410;
volatile int16_t x27 = 13;
int64_t x29 = 3649117576377584LL;
volatile int8_t x34 = 0;
volatile int16_t x37 = INT16_MIN;
static int32_t t10 = -120103688;
int32_t t12 = 1022772111;
volatile int16_t x53 = 15;
int8_t x75 = INT8_MIN;
int64_t x90 = INT64_MIN;
volatile uint16_t x95 = 1972U;
static int64_t x107 = -3730238728282467599LL;
volatile int32_t t26 = -2;
uint64_t x114 = UINT64_MAX;
int16_t x116 = 71;
uint8_t x119 = 2U;
int32_t x121 = INT32_MIN;
uint16_t x128 = UINT16_MAX;
volatile int32_t t31 = -96825330;
uint32_t x129 = 2608U;
static uint64_t x130 = 514744362LLU;
uint16_t x131 = UINT16_MAX;
volatile uint16_t x138 = 312U;
int8_t x145 = -37;
int8_t x147 = INT8_MIN;
volatile int64_t x155 = -1LL;
int64_t x156 = -424382893994LL;
static volatile int32_t t38 = 16802369;
volatile int8_t x166 = INT8_MIN;
static uint32_t x171 = 5048U;
int64_t x180 = INT64_MIN;
int16_t x183 = INT16_MIN;
volatile int8_t x185 = INT8_MIN;
int32_t x189 = INT32_MAX;
int64_t x190 = INT64_MIN;
static volatile int32_t t47 = -204293198;
int8_t x194 = -2;
volatile int32_t t49 = 19;
static uint8_t x201 = 115U;
static int64_t x205 = INT64_MIN;
int16_t x210 = INT16_MIN;
uint16_t x213 = 111U;
uint32_t x216 = 467622726U;
int8_t x218 = INT8_MIN;
static int32_t t56 = 16010229;
static volatile int64_t x240 = INT64_MAX;
int16_t x248 = INT16_MIN;
static int8_t x254 = INT8_MAX;
uint32_t x255 = 3964691U;
int16_t x263 = -74;
int64_t x268 = 143354373412825175LL;
int32_t x270 = 198250157;
volatile int64_t x277 = INT64_MIN;
uint8_t x280 = 20U;
volatile int8_t x281 = INT8_MAX;
uint32_t x283 = 3484U;
int32_t x285 = INT32_MAX;
volatile int64_t x291 = -2064084LL;
static uint16_t x297 = UINT16_MAX;
uint8_t x299 = 7U;
int64_t x304 = INT64_MIN;
static int32_t x315 = INT32_MIN;
volatile int32_t x317 = -1;
static volatile int32_t t79 = 10235;
uint16_t x323 = UINT16_MAX;
int64_t x324 = INT64_MIN;
uint8_t x325 = 41U;
uint16_t x326 = UINT16_MAX;
static int16_t x327 = -7;
int8_t x332 = -2;
int32_t x344 = INT32_MAX;
int8_t x346 = INT8_MAX;
int32_t x351 = INT32_MIN;
static uint32_t x352 = 30U;
uint16_t x354 = UINT16_MAX;
volatile int32_t t90 = -118;
int32_t x368 = INT32_MAX;
volatile uint8_t x385 = 20U;
int32_t x386 = -1;
volatile int32_t t96 = 249;
volatile int32_t x392 = INT32_MIN;
int8_t x396 = INT8_MAX;
int32_t x397 = 48736;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MIN;
	volatile uint8_t x3 = 27U;
	volatile int16_t x4 = -327;

	t0 = ((x1<x2)|(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -1;
	static int32_t t1 = -370;

	t1 = ((x5<x6)|(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 95992;

	t2 = ((x9<x10)|(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = 3;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = 124795028282LL;
	volatile int32_t t3 = 3;

	t3 = ((x13<x14)|(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x19 = INT64_MIN;
	volatile uint16_t x20 = 70U;
	static int32_t t4 = 57385;

	t4 = ((x17<x18)|(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = -1;
	static volatile int32_t t5 = -643;

	t5 = ((x21<x22)|(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = 2;
	volatile int64_t x28 = -366LL;
	volatile int32_t t6 = 22101;

	t6 = ((x25<x26)|(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = 18U;
	static volatile uint16_t x31 = UINT16_MAX;
	static int8_t x32 = -13;
	int32_t t7 = -657323;

	t7 = ((x29<x30)|(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 28495U;
	uint32_t x35 = 56321239U;
	uint8_t x36 = 0U;
	int32_t t8 = 2735;

	t8 = ((x33<x34)|(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 1U;
	uint8_t x39 = 1U;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = 76823731;

	t9 = ((x37<x38)|(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1861663U;
	volatile int16_t x42 = INT16_MAX;
	static int32_t x43 = 4014351;
	uint8_t x44 = 0U;

	t10 = ((x41<x42)|(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -3;
	static int32_t x46 = INT32_MAX;
	volatile int64_t x47 = INT64_MIN;
	static volatile int64_t x48 = INT64_MIN;
	static volatile int32_t t11 = 95;

	t11 = ((x45<x46)|(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = -52;
	int16_t x51 = 51;
	int16_t x52 = -1;

	t12 = ((x49<x50)|(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 28U;
	int32_t t13 = -23869;

	t13 = ((x53<x54)|(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static volatile int8_t x58 = 1;
	int32_t x59 = INT32_MAX;
	int32_t x60 = 25124618;
	int32_t t14 = 34958;

	t14 = ((x57<x58)|(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int8_t x62 = 7;
	static int16_t x63 = INT16_MIN;
	int16_t x64 = -1;
	int32_t t15 = 11;

	t15 = ((x61<x62)|(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int64_t x66 = -1LL;
	volatile uint64_t x67 = UINT64_MAX;
	static int32_t x68 = -1;
	int32_t t16 = 180;

	t16 = ((x65<x66)|(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = 32609665LLU;
	static int64_t x71 = 6301893589548138LL;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -785604;

	t17 = ((x69<x70)|(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	volatile int16_t x74 = -601;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 18258;

	t18 = ((x73<x74)|(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MAX;
	volatile int32_t x79 = 17687;
	volatile int32_t x80 = INT32_MAX;
	int32_t t19 = 1070667705;

	t19 = ((x77<x78)|(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 4U;
	uint16_t x82 = 12701U;
	int32_t x83 = INT32_MIN;
	static uint32_t x84 = UINT32_MAX;
	int32_t t20 = -229;

	t20 = ((x81<x82)|(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1899;
	static int32_t x86 = -724665739;
	int64_t x87 = -1LL;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = -464452;

	t21 = ((x85<x86)|(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 45U;
	static int8_t x91 = -1;
	uint32_t x92 = 33829U;
	int32_t t22 = 204974661;

	t22 = ((x89<x90)|(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -618730;

	t23 = ((x93<x94)|(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	int16_t x98 = INT16_MIN;
	volatile uint8_t x99 = 1U;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -96476;

	t24 = ((x97<x98)|(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1650;
	volatile int8_t x103 = INT8_MIN;
	volatile int8_t x104 = 43;
	int32_t t25 = -3465156;

	t25 = ((x101<x102)|(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -277151;
	volatile uint16_t x106 = 1393U;
	int8_t x108 = INT8_MIN;

	t26 = ((x105<x106)|(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 3;
	int16_t x110 = INT16_MAX;
	uint8_t x111 = 0U;
	static int32_t x112 = INT32_MIN;
	int32_t t27 = -193629;

	t27 = ((x109<x110)|(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 36U;
	volatile int16_t x115 = 0;
	int32_t t28 = 1606;

	t28 = ((x113<x114)|(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 34037528867689265LLU;
	volatile int32_t x118 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -1081;

	t29 = ((x117<x118)|(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = -48;
	int64_t x123 = -1LL;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 0;

	t30 = ((x121<x122)|(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -17908849866967131LL;
	static volatile int64_t x126 = -1LL;
	static int8_t x127 = 1;

	t31 = ((x125<x126)|(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x132 = -89;
	static int32_t t32 = 3928;

	t32 = ((x129<x130)|(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 1069LL;
	int64_t x134 = -1LL;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 38U;
	static volatile int32_t t33 = -7;

	t33 = ((x133<x134)|(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 3689U;
	int8_t x139 = -2;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 16350;

	t34 = ((x137<x138)|(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = 13;
	static uint8_t x143 = UINT8_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = -4290078;

	t35 = ((x141<x142)|(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	volatile int32_t x148 = -1;
	int32_t t36 = -105;

	t36 = ((x145<x146)|(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 6586099242939LLU;
	uint64_t x150 = 53853827LLU;
	uint32_t x151 = UINT32_MAX;
	volatile int16_t x152 = -1;
	static int32_t t37 = 65;

	t37 = ((x149<x150)|(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 3412898U;
	volatile int32_t x154 = -1;

	t38 = ((x153<x154)|(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 38260910U;
	int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = -17773;

	t39 = ((x157<x158)|(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 5;
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = -1LL;
	int16_t x164 = -6;
	int32_t t40 = -6137;

	t40 = ((x161<x162)|(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -126987;

	t41 = ((x165<x166)|(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static uint64_t x172 = 133172251432310664LLU;
	volatile int32_t t42 = -241779323;

	t42 = ((x169<x170)|(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 178750866705508LL;
	int64_t x174 = -2LL;
	int8_t x175 = -44;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 1037545723;

	t43 = ((x173<x174)|(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 324877372U;
	static volatile uint8_t x178 = 1U;
	static uint8_t x179 = 21U;
	int32_t t44 = -10;

	t44 = ((x177<x178)|(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -50;
	int8_t x184 = -1;
	int32_t t45 = -48202;

	t45 = ((x181<x182)|(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	uint32_t x188 = UINT32_MAX;
	int32_t t46 = -35629504;

	t46 = ((x185<x186)|(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 1070445759488988LLU;

	t47 = ((x189<x190)|(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static uint32_t x195 = 6591U;
	volatile int8_t x196 = 43;
	static int32_t t48 = 6478;

	t48 = ((x193<x194)|(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 14LLU;
	static int64_t x198 = -31351855LL;
	uint16_t x199 = 15559U;
	volatile int32_t x200 = INT32_MIN;

	t49 = ((x197<x198)|(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MAX;
	int32_t x203 = INT32_MIN;
	int16_t x204 = -1;
	int32_t t50 = 551;

	t50 = ((x201<x202)|(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = 17743U;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -12984;

	t51 = ((x205<x206)|(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int16_t x211 = INT16_MAX;
	int32_t x212 = -1;
	static volatile int32_t t52 = 1795137;

	t52 = ((x209<x210)|(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	volatile int32_t t53 = -124622578;

	t53 = ((x213<x214)|(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x219 = 1;
	int64_t x220 = -1LL;
	int32_t t54 = -2;

	t54 = ((x217<x218)|(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static uint8_t x222 = 1U;
	int32_t x223 = -1;
	int16_t x224 = -2640;
	static volatile int32_t t55 = 183382156;

	t55 = ((x221<x222)|(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = INT8_MIN;
	volatile int8_t x228 = INT8_MIN;

	t56 = ((x225<x226)|(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	int16_t x230 = INT16_MIN;
	static volatile uint32_t x231 = 805U;
	uint8_t x232 = 0U;
	int32_t t57 = 232459776;

	t57 = ((x229<x230)|(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = UINT8_MAX;
	uint32_t x236 = 1895U;
	int32_t t58 = -206971;

	t58 = ((x233<x234)|(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 22585078U;
	uint16_t x238 = 432U;
	static uint8_t x239 = 0U;
	volatile int32_t t59 = -1;

	t59 = ((x237<x238)|(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1530676LL;
	int8_t x243 = -63;
	int8_t x244 = 12;
	static int32_t t60 = 363601829;

	t60 = ((x241<x242)|(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int64_t x246 = INT64_MAX;
	int8_t x247 = -1;
	int32_t t61 = 82086585;

	t61 = ((x245<x246)|(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	static volatile uint8_t x250 = UINT8_MAX;
	static int64_t x251 = -1LL;
	static int16_t x252 = -1;
	volatile int32_t t62 = 21698;

	t62 = ((x249<x250)|(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = -1;

	t63 = ((x253<x254)|(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 2U;
	uint32_t x258 = UINT32_MAX;
	uint64_t x259 = 7851514154LLU;
	int8_t x260 = -1;
	int32_t t64 = 3407;

	t64 = ((x257<x258)|(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 59U;
	int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -991;

	t65 = ((x261<x262)|(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	static int32_t x266 = 29;
	int32_t x267 = -6;
	volatile int32_t t66 = 2;

	t66 = ((x265<x266)|(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	static uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = 448;

	t67 = ((x269<x270)|(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 21376LL;
	int32_t x274 = -25;
	int64_t x275 = -1LL;
	static uint8_t x276 = 7U;
	volatile int32_t t68 = 0;

	t68 = ((x273<x274)|(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x278 = 15976U;
	int8_t x279 = 2;
	static int32_t t69 = -10;

	t69 = ((x277<x278)|(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x282 = UINT32_MAX;
	volatile int8_t x284 = -1;
	static volatile int32_t t70 = 22431;

	t70 = ((x281<x282)|(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	uint32_t x287 = 132276899U;
	volatile uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = 1631;

	t71 = ((x285<x286)|(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	static uint8_t x290 = UINT8_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -1772963;

	t72 = ((x289<x290)|(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = -1;
	uint64_t x295 = 32545646807LLU;
	volatile int8_t x296 = -1;
	volatile int32_t t73 = 1;

	t73 = ((x293<x294)|(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MAX;
	static uint32_t x300 = 1U;
	volatile int32_t t74 = 20055760;

	t74 = ((x297<x298)|(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -1LL;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t t75 = -3880;

	t75 = ((x301<x302)|(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 509745492LLU;
	int32_t x306 = INT32_MIN;
	volatile int64_t x307 = -1LL;
	static uint64_t x308 = UINT64_MAX;
	int32_t t76 = -1;

	t76 = ((x305<x306)|(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -6;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;
	static volatile int32_t t77 = -47654;

	t77 = ((x309<x310)|(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static int16_t x314 = INT16_MIN;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 529;

	t78 = ((x313<x314)|(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

	t79 = ((x317<x318)|(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	static volatile int32_t t80 = 15770846;

	t80 = ((x321<x322)|(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x328 = 5U;
	int32_t t81 = 635;

	t81 = ((x325<x326)|(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 3;
	int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	static int32_t t82 = 0;

	t82 = ((x329<x330)|(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 7U;
	int64_t x334 = INT64_MIN;
	uint64_t x335 = 563168005LLU;
	int64_t x336 = -279352518373125310LL;
	static volatile int32_t t83 = 12;

	t83 = ((x333<x334)|(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	static uint16_t x340 = UINT16_MAX;
	static volatile int32_t t84 = -44;

	t84 = ((x337<x338)|(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 319U;
	static uint64_t x342 = 1334LLU;
	uint32_t x343 = 1U;
	volatile int32_t t85 = -1267;

	t85 = ((x341<x342)|(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 552356894141304074LLU;
	static int16_t x347 = INT16_MIN;
	uint16_t x348 = 482U;
	int32_t t86 = -142469272;

	t86 = ((x345<x346)|(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 71634257349030646LL;
	int8_t x350 = INT8_MIN;
	int32_t t87 = 58;

	t87 = ((x349<x350)|(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int16_t x355 = 12;
	uint8_t x356 = 3U;
	int32_t t88 = -57652953;

	t88 = ((x353<x354)|(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint16_t x358 = 60U;
	int16_t x359 = 0;
	uint8_t x360 = 1U;
	volatile int32_t t89 = -14;

	t89 = ((x357<x358)|(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	int16_t x362 = 1;
	uint32_t x363 = 543637U;
	int64_t x364 = 1035164LL;

	t90 = ((x361<x362)|(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = 115U;
	int32_t t91 = -232774;

	t91 = ((x365<x366)|(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = 1;
	volatile int16_t x372 = 0;
	int32_t t92 = -3851957;

	t92 = ((x369<x370)|(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static uint64_t x374 = 754LLU;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = 1U;
	int32_t t93 = 1;

	t93 = ((x373<x374)|(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;
	int32_t t94 = -494448859;

	t94 = ((x377<x378)|(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 2901U;
	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	int16_t x384 = 31;
	volatile int32_t t95 = -13457795;

	t95 = ((x381<x382)|(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x387 = INT64_MIN;
	int16_t x388 = 0;

	t96 = ((x385<x386)|(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = 49;
	uint32_t x391 = 12U;
	static volatile int32_t t97 = 698;

	t97 = ((x389<x390)|(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 0;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MAX;
	int32_t t98 = 285839354;

	t98 = ((x393<x394)|(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	int32_t x400 = -196567;
	static int32_t t99 = 31;

	t99 = ((x397<x398)|(x399<=x400));

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

