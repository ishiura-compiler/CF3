#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
volatile int32_t t1 = 1492;
int8_t x13 = INT8_MAX;
volatile int32_t t5 = 15623;
volatile int8_t x29 = INT8_MAX;
static volatile int32_t x32 = INT32_MIN;
int64_t x39 = -1LL;
int64_t x44 = INT64_MAX;
int64_t x45 = INT64_MAX;
int64_t x46 = -735229487LL;
int16_t x47 = INT16_MIN;
volatile int64_t x48 = 1LL;
int8_t x58 = -1;
volatile uint32_t x59 = UINT32_MAX;
volatile int32_t t13 = -496634302;
uint64_t x77 = 12642534914034031LLU;
volatile int32_t t16 = -3;
int8_t x85 = INT8_MAX;
static int32_t t17 = -233;
volatile int32_t t18 = 400279;
volatile int64_t x99 = 25159891020083LL;
static int8_t x101 = INT8_MAX;
static volatile uint32_t x103 = UINT32_MAX;
static int32_t t21 = 240857214;
uint64_t x109 = 94747115348LLU;
int64_t x117 = 0LL;
int32_t x125 = -1;
int8_t x127 = INT8_MIN;
static int16_t x130 = -6;
int64_t x142 = -280869233839758LL;
uint64_t x147 = 121649LLU;
volatile int32_t t33 = -27722190;
uint8_t x160 = 26U;
static int64_t x161 = INT64_MAX;
uint16_t x162 = 3U;
static int8_t x169 = INT8_MIN;
static volatile int64_t x180 = INT64_MIN;
volatile uint32_t x182 = 586548U;
volatile uint32_t x184 = 4U;
static int16_t x188 = INT16_MAX;
volatile int32_t t42 = -9942;
int64_t x194 = INT64_MAX;
int16_t x195 = INT16_MAX;
static volatile uint8_t x196 = 123U;
int32_t x197 = INT32_MAX;
int8_t x200 = 3;
uint64_t x203 = 22359882700LLU;
uint16_t x205 = 19665U;
uint64_t x209 = UINT64_MAX;
static volatile int32_t x210 = INT32_MIN;
volatile int32_t x213 = INT32_MIN;
int32_t x216 = 202535;
uint64_t x222 = 34LLU;
uint64_t x224 = UINT64_MAX;
static int32_t x225 = INT32_MAX;
static int64_t x237 = -1LL;
volatile uint16_t x240 = UINT16_MAX;
static int32_t x244 = 0;
volatile int32_t t55 = 107;
volatile int16_t x247 = 27;
int32_t x253 = -1;
uint32_t x256 = 130196530U;
uint16_t x259 = UINT16_MAX;
int32_t t58 = -165;
int32_t t59 = -4819255;
uint32_t x267 = 8792308U;
static int64_t x268 = -1LL;
volatile int16_t x269 = INT16_MIN;
volatile uint32_t x277 = UINT32_MAX;
static volatile uint8_t x279 = UINT8_MAX;
volatile uint8_t x293 = UINT8_MAX;
volatile int16_t x295 = -1818;
volatile uint16_t x298 = 601U;
int32_t x303 = INT32_MIN;
static int32_t x305 = 0;
static int16_t x324 = -4820;
static int8_t x326 = 42;
static uint32_t x327 = 190733U;
int64_t x328 = INT64_MIN;
int8_t x329 = -1;
volatile uint32_t x331 = UINT32_MAX;
int32_t t75 = 624;
volatile int16_t x341 = INT16_MIN;
static uint8_t x343 = 0U;
int32_t t77 = -4598;
int8_t x359 = INT8_MAX;
static int16_t x362 = -1;
int16_t x363 = INT16_MAX;
int64_t x368 = INT64_MAX;
volatile int8_t x369 = -1;
int8_t x373 = 3;
volatile int32_t t84 = 1369;
static int64_t x390 = 29693LL;
int8_t x392 = INT8_MIN;
int16_t x406 = INT16_MAX;
static volatile uint8_t x412 = 16U;
volatile int32_t t92 = 29;
static uint8_t x413 = 113U;
int64_t x423 = -912676588767093287LL;
int8_t x424 = -3;
static int64_t x439 = INT64_MIN;
int32_t x441 = INT32_MIN;
volatile int32_t t99 = 220876;


