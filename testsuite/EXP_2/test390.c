#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 2076450123594452LLU;
int32_t x6 = INT32_MIN;
volatile uint64_t t0 = 124757481504098LLU;
uint32_t x17 = 163U;
int64_t x27 = -87871922833459LL;
static int64_t t3 = 91345565374278889LL;
uint32_t x40 = 24520U;
int8_t x42 = 1;
uint8_t x59 = 3U;
volatile uint64_t t9 = 3122452845464LLU;
volatile int64_t t10 = 26479779087605LL;
int16_t x65 = -88;
volatile uint32_t x66 = 3927U;
volatile int64_t t11 = -112LL;
volatile int32_t x86 = -1;
int8_t x88 = -6;
volatile int16_t x89 = INT16_MIN;
volatile int64_t x101 = -1LL;
uint32_t x106 = 22959U;
static int64_t x113 = INT64_MIN;
int8_t x114 = -54;
uint8_t x130 = UINT8_MAX;
volatile int64_t x131 = -1LL;
int32_t x144 = 6617653;
volatile int16_t x145 = INT16_MAX;
int8_t x150 = -1;
uint16_t x151 = 115U;
static uint64_t t25 = 128120LLU;
static uint64_t t26 = 386272754416739LLU;
uint8_t x158 = 2U;
volatile int64_t t27 = INT64_MIN;
uint64_t x162 = 11016066339LLU;
static uint8_t x165 = UINT8_MAX;
int32_t x178 = -441;
uint8_t x180 = 0U;
static int64_t t30 = 455LL;
int16_t x185 = -14557;
int8_t x226 = 1;
volatile int16_t x227 = INT16_MIN;
volatile int32_t x228 = INT32_MAX;
volatile int64_t t37 = -161207028855407558LL;
uint8_t x231 = 16U;
int32_t x233 = -1868;
uint16_t x234 = 6U;
static int32_t t40 = INT32_MIN;
volatile int64_t t41 = 128261221489693LL;
uint64_t x246 = UINT64_MAX;
uint8_t x260 = 12U;
static int16_t x262 = INT16_MIN;
uint8_t x268 = 9U;
volatile int64_t t46 = -13236435884LL;
static int32_t x280 = INT32_MAX;
static int64_t x281 = -42550545735919LL;
uint32_t t50 = 10701U;
uint8_t x295 = 67U;
static int16_t x299 = INT16_MIN;
int16_t x303 = INT16_MIN;
int32_t x304 = -1;
volatile uint64_t t53 = UINT64_MAX;
int8_t x321 = INT8_MIN;
int8_t x329 = INT8_MAX;
int8_t x337 = INT8_MIN;
int8_t x339 = INT8_MAX;
volatile int32_t t59 = 50738;
int32_t x344 = -1;
int16_t x348 = -1;
volatile int64_t t61 = -1LL;
volatile int64_t t62 = 15700055338252075LL;
int16_t x357 = INT16_MIN;
uint8_t x361 = 91U;
int64_t x365 = -1444626685LL;
int8_t x366 = -1;
int8_t x380 = INT8_MIN;
int16_t x387 = INT16_MIN;
volatile int64_t t68 = 1790618511LL;
uint32_t x391 = 107U;
int16_t x392 = INT16_MIN;
static volatile int8_t x393 = INT8_MIN;
uint16_t x395 = 21341U;
int16_t x402 = INT16_MAX;
volatile int16_t x404 = INT16_MIN;
static uint8_t x406 = 1U;
volatile uint8_t x407 = 1U;
int16_t x409 = -1;
uint32_t x419 = UINT32_MAX;
static int32_t x464 = -1;
static int16_t x471 = INT16_MAX;
static volatile uint32_t t78 = UINT32_MAX;
uint32_t x479 = UINT32_MAX;
uint8_t x482 = UINT8_MAX;
uint16_t x484 = 295U;
static volatile int64_t t81 = 2968001482LL;
int8_t x485 = -6;
int32_t t83 = -35;
volatile uint32_t x494 = 972U;
volatile uint64_t t87 = 12367726962LLU;
volatile int16_t x520 = -1267;
int32_t t89 = -23597;
static int64_t x521 = 15306116355LL;
volatile uint16_t x523 = 26U;
static uint16_t x553 = 62U;
int16_t x559 = -1;
volatile uint8_t x560 = 10U;
static int64_t x566 = INT64_MAX;
volatile int64_t x569 = INT64_MIN;
static int16_t x574 = INT16_MAX;
int32_t x576 = -1;
int32_t t98 = 139758;


