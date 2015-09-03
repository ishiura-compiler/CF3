#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = INT8_MIN;
static int64_t x7 = -7312444877783231LL;
volatile int8_t x12 = INT8_MAX;
volatile int32_t t1 = -1;
int16_t x20 = INT16_MAX;
static int64_t x21 = INT64_MIN;
int64_t x25 = INT64_MIN;
uint32_t x30 = 9563U;
int64_t x39 = INT64_MIN;
static int16_t x40 = 1452;
int64_t t8 = -407960193493342246LL;
uint32_t x54 = 2U;
int8_t x57 = -1;
int64_t x60 = INT64_MIN;
int64_t t12 = 38621LL;
int16_t x67 = -1;
uint32_t x70 = UINT32_MAX;
static int8_t x73 = -1;
uint32_t x79 = 2137007523U;
volatile int16_t x82 = 14091;
static int32_t x84 = -38;
uint64_t x89 = 5771143206386307306LLU;
volatile int8_t x99 = -7;
int32_t x104 = 184;
volatile int32_t t22 = 670611857;
static int32_t x105 = INT32_MIN;
int32_t x106 = INT32_MIN;
uint32_t x123 = UINT32_MAX;
uint8_t x126 = 5U;
volatile int16_t x129 = -3981;
int64_t x131 = INT64_MAX;
uint32_t x145 = UINT32_MAX;
static uint16_t x151 = 17495U;
static volatile int32_t x157 = -1;
uint32_t x167 = UINT32_MAX;
static volatile int8_t x172 = INT8_MAX;
uint16_t x183 = 3114U;
int64_t x185 = -1LL;
uint32_t t41 = 3U;
int64_t x196 = 0LL;
static int32_t x198 = INT32_MAX;
uint64_t x205 = 4131301532443400LLU;
int8_t x206 = -1;
volatile uint16_t x207 = UINT16_MAX;
int64_t x210 = INT64_MIN;
volatile int32_t x217 = -1;
static int32_t x218 = INT32_MIN;
static int8_t x219 = -17;
uint8_t x222 = 76U;
volatile uint16_t x230 = UINT16_MAX;
uint16_t x238 = 17U;
static uint8_t x240 = UINT8_MAX;
int64_t t52 = 21LL;
static int32_t x247 = 12;
volatile int32_t x256 = INT32_MAX;
volatile uint32_t t56 = 31452921U;
int32_t x265 = -1;
uint8_t x267 = 47U;
int8_t x268 = -1;
uint32_t x275 = 1U;
int16_t x284 = INT16_MAX;
int64_t x295 = INT64_MIN;
int64_t x304 = INT64_MIN;
volatile int64_t t66 = 3878977805198427LL;
int64_t x313 = INT64_MAX;
volatile uint8_t x318 = 15U;
uint16_t x323 = 5179U;
uint32_t x325 = 707241967U;
int64_t x326 = 63900280002646364LL;
int32_t t72 = 114;
volatile int8_t x331 = -1;
volatile int32_t t73 = -1885;
int32_t x337 = 0;
uint32_t x351 = UINT32_MAX;
int64_t x352 = -1LL;
int64_t x354 = 9LL;
int32_t x359 = 344;
static uint8_t x365 = 11U;
volatile uint16_t x370 = 13U;
int8_t x371 = 0;
static uint8_t x372 = UINT8_MAX;
uint8_t x376 = UINT8_MAX;
uint32_t t85 = 387500U;
uint64_t x387 = 1952112954369466LLU;
int16_t x388 = INT16_MAX;
int8_t x398 = 1;
int32_t x403 = INT32_MIN;
static uint8_t x412 = UINT8_MAX;
volatile int8_t x419 = INT8_MAX;
static int32_t x422 = -13011998;
int64_t x430 = INT64_MAX;
volatile int8_t x440 = INT8_MIN;


