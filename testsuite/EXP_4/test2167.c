#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
volatile int16_t x2 = INT16_MIN;
int16_t x5 = INT16_MIN;
uint8_t x6 = UINT8_MAX;
static uint8_t x11 = 0U;
volatile int16_t x12 = INT16_MAX;
volatile int32_t t2 = 575;
int32_t t4 = 329313733;
int8_t x26 = -1;
uint64_t x29 = UINT64_MAX;
int32_t x31 = INT32_MAX;
volatile int32_t t10 = -1971286;
uint16_t x47 = 5U;
int8_t x50 = INT8_MIN;
volatile uint16_t x56 = UINT16_MAX;
int32_t t13 = -1855;
int32_t x57 = -1;
uint8_t x59 = 12U;
int32_t x61 = INT32_MIN;
static int32_t x65 = INT32_MIN;
int32_t x70 = -155340;
int64_t x82 = INT64_MIN;
static volatile int64_t x92 = INT64_MIN;
volatile int32_t t22 = 12727390;
volatile int32_t t23 = 4;
int8_t x99 = INT8_MAX;
uint16_t x105 = 1716U;
static int64_t x107 = INT64_MAX;
int8_t x111 = -1;
static uint32_t x113 = 3559979U;
int16_t x115 = 98;
volatile int16_t x122 = 37;
static volatile int32_t x123 = -12504;
int32_t t30 = 47165;
int8_t x125 = 0;
int16_t x130 = 19;
int32_t t32 = 8350332;
static int64_t x137 = INT64_MAX;
static uint64_t x139 = 66927116LLU;
int32_t x142 = INT32_MIN;
uint16_t x143 = 12930U;
int8_t x144 = INT8_MAX;
static int32_t t35 = 30283480;
uint8_t x145 = 2U;
static int32_t t37 = -7;
int8_t x153 = INT8_MIN;
int32_t x156 = -1;
int16_t x161 = INT16_MIN;
int32_t x164 = INT32_MIN;
int32_t t40 = 6;
static int32_t x165 = 50050;
volatile uint16_t x168 = 11484U;
int32_t x172 = INT32_MIN;
int16_t x177 = INT16_MIN;
static int64_t x180 = -1162159124159LL;
int8_t x181 = INT8_MIN;
uint16_t x184 = 3320U;
static int64_t x199 = 28269275354563830LL;
volatile int32_t x202 = INT32_MIN;
uint64_t x204 = 478094539033LLU;
int8_t x205 = INT8_MIN;
static uint64_t x211 = 220938575LLU;
static uint64_t x213 = 7731196023333221542LLU;
int16_t x216 = 0;
static int8_t x220 = 1;
static volatile int32_t t57 = 48334;
uint32_t x234 = 390070154U;
volatile int32_t t58 = 2488;
int64_t x238 = 9021LL;
int16_t x239 = 693;
static volatile int32_t t59 = -437424816;
int16_t x242 = INT16_MIN;
volatile int32_t t61 = 474817;
uint16_t x252 = 1U;
uint8_t x267 = UINT8_MAX;
int16_t x271 = INT16_MIN;
static int64_t x272 = -1LL;
static volatile uint16_t x276 = 14U;
uint64_t x280 = 15567818346951243LLU;
int32_t x281 = INT32_MIN;
int8_t x284 = 9;
static uint64_t x285 = 596728644231398817LLU;
static int32_t x286 = INT32_MIN;
volatile int16_t x287 = INT16_MIN;
volatile uint64_t x302 = 127803647749453LLU;
int16_t x303 = INT16_MIN;
volatile int64_t x309 = -6750498042581595LL;
volatile int8_t x310 = INT8_MIN;
int8_t x311 = -1;
int32_t t77 = -42;
int16_t x315 = 28;
uint64_t x316 = 11LLU;
volatile int32_t t80 = 11140;
static int8_t x326 = INT8_MAX;
static int32_t t81 = 97710870;
volatile int16_t x330 = INT16_MIN;
static uint16_t x332 = 24U;
uint8_t x333 = UINT8_MAX;
uint16_t x339 = 1U;
int8_t x340 = INT8_MAX;
int32_t t84 = 75166;
static int16_t x341 = INT16_MAX;
int32_t x347 = 18578006;
int32_t x353 = 22028090;
volatile int16_t x357 = INT16_MIN;
volatile int16_t x358 = -1364;
volatile int32_t x359 = 17131661;
int32_t x362 = -725328015;
static int64_t x372 = -818043LL;
volatile int32_t t92 = 16;
uint8_t x373 = 0U;
static uint8_t x376 = UINT8_MAX;
static int8_t x380 = -1;
int32_t t94 = 9;
uint8_t x381 = 31U;
static int64_t x382 = 24164LL;
uint16_t x384 = UINT16_MAX;
int32_t x387 = INT32_MAX;
uint32_t x389 = 1569421U;