void f0(void) {
	static uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;

	t0 = ((x5/(x6*x7))^x8);

	if (t0 != 18446744073708585226LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 51U;
	volatile uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 912LLU;
	volatile int16_t x12 = -1;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x9/(x10*x11))^x12);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MAX;
	int64_t x19 = 300798833LL;
	int64_t x20 = 155322LL;
	static volatile int64_t t2 = 9321LL;

	t2 = ((x17/(x18*x19))^x20);

	if (t2 != 155322LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -1LL;
	int32_t x26 = -1;
	static volatile int8_t x28 = -1;

	t3 = ((x25/(x26*x27))^x28);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	int8_t x31 = 5;
	uint16_t x32 = UINT16_MAX;
	volatile int64_t t4 = 10873773079LL;

	t4 = ((x29/(x30*x31))^x32);

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = 19U;
	static volatile uint8_t x38 = 61U;
	volatile int8_t x39 = INT8_MIN;
	volatile uint32_t t5 = 184379U;

	t5 = ((x37/(x38*x39))^x40);

	if (t5 != 24520U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MAX;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;
	static volatile int32_t t6 = 6503;

	t6 = ((x41/(x42*x43))^x44);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x45 = 51788U;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 140U;
	int32_t x48 = -1;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = ((x45/(x46*x47))^x48);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 5LLU;
	volatile int8_t x50 = INT8_MIN;
	uint16_t x51 = 2U;
	int64_t x52 = -1LL;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x49/(x50*x51))^x52);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	static uint64_t x58 = 6758133LLU;
	volatile int32_t x60 = -1;

	t9 = ((x57/(x58*x59))^x60);

	if (t9 != 18446743163855500025LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x61 = -84462861LL;
	int16_t x62 = 4;
	static int64_t x63 = -1LL;
	static int8_t x64 = INT8_MIN;

	t10 = ((x61/(x62*x63))^x64);

	if (t10 != -21115709LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x67 = -1LL;
	int16_t x68 = INT16_MIN;

	t11 = ((x65/(x66*x67))^x68);

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = INT32_MAX;
	static int32_t x82 = INT32_MIN;
	int64_t x83 = 1LL;
	int32_t x84 = INT32_MAX;
	int64_t t12 = 455935811152702LL;

	t12 = ((x81/(x82*x83))^x84);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 78899877U;
	uint8_t x87 = 85U;
	volatile uint32_t t13 = 12U;

	t13 = ((x85/(x86*x87))^x88);

	if (t13 != 4294967290U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x90 = 3U;
	int16_t x91 = 72;
	uint8_t x92 = 7U;
	int32_t t14 = -53893725;

	t14 = ((x89/(x90*x91))^x92);

	if (t14 != -146) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = 1994742333424229705LLU;
	int32_t x95 = -1;
	volatile uint16_t x96 = 207U;
	volatile uint64_t t15 = 0LLU;

	t15 = ((x93/(x94*x95))^x96);

	if (t15 != 206LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 118U;
	int64_t x99 = 23523790LL;
	uint8_t x100 = UINT8_MAX;
	volatile uint64_t t16 = 93963351044LLU;

	t16 = ((x97/(x98*x99))^x100);

	if (t16 != 6645542324LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	uint16_t x104 = UINT16_MAX;
	int64_t t17 = 843951169344715LL;

	t17 = ((x101/(x102*x103))^x104);

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = -1394LL;
	uint64_t x107 = UINT64_MAX;
	static volatile uint64_t x108 = UINT64_MAX;
	uint64_t t18 = 90370399915792030LLU;

	t18 = ((x105/(x106*x107))^x108);

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x115 = 1;
	volatile int32_t x116 = 229317;
	int64_t t19 = 45890LL;

	t19 = ((x113/(x114*x115))^x116);

	if (t19 != 170803185867723468LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = -5018024LL;
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -12053;
	volatile int64_t t20 = -313LL;

	t20 = ((x117/(x118*x119))^x120);

	if (t20 != -12053LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 106643U;
	volatile int32_t x122 = -1;
	uint32_t x123 = 10216U;
	static volatile uint32_t x124 = 712136U;
	uint32_t t21 = 12U;

	t21 = ((x121/(x122*x123))^x124);

	if (t21 != 712136U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	volatile uint8_t x132 = 58U;
	int64_t t22 = 10421990LL;

	t22 = ((x129/(x130*x131))^x132);

	if (t22 != 8421562LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = 152;
	uint16_t x143 = 1U;
	volatile int32_t t23 = 6;

	t23 = ((x141/(x142*x143))^x144);

	if (t23 != 6617653) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x146 = -1;
	volatile uint32_t x147 = UINT32_MAX;
	uint16_t x148 = UINT16_MAX;
	uint32_t t24 = 2212941U;

	t24 = ((x145/(x146*x147))^x148);

	if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x149 = 564696882237867545LLU;
	static int16_t x152 = INT16_MAX;

	t25 = ((x149/(x150*x151))^x152);

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x153 = 32U;
	uint8_t x154 = 35U;
	volatile int16_t x155 = INT16_MIN;
	volatile uint64_t x156 = 8223401019LLU;

	t26 = ((x153/(x154*x155))^x156);

	if (t26 != 8223401019LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x157 = 0U;
	static volatile int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MIN;

	t27 = ((x157/(x158*x159))^x160);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x163 = INT32_MIN;
	static int16_t x164 = INT16_MIN;
	uint64_t t28 = 191LLU;

	t28 = ((x161/(x162*x163))^x164);

	if (t28 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x166 = -4631;
	static volatile uint8_t x167 = UINT8_MAX;
	int8_t x168 = INT8_MAX;
	volatile int32_t t29 = -13284;

	t29 = ((x165/(x166*x167))^x168);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x177 = INT64_MIN;
	int32_t x179 = -360;

	t30 = ((x177/(x178*x179))^x180);

	if (t30 != -58096321723701LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = 165026LLU;
	int32_t x188 = INT32_MIN;
	static volatile uint64_t t31 = 298069500525324449LLU;

	t31 = ((x185/(x186*x187))^x188);

	if (t31 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MAX;
	int16_t x191 = 1;
	uint8_t x192 = 37U;
	volatile int32_t t32 = -30671;

	t32 = ((x189/(x190*x191))^x192);

	if (t32 != 39) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = INT16_MAX;
	static int64_t x194 = INT64_MAX;
	int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t33 = UINT64_MAX;

	t33 = ((x193/(x194*x195))^x196);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = -4;
	int8_t x202 = INT8_MAX;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = 120078U;
	uint32_t t34 = 0U;

	t34 = ((x201/(x202*x203))^x204);

	if (t34 != 120078U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = 0;
	static volatile uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 12U;
	int32_t x208 = -72636609;
	static volatile uint32_t t35 = 39908497U;

	t35 = ((x205/(x206*x207))^x208);

	if (t35 != 4222330687U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = 0;
	volatile int32_t x214 = -18521;
	int64_t x215 = -306219064LL;
	uint8_t x216 = UINT8_MAX;
	static volatile int64_t t36 = 226816989LL;

	t36 = ((x213/(x214*x215))^x216);

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x225 = 21542129LL;

	t37 = ((x225/(x226*x227))^x228);

	if (t37 != -2147482992LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x229 = 0LLU;
	int32_t x230 = 396;
	uint32_t x232 = 8U;
	volatile uint64_t t38 = 396163680501LLU;

	t38 = ((x229/(x230*x231))^x232);

	if (t38 != 8LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x235 = 3090020421LLU;
	uint8_t x236 = 7U;
	static uint64_t t39 = 355LLU;

	t39 = ((x233/(x234*x235))^x236);

	if (t39 != 994963432LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = INT8_MIN;
	volatile uint16_t x238 = 29253U;
	volatile int8_t x239 = 19;
	int32_t x240 = INT32_MIN;

	t40 = ((x237/(x238*x239))^x240);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = -208;
	static int64_t x243 = 3107177199279LL;
	static volatile uint8_t x244 = 25U;

	t41 = ((x241/(x242*x243))^x244);

	if (t41 != 25LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x245 = INT32_MAX;
	volatile int64_t x247 = INT64_MIN;
	static uint16_t x248 = 1581U;
	uint64_t t42 = 2735LLU;

	t42 = ((x245/(x246*x247))^x248);

	if (t42 != 1581LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x253 = 290;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = 115;
	static int8_t x256 = INT8_MIN;
	static volatile int32_t t43 = -2287;

	t43 = ((x253/(x254*x255))^x256);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MAX;
	volatile int16_t x259 = -1;
	int32_t t44 = 27;

	t44 = ((x257/(x258*x259))^x260);

	if (t44 != 13) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x261 = -1LL;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MIN;
	int64_t t45 = -5468110729824LL;

	t45 = ((x261/(x262*x263))^x264);

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = INT64_MIN;
	static uint16_t x266 = 7U;
	int8_t x267 = 12;

	t46 = ((x265/(x266*x267))^x268);

	if (t46 != -109802048057794957LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	volatile int32_t t47 = INT32_MAX;

	t47 = ((x277/(x278*x279))^x280);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x282 = 260U;
	static uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 5LLU;
	volatile uint64_t t48 = 31848873183055LLU;

	t48 = ((x281/(x282*x283))^x284);

	if (t48 != 5LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = -2;
	uint32_t x287 = 14405U;
	int32_t x288 = INT32_MAX;
	volatile uint32_t t49 = 0U;

	t49 = ((x285/(x286*x287))^x288);

	if (t49 != 2147483647U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x289 = -1;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = -1;
	int8_t x292 = -2;

	t50 = ((x289/(x290*x291))^x292);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = INT16_MAX;
	int8_t x296 = 1;
	int32_t t51 = -7782353;

	t51 = ((x293/(x294*x295))^x296);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = -3;
	static int8_t x300 = -1;
	volatile int32_t t52 = -37204;

	t52 = ((x297/(x298*x299))^x300);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x301 = 69U;
	uint64_t x302 = 529LLU;

	t53 = ((x301/(x302*x303))^x304);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = -1;
	uint16_t x306 = 1464U;
	int8_t x307 = INT8_MAX;
	uint64_t x308 = 5575641016064LLU;
	volatile uint64_t t54 = 5543LLU;

	t54 = ((x305/(x306*x307))^x308);

	if (t54 != 5575641016064LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static int16_t x310 = INT16_MAX;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t55 = -1;

	t55 = ((x309/(x310*x311))^x312);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x322 = 2695;
	uint32_t x323 = 2U;
	static int8_t x324 = -1;
	uint32_t t56 = 2224U;

	t56 = ((x321/(x322*x323))^x324);

	if (t56 != 4294170456U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x330 = INT64_MAX;
	static int8_t x331 = 1;
	int64_t x332 = -1LL;
	int64_t t57 = -233799279LL;

	t57 = ((x329/(x330*x331))^x332);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = 3278LLU;
	static uint8_t x334 = 2U;
	uint16_t x335 = 8U;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t58 = 109LLU;

	t58 = ((x333/(x334*x335))^x336);

	if (t58 != 18446744073709551436LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x338 = -4758;
	uint8_t x340 = UINT8_MAX;

	t59 = ((x337/(x338*x339))^x340);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x341 = 1210U;
	volatile int16_t x342 = INT16_MIN;
	static uint8_t x343 = UINT8_MAX;
	static volatile int32_t t60 = 3924;

	t60 = ((x341/(x342*x343))^x344);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = -9;
	int64_t x347 = -10LL;

	t61 = ((x345/(x346*x347))^x348);

	if (t61 != 363LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = -1;
	int64_t x350 = 1LL;
	uint8_t x351 = 5U;
	uint8_t x352 = 31U;

	t62 = ((x349/(x350*x351))^x352);

	if (t62 != 31LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 5821U;
	volatile int32_t t63 = 0;

	t63 = ((x357/(x358*x359))^x360);

	if (t63 != 5693) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x362 = 4281;
	uint64_t x363 = 7185935449174LLU;
	uint16_t x364 = UINT16_MAX;
	static volatile uint64_t t64 = 85532174373412LLU;

	t64 = ((x361/(x362*x363))^x364);

	if (t64 != 65535LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	int64_t t65 = 63305709006636LL;

	t65 = ((x365/(x366*x367))^x368);

	if (t65 != 44106LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x373 = 247U;
	int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	int32_t x376 = INT32_MAX;
	volatile int64_t t66 = -69456986086560LL;

	t66 = ((x373/(x374*x375))^x376);

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = -19;
	static volatile uint32_t x378 = 109835U;
	volatile int32_t x379 = 11;
	uint32_t t67 = 204994U;

	t67 = ((x377/(x378*x379))^x380);

	if (t67 != 4294963810U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x385 = -1LL;
	static uint8_t x386 = 39U;
	uint32_t x388 = UINT32_MAX;

	t68 = ((x385/(x386*x387))^x388);

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x389 = -2319;
	int32_t x390 = 53;
	uint32_t t69 = 292U;

	t69 = ((x389/(x390*x391))^x392);

	if (t69 != 4294184555U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x394 = 71U;
	int16_t x396 = -11239;
	static uint32_t t70 = 1268U;

	t70 = ((x393/(x394*x395))^x396);

	if (t70 != 4294958859U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x401 = 2U;
	int8_t x403 = INT8_MIN;
	volatile uint32_t t71 = 19U;

	t71 = ((x401/(x402*x403))^x404);

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = INT64_MIN;
	static int32_t x408 = -33215795;
	int64_t t72 = -2964590679509LL;

	t72 = ((x405/(x406*x407))^x408);

	if (t72 != 9223372036821560013LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x410 = UINT64_MAX;
	uint8_t x411 = UINT8_MAX;
	uint32_t x412 = 2U;
	uint64_t t73 = 566103333LLU;

	t73 = ((x409/(x410*x411))^x412);

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x417 = UINT8_MAX;
	static volatile int32_t x418 = 45;
	int8_t x420 = INT8_MIN;
	uint32_t t74 = 2226U;

	t74 = ((x417/(x418*x419))^x420);

	if (t74 != 4294967168U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x437 = INT16_MIN;
	static uint8_t x438 = 5U;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MAX;
	int64_t t75 = -105221LL;

	t75 = ((x437/(x438*x439))^x440);

	if (t75 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x445 = -1;
	uint32_t x446 = 94772U;
	int32_t x447 = INT32_MAX;
	int16_t x448 = INT16_MIN;
	uint32_t t76 = 12U;

	t76 = ((x445/(x446*x447))^x448);

	if (t76 != 4294934529U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x461 = INT8_MIN;
	volatile uint8_t x462 = UINT8_MAX;
	volatile int16_t x463 = INT16_MIN;
	int32_t t77 = 137384322;

	t77 = ((x461/(x462*x463))^x464);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x469 = 3U;
	static uint8_t x470 = 43U;
	uint32_t x472 = UINT32_MAX;

	t78 = ((x469/(x470*x471))^x472);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x473 = INT8_MIN;
	static uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t79 = 396;

	t79 = ((x473/(x474*x475))^x476);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = INT8_MIN;
	volatile int16_t x478 = 117;
	volatile int8_t x480 = -1;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = ((x477/(x478*x479))^x480);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x481 = -726369783092LL;
	int8_t x483 = INT8_MAX;

	t81 = ((x481/(x482*x483))^x484);

	if (t81 != -22429493LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x486 = -2;
	int32_t x487 = -780;
	int8_t x488 = INT8_MIN;
	int32_t t82 = -8781;

	t82 = ((x485/(x486*x487))^x488);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x489 = -11;
	uint16_t x490 = UINT16_MAX;
	volatile uint16_t x491 = 1U;
	int8_t x492 = -1;

	t83 = ((x489/(x490*x491))^x492);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x493 = INT16_MIN;
	int16_t x495 = INT16_MAX;
	static volatile int16_t x496 = INT16_MIN;
	volatile uint32_t t84 = 1U;

	t84 = ((x493/(x494*x495))^x496);

	if (t84 != 4294934662U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x501 = 0;
	uint32_t x502 = 275U;
	uint64_t x503 = UINT64_MAX;
	static uint64_t x504 = 23970LLU;
	static uint64_t t85 = 237LLU;

	t85 = ((x501/(x502*x503))^x504);

	if (t85 != 23970LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = INT64_MIN;
	static int16_t x506 = -3825;
	static int8_t x507 = INT8_MIN;
	static uint32_t x508 = 8811U;
	static volatile int64_t t86 = -4364295412465LL;

	t86 = ((x505/(x506*x507))^x508);

	if (t86 != -18838586685199LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x509 = 13U;
	int32_t x510 = -1;
	uint64_t x511 = 872921353288700LLU;
	uint16_t x512 = 36U;

	t87 = ((x509/(x510*x511))^x512);

	if (t87 != 36LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x513 = INT32_MIN;
	volatile int16_t x514 = -8;
	volatile int64_t x515 = -1LL;
	static volatile uint32_t x516 = 363942696U;
	int64_t t88 = -3594854618847LL;

	t88 = ((x513/(x514*x515))^x516);

	if (t88 != -441363672LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MIN;
	static int8_t x519 = INT8_MIN;

	t89 = ((x517/(x518*x519))^x520);

	if (t89 != 1267) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x522 = 1;
	volatile int16_t x524 = 205;
	volatile int64_t t90 = -1094LL;

	t90 = ((x521/(x522*x523))^x524);

	if (t90 != 588696579LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x525 = -1;
	static int16_t x526 = -6513;
	uint16_t x527 = UINT16_MAX;
	volatile int16_t x528 = -12481;
	volatile int32_t t91 = -6813892;

	t91 = ((x525/(x526*x527))^x528);

	if (t91 != -12481) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x541 = INT64_MIN;
	uint16_t x542 = 50U;
	uint16_t x543 = UINT16_MAX;
	uint32_t x544 = 326889U;
	volatile int64_t t92 = 102569124522662152LL;

	t92 = ((x541/(x542*x543))^x544);

	if (t92 != -2814793001105LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x545 = -1;
	int8_t x546 = 2;
	uint32_t x547 = UINT32_MAX;
	int32_t x548 = 3;
	uint32_t t93 = 223226U;

	t93 = ((x545/(x546*x547))^x548);

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x554 = 167277751223955LL;
	int8_t x555 = INT8_MAX;
	volatile uint32_t x556 = 7917222U;
	int64_t t94 = 2458518565860686LL;

	t94 = ((x553/(x554*x555))^x556);

	if (t94 != 7917222LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x557 = INT32_MIN;
	volatile int8_t x558 = -1;
	static int32_t t95 = 2;

	t95 = ((x557/(x558*x559))^x560);

	if (t95 != -2147483638) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x565 = -1;
	static volatile int64_t x567 = -1LL;
	int32_t x568 = INT32_MIN;
	int64_t t96 = -1019701656111066LL;

	t96 = ((x565/(x566*x567))^x568);

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x570 = UINT64_MAX;
	uint16_t x571 = 1U;
	static int32_t x572 = INT32_MIN;
	volatile uint64_t t97 = 3899LLU;

	t97 = ((x569/(x570*x571))^x572);

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x573 = -57;
	int16_t x575 = -12;

	t98 = ((x573/(x574*x575))^x576);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x577 = UINT64_MAX;
	static int64_t x578 = -4325992425333LL;
	uint16_t x579 = 23U;
	int8_t x580 = INT8_MAX;
	volatile uint64_t t99 = 94017LLU;

	t99 = ((x577/(x578*x579))^x580);

	if (t99 != 126LLU) { NG(); } else { ; }
	
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

