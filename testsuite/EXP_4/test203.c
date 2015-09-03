#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint16_t x3 = 11293U;
int32_t t0 = -228449009;
static uint64_t x6 = 0LLU;
static volatile uint32_t x8 = 452U;
volatile int8_t x11 = INT8_MIN;
int8_t x17 = 10;
int8_t x18 = 0;
int64_t x21 = INT64_MIN;
volatile uint16_t x23 = UINT16_MAX;
static int64_t x27 = 3265948331774LL;
static volatile int32_t t6 = -15;
uint16_t x29 = 4507U;
volatile int8_t x31 = INT8_MIN;
uint64_t x32 = UINT64_MAX;
int32_t t7 = -852947707;
volatile int16_t x46 = INT16_MIN;
int8_t x55 = 0;
int32_t x64 = -57857;
uint32_t x92 = 2848377U;
int32_t t18 = 16027;
int32_t x105 = INT32_MIN;
volatile int32_t x115 = INT32_MIN;
int32_t x116 = INT32_MIN;
int32_t x122 = INT32_MAX;
uint8_t x123 = 2U;
uint64_t x124 = UINT64_MAX;
volatile int16_t x125 = INT16_MIN;
int16_t x128 = 771;
static volatile int32_t x129 = INT32_MAX;
volatile uint8_t x132 = 14U;
int16_t x162 = INT16_MAX;
int8_t x173 = INT8_MAX;
uint64_t x176 = 3609607721LLU;
int32_t t30 = -5849;
uint32_t x177 = 514167U;
volatile int32_t x178 = INT32_MIN;
volatile uint64_t x179 = 40953787LLU;
static int16_t x181 = -1;
uint32_t x184 = 13U;
volatile uint64_t x209 = 59LLU;
int32_t x212 = -1;
int32_t t35 = 5356375;
volatile int8_t x227 = INT8_MIN;
volatile int32_t t36 = -167;
uint8_t x241 = 42U;
int32_t x242 = 1680;
volatile int32_t x243 = 198631;
volatile int32_t t37 = 0;
int64_t x249 = -115104438LL;
int16_t x250 = INT16_MIN;
int64_t x256 = -2LL;
volatile int8_t x258 = -1;
int8_t x259 = INT8_MIN;
int64_t x267 = INT64_MIN;
static int64_t x271 = -1247127261740113LL;
int32_t t43 = 9884;
int32_t x278 = 0;
uint64_t x285 = 28LLU;
uint16_t x288 = 0U;
int64_t x294 = 359243064165LL;
volatile int8_t x295 = -10;
static int16_t x301 = 0;
uint8_t x314 = 0U;
static volatile uint32_t x315 = UINT32_MAX;
int16_t x316 = -2735;
int32_t t49 = -31;
uint8_t x318 = 6U;
static int32_t x319 = -1029534;
uint64_t x325 = 27LLU;
int8_t x326 = INT8_MIN;
uint64_t x327 = 170LLU;
int32_t t52 = -97;
int32_t x338 = 1;
int8_t x368 = -1;
uint32_t x374 = 220U;
uint32_t x375 = UINT32_MAX;
int8_t x377 = -1;
static volatile int32_t x378 = -1;
static int16_t x380 = INT16_MIN;
volatile int32_t t59 = -85316;
volatile int8_t x387 = -45;
volatile int8_t x390 = -1;
static uint8_t x392 = UINT8_MAX;
volatile int32_t t62 = 27283996;
int16_t x405 = INT16_MIN;
volatile uint64_t x408 = 132481602317057912LLU;
uint32_t x414 = 1591401551U;
int32_t t64 = 1183133;
static int32_t x423 = -1;
static uint64_t x424 = 7375644424479126440LLU;
uint16_t x431 = 52U;
static int32_t t68 = -4;
static uint16_t x437 = 737U;
int8_t x439 = 1;
int32_t t74 = 2357;
int16_t x469 = INT16_MIN;
int8_t x485 = INT8_MIN;
volatile int32_t x487 = -1;
int32_t t77 = 14250;
static int8_t x492 = INT8_MIN;
int32_t t78 = 0;
volatile int8_t x499 = -59;
static int32_t t80 = -31;
volatile uint8_t x529 = UINT8_MAX;
int32_t x534 = 5;
int8_t x558 = 0;
int32_t x561 = -1;
uint16_t x578 = 232U;
volatile uint32_t x586 = 1460324U;
uint64_t x588 = 1LLU;
int32_t t92 = -885823900;
int8_t x602 = INT8_MIN;
uint64_t x608 = 5083927LLU;
static uint16_t x610 = 12231U;
int16_t x623 = 4;
volatile uint64_t x624 = 2029275941747591LLU;
int16_t x625 = INT16_MAX;
static int8_t x628 = -1;
int32_t t97 = 3;
int32_t x633 = INT32_MIN;
volatile int32_t t98 = -110653;


