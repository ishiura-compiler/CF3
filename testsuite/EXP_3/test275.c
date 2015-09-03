#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
uint32_t x19 = UINT32_MAX;
static volatile uint32_t t2 = 48854U;
uint64_t x24 = 167905995189653LLU;
int32_t t4 = 1;
uint8_t x35 = 122U;
uint8_t x37 = 62U;
static int32_t x39 = INT32_MIN;
int16_t x40 = -1300;
volatile uint64_t x43 = 3929501370247LLU;
volatile int8_t x44 = INT8_MIN;
int16_t x45 = INT16_MIN;
uint16_t x52 = UINT16_MAX;
static volatile int8_t x53 = 1;
int64_t t11 = -3952347932102258561LL;
volatile int8_t x62 = -1;
uint64_t t15 = 176355293598332082LLU;
uint8_t x80 = 1U;
uint8_t x87 = UINT8_MAX;
static int8_t x91 = -1;
uint64_t x92 = UINT64_MAX;
volatile uint64_t t19 = 23191LLU;
volatile int8_t x93 = 6;
int64_t x98 = INT64_MAX;
volatile int64_t t21 = 32LL;
int8_t x106 = INT8_MIN;
int8_t x108 = -1;
int32_t t22 = -4352383;
int8_t x109 = -1;
int32_t t24 = 30;
volatile int64_t t25 = 190LL;
volatile int64_t x126 = INT64_MIN;
int64_t x131 = -1LL;
volatile uint64_t x134 = 45415486330LLU;
volatile int32_t t28 = 884469;
int16_t x142 = INT16_MIN;
volatile int32_t t32 = 2;
int8_t x174 = INT8_MIN;
uint32_t x178 = 227826002U;
int32_t t37 = 110;
int16_t x182 = INT16_MAX;
int8_t x183 = INT8_MIN;
static int64_t x190 = INT64_MIN;
static volatile int32_t t40 = -1307;
int32_t x202 = 9722;
volatile int16_t x212 = 13;
volatile int32_t t43 = -399045003;
int16_t x213 = INT16_MAX;
uint32_t x215 = UINT32_MAX;
volatile uint32_t t46 = 9U;
int16_t x231 = -237;
volatile int64_t t47 = 0LL;
volatile int32_t t48 = -245;
int8_t x239 = -1;
int8_t x244 = INT8_MAX;
static int32_t x246 = -232;
int8_t x247 = INT8_MIN;
int32_t t51 = 10;
volatile int32_t t52 = 14;
volatile int64_t x267 = -956985LL;
int32_t x268 = -3;
uint8_t x269 = 11U;
uint64_t x272 = 313298172276365872LLU;
uint32_t x275 = 5U;
volatile int32_t t60 = 1;
int32_t t63 = 104903825;
volatile int32_t x299 = -1;
volatile int8_t x302 = -1;
volatile int32_t t65 = -16;
uint8_t x307 = 56U;
int32_t x316 = -92382;
int8_t x332 = -3;
int8_t x334 = INT8_MIN;
static uint8_t x335 = 17U;
int32_t t71 = 3952620;
int64_t x343 = -1LL;
volatile int16_t x346 = -3;
volatile int32_t x349 = INT32_MAX;
volatile int64_t x352 = 4395LL;
volatile uint64_t x355 = 1946194089314099932LLU;
int32_t x357 = INT32_MAX;
static uint8_t x360 = 0U;
volatile uint64_t x367 = 3802088696602835LLU;
uint64_t x373 = 2018LLU;
volatile int32_t x374 = -101481337;
uint32_t x380 = 775U;
int8_t x381 = 0;
uint32_t x382 = 427960176U;
uint8_t x383 = 0U;
volatile int64_t x384 = 245702603084LL;
int8_t x389 = 1;
uint64_t x391 = 7925LLU;
uint64_t t81 = 405742940LLU;
int32_t t82 = 3;
volatile uint32_t x398 = 0U;
int32_t t84 = 119464;
int64_t x418 = -5471745002999LL;
int8_t x423 = -1;
uint32_t t86 = 57U;
int8_t x432 = INT8_MIN;
int64_t x434 = 248077757827LL;
uint64_t t88 = 232321915542258LLU;
volatile int8_t x439 = INT8_MIN;
static uint32_t x440 = 22769097U;
int64_t x446 = INT64_MIN;
volatile int16_t x453 = INT16_MAX;
int32_t x463 = 1;
int8_t x465 = INT8_MIN;
int16_t x480 = -1;
uint64_t x481 = 10951LLU;
uint32_t x483 = 1U;


