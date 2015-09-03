#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
volatile int32_t x6 = INT32_MAX;
static int16_t x10 = INT16_MAX;
int16_t x13 = -1;
uint8_t x15 = UINT8_MAX;
static int8_t x17 = INT8_MIN;
int64_t x22 = INT64_MAX;
static uint64_t x31 = 3192LLU;
volatile uint8_t x32 = UINT8_MAX;
int64_t x34 = INT64_MAX;
volatile int64_t x36 = INT64_MAX;
volatile int64_t t6 = -30089109192837167LL;
int16_t x38 = -1;
static int64_t x40 = -1LL;
uint16_t x43 = UINT16_MAX;
int8_t x44 = INT8_MIN;
int32_t t8 = 1561;
static volatile int8_t x45 = INT8_MAX;
int32_t t9 = 979720;
int8_t x51 = INT8_MIN;
volatile int16_t x52 = INT16_MAX;
int16_t x59 = -1;
volatile int16_t x63 = INT16_MIN;
volatile int32_t t13 = 93640310;
int8_t x71 = 1;
volatile int16_t x72 = INT16_MIN;
static uint8_t x76 = UINT8_MAX;
static volatile int32_t t16 = 887190;
uint64_t x78 = UINT64_MAX;
int32_t x80 = -3542214;
int32_t t17 = -2755;
volatile int16_t x82 = -13;
int8_t x96 = INT8_MAX;
volatile int8_t x102 = -1;
static volatile uint32_t x113 = UINT32_MAX;
volatile int64_t x116 = -1LL;
uint8_t x127 = 4U;
volatile int32_t x137 = 2;
static int32_t x139 = INT32_MIN;
volatile uint32_t t30 = 4900121U;
volatile uint8_t x144 = 60U;
int32_t t31 = -2978;
uint32_t x145 = 2604607U;
volatile uint64_t x157 = 3699412LLU;
int64_t x160 = -1LL;
static int64_t x171 = INT64_MIN;
int8_t x177 = -1;
static volatile uint64_t x182 = UINT64_MAX;
static volatile int64_t x186 = INT64_MIN;
int16_t x193 = 0;
uint8_t x200 = 1U;
volatile int16_t x201 = -31;
volatile int64_t t45 = -1788255643875868819LL;
volatile int32_t t49 = 223542;
uint8_t x228 = UINT8_MAX;
uint16_t x232 = UINT16_MAX;
int32_t t56 = -36;
static uint64_t x260 = UINT64_MAX;
uint16_t x269 = 3U;
static int32_t x273 = 62;
static int32_t t61 = -4;
int16_t x279 = INT16_MAX;
int16_t x293 = -3;
volatile int32_t t65 = -5;
volatile uint32_t x302 = 76872U;
uint64_t t68 = 282905963LLU;
int8_t x309 = INT8_MIN;
int32_t x313 = INT32_MAX;
uint64_t x320 = 2149430407698109LLU;
volatile uint64_t x328 = 30081694LLU;
uint64_t t73 = 339695596573LLU;
int32_t t76 = -19917;
volatile int8_t x349 = -1;
volatile int32_t x352 = 12393;
uint32_t t80 = 91U;
int32_t x372 = INT32_MAX;
int16_t x383 = 38;
uint8_t x384 = 12U;
static int64_t x386 = INT64_MIN;
uint32_t x387 = 2255U;
uint32_t x388 = UINT32_MAX;
volatile int64_t x396 = 2221LL;
volatile uint8_t x397 = 15U;
int8_t x402 = -2;
uint16_t x406 = 6U;
volatile int8_t x414 = INT8_MIN;
static int32_t x418 = -1;
uint8_t x427 = 0U;
volatile int64_t x431 = INT64_MIN;
static uint16_t x435 = 3423U;
uint16_t x440 = 2U;