void f0(void) {
	static int32_t x2 = 9;
	static int64_t x4 = 1LL;

	t0 = (x1==(x2*(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -36130422454LL;
	uint8_t x7 = 5U;
	int32_t t1 = 126941;

	t1 = (x5==(x6*(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = 0;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 81;

	t2 = (x9==(x10*(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -453;
	static uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = INT16_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 88687894;

	t3 = (x13==(x14*(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -1;

	t4 = (x17==(x18*(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MIN;
	int8_t x24 = -1;
	int32_t t5 = 190;

	t5 = (x21==(x22*(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	volatile int16_t x26 = -1;
	static int32_t x28 = INT32_MIN;

	t6 = (x25==(x26*(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;

	t7 = (x29==(x30*(x31-x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int32_t x34 = 93;
	uint16_t x35 = 2312U;
	uint16_t x36 = 13975U;
	static int32_t t8 = -299;

	t8 = (x33==(x34*(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 42U;
	static volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -6412450;

	t9 = (x37==(x38*(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 328126106070039LL;
	uint8_t x47 = 13U;
	int64_t x48 = -1LL;
	volatile int32_t t10 = -8684338;

	t10 = (x45==(x46*(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = -1;
	uint64_t x50 = 15605018217113134LLU;
	int8_t x51 = -34;
	static uint16_t x52 = 111U;
	int32_t t11 = -24;

	t11 = (x49==(x50*(x51-x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	uint64_t x54 = 2211563LLU;
	volatile uint16_t x56 = UINT16_MAX;
	static volatile int32_t t12 = -14;

	t12 = (x53==(x54*(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = -2829LL;
	uint32_t x62 = UINT32_MAX;
	volatile int64_t x63 = -91215796LL;
	int32_t t13 = 81;

	t13 = (x61==(x62*(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = -606;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = UINT16_MAX;
	volatile uint64_t x76 = 3569245205LLU;
	volatile int32_t t14 = -6522;

	t14 = (x73==(x74*(x75-x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = -4;
	int8_t x79 = 21;
	int64_t x80 = 2LL;
	static volatile int32_t t15 = 228698024;

	t15 = (x77==(x78*(x79-x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = UINT8_MAX;
	static int32_t x90 = 4510;
	int16_t x91 = INT16_MIN;
	static int32_t t16 = 129;

	t16 = (x89==(x90*(x91-x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 54U;
	int32_t x95 = -263375473;
	int64_t x96 = -1LL;
	int32_t t17 = 541986936;

	t17 = (x93==(x94*(x95-x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = 1;
	static int16_t x102 = -1;
	static int16_t x103 = -1;
	uint64_t x104 = 19191819LLU;

	t18 = (x101==(x102*(x103-x104)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 12876U;
	static int32_t x108 = -323019538;
	volatile int32_t t19 = 283;

	t19 = (x105==(x106*(x107-x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	volatile int32_t t20 = -325;

	t20 = (x113==(x114*(x115-x116)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x121 = -1LL;
	volatile int32_t t21 = 1;

	t21 = (x121==(x122*(x123-x124)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x126 = INT64_MIN;
	static uint64_t x127 = 65155LLU;
	int32_t t22 = 7009;

	t22 = (x125==(x126*(x127-x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x130 = INT8_MAX;
	int16_t x131 = -1;
	volatile int32_t t23 = 0;

	t23 = (x129==(x130*(x131-x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x133 = INT8_MIN;
	static uint8_t x134 = UINT8_MAX;
	int16_t x135 = 1;
	int64_t x136 = -61261924934519LL;
	volatile int32_t t24 = 2822;

	t24 = (x133==(x134*(x135-x136)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = -1LL;
	int64_t x142 = 610793095314142LL;
	int8_t x143 = INT8_MIN;
	int8_t x144 = -6;
	volatile int32_t t25 = -466;

	t25 = (x141==(x142*(x143-x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = 14LL;
	int16_t x150 = INT16_MAX;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -49958;
	volatile int32_t t26 = 123405;

	t26 = (x149==(x150*(x151-x152)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = 182865014LLU;
	static int32_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = -1;
	volatile int32_t t27 = -112946734;

	t27 = (x153==(x154*(x155-x156)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = 2000;
	int32_t x163 = -1;
	uint16_t x164 = 718U;
	volatile int32_t t28 = 497;

	t28 = (x161==(x162*(x163-x164)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = 5299814769LLU;
	volatile int16_t x166 = -1;
	static int16_t x167 = INT16_MIN;
	int8_t x168 = -5;
	static volatile int32_t t29 = -1;

	t29 = (x165==(x166*(x167-x168)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x174 = -1;
	uint8_t x175 = 5U;

	t30 = (x173==(x174*(x175-x176)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x180 = UINT64_MAX;
	volatile int32_t t31 = 3;

	t31 = (x177==(x178*(x179-x180)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x182 = INT16_MIN;
	static int16_t x183 = INT16_MAX;
	int32_t t32 = 15243;

	t32 = (x181==(x182*(x183-x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x197 = UINT16_MAX;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = -3417;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t33 = 1585508;

	t33 = (x197==(x198*(x199-x200)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x210 = -1;
	int32_t x211 = 34074968;
	volatile int32_t t34 = -806336;

	t34 = (x209==(x210*(x211-x212)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = 513764202007LLU;
	int8_t x223 = -1;
	uint16_t x224 = 14117U;

	t35 = (x221==(x222*(x223-x224)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x225 = -1LL;
	uint32_t x226 = UINT32_MAX;
	static volatile uint64_t x228 = UINT64_MAX;

	t36 = (x225==(x226*(x227-x228)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x244 = INT16_MAX;

	t37 = (x241==(x242*(x243-x244)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x251 = INT16_MIN;
	volatile int32_t x252 = -743;
	volatile int32_t t38 = -4;

	t38 = (x249==(x250*(x251-x252)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x253 = 1;
	static volatile int16_t x254 = 1243;
	volatile uint32_t x255 = UINT32_MAX;
	volatile int32_t t39 = 16746515;

	t39 = (x253==(x254*(x255-x256)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x257 = -1LL;
	static int16_t x260 = -710;
	int32_t t40 = -14;

	t40 = (x257==(x258*(x259-x260)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x261 = 6;
	int16_t x262 = 374;
	uint16_t x263 = 61U;
	uint32_t x264 = UINT32_MAX;
	int32_t t41 = 4;

	t41 = (x261==(x262*(x263-x264)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x265 = 1539167963825997LL;
	volatile int16_t x266 = -1218;
	int64_t x268 = INT64_MIN;
	int32_t t42 = -2265937;

	t42 = (x265==(x266*(x267-x268)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = -1LL;
	static int32_t x272 = 65738470;

	t43 = (x269==(x270*(x271-x272)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x277 = INT8_MAX;
	static uint16_t x279 = 7743U;
	int16_t x280 = -2021;
	int32_t t44 = -23;

	t44 = (x277==(x278*(x279-x280)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x286 = 6;
	static uint8_t x287 = 47U;
	int32_t t45 = 2;

	t45 = (x285==(x286*(x287-x288)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x293 = 96289U;
	uint8_t x296 = 77U;
	int32_t t46 = -105797743;

	t46 = (x293==(x294*(x295-x296)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x302 = 71;
	static uint8_t x303 = 23U;
	int32_t x304 = 581;
	volatile int32_t t47 = -383647969;

	t47 = (x301==(x302*(x303-x304)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = 12510356992135789LLU;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	static int32_t t48 = -103;

	t48 = (x305==(x306*(x307-x308)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x313 = -1LL;

	t49 = (x313==(x314*(x315-x316)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x317 = 468066LL;
	static uint8_t x320 = UINT8_MAX;
	int32_t t50 = -13586;

	t50 = (x317==(x318*(x319-x320)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = 1;
	static volatile uint32_t x323 = 425784U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t51 = 558;

	t51 = (x321==(x322*(x323-x324)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x328 = 1;

	t52 = (x325==(x326*(x327-x328)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x337 = -1;
	int64_t x339 = INT64_MIN;
	static int16_t x340 = -5;
	int32_t t53 = 898192;

	t53 = (x337==(x338*(x339-x340)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x349 = -1;
	static volatile int16_t x350 = 9977;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = 38382825LLU;
	int32_t t54 = 73874;

	t54 = (x349==(x350*(x351-x352)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x365 = INT64_MIN;
	volatile int8_t x366 = 56;
	uint32_t x367 = UINT32_MAX;
	volatile int32_t t55 = -51;

	t55 = (x365==(x366*(x367-x368)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x369 = -1;
	int16_t x370 = -1;
	int32_t x371 = 4442;
	int16_t x372 = INT16_MIN;
	static int32_t t56 = 5;

	t56 = (x369==(x370*(x371-x372)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x373 = INT64_MIN;
	static int16_t x376 = -225;
	static volatile int32_t t57 = 201;

	t57 = (x373==(x374*(x375-x376)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x379 = -1;
	volatile int32_t t58 = -22263;

	t58 = (x377==(x378*(x379-x380)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	int16_t x384 = 123;

	t59 = (x381==(x382*(x383-x384)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x385 = 4380681810491522076LLU;
	int8_t x386 = INT8_MAX;
	int16_t x388 = -1;
	int32_t t60 = 2;

	t60 = (x385==(x386*(x387-x388)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x389 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	int32_t t61 = 243238115;

	t61 = (x389==(x390*(x391-x392)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	int8_t x403 = 1;
	uint64_t x404 = 271541319403LLU;

	t62 = (x401==(x402*(x403-x404)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	static int32_t t63 = -3376;

	t63 = (x405==(x406*(x407-x408)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x413 = INT16_MAX;
	static int32_t x415 = INT32_MAX;
	uint32_t x416 = 3U;

	t64 = (x413==(x414*(x415-x416)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x417 = -199;
	static uint64_t x418 = 249LLU;
	int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t65 = 1;

	t65 = (x417==(x418*(x419-x420)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x421 = -1;
	int8_t x422 = -1;
	int32_t t66 = 151812948;

	t66 = (x421==(x422*(x423-x424)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x429 = 0LLU;
	int8_t x430 = INT8_MIN;
	int16_t x432 = INT16_MAX;
	int32_t t67 = -12328;

	t67 = (x429==(x430*(x431-x432)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x433 = INT32_MAX;
	int8_t x434 = -1;
	int64_t x435 = 3493054559LL;
	int16_t x436 = INT16_MAX;

	t68 = (x433==(x434*(x435-x436)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x438 = 1443386U;
	volatile uint16_t x440 = 411U;
	static int32_t t69 = -134011751;

	t69 = (x437==(x438*(x439-x440)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x445 = INT16_MIN;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = INT32_MIN;
	int8_t x448 = -1;
	int32_t t70 = 2427;

	t70 = (x445==(x446*(x447-x448)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x449 = UINT16_MAX;
	int64_t x450 = -1LL;
	volatile uint16_t x451 = UINT16_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t71 = -222;

	t71 = (x449==(x450*(x451-x452)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x453 = UINT16_MAX;
	static int16_t x454 = -1;
	static int8_t x455 = INT8_MIN;
	int32_t x456 = INT32_MIN;
	volatile int32_t t72 = 179613;

	t72 = (x453==(x454*(x455-x456)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x461 = -127;
	static int64_t x462 = INT64_MIN;
	int16_t x463 = -1;
	static volatile int8_t x464 = -1;
	int32_t t73 = 22061035;

	t73 = (x461==(x462*(x463-x464)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x465 = INT16_MAX;
	static uint8_t x466 = 0U;
	static int64_t x467 = INT64_MIN;
	static int16_t x468 = -81;

	t74 = (x465==(x466*(x467-x468)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x470 = -1;
	static int16_t x471 = INT16_MAX;
	int64_t x472 = -1LL;
	int32_t t75 = 209;

	t75 = (x469==(x470*(x471-x472)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MAX;
	uint16_t x475 = UINT16_MAX;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t76 = 17875;

	t76 = (x473==(x474*(x475-x476)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x486 = -1;
	volatile int32_t x488 = INT32_MIN;

	t77 = (x485==(x486*(x487-x488)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x489 = INT64_MIN;
	uint32_t x490 = UINT32_MAX;
	static volatile int32_t x491 = INT32_MIN;

	t78 = (x489==(x490*(x491-x492)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x493 = UINT32_MAX;
	int64_t x494 = -277743227LL;
	int16_t x495 = -1;
	static volatile int8_t x496 = INT8_MIN;
	static int32_t t79 = 103042905;

	t79 = (x493==(x494*(x495-x496)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x497 = INT64_MIN;
	volatile uint16_t x498 = 12044U;
	uint32_t x500 = 49U;

	t80 = (x497==(x498*(x499-x500)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x501 = 38U;
	int16_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	uint16_t x504 = UINT16_MAX;
	int32_t t81 = 9;

	t81 = (x501==(x502*(x503-x504)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x513 = -1;
	int16_t x514 = INT16_MIN;
	int64_t x515 = INT64_MAX;
	uint64_t x516 = 38508990LLU;
	int32_t t82 = -1396;

	t82 = (x513==(x514*(x515-x516)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x530 = 5225149073968305LLU;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = 24839992U;
	volatile int32_t t83 = 926;

	t83 = (x529==(x530*(x531-x532)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x533 = 63;
	volatile uint32_t x535 = UINT32_MAX;
	volatile uint64_t x536 = 132893LLU;
	volatile int32_t t84 = 5370356;

	t84 = (x533==(x534*(x535-x536)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x541 = INT32_MIN;
	uint16_t x542 = 3U;
	uint8_t x543 = 2U;
	static volatile uint8_t x544 = UINT8_MAX;
	volatile int32_t t85 = -479;

	t85 = (x541==(x542*(x543-x544)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x557 = -1;
	uint16_t x559 = 25U;
	static int64_t x560 = INT64_MAX;
	volatile int32_t t86 = -16936579;

	t86 = (x557==(x558*(x559-x560)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x562 = -1;
	static int8_t x563 = -5;
	int16_t x564 = INT16_MIN;
	volatile int32_t t87 = 177273118;

	t87 = (x561==(x562*(x563-x564)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x569 = UINT32_MAX;
	int8_t x570 = -1;
	volatile uint32_t x571 = UINT32_MAX;
	int32_t x572 = -1;
	volatile int32_t t88 = 3878;

	t88 = (x569==(x570*(x571-x572)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x577 = INT64_MIN;
	int16_t x579 = INT16_MAX;
	int8_t x580 = 0;
	volatile int32_t t89 = 26148;

	t89 = (x577==(x578*(x579-x580)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x581 = 30U;
	volatile int16_t x582 = 1030;
	uint32_t x583 = 1U;
	int32_t x584 = -653;
	int32_t t90 = 892;

	t90 = (x581==(x582*(x583-x584)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x585 = 8;
	static int32_t x587 = -1;
	static int32_t t91 = -6432;

	t91 = (x585==(x586*(x587-x588)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x589 = -10946228760662941LL;
	uint32_t x590 = 64041U;
	int8_t x591 = 61;
	static int16_t x592 = INT16_MAX;

	t92 = (x589==(x590*(x591-x592)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x601 = UINT16_MAX;
	int32_t x603 = -1;
	static int32_t x604 = -1;
	volatile int32_t t93 = 285752074;

	t93 = (x601==(x602*(x603-x604)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x605 = 7U;
	uint8_t x606 = 3U;
	static int8_t x607 = -1;
	volatile int32_t t94 = -36062;

	t94 = (x605==(x606*(x607-x608)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x609 = INT32_MAX;
	static uint32_t x611 = 3192U;
	volatile uint16_t x612 = UINT16_MAX;
	static int32_t t95 = -101590508;

	t95 = (x609==(x610*(x611-x612)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x621 = 3195327381LL;
	int16_t x622 = -1;
	static volatile int32_t t96 = 248358989;

	t96 = (x621==(x622*(x623-x624)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x626 = 0U;
	volatile uint8_t x627 = 90U;

	t97 = (x625==(x626*(x627-x628)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x634 = 0U;
	int16_t x635 = INT16_MIN;
	uint8_t x636 = 127U;

	t98 = (x633==(x634*(x635-x636)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x637 = INT8_MAX;
	uint64_t x638 = UINT64_MAX;
	volatile int32_t x639 = -1;
	int64_t x640 = INT64_MIN;
	volatile int32_t t99 = 242;

	t99 = (x637==(x638*(x639-x640)));

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

