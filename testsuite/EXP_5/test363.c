#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MAX;
int64_t t1 = 1169870746880096LL;
static int16_t x14 = INT16_MIN;
volatile int64_t x15 = -33566LL;
uint32_t x18 = 5501U;
uint16_t x46 = 29284U;
int32_t t7 = 7976;
volatile int16_t x59 = INT16_MAX;
uint8_t x72 = 15U;
int64_t x81 = 119LL;
volatile int32_t x86 = 1056;
static int32_t x89 = INT32_MAX;
volatile int32_t x102 = INT32_MIN;
uint32_t x106 = 1970U;
uint8_t x108 = 0U;
int8_t x111 = 14;
static uint8_t x113 = UINT8_MAX;
uint16_t x115 = 711U;
volatile int32_t x116 = -49;
int8_t x123 = INT8_MIN;
int8_t x124 = INT8_MAX;
static uint16_t x126 = 11U;
uint64_t x128 = 12064747625642LLU;
volatile uint8_t x130 = UINT8_MAX;
static volatile int32_t t23 = -821359281;
uint8_t x143 = 0U;
int8_t x150 = -1;
volatile int32_t t26 = 1;
uint16_t x154 = UINT16_MAX;
int16_t x159 = -2249;
int32_t x174 = -1;
int64_t x181 = -1LL;
int32_t x202 = -1;
uint16_t x232 = 5936U;
int64_t x237 = INT64_MAX;
static int8_t x239 = -59;
uint8_t x253 = 26U;
int64_t t42 = -1LL;
int64_t x263 = -1LL;
static int32_t x265 = -206;
int32_t x266 = -1;
int64_t x268 = INT64_MIN;
volatile int64_t t45 = 114040062810024LL;
uint64_t x270 = 15427955805991LLU;
uint8_t x279 = UINT8_MAX;
int32_t x293 = INT32_MIN;
int32_t x297 = INT32_MAX;
int32_t x298 = 2597;
int8_t x299 = INT8_MIN;
volatile int8_t x303 = INT8_MAX;
int32_t t51 = 1;
uint16_t x313 = 133U;
uint8_t x316 = UINT8_MAX;
uint8_t x319 = UINT8_MAX;
int64_t x321 = INT64_MAX;
int64_t x324 = 50LL;
static uint16_t x339 = 48U;
uint64_t x341 = UINT64_MAX;
int32_t x343 = 12;
static volatile uint64_t x345 = 390058LLU;
int32_t x348 = INT32_MIN;
uint64_t t58 = 49461947451006855LLU;
int8_t x375 = 13;
volatile int64_t t62 = 139512564040LL;
volatile int8_t x378 = -47;
int16_t x379 = -3207;
uint64_t x386 = 604248005917233447LLU;
uint16_t x388 = 146U;
uint64_t t65 = 315152249953608LLU;
volatile int64_t t66 = -33935LL;
int64_t x393 = -697085085LL;
static int8_t x394 = INT8_MAX;
uint16_t x397 = 5389U;
uint64_t t68 = 45704LLU;
uint8_t x407 = 0U;
int16_t x413 = INT16_MAX;
static uint16_t x414 = 0U;
int64_t x419 = -32215260LL;
volatile int64_t t73 = 6521LL;
uint16_t x423 = UINT16_MAX;
int32_t x430 = 53;
uint32_t x431 = UINT32_MAX;
int16_t x446 = INT16_MAX;
int64_t t78 = -44LL;
int32_t t81 = 0;
uint8_t x465 = UINT8_MAX;
uint16_t x476 = 0U;
volatile uint16_t x490 = 20304U;
int8_t x505 = INT8_MIN;
int8_t x529 = 43;
volatile int16_t x541 = INT16_MIN;
int64_t x545 = -1LL;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int16_t x3 = -2;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 155LLU;

	t0 = (x1|((x2*x3)-x4));

	if (t0 != 18446744073709551231LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = INT8_MIN;
	int8_t x7 = 20;
	static int64_t x8 = -1LL;

	t1 = (x5|((x6*x7)-x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	static uint32_t x12 = 99453U;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9|((x10*x11)-x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 51U;
	static int32_t x16 = INT32_MAX;
	static int64_t t3 = 3612199450809019LL;

	t3 = (x13|((x14*x15)-x16));

	if (t3 != -1047592909LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = -1;
	uint32_t t4 = UINT32_MAX;

	t4 = (x17|((x18*x19)-x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 6629337LLU;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t5 = 3869403799133763441LLU;

	t5 = (x33|((x34*x35)-x36));

	if (t5 != 6662105LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = -131107166234560LL;
	int16_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t6 = 4LL;

	t6 = (x45|((x46*x47)-x48));

	if (t6 != -8739LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = 11926U;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = 0U;

	t7 = (x49|((x50*x51)-x52));

	if (t7 != -390791168) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x57 = UINT32_MAX;
	volatile uint64_t x58 = 230LLU;
	static uint32_t x60 = UINT32_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (x57|((x58*x59)-x60));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = -1;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	int32_t t9 = 48;

	t9 = (x61|((x62*x63)-x64));

	if (t9 != -32639) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = -1;
	int32_t x67 = 11353628;
	uint32_t x68 = UINT32_MAX;
	static int64_t t10 = 155430349533571727LL;

	t10 = (x65|((x66*x67)-x68));

	if (t10 != -9223372032571162139LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x69 = 73LLU;
	static uint8_t x70 = 30U;
	int16_t x71 = -1;
	uint64_t t11 = 35519LLU;

	t11 = (x69|((x70*x71)-x72));

	if (t11 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x77 = -9;
	int8_t x78 = -1;
	volatile int16_t x79 = 174;
	int16_t x80 = INT16_MAX;
	int32_t t12 = -85575383;

	t12 = (x77|((x78*x79)-x80));

	if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = 4505;
	volatile int64_t t13 = 410786711540428324LL;

	t13 = (x81|((x82*x83)-x84));

	if (t13 != 28279LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x85 = INT32_MIN;
	static int8_t x87 = 0;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t14 = 80277;

	t14 = (x85|((x86*x87)-x88));

	if (t14 != -65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x90 = 0U;
	int8_t x91 = INT8_MAX;
	uint16_t x92 = 1U;
	int32_t t15 = -15810;

	t15 = (x89|((x90*x91)-x92));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -1;
	static uint64_t x103 = UINT64_MAX;
	static int64_t x104 = -1LL;
	uint64_t t16 = UINT64_MAX;

	t16 = (x101|((x102*x103)-x104));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile uint32_t t17 = 3883866U;

	t17 = (x105|((x106*x107)-x108));

	if (t17 != 4294967246U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x109 = INT16_MIN;
	static uint8_t x110 = 20U;
	int8_t x112 = INT8_MAX;
	int32_t t18 = 0;

	t18 = (x109|((x110*x111)-x112));

	if (t18 != -32615) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x114 = UINT64_MAX;
	uint64_t t19 = 2578563LLU;

	t19 = (x113|((x114*x115)-x116));

	if (t19 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 145U;
	uint8_t x119 = 7U;
	volatile uint32_t x120 = 10978713U;
	static uint32_t t20 = 26553U;

	t20 = (x117|((x118*x119)-x120));

	if (t20 != 4294967262U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x121 = INT8_MIN;
	uint16_t x122 = 70U;
	volatile int32_t t21 = 231416456;

	t21 = (x121|((x122*x123)-x124));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x125 = UINT8_MAX;
	uint8_t x127 = 27U;
	uint64_t t22 = 94765638LLU;

	t22 = (x125|((x126*x127)-x128));

	if (t22 != 18446732008961926399LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	static uint16_t x132 = 2210U;

	t23 = (x129|((x130*x131)-x132));

	if (t23 != -2721) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x141 = 17U;
	int8_t x142 = -1;
	int64_t x144 = -1LL;
	volatile int64_t t24 = 69770357LL;

	t24 = (x141|((x142*x143)-x144));

	if (t24 != 17LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 31624260LLU;
	int32_t x147 = -1056175011;
	int16_t x148 = 0;
	volatile uint64_t t25 = 3743LLU;

	t25 = (x145|((x146*x147)-x148));

	if (t25 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = 15395;
	int8_t x151 = INT8_MAX;
	uint16_t x152 = UINT16_MAX;

	t26 = (x149|((x150*x151)-x152));

	if (t26 != -65629) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x153 = -1;
	uint64_t x155 = 545467229803804LLU;
	static int32_t x156 = -106350;
	uint64_t t27 = UINT64_MAX;

	t27 = (x153|((x154*x155)-x156));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = 8U;
	uint16_t x158 = UINT16_MAX;
	int8_t x160 = -1;
	volatile int32_t t28 = 307;

	t28 = (x157|((x158*x159)-x160));

	if (t28 != -147388214) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = 481659;
	int32_t x166 = -122704;
	int8_t x167 = INT8_MAX;
	volatile int64_t x168 = -1613650439450650LL;
	int64_t t29 = 321322LL;

	t29 = (x165|((x166*x167)-x168));

	if (t29 != 1613650423938939LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x169 = INT8_MIN;
	int8_t x170 = 1;
	int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t30 = -28;

	t30 = (x169|((x170*x171)-x172));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MAX;
	int8_t x175 = -1;
	volatile int8_t x176 = 0;
	static volatile int32_t t31 = -1120375;

	t31 = (x173|((x174*x175)-x176));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x182 = -1LL;
	volatile uint16_t x183 = 97U;
	static int64_t x184 = 126365304477810LL;
	int64_t t32 = 1009272199390378575LL;

	t32 = (x181|((x182*x183)-x184));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x193 = UINT16_MAX;
	static volatile int8_t x194 = -1;
	uint32_t x195 = 184960U;
	uint8_t x196 = 123U;
	uint32_t t33 = 60U;

	t33 = (x193|((x194*x195)-x196));

	if (t33 != 4294836223U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x201 = INT16_MAX;
	static int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x201|((x202*x203)-x204));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x209 = INT64_MIN;
	static int32_t x210 = 46310;
	int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MIN;
	volatile int64_t t35 = 8400205550LL;

	t35 = (x209|((x210*x211)-x212));

	if (t35 != -9223372036848861670LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x213 = 15;
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 38784U;
	volatile int8_t x216 = -11;
	volatile uint32_t t36 = 443417599U;

	t36 = (x213|((x214*x215)-x216));

	if (t36 != 4290002959U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = -1;
	uint32_t x222 = 733296U;
	int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x221|((x222*x223)-x224));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = 830472312LL;
	uint16_t x230 = 3U;
	uint32_t x231 = 40U;
	volatile int64_t t38 = 46524624LL;

	t38 = (x229|((x230*x231)-x232));

	if (t38 != 4294961528LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x233 = 5LLU;
	int16_t x234 = -1;
	uint8_t x235 = 99U;
	int8_t x236 = 3;
	uint64_t t39 = 310147270LLU;

	t39 = (x233|((x234*x235)-x236));

	if (t39 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x238 = INT8_MAX;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x237|((x238*x239)-x240));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x241 = 1092U;
	int16_t x242 = INT16_MIN;
	int64_t x243 = 32809LL;
	int32_t x244 = INT32_MIN;
	int64_t t41 = 14205138LL;

	t41 = (x241|((x242*x243)-x244));

	if (t41 != 1072399428LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = UINT16_MAX;
	static int64_t x256 = -1490687617LL;

	t42 = (x253|((x254*x255)-x256));

	if (t42 != 1507399066LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x257 = 0;
	int64_t x258 = -1LL;
	volatile int32_t x259 = INT32_MAX;
	static uint16_t x260 = 3U;
	static int64_t t43 = -1LL;

	t43 = (x257|((x258*x259)-x260));

	if (t43 != -2147483650LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = INT8_MIN;
	int16_t x264 = 1;
	int64_t t44 = -2964396492299615LL;

	t44 = (x261|((x262*x263)-x264));

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x267 = INT64_MAX;

	t45 = (x265|((x266*x267)-x268));

	if (t45 != -205LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x269 = 82568821;
	int8_t x271 = INT8_MAX;
	uint64_t x272 = 9LLU;
	volatile uint64_t t46 = 115LLU;

	t46 = (x269|((x270*x271)-x272));

	if (t46 != 1959350390220405LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = -1LL;
	volatile int8_t x278 = INT8_MAX;
	volatile int16_t x280 = INT16_MAX;
	volatile int64_t t47 = -35LL;

	t47 = (x277|((x278*x279)-x280));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int8_t x291 = -21;
	int8_t x292 = -1;
	static int32_t t48 = -573;

	t48 = (x289|((x290*x291)-x292));

	if (t48 != -32746) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = -1;
	uint16_t x296 = 62U;
	static volatile int32_t t49 = 22691260;

	t49 = (x293|((x294*x295)-x296));

	if (t49 != -2147450942) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x300 = INT32_MIN;
	static volatile int32_t t50 = INT32_MAX;

	t50 = (x297|((x298*x299)-x300));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x301 = 3U;
	int8_t x302 = INT8_MIN;
	volatile int8_t x304 = 1;

	t51 = (x301|((x302*x303)-x304));

	if (t51 != -16257) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x305 = -3;
	int16_t x306 = INT16_MAX;
	volatile int8_t x307 = -1;
	static int8_t x308 = -1;
	volatile int32_t t52 = 899721152;

	t52 = (x305|((x306*x307)-x308));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x314 = UINT64_MAX;
	static int8_t x315 = INT8_MAX;
	uint64_t t53 = 11895LLU;

	t53 = (x313|((x314*x315)-x316));

	if (t53 != 18446744073709551239LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x318 = -29;
	int16_t x320 = -1;
	volatile int32_t t54 = 6455339;

	t54 = (x317|((x318*x319)-x320));

	if (t54 != -7394) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x322 = 17687U;
	int16_t x323 = INT16_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x321|((x322*x323)-x324));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x337 = -1LL;
	int8_t x338 = 1;
	static volatile int16_t x340 = INT16_MAX;
	volatile int64_t t56 = 5241296204352741LL;

	t56 = (x337|((x338*x339)-x340));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x342 = UINT8_MAX;
	uint32_t x344 = 4227421U;
	static volatile uint64_t t57 = UINT64_MAX;

	t57 = (x341|((x342*x343)-x344));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x346 = 17LLU;
	static uint16_t x347 = 2562U;

	t58 = (x345|((x346*x347)-x348));

	if (t58 != 2147875754LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = 37;
	int64_t x350 = -1598266200LL;
	uint16_t x351 = 21366U;
	int8_t x352 = 1;
	int64_t t59 = 206194575895LL;

	t59 = (x349|((x350*x351)-x352));

	if (t59 != -34148555629201LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x353 = 203U;
	uint64_t x354 = 31346672381087LLU;
	int64_t x355 = -709483743LL;
	static volatile uint16_t x356 = 6335U;
	volatile uint64_t t60 = 1967061LLU;

	t60 = (x353|((x354*x355)-x356));

	if (t60 != 6818901365392073931LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x369 = INT16_MIN;
	uint16_t x370 = 102U;
	uint16_t x371 = 2266U;
	int16_t x372 = -1;
	static volatile int32_t t61 = -2;

	t61 = (x369|((x370*x371)-x372));

	if (t61 != -31011) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = -1;
	int64_t x376 = 2436621LL;

	t62 = (x373|((x374*x375)-x376));

	if (t62 != -2424833LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x377 = -1;
	volatile int32_t x380 = INT32_MAX;
	static int32_t t63 = 101852014;

	t63 = (x377|((x378*x379)-x380));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x381 = INT64_MAX;
	static uint16_t x382 = UINT16_MAX;
	uint8_t x383 = 3U;
	uint32_t x384 = 395605132U;
	static volatile int64_t t64 = INT64_MAX;

	t64 = (x381|((x382*x383)-x384));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x385 = 2430U;
	int32_t x387 = INT32_MAX;

	t65 = (x385|((x386*x387)-x388));

	if (t65 != 726469560455180159LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = 0;
	volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = -9628441LL;

	t66 = (x389|((x390*x391)-x392));

	if (t66 != -103LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x395 = -3540672;
	static uint8_t x396 = UINT8_MAX;
	volatile int64_t t67 = 122455162LL;

	t67 = (x393|((x394*x395)-x396));

	if (t67 != -143394845LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x398 = -1;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 653943175761733101LLU;

	t68 = (x397|((x398*x399)-x400));

	if (t68 != 17792800897947787037LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x401 = INT32_MIN;
	uint8_t x402 = 86U;
	uint64_t x403 = 1426410531405357LLU;
	uint32_t x404 = 316868U;
	static volatile uint64_t t69 = 16506200542LLU;

	t69 = (x401|((x402*x403)-x404));

	if (t69 != 18446744071837453658LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x405 = UINT16_MAX;
	int8_t x406 = -1;
	volatile int64_t x408 = -1LL;
	int64_t t70 = 639080193LL;

	t70 = (x405|((x406*x407)-x408));

	if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x409 = 116131933U;
	int32_t x410 = INT32_MAX;
	int16_t x411 = -1;
	int8_t x412 = INT8_MIN;
	static uint32_t t71 = 1696992864U;

	t71 = (x409|((x410*x411)-x412));

	if (t71 != 2263615709U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x415 = 15282213060LLU;
	static uint8_t x416 = 5U;
	uint64_t t72 = UINT64_MAX;

	t72 = (x413|((x414*x415)-x416));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x417 = -1;
	uint32_t x418 = 436U;
	static volatile uint16_t x420 = UINT16_MAX;

	t73 = (x417|((x418*x419)-x420));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x421 = 3667051450029LL;
	int8_t x422 = -1;
	int16_t x424 = -1;
	int64_t t74 = -21784075627402LL;

	t74 = (x421|((x422*x423)-x424));

	if (t74 != -29009LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x425 = INT8_MAX;
	volatile int32_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	static int8_t x428 = INT8_MIN;
	volatile uint32_t t75 = 239538U;

	t75 = (x425|((x426*x427)-x428));

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x429 = UINT16_MAX;
	uint8_t x432 = 3U;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x429|((x430*x431)-x432));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x441 = INT64_MIN;
	volatile int64_t x442 = -66LL;
	int8_t x443 = 0;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t77 = 813973144175LL;

	t77 = (x441|((x442*x443)-x444));

	if (t77 != -4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x445 = INT32_MIN;
	int64_t x447 = 3421189915LL;
	static int8_t x448 = INT8_MIN;

	t78 = (x445|((x446*x447)-x448));

	if (t78 != -811447963LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = INT16_MIN;
	int16_t x450 = -99;
	int16_t x451 = -1;
	int8_t x452 = 0;
	int32_t t79 = 1;

	t79 = (x449|((x450*x451)-x452));

	if (t79 != -32669) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x453 = 22LLU;
	uint8_t x454 = 114U;
	uint32_t x455 = UINT32_MAX;
	int16_t x456 = INT16_MIN;
	volatile uint64_t t80 = 7113LLU;

	t80 = (x453|((x454*x455)-x456));

	if (t80 != 32670LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = 3;
	uint8_t x458 = UINT8_MAX;
	int8_t x459 = -1;
	uint16_t x460 = 5441U;

	t81 = (x457|((x458*x459)-x460));

	if (t81 != -5693) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x466 = -146;
	volatile uint16_t x467 = 2455U;
	int32_t x468 = INT32_MIN;
	int32_t t82 = -4683109;

	t82 = (x465|((x466*x467)-x468));

	if (t82 != 2147125247) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x473 = UINT32_MAX;
	uint8_t x474 = 77U;
	static volatile int32_t x475 = 610469;
	uint32_t t83 = UINT32_MAX;

	t83 = (x473|((x474*x475)-x476));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x477 = -705LL;
	int8_t x478 = -1;
	volatile uint64_t x479 = 75061846LLU;
	volatile uint64_t x480 = 118LLU;
	static uint64_t t84 = 4331621043522588136LLU;

	t84 = (x477|((x478*x479)-x480));

	if (t84 != 18446744073709550911LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x481 = -1LL;
	int64_t x482 = -1LL;
	int64_t x483 = INT64_MAX;
	int64_t x484 = -1LL;
	int64_t t85 = 16495812103058LL;

	t85 = (x481|((x482*x483)-x484));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x485 = INT8_MIN;
	static int16_t x486 = -1;
	static uint32_t x487 = 3764U;
	uint16_t x488 = UINT16_MAX;
	uint32_t t86 = 496400252U;

	t86 = (x485|((x486*x487)-x488));

	if (t86 != 4294967245U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x489 = INT64_MIN;
	uint32_t x491 = 304732262U;
	int8_t x492 = INT8_MIN;
	volatile int64_t t87 = 1908813693945LL;

	t87 = (x489|((x490*x491)-x492));

	if (t87 != -9223372034323834272LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x497 = 2659112665478LL;
	static uint8_t x498 = 27U;
	int64_t x499 = -2037LL;
	volatile int64_t x500 = 3734751687409073742LL;
	static int64_t t88 = 0LL;

	t88 = (x497|((x498*x499)-x500));

	if (t88 != -3734751365214802977LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x506 = INT16_MIN;
	int16_t x507 = -1;
	static int32_t x508 = -1;
	volatile int32_t t89 = -65;

	t89 = (x505|((x506*x507)-x508));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x509 = INT64_MAX;
	static int8_t x510 = INT8_MAX;
	int8_t x511 = -43;
	uint64_t x512 = 7LLU;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x509|((x510*x511)-x512));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x513 = 2511938566331043372LL;
	static uint16_t x514 = 3096U;
	volatile int32_t x515 = 0;
	static int64_t x516 = INT64_MAX;
	volatile int64_t t91 = -712LL;

	t91 = (x513|((x514*x515)-x516));

	if (t91 != -6711433470523732435LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x517 = -7923;
	static int16_t x518 = -5433;
	static uint64_t x519 = 226LLU;
	int8_t x520 = -3;
	uint64_t t92 = 27855817228LLU;

	t92 = (x517|((x518*x519)-x520));

	if (t92 != 18446744073709544381LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x521 = 117770133U;
	static int16_t x522 = INT16_MIN;
	int8_t x523 = -14;
	uint16_t x524 = UINT16_MAX;
	uint32_t t93 = 134U;

	t93 = (x521|((x522*x523)-x524));

	if (t93 != 117901205U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x525 = 14U;
	int8_t x526 = INT8_MIN;
	uint64_t x527 = 105384564380928LLU;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t94 = 130LLU;

	t94 = (x525|((x526*x527)-x528));

	if (t94 != 18433254849468760079LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x530 = -455;
	volatile int64_t x531 = 99773041100LL;
	static volatile uint8_t x532 = 5U;
	volatile int64_t t95 = -2851068032LL;

	t95 = (x529|((x530*x531)-x532));

	if (t95 != -45396733700497LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x542 = UINT64_MAX;
	uint32_t x543 = 786034927U;
	int32_t x544 = INT32_MIN;
	static uint64_t t96 = 600601261810LLU;

	t96 = (x541|((x542*x543)-x544));

	if (t96 != 18446744073709522705LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x546 = 75188809755717LLU;
	static int32_t x547 = INT32_MIN;
	int16_t x548 = INT16_MIN;
	uint64_t t97 = UINT64_MAX;

	t97 = (x545|((x546*x547)-x548));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x549 = -1;
	volatile int8_t x550 = -1;
	int32_t x551 = 238;
	static uint16_t x552 = UINT16_MAX;
	volatile int32_t t98 = -47913;

	t98 = (x549|((x550*x551)-x552));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x557 = INT32_MIN;
	uint32_t x558 = UINT32_MAX;
	static volatile int8_t x559 = INT8_MAX;
	uint32_t x560 = 63U;
	uint32_t t99 = 12523U;

	t99 = (x557|((x558*x559)-x560));

	if (t99 != 4294967106U) { NG(); } else { ; }
	
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

