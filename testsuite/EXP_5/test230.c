#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
volatile int32_t t0 = 35641;
int8_t x7 = INT8_MIN;
static int32_t x12 = 1;
static volatile int32_t t2 = 195297834;
uint64_t x14 = 52LLU;
uint32_t x15 = UINT32_MAX;
int64_t x19 = 2562LL;
static uint32_t x30 = UINT32_MAX;
static volatile int32_t t6 = -390347;
static uint16_t x35 = UINT16_MAX;
int16_t x40 = 6101;
int64_t x42 = 98005286747612936LL;
uint8_t x44 = UINT8_MAX;
int8_t x55 = 33;
static int32_t x59 = INT32_MAX;
static int16_t x62 = -1;
int16_t x64 = 61;
int32_t t13 = -24451629;
volatile int64_t x83 = INT64_MIN;
static int8_t x84 = INT8_MIN;
int32_t t19 = 1584845;
volatile uint16_t x104 = 47U;
uint32_t x109 = UINT32_MAX;
int32_t t24 = 313984490;
int32_t x113 = -523471339;
int32_t x116 = INT32_MIN;
volatile int32_t t26 = 268;
volatile int32_t x125 = -110;
volatile uint8_t x126 = UINT8_MAX;
volatile uint64_t x128 = 4877236LLU;
int16_t x136 = 3267;
int64_t x142 = -570LL;
static int32_t x143 = 0;
int32_t t32 = 26802;
int64_t x150 = -1LL;
volatile int8_t x161 = -1;
int32_t t35 = 3224;
int32_t t36 = 636985;
uint16_t x175 = 10671U;
static int16_t x199 = -1;
volatile int32_t x200 = INT32_MIN;
int16_t x206 = 12789;
volatile int16_t x215 = INT16_MAX;
static int8_t x220 = INT8_MIN;
int32_t x225 = INT32_MIN;
int16_t x226 = -1;
int16_t x230 = INT16_MIN;
volatile int32_t t49 = 62413029;
uint8_t x238 = 1U;
int64_t x242 = -1LL;
volatile int32_t t51 = 52;
uint8_t x247 = 6U;
int64_t x251 = INT64_MIN;
int8_t x265 = 62;
int64_t x266 = -84426889384LL;
volatile int32_t t57 = 42244;
volatile int32_t x272 = INT32_MIN;
int32_t x282 = -562590;
volatile int32_t t63 = 5107;
static int16_t x303 = -1;
static int32_t t67 = -17;
static int8_t x334 = 28;
uint8_t x335 = 0U;
volatile int32_t t71 = -12778929;
int64_t x345 = INT64_MIN;
volatile uint64_t x346 = 1318303605795LLU;
static uint8_t x349 = 11U;
static int16_t x351 = -143;
int8_t x356 = INT8_MIN;
static uint32_t x363 = 8323U;
int16_t x364 = -1;
static int32_t x366 = INT32_MIN;
int16_t x372 = -1;
int64_t x378 = 649743887332350LL;
volatile int32_t t81 = -1;
uint64_t x385 = 2720329251363449LLU;
int16_t x398 = -1;
static volatile int32_t t85 = 2569;
volatile uint8_t x415 = 1U;
uint64_t x418 = UINT64_MAX;
int32_t t87 = 755;
volatile int32_t t88 = 3348904;
int64_t x435 = 549LL;
int16_t x438 = INT16_MIN;
int32_t x441 = INT32_MIN;
uint16_t x442 = 14U;
static uint16_t x447 = 1527U;
uint16_t x449 = UINT16_MAX;
int64_t x455 = INT64_MIN;
int32_t t97 = 15312072;
static uint32_t x465 = 15U;
volatile int64_t x468 = INT64_MIN;
volatile int32_t t99 = 12012;


