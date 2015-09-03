#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = INT32_MIN;
uint16_t x14 = 141U;
static volatile int16_t x20 = -1;
int64_t x35 = INT64_MIN;
int32_t t9 = 951613141;
uint8_t x43 = 9U;
int8_t x47 = INT8_MAX;
int32_t x67 = -6769;
volatile uint16_t x83 = UINT16_MAX;
int8_t x85 = 30;
static volatile uint16_t x88 = UINT16_MAX;
int32_t t21 = -46;
int8_t x96 = INT8_MIN;
int32_t t22 = 354766108;
int8_t x98 = -1;
static int8_t x100 = INT8_MIN;
int32_t t24 = 1013263;
int32_t x105 = INT32_MAX;
int32_t t25 = 29666475;
volatile int16_t x117 = INT16_MIN;
int32_t t27 = 105359;
int32_t t29 = -1336;
int8_t x138 = 1;
int8_t x152 = INT8_MAX;
volatile int32_t t32 = 186055;
uint32_t x155 = UINT32_MAX;
static int32_t x156 = -38352;
static volatile int16_t x158 = -1;
static uint16_t x164 = 31U;
static volatile int32_t t37 = -7797;
int32_t x178 = -226380;
int32_t x180 = INT32_MAX;
static int16_t x181 = INT16_MIN;
int32_t x184 = INT32_MIN;
volatile int32_t t39 = 142;
uint64_t x193 = UINT64_MAX;
static volatile int8_t x201 = 1;
int32_t t44 = -7925;
uint8_t x211 = 9U;
static volatile int64_t x213 = -1LL;
int32_t t46 = 8504;
int8_t x227 = -1;
volatile uint64_t x233 = 21827LLU;
volatile int8_t x235 = 10;
int32_t x254 = -388343;
volatile int32_t t55 = 47720416;
uint16_t x262 = 5319U;
volatile int64_t x266 = 3878985LL;
int8_t x268 = INT8_MAX;
int64_t x270 = INT64_MAX;
volatile uint64_t x271 = 237832190135356LLU;
static volatile int32_t x298 = INT32_MIN;
int32_t x301 = -53024;
volatile int8_t x302 = INT8_MIN;
int32_t t61 = 41829;
int32_t t62 = 0;
volatile int8_t x323 = 34;
uint8_t x326 = 0U;
static int8_t x327 = 1;
int8_t x328 = INT8_MIN;
int32_t t65 = 3220;
static uint64_t x330 = UINT64_MAX;
int64_t x335 = 31681505893LL;
int8_t x352 = INT8_MAX;
volatile int64_t x359 = 96790537LL;
uint16_t x360 = 148U;
volatile int32_t t71 = -1;
uint8_t x365 = UINT8_MAX;
volatile int32_t t74 = -34;
volatile int32_t t75 = 1;
static int64_t x386 = -1LL;
int64_t x387 = 1LL;
int32_t x389 = INT32_MIN;
volatile int32_t t78 = -715419;
static uint64_t x416 = 24LLU;
int64_t x418 = INT64_MAX;
static volatile int32_t x420 = 2296;
int16_t x429 = INT16_MIN;
uint64_t x435 = 49248895888LLU;
int16_t x436 = 3420;
uint64_t x439 = 164LLU;
static uint32_t x449 = 17360U;
volatile int64_t x450 = INT64_MAX;
int64_t x451 = -1LL;
uint16_t x454 = 1390U;
uint32_t x462 = 26614138U;
static int8_t x474 = 0;
int32_t t92 = -69927;
uint16_t x477 = 457U;
uint64_t x478 = 39348209LLU;
int8_t x479 = INT8_MAX;
static volatile int32_t t94 = 7034714;
volatile int8_t x485 = INT8_MIN;
volatile int64_t x490 = -26731579749686LL;
static int8_t x498 = INT8_MIN;
int8_t x505 = INT8_MIN;