void f0(void) {
	int16_t x3 = -1;
	int16_t x4 = 176;
	int32_t t0 = -2;

	t0 = (x1<(x2&(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x7 = 13809;
	volatile uint16_t x8 = 726U;
	volatile int32_t t1 = -26209;

	t1 = (x5<(x6&(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static uint64_t x10 = UINT64_MAX;

	t2 = (x9<(x10&(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 21U;
	int64_t x14 = -14004335913609214LL;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 4;

	t3 = (x13<(x14&(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 28;
	static uint8_t x18 = 1U;
	volatile uint64_t x19 = 704007242439557LLU;
	int64_t x20 = -1LL;

	t4 = (x17<(x18&(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint32_t x22 = 27U;
	int32_t x23 = INT32_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -3;

	t5 = (x21<(x22&(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 3451018U;
	uint8_t x27 = 2U;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = 494;

	t6 = (x25<(x26&(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 7;

	t7 = (x29<(x30&(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MAX;
	int64_t x35 = -1LL;
	uint64_t x36 = 1193307744LLU;
	volatile int32_t t8 = 182226;

	t8 = (x33<(x34&(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 122858394U;
	int8_t x38 = -30;
	int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -3;

	t9 = (x37<(x38&(x39^x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	volatile int64_t x43 = INT64_MIN;
	volatile int32_t x44 = INT32_MIN;

	t10 = (x41<(x42&(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MAX;
	int32_t x46 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 498;

	t11 = (x45<(x46&(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x51 = -1;
	int8_t x52 = -40;
	static int32_t t12 = -72200900;

	t12 = (x49<(x50&(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint64_t x54 = 1021071278636691LLU;
	uint64_t x55 = UINT64_MAX;

	t13 = (x53<(x54&(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 2U;
	volatile int32_t x60 = -1;
	int32_t t14 = 5954535;

	t14 = (x57<(x58&(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 32289U;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = 52451LLU;
	volatile int32_t t15 = 649189405;

	t15 = (x61<(x62&(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x66 = UINT8_MAX;
	static volatile int32_t x67 = 3438320;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 510;

	t16 = (x65<(x66&(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	uint8_t x71 = UINT8_MAX;
	volatile int16_t x72 = -1;
	int32_t t17 = -807293408;

	t17 = (x69<(x70&(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 75U;
	volatile uint32_t x76 = 1926U;
	volatile int32_t t18 = -26;

	t18 = (x73<(x74&(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 86447U;
	static volatile uint8_t x78 = 20U;
	volatile int64_t x79 = -1LL;
	volatile int64_t x80 = -1LL;
	volatile int32_t t19 = -13;

	t19 = (x77<(x78&(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x83 = -1;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = -6259549;

	t20 = (x81<(x82&(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	static int64_t x86 = INT64_MIN;
	int16_t x87 = -1;
	int64_t x88 = 691929305443261836LL;
	volatile int32_t t21 = 5;

	t21 = (x85<(x86&(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 117U;
	volatile int64_t x91 = 6759730LL;

	t22 = (x89<(x90&(x91^x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 25;
	int8_t x94 = 1;
	int16_t x95 = INT16_MIN;
	int8_t x96 = 1;

	t23 = (x93<(x94&(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 0U;
	int16_t x98 = -1;
	uint64_t x100 = 144125061616LLU;
	int32_t t24 = 2;

	t24 = (x97<(x98&(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int16_t x102 = INT16_MAX;
	static int8_t x103 = INT8_MIN;
	static uint32_t x104 = 63725U;
	static volatile int32_t t25 = 2;

	t25 = (x101<(x102&(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = 976402788;

	t26 = (x105<(x106&(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 4U;
	int8_t x110 = -1;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = -605;

	t27 = (x109<(x110&(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 1;
	static int32_t x116 = INT32_MIN;
	static int32_t t28 = 833;

	t28 = (x113<(x114&(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint16_t x118 = 3U;
	int32_t x119 = -1;
	int32_t x120 = -3496;
	int32_t t29 = 32167152;

	t29 = (x117<(x118&(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int32_t x124 = -1;

	t30 = (x121<(x122&(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x126 = 15U;
	int8_t x127 = 0;
	int64_t x128 = -6057107LL;
	int32_t t31 = -209;

	t31 = (x125<(x126&(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 26U;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MIN;

	t32 = (x129<(x130&(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 8208;
	int32_t x134 = INT32_MIN;
	int8_t x135 = 6;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = -74561;

	t33 = (x133<(x134&(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 29083473;

	t34 = (x137<(x138&(x139^x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;

	t35 = (x141<(x142&(x143^x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = INT32_MAX;
	uint8_t x147 = 66U;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = 1;

	t36 = (x145<(x146&(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 7;
	uint16_t x150 = 17U;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = 2809469848LLU;

	t37 = (x149<(x150&(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 39U;
	static volatile int8_t x155 = INT8_MIN;
	volatile int32_t t38 = -7787;

	t38 = (x153<(x154&(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 0U;
	int32_t t39 = 126651047;

	t39 = (x157<(x158&(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MAX;
	static int16_t x163 = -48;

	t40 = (x161<(x162&(x163^x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 6011816LLU;
	int16_t x167 = INT16_MIN;
	int32_t t41 = -1863;

	t41 = (x165<(x166&(x167^x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -160045920;
	int16_t x170 = 235;
	uint64_t x171 = 889472172883607LLU;
	int32_t t42 = 13;

	t42 = (x169<(x170&(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	int64_t x175 = -1LL;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -1;

	t43 = (x173<(x174&(x175^x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -180923;
	int32_t x179 = INT32_MIN;
	int32_t t44 = 468875;

	t44 = (x177<(x178&(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 12827U;
	volatile int64_t x183 = INT64_MAX;
	static volatile int32_t t45 = -131;

	t45 = (x181<(x182&(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 6U;
	static int64_t x186 = -586206947147LL;
	volatile int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -51723;

	t46 = (x185<(x186&(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	static uint16_t x190 = UINT16_MAX;
	static int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t47 = -26;

	t47 = (x189<(x190&(x191^x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 10U;
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = 6243607791662413808LLU;
	static int16_t x196 = INT16_MIN;
	static int32_t t48 = 27;

	t48 = (x193<(x194&(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t49 = -1;

	t49 = (x197<(x198&(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 2595;
	static volatile uint8_t x203 = UINT8_MAX;
	volatile int32_t t50 = -14587;

	t50 = (x201<(x202&(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x206 = UINT32_MAX;
	static uint8_t x207 = 110U;
	static uint32_t x208 = 5U;
	volatile int32_t t51 = 0;

	t51 = (x205<(x206&(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MIN;
	uint8_t x212 = 0U;
	int32_t t52 = -41;

	t52 = (x209<(x210&(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int8_t x215 = 1;
	static volatile int32_t t53 = 115;

	t53 = (x213<(x214&(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -21620035284LL;
	static int32_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	static int32_t t54 = -1;

	t54 = (x217<(x218&(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	volatile int32_t x222 = INT32_MIN;
	int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -485100;

	t55 = (x221<(x222&(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = 261145LL;
	int64_t x227 = 2059LL;
	int16_t x228 = INT16_MAX;
	static volatile int32_t t56 = -419;

	t56 = (x225<(x226&(x227^x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 81901312206830LL;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = -1;
	volatile int64_t x232 = 2354013LL;

	t57 = (x229<(x230&(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 1823138543100519849LLU;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 1U;

	t58 = (x233<(x234&(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 60556U;
	int8_t x240 = INT8_MIN;

	t59 = (x237<(x238&(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 13U;
	volatile int64_t x243 = 397836543LL;
	int8_t x244 = INT8_MAX;
	int32_t t60 = -21;

	t60 = (x241<(x242&(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;

	t61 = (x245<(x246&(x247^x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile uint8_t x250 = 34U;
	int16_t x251 = -1;
	volatile int32_t t62 = -4723628;

	t62 = (x249<(x250&(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	volatile uint64_t x254 = 812LLU;
	uint16_t x255 = 421U;
	static int8_t x256 = -17;
	volatile int32_t t63 = 7349;

	t63 = (x253<(x254&(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int16_t x258 = -1;
	static int64_t x259 = -24783LL;
	volatile uint8_t x260 = 62U;
	int32_t t64 = 637785;

	t64 = (x257<(x258&(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static uint64_t x262 = 27LLU;
	int32_t x263 = INT32_MAX;
	uint64_t x264 = 947LLU;
	int32_t t65 = -787;

	t65 = (x261<(x262&(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = 23764410U;
	volatile int32_t x268 = 9626265;
	int32_t t66 = 49087;

	t66 = (x265<(x266&(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 10U;
	int16_t x270 = -227;
	volatile int32_t t67 = -230;

	t67 = (x269<(x270&(x271^x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MAX;
	int8_t x274 = -1;
	uint64_t x275 = 46945237923285934LLU;
	int32_t t68 = 199920;

	t68 = (x273<(x274&(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 158092022LLU;
	int64_t x278 = -2858372105788539LL;
	volatile uint8_t x279 = 1U;
	int32_t t69 = -3475;

	t69 = (x277<(x278&(x279^x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	volatile int64_t x283 = 23875151LL;
	volatile int32_t t70 = -469481;

	t70 = (x281<(x282&(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x288 = -1;
	volatile int32_t t71 = -11019;

	t71 = (x285<(x286&(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 0U;
	int8_t x290 = -1;
	int32_t x291 = INT32_MIN;
	volatile int32_t x292 = -1;
	int32_t t72 = 26;

	t72 = (x289<(x290&(x291^x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MAX;
	static int8_t x294 = INT8_MAX;
	static uint16_t x295 = 15U;
	int16_t x296 = -1;
	int32_t t73 = -72583;

	t73 = (x293<(x294&(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 3556LLU;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	uint32_t x300 = 4480257U;
	int32_t t74 = 46666645;

	t74 = (x297<(x298&(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 243659043809784LLU;
	int32_t x304 = -1;
	int32_t t75 = -18988642;

	t75 = (x301<(x302&(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 6U;
	static int8_t x306 = INT8_MIN;
	volatile int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = 21;

	t76 = (x305<(x306&(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x312 = INT64_MAX;

	t77 = (x309<(x310&(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 1992292U;
	int64_t x314 = -222893229897051357LL;
	static volatile int32_t t78 = -482268;

	t78 = (x313<(x314&(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 68U;
	int64_t x318 = -17348LL;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 1664015;

	t79 = (x317<(x318&(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x322 = INT8_MIN;
	int8_t x323 = 41;
	volatile uint16_t x324 = 8170U;

	t80 = (x321<(x322&(x323^x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static int8_t x327 = 2;
	int8_t x328 = INT8_MIN;

	t81 = (x325<(x326&(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -55;
	int16_t x331 = INT16_MIN;
	volatile int32_t t82 = -691245405;

	t82 = (x329<(x330&(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = -1;
	int32_t x335 = -1;
	uint16_t x336 = 3676U;
	int32_t t83 = 227;

	t83 = (x333<(x334&(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 607670U;
	static int8_t x338 = INT8_MIN;

	t84 = (x337<(x338&(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = 1;
	volatile int32_t t85 = -7342065;

	t85 = (x341<(x342&(x343^x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	int16_t x346 = 1;
	uint16_t x348 = 1790U;
	volatile int32_t t86 = 914377;

	t86 = (x345<(x346&(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 938305425126LLU;
	static int16_t x350 = -1;
	int32_t x351 = 22598;
	uint16_t x352 = 4U;
	static int32_t t87 = 19;

	t87 = (x349<(x350&(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = INT8_MAX;
	int32_t x355 = INT32_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 594;

	t88 = (x353<(x354&(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x360 = INT16_MIN;
	static volatile int32_t t89 = -1153272;

	t89 = (x357<(x358&(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	volatile int64_t x363 = -3422302170632348LL;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = -421443771;

	t90 = (x361<(x362&(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 6;

	t91 = (x365<(x366&(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -920;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 7U;

	t92 = (x369<(x370&(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -1;
	static volatile int64_t x375 = INT64_MAX;
	int32_t t93 = 690741440;

	t93 = (x373<(x374&(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static volatile int32_t x378 = INT32_MIN;
	int8_t x379 = -1;

	t94 = (x377<(x378&(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = INT32_MAX;
	static int32_t t95 = 212814613;

	t95 = (x381<(x382&(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 594U;
	int8_t x386 = INT8_MIN;
	volatile int64_t x388 = 3856LL;
	int32_t t96 = -30961;

	t96 = (x385<(x386&(x387^x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = 41;
	int32_t x392 = -346567060;
	static volatile int32_t t97 = 0;

	t97 = (x389<(x390&(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -57;
	static uint64_t x394 = 198LLU;
	int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	int32_t t98 = -18111537;

	t98 = (x393<(x394&(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = 6;
	static int64_t x399 = -53LL;
	uint32_t x400 = 9296979U;
	static int32_t t99 = -235351856;

	t99 = (x397<(x398&(x399^x400)));

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

