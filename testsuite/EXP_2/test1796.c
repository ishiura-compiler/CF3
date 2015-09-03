#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 30U;
volatile int32_t t1 = -8;
uint32_t x9 = 1279447404U;
static volatile int16_t x15 = INT16_MAX;
int32_t x20 = 3248;
static volatile int32_t t4 = 0;
uint64_t x21 = 59LLU;
volatile uint64_t x22 = 43188030082513645LLU;
static volatile int32_t t6 = 952068028;
static int16_t x39 = INT16_MIN;
static volatile uint32_t t9 = 32753795U;
uint32_t t11 = 9184U;
int16_t x59 = INT16_MIN;
static int16_t x62 = INT16_MIN;
uint64_t x65 = UINT64_MAX;
int64_t x67 = INT64_MAX;
static uint64_t t14 = 13840867842065LLU;
int32_t t15 = -236960;
volatile uint16_t x73 = UINT16_MAX;
volatile int8_t x76 = INT8_MIN;
int64_t x81 = INT64_MIN;
int64_t x83 = -567LL;
static int32_t x84 = INT32_MAX;
int32_t t17 = 1502553;
volatile int32_t x87 = INT32_MIN;
volatile int32_t t18 = 110881;
volatile uint32_t t21 = 63U;
uint8_t x101 = 1U;
uint16_t x102 = 1318U;
static volatile int64_t x123 = INT64_MAX;
uint8_t x127 = 99U;
volatile uint8_t x135 = UINT8_MAX;
static uint8_t x144 = UINT8_MAX;
int32_t t29 = 266219562;
static int16_t x149 = 781;
static int64_t x152 = 3097LL;
int16_t x157 = INT16_MIN;
static volatile int32_t x158 = 274739561;
int16_t x172 = -1;
static int8_t x183 = 3;
volatile int32_t t39 = 6629;
uint8_t x209 = 1U;
int16_t x220 = INT16_MAX;
static int64_t x224 = -77436142890690LL;
uint64_t x228 = 46704037LLU;
static int16_t x232 = INT16_MIN;
uint16_t x233 = 7325U;
int16_t x235 = INT16_MIN;
int8_t x236 = -1;
volatile int32_t t48 = 977529;
uint16_t x254 = 1426U;
uint64_t x257 = 236528494164270119LLU;
volatile uint16_t x259 = 161U;
volatile int32_t t53 = -261;
int32_t x266 = 1996480;
volatile int32_t t54 = -98852;
int32_t x274 = 335;
uint16_t x277 = 0U;
int16_t x282 = 2732;
volatile int16_t x287 = -1;
int16_t x289 = 3;
int32_t t60 = -1034296;
int64_t t61 = -300LL;
int32_t x298 = INT32_MIN;
volatile uint64_t x302 = 698069103025801LLU;
int64_t x303 = -1LL;
static int32_t t63 = 22212;
int32_t x306 = INT32_MIN;
uint8_t x308 = UINT8_MAX;
int32_t x310 = INT32_MAX;
int64_t x317 = INT64_MIN;
uint16_t x328 = 13U;
volatile int32_t t70 = -29752;
int64_t x354 = -60500911818231525LL;
static int32_t x355 = INT32_MIN;
int8_t x360 = 4;
volatile int64_t x367 = 204LL;
volatile int32_t t77 = -17;
int32_t t78 = 3;
uint16_t x380 = 5U;
volatile int32_t t80 = -5536;
volatile int8_t x381 = -1;
uint16_t x384 = UINT16_MAX;
static int32_t x386 = 21327;
static int32_t t82 = -380681;
uint32_t x392 = 158U;
int64_t x393 = -1LL;
uint8_t x397 = 3U;
static int64_t x398 = INT64_MIN;
static volatile int8_t x399 = -1;
static uint32_t x400 = 3703738U;
static uint32_t t85 = 7U;
static uint64_t x402 = 16834660928903LLU;
static int32_t x404 = -44162;
int8_t x407 = INT8_MIN;
uint32_t x413 = UINT32_MAX;
int32_t t88 = -718623550;
uint8_t x419 = 3U;
static volatile int64_t x424 = -1LL;
volatile int64_t t92 = -4528853LL;
int32_t t93 = 1949;
static int32_t t94 = -82777478;
uint32_t x449 = UINT32_MAX;
int8_t x451 = INT8_MAX;
static int16_t x465 = -10250;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	volatile int16_t x3 = 3;
	volatile uint32_t t0 = 875211U;

	t0 = ((x1<(x2&x3))-x4);

	if (t0 != 4294967267U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 63359278310LL;
	uint16_t x6 = 31U;
	volatile uint16_t x7 = 0U;
	static uint8_t x8 = 64U;

	t1 = ((x5<(x6&x7))-x8);

	if (t1 != -64) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x10 = 177282339359551LLU;
	static int32_t x11 = INT32_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 69144;

	t2 = ((x9<(x10&x11))-x12);

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	volatile uint64_t x14 = UINT64_MAX;
	int64_t x16 = INT64_MAX;
	int64_t t3 = -39639809787LL;

	t3 = ((x13<(x14&x15))-x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = 2U;
	volatile int32_t x19 = INT32_MIN;

	t4 = ((x17<(x18&x19))-x20);

	if (t4 != -3247) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x23 = UINT16_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -13;

	t5 = ((x21<(x22&x23))-x24);

	if (t5 != 129) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 6;
	volatile int8_t x26 = -1;
	int16_t x27 = -648;
	int8_t x28 = INT8_MAX;

	t6 = ((x25<(x26&x27))-x28);

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -3;
	static uint32_t x34 = 14U;
	static uint64_t x35 = 27942LLU;
	volatile int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = -4386988;

	t7 = ((x33<(x34&x35))-x36);

	if (t7 != 128) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -39;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 1;

	t8 = ((x37<(x38&x39))-x40);

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MAX;
	volatile int32_t x42 = -65308593;
	int64_t x43 = INT64_MAX;
	uint32_t x44 = 813U;

	t9 = ((x41<(x42&x43))-x44);

	if (t9 != 4294966484U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	uint32_t x46 = 331U;
	int64_t x47 = -1LL;
	int16_t x48 = INT16_MIN;
	int32_t t10 = 257124;

	t10 = ((x45<(x46&x47))-x48);

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -14970775040LL;
	static int8_t x50 = -1;
	uint8_t x51 = 13U;
	uint32_t x52 = 1884U;

	t11 = ((x49<(x50&x51))-x52);

	if (t11 != 4294965413U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = INT32_MIN;
	int8_t x60 = -1;
	static volatile int32_t t12 = -2;

	t12 = ((x57<(x58&x59))-x60);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -1;
	int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 15863846;

	t13 = ((x61<(x62&x63))-x64);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = INT32_MAX;
	uint64_t x68 = 4102857LLU;

	t14 = ((x65<(x66&x67))-x68);

	if (t14 != 18446744073705448759LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x69 = -1;
	static uint16_t x70 = 179U;
	uint8_t x71 = UINT8_MAX;
	static int8_t x72 = -1;

	t15 = ((x69<(x70&x71))-x72);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x74 = -55;
	volatile int8_t x75 = INT8_MAX;
	volatile int32_t t16 = -7;

	t16 = ((x73<(x74&x75))-x76);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x82 = UINT64_MAX;

	t17 = ((x81<(x82&x83))-x84);

	if (t17 != -2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x86 = 5U;
	int16_t x88 = INT16_MIN;

	t18 = ((x85<(x86&x87))-x88);

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x89 = 235U;
	uint64_t x90 = 6125028526996LLU;
	int64_t x91 = -1LL;
	static volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x89<(x90&x91))-x92);

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 32963727U;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = 524298553;

	t20 = ((x93<(x94&x95))-x96);

	if (t20 != -65534) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = 3;
	int8_t x99 = 1;
	volatile uint32_t x100 = 1378548U;

	t21 = ((x97<(x98&x99))-x100);

	if (t21 != 4293588748U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x103 = INT8_MAX;
	int32_t x104 = -1;
	volatile int32_t t22 = 50541;

	t22 = ((x101<(x102&x103))-x104);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	volatile int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -1;
	int32_t t23 = -2433695;

	t23 = ((x105<(x106&x107))-x108);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = -12056793684769LL;
	int64_t x120 = 239LL;
	int64_t t24 = -25054539330449LL;

	t24 = ((x117<(x118&x119))-x120);

	if (t24 != -239LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = -1;
	int64_t x122 = INT64_MIN;
	int8_t x124 = 1;
	int32_t t25 = 117844;

	t25 = ((x121<(x122&x123))-x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	int32_t x128 = -1;
	volatile int32_t t26 = -4;

	t26 = ((x125<(x126&x127))-x128);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = INT64_MAX;
	volatile int32_t x136 = -1;
	volatile int32_t t27 = 27215266;

	t27 = ((x133<(x134&x135))-x136);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	volatile int8_t x138 = -1;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t28 = 36U;

	t28 = ((x137<(x138&x139))-x140);

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x141 = 1320U;
	static uint32_t x142 = 3417U;
	volatile int16_t x143 = -505;

	t29 = ((x141<(x142&x143))-x144);

	if (t29 != -254) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 1941U;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = -1;
	volatile uint16_t x148 = 13U;
	static volatile int32_t t30 = -1700;

	t30 = ((x145<(x146&x147))-x148);

	if (t30 != -12) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x150 = -11;
	static int32_t x151 = INT32_MAX;
	volatile int64_t t31 = 121LL;

	t31 = ((x149<(x150&x151))-x152);

	if (t31 != -3096LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x159 = INT8_MIN;
	static int8_t x160 = -1;
	static int32_t t32 = 787185479;

	t32 = ((x157<(x158&x159))-x160);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = INT16_MIN;
	static int32_t t33 = 2770916;

	t33 = ((x161<(x162&x163))-x164);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MAX;
	int8_t x167 = 0;
	int32_t x168 = -1;
	volatile int32_t t34 = 1;

	t34 = ((x165<(x166&x167))-x168);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = 0LL;
	uint16_t x170 = 15U;
	int8_t x171 = INT8_MIN;
	int32_t t35 = 94345;

	t35 = ((x169<(x170&x171))-x172);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = 187;
	uint8_t x179 = 115U;
	int64_t x180 = -1LL;
	volatile int64_t t36 = -1LL;

	t36 = ((x177<(x178&x179))-x180);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 3394381720485LLU;
	int64_t x182 = INT64_MAX;
	static int16_t x184 = INT16_MIN;
	int32_t t37 = 895;

	t37 = ((x181<(x182&x183))-x184);

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	int16_t x191 = INT16_MAX;
	uint64_t x192 = UINT64_MAX;
	uint64_t t38 = 488520188LLU;

	t38 = ((x189<(x190&x191))-x192);

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = -1LL;
	int8_t x194 = -1;
	static uint32_t x195 = UINT32_MAX;
	static int16_t x196 = -1;

	t39 = ((x193<(x194&x195))-x196);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = -1LL;
	int32_t x200 = -1;
	static int32_t t40 = -1940;

	t40 = ((x197<(x198&x199))-x200);

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	static int32_t x207 = INT32_MIN;
	int32_t x208 = 11502;
	static volatile int32_t t41 = 2387566;

	t41 = ((x205<(x206&x207))-x208);

	if (t41 != -11502) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x210 = 31LL;
	volatile uint16_t x211 = UINT16_MAX;
	static volatile uint64_t x212 = 120756050LLU;
	uint64_t t42 = 54978LLU;

	t42 = ((x209<(x210&x211))-x212);

	if (t42 != 18446744073588795567LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -599;
	static uint64_t x214 = 1964484392866548621LLU;
	static int32_t x215 = INT32_MIN;
	int64_t x216 = 32249706LL;
	static volatile int64_t t43 = -537513LL;

	t43 = ((x213<(x214&x215))-x216);

	if (t43 != -32249706LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = 871746;
	static int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	static int32_t t44 = 11;

	t44 = ((x217<(x218&x219))-x220);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = 64191855839290913LL;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	volatile int64_t t45 = 122890LL;

	t45 = ((x221<(x222&x223))-x224);

	if (t45 != 77436142890690LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x225 = 1079U;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	uint64_t t46 = 733LLU;

	t46 = ((x225<(x226&x227))-x228);

	if (t46 != 18446744073662847579LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = 0;
	volatile uint16_t x230 = 10286U;
	uint64_t x231 = 98621LLU;
	volatile int32_t t47 = 13;

	t47 = ((x229<(x230&x231))-x232);

	if (t47 != 32769) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x234 = -1;

	t48 = ((x233<(x234&x235))-x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x245 = INT32_MAX;
	int16_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;
	uint32_t t49 = 28553U;

	t49 = ((x245<(x246&x247))-x248);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t50 = 1035822;

	t50 = ((x249<(x250&x251))-x252);

	if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MAX;
	uint64_t x255 = 372850LLU;
	int8_t x256 = 0;
	volatile int32_t t51 = 12421;

	t51 = ((x253<(x254&x255))-x256);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x258 = -1LL;
	uint64_t x260 = 6170LLU;
	uint64_t t52 = 306LLU;

	t52 = ((x257<(x258&x259))-x260);

	if (t52 != 18446744073709545446LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 6U;
	int16_t x263 = 1159;
	int16_t x264 = INT16_MAX;

	t53 = ((x261<(x262&x263))-x264);

	if (t53 != -32766) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x265 = 230LLU;
	int64_t x267 = 330LL;
	uint8_t x268 = UINT8_MAX;

	t54 = ((x265<(x266&x267))-x268);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = -472241007LL;
	int64_t x270 = -1LL;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = -3916;
	int32_t t55 = -13075;

	t55 = ((x269<(x270&x271))-x272);

	if (t55 != 3916) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x273 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	volatile uint64_t x276 = 19LLU;
	volatile uint64_t t56 = 24010592611LLU;

	t56 = ((x273<(x274&x275))-x276);

	if (t56 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x278 = 26U;
	int8_t x279 = INT8_MIN;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t57 = 17345;

	t57 = ((x277<(x278&x279))-x280);

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x283 = INT8_MAX;
	uint16_t x284 = 1767U;
	volatile int32_t t58 = -12461036;

	t58 = ((x281<(x282&x283))-x284);

	if (t58 != -1767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = -1;
	int16_t x286 = -1;
	volatile uint32_t x288 = 56287U;
	volatile uint32_t t59 = 8U;

	t59 = ((x285<(x286&x287))-x288);

	if (t59 != 4294911009U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x290 = 4275302981LLU;
	int16_t x291 = -1;
	static int8_t x292 = -1;

	t60 = ((x289<(x290&x291))-x292);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x293 = UINT32_MAX;
	static uint32_t x294 = 48561589U;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MAX;

	t61 = ((x293<(x294&x295))-x296);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x297 = -428;
	int8_t x299 = 11;
	int8_t x300 = -1;
	static int32_t t62 = 26;

	t62 = ((x297<(x298&x299))-x300);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x301 = INT16_MAX;
	int32_t x304 = -1;

	t63 = ((x301<(x302&x303))-x304);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x305 = UINT32_MAX;
	int16_t x307 = -1;
	static volatile int32_t t64 = 211;

	t64 = ((x305<(x306&x307))-x308);

	if (t64 != -255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x309 = 19879U;
	static int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t65 = 101748U;

	t65 = ((x309<(x310&x311))-x312);

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = -1LL;
	static uint16_t x314 = 4U;
	int8_t x315 = INT8_MIN;
	volatile int64_t x316 = INT64_MAX;
	static volatile int64_t t66 = 108951304118LL;

	t66 = ((x313<(x314&x315))-x316);

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x318 = -10;
	uint32_t x319 = 47105U;
	uint8_t x320 = 76U;
	volatile int32_t t67 = 703080;

	t67 = ((x317<(x318&x319))-x320);

	if (t67 != -75) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x321 = 140194350808697582LL;
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t68 = 269452524579LL;

	t68 = ((x321<(x322&x323))-x324);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x325 = 0U;
	uint32_t x326 = 372248345U;
	int64_t x327 = -1LL;
	static volatile int32_t t69 = 815;

	t69 = ((x325<(x326&x327))-x328);

	if (t69 != -12) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x329 = 1096U;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = -1;

	t70 = ((x329<(x330&x331))-x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 0U;
	int32_t x338 = 47956839;
	int64_t x339 = 11170LL;
	int16_t x340 = 1;
	volatile int32_t t71 = -75;

	t71 = ((x337<(x338&x339))-x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int64_t x342 = 21113LL;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -1;
	volatile int32_t t72 = -244935969;

	t72 = ((x341<(x342&x343))-x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	volatile int8_t x346 = -1;
	volatile int64_t x347 = -1LL;
	uint16_t x348 = 483U;
	volatile int32_t t73 = 0;

	t73 = ((x345<(x346&x347))-x348);

	if (t73 != -482) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MAX;
	int32_t x351 = 104403;
	static volatile int32_t x352 = -1089079;
	static volatile int32_t t74 = -1041;

	t74 = ((x349<(x350&x351))-x352);

	if (t74 != 1089080) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x353 = 0;
	static int16_t x356 = INT16_MAX;
	int32_t t75 = 3555;

	t75 = ((x353<(x354&x355))-x356);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x357 = 1LLU;
	static int8_t x358 = INT8_MAX;
	static uint32_t x359 = 320U;
	int32_t t76 = -1029;

	t76 = ((x357<(x358&x359))-x360);

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x365 = 1;
	volatile uint8_t x366 = UINT8_MAX;
	int32_t x368 = -65075086;

	t77 = ((x365<(x366&x367))-x368);

	if (t77 != 65075087) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = INT32_MAX;
	uint16_t x370 = 221U;
	uint16_t x371 = 449U;
	uint8_t x372 = 72U;

	t78 = ((x369<(x370&x371))-x372);

	if (t78 != -72) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = -6;
	int8_t x374 = 2;
	static uint32_t x375 = UINT32_MAX;
	volatile int16_t x376 = INT16_MIN;
	int32_t t79 = -213;

	t79 = ((x373<(x374&x375))-x376);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 43U;
	int64_t x378 = -30630173820799940LL;
	int32_t x379 = -88227581;

	t80 = ((x377<(x378&x379))-x380);

	if (t80 != -5) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x382 = 3U;
	int64_t x383 = -607018LL;
	static int32_t t81 = -61281;

	t81 = ((x381<(x382&x383))-x384);

	if (t81 != -65534) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;

	t82 = ((x385<(x386&x387))-x388);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MIN;
	uint8_t x390 = 9U;
	int64_t x391 = -430LL;
	uint32_t t83 = 12U;

	t83 = ((x389<(x390&x391))-x392);

	if (t83 != 4294967139U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x394 = INT16_MIN;
	int64_t x395 = -2161263978248LL;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t84 = 73;

	t84 = ((x393<(x394&x395))-x396);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {


	t85 = ((x397<(x398&x399))-x400);

	if (t85 != 4291263558U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x401 = -1;
	int64_t x403 = -1LL;
	int32_t t86 = -7131430;

	t86 = ((x401<(x402&x403))-x404);

	if (t86 != 44162) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x405 = UINT64_MAX;
	int8_t x406 = INT8_MIN;
	volatile int32_t x408 = -1;
	volatile int32_t t87 = 8932946;

	t87 = ((x405<(x406&x407))-x408);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x414 = INT32_MAX;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MIN;

	t88 = ((x413<(x414&x415))-x416);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x417 = 3013U;
	uint16_t x418 = UINT16_MAX;
	static uint16_t x420 = UINT16_MAX;
	static int32_t t89 = -771312;

	t89 = ((x417<(x418&x419))-x420);

	if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x421 = 499920181874315LLU;
	static volatile int64_t x422 = INT64_MIN;
	uint16_t x423 = 2U;
	int64_t t90 = 767805187LL;

	t90 = ((x421<(x422&x423))-x424);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x425 = -1;
	int16_t x426 = INT16_MIN;
	static int16_t x427 = INT16_MIN;
	static int64_t x428 = -1LL;
	volatile int64_t t91 = -665LL;

	t91 = ((x425<(x426&x427))-x428);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = UINT64_MAX;
	int64_t x434 = -1LL;
	static int64_t x435 = -1109655400178750677LL;
	int64_t x436 = 72488829839761LL;

	t92 = ((x433<(x434&x435))-x436);

	if (t92 != -72488829839761LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = -1;
	uint32_t x438 = 17U;
	uint8_t x439 = UINT8_MAX;
	static int16_t x440 = -1;

	t93 = ((x437<(x438&x439))-x440);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = -91LL;
	uint64_t x446 = UINT64_MAX;
	volatile uint64_t x447 = 370688419597294LLU;
	uint8_t x448 = UINT8_MAX;

	t94 = ((x445<(x446&x447))-x448);

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x450 = 1U;
	int8_t x452 = INT8_MIN;
	int32_t t95 = -14;

	t95 = ((x449<(x450&x451))-x452);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x453 = -1;
	volatile int64_t x454 = INT64_MAX;
	volatile int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	volatile int32_t t96 = 15437;

	t96 = ((x453<(x454&x455))-x456);

	if (t96 != 32769) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = INT64_MIN;
	uint64_t x458 = UINT64_MAX;
	uint16_t x459 = 14U;
	int16_t x460 = INT16_MAX;
	volatile int32_t t97 = 135550;

	t97 = ((x457<(x458&x459))-x460);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x466 = INT8_MIN;
	static int16_t x467 = -1;
	uint64_t x468 = 39213161352661LLU;
	volatile uint64_t t98 = 236345954LLU;

	t98 = ((x465<(x466&x467))-x468);

	if (t98 != 18446704860548198956LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x469 = INT32_MAX;
	int16_t x470 = -3941;
	int8_t x471 = -1;
	volatile int8_t x472 = INT8_MIN;
	int32_t t99 = 28;

	t99 = ((x469<(x470&x471))-x472);

	if (t99 != 128) { NG(); } else { ; }
	
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