void f0(void) {
	volatile int32_t x6 = -1;
	int16_t x8 = INT16_MIN;
	int64_t t0 = 2297752753LL;

	t0 = (((x5<x6)|x7)+x8);

	if (t0 != -7312444877815999LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 1738955LLU;
	int32_t x10 = 0;
	int8_t x11 = INT8_MIN;

	t1 = (((x9<x10)|x11)+x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MAX;
	volatile int16_t x16 = -1;
	static int64_t t2 = 780930LL;

	t2 = (((x13<x14)|x15)+x16);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	volatile int16_t x18 = 8156;
	uint16_t x19 = 14U;
	volatile int32_t t3 = 2;

	t3 = (((x17<x18)|x19)+x20);

	if (t3 != 32781) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 8;

	t4 = (((x21<x22)|x23)+x24);

	if (t4 != -32895) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	uint64_t x27 = 1124622LLU;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t5 = 14463385471557458LLU;

	t5 = (((x25<x26)|x27)+x28);

	if (t5 != 2148608270LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 1581LLU;
	uint32_t x31 = 615676706U;
	int8_t x32 = -1;
	volatile uint32_t t6 = 0U;

	t6 = (((x29<x30)|x31)+x32);

	if (t6 != 615676706U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = 8891;
	static uint16_t x35 = 13622U;
	uint16_t x36 = 2201U;
	int32_t t7 = 1087;

	t7 = (((x33<x34)|x35)+x36);

	if (t7 != 15823) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	static int32_t x38 = -1;

	t8 = (((x37<x38)|x39)+x40);

	if (t8 != -9223372036854774356LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 1U;
	volatile int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	int16_t x44 = 1213;
	volatile int64_t t9 = 169779006LL;

	t9 = (((x41<x42)|x43)+x44);

	if (t9 != 1212LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 1372640778304LL;
	static uint8_t x46 = 10U;
	int32_t x47 = -1;
	uint16_t x48 = 5U;
	volatile int32_t t10 = 5727546;

	t10 = (((x45<x46)|x47)+x48);

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x55 = INT16_MIN;
	static volatile int8_t x56 = -2;
	int32_t t11 = -1296989;

	t11 = (((x53<x54)|x55)+x56);

	if (t11 != -32770) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 753U;

	t12 = (((x57<x58)|x59)+x60);

	if (t12 != -9223372036854775055LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 129U;
	volatile uint32_t x66 = UINT32_MAX;
	uint64_t x68 = 54333576340LLU;
	volatile uint64_t t13 = 2166559267649LLU;

	t13 = (((x65<x66)|x67)+x68);

	if (t13 != 54333576339LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -65;
	static volatile uint32_t x71 = UINT32_MAX;
	volatile int32_t x72 = INT32_MAX;
	uint32_t t14 = 13937U;

	t14 = (((x69<x70)|x71)+x72);

	if (t14 != 2147483646U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x74 = 7259293LL;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t15 = 42544418;

	t15 = (((x73<x74)|x75)+x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 8037LLU;
	int64_t x78 = -706208562LL;
	static uint32_t x80 = 80349299U;
	volatile uint32_t t16 = 12578278U;

	t16 = (((x77<x78)|x79)+x80);

	if (t16 != 2217356822U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x83 = UINT64_MAX;
	uint64_t t17 = 241409LLU;

	t17 = (((x81<x82)|x83)+x84);

	if (t17 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int8_t x87 = -1;
	int8_t x88 = INT8_MIN;
	volatile int32_t t18 = 501894974;

	t18 = (((x85<x86)|x87)+x88);

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x90 = -1;
	volatile uint8_t x91 = 5U;
	uint64_t x92 = 2053481134855865LLU;
	static volatile uint64_t t19 = 5508252623336LLU;

	t19 = (((x89<x90)|x91)+x92);

	if (t19 != 2053481134855870LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MAX;
	uint32_t x94 = 3724U;
	volatile int32_t x95 = -1;
	int16_t x96 = -2425;
	int32_t t20 = 2506246;

	t20 = (((x93<x94)|x95)+x96);

	if (t20 != -2426) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MAX;
	uint32_t x98 = 7U;
	int8_t x100 = -1;
	int32_t t21 = 0;

	t21 = (((x97<x98)|x99)+x100);

	if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = -54;
	static int16_t x102 = 1;
	volatile int8_t x103 = INT8_MAX;

	t22 = (((x101<x102)|x103)+x104);

	if (t22 != 311) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x107 = 1199U;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t23 = 3;

	t23 = (((x105<x106)|x107)+x108);

	if (t23 != 66734) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = -33938;
	uint16_t x111 = 22U;
	int16_t x112 = 91;
	volatile int32_t t24 = -315624;

	t24 = (((x109<x110)|x111)+x112);

	if (t24 != 113) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	volatile int64_t x114 = INT64_MAX;
	uint32_t x115 = 2U;
	volatile int32_t x116 = INT32_MIN;
	uint32_t t25 = 3U;

	t25 = (((x113<x114)|x115)+x116);

	if (t25 != 2147483651U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = UINT32_MAX;
	static int32_t x120 = -26;
	uint32_t t26 = 974346681U;

	t26 = (((x117<x118)|x119)+x120);

	if (t26 != 4294967269U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	static volatile int8_t x124 = INT8_MAX;
	uint32_t t27 = 61739313U;

	t27 = (((x121<x122)|x123)+x124);

	if (t27 != 126U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 36LLU;
	int16_t x127 = -1;
	volatile int64_t x128 = -21799LL;
	volatile int64_t t28 = 2099719046820815309LL;

	t28 = (((x125<x126)|x127)+x128);

	if (t28 != -21800LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = -91LL;
	int16_t x132 = INT16_MIN;
	static volatile int64_t t29 = -635383997949713995LL;

	t29 = (((x129<x130)|x131)+x132);

	if (t29 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -174;
	uint32_t x134 = 237471608U;
	uint8_t x135 = 4U;
	int32_t x136 = -5349134;
	volatile int32_t t30 = -34315452;

	t30 = (((x133<x134)|x135)+x136);

	if (t30 != -5349130) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 8180;
	int16_t x142 = -1;
	uint32_t x143 = 2U;
	static int8_t x144 = INT8_MIN;
	volatile uint32_t t31 = 1909U;

	t31 = (((x141<x142)|x143)+x144);

	if (t31 != 4294967170U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MIN;
	volatile uint64_t x148 = 98847LLU;
	volatile uint64_t t32 = 1027335174304864LLU;

	t32 = (((x145<x146)|x147)+x148);

	if (t32 != 18446744071562166816LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 1851374785804645LL;
	uint32_t x150 = 38503792U;
	static uint64_t x152 = 426241735723445763LLU;
	uint64_t t33 = 987598943LLU;

	t33 = (((x149<x150)|x151)+x152);

	if (t33 != 426241735723463258LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = 0;
	int16_t x154 = -2665;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -100;
	volatile int32_t t34 = 26734995;

	t34 = (((x153<x154)|x155)+x156);

	if (t34 != 32667) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x158 = -114807811821630367LL;
	uint32_t x159 = 32497473U;
	uint64_t x160 = 599655LLU;
	static volatile uint64_t t35 = 5LLU;

	t35 = (((x157<x158)|x159)+x160);

	if (t35 != 33097128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x165 = 14199594U;
	uint8_t x166 = UINT8_MAX;
	int8_t x168 = -1;
	uint32_t t36 = 1009U;

	t36 = (((x165<x166)|x167)+x168);

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 0U;
	int8_t x170 = -6;
	int64_t x171 = INT64_MIN;
	static int64_t t37 = 121821741116LL;

	t37 = (((x169<x170)|x171)+x172);

	if (t37 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 153U;
	int64_t x179 = -32232947871870288LL;
	int16_t x180 = 1988;
	static volatile int64_t t38 = -1141985210301226166LL;

	t38 = (((x177<x178)|x179)+x180);

	if (t38 != -32232947871868299LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t39 = 9681776;

	t39 = (((x181<x182)|x183)+x184);

	if (t39 != 3370) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x186 = -1;
	int64_t x187 = INT64_MAX;
	static int16_t x188 = -1;
	int64_t t40 = 8145727881LL;

	t40 = (((x185<x186)|x187)+x188);

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = 3;
	uint32_t x191 = UINT32_MAX;
	uint16_t x192 = UINT16_MAX;

	t41 = (((x189<x190)|x191)+x192);

	if (t41 != 65534U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 0;
	int64_t x194 = INT64_MIN;
	static int16_t x195 = -2782;
	int64_t t42 = -102961382709LL;

	t42 = (((x193<x194)|x195)+x196);

	if (t42 != -2782LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x197 = 36U;
	int8_t x199 = -1;
	int32_t x200 = 4;
	volatile int32_t t43 = 0;

	t43 = (((x197<x198)|x199)+x200);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = 33LLU;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t44 = 63658201;

	t44 = (((x201<x202)|x203)+x204);

	if (t44 != -2147483392) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x208 = INT64_MIN;
	int64_t t45 = 4196046312608389785LL;

	t45 = (((x205<x206)|x207)+x208);

	if (t45 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t46 = -5;

	t46 = (((x209<x210)|x211)+x212);

	if (t46 != -2147483521) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = -1;
	volatile int16_t x215 = INT16_MAX;
	uint8_t x216 = 9U;
	int32_t t47 = 4;

	t47 = (((x213<x214)|x215)+x216);

	if (t47 != 32776) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x220 = INT16_MAX;
	int32_t t48 = -118004;

	t48 = (((x217<x218)|x219)+x220);

	if (t48 != 32750) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x221 = 4U;
	volatile uint8_t x223 = 106U;
	static int16_t x224 = 0;
	volatile int32_t t49 = 272910;

	t49 = (((x221<x222)|x223)+x224);

	if (t49 != 107) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = 775121LLU;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -863;
	volatile uint32_t t50 = 845U;

	t50 = (((x225<x226)|x227)+x228);

	if (t50 != 4294966432U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = -39091827;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	uint32_t t51 = 24242U;

	t51 = (((x229<x230)|x231)+x232);

	if (t51 != 32766U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x237 = 1;
	int64_t x239 = INT64_MIN;

	t52 = (((x237<x238)|x239)+x240);

	if (t52 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	int8_t x248 = 10;
	volatile int32_t t53 = 11323026;

	t53 = (((x245<x246)|x247)+x248);

	if (t53 != 23) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = 4U;
	uint16_t x250 = 26U;
	int16_t x251 = -1;
	static uint32_t x252 = 4111553U;
	volatile uint32_t t54 = 1330U;

	t54 = (((x249<x250)|x251)+x252);

	if (t54 != 4111552U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = INT32_MAX;
	uint16_t x254 = 34U;
	int8_t x255 = -1;
	int32_t t55 = 47638;

	t55 = (((x253<x254)|x255)+x256);

	if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x257 = -1;
	volatile int32_t x258 = 2065;
	volatile int32_t x259 = -226480;
	static uint32_t x260 = 35U;

	t56 = (((x257<x258)|x259)+x260);

	if (t56 != 4294740852U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	uint32_t x264 = 58U;
	int64_t t57 = -1732LL;

	t57 = (((x261<x262)|x263)+x264);

	if (t57 != 57LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x266 = UINT8_MAX;
	volatile int32_t t58 = -1690681;

	t58 = (((x265<x266)|x267)+x268);

	if (t58 != 46) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x273 = 1U;
	uint64_t x274 = 7383714LLU;
	static int64_t x276 = INT64_MIN;
	int64_t t59 = 3606955507627315LL;

	t59 = (((x273<x274)|x275)+x276);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = 117551535670LL;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;
	int64_t t60 = -47467985950932893LL;

	t60 = (((x277<x278)|x279)+x280);

	if (t60 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = 14U;
	volatile int32_t t61 = -292;

	t61 = (((x281<x282)|x283)+x284);

	if (t61 != 32781) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = -1;
	static int8_t x286 = INT8_MIN;
	volatile int32_t x287 = INT32_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t62 = -1180LL;

	t62 = (((x285<x286)|x287)+x288);

	if (t62 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	int64_t x291 = -59496LL;
	int16_t x292 = INT16_MIN;
	int64_t t63 = 20597280300046502LL;

	t63 = (((x289<x290)|x291)+x292);

	if (t63 != -92264LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x293 = UINT16_MAX;
	static int32_t x294 = 34281238;
	int8_t x296 = -1;
	int64_t t64 = INT64_MIN;

	t64 = (((x293<x294)|x295)+x296);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = UINT32_MAX;
	static volatile uint16_t x299 = 1U;
	volatile uint8_t x300 = 1U;
	int32_t t65 = 326139;

	t65 = (((x297<x298)|x299)+x300);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = -1;
	volatile int32_t x303 = INT32_MAX;

	t66 = (((x301<x302)|x303)+x304);

	if (t66 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 1288011080190956982LLU;
	int64_t x306 = 4017259052931LL;
	int16_t x307 = INT16_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t67 = 1988;

	t67 = (((x305<x306)|x307)+x308);

	if (t67 != -2147450881) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 68U;
	int8_t x310 = -1;
	static volatile int64_t x311 = 97LL;
	static int16_t x312 = INT16_MIN;
	int64_t t68 = 1266817878724386LL;

	t68 = (((x309<x310)|x311)+x312);

	if (t68 != -32671LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x314 = 0U;
	static uint16_t x315 = 660U;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t69 = 553871291;

	t69 = (((x313<x314)|x315)+x316);

	if (t69 != 915) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t70 = -58;

	t70 = (((x317<x318)|x319)+x320);

	if (t70 != -32641) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = -1;
	static int8_t x322 = 60;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t71 = 6763;

	t71 = (((x321<x322)|x323)+x324);

	if (t71 != 5306) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x327 = INT16_MAX;
	static uint16_t x328 = 4U;

	t72 = (((x325<x326)|x327)+x328);

	if (t72 != 32771) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x329 = -2;
	int32_t x330 = 2;
	int16_t x332 = INT16_MIN;

	t73 = (((x329<x330)|x331)+x332);

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = UINT8_MAX;
	static int16_t x334 = -745;
	uint64_t x335 = 6096877147LLU;
	static uint64_t x336 = 51037010145725LLU;
	uint64_t t74 = 1553865133LLU;

	t74 = (((x333<x334)|x335)+x336);

	if (t74 != 51043107022872LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x338 = 30U;
	int16_t x339 = -1;
	int32_t x340 = INT32_MAX;
	volatile int32_t t75 = -629144;

	t75 = (((x337<x338)|x339)+x340);

	if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = 11520781U;
	int64_t x346 = INT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	static int8_t x348 = -1;
	int32_t t76 = -165575374;

	t76 = (((x345<x346)|x347)+x348);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MIN;
	uint16_t x350 = 7269U;
	volatile int64_t t77 = 87835431821LL;

	t77 = (((x349<x350)|x351)+x352);

	if (t77 != 4294967294LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = -5812;
	int16_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t78 = 125151730U;

	t78 = (((x353<x354)|x355)+x356);

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t79 = 11;

	t79 = (((x357<x358)|x359)+x360);

	if (t79 != 217) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x361 = -15;
	volatile int32_t x362 = -673813773;
	static uint16_t x363 = 929U;
	volatile int16_t x364 = INT16_MAX;
	int32_t t80 = -202720;

	t80 = (((x361<x362)|x363)+x364);

	if (t80 != 33696) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x366 = 13U;
	uint64_t x367 = 111158LLU;
	static uint32_t x368 = 1074128968U;
	volatile uint64_t t81 = 1908008944LLU;

	t81 = (((x365<x366)|x367)+x368);

	if (t81 != 1074240127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t t82 = 68805;

	t82 = (((x369<x370)|x371)+x372);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = 3732543608589129762LLU;
	uint32_t x375 = 430976U;
	uint32_t t83 = 31039373U;

	t83 = (((x373<x374)|x375)+x376);

	if (t83 != 431231U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 17472U;
	int32_t x378 = -1;
	volatile int8_t x379 = INT8_MAX;
	uint16_t x380 = UINT16_MAX;
	int32_t t84 = 10301213;

	t84 = (((x377<x378)|x379)+x380);

	if (t84 != 65662) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x381 = INT64_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 110644U;
	static int16_t x384 = INT16_MIN;

	t85 = (((x381<x382)|x383)+x384);

	if (t85 != 77877U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = -1;
	volatile uint64_t t86 = 3133116709531879241LLU;

	t86 = (((x385<x386)|x387)+x388);

	if (t86 != 1952112954402233LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MIN;
	int8_t x391 = 3;
	int32_t x392 = INT32_MIN;
	volatile int32_t t87 = -133940;

	t87 = (((x389<x390)|x391)+x392);

	if (t87 != -2147483645) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = -1;
	volatile int8_t x395 = -1;
	volatile uint64_t x396 = UINT64_MAX;
	static uint64_t t88 = 5750180629579853LLU;

	t88 = (((x393<x394)|x395)+x396);

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -1;
	uint8_t x399 = UINT8_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t89 = 670;

	t89 = (((x397<x398)|x399)+x400);

	if (t89 != -2147483393) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = 27190U;
	int64_t x402 = INT64_MIN;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t90 = -1604;

	t90 = (((x401<x402)|x403)+x404);

	if (t90 != -2147483393) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	uint8_t x407 = 3U;
	volatile int8_t x408 = 1;
	int32_t t91 = -108;

	t91 = (((x405<x406)|x407)+x408);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x409 = 1223605789693LLU;
	int8_t x410 = 0;
	int64_t x411 = 48211233LL;
	int64_t t92 = -7732184LL;

	t92 = (((x409<x410)|x411)+x412);

	if (t92 != 48211488LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x413 = 825LLU;
	uint8_t x414 = 1U;
	int8_t x415 = INT8_MIN;
	volatile uint64_t x416 = 13361749650114515LLU;
	volatile uint64_t t93 = 486577860668478LLU;

	t93 = (((x413<x414)|x415)+x416);

	if (t93 != 13361749650114387LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = 260922;
	uint64_t x418 = 18LLU;
	static volatile uint32_t x420 = 1U;
	uint32_t t94 = 38548935U;

	t94 = (((x417<x418)|x419)+x420);

	if (t94 != 128U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 368U;
	int64_t x423 = -1163065110939414063LL;
	uint8_t x424 = 28U;
	static volatile int64_t t95 = -6656LL;

	t95 = (((x421<x422)|x423)+x424);

	if (t95 != -1163065110939414035LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = INT32_MIN;
	int32_t x426 = -1593686;
	static int32_t x427 = -1;
	static uint16_t x428 = UINT16_MAX;
	volatile int32_t t96 = 4948;

	t96 = (((x425<x426)|x427)+x428);

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = INT32_MAX;
	volatile int8_t x431 = INT8_MIN;
	volatile uint32_t x432 = 241667415U;
	static uint32_t t97 = 13888U;

	t97 = (((x429<x430)|x431)+x432);

	if (t97 != 241667288U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x437 = -1;
	int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MAX;
	int64_t t98 = -1130711LL;

	t98 = (((x437<x438)|x439)+x440);

	if (t98 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x441 = INT8_MAX;
	static int8_t x442 = 2;
	static int64_t x443 = INT64_MIN;
	uint8_t x444 = UINT8_MAX;
	int64_t t99 = 992073544174839LL;

	t99 = (((x441<x442)|x443)+x444);

	if (t99 != -9223372036854775553LL) { NG(); } else { ; }
	
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

