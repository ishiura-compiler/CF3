#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 1235177LLU;
static uint32_t x7 = 14562U;
static int32_t x8 = -772;
int32_t t3 = -125;
int64_t x17 = INT64_MAX;
static int64_t x18 = 1178753LL;
int8_t x25 = 5;
static uint64_t x27 = 726557237205693106LLU;
int64_t x28 = -21LL;
int32_t t7 = -13544926;
int16_t x42 = INT16_MIN;
int16_t x44 = -15942;
volatile uint8_t x49 = 1U;
volatile uint16_t x50 = 3U;
volatile int16_t x54 = INT16_MIN;
volatile int16_t x65 = 5;
int8_t x72 = INT8_MIN;
static int8_t x85 = INT8_MAX;
volatile uint64_t t19 = 9896LLU;
static uint64_t x93 = UINT64_MAX;
int64_t x97 = INT64_MAX;
static int64_t x107 = INT64_MIN;
int8_t x114 = 11;
volatile int8_t x115 = 1;
int32_t t26 = -29520;
uint16_t x126 = 9U;
volatile int16_t x134 = 0;
volatile uint16_t x137 = UINT16_MAX;
int8_t x148 = 15;
int16_t x152 = -13;
int32_t x159 = -489;
uint32_t x160 = 4U;
int8_t x169 = -1;
int8_t x171 = -1;
int64_t x173 = 84095749882981650LL;
volatile int32_t t38 = 248634;
int64_t x180 = -1LL;
volatile int16_t x188 = INT16_MIN;
int32_t x189 = INT32_MIN;
int16_t x197 = -1;
static int32_t x202 = INT32_MAX;
volatile int16_t x213 = INT16_MAX;
uint8_t x224 = UINT8_MAX;
volatile int32_t x227 = INT32_MIN;
static volatile int8_t x230 = 7;
volatile uint16_t x232 = 32538U;
uint8_t x241 = UINT8_MAX;
uint8_t x254 = 2U;
volatile uint64_t t56 = 160069574LLU;
volatile uint8_t x261 = UINT8_MAX;
int64_t x265 = -1LL;
int32_t x266 = -27757254;
uint8_t x273 = 10U;
static int16_t x274 = -1;
int8_t x276 = -1;
int16_t x285 = -1508;
int32_t x286 = INT32_MAX;
uint16_t x292 = UINT16_MAX;
static int16_t x296 = INT16_MIN;
volatile int16_t x302 = 1;
int64_t x304 = 12841183348093812LL;
int64_t t68 = 63LL;
volatile int8_t x308 = -45;
volatile int32_t t69 = -3220;
uint64_t x311 = 140108870455409LLU;
volatile uint8_t x315 = UINT8_MAX;
uint16_t x319 = 158U;
static int32_t x322 = INT32_MIN;
static int16_t x333 = 26;
volatile uint8_t x334 = 0U;
volatile int64_t x335 = 828113LL;
uint32_t x336 = UINT32_MAX;
uint32_t t76 = 700U;
static volatile int32_t t78 = 99515;
uint8_t x351 = 5U;
int32_t x353 = -1;
static volatile uint32_t x355 = UINT32_MAX;
volatile int32_t t81 = -2015431;
uint32_t x362 = 25536372U;
int8_t x371 = 6;
uint16_t x376 = UINT16_MAX;
uint16_t x382 = UINT16_MAX;
static uint64_t x387 = 6831763316628312LLU;
int8_t x396 = -30;
volatile int64_t t91 = -172LL;
int8_t x408 = -1;
int64_t x411 = -1LL;
int16_t x414 = -222;
volatile int32_t x415 = INT32_MIN;
uint32_t x419 = 890U;
uint64_t x420 = 45926231LLU;
uint32_t x421 = 0U;
volatile int8_t x428 = INT8_MAX;
uint8_t x435 = 6U;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = -10017;
	static int16_t x3 = -3;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = 168690;

	t0 = ((x1<=(x2<x3))-x4);

	if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -15065;
	volatile int32_t t1 = 115579019;

	t1 = ((x5<=(x6<x7))-x8);

	if (t1 != 773) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 3365343546835608LLU;
	uint64_t x10 = 1398LLU;
	int8_t x11 = 4;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -26105;

	t2 = ((x9<=(x10<x11))-x12);

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int16_t x14 = 107;
	int8_t x15 = INT8_MAX;
	volatile int8_t x16 = INT8_MIN;

	t3 = ((x13<=(x14<x15))-x16);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x19 = INT16_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 239;

	t4 = ((x17<=(x18<x19))-x20);

	if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -536670333;
	int64_t t5 = 32321LL;

	t5 = ((x25<=(x26<x27))-x28);

	if (t5 != 21LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = 0;
	int16_t x31 = 38;
	int16_t x32 = INT16_MIN;
	int32_t t6 = -18598494;

	t6 = ((x29<=(x30<x31))-x32);

	if (t6 != 32769) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	static uint64_t x34 = 213633396509LLU;
	int16_t x35 = -1;
	int8_t x36 = -18;

	t7 = ((x33<=(x34<x35))-x36);

	if (t7 != 19) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = INT16_MIN;
	int32_t x43 = INT32_MAX;
	int32_t t8 = 889402393;

	t8 = ((x41<=(x42<x43))-x44);

	if (t8 != 15943) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	uint8_t x46 = 2U;
	uint64_t x47 = 7633573806230576067LLU;
	int16_t x48 = -95;
	static int32_t t9 = 35;

	t9 = ((x45<=(x46<x47))-x48);

	if (t9 != 96) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	int32_t t10 = 99545;

	t10 = ((x49<=(x50<x51))-x52);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t11 = 158051243;

	t11 = ((x53<=(x54<x55))-x56);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = -10686;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t12 = -588024980;

	t12 = ((x57<=(x58<x59))-x60);

	if (t12 != -2147483646) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = -12;
	static int32_t x63 = -1;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = -884862091;

	t13 = ((x61<=(x62<x63))-x64);

	if (t13 != -254) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = -1;
	uint64_t x67 = 122346663033567091LLU;
	static int32_t x68 = -1;
	int32_t t14 = -12388563;

	t14 = ((x65<=(x66<x67))-x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -1;
	int64_t x70 = 1587931813120268LL;
	int16_t x71 = INT16_MAX;
	int32_t t15 = 946880980;

	t15 = ((x69<=(x70<x71))-x72);

	if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 1990U;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int32_t x80 = 367;
	int32_t t16 = -28;

	t16 = ((x77<=(x78<x79))-x80);

	if (t16 != -367) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 179516;
	uint32_t x82 = 1U;
	int16_t x83 = INT16_MAX;
	static uint64_t x84 = 291LLU;
	volatile uint64_t t17 = 65362209LLU;

	t17 = ((x81<=(x82<x83))-x84);

	if (t17 != 18446744073709551325LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = 0;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t18 = -6400483;

	t18 = ((x85<=(x86<x87))-x88);

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	static volatile int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	uint64_t x92 = 252044575LLU;

	t19 = ((x89<=(x90<x91))-x92);

	if (t19 != 18446744073457507042LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = 1;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 13245U;
	uint32_t t20 = 1021725U;

	t20 = ((x93<=(x94<x95))-x96);

	if (t20 != 4294954051U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MIN;
	int32_t x99 = 2473170;
	static volatile uint16_t x100 = 1189U;
	static int32_t t21 = 949624128;

	t21 = ((x97<=(x98<x99))-x100);

	if (t21 != -1189) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	uint16_t x103 = 68U;
	uint64_t x104 = 63450453LLU;
	uint64_t t22 = 28939LLU;

	t22 = ((x101<=(x102<x103))-x104);

	if (t22 != 18446744073646101164LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -8;

	t23 = ((x105<=(x106<x107))-x108);

	if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x109 = UINT16_MAX;
	volatile uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	uint64_t x112 = 175LLU;
	uint64_t t24 = 1217LLU;

	t24 = ((x109<=(x110<x111))-x112);

	if (t24 != 18446744073709551441LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MIN;
	uint8_t x116 = 100U;
	int32_t t25 = -47;

	t25 = ((x113<=(x114<x115))-x116);

	if (t25 != -99) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 31LLU;
	static volatile int32_t x118 = INT32_MIN;
	static volatile int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;

	t26 = ((x117<=(x118<x119))-x120);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int16_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t27 = 132592695;

	t27 = ((x121<=(x122<x123))-x124);

	if (t27 != -254) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = 120459775LL;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 0U;
	int32_t t28 = 3508354;

	t28 = ((x125<=(x126<x127))-x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static int64_t x130 = INT64_MIN;
	volatile int64_t x131 = INT64_MIN;
	int64_t x132 = 2LL;
	static volatile int64_t t29 = -2382LL;

	t29 = ((x129<=(x130<x131))-x132);

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MAX;
	static int8_t x135 = -1;
	int8_t x136 = 2;
	int32_t t30 = 780866071;

	t30 = ((x133<=(x134<x135))-x136);

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = 13262;
	int32_t x139 = -1;
	int64_t x140 = 1867486329234859LL;
	static int64_t t31 = 317785LL;

	t31 = ((x137<=(x138<x139))-x140);

	if (t31 != -1867486329234859LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	uint8_t x142 = 15U;
	uint8_t x143 = UINT8_MAX;
	uint32_t x144 = 140721313U;
	volatile uint32_t t32 = 2988077U;

	t32 = ((x141<=(x142<x143))-x144);

	if (t32 != 4154245984U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = 1;
	volatile uint16_t x146 = 0U;
	volatile int16_t x147 = 6318;
	int32_t t33 = 1843107;

	t33 = ((x145<=(x146<x147))-x148);

	if (t33 != -14) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	static int64_t x150 = 309630235379LL;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t34 = -2;

	t34 = ((x149<=(x150<x151))-x152);

	if (t34 != 13) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 16375;
	uint8_t x154 = 9U;
	int16_t x155 = -1;
	uint32_t x156 = 5691U;
	static volatile uint32_t t35 = 56U;

	t35 = ((x153<=(x154<x155))-x156);

	if (t35 != 4294961605U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = INT64_MIN;
	uint8_t x158 = 16U;
	volatile uint32_t t36 = 79U;

	t36 = ((x157<=(x158<x159))-x160);

	if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x170 = 1197U;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t37 = -1532;

	t37 = ((x169<=(x170<x171))-x172);

	if (t37 != -65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = -57;
	int8_t x176 = INT8_MIN;

	t38 = ((x173<=(x174<x175))-x176);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 2847254LL;
	static uint64_t x178 = 227374292725925609LLU;
	static uint64_t x179 = UINT64_MAX;
	volatile int64_t t39 = 249380LL;

	t39 = ((x177<=(x178<x179))-x180);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	static uint16_t x182 = UINT16_MAX;
	static int8_t x183 = -1;
	int64_t x184 = INT64_MAX;
	int64_t t40 = -163797852142LL;

	t40 = ((x181<=(x182<x183))-x184);

	if (t40 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -14718721LL;
	int64_t x186 = INT64_MIN;
	volatile int64_t x187 = -1LL;
	int32_t t41 = 41;

	t41 = ((x185<=(x186<x187))-x188);

	if (t41 != 32769) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x190 = 224U;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 13U;
	volatile uint32_t t42 = 19429U;

	t42 = ((x189<=(x190<x191))-x192);

	if (t42 != 4294967284U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = 3;
	int8_t x200 = -1;
	int32_t t43 = 215338;

	t43 = ((x197<=(x198<x199))-x200);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 15814U;
	static int32_t x203 = INT32_MIN;
	uint64_t x204 = UINT64_MAX;
	uint64_t t44 = 279239391691361LLU;

	t44 = ((x201<=(x202<x203))-x204);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	int8_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	static int32_t t45 = -52545;

	t45 = ((x205<=(x206<x207))-x208);

	if (t45 != -65534) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x214 = INT64_MAX;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 5U;
	int32_t t46 = 49117;

	t46 = ((x213<=(x214<x215))-x216);

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t47 = -18597661;

	t47 = ((x217<=(x218<x219))-x220);

	if (t47 != 129) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MIN;
	volatile int32_t x222 = INT32_MAX;
	int32_t x223 = INT32_MAX;
	volatile int32_t t48 = 64348;

	t48 = ((x221<=(x222<x223))-x224);

	if (t48 != -254) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t49 = 475344864;

	t49 = ((x225<=(x226<x227))-x228);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = INT32_MIN;
	int8_t x231 = -5;
	static volatile int32_t t50 = 173492863;

	t50 = ((x229<=(x230<x231))-x232);

	if (t50 != -32537) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	volatile uint64_t x234 = 4103947LLU;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = -1;
	int32_t t51 = 758;

	t51 = ((x233<=(x234<x235))-x236);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile int8_t x238 = INT8_MIN;
	uint32_t x239 = UINT32_MAX;
	volatile uint8_t x240 = 2U;
	static volatile int32_t t52 = -276593701;

	t52 = ((x237<=(x238<x239))-x240);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x242 = INT64_MAX;
	int8_t x243 = INT8_MAX;
	int16_t x244 = -1;
	int32_t t53 = -60827;

	t53 = ((x241<=(x242<x243))-x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile int64_t x247 = INT64_MIN;
	uint8_t x248 = 0U;
	volatile int32_t t54 = 95648;

	t54 = ((x245<=(x246<x247))-x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	volatile uint32_t x251 = UINT32_MAX;
	uint16_t x252 = 21U;
	volatile int32_t t55 = -3744;

	t55 = ((x249<=(x250<x251))-x252);

	if (t55 != -20) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = 75;
	int64_t x255 = INT64_MAX;
	uint64_t x256 = 2157255716350LLU;

	t56 = ((x253<=(x254<x255))-x256);

	if (t56 != 18446741916453835266LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 588879LLU;
	static volatile uint32_t x258 = UINT32_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	volatile int8_t x260 = -1;
	volatile int32_t t57 = -24;

	t57 = ((x257<=(x258<x259))-x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x262 = 6;
	int16_t x263 = -3820;
	int32_t x264 = 454582387;
	volatile int32_t t58 = -36;

	t58 = ((x261<=(x262<x263))-x264);

	if (t58 != -454582387) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;
	volatile int32_t t59 = 2323453;

	t59 = ((x265<=(x266<x267))-x268);

	if (t59 != -2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = 24;
	static int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	uint64_t x272 = 108981952112384LLU;
	uint64_t t60 = 17501299610043LLU;

	t60 = ((x269<=(x270<x271))-x272);

	if (t60 != 18446635091757439232LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x275 = 83U;
	int32_t t61 = 3498;

	t61 = ((x273<=(x274<x275))-x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x277 = 8U;
	static uint32_t x278 = 265572993U;
	uint64_t x279 = 2713966LLU;
	int64_t x280 = 1968775019LL;
	int64_t t62 = 30662LL;

	t62 = ((x277<=(x278<x279))-x280);

	if (t62 != -1968775019LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MAX;
	int16_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	static int32_t t63 = 565;

	t63 = ((x281<=(x282<x283))-x284);

	if (t63 != 129) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x287 = -1;
	volatile int8_t x288 = -1;
	int32_t t64 = 46;

	t64 = ((x285<=(x286<x287))-x288);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 5U;
	volatile uint16_t x291 = 4047U;
	static volatile int32_t t65 = 26163;

	t65 = ((x289<=(x290<x291))-x292);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x293 = UINT32_MAX;
	volatile int16_t x294 = 788;
	int32_t x295 = INT32_MIN;
	volatile int32_t t66 = -7499545;

	t66 = ((x293<=(x294<x295))-x296);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = 0;
	int8_t x299 = -12;
	volatile uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t67 = 993232896U;

	t67 = ((x297<=(x298<x299))-x300);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = -974;
	int64_t x303 = INT64_MAX;

	t68 = ((x301<=(x302<x303))-x304);

	if (t68 != -12841183348093811LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 33199U;
	volatile int8_t x306 = 3;
	volatile int8_t x307 = INT8_MIN;

	t69 = ((x305<=(x306<x307))-x308);

	if (t69 != 45) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = UINT8_MAX;
	static uint32_t x310 = 120803U;
	int8_t x312 = -1;
	int32_t t70 = 38228;

	t70 = ((x309<=(x310<x311))-x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t71 = -129;

	t71 = ((x313<=(x314<x315))-x316);

	if (t71 != -32766) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 2205358LLU;
	volatile int32_t x318 = -1;
	int64_t x320 = 1618092LL;
	volatile int64_t t72 = 279494495453054292LL;

	t72 = ((x317<=(x318<x319))-x320);

	if (t72 != -1618092LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x323 = -1LL;
	static uint32_t x324 = 918238721U;
	uint32_t t73 = 6150U;

	t73 = ((x321<=(x322<x323))-x324);

	if (t73 != 3376728576U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = -46;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MAX;
	static uint64_t x328 = 1355LLU;
	static volatile uint64_t t74 = 277658686873LLU;

	t74 = ((x325<=(x326<x327))-x328);

	if (t74 != 18446744073709550262LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 103767592U;
	volatile int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	int32_t t75 = 3048931;

	t75 = ((x329<=(x330<x331))-x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {


	t76 = ((x333<=(x334<x335))-x336);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = 48271366668865128LLU;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = 576U;
	int8_t x344 = -1;
	volatile int32_t t77 = 0;

	t77 = ((x341<=(x342<x343))-x344);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 6U;
	volatile uint32_t x346 = 6U;
	volatile int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MIN;

	t78 = ((x345<=(x346<x347))-x348);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 2523483624032LLU;
	static uint64_t x350 = 45691423971382LLU;
	volatile int16_t x352 = INT16_MIN;
	int32_t t79 = -14846070;

	t79 = ((x349<=(x350<x351))-x352);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x354 = 4;
	volatile uint8_t x356 = 2U;
	int32_t t80 = 6338901;

	t80 = ((x353<=(x354<x355))-x356);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	uint16_t x360 = 0U;

	t81 = ((x357<=(x358<x359))-x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x361 = -35;
	int32_t x363 = -12384;
	int8_t x364 = INT8_MIN;
	int32_t t82 = 81957746;

	t82 = ((x361<=(x362<x363))-x364);

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	static volatile uint8_t x368 = UINT8_MAX;
	int32_t t83 = -335910;

	t83 = ((x365<=(x366<x367))-x368);

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x369 = INT32_MIN;
	static int16_t x370 = 5155;
	int16_t x372 = -33;
	int32_t t84 = -9279817;

	t84 = ((x369<=(x370<x371))-x372);

	if (t84 != 34) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	static volatile int32_t t85 = -1120;

	t85 = ((x373<=(x374<x375))-x376);

	if (t85 != -65535) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	volatile int32_t t86 = 29955;

	t86 = ((x377<=(x378<x379))-x380);

	if (t86 != -254) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = -1LL;
	int8_t x383 = INT8_MAX;
	volatile uint16_t x384 = 27U;
	volatile int32_t t87 = -14;

	t87 = ((x381<=(x382<x383))-x384);

	if (t87 != -26) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = 7;
	int64_t x386 = 1LL;
	int8_t x388 = 23;
	int32_t t88 = -33164725;

	t88 = ((x385<=(x386<x387))-x388);

	if (t88 != -23) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = 1180913U;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t89 = 1;

	t89 = ((x393<=(x394<x395))-x396);

	if (t89 != 31) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x397 = UINT16_MAX;
	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 381751535892342LLU;
	volatile uint8_t x400 = 1U;
	static int32_t t90 = 1015160350;

	t90 = ((x397<=(x398<x399))-x400);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = 1U;
	volatile int32_t x402 = INT32_MIN;
	uint64_t x403 = 1272LLU;
	volatile int64_t x404 = -2076307662348LL;

	t91 = ((x401<=(x402<x403))-x404);

	if (t91 != 2076307662348LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x405 = 1LL;
	uint32_t x406 = UINT32_MAX;
	volatile uint32_t x407 = 11U;
	int32_t t92 = 425833;

	t92 = ((x405<=(x406<x407))-x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MAX;
	volatile int32_t x410 = INT32_MIN;
	volatile int16_t x412 = 90;
	volatile int32_t t93 = -974;

	t93 = ((x409<=(x410<x411))-x412);

	if (t93 != -90) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 1U;
	int8_t x416 = -1;
	volatile int32_t t94 = 49418039;

	t94 = ((x413<=(x414<x415))-x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = INT16_MIN;
	static int32_t x418 = -1;
	volatile uint64_t t95 = 474156LLU;

	t95 = ((x417<=(x418<x419))-x420);

	if (t95 != 18446744073663625386LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x422 = -123;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 42U;
	volatile int32_t t96 = -5;

	t96 = ((x421<=(x422<x423))-x424);

	if (t96 != -41) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = 3491LL;
	static volatile uint16_t x427 = 16825U;
	volatile int32_t t97 = -2567;

	t97 = ((x425<=(x426<x427))-x428);

	if (t97 != -126) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = UINT16_MAX;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 1U;
	static int32_t x432 = INT32_MAX;
	int32_t t98 = 1;

	t98 = ((x429<=(x430<x431))-x432);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = INT64_MAX;
	int8_t x434 = INT8_MAX;
	int8_t x436 = INT8_MAX;
	static volatile int32_t t99 = -46832;

	t99 = ((x433<=(x434<x435))-x436);

	if (t99 != -127) { NG(); } else { ; }
	
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

