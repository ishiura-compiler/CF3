#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -541092LL;
static volatile int8_t x4 = -1;
static int32_t x9 = -1629;
static volatile int8_t x11 = INT8_MIN;
uint8_t x12 = UINT8_MAX;
static int32_t x13 = -3235192;
uint8_t x28 = UINT8_MAX;
static int8_t x33 = INT8_MIN;
volatile int64_t x34 = 1LL;
int8_t x39 = -1;
uint8_t x43 = UINT8_MAX;
int64_t x49 = INT64_MAX;
int8_t x55 = INT8_MIN;
int16_t x64 = 243;
volatile int64_t x65 = -1LL;
int32_t x68 = INT32_MAX;
volatile int64_t t17 = 171331064LL;
uint32_t x74 = 31819005U;
int32_t t19 = 16;
int32_t x102 = INT32_MIN;
uint8_t x103 = 1U;
int32_t x111 = INT32_MAX;
int16_t x113 = -393;
volatile uint64_t x115 = 31LLU;
uint64_t x119 = 39LLU;
static volatile uint64_t t24 = 120779817578988LLU;
volatile uint32_t t25 = 19U;
uint16_t x130 = UINT16_MAX;
volatile int32_t t27 = -337254190;
volatile int8_t x144 = -1;
int8_t x145 = INT8_MAX;
uint64_t x157 = UINT64_MAX;
static uint32_t x158 = UINT32_MAX;
int64_t x161 = INT64_MAX;
uint64_t t33 = 372515129146LLU;
volatile int64_t x168 = -7LL;
static volatile int64_t t34 = 1LL;
uint64_t x169 = 884LLU;
int64_t x170 = INT64_MIN;
uint8_t x171 = 12U;
uint64_t x175 = 3852602480LLU;
uint64_t x177 = 1024929172LLU;
uint32_t x183 = 495692217U;
uint16_t x187 = 14417U;
static uint64_t t40 = 545LLU;
int32_t t41 = 6479;
int8_t x197 = INT8_MIN;
static uint8_t x206 = 3U;
volatile uint16_t x222 = 1158U;
uint16_t x224 = 0U;
int8_t x225 = INT8_MIN;
int8_t x228 = INT8_MIN;
uint64_t x237 = 21842385475679333LLU;
volatile int16_t x238 = 5561;
int8_t x242 = -9;
uint16_t x243 = 0U;
volatile uint8_t x250 = UINT8_MAX;
uint16_t x251 = UINT16_MAX;
uint8_t x255 = 10U;
volatile uint64_t t52 = 421095345565535539LLU;
int8_t x257 = 7;
static int32_t x258 = INT32_MIN;
static uint32_t x259 = 312U;
int8_t x260 = -1;
int32_t t55 = -34688145;
int16_t x277 = -16328;
static int64_t t57 = -78841849197023909LL;
static uint64_t t58 = 22242LLU;
int64_t x297 = INT64_MAX;
int32_t x305 = -1;
volatile int8_t x306 = 7;
static volatile uint32_t x318 = 5702860U;
uint8_t x329 = 2U;
volatile uint64_t t65 = 1905743800419LLU;
int8_t x337 = INT8_MIN;
int32_t x341 = INT32_MAX;
static uint64_t x349 = 6982672LLU;
static uint8_t x356 = UINT8_MAX;
int64_t x361 = INT64_MAX;
static int64_t x362 = INT64_MIN;
int32_t x364 = INT32_MAX;
int32_t x369 = 1;
int8_t x375 = 9;
volatile int64_t x385 = INT64_MIN;
volatile int64_t x390 = INT64_MAX;
uint64_t x396 = 9284LLU;
static int32_t x399 = INT32_MAX;
int64_t x402 = INT64_MAX;
int32_t x414 = INT32_MAX;
static volatile int32_t t82 = 53858;
int8_t x423 = INT8_MIN;
int32_t x426 = -1;
static volatile uint64_t x430 = 15417308435178311LLU;
int8_t x432 = INT8_MIN;
int32_t x445 = 26963444;
static int16_t x462 = -7;
volatile int32_t t92 = -1;
int16_t x469 = -1;
int16_t x470 = 1;
static int16_t x474 = INT16_MIN;
int16_t x480 = 1;
static uint16_t x481 = 1757U;
int16_t x485 = INT16_MAX;
uint32_t t97 = 42371539U;
int16_t x489 = 24;