void f0(void) {
	volatile int8_t x1 = -1;
	int64_t x2 = 1788084061666328LL;
	uint16_t x3 = 19U;
	static volatile int32_t x4 = 1;
	int32_t t0 = 265638858;

	t0 = ((x1-x2)<=(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x6 = 59U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 19001;

	t1 = ((x5-x6)<=(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MAX;
	int64_t x11 = -827369695LL;
	uint32_t x12 = 5U;
	volatile int32_t t2 = -122;

	t2 = ((x9-x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	volatile int32_t x15 = INT32_MIN;
	int32_t x16 = -22949435;
	volatile int32_t t3 = -694013;

	t3 = ((x13-x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	volatile int32_t t4 = -165;

	t4 = ((x17-x18)<=(x19-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 15U;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = 130121694206829665LLU;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = -304096;

	t5 = ((x21-x22)<=(x23-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	int32_t x28 = -128;
	static int32_t t6 = 105690196;

	t6 = ((x25-x26)<=(x27-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = 76889387205121LL;
	int32_t x30 = -71060;
	static uint16_t x31 = 8824U;
	int64_t x32 = 38541245LL;
	int32_t t7 = -739925;

	t7 = ((x29-x30)<=(x31-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int16_t x34 = -3;
	static int64_t x36 = -96314LL;
	static int32_t t8 = 1754315;

	t8 = ((x33-x34)<=(x35-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = 927181031LL;
	int32_t x39 = INT32_MIN;
	volatile uint64_t x40 = 536842591LLU;

	t9 = ((x37-x38)<=(x39-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static uint16_t x42 = 918U;
	uint32_t x44 = 0U;
	int32_t t10 = -39664;

	t10 = ((x41-x42)<=(x43-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	uint8_t x46 = UINT8_MAX;
	int64_t x48 = -1LL;
	static int32_t t11 = -307;

	t11 = ((x45-x46)<=(x47-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1U;
	volatile int8_t x50 = 1;
	uint64_t x51 = 21725208555821413LLU;
	volatile int32_t x52 = -237;
	volatile int32_t t12 = 13072;

	t12 = ((x49-x50)<=(x51-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 95761LLU;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -25507025;

	t13 = ((x53-x54)<=(x55-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile uint32_t x58 = 181U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = -1;
	volatile int32_t t14 = -1;

	t14 = ((x57-x58)<=(x59-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static int16_t x66 = -1;
	volatile int64_t x68 = INT64_MIN;
	static int32_t t15 = 96525;

	t15 = ((x65-x66)<=(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = -20;
	uint32_t x70 = 84U;
	int32_t x71 = -1;
	static int32_t x72 = -10272945;
	static volatile int32_t t16 = 1794;

	t16 = ((x69-x70)<=(x71-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 36U;
	uint32_t x74 = 1U;
	uint64_t x75 = 2475669497678480295LLU;
	volatile int8_t x76 = 1;
	static volatile int32_t t17 = -335121;

	t17 = ((x73-x74)<=(x75-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	static int64_t x79 = -12527LL;
	int8_t x80 = INT8_MAX;
	volatile int32_t t18 = -14974190;

	t18 = ((x77-x78)<=(x79-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	int16_t x84 = -1;
	static volatile int32_t t19 = 3868;

	t19 = ((x81-x82)<=(x83-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = -58;
	uint8_t x87 = 40U;
	volatile int32_t t20 = 122;

	t20 = ((x85-x86)<=(x87-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	int32_t x92 = -1;

	t21 = ((x89-x90)<=(x91-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 127;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -183788LL;

	t22 = ((x93-x94)<=(x95-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 3U;
	int32_t x99 = INT32_MIN;
	int32_t t23 = 48908365;

	t23 = ((x97-x98)<=(x99-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 2486711062155LL;
	static int16_t x102 = INT16_MAX;
	static int64_t x103 = INT64_MIN;
	static int64_t x104 = -16147647026LL;

	t24 = ((x101-x102)<=(x103-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = -65307249LL;
	static uint8_t x107 = 72U;
	volatile uint64_t x108 = 59801730036LLU;

	t25 = ((x105-x106)<=(x107-x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 24;
	static uint8_t x114 = UINT8_MAX;
	int32_t x115 = 609;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t26 = 15714;

	t26 = ((x113-x114)<=(x115-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = 464724U;
	static volatile uint16_t x119 = 16U;
	uint32_t x120 = 325U;

	t27 = ((x117-x118)<=(x119-x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	volatile uint16_t x122 = 105U;
	volatile uint16_t x123 = 10013U;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t28 = -22;

	t28 = ((x121-x122)<=(x123-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	volatile int32_t x130 = INT32_MAX;
	static uint16_t x131 = UINT16_MAX;
	static int16_t x132 = INT16_MAX;

	t29 = ((x129-x130)<=(x131-x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = -1;
	volatile uint64_t x134 = 14251770LLU;
	int16_t x135 = 11;
	int32_t x136 = INT32_MAX;
	int32_t t30 = 2;

	t30 = ((x133-x134)<=(x135-x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = -1;
	static int32_t x139 = 2823900;
	int8_t x140 = -1;
	int32_t t31 = -1;

	t31 = ((x137-x138)<=(x139-x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = 11649;
	uint8_t x150 = 27U;
	static uint16_t x151 = 3U;

	t32 = ((x149-x150)<=(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 112U;
	int8_t x154 = -26;
	volatile int32_t t33 = 0;

	t33 = ((x153-x154)<=(x155-x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = 327;
	int32_t x159 = INT32_MAX;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t34 = 0;

	t34 = ((x157-x158)<=(x159-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MIN;
	volatile uint8_t x163 = UINT8_MAX;
	volatile int32_t t35 = 47612;

	t35 = ((x161-x162)<=(x163-x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x165 = 2U;
	int64_t x166 = 5726307LL;
	static int64_t x167 = 83322951621773305LL;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t36 = -176940;

	t36 = ((x165-x166)<=(x167-x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -184870LL;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = UINT16_MAX;

	t37 = ((x173-x174)<=(x175-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t38 = -2;

	t38 = ((x177-x178)<=(x179-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;

	t39 = ((x181-x182)<=(x183-x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MAX;
	int64_t x187 = -798076LL;
	static int32_t x188 = -1335368;
	volatile int32_t t40 = -26;

	t40 = ((x185-x186)<=(x187-x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x194 = -1;
	uint16_t x195 = 31U;
	static uint32_t x196 = UINT32_MAX;
	int32_t t41 = 247128;

	t41 = ((x193-x194)<=(x195-x196));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x197 = 1961;
	static volatile int8_t x198 = 37;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t42 = 485664166;

	t42 = ((x197-x198)<=(x199-x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x202 = 2978120791526LL;
	uint8_t x203 = UINT8_MAX;
	static int32_t x204 = 58286794;
	volatile int32_t t43 = 337;

	t43 = ((x201-x202)<=(x203-x204));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 517147U;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = INT16_MAX;
	int32_t x208 = -3211;

	t44 = ((x205-x206)<=(x207-x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x209 = -1;
	int8_t x210 = -5;
	int32_t x212 = 48297;
	int32_t t45 = -40106;

	t45 = ((x209-x210)<=(x211-x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x214 = 11U;
	int16_t x215 = 13;
	volatile int64_t x216 = INT64_MAX;

	t46 = ((x213-x214)<=(x215-x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = -130145682;
	static uint32_t x218 = 21776938U;
	int64_t x219 = -839222239972939LL;
	int64_t x220 = INT64_MIN;
	volatile int32_t t47 = -775092;

	t47 = ((x217-x218)<=(x219-x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = 0U;
	static int16_t x222 = INT16_MAX;
	static volatile int8_t x223 = -53;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t48 = -56570;

	t48 = ((x221-x222)<=(x223-x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 1648LLU;
	volatile int16_t x226 = -2985;
	volatile int8_t x228 = INT8_MIN;
	int32_t t49 = -45;

	t49 = ((x225-x226)<=(x227-x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x229 = INT8_MIN;
	int64_t x230 = -1LL;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	int32_t t50 = 1873;

	t50 = ((x229-x230)<=(x231-x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x234 = 29;
	static int64_t x236 = -3LL;
	volatile int32_t t51 = 801;

	t51 = ((x233-x234)<=(x235-x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = -3;
	int64_t x240 = INT64_MIN;
	volatile int32_t t52 = 777857;

	t52 = ((x237-x238)<=(x239-x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 63;
	static volatile int64_t x242 = -242373915461LL;
	int8_t x243 = INT8_MAX;
	volatile uint8_t x244 = 6U;
	int32_t t53 = -15814;

	t53 = ((x241-x242)<=(x243-x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x253 = INT32_MIN;
	int32_t x255 = -1;
	int32_t x256 = -12034;
	volatile int32_t t54 = 2;

	t54 = ((x253-x254)<=(x255-x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = -2;
	int32_t x258 = -1;
	int16_t x259 = -1;
	uint32_t x260 = 9U;

	t55 = ((x257-x258)<=(x259-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x261 = 1U;
	static volatile uint16_t x263 = UINT16_MAX;
	uint32_t x264 = UINT32_MAX;
	int32_t t56 = -27240068;

	t56 = ((x261-x262)<=(x263-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 735208U;
	volatile int8_t x267 = INT8_MAX;
	int32_t t57 = -6;

	t57 = ((x265-x266)<=(x267-x268));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x272 = -1;
	volatile int32_t t58 = -6155556;

	t58 = ((x269-x270)<=(x271-x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	static uint64_t x274 = 24064190249LLU;
	static int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t59 = 427206;

	t59 = ((x273-x274)<=(x275-x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x297 = -1;
	int64_t x299 = 15876LL;
	int64_t x300 = -1LL;
	int32_t t60 = 3706229;

	t60 = ((x297-x298)<=(x299-x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x303 = INT32_MIN;
	static uint32_t x304 = 47349763U;

	t61 = ((x301-x302)<=(x303-x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = -15139325;
	int32_t x306 = 2;
	uint16_t x307 = UINT16_MAX;
	static uint32_t x308 = 885U;

	t62 = ((x305-x306)<=(x307-x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	int8_t x315 = -3;
	int32_t x316 = INT32_MIN;
	int32_t t63 = -2804;

	t63 = ((x313-x314)<=(x315-x316));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t64 = 462981016;

	t64 = ((x321-x322)<=(x323-x324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = INT8_MAX;

	t65 = ((x325-x326)<=(x327-x328));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MIN;
	static int16_t x331 = INT16_MIN;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t66 = -15022990;

	t66 = ((x329-x330)<=(x331-x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	static volatile int32_t x336 = 6;
	int32_t t67 = -4;

	t67 = ((x333-x334)<=(x335-x336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = INT32_MAX;
	static int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	volatile int8_t x344 = INT8_MAX;
	volatile int32_t t68 = 0;

	t68 = ((x341-x342)<=(x343-x344));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x345 = 2943220LLU;
	volatile int64_t x346 = INT64_MIN;
	uint64_t x347 = 15LLU;
	uint8_t x348 = 6U;
	int32_t t69 = 3980324;

	t69 = ((x345-x346)<=(x347-x348));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x349 = 13828060816615LLU;
	uint8_t x350 = 41U;
	int32_t x351 = INT32_MAX;
	static int32_t t70 = -4702709;

	t70 = ((x349-x350)<=(x351-x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = 27;

	t71 = ((x357-x358)<=(x359-x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = UINT16_MAX;
	static uint16_t x363 = 1411U;
	int32_t x364 = 8;
	int32_t t72 = 80462;

	t72 = ((x361-x362)<=(x363-x364));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x366 = 1;
	uint16_t x367 = UINT16_MAX;
	static volatile int16_t x368 = 5;
	int32_t t73 = -373574;

	t73 = ((x365-x366)<=(x367-x368));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = 14848010U;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = 2;
	static volatile int8_t x376 = 1;

	t74 = ((x373-x374)<=(x375-x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = -1;
	int16_t x382 = -1;
	static int64_t x383 = -9951825405LL;
	uint8_t x384 = 25U;

	t75 = ((x381-x382)<=(x383-x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x385 = -1LL;
	int16_t x388 = -1;
	volatile int32_t t76 = -166;

	t76 = ((x385-x386)<=(x387-x388));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x390 = INT32_MIN;
	static uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t77 = -9352;

	t77 = ((x389-x390)<=(x391-x392));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	static uint16_t x400 = 7U;

	t78 = ((x397-x398)<=(x399-x400));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x401 = 3979348517001052LLU;
	volatile int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = UINT64_MAX;
	int32_t t79 = 241;

	t79 = ((x401-x402)<=(x403-x404));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int64_t x406 = -70469022649179198LL;
	volatile int32_t x407 = -1;
	uint16_t x408 = 105U;
	static volatile int32_t t80 = -27;

	t80 = ((x405-x406)<=(x407-x408));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x413 = INT8_MIN;
	volatile uint64_t x414 = 532260333LLU;
	uint32_t x415 = UINT32_MAX;
	int32_t t81 = -1946258;

	t81 = ((x413-x414)<=(x415-x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x417 = UINT8_MAX;
	uint16_t x419 = 392U;
	volatile int32_t t82 = 32;

	t82 = ((x417-x418)<=(x419-x420));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x430 = 1;
	volatile int32_t x431 = -1;
	int8_t x432 = INT8_MIN;
	int32_t t83 = 2;

	t83 = ((x429-x430)<=(x431-x432));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x433 = 3472194032512785605LL;
	int32_t x434 = INT32_MAX;
	volatile int32_t t84 = 1961;

	t84 = ((x433-x434)<=(x435-x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MAX;
	volatile uint16_t x440 = UINT16_MAX;
	volatile int32_t t85 = -25;

	t85 = ((x437-x438)<=(x439-x440));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x441 = 53529LLU;
	static uint16_t x442 = 7862U;
	int8_t x443 = 3;
	uint64_t x444 = 4420LLU;
	volatile int32_t t86 = 17993775;

	t86 = ((x441-x442)<=(x443-x444));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = 48;
	uint32_t x446 = 1711268U;
	int32_t x447 = INT32_MIN;
	int8_t x448 = 0;
	volatile int32_t t87 = -790527230;

	t87 = ((x445-x446)<=(x447-x448));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x452 = INT32_MAX;
	int32_t t88 = 5088;

	t88 = ((x449-x450)<=(x451-x452));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x453 = -5801;
	static uint16_t x455 = UINT16_MAX;
	int64_t x456 = INT64_MAX;
	volatile int32_t t89 = -55094905;

	t89 = ((x453-x454)<=(x455-x456));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x457 = 1U;
	static uint16_t x458 = 55U;
	int16_t x459 = INT16_MIN;
	uint32_t x460 = 149281432U;
	int32_t t90 = 45280;

	t90 = ((x457-x458)<=(x459-x460));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x461 = -1;
	int32_t x463 = INT32_MIN;
	static int8_t x464 = -1;
	volatile int32_t t91 = 68;

	t91 = ((x461-x462)<=(x463-x464));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x473 = 600;
	uint16_t x475 = 3775U;
	uint64_t x476 = 2596303034089LLU;

	t92 = ((x473-x474)<=(x475-x476));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x480 = 4U;
	static int32_t t93 = -42633690;

	t93 = ((x477-x478)<=(x479-x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = -1;
	uint32_t x482 = 1094507140U;
	int16_t x483 = -1;
	int64_t x484 = 8086874864361415LL;

	t94 = ((x481-x482)<=(x483-x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x486 = INT64_MIN;
	static int32_t x487 = -1;
	static uint64_t x488 = 108098139LLU;
	int32_t t95 = 90448;

	t95 = ((x485-x486)<=(x487-x488));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x489 = INT64_MIN;
	int8_t x491 = INT8_MIN;
	uint8_t x492 = 57U;
	volatile int32_t t96 = 156096404;

	t96 = ((x489-x490)<=(x491-x492));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x497 = -1LL;
	static volatile uint16_t x499 = 9892U;
	int8_t x500 = -1;
	volatile int32_t t97 = 8;

	t97 = ((x497-x498)<=(x499-x500));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x506 = INT8_MIN;
	static uint32_t x507 = 3448U;
	int16_t x508 = 3034;
	volatile int32_t t98 = -62312294;

	t98 = ((x505-x506)<=(x507-x508));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x517 = INT32_MIN;
	volatile int64_t x518 = 288230LL;
	volatile uint8_t x519 = 0U;
	int64_t x520 = -1LL;
	volatile int32_t t99 = -5417657;

	t99 = ((x517-x518)<=(x519-x520));

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