void f0(void) {
	int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t0 = -20437;

	t0 = ((x5<(x6<x7))-x8);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	int32_t x11 = 5774207;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t1 = 5765U;

	t1 = ((x9<(x10<x11))-x12);

	if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 199238065U;
	uint16_t x16 = 1441U;
	static int32_t t2 = 1664;

	t2 = ((x13<(x14<x15))-x16);

	if (t2 != -1440) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	uint8_t x19 = 111U;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t3 = 41437;

	t3 = ((x17<(x18<x19))-x20);

	if (t3 != 129) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = 520678014629924LL;
	int16_t x23 = INT16_MAX;
	int32_t x24 = -386;
	volatile int32_t t4 = 61;

	t4 = ((x21<(x22<x23))-x24);

	if (t4 != 386) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	volatile int32_t t5 = 27094;

	t5 = ((x29<(x30<x31))-x32);

	if (t5 != -254) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 337U;
	static int64_t x35 = INT64_MIN;

	t6 = ((x33<(x34<x35))-x36);

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	int64_t x39 = INT64_MAX;
	static volatile int64_t t7 = -7116218929LL;

	t7 = ((x37<(x38<x39))-x40);

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	static int16_t x42 = 84;

	t8 = ((x41<(x42<x43))-x44);

	if (t8 != 129) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = INT32_MIN;
	uint32_t x47 = 1219089145U;
	uint16_t x48 = UINT16_MAX;

	t9 = ((x45<(x46<x47))-x48);

	if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = 134U;
	int32_t t10 = -7432;

	t10 = ((x49<(x50<x51))-x52);

	if (t10 != -32766) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	static int16_t x54 = INT16_MIN;
	static uint64_t x55 = UINT64_MAX;
	static uint64_t x56 = UINT64_MAX;
	static volatile uint64_t t11 = 264832878LLU;

	t11 = ((x53<(x54<x55))-x56);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -12LL;
	static int8_t x58 = INT8_MAX;
	volatile int16_t x60 = 1067;
	int32_t t12 = 2;

	t12 = ((x57<(x58<x59))-x60);

	if (t12 != -1066) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MAX;
	static int8_t x64 = INT8_MAX;

	t13 = ((x61<(x62<x63))-x64);

	if (t13 != -126) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	static int16_t x68 = INT16_MIN;
	int32_t t14 = 257900;

	t14 = ((x65<(x66<x67))-x68);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	static int8_t x70 = -1;
	int32_t t15 = -75;

	t15 = ((x69<(x70<x71))-x72);

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -3026338;
	static uint16_t x74 = 0U;
	uint32_t x75 = 3U;

	t16 = ((x73<(x74<x75))-x76);

	if (t16 != -254) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -33;
	uint64_t x79 = 2LLU;

	t17 = ((x77<(x78<x79))-x80);

	if (t17 != 3542215) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 63;
	uint32_t x83 = 22957U;
	int16_t x84 = -1;
	static volatile int32_t t18 = 3607751;

	t18 = ((x81<(x82<x83))-x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MIN;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = -1;
	volatile int32_t t19 = 71090;

	t19 = ((x85<(x86<x87))-x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t20 = 528826;

	t20 = ((x89<(x90<x91))-x92);

	if (t20 != 32769) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MIN;
	static int16_t x94 = 0;
	int8_t x95 = INT8_MIN;
	volatile int32_t t21 = -187791;

	t21 = ((x93<(x94<x95))-x96);

	if (t21 != -126) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	uint64_t x100 = 1929203LLU;
	volatile uint64_t t22 = 0LLU;

	t22 = ((x97<(x98<x99))-x100);

	if (t22 != 18446744073707622413LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = -1;
	uint64_t x103 = 87617763526733058LLU;
	int8_t x104 = 0;
	static volatile int32_t t23 = 398;

	t23 = ((x101<(x102<x103))-x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -30890369LL;
	uint64_t x106 = 52448184LLU;
	static volatile int64_t x107 = -1LL;
	static volatile int16_t x108 = INT16_MAX;
	static volatile int32_t t24 = -614261481;

	t24 = ((x105<(x106<x107))-x108);

	if (t24 != -32766) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MAX;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	volatile int8_t x112 = -1;
	int32_t t25 = 566;

	t25 = ((x109<(x110<x111))-x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	int64_t t26 = 3629052LL;

	t26 = ((x113<(x114<x115))-x116);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 215U;
	uint8_t x118 = 2U;
	static int16_t x119 = 2;
	int8_t x120 = INT8_MIN;
	volatile int32_t t27 = -37;

	t27 = ((x117<(x118<x119))-x120);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x125<(x126<x127))-x128);

	if (t28 != -2147483646) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = -837;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 8775U;
	volatile int16_t x132 = INT16_MIN;
	int32_t t29 = 506;

	t29 = ((x129<(x130<x131))-x132);

	if (t29 != 32769) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = INT32_MIN;
	uint32_t x140 = 129472322U;

	t30 = ((x137<(x138<x139))-x140);

	if (t30 != 4165494974U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MAX;

	t31 = ((x141<(x142<x143))-x144);

	if (t31 != -59) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	uint16_t x148 = 45U;
	static volatile int32_t t32 = -201;

	t32 = ((x145<(x146<x147))-x148);

	if (t32 != -45) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 7319174496472111LL;
	int16_t x150 = -6316;
	uint64_t x151 = 17588651969476LLU;
	uint32_t x152 = 1658916618U;
	volatile uint32_t t33 = 186885U;

	t33 = ((x149<(x150<x151))-x152);

	if (t33 != 2636050678U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 321496LLU;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -28553476;
	int8_t x156 = INT8_MAX;
	volatile int32_t t34 = -1713;

	t34 = ((x153<(x154<x155))-x156);

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = -7822;
	int64_t x159 = -382154121314827LL;
	volatile int64_t t35 = -1723397LL;

	t35 = ((x157<(x158<x159))-x160);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MAX;
	uint8_t x162 = 1U;
	volatile int8_t x163 = INT8_MAX;
	volatile uint16_t x164 = 17389U;
	int32_t t36 = -59651432;

	t36 = ((x161<(x162<x163))-x164);

	if (t36 != -17389) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 104U;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = 245251672LLU;
	int16_t x168 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = ((x165<(x166<x167))-x168);

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = 7483766;
	int64_t x170 = 6076601081057781LL;
	int64_t x172 = 1LL;
	int64_t t38 = -338957LL;

	t38 = ((x169<(x170<x171))-x172);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -5686328609485436LL;
	uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 907191U;
	int16_t x176 = INT16_MIN;
	int32_t t39 = -3011;

	t39 = ((x173<(x174<x175))-x176);

	if (t39 != 32769) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = -1LL;
	int32_t x179 = INT32_MAX;
	static int16_t x180 = INT16_MIN;
	int32_t t40 = 524481;

	t40 = ((x177<(x178<x179))-x180);

	if (t40 != 32769) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = 0;
	volatile int32_t x183 = INT32_MIN;
	static uint64_t x184 = 159828925676027LLU;
	volatile uint64_t t41 = 49888LLU;

	t41 = ((x181<(x182<x183))-x184);

	if (t41 != 18446584244783875589LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = -2LL;
	uint8_t x187 = 13U;
	static int16_t x188 = -1;
	int32_t t42 = 89749;

	t42 = ((x185<(x186<x187))-x188);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x194 = -26886915LL;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 1777077;
	volatile int32_t t43 = 9;

	t43 = ((x193<(x194<x195))-x196);

	if (t43 != -1777076) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 1828LL;
	static int32_t x198 = INT32_MIN;
	uint64_t x199 = 109LLU;
	volatile int32_t t44 = 2918;

	t44 = ((x197<(x198<x199))-x200);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x202 = 1U;
	uint16_t x203 = 298U;
	int64_t x204 = 58334212347564LL;

	t45 = ((x201<(x202<x203))-x204);

	if (t45 != -58334212347563LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	static int32_t t46 = 19563;

	t46 = ((x209<(x210<x211))-x212);

	if (t46 != 129) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x213 = 88450LLU;
	int32_t x214 = INT32_MIN;
	volatile uint16_t x215 = 3460U;
	int8_t x216 = -54;
	volatile int32_t t47 = -210;

	t47 = ((x213<(x214<x215))-x216);

	if (t47 != 54) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 1U;
	int32_t x219 = -1;
	int32_t x220 = INT32_MAX;
	int32_t t48 = -2;

	t48 = ((x217<(x218<x219))-x220);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -6107;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 3628189467LLU;
	int16_t x224 = -1;

	t49 = ((x221<(x222<x223))-x224);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x225 = 49U;
	static int64_t x226 = INT64_MIN;
	int32_t x227 = -593495;
	volatile int32_t t50 = 215;

	t50 = ((x225<(x226<x227))-x228);

	if (t50 != -255) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 7620LLU;
	uint64_t x230 = 799425504437LLU;
	static int32_t x231 = INT32_MAX;
	static int32_t t51 = -10;

	t51 = ((x229<(x230<x231))-x232);

	if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = -1;
	static uint64_t x238 = 382880902378268LLU;
	uint64_t x239 = 167679394625LLU;
	volatile int8_t x240 = -1;
	volatile int32_t t52 = -7344;

	t52 = ((x237<(x238<x239))-x240);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 18223U;
	uint64_t x242 = 5389271875420309432LLU;
	volatile int32_t x243 = -83;
	static int32_t x244 = -1;
	volatile int32_t t53 = -72;

	t53 = ((x241<(x242<x243))-x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = -1;
	uint16_t x247 = 619U;
	static uint16_t x248 = 0U;
	volatile int32_t t54 = -108;

	t54 = ((x245<(x246<x247))-x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = 9363;
	volatile uint64_t x251 = 687636LLU;
	int8_t x252 = -1;
	volatile int32_t t55 = 1463;

	t55 = ((x249<(x250<x251))-x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = 8973218LL;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = 46U;
	volatile int8_t x256 = -1;

	t56 = ((x253<(x254<x255))-x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = -5341;
	int64_t x259 = INT64_MAX;
	static volatile uint64_t t57 = 70672308LLU;

	t57 = ((x257<(x258<x259))-x260);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -2902LL;
	int16_t x264 = -4410;
	int32_t t58 = -62;

	t58 = ((x261<(x262<x263))-x264);

	if (t58 != 4411) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MAX;
	static uint64_t x266 = 1119775471905873LLU;
	int8_t x267 = -1;
	int32_t x268 = 3;
	volatile int32_t t59 = 226707;

	t59 = ((x265<(x266<x267))-x268);

	if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = -7;
	static int32_t x271 = -41;
	uint8_t x272 = UINT8_MAX;
	int32_t t60 = -188207;

	t60 = ((x269<(x270<x271))-x272);

	if (t60 != -255) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MIN;

	t61 = ((x273<(x274<x275))-x276);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 5LLU;
	int16_t x278 = INT16_MAX;
	volatile int8_t x280 = INT8_MIN;
	int32_t t62 = 0;

	t62 = ((x277<(x278<x279))-x280);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	volatile int64_t x282 = INT64_MIN;
	uint32_t x283 = 12815454U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t63 = 109279;

	t63 = ((x281<(x282<x283))-x284);

	if (t63 != 32769) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t64 = 1063;

	t64 = ((x289<(x290<x291))-x292);

	if (t64 != 129) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x294 = 370878544LL;
	static int64_t x295 = INT64_MIN;
	static int16_t x296 = INT16_MIN;

	t65 = ((x293<(x294<x295))-x296);

	if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = 2U;
	uint8_t x298 = 4U;
	volatile int64_t x299 = 4149548648LL;
	volatile uint32_t x300 = 7241U;
	uint32_t t66 = 7U;

	t66 = ((x297<(x298<x299))-x300);

	if (t66 != 4294960055U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 2253315U;
	static volatile int64_t x303 = INT64_MAX;
	uint64_t x304 = 11815069960049150LLU;
	volatile uint64_t t67 = 267LLU;

	t67 = ((x301<(x302<x303))-x304);

	if (t67 != 18434929003749502466LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x305 = 0;
	static uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MAX;
	uint64_t x308 = 6857235119009162LLU;

	t68 = ((x305<(x306<x307))-x308);

	if (t68 != 18439886838590542454LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	static int16_t x312 = 2982;
	int32_t t69 = -1619;

	t69 = ((x309<(x310<x311))-x312);

	if (t69 != -2981) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x314 = 9784U;
	uint16_t x315 = 6U;
	int32_t x316 = 14877163;
	static volatile int32_t t70 = -520512920;

	t70 = ((x313<(x314<x315))-x316);

	if (t70 != -14877163) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = 5;
	uint32_t x318 = UINT32_MAX;
	volatile int16_t x319 = INT16_MAX;
	volatile uint64_t t71 = 800335541177LLU;

	t71 = ((x317<(x318<x319))-x320);

	if (t71 != 18444594643301853507LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;
	volatile int32_t t72 = 9117911;

	t72 = ((x321<(x322<x323))-x324);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = 42;
	static int64_t x326 = INT64_MAX;
	volatile int64_t x327 = INT64_MIN;

	t73 = ((x325<(x326<x327))-x328);

	if (t73 != 18446744073679469922LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	static volatile uint16_t x332 = 643U;
	int32_t t74 = 220175;

	t74 = ((x329<(x330<x331))-x332);

	if (t74 != -642) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x333 = INT32_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;
	uint8_t x336 = UINT8_MAX;
	static int32_t t75 = 81687030;

	t75 = ((x333<(x334<x335))-x336);

	if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x337 = 3LLU;
	uint64_t x338 = 3LLU;
	uint32_t x339 = 16U;
	int32_t x340 = -86;

	t76 = ((x337<(x338<x339))-x340);

	if (t76 != 86) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = INT32_MIN;
	volatile int32_t x346 = -1454;
	int8_t x347 = -1;
	volatile uint32_t x348 = 2046063977U;
	volatile uint32_t t77 = 2590U;

	t77 = ((x345<(x346<x347))-x348);

	if (t77 != 2248903320U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x350 = 0;
	static int32_t x351 = 410754250;
	volatile int32_t t78 = 14;

	t78 = ((x349<(x350<x351))-x352);

	if (t78 != -12392) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = 0;
	int16_t x354 = INT16_MAX;
	static int64_t x355 = -1LL;
	int32_t x356 = -1;
	static volatile int32_t t79 = -590377;

	t79 = ((x353<(x354<x355))-x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x357 = INT16_MAX;
	static int32_t x358 = -1;
	static volatile int8_t x359 = -2;
	uint32_t x360 = 1854632476U;

	t80 = ((x357<(x358<x359))-x360);

	if (t80 != 2440334820U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MIN;
	static volatile int8_t x363 = INT8_MAX;
	uint32_t x364 = 8765306U;
	volatile uint32_t t81 = 253U;

	t81 = ((x361<(x362<x363))-x364);

	if (t81 != 4286201990U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x369 = 64U;
	volatile int8_t x370 = -1;
	volatile uint32_t x371 = UINT32_MAX;
	static volatile int32_t t82 = 72372;

	t82 = ((x369<(x370<x371))-x372);

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = 146881723U;
	int32_t x374 = 709455722;
	volatile int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t83 = -1;

	t83 = ((x373<(x374<x375))-x376);

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x377 = -1;
	static uint8_t x378 = 0U;
	volatile uint16_t x379 = 1U;
	volatile int32_t x380 = 50723175;
	int32_t t84 = 474036;

	t84 = ((x377<(x378<x379))-x380);

	if (t84 != -50723174) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = INT16_MIN;
	volatile int8_t x382 = INT8_MIN;
	int32_t t85 = 989255;

	t85 = ((x381<(x382<x383))-x384);

	if (t85 != -11) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x385 = UINT32_MAX;
	uint32_t t86 = 13289568U;

	t86 = ((x385<(x386<x387))-x388);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	static int32_t x390 = INT32_MIN;
	int8_t x391 = -1;
	uint64_t x392 = 8625379853957971LLU;
	volatile uint64_t t87 = 495531650707385040LLU;

	t87 = ((x389<(x390<x391))-x392);

	if (t87 != 18438118693855593646LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	volatile int64_t t88 = -734LL;

	t88 = ((x393<(x394<x395))-x396);

	if (t88 != -2220LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t89 = -358354015;

	t89 = ((x397<(x398<x399))-x400);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	int8_t x403 = 44;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t90 = -2;

	t90 = ((x401<(x402<x403))-x404);

	if (t90 != -65534) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = 23U;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;
	int32_t t91 = -39688610;

	t91 = ((x405<(x406<x407))-x408);

	if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = 1958U;
	static volatile int8_t x410 = -7;
	uint32_t x411 = 1U;
	int8_t x412 = 0;
	static volatile int32_t t92 = -48251;

	t92 = ((x409<(x410<x411))-x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = INT64_MAX;
	int8_t x415 = -1;
	static int16_t x416 = -527;
	int32_t t93 = 2;

	t93 = ((x413<(x414<x415))-x416);

	if (t93 != 527) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x417 = INT8_MIN;
	int16_t x419 = 1;
	int8_t x420 = INT8_MAX;
	int32_t t94 = -4013831;

	t94 = ((x417<(x418<x419))-x420);

	if (t94 != -126) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x425 = 5U;
	int16_t x426 = 69;
	uint8_t x428 = 3U;
	static int32_t t95 = -23697596;

	t95 = ((x425<(x426<x427))-x428);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = INT32_MAX;
	int16_t x430 = -942;
	int64_t x432 = INT64_MAX;
	volatile int64_t t96 = 0LL;

	t96 = ((x429<(x430<x431))-x432);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x433 = 29U;
	uint8_t x434 = 28U;
	int32_t x436 = INT32_MAX;
	int32_t t97 = -553721;

	t97 = ((x433<(x434<x435))-x436);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x437 = INT32_MIN;
	volatile int32_t x438 = -1;
	static int8_t x439 = 0;
	volatile int32_t t98 = -786465365;

	t98 = ((x437<(x438<x439))-x440);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x445 = 312235U;
	uint64_t x446 = 6LLU;
	uint64_t x447 = UINT64_MAX;
	static int8_t x448 = INT8_MAX;
	int32_t t99 = 383;

	t99 = ((x445<(x446<x447))-x448);

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