void f0(void) {
	int16_t x1 = 182;
	volatile uint64_t x3 = UINT64_MAX;
	int64_t x4 = 13LL;

	t0 = (x1<((x2-x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = UINT64_MAX;
	static int8_t x6 = INT8_MIN;
	uint32_t x8 = 56922U;
	int32_t t1 = -29;

	t1 = (x5<((x6-x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int16_t x10 = INT16_MIN;
	static int8_t x11 = -1;

	t2 = (x9<((x10-x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 7;

	t3 = (x13<((x14-x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile uint16_t x18 = 0U;
	static uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -118;

	t4 = (x17<((x18-x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	volatile uint8_t x22 = 35U;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 1844320;

	t5 = (x21<((x22-x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	int32_t x32 = -1829;

	t6 = (x29<((x30-x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 4U;
	int64_t x34 = INT64_MAX;
	int64_t x36 = 1LL;
	int32_t t7 = 175953459;

	t7 = (x33<((x34-x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	int32_t t8 = -11696871;

	t8 = (x37<((x38-x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int32_t t9 = -63954;

	t9 = (x41<((x42-x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 14282U;
	uint8_t x50 = 6U;
	uint8_t x51 = 71U;
	uint32_t x52 = UINT32_MAX;
	int32_t t10 = 3267;

	t10 = (x49<((x50-x51)%x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -183437LL;
	int8_t x54 = INT8_MIN;
	uint16_t x56 = UINT16_MAX;
	int32_t t11 = -54907;

	t11 = (x53<((x54-x55)%x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 3247194290988LL;
	static volatile uint32_t x58 = 232U;
	uint16_t x60 = UINT16_MAX;
	static int32_t t12 = 9;

	t12 = (x57<((x58-x59)%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;

	t13 = (x61<((x62-x63)%x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 777U;
	static uint16_t x66 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = 4U;
	int32_t t14 = 6050152;

	t14 = (x65<((x66-x67)%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x69 = 192510U;
	uint32_t x70 = 1003079207U;
	volatile int8_t x71 = INT8_MIN;
	static int8_t x72 = 5;
	volatile int32_t t15 = 0;

	t15 = (x69<((x70-x71)%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 76787U;
	int8_t x74 = INT8_MAX;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = 6;
	static volatile int32_t t16 = -14169222;

	t16 = (x73<((x74-x75)%x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -33;
	volatile uint32_t x78 = UINT32_MAX;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t17 = -100796;

	t17 = (x77<((x78-x79)%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	int8_t x82 = -1;
	static volatile int32_t t18 = 28189592;

	t18 = (x81<((x82-x83)%x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 12344U;
	int32_t x86 = -20487628;
	uint16_t x87 = UINT16_MAX;
	static int64_t x88 = INT64_MAX;

	t19 = (x85<((x86-x87)%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 13LL;
	static volatile int64_t x90 = -2648776LL;
	volatile int8_t x91 = -1;
	int8_t x92 = INT8_MAX;
	static int32_t t20 = -137;

	t20 = (x89<((x90-x91)%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = UINT64_MAX;
	int8_t x98 = 13;
	volatile int8_t x99 = INT8_MAX;
	int32_t x100 = INT32_MAX;
	static int32_t t21 = 647690884;

	t21 = (x97<((x98-x99)%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x102 = INT8_MIN;
	static uint16_t x103 = 1651U;
	int32_t t22 = -2390;

	t22 = (x101<((x102-x103)%x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = -1;
	volatile uint8_t x106 = UINT8_MAX;
	static int16_t x107 = -1;
	int16_t x108 = -4;
	volatile int32_t t23 = 2630746;

	t23 = (x105<((x106-x107)%x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = -935;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 23U;

	t24 = (x109<((x110-x111)%x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = -1;
	volatile int32_t t25 = -1;

	t25 = (x113<((x114-x115)%x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x117 = 644U;
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 3783011998LLU;
	int64_t x120 = 20271628882416281LL;

	t26 = (x117<((x118-x119)%x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x127 = INT16_MIN;
	volatile int32_t t27 = 510954356;

	t27 = (x125<((x126-x127)%x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	int32_t x130 = 359;
	static volatile uint32_t x131 = 101516U;
	int16_t x132 = -1;
	int32_t t28 = 15931;

	t28 = (x129<((x130-x131)%x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = -1;
	int64_t x135 = INT64_MAX;
	static volatile int32_t t29 = 6212;

	t29 = (x133<((x134-x135)%x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = -6808;
	static volatile int8_t x140 = INT8_MIN;
	volatile int32_t t30 = 3593;

	t30 = (x137<((x138-x139)%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t31 = 0;

	t31 = (x141<((x142-x143)%x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	uint32_t x146 = 1246408U;
	uint16_t x147 = 0U;
	static int32_t x148 = -172;

	t32 = (x145<((x146-x147)%x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MAX;
	int8_t x151 = 1;
	volatile int16_t x152 = INT16_MIN;
	int32_t t33 = 176;

	t33 = (x149<((x150-x151)%x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	static volatile int32_t x160 = -1;
	volatile int32_t t34 = -5059;

	t34 = (x157<((x158-x159)%x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = -1;
	int64_t x163 = -56726533462365LL;
	uint8_t x164 = 10U;

	t35 = (x161<((x162-x163)%x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -171LL;
	static uint64_t x166 = UINT64_MAX;
	int8_t x167 = 47;
	volatile uint32_t x168 = 1299U;

	t36 = (x165<((x166-x167)%x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x173 = 36447;
	static int64_t x174 = -1LL;
	static int16_t x176 = INT16_MIN;
	static int32_t t37 = -3783155;

	t37 = (x173<((x174-x175)%x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = INT8_MIN;
	static uint64_t x178 = 83LLU;
	volatile uint16_t x179 = 34U;
	static uint32_t x180 = UINT32_MAX;
	volatile int32_t t38 = -942;

	t38 = (x177<((x178-x179)%x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = 6;
	int16_t x182 = INT16_MIN;
	int8_t x183 = 1;
	uint8_t x184 = UINT8_MAX;
	int32_t t39 = 0;

	t39 = (x181<((x182-x183)%x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	static uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 37505512LLU;
	volatile int32_t t40 = 33;

	t40 = (x185<((x186-x187)%x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x193 = 8219688919103663LLU;
	volatile int16_t x194 = -15166;
	volatile uint16_t x195 = 1722U;
	int64_t x196 = -42395313529127LL;
	int32_t t41 = -2882813;

	t41 = (x193<((x194-x195)%x196));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x197 = -7;
	uint32_t x198 = 821724U;
	volatile int32_t t42 = 2639068;

	t42 = (x197<((x198-x199)%x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = 1005361;
	uint32_t x207 = UINT32_MAX;
	static int8_t x208 = 12;
	static volatile int32_t t43 = 2;

	t43 = (x205<((x206-x207)%x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = 7;
	int16_t x210 = 83;
	int32_t x211 = 1;
	int16_t x212 = 10;
	volatile int32_t t44 = -14694;

	t44 = (x209<((x210-x211)%x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = 17001625926488LL;
	static volatile uint64_t x214 = 53105696613214LLU;
	int32_t x216 = INT32_MAX;
	volatile int32_t t45 = -931491;

	t45 = (x213<((x214-x215)%x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = 0;
	int64_t x218 = INT64_MIN;
	int32_t x219 = -1;
	volatile int32_t t46 = -89321599;

	t46 = (x217<((x218-x219)%x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = -1;
	int16_t x222 = 0;
	uint16_t x223 = 50U;
	static int64_t x224 = 6665479133LL;
	volatile int32_t t47 = 1055;

	t47 = (x221<((x222-x223)%x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 544LLU;
	volatile int32_t t48 = 38957;

	t48 = (x225<((x226-x227)%x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 24439U;
	static int16_t x231 = INT16_MAX;
	volatile int32_t x232 = 237;

	t49 = (x229<((x230-x231)%x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	volatile int64_t x239 = -14408256LL;
	int32_t x240 = INT32_MAX;
	int32_t t50 = 51408;

	t50 = (x237<((x238-x239)%x240));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	volatile int8_t x243 = -1;
	int64_t x244 = INT64_MIN;

	t51 = (x241<((x242-x243)%x244));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = INT8_MAX;
	static int32_t x246 = -6;
	static int16_t x248 = INT16_MAX;
	volatile int32_t t52 = 474839826;

	t52 = (x245<((x246-x247)%x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = 884070531426LLU;
	int16_t x250 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t53 = 699325;

	t53 = (x249<((x250-x251)%x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = 27315648U;
	int8_t x255 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	static int32_t t54 = 27459;

	t54 = (x253<((x254-x255)%x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x258 = 449U;
	int32_t x259 = INT32_MAX;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t55 = 1614;

	t55 = (x257<((x258-x259)%x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = 1353075259LLU;
	static int32_t x264 = INT32_MAX;
	int32_t t56 = 353679770;

	t56 = (x261<((x262-x263)%x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x267 = -14902;
	int16_t x268 = -1314;

	t57 = (x265<((x266-x267)%x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -7560782;
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = UINT32_MAX;
	int32_t t58 = 468;

	t58 = (x269<((x270-x271)%x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MIN;
	static uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 113604046LLU;
	volatile int32_t t59 = 4787;

	t59 = (x273<((x274-x275)%x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = INT8_MIN;
	static int64_t x278 = -74218823LL;
	int32_t x279 = 2944;
	int64_t x280 = INT64_MIN;
	int32_t t60 = 961;

	t60 = (x277<((x278-x279)%x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t61 = 58098;

	t61 = (x281<((x282-x283)%x284));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = 138074LLU;
	uint32_t x286 = UINT32_MAX;
	static uint32_t x287 = UINT32_MAX;
	int64_t x288 = -44LL;
	static volatile int32_t t62 = -3;

	t62 = (x285<((x286-x287)%x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MAX;
	static int16_t x294 = 258;
	int32_t x295 = -1;
	uint32_t x296 = 4505U;

	t63 = (x293<((x294-x295)%x296));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 50U;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t64 = -944;

	t64 = (x301<((x302-x303)%x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 102707129U;
	int8_t x306 = INT8_MIN;
	static volatile int8_t x307 = INT8_MIN;
	static int64_t x308 = 29380536394444LL;
	volatile int32_t t65 = -478788001;

	t65 = (x305<((x306-x307)%x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x313 = 62U;
	uint64_t x314 = 10963524485532705LLU;
	static int8_t x315 = 22;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t66 = -587374;

	t66 = (x313<((x314-x315)%x316));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x317 = 0;
	int8_t x318 = -1;
	int8_t x319 = 35;
	uint64_t x320 = 5404130LLU;

	t67 = (x317<((x318-x319)%x320));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = 1160442LL;
	volatile int8_t x322 = 8;
	int64_t x323 = -899102845672LL;
	static volatile int8_t x324 = INT8_MIN;
	int32_t t68 = 1;

	t68 = (x321<((x322-x323)%x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -1LL;
	uint8_t x330 = 1U;
	int32_t x331 = -15951;
	volatile int8_t x332 = INT8_MIN;
	static int32_t t69 = -2212;

	t69 = (x329<((x330-x331)%x332));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = 2984U;
	int32_t x336 = INT32_MIN;
	int32_t t70 = -117619;

	t70 = (x333<((x334-x335)%x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x337 = 15U;
	volatile uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 12U;
	uint8_t x340 = 4U;

	t71 = (x337<((x338-x339)%x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = INT64_MIN;
	static uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 7U;
	uint8_t x344 = UINT8_MAX;
	int32_t t72 = -3961;

	t72 = (x341<((x342-x343)%x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x347 = INT64_MAX;
	int32_t x348 = -1;
	static volatile int32_t t73 = 92;

	t73 = (x345<((x346-x347)%x348));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x350 = -1LL;
	uint64_t x352 = 246486808LLU;
	static volatile int32_t t74 = 363;

	t74 = (x349<((x350-x351)%x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 7U;
	volatile int64_t x354 = INT64_MAX;
	uint16_t x355 = 6U;
	volatile int32_t t75 = 64;

	t75 = (x353<((x354-x355)%x356));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = 127;
	static uint64_t x358 = 0LLU;
	volatile int16_t x359 = 19;
	int16_t x360 = INT16_MIN;
	int32_t t76 = -255262;

	t76 = (x357<((x358-x359)%x360));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = 698;
	int8_t x362 = INT8_MAX;
	int32_t t77 = -1;

	t77 = (x361<((x362-x363)%x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x367 = 56821816516LLU;
	volatile uint32_t x368 = 185639512U;
	static int32_t t78 = -920935;

	t78 = (x365<((x366-x367)%x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	int64_t x371 = -1LL;
	int32_t t79 = 1;

	t79 = (x369<((x370-x371)%x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x373 = INT64_MIN;
	static int64_t x374 = -1184781304360100LL;
	static uint8_t x375 = 46U;
	static volatile int32_t x376 = INT32_MIN;
	volatile int32_t t80 = -1066256;

	t80 = (x373<((x374-x375)%x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MAX;
	int16_t x379 = 48;
	int8_t x380 = -1;

	t81 = (x377<((x378-x379)%x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x386 = 23U;
	int16_t x387 = 53;
	int8_t x388 = INT8_MAX;
	int32_t t82 = 144;

	t82 = (x385<((x386-x387)%x388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x394 = 32U;
	int32_t x395 = -702504301;
	static volatile int8_t x396 = 51;
	static volatile int32_t t83 = 368626;

	t83 = (x393<((x394-x395)%x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x397 = UINT64_MAX;
	static volatile uint32_t x399 = 28761U;
	uint16_t x400 = 5922U;
	int32_t t84 = -7886013;

	t84 = (x397<((x398-x399)%x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x401 = INT32_MAX;
	int32_t x402 = -1;
	static volatile int16_t x403 = -1;
	int32_t x404 = INT32_MIN;

	t85 = (x401<((x402-x403)%x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = 363;
	int16_t x414 = INT16_MIN;
	int64_t x416 = INT64_MIN;
	static volatile int32_t t86 = 6111210;

	t86 = (x413<((x414-x415)%x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x417 = -1;
	int16_t x419 = -1;
	int8_t x420 = 24;

	t87 = (x417<((x418-x419)%x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x421 = -1LL;
	int32_t x422 = -1;
	static int16_t x423 = -26;
	int16_t x424 = INT16_MIN;

	t88 = (x421<((x422-x423)%x424));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	static int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t89 = -123;

	t89 = (x425<((x426-x427)%x428));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = 5;
	int16_t x431 = INT16_MIN;
	int8_t x432 = -49;
	volatile int32_t t90 = 3794;

	t90 = (x429<((x430-x431)%x432));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x433 = UINT16_MAX;
	int32_t x434 = INT32_MIN;
	int64_t x436 = 2040165255998LL;
	static int32_t t91 = 569;

	t91 = (x433<((x434-x435)%x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x437 = INT8_MIN;
	static volatile uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	int32_t t92 = 16257998;

	t92 = (x437<((x438-x439)%x440));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x443 = 20LLU;
	int32_t x444 = INT32_MIN;
	int32_t t93 = -43;

	t93 = (x441<((x442-x443)%x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x445 = INT16_MIN;
	uint32_t x446 = 63U;
	int32_t x448 = INT32_MAX;
	int32_t t94 = -3994;

	t94 = (x445<((x446-x447)%x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x450 = 152087LL;
	uint64_t x451 = 2LLU;
	volatile int16_t x452 = -1;
	int32_t t95 = 3;

	t95 = (x449<((x450-x451)%x452));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x453 = 3805U;
	volatile uint64_t x454 = UINT64_MAX;
	static uint32_t x456 = 29012U;
	static int32_t t96 = 0;

	t96 = (x453<((x454-x455)%x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x457 = -91;
	static uint16_t x458 = UINT16_MAX;
	static volatile int64_t x459 = 2413LL;
	static int64_t x460 = 56895945508LL;

	t97 = (x457<((x458-x459)%x460));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = 99U;
	static volatile int8_t x462 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	uint8_t x464 = 2U;
	int32_t t98 = 0;

	t98 = (x461<((x462-x463)%x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x466 = UINT8_MAX;
	volatile uint32_t x467 = UINT32_MAX;

	t99 = (x465<((x466-x467)%x468));

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