void f0(void) {
	uint32_t x1 = 32256U;
	volatile int8_t x3 = 1;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -979624;

	t0 = ((x1<=(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int8_t x6 = -53;
	static int32_t x7 = INT32_MIN;
	static int8_t x8 = -45;

	t1 = ((x5<=(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = -1LL;
	uint32_t x15 = 2U;
	int64_t x16 = INT64_MIN;
	volatile int32_t t2 = 247;

	t2 = ((x13<=(x14-x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	int16_t x18 = -8;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = INT32_MAX;
	volatile int32_t t3 = 11;

	t3 = ((x17<=(x18-x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	static volatile int32_t x23 = 291;
	int16_t x24 = -1;
	int32_t t4 = 670542;

	t4 = ((x21<=(x22-x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = UINT16_MAX;
	volatile int32_t x28 = INT32_MIN;

	t5 = ((x25<=(x26-x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x30 = INT16_MAX;
	static int64_t x31 = INT64_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x29<=(x30-x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x37 = 40U;
	int32_t x38 = INT32_MIN;
	static uint32_t x40 = UINT32_MAX;
	int32_t t7 = -1;

	t7 = ((x37<=(x38-x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MAX;
	volatile int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	static volatile int32_t t8 = -28964;

	t8 = ((x41<=(x42-x43))==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t t9 = 612;

	t9 = ((x45<=(x46-x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 1516063387LLU;
	volatile uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MIN;
	volatile int32_t t10 = 39;

	t10 = ((x49<=(x50-x51))==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	static uint16_t x55 = 1U;
	uint32_t x56 = 491000U;
	volatile int32_t t11 = 1036;

	t11 = ((x53<=(x54-x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 3173;
	static int16_t x60 = INT16_MIN;
	int32_t t12 = -9559234;

	t12 = ((x57<=(x58-x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	volatile uint32_t x64 = 529970639U;

	t13 = ((x61<=(x62-x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = -1;
	uint8_t x67 = 103U;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t14 = 66002602;

	t14 = ((x65<=(x66-x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = INT32_MAX;
	static volatile int32_t t15 = -21308;

	t15 = ((x69<=(x70-x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	volatile int64_t x80 = 392021707972797850LL;

	t16 = ((x77<=(x78-x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 7U;
	volatile int16_t x87 = 1;
	static uint64_t x88 = 14719792203LLU;

	t17 = ((x85<=(x86-x87))==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = 0;
	volatile int8_t x90 = INT8_MIN;
	uint8_t x91 = 10U;
	int64_t x92 = -1LL;

	t18 = ((x89<=(x90-x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = 277;
	int32_t x94 = INT32_MIN;
	static int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MIN;
	int32_t t19 = 1062053387;

	t19 = ((x93<=(x94-x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = 83;
	int32_t x98 = -514849;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t20 = -4557815;

	t20 = ((x97<=(x98-x99))==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x102 = -1LL;
	static int64_t x104 = INT64_MAX;

	t21 = ((x101<=(x102-x103))==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 324U;
	static int16_t x106 = INT16_MIN;
	static volatile int64_t x107 = INT64_MIN;
	int16_t x108 = -97;
	volatile int32_t t22 = 472737839;

	t22 = ((x105<=(x106-x107))==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x110 = 3070671196211919LLU;
	uint8_t x111 = 3U;
	static int8_t x112 = INT8_MIN;
	int32_t t23 = 1763269;

	t23 = ((x109<=(x110-x111))==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 146536LL;
	int8_t x114 = INT8_MAX;
	int32_t x115 = -1;
	volatile int8_t x116 = INT8_MAX;
	volatile int32_t t24 = -5854897;

	t24 = ((x113<=(x114-x115))==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = -1;
	uint16_t x119 = 233U;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t25 = 352178;

	t25 = ((x117<=(x118-x119))==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x121 = 2U;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	volatile uint32_t x124 = UINT32_MAX;
	volatile int32_t t26 = -120768;

	t26 = ((x121<=(x122-x123))==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x126 = 3U;
	volatile int32_t x128 = INT32_MAX;
	static volatile int32_t t27 = 23290;

	t27 = ((x125<=(x126-x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -87;
	volatile int32_t t28 = -249220;

	t28 = ((x129<=(x130-x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 65U;
	static int8_t x134 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = -1;
	static volatile int32_t t29 = -158020;

	t29 = ((x133<=(x134-x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	uint32_t x138 = 3U;
	int16_t x139 = INT16_MIN;
	static uint8_t x140 = UINT8_MAX;
	int32_t t30 = -126687;

	t30 = ((x137<=(x138-x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MAX;
	static int32_t x143 = -221623;
	static int32_t x144 = -9669;
	volatile int32_t t31 = -2618;

	t31 = ((x141<=(x142-x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 4;
	volatile int8_t x146 = -1;
	uint32_t x148 = 485802193U;
	volatile int32_t t32 = 12950547;

	t32 = ((x145<=(x146-x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 54033599915LL;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MAX;
	static int32_t x152 = INT32_MAX;

	t33 = ((x149<=(x150-x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = UINT32_MAX;
	uint16_t x158 = 51U;
	volatile int16_t x159 = INT16_MAX;
	int32_t t34 = -8298292;

	t34 = ((x157<=(x158-x159))==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 457U;
	static int32_t t35 = 494;

	t35 = ((x161<=(x162-x163))==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 7;
	volatile int32_t x166 = INT32_MIN;
	volatile int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;
	volatile int32_t t36 = -36269;

	t36 = ((x165<=(x166-x167))==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x170 = INT8_MAX;
	uint8_t x171 = 8U;
	volatile int64_t x172 = 23548LL;
	volatile int32_t t37 = -1757621;

	t37 = ((x169<=(x170-x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = INT32_MIN;
	static int64_t x174 = -874312LL;
	uint8_t x175 = 0U;
	int16_t x176 = INT16_MIN;
	static int32_t t38 = -2499456;

	t38 = ((x173<=(x174-x175))==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = 9605U;
	static int16_t x179 = INT16_MAX;
	int32_t t39 = -44;

	t39 = ((x177<=(x178-x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x181 = UINT32_MAX;
	static int8_t x183 = 1;
	volatile int32_t t40 = 45;

	t40 = ((x181<=(x182-x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x185 = 1837102925484LL;
	static volatile int32_t x186 = -1;
	static volatile int32_t x187 = INT32_MAX;
	static int32_t t41 = 535;

	t41 = ((x185<=(x186-x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 7U;
	int32_t x190 = INT32_MIN;
	static int64_t x191 = INT64_MIN;
	volatile int64_t x192 = -1LL;

	t42 = ((x189<=(x190-x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int32_t t43 = 22;

	t43 = ((x193<=(x194-x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x198 = -15;
	static int16_t x199 = INT16_MIN;
	volatile int32_t t44 = 27;

	t44 = ((x197<=(x198-x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = -8769065LL;
	static int32_t x202 = 697;
	int64_t x204 = -1LL;
	int32_t t45 = -2610;

	t45 = ((x201<=(x202-x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x206 = 21111LLU;
	int16_t x207 = -1;
	int64_t x208 = -15469LL;
	static int32_t t46 = 42;

	t46 = ((x205<=(x206-x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x211 = INT8_MIN;
	static uint16_t x212 = 499U;
	static int32_t t47 = -4;

	t47 = ((x209<=(x210-x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = INT16_MAX;
	int32_t x215 = -5500419;
	static volatile int32_t t48 = 247171200;

	t48 = ((x213<=(x214-x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 4001LLU;
	static int32_t x218 = -1;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 233834LLU;
	static volatile int32_t t49 = -77568;

	t49 = ((x217<=(x218-x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x221 = 76U;
	int32_t x223 = INT32_MAX;
	int32_t t50 = -128221;

	t50 = ((x221<=(x222-x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x226 = INT16_MIN;
	static volatile int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	static int32_t t51 = -5323;

	t51 = ((x225<=(x226-x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	int32_t t52 = -510;

	t52 = ((x229<=(x230-x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = 1387U;
	int32_t x234 = INT32_MAX;
	volatile int64_t x235 = 83769307855027424LL;
	int32_t x236 = INT32_MIN;
	int32_t t53 = -7991;

	t53 = ((x233<=(x234-x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x238 = INT8_MIN;
	static int32_t x239 = INT32_MIN;
	volatile int32_t t54 = -22;

	t54 = ((x237<=(x238-x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = -47;
	int32_t x243 = INT32_MIN;

	t55 = ((x241<=(x242-x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = -1381LL;
	uint8_t x248 = 4U;
	int32_t t56 = -1;

	t56 = ((x245<=(x246-x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x254 = 16620592U;
	uint64_t x255 = 184139138792176371LLU;
	int32_t t57 = 13726502;

	t57 = ((x253<=(x254-x255))==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MAX;
	volatile uint64_t x258 = 3352602257LLU;
	volatile uint16_t x260 = 599U;

	t58 = ((x257<=(x258-x259))==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x261 = 29003376U;
	int8_t x262 = 10;
	volatile int16_t x263 = 2222;
	uint64_t x264 = 14270598601LLU;

	t59 = ((x261<=(x262-x263))==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x265 = 12U;
	int8_t x266 = INT8_MAX;
	volatile int32_t t60 = -1355;

	t60 = ((x265<=(x266-x267))==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x270 = INT64_MIN;
	int32_t x271 = -12890;
	uint64_t x272 = 11026LLU;
	volatile int32_t t61 = -91;

	t61 = ((x269<=(x270-x271))==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x278 = INT16_MAX;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t62 = 37487;

	t62 = ((x277<=(x278-x279))==x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x281 = INT64_MIN;
	int8_t x282 = 23;
	static volatile int8_t x283 = 0;
	int16_t x284 = 3;
	static int32_t t63 = -230611;

	t63 = ((x281<=(x282-x283))==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 1U;
	uint16_t x290 = UINT16_MAX;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t64 = -1;

	t64 = ((x289<=(x290-x291))==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x294 = 9U;
	int16_t x296 = -1;
	int32_t t65 = -137;

	t65 = ((x293<=(x294-x295))==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x297 = -1LL;
	static int32_t x299 = -1;
	volatile int16_t x300 = INT16_MAX;
	int32_t t66 = -78;

	t66 = ((x297<=(x298-x299))==x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int16_t x302 = -1;
	static uint16_t x304 = 6U;
	volatile int32_t t67 = 2821;

	t67 = ((x301<=(x302-x303))==x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x306 = -1;
	int64_t x307 = -1LL;
	int8_t x308 = 3;
	int32_t t68 = -22591872;

	t68 = ((x305<=(x306-x307))==x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	uint8_t x310 = 1U;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t69 = -2;

	t69 = ((x309<=(x310-x311))==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x313 = 1;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 6449LLU;
	uint64_t x316 = UINT64_MAX;
	static int32_t t70 = 2022493;

	t70 = ((x313<=(x314-x315))==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MIN;
	volatile int32_t x319 = -732325;
	static int32_t x320 = INT32_MIN;
	static int32_t t71 = 26287;

	t71 = ((x317<=(x318-x319))==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = 124LL;
	volatile int64_t x323 = INT64_MAX;
	int32_t t72 = 98;

	t72 = ((x321<=(x322-x323))==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = INT64_MAX;
	volatile int32_t t73 = -1473984;

	t73 = ((x325<=(x326-x327))==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x330 = INT32_MIN;
	uint8_t x332 = 45U;
	volatile int32_t t74 = 14432290;

	t74 = ((x329<=(x330-x331))==x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x333 = 480588LLU;
	static int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 3U;

	t75 = ((x333<=(x334-x335))==x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = -1;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = UINT16_MAX;
	int32_t t76 = 323352347;

	t76 = ((x337<=(x338-x339))==x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x342 = -177;
	uint8_t x344 = 2U;

	t77 = ((x341<=(x342-x343))==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x349 = -1LL;
	int16_t x350 = INT16_MAX;
	int16_t x351 = -1;
	uint16_t x352 = 2U;
	static volatile int32_t t78 = -552677730;

	t78 = ((x349<=(x350-x351))==x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = 1;
	int64_t x354 = 8898LL;
	uint64_t x355 = 12LLU;
	int32_t x356 = INT32_MIN;
	int32_t t79 = -11109898;

	t79 = ((x353<=(x354-x355))==x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x357 = 65U;
	int8_t x358 = INT8_MIN;
	uint8_t x360 = 31U;
	volatile int32_t t80 = 15213689;

	t80 = ((x357<=(x358-x359))==x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x361 = 12768516587383LLU;
	uint16_t x364 = 0U;
	int32_t t81 = -2355;

	t81 = ((x361<=(x362-x363))==x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 542U;
	int64_t x367 = 647008057670718519LL;
	volatile int32_t t82 = 3280491;

	t82 = ((x365<=(x366-x367))==x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x370 = INT8_MIN;
	int16_t x371 = -1;
	int32_t x372 = -30894142;
	volatile int32_t t83 = -1;

	t83 = ((x369<=(x370-x371))==x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x374 = -4845141;
	int64_t x375 = 1699976LL;
	volatile uint16_t x376 = UINT16_MAX;

	t84 = ((x373<=(x374-x375))==x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = -10;
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = -1;
	volatile int32_t t85 = 139867779;

	t85 = ((x381<=(x382-x383))==x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x385 = 0;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	volatile int32_t t86 = 354163128;

	t86 = ((x385<=(x386-x387))==x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	int64_t x391 = 1394866191LL;
	volatile int32_t t87 = -58135494;

	t87 = ((x389<=(x390-x391))==x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = -1LL;
	static uint8_t x395 = 12U;
	volatile int8_t x396 = 16;
	volatile int32_t t88 = -683829836;

	t88 = ((x393<=(x394-x395))==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = 126255345LL;
	int16_t x398 = -1;
	uint32_t x399 = 6117U;
	volatile int64_t x400 = -1LL;
	volatile int32_t t89 = 0;

	t89 = ((x397<=(x398-x399))==x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x401 = 56232188U;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = 7747870LL;
	static volatile uint8_t x404 = 6U;
	int32_t t90 = -38898758;

	t90 = ((x401<=(x402-x403))==x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = 975662;
	int8_t x407 = -7;
	static int16_t x408 = INT16_MAX;
	int32_t t91 = -46;

	t91 = ((x405<=(x406-x407))==x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x409 = UINT32_MAX;
	volatile uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MAX;

	t92 = ((x409<=(x410-x411))==x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x414 = 4U;
	int16_t x415 = -59;
	uint32_t x416 = 744U;
	volatile int32_t t93 = 853342034;

	t93 = ((x413<=(x414-x415))==x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x417 = INT8_MAX;
	int16_t x418 = 967;
	volatile int16_t x419 = INT16_MIN;
	int32_t x420 = -1;
	static int32_t t94 = 172;

	t94 = ((x417<=(x418-x419))==x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MIN;
	volatile int32_t t95 = -28498;

	t95 = ((x421<=(x422-x423))==x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x425 = 0LL;
	static int8_t x426 = 2;
	int16_t x427 = INT16_MAX;
	uint64_t x428 = UINT64_MAX;
	int32_t t96 = -9;

	t96 = ((x425<=(x426-x427))==x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MAX;
	static volatile int32_t x431 = INT32_MAX;
	int8_t x432 = -1;
	volatile int32_t t97 = 225;

	t97 = ((x429<=(x430-x431))==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = 59218LLU;
	int16_t x438 = -1;
	uint32_t x440 = UINT32_MAX;
	static int32_t t98 = 120576524;

	t98 = ((x437<=(x438-x439))==x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x442 = UINT32_MAX;
	volatile int16_t x443 = -1;
	uint16_t x444 = UINT16_MAX;

	t99 = ((x441<=(x442-x443))==x444);

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

