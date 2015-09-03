#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = 2310443;
uint16_t x68 = UINT16_MAX;
uint32_t x71 = UINT32_MAX;
static volatile uint32_t x78 = 5328860U;
uint32_t x80 = UINT32_MAX;
int8_t x83 = INT8_MIN;
int32_t t16 = -503584;
static int8_t x101 = INT8_MAX;
int32_t t17 = -515584722;
static volatile int32_t x105 = -6;
int8_t x108 = INT8_MIN;
static volatile int32_t t18 = 1023;
volatile int32_t t19 = 211667652;
int64_t x129 = -1LL;
volatile int64_t x131 = -1LL;
int32_t t24 = 29;
int8_t x138 = -1;
static int32_t x147 = INT32_MIN;
uint64_t x148 = 2533LLU;
uint32_t t26 = 460732559U;
static int64_t x158 = 1824127LL;
static volatile uint64_t x160 = 224775950673LLU;
static uint64_t x163 = UINT64_MAX;
int64_t x168 = -468840591088011671LL;
static int32_t t29 = 66900784;
int32_t x178 = -1;
int32_t t32 = 2;
int8_t x205 = INT8_MIN;
uint16_t x206 = 319U;
static int8_t x226 = INT8_MAX;
volatile int32_t t39 = -8395819;
uint64_t x246 = 84LLU;
int32_t t42 = 1744;
volatile uint64_t t43 = 256611830709679507LLU;
int64_t x259 = -1LL;
static volatile int64_t x260 = 9852688LL;
static volatile uint8_t x263 = 0U;
int32_t x264 = -573441595;
uint8_t x267 = 87U;
int16_t x269 = INT16_MIN;
int16_t x273 = INT16_MIN;
volatile int8_t x285 = INT8_MAX;
uint64_t x294 = 231662733107867719LLU;
int64_t t51 = 86153404LL;
int16_t x299 = INT16_MIN;
int64_t x300 = -1LL;
int16_t x305 = INT16_MIN;
static volatile uint32_t x306 = 49592460U;
uint64_t x321 = 928304525LLU;
int32_t x327 = -1;
uint64_t x331 = 4396263659534LLU;
volatile uint32_t t58 = UINT32_MAX;
int64_t x337 = INT64_MIN;
int64_t x340 = INT64_MIN;
static uint64_t x353 = 6354641351LLU;
int32_t x364 = INT32_MIN;
int8_t x365 = INT8_MIN;
volatile int16_t x367 = -1;
volatile uint32_t x371 = 39693U;
volatile int8_t x372 = INT8_MIN;
uint64_t t66 = 27466098051LLU;
uint16_t x373 = 1U;
int32_t x380 = INT32_MIN;
static int32_t t71 = 45648365;
uint8_t x415 = 80U;
int16_t x416 = INT16_MAX;
static uint16_t x418 = UINT16_MAX;
int8_t x420 = INT8_MIN;
int64_t x424 = INT64_MAX;
volatile int64_t x425 = -1LL;
static int8_t x428 = INT8_MIN;
uint32_t x432 = UINT32_MAX;
int16_t x441 = INT16_MAX;
int8_t x443 = -1;
static int8_t x446 = INT8_MAX;
volatile int16_t x447 = INT16_MIN;
int8_t x450 = -1;
volatile int16_t x452 = -1;
uint64_t x456 = 91137530654LLU;
uint32_t x462 = 7504U;
uint64_t x463 = 6036943533537848LLU;
static int16_t x466 = INT16_MAX;
uint16_t x475 = 20172U;
int8_t x492 = INT8_MIN;
static volatile int32_t t91 = 1648;
int64_t x493 = INT64_MIN;
int64_t x500 = INT64_MAX;
volatile uint8_t x511 = 0U;
static int64_t t97 = 5LL;
volatile int64_t t98 = INT64_MIN;