void f0(void) {
	int16_t x9 = -3;
	static int32_t x10 = -1;
	int8_t x11 = -7;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t0 = 107779453LLU;

	t0 = ((x9<x10)-(x11-x12));

	if (t0 != 7LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x14 = -1;
	static uint64_t x15 = 98LLU;
	uint8_t x16 = UINT8_MAX;
	volatile uint64_t t1 = 274742779458LLU;

	t1 = ((x13<x14)-(x15-x16));

	if (t1 != 158LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = 495990951096LL;
	int32_t x18 = 14;
	int32_t x20 = INT32_MAX;

	t2 = ((x17<x18)-(x19-x20));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 21U;
	volatile int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	volatile uint64_t t3 = 241LLU;

	t3 = ((x21<x22)-(x23-x24));

	if (t3 != 167905995222422LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	static volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MIN;
	static uint8_t x28 = 0U;

	t4 = ((x25<x26)-(x27-x28));

	if (t4 != 129) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x29 = 0;
	int64_t x30 = INT64_MAX;
	static volatile int16_t x31 = -1;
	static uint16_t x32 = UINT16_MAX;
	int32_t t5 = 902;

	t5 = ((x29<x30)-(x31-x32));

	if (t5 != 65537) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 5LLU;
	int64_t x34 = -3221043628721771LL;
	int8_t x36 = INT8_MAX;
	int32_t t6 = -1;

	t6 = ((x33<x34)-(x35-x36));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = 0LLU;
	int32_t t7 = 7771499;

	t7 = ((x37<x38)-(x39-x40));

	if (t7 != 2147482348) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	volatile uint64_t t8 = 346LLU;

	t8 = ((x41<x42)-(x43-x44));

	if (t8 != 18446740144208181242LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x46 = 254671807LLU;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -13;
	int64_t t9 = -93897336391047LL;

	t9 = ((x45<x46)-(x47-x48));

	if (t9 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 4474510LLU;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MAX;
	int64_t t10 = 2061998273LL;

	t10 = ((x49<x50)-(x51-x52));

	if (t10 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = INT64_MIN;
	int64_t x55 = 1042503692946570598LL;
	uint32_t x56 = 181931U;

	t11 = ((x53<x54)-(x55-x56));

	if (t11 != -1042503692946388667LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t12 = -121926;

	t12 = ((x61<x62)-(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	static volatile int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	uint16_t x68 = 15936U;
	int64_t t13 = -3LL;

	t13 = ((x65<x66)-(x67-x68));

	if (t13 != -9223372036854759870LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 5U;
	static int64_t x70 = INT64_MIN;
	uint8_t x71 = 3U;
	static int8_t x72 = -1;
	volatile int32_t t14 = -894009;

	t14 = ((x69<x70)-(x71-x72));

	if (t14 != -4) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static uint8_t x74 = 2U;
	uint64_t x75 = 8540085LLU;
	int64_t x76 = 2587583492635479LL;

	t15 = ((x73<x74)-(x75-x76));

	if (t15 != 2587583484095394LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = 1176U;
	int32_t x79 = -1459097;
	volatile int32_t t16 = -333923009;

	t16 = ((x77<x78)-(x79-x80));

	if (t16 != 1459099) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -3;
	volatile int64_t x84 = INT64_MIN;
	int64_t t17 = 124101LL;

	t17 = ((x81<x82)-(x83-x84));

	if (t17 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	int32_t x86 = -1;
	uint16_t x88 = 6958U;
	volatile int32_t t18 = -399895;

	t18 = ((x85<x86)-(x87-x88));

	if (t18 != 6703) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = 80U;

	t19 = ((x89<x90)-(x91-x92));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = INT8_MIN;
	volatile int8_t x95 = INT8_MAX;
	int64_t x96 = -430972387158203LL;
	volatile int64_t t20 = -1227135LL;

	t20 = ((x93<x94)-(x95-x96));

	if (t20 != -430972387158330LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x97 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;

	t21 = ((x97<x98)-(x99-x100));

	if (t21 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = 13U;
	static uint8_t x107 = 0U;

	t22 = ((x105<x106)-(x107-x108));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = INT8_MIN;
	static int32_t x111 = INT32_MAX;
	int16_t x112 = 451;
	volatile int32_t t23 = -51;

	t23 = ((x109<x110)-(x111-x112));

	if (t23 != -2147483196) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x117 = 487104478;
	int32_t x118 = INT32_MAX;
	int8_t x119 = -1;
	uint16_t x120 = 6516U;

	t24 = ((x117<x118)-(x119-x120));

	if (t24 != 6518) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MAX;
	int32_t x122 = 360;
	int64_t x123 = -7544697355513676LL;
	int64_t x124 = INT64_MIN;

	t25 = ((x121<x122)-(x123-x124));

	if (t25 != -9215827339499262132LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 43U;
	uint32_t x127 = 14363804U;
	int32_t x128 = -1;
	uint32_t t26 = 1U;

	t26 = ((x125<x126)-(x127-x128));

	if (t26 != 4280603491U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = INT32_MAX;
	int32_t x130 = -1;
	static int16_t x132 = -1;
	static int64_t t27 = 21642LL;

	t27 = ((x129<x130)-(x131-x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x133 = UINT32_MAX;
	static volatile int16_t x135 = 0;
	uint8_t x136 = 7U;

	t28 = ((x133<x134)-(x135-x136));

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 10U;
	volatile uint16_t x138 = UINT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	volatile int8_t x140 = INT8_MIN;
	volatile uint32_t t29 = 218369671U;

	t29 = ((x137<x138)-(x139-x140));

	if (t29 != 4294967170U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 1U;
	static uint32_t x143 = 3U;
	int32_t x144 = INT32_MIN;
	volatile uint32_t t30 = 108U;

	t30 = ((x141<x142)-(x143-x144));

	if (t30 != 2147483645U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -160782458LL;
	int64_t x146 = INT64_MAX;
	static volatile int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t31 = -21;

	t31 = ((x145<x146)-(x147-x148));

	if (t31 != 32641) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = 0;
	static uint8_t x150 = 0U;
	volatile int16_t x151 = INT16_MAX;
	static uint8_t x152 = 1U;

	t32 = ((x149<x150)-(x151-x152));

	if (t32 != -32766) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -23383;
	volatile int32_t x154 = -1;
	static volatile uint8_t x155 = UINT8_MAX;
	int8_t x156 = 58;
	int32_t t33 = 0;

	t33 = ((x153<x154)-(x155-x156));

	if (t33 != -196) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 1315LLU;
	int8_t x164 = -1;
	static volatile uint64_t t34 = 1571291693545LLU;

	t34 = ((x161<x162)-(x163-x164));

	if (t34 != 18446744073709550300LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	static uint64_t x166 = UINT64_MAX;
	volatile int8_t x167 = INT8_MIN;
	static uint64_t x168 = 1125719507207133LLU;
	volatile uint64_t t35 = 2388LLU;

	t35 = ((x165<x166)-(x167-x168));

	if (t35 != 1125719507207262LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 1U;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -1LL;
	volatile int64_t t36 = 0LL;

	t36 = ((x173<x174)-(x175-x176));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -85;
	int8_t x179 = -1;
	int8_t x180 = INT8_MIN;

	t37 = ((x177<x178)-(x179-x180));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = 1796U;
	static uint32_t x184 = 9U;
	volatile uint32_t t38 = 6192U;

	t38 = ((x181<x182)-(x183-x184));

	if (t38 != 138U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 300U;
	int8_t x186 = -4;
	static uint16_t x187 = 8433U;
	int16_t x188 = INT16_MIN;
	int32_t t39 = -1073;

	t39 = ((x185<x186)-(x187-x188));

	if (t39 != -41200) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	static int8_t x191 = INT8_MAX;
	uint8_t x192 = 53U;

	t40 = ((x189<x190)-(x191-x192));

	if (t40 != -74) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x201 = 117U;
	volatile uint32_t x203 = 1029056202U;
	static volatile uint8_t x204 = 1U;
	volatile uint32_t t41 = 1576554214U;

	t41 = ((x201<x202)-(x203-x204));

	if (t41 != 3265911096U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 251337U;
	uint16_t x206 = 12262U;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MAX;
	int32_t t42 = -6;

	t42 = ((x205<x206)-(x207-x208));

	if (t42 != 32512) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = INT16_MIN;
	volatile uint8_t x210 = 74U;
	static volatile int8_t x211 = INT8_MAX;

	t43 = ((x209<x210)-(x211-x212));

	if (t43 != -113) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x214 = 28988U;
	uint16_t x216 = 193U;
	uint32_t t44 = 249137U;

	t44 = ((x213<x214)-(x215-x216));

	if (t44 != 194U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 35011014LLU;
	static uint32_t x219 = UINT32_MAX;
	int32_t x220 = -1;
	uint32_t t45 = 2U;

	t45 = ((x217<x218)-(x219-x220));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 130900LLU;
	int8_t x222 = INT8_MIN;
	volatile int8_t x223 = -1;
	uint32_t x224 = 1U;

	t46 = ((x221<x222)-(x223-x224));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x229 = 7480176U;
	uint32_t x230 = 8U;
	int64_t x232 = -32195LL;

	t47 = ((x229<x230)-(x231-x232));

	if (t47 != -31958LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 0U;
	static int16_t x235 = 6;
	volatile int8_t x236 = -1;

	t48 = ((x233<x234)-(x235-x236));

	if (t48 != -7) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x237 = -6593;
	uint16_t x238 = 25565U;
	uint64_t x240 = 32724780121LLU;
	volatile uint64_t t49 = 528940355088450299LLU;

	t49 = ((x237<x238)-(x239-x240));

	if (t49 != 32724780123LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x241 = 8235U;
	int8_t x242 = -1;
	volatile int8_t x243 = 5;
	volatile int32_t t50 = 2028;

	t50 = ((x241<x242)-(x243-x244));

	if (t50 != 123) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = 1115U;
	int8_t x248 = -1;

	t51 = ((x245<x246)-(x247-x248));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x249 = -1LL;
	uint32_t x250 = 6920464U;
	int32_t x251 = -1;
	static int16_t x252 = INT16_MIN;

	t52 = ((x249<x250)-(x251-x252));

	if (t52 != -32766) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = -1716;
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	int64_t x256 = -7563500296134885LL;
	int64_t t53 = 121414105153214056LL;

	t53 = ((x253<x254)-(x255-x256));

	if (t53 != -7563498148651236LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x257 = INT8_MAX;
	volatile uint32_t x258 = 2520705U;
	volatile uint32_t x259 = 1045155286U;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t54 = 25LLU;

	t54 = ((x257<x258)-(x259-x260));

	if (t54 != 18446744072664396330LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = 10;
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = 1629544U;
	int64_t x264 = -25783379657LL;
	volatile int64_t t55 = 1LL;

	t55 = ((x261<x262)-(x263-x264));

	if (t55 != -25785009201LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = -202151169199LL;
	uint32_t x266 = UINT32_MAX;
	int64_t t56 = 233808039186586LL;

	t56 = ((x265<x266)-(x267-x268));

	if (t56 != 956983LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = -124;
	static volatile uint64_t t57 = 187766009929LLU;

	t57 = ((x269<x270)-(x271-x272));

	if (t57 != 313298172276365997LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -1806;
	int64_t x274 = -98986935584785011LL;
	static volatile int64_t x276 = 8535LL;
	int64_t t58 = 1024326LL;

	t58 = ((x273<x274)-(x275-x276));

	if (t58 != 8530LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	uint32_t x278 = UINT32_MAX;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = 0;
	volatile int32_t t59 = -4325;

	t59 = ((x277<x278)-(x279-x280));

	if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x281 = UINT64_MAX;
	static int16_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = -1;

	t60 = ((x281<x282)-(x283-x284));

	if (t60 != -65536) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = -1LL;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	static volatile int64_t x288 = 2873855LL;
	volatile int64_t t61 = -6892112513098679LL;

	t61 = ((x285<x286)-(x287-x288));

	if (t61 != 2906623LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = 3;
	static uint16_t x290 = 3U;
	static volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t62 = 81LLU;

	t62 = ((x289<x290)-(x291-x292));

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 2416U;

	t63 = ((x293<x294)-(x295-x296));

	if (t63 != -2147481231) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	volatile int64_t x300 = -1LL;
	int64_t t64 = 486LL;

	t64 = ((x297<x298)-(x299-x300));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x301 = -10;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MAX;

	t65 = ((x301<x302)-(x303-x304));

	if (t65 != 32513) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = -11;
	volatile int32_t x306 = INT32_MIN;
	static uint16_t x308 = 1220U;
	volatile int32_t t66 = 256925675;

	t66 = ((x305<x306)-(x307-x308));

	if (t66 != 1164) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = 41;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = INT32_MIN;
	int32_t t67 = 458;

	t67 = ((x313<x314)-(x315-x316));

	if (t67 != 2147391267) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -1;
	int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MIN;
	volatile int16_t x324 = 0;
	int32_t t68 = 889824;

	t68 = ((x321<x322)-(x323-x324));

	if (t68 != 32769) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x325 = -1;
	int16_t x326 = INT16_MAX;
	static volatile int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t69 = 882LL;

	t69 = ((x325<x326)-(x327-x328));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = -1;
	int32_t t70 = 1565;

	t70 = ((x329<x330)-(x331-x332));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MIN;
	int8_t x336 = -6;

	t71 = ((x333<x334)-(x335-x336));

	if (t71 != -22) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -1LL;
	uint16_t x342 = 445U;
	static int32_t x344 = -34;
	static int64_t t72 = 16761769843LL;

	t72 = ((x341<x342)-(x343-x344));

	if (t72 != -32LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MAX;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MAX;
	static uint64_t t73 = 45729201120597045LLU;

	t73 = ((x345<x346)-(x347-x348));

	if (t73 != 128LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x350 = 1527423689172LLU;
	uint8_t x351 = 127U;
	static int64_t t74 = 6629LL;

	t74 = ((x349<x350)-(x351-x352));

	if (t74 != 4269LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = -1;
	static uint8_t x356 = UINT8_MAX;
	volatile uint64_t t75 = 854363LLU;

	t75 = ((x353<x354)-(x355-x356));

	if (t75 != 16500549984395451939LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x358 = 77LL;
	int8_t x359 = INT8_MIN;
	int32_t t76 = 96557642;

	t76 = ((x357<x358)-(x359-x360));

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x365 = -1;
	uint32_t x366 = 11424U;
	volatile uint8_t x368 = 4U;
	static uint64_t t77 = 112675895350LLU;

	t77 = ((x365<x366)-(x367-x368));

	if (t77 != 18442941985012948785LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x375 = INT8_MIN;
	uint8_t x376 = 10U;
	int32_t t78 = -1;

	t78 = ((x373<x374)-(x375-x376));

	if (t78 != 139) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x377 = INT64_MIN;
	int16_t x378 = 13826;
	uint64_t x379 = UINT64_MAX;
	static uint64_t t79 = 200LLU;

	t79 = ((x377<x378)-(x379-x380));

	if (t79 != 777LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t t80 = 174LL;

	t80 = ((x381<x382)-(x383-x384));

	if (t80 != 245702603085LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x390 = INT16_MIN;
	uint16_t x392 = 7648U;

	t81 = ((x389<x390)-(x391-x392));

	if (t81 != 18446744073709551339LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MAX;
	static uint16_t x395 = 6U;
	int16_t x396 = INT16_MAX;

	t82 = ((x393<x394)-(x395-x396));

	if (t82 != 32761) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = 1LL;
	static int16_t x399 = -1;
	int8_t x400 = INT8_MIN;
	volatile int32_t t83 = 1;

	t83 = ((x397<x398)-(x399-x400));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MAX;
	volatile int32_t x406 = 14420;
	static int16_t x407 = INT16_MIN;
	uint8_t x408 = 1U;

	t84 = ((x405<x406)-(x407-x408));

	if (t84 != 32769) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x417 = -1;
	int16_t x419 = -386;
	int32_t x420 = -33069915;
	volatile int32_t t85 = 7228032;

	t85 = ((x417<x418)-(x419-x420));

	if (t85 != -33069529) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = UINT64_MAX;
	uint32_t x424 = 59794U;

	t86 = ((x421<x422)-(x423-x424));

	if (t86 != 59796U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x429 = -1;
	volatile int32_t x430 = INT32_MIN;
	volatile int8_t x431 = INT8_MAX;
	static volatile int32_t t87 = 0;

	t87 = ((x429<x430)-(x431-x432));

	if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = 1;
	static volatile uint8_t x435 = UINT8_MAX;
	uint64_t x436 = 348LLU;

	t88 = ((x433<x434)-(x435-x436));

	if (t88 != 94LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x437 = INT16_MIN;
	uint32_t x438 = 75157U;
	uint32_t t89 = 130764U;

	t89 = ((x437<x438)-(x439-x440));

	if (t89 != 22769225U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x445 = 811;
	int8_t x447 = -13;
	volatile uint64_t x448 = UINT64_MAX;
	volatile uint64_t t90 = 145739LLU;

	t90 = ((x445<x446)-(x447-x448));

	if (t90 != 12LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = -1;
	static volatile int32_t x450 = -78745;
	volatile int32_t x451 = -1;
	static int8_t x452 = -4;
	int32_t t91 = 130084;

	t91 = ((x449<x450)-(x451-x452));

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x454 = UINT64_MAX;
	static int16_t x455 = 183;
	static int64_t x456 = INT64_MAX;
	volatile int64_t t92 = 146546284LL;

	t92 = ((x453<x454)-(x455-x456));

	if (t92 != 9223372036854775625LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x457 = 2U;
	static uint64_t x458 = UINT64_MAX;
	uint64_t x459 = UINT64_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile uint64_t t93 = 51763440LLU;

	t93 = ((x457<x458)-(x459-x460));

	if (t93 != 257LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x461 = INT8_MIN;
	volatile int32_t x462 = INT32_MIN;
	uint64_t x464 = UINT64_MAX;
	static uint64_t t94 = 118532154323293441LLU;

	t94 = ((x461<x462)-(x463-x464));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x466 = -1645;
	int8_t x467 = INT8_MIN;
	uint32_t x468 = 11U;
	static uint32_t t95 = 14U;

	t95 = ((x465<x466)-(x467-x468));

	if (t95 != 139U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x469 = 734666028LL;
	volatile int64_t x470 = -1LL;
	volatile uint16_t x471 = UINT16_MAX;
	int8_t x472 = 1;
	volatile int32_t t96 = 22;

	t96 = ((x469<x470)-(x471-x472));

	if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x473 = UINT64_MAX;
	int8_t x474 = INT8_MIN;
	uint8_t x475 = 52U;
	int8_t x476 = 0;
	int32_t t97 = 0;

	t97 = ((x473<x474)-(x475-x476));

	if (t97 != -52) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = 59;
	uint16_t x478 = 21U;
	uint32_t x479 = 751U;
	uint32_t t98 = 99296469U;

	t98 = ((x477<x478)-(x479-x480));

	if (t98 != 4294966544U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x482 = -1;
	int16_t x484 = INT16_MIN;
	static volatile uint32_t t99 = 55581092U;

	t99 = ((x481<x482)-(x483-x484));

	if (t99 != 4294934528U) { NG(); } else { ; }
	
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

