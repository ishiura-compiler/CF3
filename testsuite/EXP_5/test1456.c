#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = -1;
uint64_t x5 = 221645836LLU;
uint64_t t1 = 36606LLU;
uint32_t x9 = 7225117U;
volatile int32_t t3 = -35;
int16_t x17 = -670;
int64_t x34 = -1LL;
volatile uint32_t x38 = UINT32_MAX;
static int32_t t10 = -12;
volatile int32_t x45 = -11848;
volatile int64_t x46 = 10LL;
int8_t x49 = -1;
uint8_t x52 = 45U;
int32_t t12 = -7074701;
uint32_t x58 = 118U;
int32_t t14 = -15347;
uint8_t x63 = UINT8_MAX;
volatile uint64_t t15 = UINT64_MAX;
volatile int16_t x67 = INT16_MIN;
int16_t x68 = INT16_MIN;
int32_t t17 = 465283;
int16_t x76 = INT16_MIN;
static volatile int8_t x81 = -1;
uint32_t x83 = 51717786U;
int64_t x88 = -2277384623246059LL;
int64_t x89 = -1LL;
int64_t x90 = -1LL;
int8_t x95 = INT8_MIN;
static uint64_t x111 = 6330126277LLU;
static volatile int64_t x112 = 2LL;
volatile int8_t x114 = INT8_MAX;
uint16_t x116 = 3U;
int8_t x117 = INT8_MAX;
static int64_t x128 = INT64_MAX;
volatile int32_t t31 = -2467192;
static uint64_t x132 = 3299218304923898LLU;
int8_t x139 = -1;
uint64_t x140 = 185322722963LLU;
int8_t x143 = -31;
int32_t t35 = 1006152849;
int32_t x147 = INT32_MAX;
int64_t x148 = INT64_MAX;
static volatile int16_t x152 = 2674;
int8_t x154 = -27;
volatile int32_t x159 = INT32_MIN;
int32_t t39 = -126436;
static uint64_t x162 = 1LLU;
int16_t x164 = -154;
int32_t x176 = INT32_MAX;
int8_t x177 = INT8_MIN;
int16_t x179 = INT16_MAX;
uint8_t x181 = UINT8_MAX;
int8_t x184 = -1;
volatile int32_t t45 = -7027;
uint16_t x186 = 67U;
int32_t x191 = -52466;
uint32_t t47 = UINT32_MAX;
int16_t x196 = 452;
int32_t x200 = INT32_MAX;
volatile int32_t t49 = 98195;
int64_t x209 = INT64_MIN;
volatile int64_t t52 = INT64_MIN;
uint8_t x214 = 0U;
volatile int32_t x216 = INT32_MIN;
volatile int16_t x218 = -6451;
static uint8_t x226 = UINT8_MAX;
uint32_t x232 = 12789U;
int32_t t57 = 0;
volatile int32_t x240 = -1;
uint64_t x241 = 18751831980655607LLU;
uint64_t t60 = 397629743741LLU;
uint64_t x246 = 2031222827930004101LLU;
volatile uint32_t t62 = 874U;
uint64_t x256 = UINT64_MAX;
int16_t x264 = -3751;
int8_t x266 = -4;
static int32_t t66 = -667108;
int32_t t68 = 66583;
static int16_t x280 = -3706;
uint32_t x284 = 1790763U;
uint64_t x285 = 1117LLU;
int8_t x298 = INT8_MIN;
uint32_t x299 = 225U;
int32_t x307 = 757;
int8_t x308 = -1;
static volatile int32_t t76 = 2;
int8_t x310 = 0;
volatile int32_t x314 = INT32_MIN;
uint32_t x330 = 823734U;
static int8_t x331 = 52;
static volatile int16_t x333 = -1;
int64_t x335 = INT64_MAX;
volatile int8_t x336 = 1;
int32_t t83 = -494944;
int16_t x343 = 58;
int32_t x344 = INT32_MIN;
int8_t x345 = 0;
volatile uint32_t x346 = UINT32_MAX;
volatile uint64_t x353 = 57475794591LLU;
int64_t x355 = INT64_MIN;
static volatile int64_t x358 = -1LL;
uint32_t x370 = 237561361U;
uint32_t x372 = 2170279U;
int16_t x383 = -1;
int32_t t95 = 952876953;
int8_t x388 = INT8_MIN;
int32_t t96 = INT32_MAX;
static int8_t x395 = 1;
int16_t x400 = INT16_MIN;


