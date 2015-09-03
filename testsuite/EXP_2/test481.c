#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
static uint32_t x28 = UINT32_MAX;
volatile int32_t x29 = 65306;
int64_t x32 = -40152LL;
volatile int64_t t5 = 3LL;
volatile int16_t x37 = INT16_MIN;
int32_t x40 = -1;
volatile uint64_t t8 = 296631513652343438LLU;
static uint16_t x51 = UINT16_MAX;
static int64_t x56 = INT64_MIN;
int16_t x60 = INT16_MIN;
int32_t t11 = 1;
int32_t t12 = 101;
uint8_t x66 = 86U;
static uint8_t x67 = 77U;
uint8_t x70 = 11U;
uint32_t t14 = UINT32_MAX;
volatile uint64_t t15 = 102605147866958LLU;
uint64_t t16 = 312LLU;
volatile int16_t x81 = 499;
int16_t x82 = INT16_MIN;
uint8_t x86 = 27U;
int16_t x96 = INT16_MIN;
int16_t x105 = INT16_MIN;
int16_t x109 = INT16_MAX;
int64_t x110 = -2969LL;
static uint8_t x112 = 0U;
int8_t x121 = 2;
uint64_t x133 = 18788429165LLU;
volatile uint32_t x134 = 2369U;
static volatile int16_t x140 = 2524;
int32_t t26 = -543655110;
int16_t x151 = -1;
int16_t x160 = -1970;
int32_t x165 = -738;
int16_t x167 = INT16_MIN;
volatile uint64_t t31 = 6553395LLU;
uint64_t x177 = 0LLU;
uint64_t t32 = UINT64_MAX;
static int16_t x186 = INT16_MIN;
volatile uint16_t x188 = 126U;
uint8_t x205 = 1U;
int16_t x207 = INT16_MIN;
static int8_t x214 = -1;
volatile int32_t x224 = -1;
volatile int32_t x228 = INT32_MIN;
volatile int32_t t39 = -36442081;
static volatile uint64_t t42 = 5142752667LLU;
uint16_t x244 = UINT16_MAX;
int32_t x249 = INT32_MAX;
uint16_t x253 = UINT16_MAX;
volatile int64_t x254 = -1LL;
volatile int64_t t45 = 247420472LL;
int64_t x259 = -148LL;
volatile uint32_t t49 = UINT32_MAX;
int64_t x280 = INT64_MIN;
int64_t t52 = 2710110353384110061LL;
uint32_t x294 = 213U;
uint32_t x295 = 10451673U;
uint32_t x298 = 141831533U;
static int16_t x299 = -1;
int8_t x301 = -9;
volatile int16_t x306 = 9;
int8_t x307 = -35;
int64_t t58 = -57722272701LL;
static int16_t x322 = INT16_MIN;
int8_t x329 = INT8_MAX;
uint16_t x330 = 125U;
static int8_t x335 = INT8_MAX;
static uint32_t x336 = 756U;
volatile int8_t x337 = INT8_MAX;
int32_t t64 = -34469548;
uint8_t x359 = UINT8_MAX;
volatile int64_t x360 = INT64_MIN;
static volatile int64_t x368 = -817559763442323265LL;
static int8_t x378 = INT8_MAX;
static volatile int8_t x381 = INT8_MAX;
int64_t x385 = -324341953LL;
uint32_t x386 = 2111965473U;
int32_t x387 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
uint16_t x406 = 2818U;
static uint8_t x411 = 11U;
uint64_t t76 = 1716338016LLU;
uint16_t x419 = 230U;
int16_t x422 = INT16_MIN;
int8_t x424 = INT8_MIN;
static int16_t x434 = -1;
static uint64_t t82 = 26524LLU;
int32_t x441 = INT32_MIN;
uint64_t t83 = 659943534LLU;
volatile int32_t t84 = 559983181;
uint32_t x451 = 1679U;
uint32_t t85 = 2388U;
int64_t x457 = INT64_MAX;
uint64_t x463 = 24673LLU;
int64_t x464 = INT64_MAX;
int16_t x465 = 122;
int8_t x467 = INT8_MAX;
static uint64_t x478 = 6511592177696LLU;
static volatile uint64_t x482 = UINT64_MAX;
int32_t x486 = 349;
static uint64_t x490 = 101911057675626969LLU;
int64_t x492 = INT64_MIN;
static volatile uint64_t t94 = 510973871616LLU;
static int8_t x495 = -1;
static volatile uint64_t t95 = 469814365160LLU;
static int32_t x506 = -1;
static int8_t x507 = INT8_MIN;
int16_t x510 = -2416;
uint64_t t98 = 123646589459LLU;
int8_t x519 = -29;
static uint32_t t99 = 511U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = -84776454392415841LL;
	uint64_t x3 = UINT64_MAX;
	uint64_t t0 = 57005979LLU;

	t0 = ((x1&(x2*x3))^x4);

	if (t0 != 84776454883082239LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int16_t x6 = INT16_MIN;
	uint16_t x7 = 0U;
	int32_t x8 = INT32_MIN;
	uint64_t t1 = 1848544LLU;

	t1 = ((x5&(x6*x7))^x8);

	if (t1 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint16_t x10 = 13U;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	int64_t t2 = INT64_MAX;

	t2 = ((x9&(x10*x11))^x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 69U;
	static uint16_t x18 = 5851U;
	static int16_t x19 = 14;
	uint8_t x20 = 3U;
	static int32_t t3 = -50;

	t3 = ((x17&(x18*x19))^x20);

	if (t3 != 67) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -29;
	int16_t x26 = INT16_MIN;
	int16_t x27 = 25;
	uint32_t t4 = 0U;

	t4 = ((x25&(x26*x27))^x28);

	if (t4 != 819199U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = 819U;
	int16_t x31 = INT16_MAX;

	t5 = ((x29&(x30*x31))^x32);

	if (t5 != -57568LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x38 = INT16_MIN;
	static volatile int8_t x39 = INT8_MIN;
	volatile int32_t t6 = -554;

	t6 = ((x37&(x38*x39))^x40);

	if (t6 != -4194305) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 0U;
	uint64_t x42 = UINT64_MAX;
	volatile uint16_t x43 = 2940U;
	int8_t x44 = -46;
	static volatile uint64_t t7 = 26008LLU;

	t7 = ((x41&(x42*x43))^x44);

	if (t7 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = INT16_MIN;
	uint64_t x46 = 3205539530812826934LLU;
	int32_t x47 = -1;
	int16_t x48 = -19;

	t8 = ((x45&(x46*x47))^x48);

	if (t8 != 3205539530812850157LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -1LL;
	uint16_t x52 = UINT16_MAX;
	volatile int64_t t9 = 15LL;

	t9 = ((x49&(x50*x51))^x52);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	static volatile int32_t x55 = 11467;
	volatile int64_t t10 = -40LL;

	t10 = ((x53&(x54*x55))^x56);

	if (t10 != 9223372036853301248LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -24;
	int8_t x58 = INT8_MAX;
	volatile int8_t x59 = 0;

	t11 = ((x57&(x58*x59))^x60);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	volatile uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;

	t12 = ((x61&(x62*x63))^x64);

	if (t12 != -32640) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 31U;
	int64_t x68 = INT64_MAX;
	volatile int64_t t13 = -4295165952484LL;

	t13 = ((x65&(x66*x67))^x68);

	if (t13 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 26U;
	int16_t x71 = INT16_MIN;
	volatile int8_t x72 = -1;

	t14 = ((x69&(x70*x71))^x72);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 113526929860948LLU;
	volatile int64_t x74 = -1LL;
	uint64_t x75 = 3LLU;
	int32_t x76 = -1;

	t15 = ((x73&(x74*x75))^x76);

	if (t15 != 18446630546779690667LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -1;
	int32_t x78 = -1;
	static volatile int16_t x79 = INT16_MIN;
	uint64_t x80 = 625664958226LLU;

	t16 = ((x77&(x78*x79))^x80);

	if (t16 != 625664925458LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x83 = INT16_MAX;
	int32_t x84 = -2478986;
	static volatile int32_t t17 = -11820;

	t17 = ((x81&(x82*x83))^x84);

	if (t17 != -2478986) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -129370661658473943LL;
	volatile int16_t x87 = 1;
	int32_t x88 = -9755620;
	volatile int64_t t18 = -491610661930763LL;

	t18 = ((x85&(x86*x87))^x88);

	if (t18 != -9755627LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = -1LL;
	uint16_t x94 = 1U;
	int16_t x95 = 1657;
	volatile int64_t t19 = -78010904639LL;

	t19 = ((x93&(x94*x95))^x96);

	if (t19 != -31111LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MAX;
	static uint32_t x108 = 163640953U;
	uint32_t t20 = 12474U;

	t20 = ((x105&(x106*x107))^x108);

	if (t20 != 163575417U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x111 = 512041954;
	static int64_t t21 = 13649216475LL;

	t21 = ((x109&(x110*x111))^x112);

	if (t21 != 22510LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x122 = INT16_MIN;
	static volatile uint32_t x123 = 40U;
	int8_t x124 = 7;
	volatile uint32_t t22 = 6U;

	t22 = ((x121&(x122*x123))^x124);

	if (t22 != 7U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = -1LL;
	int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MIN;
	int32_t x128 = 7730671;
	static volatile int64_t t23 = 7250LL;

	t23 = ((x125&(x126*x127))^x128);

	if (t23 != 7714287LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	uint64_t t24 = 3170269029464630336LLU;

	t24 = ((x133&(x134*x135))^x136);

	if (t24 != 18446744072101006592LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 5093030373194LLU;
	static uint8_t x138 = UINT8_MAX;
	int64_t x139 = -1LL;
	static uint64_t t25 = 55LLU;

	t25 = ((x137&(x138*x139))^x140);

	if (t25 != 5093030375132LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = -16260;
	uint16_t x146 = 50U;
	int32_t x147 = 38350;
	uint16_t x148 = 35U;

	t26 = ((x145&(x146*x147))^x148);

	if (t26 != 1916959) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	int16_t x152 = -1;
	volatile int32_t t27 = 518865576;

	t27 = ((x149&(x150*x151))^x152);

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x153 = INT16_MIN;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = 1;
	volatile uint16_t x156 = 0U;
	volatile int32_t t28 = -18207758;

	t28 = ((x153&(x154*x155))^x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = 15LL;
	volatile uint16_t x158 = 279U;
	uint64_t x159 = 0LLU;
	volatile uint64_t t29 = 69784272721922LLU;

	t29 = ((x157&(x158*x159))^x160);

	if (t29 != 18446744073709549646LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = 5040;
	volatile uint32_t t30 = 3U;

	t30 = ((x165&(x166*x167))^x168);

	if (t30 != 37808U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MIN;
	static int32_t x171 = -1928487;
	volatile uint64_t x172 = 865647285159448434LLU;

	t31 = ((x169&(x170*x171))^x172);

	if (t31 != 865647285159448562LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x178 = 1203U;
	uint64_t x179 = UINT64_MAX;
	static uint64_t x180 = UINT64_MAX;

	t32 = ((x177&(x178*x179))^x180);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x185 = INT8_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	volatile uint32_t t33 = 282093U;

	t33 = ((x185&(x186*x187))^x188);

	if (t33 != 126U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = UINT64_MAX;
	uint8_t x198 = UINT8_MAX;
	volatile int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	uint64_t t34 = 1LLU;

	t34 = ((x197&(x198*x199))^x200);

	if (t34 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x206 = UINT16_MAX;
	volatile int8_t x208 = INT8_MIN;
	int32_t t35 = -8062;

	t35 = ((x205&(x206*x207))^x208);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x213 = 19445007U;
	int64_t x215 = -3LL;
	static int16_t x216 = INT16_MAX;
	int64_t t36 = -32936014833LL;

	t36 = ((x213&(x214*x215))^x216);

	if (t36 != 32764LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x217 = 3616;
	volatile int16_t x218 = -1982;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 3351U;
	uint32_t t37 = 15U;

	t37 = ((x217&(x218*x219))^x220);

	if (t37 != 3351U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x221 = 8;
	volatile uint64_t x222 = 269224503245923LLU;
	int64_t x223 = 17468737418110418LL;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x221&(x222*x223))^x224);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x225 = -1;
	static uint16_t x226 = 1322U;
	volatile uint16_t x227 = UINT16_MAX;

	t39 = ((x225&(x226*x227))^x228);

	if (t39 != -2060846378) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = 2;
	volatile int16_t x230 = INT16_MIN;
	uint16_t x231 = 1U;
	int8_t x232 = 4;
	int32_t t40 = -72;

	t40 = ((x229&(x230*x231))^x232);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = INT8_MIN;
	static volatile uint32_t x234 = UINT32_MAX;
	static uint16_t x235 = 4U;
	static volatile int32_t x236 = -1;
	static uint32_t t41 = 3U;

	t41 = ((x233&(x234*x235))^x236);

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = 1476566349219LLU;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = UINT64_MAX;

	t42 = ((x237&(x238*x239))^x240);

	if (t42 != 16508853530526744575LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x241 = INT8_MIN;
	uint64_t x242 = 19588701680016LLU;
	volatile int32_t x243 = -1;
	volatile uint64_t t43 = 42LLU;

	t43 = ((x241&(x242*x243))^x244);

	if (t43 != 18446724485007929855LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x250 = 13U;
	uint32_t x251 = UINT32_MAX;
	static int32_t x252 = INT32_MIN;
	volatile uint32_t t44 = 699732385U;

	t44 = ((x249&(x250*x251))^x252);

	if (t44 != 4294967283U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x255 = -1;
	int32_t x256 = INT32_MIN;

	t45 = ((x253&(x254*x255))^x256);

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x257 = -1;
	volatile int32_t x258 = 127974228;
	int16_t x260 = INT16_MIN;
	volatile int64_t t46 = -186968978LL;

	t46 = ((x257&(x258*x259))^x260);

	if (t46 != 18940179312LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x265 = 11U;
	int8_t x266 = INT8_MAX;
	uint16_t x267 = 60U;
	uint8_t x268 = 2U;
	int32_t t47 = 1;

	t47 = ((x265&(x266*x267))^x268);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = -1;
	uint8_t x271 = 32U;
	int8_t x272 = -1;
	volatile int32_t t48 = 881890;

	t48 = ((x269&(x270*x271))^x272);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MIN;
	volatile uint32_t x276 = UINT32_MAX;

	t49 = ((x273&(x274*x275))^x276);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile int8_t x278 = 3;
	uint32_t x279 = 6U;
	static volatile int64_t t50 = 95LL;

	t50 = ((x277&(x278*x279))^x280);

	if (t50 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x281 = -16506893622043LL;
	int8_t x282 = 0;
	uint8_t x283 = 27U;
	volatile int16_t x284 = -1;
	static int64_t t51 = 1LL;

	t51 = ((x281&(x282*x283))^x284);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x285 = 56789LL;
	int16_t x286 = 25;
	int16_t x287 = 99;
	int8_t x288 = -1;

	t52 = ((x285&(x286*x287))^x288);

	if (t52 != -2434LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x293 = 7;
	volatile int16_t x296 = -450;
	volatile uint32_t t53 = 41U;

	t53 = ((x293&(x294*x295))^x296);

	if (t53 != 4294966843U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x297 = UINT16_MAX;
	volatile uint16_t x300 = 22U;
	volatile uint32_t t54 = 17U;

	t54 = ((x297&(x298*x299))^x300);

	if (t54 != 53893U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x302 = -1;
	static int32_t x303 = -1;
	static uint32_t x304 = UINT32_MAX;
	uint32_t t55 = 154U;

	t55 = ((x301&(x302*x303))^x304);

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = INT64_MAX;
	int16_t x308 = INT16_MIN;
	static int64_t t56 = 7480078031LL;

	t56 = ((x305&(x306*x307))^x308);

	if (t56 != -9223372036854743355LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x309 = 473U;
	uint8_t x310 = UINT8_MAX;
	volatile uint16_t x311 = 0U;
	int32_t x312 = 439933013;
	int32_t t57 = 65402274;

	t57 = ((x309&(x310*x311))^x312);

	if (t57 != 439933013) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x313 = 1350057322U;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -3895532LL;
	int64_t x316 = 338LL;

	t58 = ((x313&(x314*x315))^x316);

	if (t58 != 3682618LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	static uint32_t x319 = 5139U;
	int16_t x320 = INT16_MIN;
	uint32_t t59 = 605257199U;

	t59 = ((x317&(x318*x319))^x320);

	if (t59 != 168361984U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = INT8_MAX;
	volatile int16_t x323 = 2;
	int8_t x324 = INT8_MIN;
	volatile int32_t t60 = 888829;

	t60 = ((x321&(x322*x323))^x324);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x331 = INT16_MAX;
	int64_t x332 = -384235051917386LL;
	int64_t t61 = 1LL;

	t61 = ((x329&(x330*x331))^x332);

	if (t61 != -384235051917387LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = INT8_MAX;
	uint8_t x334 = UINT8_MAX;
	uint32_t t62 = 8886U;

	t62 = ((x333&(x334*x335))^x336);

	if (t62 != 757U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x338 = 17U;
	volatile uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1999819;
	volatile uint32_t t63 = 111705U;

	t63 = ((x337&(x338*x339))^x340);

	if (t63 != 4292967514U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -157;
	int8_t x342 = 7;
	int16_t x343 = INT16_MAX;
	int16_t x344 = 695;

	t64 = ((x341&(x342*x343))^x344);

	if (t64 != 228822) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x345 = 4212U;
	static int32_t x346 = 1207429;
	int64_t x347 = -77266LL;
	int16_t x348 = INT16_MIN;
	volatile int64_t t65 = -6085854217LL;

	t65 = ((x345&(x346*x347))^x348);

	if (t65 != -28572LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x353 = 270U;
	int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	uint32_t x356 = 54582U;
	volatile uint32_t t66 = 8497U;

	t66 = ((x353&(x354*x355))^x356);

	if (t66 != 54582U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = 1U;
	uint16_t x358 = UINT16_MAX;
	int64_t t67 = -118725666342LL;

	t67 = ((x357&(x358*x359))^x360);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	static uint64_t x367 = 567209586466LLU;
	volatile uint64_t t68 = 7313871LLU;

	t68 = ((x365&(x366*x367))^x368);

	if (t68 != 17629184310267228351LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x373 = -1LL;
	static uint16_t x374 = UINT16_MAX;
	static int8_t x375 = INT8_MAX;
	static uint32_t x376 = 4410U;
	volatile int64_t t69 = -3170975838743835LL;

	t69 = ((x373&(x374*x375))^x376);

	if (t69 != 8318651LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t70 = -1889;

	t70 = ((x377&(x378*x379))^x380);

	if (t70 != -2139193344) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x382 = 10550LLU;
	int64_t x383 = -1LL;
	uint64_t x384 = 0LLU;
	volatile uint64_t t71 = 9LLU;

	t71 = ((x381&(x382*x383))^x384);

	if (t71 != 74LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t72 = 809042920LLU;

	t72 = ((x385&(x386*x387))^x388);

	if (t72 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x389 = 9U;
	volatile int64_t x390 = -694550LL;
	int16_t x391 = -80;
	int64_t t73 = -4088848355205207LL;

	t73 = ((x389&(x390*x391))^x392);

	if (t73 != 65535LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x397 = INT16_MAX;
	static uint16_t x398 = 1908U;
	volatile uint32_t x399 = UINT32_MAX;
	uint32_t x400 = 19365248U;
	static volatile uint32_t t74 = 1171383U;

	t74 = ((x397&(x398*x399))^x400);

	if (t74 != 19334412U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x405 = INT64_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = INT32_MAX;
	int64_t t75 = 6945573LL;

	t75 = ((x405&(x406*x407))^x408);

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = UINT32_MAX;
	int8_t x410 = -1;
	uint64_t x412 = UINT64_MAX;

	t76 = ((x409&(x410*x411))^x412);

	if (t76 != 18446744069414584330LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x413 = 4U;
	int16_t x414 = -1;
	int16_t x415 = INT16_MIN;
	uint64_t x416 = 1658385991493LLU;
	static uint64_t t77 = 140349483LLU;

	t77 = ((x413&(x414*x415))^x416);

	if (t77 != 1658385991493LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x417 = UINT16_MAX;
	int64_t x418 = -1LL;
	volatile uint8_t x420 = UINT8_MAX;
	int64_t t78 = -5924741611536887LL;

	t78 = ((x417&(x418*x419))^x420);

	if (t78 != 65509LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x423 = 538344342800LL;
	uint64_t t79 = 193818571LLU;

	t79 = ((x421&(x422*x423))^x424);

	if (t79 != 17640467424870272LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x425 = -1;
	static int16_t x426 = 1;
	static int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MAX;
	int32_t t80 = -3253425;

	t80 = ((x425&(x426*x427))^x428);

	if (t80 != -2147450881) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = -1;
	volatile int32_t x435 = -1;
	int8_t x436 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x433&(x434*x435))^x436);

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x437 = -1;
	static uint64_t x438 = 1818773371LLU;
	uint64_t x439 = 243525826919LLU;
	volatile int64_t x440 = -1LL;

	t82 = ((x437&(x438*x439))^x440);

	if (t82 != 18250312691706616450LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x442 = 4043260LLU;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MIN;

	t83 = ((x441&(x442*x443))^x444);

	if (t83 != 133143986048LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MAX;
	static uint8_t x447 = UINT8_MAX;
	static uint16_t x448 = 0U;

	t84 = ((x445&(x446*x447))^x448);

	if (t84 != 8355584) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x449 = 30;
	int32_t x450 = -1;
	int8_t x452 = -1;

	t85 = ((x449&(x450*x451))^x452);

	if (t85 != 4294967279U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x453 = UINT16_MAX;
	volatile uint32_t x454 = 65499297U;
	int8_t x455 = -21;
	int64_t x456 = INT64_MIN;
	static volatile int64_t t86 = -913688LL;

	t86 = ((x453&(x454*x455))^x456);

	if (t86 != -9223372036854725941LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x458 = INT8_MAX;
	uint16_t x459 = 0U;
	int32_t x460 = INT32_MIN;
	static volatile int64_t t87 = 0LL;

	t87 = ((x457&(x458*x459))^x460);

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x461 = -1;
	volatile int16_t x462 = -1;
	uint64_t t88 = 4063233410970138LLU;

	t88 = ((x461&(x462*x463))^x464);

	if (t88 != 9223372036854800480LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x466 = 252837538LLU;
	volatile int16_t x468 = INT16_MIN;
	volatile uint64_t t89 = 6365LLU;

	t89 = ((x465&(x466*x467))^x468);

	if (t89 != 18446744073709518938LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x473 = UINT8_MAX;
	uint64_t x474 = 267939586LLU;
	static uint8_t x475 = UINT8_MAX;
	uint32_t x476 = 110308201U;
	static uint64_t t90 = 3987381228062238335LLU;

	t90 = ((x473&(x474*x475))^x476);

	if (t90 != 110308247LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -442;
	static volatile int64_t x479 = INT64_MIN;
	uint32_t x480 = UINT32_MAX;
	uint64_t t91 = 4803373156577717LLU;

	t91 = ((x477&(x478*x479))^x480);

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x481 = INT16_MIN;
	int8_t x483 = 3;
	uint16_t x484 = 39U;
	volatile uint64_t t92 = 3LLU;

	t92 = ((x481&(x482*x483))^x484);

	if (t92 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x485 = 0;
	volatile uint16_t x487 = 1383U;
	static uint8_t x488 = UINT8_MAX;
	int32_t t93 = 104448866;

	t93 = ((x485&(x486*x487))^x488);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x489 = 14U;
	int8_t x491 = -1;

	t94 = ((x489&(x490*x491))^x492);

	if (t94 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x493 = 33590680501LLU;
	static int16_t x494 = INT16_MIN;
	int32_t x496 = INT32_MIN;

	t95 = ((x493&(x494*x495))^x496);

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x501 = 11024154662061765LLU;
	int16_t x502 = 2959;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MAX;
	static uint64_t t96 = 70513732638219532LLU;

	t96 = ((x501&(x502*x503))^x504);

	if (t96 != 11024154661748991LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x505 = INT64_MAX;
	int8_t x508 = INT8_MIN;
	volatile int64_t t97 = 4466324LL;

	t97 = ((x505&(x506*x507))^x508);

	if (t97 != -256LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x509 = 3717458LLU;
	uint32_t x511 = 736U;
	volatile int8_t x512 = INT8_MIN;

	t98 = ((x509&(x510*x511))^x512);

	if (t98 != 18446744073707415424LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x517 = -13;
	int32_t x518 = 38806;
	static uint32_t x520 = 393U;

	t99 = ((x517&(x518*x519))^x520);

	if (t99 != 4293842315U) { NG(); } else { ; }
	
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

