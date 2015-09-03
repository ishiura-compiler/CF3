#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 43U;
uint8_t x22 = 45U;
int8_t x25 = INT8_MIN;
uint64_t x29 = 892LLU;
int8_t x32 = 0;
int32_t t6 = -86;
static int32_t x38 = -1;
int64_t x46 = INT64_MIN;
uint64_t x49 = 485027891128607LLU;
uint64_t x59 = UINT64_MAX;
static uint8_t x62 = 0U;
volatile int32_t t14 = -77;
volatile int64_t x72 = INT64_MAX;
static int32_t t15 = 9801883;
volatile int32_t x80 = INT32_MIN;
uint16_t x86 = UINT16_MAX;
uint64_t x88 = 174931319864859LLU;
int8_t x91 = INT8_MIN;
volatile int32_t t20 = 396185853;
uint64_t x94 = 932202868LLU;
static int8_t x96 = -1;
int32_t x105 = -63469261;
static int32_t x106 = INT32_MIN;
volatile int32_t t24 = 11;
int64_t x130 = INT64_MAX;
volatile int8_t x141 = 1;
int8_t x146 = INT8_MAX;
int16_t x147 = -6;
int16_t x152 = -1;
uint16_t x156 = 9U;
int64_t x158 = 759314986606LL;
volatile int32_t t35 = -105024;
int8_t x171 = INT8_MIN;
volatile int32_t t38 = -106071;
int8_t x177 = INT8_MIN;
static uint64_t x180 = 21679366562977LLU;
int32_t x193 = -38610446;
static int32_t x194 = -1;
volatile int32_t t44 = -101;
static volatile int64_t x201 = INT64_MAX;
static uint16_t x202 = UINT16_MAX;
static volatile int32_t x205 = INT32_MIN;
volatile int8_t x207 = 14;
uint32_t x210 = 222501816U;
uint32_t x214 = UINT32_MAX;
volatile int8_t x216 = INT8_MIN;
int32_t t48 = 16;
int32_t x228 = INT32_MIN;
int64_t x229 = -1LL;
int8_t x235 = -1;
uint16_t x241 = 854U;
uint16_t x246 = UINT16_MAX;
int16_t x247 = INT16_MAX;
int32_t x275 = INT32_MAX;
uint64_t x276 = 1LLU;
int8_t x283 = INT8_MIN;
int16_t x287 = INT16_MIN;
static int8_t x289 = INT8_MIN;
uint32_t x303 = 1U;
static volatile int64_t x305 = -46273402669566LL;
int32_t t64 = -6;
uint16_t x310 = 0U;
uint16_t x314 = UINT16_MAX;
int64_t x316 = -1LL;
uint8_t x323 = 7U;
static volatile int16_t x326 = 36;
uint16_t x331 = 7U;
int8_t x332 = 4;
uint8_t x342 = 72U;
int16_t x343 = -78;
static uint16_t x344 = 438U;
int32_t x348 = -1107710;
volatile uint32_t x350 = 94140940U;
int16_t x353 = 281;
int16_t x358 = INT16_MIN;
int64_t x360 = 287077846090821234LL;
volatile int64_t x362 = INT64_MIN;
volatile uint32_t x366 = 105936036U;
volatile int32_t x368 = INT32_MIN;
int8_t x372 = INT8_MIN;
uint64_t x375 = UINT64_MAX;
int8_t x376 = INT8_MAX;
uint64_t x378 = 13055617703LLU;
int16_t x385 = INT16_MIN;
int8_t x386 = -2;
int64_t x393 = INT64_MIN;
uint8_t x403 = 88U;
int8_t x404 = 1;
int16_t x406 = INT16_MIN;
volatile int32_t t88 = -928616;
uint8_t x409 = UINT8_MAX;
volatile int64_t x410 = -1LL;
static int8_t x412 = -1;
uint64_t x416 = 50998934LLU;
int32_t t90 = 83;
int32_t x421 = -1;
volatile int16_t x422 = -1;
static int32_t x426 = INT32_MIN;
int16_t x427 = INT16_MAX;
int32_t t95 = 7817209;
int32_t t97 = -432;
int8_t x446 = 4;
uint32_t x448 = 2049U;
volatile int32_t t99 = 5434;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint8_t x2 = 103U;
	static uint8_t x4 = 20U;
	int32_t t0 = 175;

	t0 = (((x1<x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	static uint64_t x6 = 392377LLU;
	uint32_t x7 = UINT32_MAX;
	static uint32_t x8 = UINT32_MAX;
	int32_t t1 = 368930;

	t1 = (((x5<x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 1005;

	t2 = (((x9<x10)-x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 6U;
	int16_t x23 = 3;
	int8_t x24 = INT8_MIN;
	volatile int32_t t3 = -3693;

	t3 = (((x21<x22)-x23)<=x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 851U;
	uint64_t x28 = 1894LLU;
	static volatile int32_t t4 = 41650062;

	t4 = (((x25<x26)-x27)<=x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = 221532427U;
	volatile uint16_t x31 = UINT16_MAX;
	int32_t t5 = 728557;

	t5 = (((x29<x30)-x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 773LLU;
	int32_t x34 = -58;
	int16_t x35 = INT16_MAX;
	int8_t x36 = -1;

	t6 = (((x33<x34)-x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x37 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t7 = 0;

	t7 = (((x37<x38)-x39)<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	int32_t x42 = INT32_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	static int16_t x44 = INT16_MAX;
	int32_t t8 = -2083959;

	t8 = (((x41<x42)-x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = 2911U;
	uint8_t x47 = UINT8_MAX;
	volatile int16_t x48 = -1;
	volatile int32_t t9 = 0;

	t9 = (((x45<x46)-x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = 258U;
	int8_t x51 = INT8_MAX;
	volatile int8_t x52 = -2;
	int32_t t10 = -153088179;

	t10 = (((x49<x50)-x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t11 = -737136;

	t11 = (((x53<x54)-x55)<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	volatile int32_t t12 = 0;

	t12 = (((x57<x58)-x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 51U;
	volatile uint64_t x63 = UINT64_MAX;
	volatile int8_t x64 = INT8_MIN;
	static int32_t t13 = 98;

	t13 = (((x61<x62)-x63)<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 2047U;
	volatile int16_t x66 = INT16_MAX;
	int64_t x67 = -92889843369LL;
	int64_t x68 = INT64_MIN;

	t14 = (((x65<x66)-x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = INT64_MAX;
	uint32_t x70 = 5666U;
	int16_t x71 = INT16_MIN;

	t15 = (((x69<x70)-x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	int16_t x76 = 6;
	int32_t t16 = 521930717;

	t16 = (((x73<x74)-x75)<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -50887024035206943LL;
	static int8_t x78 = -51;
	int32_t x79 = 793111897;
	int32_t t17 = -46696;

	t17 = (((x77<x78)-x79)<=x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = -1;
	volatile int64_t x82 = 23LL;
	static volatile int64_t x83 = -135359231669008LL;
	volatile int8_t x84 = INT8_MAX;
	int32_t t18 = -302;

	t18 = (((x81<x82)-x83)<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -126176649LL;
	volatile int64_t x87 = -1LL;
	int32_t t19 = 57716;

	t19 = (((x85<x86)-x87)<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	int64_t x92 = -1LL;

	t20 = (((x89<x90)-x91)<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1443046;
	int32_t x95 = 5567100;
	volatile int32_t t21 = 18963665;

	t21 = (((x93<x94)-x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 42U;
	static int64_t x102 = -13700418626776LL;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = -1;
	int32_t t22 = 362641;

	t22 = (((x101<x102)-x103)<=x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x107 = 4U;
	int8_t x108 = -1;
	static volatile int32_t t23 = -4;

	t23 = (((x105<x106)-x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -35611LL;
	static int64_t x110 = INT64_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	static uint16_t x112 = UINT16_MAX;

	t24 = (((x109<x110)-x111)<=x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	uint16_t x114 = 2834U;
	static int16_t x115 = -6867;
	volatile int16_t x116 = INT16_MIN;
	int32_t t25 = 6178;

	t25 = (((x113<x114)-x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -1;
	int16_t x118 = -1501;
	uint16_t x119 = 85U;
	static int16_t x120 = INT16_MAX;
	int32_t t26 = 573289;

	t26 = (((x117<x118)-x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = -8;
	uint64_t x124 = 114813085735646592LLU;
	volatile int32_t t27 = -118;

	t27 = (((x121<x122)-x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = -1LL;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	uint32_t x128 = 86U;
	volatile int32_t t28 = 1975;

	t28 = (((x125<x126)-x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = -1;
	int16_t x131 = INT16_MIN;
	int32_t x132 = 320701584;
	int32_t t29 = -3;

	t29 = (((x129<x130)-x131)<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MIN;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MAX;
	volatile uint8_t x136 = UINT8_MAX;
	int32_t t30 = -61176243;

	t30 = (((x133<x134)-x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	static int32_t t31 = 117390606;

	t31 = (((x141<x142)-x143)<=x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = 62LL;
	static volatile uint64_t x148 = 465614315539639519LLU;
	int32_t t32 = -3290;

	t32 = (((x145<x146)-x147)<=x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = -27;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int32_t t33 = -15870452;

	t33 = (((x149<x150)-x151)<=x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = -2788;
	static volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	static volatile int32_t t34 = -9091;

	t34 = (((x153<x154)-x155)<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = INT16_MAX;
	volatile int16_t x159 = -1;
	int8_t x160 = 1;

	t35 = (((x157<x158)-x159)<=x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t36 = -12;

	t36 = (((x161<x162)-x163)<=x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	uint32_t x167 = 212237201U;
	static int32_t x168 = INT32_MAX;
	static volatile int32_t t37 = -217;

	t37 = (((x165<x166)-x167)<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = INT32_MIN;
	uint32_t x170 = UINT32_MAX;
	static int32_t x172 = INT32_MAX;

	t38 = (((x169<x170)-x171)<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile int8_t x174 = 18;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 0U;
	int32_t t39 = 837;

	t39 = (((x173<x174)-x175)<=x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x178 = 1U;
	volatile int16_t x179 = -743;
	static volatile int32_t t40 = 957;

	t40 = (((x177<x178)-x179)<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 1041018U;
	static uint32_t x182 = 3697948U;
	uint8_t x183 = 0U;
	int8_t x184 = -27;
	volatile int32_t t41 = 35;

	t41 = (((x181<x182)-x183)<=x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 3675800U;
	int8_t x186 = -5;
	static int64_t x187 = -1LL;
	static int64_t x188 = INT64_MAX;
	int32_t t42 = 233281209;

	t42 = (((x185<x186)-x187)<=x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = INT8_MAX;
	uint8_t x190 = 20U;
	int16_t x191 = INT16_MAX;
	static int64_t x192 = -23LL;
	static int32_t t43 = -171048;

	t43 = (((x189<x190)-x191)<=x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x195 = 3685873111567905580LL;
	static uint64_t x196 = 3155028LLU;

	t44 = (((x193<x194)-x195)<=x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x203 = INT32_MAX;
	uint16_t x204 = 13890U;
	int32_t t45 = 1;

	t45 = (((x201<x202)-x203)<=x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x206 = UINT32_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t46 = 1527568;

	t46 = (((x205<x206)-x207)<=x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -1;
	volatile int16_t x211 = 155;
	int16_t x212 = INT16_MAX;
	int32_t t47 = 12879858;

	t47 = (((x209<x210)-x211)<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = -1;
	int16_t x215 = INT16_MAX;

	t48 = (((x213<x214)-x215)<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x221 = INT8_MIN;
	uint64_t x222 = 98284154221136368LLU;
	volatile uint32_t x223 = 50445143U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t49 = -138610;

	t49 = (((x221<x222)-x223)<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 77U;
	int8_t x226 = -7;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t50 = 106838;

	t50 = (((x225<x226)-x227)<=x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x230 = 99U;
	volatile int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	volatile int32_t t51 = 29304098;

	t51 = (((x229<x230)-x231)<=x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x233 = 1703;
	int32_t x234 = INT32_MIN;
	volatile uint64_t x236 = 42LLU;
	int32_t t52 = 54863;

	t52 = (((x233<x234)-x235)<=x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = -17436757240563LL;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = -1;
	volatile int32_t t53 = -1;

	t53 = (((x237<x238)-x239)<=x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x242 = UINT16_MAX;
	int64_t x243 = 61553972498879787LL;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t54 = 167572;

	t54 = (((x241<x242)-x243)<=x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	int32_t t55 = 770038193;

	t55 = (((x245<x246)-x247)<=x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 168LLU;
	uint32_t x266 = 2964U;
	int16_t x267 = 11;
	int16_t x268 = INT16_MIN;
	static int32_t t56 = 258;

	t56 = (((x265<x266)-x267)<=x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	volatile int32_t t57 = -361704;

	t57 = (((x273<x274)-x275)<=x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x277 = 5;
	static int16_t x278 = INT16_MIN;
	uint16_t x279 = 5625U;
	static volatile uint64_t x280 = 1747436LLU;
	volatile int32_t t58 = -304;

	t58 = (((x277<x278)-x279)<=x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = -8068;
	int8_t x284 = -1;
	int32_t t59 = -4658324;

	t59 = (((x281<x282)-x283)<=x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x285 = -1;
	int64_t x286 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t60 = -4210122;

	t60 = (((x285<x286)-x287)<=x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x290 = UINT32_MAX;
	int16_t x291 = -15;
	int32_t x292 = INT32_MAX;
	int32_t t61 = 10930;

	t61 = (((x289<x290)-x291)<=x292);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = -1LL;
	static volatile int64_t x298 = -1LL;
	int16_t x299 = 0;
	int16_t x300 = -1;
	volatile int32_t t62 = 1;

	t62 = (((x297<x298)-x299)<=x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x301 = INT16_MIN;
	volatile int32_t x302 = INT32_MAX;
	int64_t x304 = -1LL;
	volatile int32_t t63 = 13017;

	t63 = (((x301<x302)-x303)<=x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x306 = INT32_MIN;
	uint8_t x307 = 41U;
	int64_t x308 = INT64_MIN;

	t64 = (((x305<x306)-x307)<=x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = INT32_MIN;
	static int16_t x311 = -1;
	uint8_t x312 = 33U;
	volatile int32_t t65 = -13440795;

	t65 = (((x309<x310)-x311)<=x312);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = 1;
	volatile int32_t x315 = -63899943;
	volatile int32_t t66 = -235;

	t66 = (((x313<x314)-x315)<=x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x321 = 70U;
	int64_t x322 = 49275709318LL;
	uint8_t x324 = 29U;
	int32_t t67 = -13574;

	t67 = (((x321<x322)-x323)<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = INT64_MIN;
	int32_t x327 = 1783539;
	volatile int32_t x328 = 2028;
	int32_t t68 = 16;

	t68 = (((x325<x326)-x327)<=x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = -1;
	uint8_t x330 = 3U;
	volatile int32_t t69 = -417518;

	t69 = (((x329<x330)-x331)<=x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = -1;
	int32_t x334 = -79304;
	volatile int32_t x335 = -42;
	static int8_t x336 = INT8_MAX;
	static volatile int32_t t70 = 638644;

	t70 = (((x333<x334)-x335)<=x336);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	uint64_t x340 = 155LLU;
	volatile int32_t t71 = 3736;

	t71 = (((x337<x338)-x339)<=x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 446385LLU;
	int32_t t72 = -1;

	t72 = (((x341<x342)-x343)<=x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = 293LL;
	int32_t x347 = 2024928;
	int32_t t73 = -17;

	t73 = (((x345<x346)-x347)<=x348);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = -12;
	int64_t x351 = -1LL;
	static int64_t x352 = -1547LL;
	volatile int32_t t74 = 1940;

	t74 = (((x349<x350)-x351)<=x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x354 = INT64_MIN;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = 24;
	int32_t t75 = 313;

	t75 = (((x353<x354)-x355)<=x356);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x357 = INT32_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int32_t t76 = -3;

	t76 = (((x357<x358)-x359)<=x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t77 = 6835;

	t77 = (((x361<x362)-x363)<=x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = 120U;
	volatile int16_t x367 = INT16_MIN;
	volatile int32_t t78 = 62217;

	t78 = (((x365<x366)-x367)<=x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = 916;
	static uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = -1;
	static int32_t t79 = 95299;

	t79 = (((x369<x370)-x371)<=x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	static int32_t t80 = -905068257;

	t80 = (((x373<x374)-x375)<=x376);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = INT16_MIN;
	volatile uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 2U;
	int32_t t81 = 422445250;

	t81 = (((x377<x378)-x379)<=x380);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MAX;
	volatile int32_t x383 = -1;
	int64_t x384 = INT64_MAX;
	static volatile int32_t t82 = -15009340;

	t82 = (((x381<x382)-x383)<=x384);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x387 = INT16_MIN;
	static uint8_t x388 = 0U;
	volatile int32_t t83 = 2986;

	t83 = (((x385<x386)-x387)<=x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x389 = 915184390755LLU;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 1LL;
	uint16_t x392 = 54U;
	int32_t t84 = 603;

	t84 = (((x389<x390)-x391)<=x392);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x394 = 946086U;
	int16_t x395 = -60;
	static volatile uint16_t x396 = 6U;
	static volatile int32_t t85 = 2;

	t85 = (((x393<x394)-x395)<=x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x397 = 1925142LLU;
	static int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = 398165695U;
	volatile uint8_t x400 = 5U;
	volatile int32_t t86 = -7372781;

	t86 = (((x397<x398)-x399)<=x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = -1;
	volatile int32_t t87 = -9027630;

	t87 = (((x401<x402)-x403)<=x404);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint32_t x407 = 1191915U;
	static int16_t x408 = INT16_MIN;

	t88 = (((x405<x406)-x407)<=x408);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x411 = 13940;
	static volatile int32_t t89 = -1119221;

	t89 = (((x409<x410)-x411)<=x412);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x413 = INT64_MAX;
	uint64_t x414 = 1902306370000LLU;
	int8_t x415 = 1;

	t90 = (((x413<x414)-x415)<=x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x417 = 66U;
	uint8_t x418 = UINT8_MAX;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = INT8_MIN;
	static int32_t t91 = -958;

	t91 = (((x417<x418)-x419)<=x420);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x423 = 15;
	int64_t x424 = INT64_MIN;
	volatile int32_t t92 = -459015;

	t92 = (((x421<x422)-x423)<=x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -1;
	uint64_t x428 = UINT64_MAX;
	static volatile int32_t t93 = -1583;

	t93 = (((x425<x426)-x427)<=x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x429 = UINT8_MAX;
	volatile int32_t x430 = 190;
	int32_t x431 = -1;
	int64_t x432 = -615210LL;
	int32_t t94 = 27749;

	t94 = (((x429<x430)-x431)<=x432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x433 = INT32_MIN;
	static volatile int8_t x434 = 2;
	static volatile int32_t x435 = -2312455;
	volatile int8_t x436 = INT8_MIN;

	t95 = (((x433<x434)-x435)<=x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = 4007;
	static int8_t x438 = INT8_MAX;
	int64_t x439 = 336852577746261LL;
	static int16_t x440 = -1;
	volatile int32_t t96 = -76224480;

	t96 = (((x437<x438)-x439)<=x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MIN;
	static uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	int64_t x444 = -90732164903905LL;

	t97 = (((x441<x442)-x443)<=x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = INT16_MIN;
	static int64_t x447 = -4912325739LL;
	volatile int32_t t98 = -37557498;

	t98 = (((x445<x446)-x447)<=x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MIN;
	uint16_t x450 = 14509U;
	int32_t x451 = -1;
	int32_t x452 = 191188114;

	t99 = (((x449<x450)-x451)<=x452);

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