void f0(void) {
	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 1341740772321929LL;

	t0 = ((x1&x2)^(x3*x4));

	if (t0 != 32860LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int32_t x6 = -649345980;
	uint32_t x7 = 42340U;
	volatile uint32_t x8 = 373438930U;
	volatile uint32_t t1 = 9U;

	t1 = ((x5&x6)^(x7*x8));

	if (t1 != 3093902412U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int32_t t2 = 6715;

	t2 = ((x9&x10)^(x11*x12));

	if (t2 != 31011) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 52U;
	volatile uint8_t x15 = 84U;
	static int64_t x16 = -320024LL;
	int64_t t3 = -35670403312150557LL;

	t3 = ((x13&x14)^(x15*x16));

	if (t3 != -26882016LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 42U;
	uint16_t x18 = 26U;
	static int32_t x19 = INT32_MIN;
	uint64_t x20 = 22LLU;
	volatile uint64_t t4 = 7LLU;

	t4 = ((x17&x18)^(x19*x20));

	if (t4 != 18446744026464911370LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = 0U;
	volatile int64_t t5 = INT64_MIN;

	t5 = ((x21&x22)^(x23*x24));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 17U;
	uint16_t x26 = 25U;
	static int8_t x27 = INT8_MIN;
	volatile uint32_t t6 = 622U;

	t6 = ((x25&x26)^(x27*x28));

	if (t6 != 4294934673U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	int8_t x30 = INT8_MAX;
	volatile uint16_t x31 = 1864U;
	int64_t x32 = -1LL;
	static volatile int64_t t7 = -251439592421196215LL;

	t7 = ((x29&x30)^(x31*x32));

	if (t7 != -1849LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 44682LLU;
	static uint8_t x36 = 8U;
	volatile uint64_t t8 = 33037979378LLU;

	t8 = ((x33&x34)^(x35*x36));

	if (t8 != 357456LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -7;
	volatile int8_t x38 = INT8_MAX;
	volatile uint32_t x40 = 121309U;
	volatile uint32_t t9 = 9222U;

	t9 = ((x37&x38)^(x39*x40));

	if (t9 != 4294846042U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 5U;
	uint8_t x42 = 3U;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -423423;

	t10 = ((x41&x42)^(x43*x44));

	if (t10 != -32639) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 30LL;
	int16_t x46 = -173;
	uint64_t x47 = UINT64_MAX;
	static uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 21582578LLU;

	t11 = ((x45&x46)^(x47*x48));

	if (t11 != 18446744069414584339LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = INT16_MIN;
	volatile int16_t x51 = INT16_MIN;
	uint32_t x52 = 0U;
	int64_t t12 = 1961121438LL;

	t12 = ((x49&x50)^(x51*x52));

	if (t12 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	uint16_t x54 = UINT16_MAX;
	int8_t x56 = -1;
	static int64_t t13 = -93300592338245LL;

	t13 = ((x53&x54)^(x55*x56));

	if (t13 != 65407LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x58 = 38U;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MAX;
	uint32_t t14 = 1058545U;

	t14 = ((x57&x58)^(x59*x60));

	if (t14 != 4294934529U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint16_t x62 = 7064U;
	volatile int8_t x63 = INT8_MIN;
	static int32_t t15 = 191;

	t15 = ((x61&x62)^(x63*x64));

	if (t15 != -25344) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	int8_t x67 = -1;
	int64_t t16 = -30LL;

	t16 = ((x65&x66)^(x67*x68));

	if (t16 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 197078175;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -1LL;
	int16_t x72 = 29;

	t17 = ((x69&x70)^(x71*x72));

	if (t17 != -29LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	int32_t x75 = -13632;
	int16_t x76 = -1;
	int64_t t18 = -1618284904598199980LL;

	t18 = ((x73&x74)^(x75*x76));

	if (t18 != 31830461LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 59U;
	int8_t x94 = INT8_MAX;
	int32_t x95 = -1;
	uint16_t x96 = UINT16_MAX;

	t19 = ((x93&x94)^(x95*x96));

	if (t19 != -65478) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 6477U;
	int32_t x100 = INT32_MAX;
	uint32_t t20 = 87U;

	t20 = ((x97&x98)^(x99*x100));

	if (t20 != 2147509939U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x101 = UINT32_MAX;
	uint64_t x104 = 37LLU;
	volatile uint64_t t21 = 218634782LLU;

	t21 = ((x101&x102)^(x103*x104));

	if (t21 != 2147483685LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MAX;
	volatile uint64_t x110 = 4610808420LLU;
	uint64_t x112 = 1405LLU;
	uint64_t t22 = 16518599LLU;

	t22 = ((x109&x110)^(x111*x112));

	if (t22 != 3016898683111LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x114 = 360U;
	static volatile int8_t x116 = INT8_MIN;
	volatile uint64_t t23 = 55100989780LLU;

	t23 = ((x113&x114)^(x115*x116));

	if (t23 != 18446744073709547744LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = 238033232;
	static uint32_t x118 = 2655141U;
	uint16_t x120 = UINT16_MAX;

	t24 = ((x117&x118)^(x119*x120));

	if (t24 != 458457LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = 1506357822U;
	int8_t x122 = -1;
	static volatile uint16_t x123 = 124U;
	int8_t x124 = INT8_MAX;

	t25 = ((x121&x122)^(x123*x124));

	if (t25 != 1506348986U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	volatile int8_t x128 = INT8_MIN;
	volatile int64_t t26 = -3834881LL;

	t26 = ((x125&x126)^(x127*x128));

	if (t26 != 128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -1;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -1;

	t27 = ((x129&x130)^(x131*x132));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = INT8_MIN;
	int16_t x134 = -6569;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 1LLU;
	uint64_t t28 = 2485406895341216LLU;

	t28 = ((x133&x134)^(x135*x136));

	if (t28 != 18446744073709545087LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x137 = 3U;
	int8_t x138 = -35;
	int8_t x139 = 38;
	uint8_t x140 = 110U;
	int32_t t29 = -5581957;

	t29 = ((x137&x138)^(x139*x140));

	if (t29 != 4181) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = -1LL;
	volatile int64_t t30 = -2082113100837141LL;

	t30 = ((x141&x142)^(x143*x144));

	if (t30 != 2147483649LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x146 = 45994U;
	int8_t x147 = -1;
	int32_t x148 = -1;
	uint32_t t31 = 145182912U;

	t31 = ((x145&x146)^(x147*x148));

	if (t31 != 43U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x159 = INT8_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	volatile uint64_t t32 = 87046042108401082LLU;

	t32 = ((x157&x158)^(x159*x160));

	if (t32 != 18446744069422972799LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MIN;
	int16_t x163 = -1;
	uint64_t x164 = 57733319814LLU;

	t33 = ((x161&x162)^(x163*x164));

	if (t33 != 9223372092938089338LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = 239558;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 1U;

	t34 = ((x165&x166)^(x167*x168));

	if (t34 != -7LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x172 = -52;
	uint64_t t35 = 78262230401796LLU;

	t35 = ((x169&x170)^(x171*x172));

	if (t35 != 18446744073709550992LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile int32_t x174 = 4702860;
	volatile uint8_t x176 = 30U;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x173&x174)^(x175*x176));

	if (t36 != 115573700524LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x178 = INT64_MIN;
	volatile uint32_t x179 = 40032U;
	int8_t x180 = INT8_MIN;
	static uint64_t t37 = 439258LLU;

	t37 = ((x177&x178)^(x179*x180));

	if (t37 != 4289843200LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = -988;
	int8_t x184 = INT8_MIN;
	uint32_t t38 = 7U;

	t38 = ((x181&x182)^(x183*x184));

	if (t38 != 3123389312U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x185 = 124250151873LLU;
	int64_t x186 = -1LL;
	int64_t x188 = 814383739597LL;
	uint64_t t39 = 505267709LLU;

	t39 = ((x185&x186)^(x187*x188));

	if (t39 != 11740883083899164LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x189 = 2;
	static int8_t x190 = 0;
	static int32_t x191 = -1;
	volatile uint64_t x192 = UINT64_MAX;

	t40 = ((x189&x190)^(x191*x192));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x193 = 85U;
	volatile int16_t x194 = -14;
	int16_t x195 = INT16_MAX;
	int32_t x196 = 1;

	t41 = ((x193&x194)^(x195*x196));

	if (t41 != 32687) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	static int16_t x200 = 1;
	uint32_t t42 = 92U;

	t42 = ((x197&x198)^(x199*x200));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x201 = UINT64_MAX;
	static int32_t x202 = INT32_MAX;
	int64_t x203 = -561258690725359LL;
	volatile int8_t x204 = -1;
	uint64_t t43 = 708593090689201968LLU;

	t43 = ((x201&x202)^(x203*x204));

	if (t43 != 561258929371664LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = UINT32_MAX;
	uint8_t x207 = 41U;
	uint16_t x208 = UINT16_MAX;
	static volatile uint32_t t44 = 131737641U;

	t44 = ((x205&x206)^(x207*x208));

	if (t44 != 2686932U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = 13;
	int8_t x218 = INT8_MAX;
	static int32_t x219 = -1;
	int8_t x220 = 1;
	volatile int32_t t45 = -9;

	t45 = ((x217&x218)^(x219*x220));

	if (t45 != -14) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = -13;
	int16_t x223 = INT16_MAX;
	static int32_t t46 = 1023;

	t46 = ((x221&x222)^(x223*x224));

	if (t46 != 1154) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x226 = INT8_MIN;
	static uint8_t x227 = 4U;
	int32_t t47 = 2;

	t47 = ((x225&x226)^(x227*x228));

	if (t47 != 384) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x239 = 309U;
	static int32_t x240 = INT32_MAX;
	static volatile uint64_t t48 = 4172991LLU;

	t48 = ((x237&x238)^(x239*x240));

	if (t48 != 2147478250LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x241 = UINT8_MAX;
	static uint64_t x244 = 34921119440246240LLU;
	volatile uint64_t t49 = 2353209292950461LLU;

	t49 = ((x241&x242)^(x243*x244));

	if (t49 != 247LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = UINT16_MAX;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MAX;
	int8_t x248 = -35;
	static uint64_t t50 = 16LLU;

	t50 = ((x245&x246)^(x247*x248));

	if (t50 != 18446744073708404700LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MAX;
	int16_t x252 = 34;
	volatile int32_t t51 = -178394413;

	t51 = ((x249&x250)^(x251*x252));

	if (t51 != 2228001) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 23083297LLU;
	volatile int16_t x254 = -13;
	uint32_t x256 = 9665917U;

	t52 = ((x253&x254)^(x255*x256));

	if (t52 != 77782979LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t t53 = 4562U;

	t53 = ((x257&x258)^(x259*x260));

	if (t53 != 4294966984U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	static uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 1U;
	volatile uint64_t t54 = 94029366663589950LLU;

	t54 = ((x261&x262)^(x263*x264));

	if (t54 != 2147418112LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = 2U;
	volatile int32_t x271 = -1;
	uint8_t x272 = 7U;

	t55 = ((x269&x270)^(x271*x272));

	if (t55 != -7) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = 98872342619650317LLU;
	static volatile int8_t x274 = INT8_MIN;
	uint64_t x275 = 0LLU;
	static uint32_t x276 = 378378480U;
	uint64_t t56 = 21701627LLU;

	t56 = ((x273&x274)^(x275*x276));

	if (t56 != 98872342619650304LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MIN;

	t57 = ((x277&x278)^(x279*x280));

	if (t57 != -2147516416LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x285 = 56274LLU;
	int32_t x286 = 183;
	int8_t x287 = INT8_MAX;
	volatile int32_t x288 = 1659807;

	t58 = ((x285&x286)^(x287*x288));

	if (t58 != 210795379LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = 9U;
	int64_t x294 = -1LL;
	uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = 1611035355341729LL;
	volatile int64_t t59 = 78723691937324LL;

	t59 = ((x293&x294)^(x295*x296));

	if (t59 != 410814015612140886LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x298 = INT16_MIN;
	uint64_t x299 = 397654531957566545LLU;
	int16_t x300 = 9;
	uint64_t t60 = 493097735418271861LLU;

	t60 = ((x297&x298)^(x299*x300));

	if (t60 != 5644481249236651737LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x307 = INT8_MAX;
	volatile uint8_t x308 = 86U;
	volatile int32_t t61 = 7214282;

	t61 = ((x305&x306)^(x307*x308));

	if (t61 != 10925) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x313 = INT8_MIN;
	volatile uint32_t x314 = 51575504U;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = 4;
	static uint32_t t62 = 165U;

	t62 = ((x313&x314)^(x315*x316));

	if (t62 != 4243389056U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = INT32_MAX;
	volatile int8_t x319 = 4;
	volatile int64_t x320 = -1LL;
	int64_t t63 = 0LL;

	t63 = ((x317&x318)^(x319*x320));

	if (t63 != -5702864LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = 1;
	volatile int8_t x322 = INT8_MAX;
	uint64_t x323 = 1688392468LLU;
	volatile uint16_t x324 = 3U;
	volatile uint64_t t64 = 26056LLU;

	t64 = ((x321&x322)^(x323*x324));

	if (t64 != 5065177405LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x330 = INT64_MAX;
	uint8_t x331 = UINT8_MAX;
	static volatile uint64_t x332 = UINT64_MAX;

	t65 = ((x329&x330)^(x331*x332));

	if (t65 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x339 = 60;
	uint64_t x340 = 138517LLU;
	static volatile uint64_t t66 = 475874480625823LLU;

	t66 = ((x337&x338)^(x339*x340));

	if (t66 != 18446744073701240684LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = 40U;
	uint64_t x344 = 0LLU;
	static volatile uint64_t t67 = 31695LLU;

	t67 = ((x341&x342)^(x343*x344));

	if (t67 != 65535LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x345 = -42;
	int64_t x346 = INT64_MIN;
	static int64_t x347 = 217190989LL;
	uint32_t x348 = 3U;
	volatile int64_t t68 = 2338450488185LL;

	t68 = ((x345&x346)^(x347*x348));

	if (t68 != -9223372036203202841LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x350 = UINT64_MAX;
	int16_t x351 = -1;
	int8_t x352 = 31;
	volatile uint64_t t69 = 18218302896434440LLU;

	t69 = ((x349&x350)^(x351*x352));

	if (t69 != 18446744073702568945LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 21306514LLU;
	static int16_t x354 = INT16_MAX;
	int32_t x355 = 855;
	volatile uint64_t t70 = 1160545609628LLU;

	t70 = ((x353&x354)^(x355*x356));

	if (t70 != 216891LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x357 = INT8_MIN;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = 877856443983844LL;
	int8_t x360 = INT8_MIN;
	static int64_t t71 = 10082699257826636LL;

	t71 = ((x357&x358)^(x359*x360));

	if (t71 != 9111006412024843776LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x363 = -1;
	int64_t t72 = -6LL;

	t72 = ((x361&x362)^(x363*x364));

	if (t72 != -2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 17240346U;
	uint32_t x366 = 101055U;
	static int16_t x367 = INT16_MIN;
	uint8_t x368 = 4U;
	volatile uint32_t t73 = 354849U;

	t73 = ((x365&x366)^(x367*x368));

	if (t73 != 4294901786U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = 6969321105LLU;
	static uint64_t t74 = 2497990550858268350LLU;

	t74 = ((x369&x370)^(x371*x372));

	if (t74 != 885103780335LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	uint64_t x376 = 30225LLU;
	volatile uint64_t t75 = 2LLU;

	t75 = ((x373&x374)^(x375*x376));

	if (t75 != 18446744073709279513LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = 12814U;
	volatile uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 1804791123LLU;
	uint8_t x380 = 1U;
	static uint64_t t76 = 2339009LLU;

	t76 = ((x377&x378)^(x379*x380));

	if (t76 != 1804787549LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x386 = 33055405LLU;
	uint16_t x387 = 61U;
	uint8_t x388 = UINT8_MAX;
	volatile uint64_t t77 = 585319795866423736LLU;

	t77 = ((x385&x386)^(x387*x388));

	if (t77 != 15555LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x389 = INT64_MAX;
	uint64_t x391 = 28280LLU;
	uint32_t x392 = 14765U;
	uint64_t t78 = 1LLU;

	t78 = ((x389&x390)^(x391*x392));

	if (t78 != 9223372036437221607LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 1473221838LLU;
	int8_t x394 = INT8_MAX;
	volatile int32_t x395 = -260;
	uint64_t t79 = 4324801461782874LLU;

	t79 = ((x393&x394)^(x395*x396));

	if (t79 != 18446744073707137726LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = 1893U;
	static uint32_t x400 = 490741026U;
	volatile uint32_t t80 = 185237220U;

	t80 = ((x397&x398)^(x399*x400));

	if (t80 != 3804226235U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x401 = 2086253560U;
	int16_t x403 = INT16_MIN;
	static uint8_t x404 = 2U;
	int64_t t81 = -4175LL;

	t81 = ((x401&x402)^(x403*x404));

	if (t81 != -2086226952LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x413 = INT8_MIN;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;

	t82 = ((x413&x414)^(x415*x416));

	if (t82 != -2143322240) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x421 = 36U;
	static int64_t x422 = INT64_MIN;
	uint64_t x424 = 8087731664754690937LLU;
	uint64_t t83 = 7254LLU;

	t83 = ((x421&x422)^(x423*x424));

	if (t83 != 16234759112844002176LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x425 = INT16_MIN;
	int16_t x427 = -1;
	volatile int64_t x428 = 2111589865965203089LL;
	int64_t t84 = -331013485358LL;

	t84 = ((x425&x426)^(x427*x428));

	if (t84 != 2111589865965212015LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x429 = INT32_MIN;
	volatile int16_t x431 = INT16_MIN;
	uint64_t t85 = 172686260036323LLU;

	t85 = ((x429&x430)^(x431*x432));

	if (t85 != 15417306951712768LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x433 = -1;
	int64_t x434 = INT64_MIN;
	int16_t x435 = -1;
	int64_t x436 = -936308694703746594LL;
	int64_t t86 = -467362959726LL;

	t86 = ((x433&x434)^(x435*x436));

	if (t86 != -8287063342151029214LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x446 = 122U;
	static int8_t x447 = INT8_MIN;
	uint32_t x448 = 307947344U;
	volatile uint32_t t87 = 229725U;

	t87 = ((x445&x446)^(x447*x448));

	if (t87 != 3532413040U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x449 = 6U;
	static uint64_t x450 = 442834LLU;
	int64_t x451 = -1LL;
	int8_t x452 = INT8_MIN;
	uint64_t t88 = 906370582LLU;

	t88 = ((x449&x450)^(x451*x452));

	if (t88 != 130LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x453 = 724U;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = -1LL;
	volatile int8_t x456 = INT8_MAX;
	volatile int64_t t89 = -2871762736080LL;

	t89 = ((x453&x454)^(x455*x456));

	if (t89 != -683LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x457 = -1;
	int64_t x458 = INT64_MIN;
	static int16_t x459 = INT16_MAX;
	int8_t x460 = -3;
	volatile int64_t t90 = 2389666330777529062LL;

	t90 = ((x457&x458)^(x459*x460));

	if (t90 != 9223372036854677507LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x461 = -1LL;
	uint64_t x463 = UINT64_MAX;
	uint64_t x464 = 408320800657749095LLU;
	volatile uint64_t t91 = 3846LLU;

	t91 = ((x461&x462)^(x463*x464));

	if (t91 != 408320800657749088LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x465 = -1;
	int32_t x466 = INT32_MAX;
	static uint16_t x467 = UINT16_MAX;
	volatile int16_t x468 = INT16_MIN;

	t92 = ((x465&x466)^(x467*x468));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x471 = 36U;
	volatile int32_t x472 = -1;
	int32_t t93 = -1;

	t93 = ((x469&x470)^(x471*x472));

	if (t93 != -35) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x473 = -1;
	int16_t x475 = INT16_MAX;
	volatile int16_t x476 = -1;
	volatile int32_t t94 = 104637001;

	t94 = ((x473&x474)^(x475*x476));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x477 = UINT64_MAX;
	int32_t x478 = INT32_MIN;
	uint8_t x479 = UINT8_MAX;
	volatile uint64_t t95 = 7749114035359529LLU;

	t95 = ((x477&x478)^(x479*x480));

	if (t95 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x482 = -1;
	volatile uint8_t x483 = 103U;
	int8_t x484 = 51;
	volatile int32_t t96 = 0;

	t96 = ((x481&x482)^(x483*x484));

	if (t96 != 4696) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x486 = -12;
	volatile uint32_t x487 = 68U;
	static volatile int8_t x488 = INT8_MAX;

	t97 = ((x485&x486)^(x487*x488));

	if (t97 != 24136U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x490 = INT32_MAX;
	uint8_t x491 = 73U;
	static uint8_t x492 = UINT8_MAX;
	int32_t t98 = -888964;

	t98 = ((x489&x490)^(x491*x492));

	if (t98 != 18607) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x497 = INT32_MAX;
	static volatile uint64_t x498 = UINT64_MAX;
	static uint64_t x499 = UINT64_MAX;
	static int16_t x500 = 0;
	volatile uint64_t t99 = 311109LLU;

	t99 = ((x497&x498)^(x499*x500));

	if (t99 != 2147483647LLU) { NG(); } else { ; }
	
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