void f0(void) {
	volatile uint32_t x1 = 769585U;
	int32_t x2 = -1;
	int16_t x3 = -1;
	static int64_t x4 = -1LL;
	volatile uint32_t t0 = 25878U;

	t0 = (x1|((x2*x3)<=x4));

	if (t0 != 769585U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int64_t x6 = -1LL;
	static int32_t x7 = -1;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = -17;

	t1 = (x5|((x6*x7)<=x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 225U;
	int16_t x11 = INT16_MAX;
	volatile uint16_t x12 = 71U;
	int32_t t2 = 81;

	t2 = (x9|((x10*x11)<=x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static uint16_t x18 = 4129U;
	int8_t x19 = INT8_MAX;
	uint64_t x20 = 0LLU;

	t3 = (x17|((x18*x19)<=x20));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = -1;
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	int8_t x24 = 23;
	static int32_t t4 = 926;

	t4 = (x21|((x22*x23)<=x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	static int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	static int32_t t5 = 0;

	t5 = (x25|((x26*x27)<=x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -15;
	volatile uint32_t x38 = UINT32_MAX;
	volatile int32_t x39 = INT32_MAX;
	static int64_t x40 = 593475LL;
	static int32_t t6 = -15024;

	t6 = (x37|((x38*x39)<=x40));

	if (t6 != -15) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x41 = INT64_MIN;
	uint32_t x42 = 0U;
	uint16_t x43 = 6U;
	int32_t x44 = INT32_MAX;
	volatile int64_t t7 = 124944LL;

	t7 = (x41|((x42*x43)<=x44));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -73;
	uint8_t x46 = UINT8_MAX;
	static uint16_t x47 = 42U;
	volatile int8_t x48 = INT8_MIN;
	int32_t t8 = 2;

	t8 = (x45|((x46*x47)<=x48));

	if (t8 != -73) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = INT8_MIN;
	static int16_t x66 = -15130;
	uint16_t x67 = 8U;
	volatile int32_t t9 = -1105;

	t9 = (x65|((x66*x67)<=x68));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x69 = 971134385913676LLU;
	int16_t x70 = INT16_MIN;
	int32_t x72 = INT32_MAX;
	uint64_t t10 = 143380LLU;

	t10 = (x69|((x70*x71)<=x72));

	if (t10 != 971134385913677LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = 2512451307LLU;
	uint64_t x74 = 11710565555982314LLU;
	volatile uint16_t x75 = 19U;
	int8_t x76 = -6;
	uint64_t t11 = 4LLU;

	t11 = (x73|((x74*x75)<=x76));

	if (t11 != 2512451307LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = 36;
	static int16_t x79 = INT16_MAX;
	volatile int32_t t12 = -31239634;

	t12 = (x77|((x78*x79)<=x80));

	if (t12 != 37) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x81 = -1;
	uint64_t x82 = 6416670107610120LLU;
	int32_t x84 = INT32_MIN;
	static int32_t t13 = 159342;

	t13 = (x81|((x82*x83)<=x84));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int32_t x86 = -6;
	int16_t x87 = 1618;
	static int32_t x88 = -32891;
	volatile int32_t t14 = 243850;

	t14 = (x85|((x86*x87)<=x88));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 7820U;
	int64_t x90 = -191645925LL;
	int32_t x91 = 0;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t15 = -125266;

	t15 = (x89|((x90*x91)<=x92));

	if (t15 != 7821) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	static int16_t x98 = 7;
	static int8_t x99 = -1;
	static volatile uint64_t x100 = UINT64_MAX;

	t16 = (x97|((x98*x99)<=x100));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x102 = 1660883LLU;
	uint16_t x103 = 2U;
	uint32_t x104 = 667098052U;

	t17 = (x101|((x102*x103)<=x104));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = -1;
	uint8_t x107 = 18U;

	t18 = (x105|((x106*x107)<=x108));

	if (t18 != -6) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -838898000;
	int8_t x110 = -1;
	static int64_t x111 = 119LL;
	volatile int64_t x112 = -208836875219LL;

	t19 = (x109|((x110*x111)<=x112));

	if (t19 != -838898000) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 329678675U;
	static int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	static int8_t x116 = -1;
	uint32_t t20 = 2U;

	t20 = (x113|((x114*x115)<=x116));

	if (t20 != 329678675U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 1U;
	static uint8_t x120 = 3U;
	static volatile uint32_t t21 = UINT32_MAX;

	t21 = (x117|((x118*x119)<=x120));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x121 = 498U;
	volatile uint8_t x122 = UINT8_MAX;
	static int32_t x123 = -1;
	int16_t x124 = -8164;
	volatile uint32_t t22 = 112509090U;

	t22 = (x121|((x122*x123)<=x124));

	if (t22 != 498U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x130 = -22;
	static int16_t x132 = 2433;
	volatile int64_t t23 = -451LL;

	t23 = (x129|((x130*x131)<=x132));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MIN;
	volatile uint8_t x134 = 46U;
	int64_t x135 = -1253387692908427LL;
	int16_t x136 = 1678;

	t24 = (x133|((x134*x135)<=x136));

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x137 = 227628640421762629LLU;
	volatile int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t25 = 937383983318LLU;

	t25 = (x137|((x138*x139)<=x140));

	if (t25 != 227628640421762629LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x145 = 431794U;
	static volatile int32_t x146 = 1;

	t26 = (x145|((x146*x147)<=x148));

	if (t26 != 431794U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x157 = UINT16_MAX;
	int64_t x159 = -23355969LL;
	static volatile int32_t t27 = -12366433;

	t27 = (x157|((x158*x159)<=x160));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = -1;
	uint32_t x162 = 313U;
	static int64_t x164 = -157139053347LL;
	static volatile int32_t t28 = -1;

	t28 = (x161|((x162*x163)<=x164));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x165 = 62U;
	int16_t x166 = -1;
	int32_t x167 = -1;

	t29 = (x165|((x166*x167)<=x168));

	if (t29 != 62) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = 3;
	uint64_t x170 = 9237337148LLU;
	volatile uint8_t x171 = UINT8_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	static volatile int32_t t30 = 140036160;

	t30 = (x169|((x170*x171)<=x172));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = -1;
	uint8_t x179 = UINT8_MAX;
	uint16_t x180 = 14U;
	volatile int32_t t31 = 86890361;

	t31 = (x177|((x178*x179)<=x180));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MIN;
	static uint8_t x182 = UINT8_MAX;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = 0;

	t32 = (x181|((x182*x183)<=x184));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x189 = 143U;
	volatile int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -5136885LL;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t33 = 8U;

	t33 = (x189|((x190*x191)<=x192));

	if (t33 != 143U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = 14094409755674LLU;
	int64_t x203 = INT64_MIN;
	static uint32_t x204 = 0U;
	volatile int32_t t34 = 15949;

	t34 = (x201|((x202*x203)<=x204));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x207 = -1LL;
	int8_t x208 = 1;
	int32_t t35 = -360;

	t35 = (x205|((x206*x207)<=x208));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = 1;
	int64_t x216 = INT64_MIN;
	volatile int32_t t36 = -37330455;

	t36 = (x213|((x214*x215)<=x216));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x217 = INT8_MIN;
	int8_t x218 = 0;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t37 = 938;

	t37 = (x217|((x218*x219)<=x220));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x225 = -1LL;
	int8_t x227 = -4;
	int64_t x228 = -507LL;
	static volatile int64_t t38 = 10061LL;

	t38 = (x225|((x226*x227)<=x228));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x229 = 664U;
	int32_t x230 = -1;
	uint16_t x231 = 747U;
	static int64_t x232 = 7636LL;

	t39 = (x229|((x230*x231)<=x232));

	if (t39 != 665) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = -1LL;
	int64_t x234 = -1LL;
	volatile int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MIN;
	int64_t t40 = -1565LL;

	t40 = (x233|((x234*x235)<=x236));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = INT64_MIN;
	static uint32_t x247 = 13476U;
	uint16_t x248 = 332U;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x245|((x246*x247)<=x248));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x249 = 0U;
	volatile int8_t x250 = -1;
	int32_t x251 = 62;
	uint64_t x252 = 48813673436661LLU;

	t42 = (x249|((x250*x251)<=x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x253 = 1404085855795126LLU;
	int32_t x254 = INT32_MAX;
	int64_t x255 = -1LL;
	volatile int8_t x256 = INT8_MIN;

	t43 = (x253|((x254*x255)<=x256));

	if (t43 != 1404085855795127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x257 = UINT32_MAX;
	static uint8_t x258 = UINT8_MAX;
	uint32_t t44 = UINT32_MAX;

	t44 = (x257|((x258*x259)<=x260));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x261 = 2U;
	int32_t x262 = -28566349;
	int32_t t45 = 229;

	t45 = (x261|((x262*x263)<=x264));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x265 = 18;
	int8_t x266 = INT8_MIN;
	int8_t x268 = INT8_MAX;
	static volatile int32_t t46 = 0;

	t46 = (x265|((x266*x267)<=x268));

	if (t46 != 19) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x270 = 0U;
	volatile uint16_t x271 = 2754U;
	int32_t x272 = 3;
	volatile int32_t t47 = -421529899;

	t47 = (x269|((x270*x271)<=x272));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x274 = 43LLU;
	static int16_t x275 = INT16_MAX;
	uint16_t x276 = 1U;
	volatile int32_t t48 = 6366851;

	t48 = (x273|((x274*x275)<=x276));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 1U;
	uint32_t x288 = 175257U;
	int32_t t49 = 2;

	t49 = (x285|((x286*x287)<=x288));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x289 = 0U;
	volatile uint8_t x290 = 47U;
	uint8_t x291 = 8U;
	int32_t x292 = INT32_MIN;
	volatile int32_t t50 = -14;

	t50 = (x289|((x290*x291)<=x292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x293 = 2LL;
	int32_t x295 = INT32_MIN;
	static int64_t x296 = -1LL;

	t51 = (x293|((x294*x295)<=x296));

	if (t51 != 3LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 7U;
	int16_t x298 = INT16_MAX;
	volatile int32_t t52 = -8;

	t52 = (x297|((x298*x299)<=x300));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x307 = 0U;
	int8_t x308 = -60;
	int32_t t53 = -16193;

	t53 = (x305|((x306*x307)<=x308));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = 5286897U;
	uint32_t x319 = 761854U;
	static int8_t x320 = -1;
	static int32_t t54 = INT32_MAX;

	t54 = (x317|((x318*x319)<=x320));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x322 = 6;
	uint32_t x323 = UINT32_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	uint64_t t55 = 4466LLU;

	t55 = (x321|((x322*x323)<=x324));

	if (t55 != 928304525LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	uint64_t x328 = 5LLU;
	int32_t t56 = 6;

	t56 = (x325|((x326*x327)<=x328));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x329 = 972U;
	int16_t x330 = -3;
	int32_t x332 = 1802364;
	static volatile uint32_t t57 = 3664U;

	t57 = (x329|((x330*x331)<=x332));

	if (t57 != 972U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	static int8_t x336 = 30;

	t58 = (x333|((x334*x335)<=x336));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x338 = INT32_MAX;
	uint32_t x339 = 280747U;
	int64_t t59 = INT64_MIN;

	t59 = (x337|((x338*x339)<=x340));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x341 = 112U;
	uint8_t x342 = 4U;
	int8_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile uint32_t t60 = 1251269499U;

	t60 = (x341|((x342*x343)<=x344));

	if (t60 != 113U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 28447701LLU;
	int16_t x351 = INT16_MAX;
	volatile int16_t x352 = -1;
	volatile int32_t t61 = -28050;

	t61 = (x349|((x350*x351)<=x352));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x354 = 3905U;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = 33;
	static volatile uint64_t t62 = 4LLU;

	t62 = (x353|((x354*x355)<=x356));

	if (t62 != 6354641351LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x357 = 1209;
	int8_t x358 = -45;
	int8_t x359 = -1;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t63 = -949;

	t63 = (x357|((x358*x359)<=x360));

	if (t63 != 1209) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MAX;
	uint64_t x363 = 17072435842LLU;
	volatile int32_t t64 = 55707698;

	t64 = (x361|((x362*x363)<=x364));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x366 = 58;
	int8_t x368 = 29;
	int32_t t65 = 1;

	t65 = (x365|((x366*x367)<=x368));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x369 = 5223LLU;
	int32_t x370 = INT32_MIN;

	t66 = (x369|((x370*x371)<=x372));

	if (t66 != 5223LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x374 = -1;
	static volatile int16_t x375 = INT16_MIN;
	int8_t x376 = -1;
	volatile int32_t t67 = 15;

	t67 = (x373|((x374*x375)<=x376));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x377 = INT64_MIN;
	static uint16_t x378 = 1U;
	int32_t x379 = 48658978;
	int64_t t68 = INT64_MIN;

	t68 = (x377|((x378*x379)<=x380));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x381 = -1;
	uint32_t x382 = 725U;
	int8_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t69 = -2915964;

	t69 = (x381|((x382*x383)<=x384));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x389 = -3887609539397928LL;
	volatile int16_t x390 = INT16_MIN;
	volatile uint16_t x391 = 48U;
	int64_t x392 = INT64_MAX;
	int64_t t70 = -311767080953LL;

	t70 = (x389|((x390*x391)<=x392));

	if (t70 != -3887609539397927LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 15679U;
	static volatile int16_t x395 = -1;
	int32_t x396 = INT32_MIN;

	t71 = (x393|((x394*x395)<=x396));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x401 = 380077017152167198LLU;
	int8_t x402 = 0;
	uint8_t x403 = UINT8_MAX;
	static int8_t x404 = 0;
	uint64_t t72 = 1598455096LLU;

	t72 = (x401|((x402*x403)<=x404));

	if (t72 != 380077017152167199LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x405 = 403;
	static volatile uint32_t x406 = 26U;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MAX;
	static int32_t t73 = 42;

	t73 = (x405|((x406*x407)<=x408));

	if (t73 != 403) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 46U;
	static int32_t t74 = 385278998;

	t74 = (x413|((x414*x415)<=x416));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x417 = 1U;
	uint8_t x419 = 41U;
	volatile int32_t t75 = -9997;

	t75 = (x417|((x418*x419)<=x420));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint8_t x422 = 6U;
	uint8_t x423 = 0U;
	volatile int32_t t76 = 280578125;

	t76 = (x421|((x422*x423)<=x424));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x426 = 5LLU;
	int32_t x427 = 0;
	volatile int64_t t77 = 70420847806150258LL;

	t77 = (x425|((x426*x427)<=x428));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x429 = 116U;
	static uint8_t x430 = 23U;
	uint16_t x431 = 23811U;
	int32_t t78 = -8892;

	t78 = (x429|((x430*x431)<=x432));

	if (t78 != 117) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x433 = 1766U;
	int64_t x434 = -1LL;
	int8_t x435 = 8;
	int16_t x436 = INT16_MIN;
	volatile uint32_t t79 = 25U;

	t79 = (x433|((x434*x435)<=x436));

	if (t79 != 1766U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = INT32_MIN;
	volatile int32_t x438 = 15;
	int16_t x439 = -1;
	int64_t x440 = INT64_MIN;
	int32_t t80 = INT32_MIN;

	t80 = (x437|((x438*x439)<=x440));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x442 = -23;
	int64_t x444 = -1377571585689LL;
	int32_t t81 = 59303817;

	t81 = (x441|((x442*x443)<=x444));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x445 = INT64_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t82 = -29LL;

	t82 = (x445|((x446*x447)<=x448));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = INT8_MAX;
	int32_t x451 = 200626;
	static volatile int32_t t83 = -439827619;

	t83 = (x449|((x450*x451)<=x452));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MIN;
	volatile uint8_t x455 = 58U;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x453|((x454*x455)<=x456));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = INT16_MIN;
	uint16_t x464 = 52U;
	int32_t t85 = 74869383;

	t85 = (x461|((x462*x463)<=x464));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x465 = 7596;
	int8_t x467 = 12;
	int64_t x468 = 430563946LL;
	static volatile int32_t t86 = 3092;

	t86 = (x465|((x466*x467)<=x468));

	if (t86 != 7597) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x469 = UINT32_MAX;
	int32_t x470 = INT32_MAX;
	int64_t x471 = -14814LL;
	int32_t x472 = 52923;
	static uint32_t t87 = UINT32_MAX;

	t87 = (x469|((x470*x471)<=x472));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x473 = 2;
	int64_t x474 = -989160341LL;
	int32_t x476 = INT32_MAX;
	volatile int32_t t88 = 3;

	t88 = (x473|((x474*x475)<=x476));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -223737331;
	volatile uint32_t x478 = 381355106U;
	static int16_t x479 = INT16_MAX;
	int64_t x480 = -2949964477430LL;
	volatile int32_t t89 = 104750;

	t89 = (x477|((x478*x479)<=x480));

	if (t89 != -223737331) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x485 = 0;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MAX;
	volatile int32_t t90 = 12339;

	t90 = (x485|((x486*x487)<=x488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x489 = UINT16_MAX;
	uint8_t x490 = 7U;
	int32_t x491 = -1;

	t91 = (x489|((x490*x491)<=x492));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x494 = INT8_MAX;
	uint64_t x495 = 12220259370692804LLU;
	uint16_t x496 = 283U;
	int64_t t92 = INT64_MIN;

	t92 = (x493|((x494*x495)<=x496));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x497 = INT64_MIN;
	int8_t x498 = -1;
	int16_t x499 = -1;
	int64_t t93 = -3058953196862269696LL;

	t93 = (x497|((x498*x499)<=x500));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = UINT64_MAX;
	static int32_t x503 = INT32_MIN;
	int16_t x504 = 4173;
	static int32_t t94 = -2884714;

	t94 = (x501|((x502*x503)<=x504));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x505 = INT16_MIN;
	uint16_t x506 = UINT16_MAX;
	static volatile int16_t x507 = INT16_MIN;
	int16_t x508 = 47;
	volatile int32_t t95 = 6;

	t95 = (x505|((x506*x507)<=x508));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x509 = INT8_MIN;
	uint16_t x510 = UINT16_MAX;
	static volatile int16_t x512 = INT16_MIN;
	volatile int32_t t96 = 10347;

	t96 = (x509|((x510*x511)<=x512));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x513 = 373LL;
	int16_t x514 = -1;
	static int64_t x515 = 10621675179LL;
	int32_t x516 = -105;

	t97 = (x513|((x514*x515)<=x516));

	if (t97 != 373LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MIN;
	static int32_t x519 = -1;
	static volatile int32_t x520 = -50;

	t98 = (x517|((x518*x519)<=x520));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x521 = -327;
	int8_t x522 = INT8_MIN;
	static int8_t x523 = -1;
	uint32_t x524 = 3U;
	volatile int32_t t99 = 563050071;

	t99 = (x521|((x522*x523)<=x524));

	if (t99 != -327) { NG(); } else { ; }
	
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