void f0(void) {
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 0LLU;
	static volatile int32_t t0 = -4980283;

	t0 = (x1^((x2<x3)==x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 7U;
	uint16_t x7 = 65U;
	static int16_t x8 = INT16_MIN;

	t1 = (x5^((x6<x7)==x8));

	if (t1 != 221645836LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MIN;
	int16_t x11 = -1;
	int16_t x12 = INT16_MAX;
	uint32_t t2 = 2U;

	t2 = (x9^((x10<x11)==x12));

	if (t2 != 7225117U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 6;
	static int32_t x14 = INT32_MAX;
	uint64_t x15 = 2939430124LLU;
	int8_t x16 = -12;

	t3 = (x13^((x14<x15)==x16));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int16_t x19 = 8113;
	volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = 2;

	t4 = (x17^((x18<x19)==x20));

	if (t4 != -670) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1833522LL;
	volatile int32_t x22 = 900996;
	uint64_t x23 = 622786LLU;
	static volatile int8_t x24 = 0;
	volatile int64_t t5 = -212245LL;

	t5 = (x21^((x22<x23)==x24));

	if (t5 != -1833521LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	int32_t x27 = -7844;
	volatile int8_t x28 = 1;
	static int32_t t6 = INT32_MIN;

	t6 = (x25^((x26<x27)==x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int32_t x30 = -2;
	static uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 1U;
	int32_t t7 = -68;

	t7 = (x29^((x30<x31)==x32));

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 0U;
	uint64_t x35 = 19060LLU;
	static volatile int32_t x36 = INT32_MIN;
	static int32_t t8 = -29793699;

	t8 = (x33^((x34<x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x39 = 3U;
	static uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x37^((x38<x39)==x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static uint32_t x43 = 345710796U;
	int8_t x44 = INT8_MIN;

	t10 = (x41^((x42<x43)==x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = 2165260;

	t11 = (x45^((x46<x47)==x48));

	if (t11 != -11848) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int64_t x51 = -1LL;

	t12 = (x49^((x50<x51)==x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	uint64_t x54 = 3200606805018LLU;
	uint16_t x55 = 223U;
	uint32_t x56 = 164320248U;
	int32_t t13 = 63;

	t13 = (x53^((x54<x55)==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 3U;
	volatile int16_t x59 = -12654;
	int64_t x60 = 14908231050LL;

	t14 = (x57^((x58<x59)==x60));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	static uint64_t x62 = 51LLU;
	int8_t x64 = INT8_MIN;

	t15 = (x61^((x62<x63)==x64));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 26U;
	static int16_t x66 = INT16_MIN;
	volatile int32_t t16 = -117;

	t16 = (x65^((x66<x67)==x68));

	if (t16 != 26) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 15;
	int64_t x70 = 0LL;
	volatile int8_t x71 = INT8_MIN;
	static int32_t x72 = -1;

	t17 = (x69^((x70<x71)==x72));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint16_t x74 = 3020U;
	static uint32_t x75 = UINT32_MAX;
	int32_t t18 = -202089;

	t18 = (x73^((x74<x75)==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 41U;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 30429;

	t19 = (x77^((x78<x79)==x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 1U;
	int8_t x84 = 1;
	int32_t t20 = -246776428;

	t20 = (x81^((x82<x83)==x84));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = -128747829878079469LL;
	int8_t x87 = INT8_MIN;
	volatile int32_t t21 = -5765;

	t21 = (x85^((x86<x87)==x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = INT64_MIN;
	int8_t x92 = 11;
	static int64_t t22 = -941462528100049LL;

	t22 = (x89^((x90<x91)==x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 133547307722125LLU;
	int64_t x94 = -1924LL;
	int64_t x96 = INT64_MIN;
	static uint64_t t23 = 50712LLU;

	t23 = (x93^((x94<x95)==x96));

	if (t23 != 133547307722125LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1701;
	volatile int32_t x98 = INT32_MIN;
	volatile int64_t x99 = 1LL;
	static int16_t x100 = 634;
	volatile int32_t t24 = 6965733;

	t24 = (x97^((x98<x99)==x100));

	if (t24 != -1701) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 27U;
	static int16_t x102 = INT16_MAX;
	static int32_t x103 = -13894281;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 113600;

	t25 = (x101^((x102<x103)==x104));

	if (t25 != 27) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MAX;
	uint8_t x106 = 3U;
	uint16_t x107 = 196U;
	volatile int16_t x108 = -1;
	int32_t t26 = INT32_MAX;

	t26 = (x105^((x106<x107)==x108));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = 9U;
	volatile int32_t t27 = 3601;

	t27 = (x109^((x110<x111)==x112));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = 29512590891742041LL;
	static uint64_t x115 = 132494167314LLU;
	int64_t t28 = 218LL;

	t28 = (x113^((x114<x115)==x116));

	if (t28 != 29512590891742041LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -1;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MIN;
	static volatile int32_t t29 = 88584;

	t29 = (x117^((x118<x119)==x120));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = 3;
	int32_t x122 = -3;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	static int32_t t30 = -61;

	t30 = (x121^((x122<x123)==x124));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 2U;
	int8_t x126 = INT8_MIN;
	static uint32_t x127 = 3492U;

	t31 = (x125^((x126<x127)==x128));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 66LLU;
	int16_t x130 = -317;
	uint16_t x131 = UINT16_MAX;
	uint64_t t32 = 13868LLU;

	t32 = (x129^((x130<x131)==x132));

	if (t32 != 66LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 429211970U;
	uint16_t x134 = 214U;
	int64_t x135 = 800288LL;
	int64_t x136 = INT64_MIN;
	static volatile uint32_t t33 = 0U;

	t33 = (x133^((x134<x135)==x136));

	if (t33 != 429211970U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 67890293;
	int16_t x138 = INT16_MIN;
	int32_t t34 = 3450140;

	t34 = (x137^((x138<x139)==x140));

	if (t34 != 67890293) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int16_t x142 = -2579;
	volatile uint8_t x144 = UINT8_MAX;

	t35 = (x141^((x142<x143)==x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -2403728;
	int16_t x146 = INT16_MIN;
	volatile int32_t t36 = 9187208;

	t36 = (x145^((x146<x147)==x148));

	if (t36 != -2403728) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -7;
	int8_t x150 = 1;
	int32_t x151 = INT32_MAX;
	int32_t t37 = 8170880;

	t37 = (x149^((x150<x151)==x152));

	if (t37 != -7) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 0U;
	volatile int8_t x155 = 7;
	int32_t x156 = 2;
	int32_t t38 = -1;

	t38 = (x153^((x154<x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 3253U;
	int8_t x158 = INT8_MIN;
	int32_t x160 = INT32_MAX;

	t39 = (x157^((x158<x159)==x160));

	if (t39 != 3253) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 132370U;
	int16_t x163 = -1;
	volatile uint32_t t40 = 43008U;

	t40 = (x161^((x162<x163)==x164));

	if (t40 != 132370U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = INT8_MIN;
	int8_t x166 = -2;
	uint16_t x167 = 588U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 122493;

	t41 = (x165^((x166<x167)==x168));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 2U;
	static uint32_t x170 = 3U;
	int32_t x171 = -177760252;
	uint32_t x172 = 3504409U;
	volatile int32_t t42 = 132077238;

	t42 = (x169^((x170<x171)==x172));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	volatile int16_t x174 = 30;
	int8_t x175 = INT8_MIN;
	int32_t t43 = 8180630;

	t43 = (x173^((x174<x175)==x176));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x178 = 96U;
	int64_t x180 = -1LL;
	volatile int32_t t44 = 68;

	t44 = (x177^((x178<x179)==x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = INT16_MAX;
	int16_t x183 = 0;

	t45 = (x181^((x182<x183)==x184));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x187 = -2;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 582922276;

	t46 = (x185^((x186<x187)==x188));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	uint8_t x190 = 24U;
	int8_t x192 = -1;

	t47 = (x189^((x190<x191)==x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int32_t x194 = 85004;
	uint32_t x195 = 3U;
	static volatile int32_t t48 = 9;

	t48 = (x193^((x194<x195)==x196));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	static uint32_t x198 = 48U;
	int8_t x199 = -1;

	t49 = (x197^((x198<x199)==x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MAX;
	static int32_t x202 = INT32_MIN;
	static int16_t x203 = INT16_MIN;
	uint16_t x204 = 18035U;
	int32_t t50 = -732;

	t50 = (x201^((x202<x203)==x204));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = 319968339103LL;
	int8_t x207 = -3;
	static uint16_t x208 = 91U;
	int32_t t51 = INT32_MIN;

	t51 = (x205^((x206<x207)==x208));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	volatile uint64_t x211 = 732572839558609LLU;
	volatile uint8_t x212 = 89U;

	t52 = (x209^((x210<x211)==x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int8_t x215 = -1;
	static int64_t t53 = INT64_MAX;

	t53 = (x213^((x214<x215)==x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = -29462230915936813LL;
	uint8_t x219 = 1U;
	int8_t x220 = 0;
	int64_t t54 = 857740432LL;

	t54 = (x217^((x218<x219)==x220));

	if (t54 != -29462230915936813LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 7U;
	static int64_t x222 = -1LL;
	int8_t x223 = -1;
	uint64_t x224 = 369752416LLU;
	static volatile int32_t t55 = 8918658;

	t55 = (x221^((x222<x223)==x224));

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -3;
	uint16_t x227 = 49U;
	uint8_t x228 = 6U;
	volatile int32_t t56 = 13337328;

	t56 = (x225^((x226<x227)==x228));

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	static uint16_t x230 = 3466U;
	volatile uint16_t x231 = 16497U;

	t57 = (x229^((x230<x231)==x232));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MAX;
	static int8_t x235 = 12;
	static uint16_t x236 = 6697U;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x233^((x234<x235)==x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -630;
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MAX;
	volatile int32_t t59 = -5645636;

	t59 = (x237^((x238<x239)==x240));

	if (t59 != -630) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x242 = -1;
	uint16_t x243 = 2U;
	static int8_t x244 = INT8_MIN;

	t60 = (x241^((x242<x243)==x244));

	if (t60 != 18751831980655607LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	static uint8_t x247 = UINT8_MAX;
	volatile uint32_t x248 = 1563U;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x245^((x246<x247)==x248));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 0U;
	int64_t x250 = 18916276LL;
	static int32_t x251 = INT32_MIN;
	uint16_t x252 = 11076U;

	t62 = (x249^((x250<x251)==x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -1LL;
	volatile int32_t t63 = -2413;

	t63 = (x253^((x254<x255)==x256));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 53U;
	int8_t x260 = INT8_MAX;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x257^((x258<x259)==x260));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static int32_t x263 = INT32_MAX;
	int32_t t65 = 465954994;

	t65 = (x261^((x262<x263)==x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -1;
	int16_t x267 = -1;
	int16_t x268 = INT16_MIN;

	t66 = (x265^((x266<x267)==x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MIN;
	static uint8_t x270 = 1U;
	uint32_t x271 = 7U;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -25478722;

	t67 = (x269^((x270<x271)==x272));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	static volatile int8_t x274 = -1;
	int64_t x275 = INT64_MIN;
	uint32_t x276 = 740724057U;

	t68 = (x273^((x274<x275)==x276));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t t69 = -905428;

	t69 = (x277^((x278<x279)==x280));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 2444U;
	volatile uint8_t x283 = 0U;
	uint64_t t70 = UINT64_MAX;

	t70 = (x281^((x282<x283)==x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MAX;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -1;
	volatile uint64_t t71 = 7511899022164876205LLU;

	t71 = (x285^((x286<x287)==x288));

	if (t71 != 1117LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 260704517586463LL;
	int64_t x290 = -148LL;
	volatile uint8_t x291 = 13U;
	int8_t x292 = -14;
	int64_t t72 = 3789861052812LL;

	t72 = (x289^((x290<x291)==x292));

	if (t72 != 260704517586463LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	uint8_t x294 = 0U;
	volatile uint16_t x295 = 26U;
	static int32_t x296 = -1;
	int32_t t73 = 8;

	t73 = (x293^((x294<x295)==x296));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	uint32_t x300 = 990109963U;
	int32_t t74 = 17138710;

	t74 = (x297^((x298<x299)==x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 4U;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 2337;

	t75 = (x301^((x302<x303)==x304));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	uint8_t x306 = 24U;

	t76 = (x305^((x306<x307)==x308));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309^((x310<x311)==x312));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x313 = -249409522;
	static uint64_t x315 = 6916510LLU;
	static int16_t x316 = -23;
	volatile int32_t t78 = -4;

	t78 = (x313^((x314<x315)==x316));

	if (t78 != -249409522) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	int64_t x318 = -1LL;
	uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 442705082U;
	int64_t t79 = INT64_MAX;

	t79 = (x317^((x318<x319)==x320));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	int64_t x322 = -55493LL;
	int16_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -1193677;

	t80 = (x321^((x322<x323)==x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -1;
	volatile int16_t x326 = INT16_MIN;
	int32_t x327 = -228511;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = -14;

	t81 = (x325^((x326<x327)==x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int8_t x332 = -29;
	volatile int32_t t82 = 10130;

	t82 = (x329^((x330<x331)==x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = INT64_MIN;

	t83 = (x333^((x334<x335)==x336));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int64_t x338 = -4938LL;
	int64_t x339 = -1475443479278989065LL;
	uint8_t x340 = 113U;
	int32_t t84 = INT32_MAX;

	t84 = (x337^((x338<x339)==x340));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int32_t x342 = 1;
	static int64_t t85 = 2432075LL;

	t85 = (x341^((x342<x343)==x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x347 = INT16_MIN;
	int16_t x348 = 3;
	int32_t t86 = 334461420;

	t86 = (x345^((x346<x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 272LLU;
	volatile int16_t x350 = INT16_MIN;
	static int16_t x351 = -1;
	uint16_t x352 = 1U;
	volatile uint64_t t87 = 111122287LLU;

	t87 = (x349^((x350<x351)==x352));

	if (t87 != 273LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x354 = 1;
	uint8_t x356 = UINT8_MAX;
	volatile uint64_t t88 = 107865507907763LLU;

	t88 = (x353^((x354<x355)==x356));

	if (t88 != 57475794591LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint8_t x359 = 1U;
	int64_t x360 = -1LL;
	int32_t t89 = 7;

	t89 = (x357^((x358<x359)==x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	uint32_t x364 = 3U;
	volatile int32_t t90 = -39283;

	t90 = (x361^((x362<x363)==x364));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	int32_t x366 = -220954;
	uint8_t x367 = 3U;
	volatile int16_t x368 = INT16_MAX;
	volatile int64_t t91 = 0LL;

	t91 = (x365^((x366<x367)==x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 13U;
	int16_t x371 = 1718;
	int32_t t92 = -487541531;

	t92 = (x369^((x370<x371)==x372));

	if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = -130;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -1;
	int32_t t93 = -356971530;

	t93 = (x373^((x374<x375)==x376));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -6490LL;
	int64_t x378 = INT64_MIN;
	static volatile int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MIN;
	int64_t t94 = 351LL;

	t94 = (x377^((x378<x379)==x380));

	if (t94 != -6490LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	uint64_t x384 = 433829LLU;

	t95 = (x381^((x382<x383)==x384));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	static int32_t x386 = -626;
	volatile uint8_t x387 = 13U;

	t96 = (x385^((x386<x387)==x388));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = 35;
	uint32_t x390 = UINT32_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = -1;
	volatile int32_t t97 = -723;

	t97 = (x389^((x390<x391)==x392));

	if (t97 != 35) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 1491467944834LLU;
	int64_t x394 = -73130399304825471LL;
	uint32_t x396 = UINT32_MAX;
	uint64_t t98 = 42LLU;

	t98 = (x393^((x394<x395)==x396));

	if (t98 != 1491467944834LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x398 = 5;
	uint16_t x399 = UINT16_MAX;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x397^((x398<x399)==x400));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

