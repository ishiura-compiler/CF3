#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MAX;
uint64_t x29 = UINT64_MAX;
static int16_t x33 = INT16_MIN;
int8_t x34 = -1;
static int16_t x40 = INT16_MIN;
static volatile int32_t t7 = 45;
int16_t x41 = 2051;
static uint16_t x44 = UINT16_MAX;
int8_t x50 = -1;
static int32_t x53 = -1;
int32_t x56 = INT32_MIN;
int16_t x58 = -909;
uint32_t x60 = 3U;
volatile int16_t x65 = INT16_MAX;
uint64_t x71 = UINT64_MAX;
int64_t x82 = INT64_MAX;
volatile int64_t x91 = -1LL;
volatile int32_t t17 = -32921;
volatile int8_t x94 = 0;
int16_t x97 = INT16_MAX;
volatile int8_t x103 = INT8_MIN;
static int32_t t20 = 1090288;
volatile uint32_t x115 = 1200988501U;
volatile int32_t t22 = -2805;
int16_t x117 = 65;
int8_t x118 = -1;
volatile int32_t t23 = 189;
uint64_t x123 = UINT64_MAX;
uint16_t x124 = 10U;
int32_t x133 = INT32_MIN;
static int8_t x136 = -11;
uint16_t x153 = 3910U;
uint8_t x155 = 7U;
uint8_t x156 = 70U;
static int8_t x157 = INT8_MIN;
static int32_t t34 = 6769;
uint32_t x176 = 3866U;
int32_t t35 = -230;
int8_t x181 = 6;
int32_t x182 = -15566;
int64_t x183 = -1LL;
static volatile int32_t t38 = 48259;
int64_t x192 = -1LL;
volatile int32_t t40 = -302308;
static volatile int64_t x199 = -1LL;
int64_t x200 = INT64_MAX;
int8_t x205 = -1;
int32_t t43 = -3;
int8_t x213 = 1;
int16_t x218 = INT16_MIN;
static volatile int8_t x222 = INT8_MAX;
static int16_t x225 = 10;
static uint32_t x227 = 5556850U;
static volatile int16_t x234 = INT16_MIN;
int32_t x236 = -1;
int32_t t50 = -105609;
int16_t x248 = -113;
uint8_t x255 = UINT8_MAX;
int8_t x256 = INT8_MAX;
volatile int32_t t55 = 31023;
uint32_t x266 = 948022338U;
static int64_t x267 = INT64_MIN;
int32_t t56 = -24;
int16_t x278 = INT16_MAX;
static int16_t x279 = INT16_MIN;
int32_t x287 = 765;
int8_t x299 = INT8_MIN;
uint8_t x303 = 1U;
int16_t x304 = INT16_MIN;
uint32_t x307 = 29795U;
int16_t x324 = -1;
uint64_t x329 = 398685003LLU;
uint16_t x330 = 38U;
uint64_t x332 = 1009887LLU;
uint16_t x341 = UINT16_MAX;
int32_t x348 = -1;
volatile uint64_t x349 = 5926244568LLU;
volatile int32_t t74 = -467673;
int32_t x353 = INT32_MAX;
uint8_t x360 = 52U;
volatile int64_t x369 = -1LL;
int8_t x372 = -1;
volatile int32_t t77 = 10;
int16_t x412 = INT16_MAX;
volatile int32_t t84 = 985927130;
int16_t x418 = 3;
volatile uint64_t x419 = 670316577155LLU;
uint8_t x425 = 1U;
int8_t x428 = 0;
static volatile int32_t t87 = -66169899;
uint8_t x431 = 1U;
int64_t x432 = INT64_MIN;
int64_t x433 = INT64_MAX;
uint32_t x442 = 220U;
int16_t x443 = -1;
static uint32_t x446 = 980008U;
int8_t x452 = INT8_MIN;
int64_t x456 = 62276LL;
uint32_t x458 = 60661968U;
uint8_t x469 = 13U;
static volatile int32_t x471 = -1;


void f0(void) {
	volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	int32_t x8 = -1;
	int32_t t0 = 304118531;

	t0 = (x5==(x6&(x7+x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = 30537509003LL;
	volatile int64_t x11 = INT64_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = 12;

	t1 = (x9==(x10&(x11+x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	static uint8_t x18 = UINT8_MAX;
	uint64_t x19 = 1LLU;
	int64_t x20 = -1LL;
	volatile int32_t t2 = -59;

	t2 = (x17==(x18&(x19+x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 72715U;
	uint16_t x22 = 81U;
	uint64_t x23 = 3152924LLU;
	uint32_t x24 = UINT32_MAX;
	int32_t t3 = -896153882;

	t3 = (x21==(x22&(x23+x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -15;
	static int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	int32_t t4 = 296766;

	t4 = (x25==(x26&(x27+x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = UINT32_MAX;
	volatile uint8_t x31 = UINT8_MAX;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t5 = -96975666;

	t5 = (x29==(x30&(x31+x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x35 = INT8_MIN;
	int8_t x36 = -4;
	int32_t t6 = 28;

	t6 = (x33==(x34&(x35+x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int32_t x38 = 12093018;
	uint64_t x39 = UINT64_MAX;

	t7 = (x37==(x38&(x39+x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = 428863U;
	uint64_t x43 = 16647193055LLU;
	volatile int32_t t8 = 21209;

	t8 = (x41==(x42&(x43+x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 1647336;
	uint64_t x46 = 14876913984LLU;
	int16_t x47 = INT16_MIN;
	volatile int16_t x48 = INT16_MAX;
	static int32_t t9 = -20;

	t9 = (x45==(x46&(x47+x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 3566U;
	static volatile uint8_t x51 = 2U;
	int16_t x52 = INT16_MAX;
	int32_t t10 = 19;

	t10 = (x49==(x50&(x51+x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = -1;
	int32_t x55 = INT32_MAX;
	volatile int32_t t11 = -384881;

	t11 = (x53==(x54&(x55+x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 289725154373536183LLU;
	int8_t x59 = 1;
	volatile int32_t t12 = -3;

	t12 = (x57==(x58&(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 0U;
	static volatile int64_t x62 = 3326151553602LL;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 154891517;

	t13 = (x61==(x62&(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x66 = -1;
	static uint32_t x67 = 42U;
	volatile uint16_t x68 = 6154U;
	int32_t t14 = -933305433;

	t14 = (x65==(x66&(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = 112LL;
	uint16_t x72 = UINT16_MAX;
	int32_t t15 = -29670;

	t15 = (x69==(x70&(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -18;
	uint64_t x83 = 310996LLU;
	uint8_t x84 = 12U;
	volatile int32_t t16 = 0;

	t16 = (x81==(x82&(x83+x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x92 = 1;

	t17 = (x89==(x90&(x91+x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x93 = 0;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -1;
	volatile int32_t t18 = -320995;

	t18 = (x93==(x94&(x95+x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x98 = 0U;
	uint64_t x99 = 256LLU;
	uint16_t x100 = 6527U;
	int32_t t19 = -235;

	t19 = (x97==(x98&(x99+x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	static int8_t x104 = INT8_MAX;

	t20 = (x101==(x102&(x103+x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	int64_t x110 = INT64_MAX;
	int16_t x111 = -37;
	uint32_t x112 = 277761U;
	volatile int32_t t21 = 0;

	t21 = (x109==(x110&(x111+x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x113 = 1;
	volatile uint8_t x114 = 1U;
	int32_t x116 = 195231;

	t22 = (x113==(x114&(x115+x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x119 = 10U;
	volatile uint16_t x120 = UINT16_MAX;

	t23 = (x117==(x118&(x119+x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x121 = -1;
	volatile int8_t x122 = -6;
	int32_t t24 = -2;

	t24 = (x121==(x122&(x123+x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = 15732U;
	volatile int32_t x126 = INT32_MIN;
	volatile int32_t x127 = INT32_MIN;
	volatile int32_t x128 = 3;
	int32_t t25 = 10232;

	t25 = (x125==(x126&(x127+x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MIN;
	uint64_t x130 = 13673LLU;
	static int8_t x131 = -46;
	volatile int8_t x132 = 0;
	int32_t t26 = -509;

	t26 = (x129==(x130&(x131+x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x134 = INT8_MAX;
	volatile int64_t x135 = INT64_MAX;
	volatile int32_t t27 = -1;

	t27 = (x133==(x134&(x135+x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	uint16_t x138 = 3U;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = -1;
	int32_t t28 = -223;

	t28 = (x137==(x138&(x139+x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = -1;
	int32_t x142 = -1;
	static int64_t x143 = -1LL;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t29 = 862196;

	t29 = (x141==(x142&(x143+x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 16U;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 15996U;
	static volatile int32_t t30 = -11502;

	t30 = (x149==(x150&(x151+x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x154 = UINT32_MAX;
	int32_t t31 = 8547391;

	t31 = (x153==(x154&(x155+x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MAX;
	static int32_t t32 = 0;

	t32 = (x157==(x158&(x159+x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int32_t x166 = INT32_MIN;
	uint64_t x167 = 165475292045023900LLU;
	static volatile uint32_t x168 = UINT32_MAX;
	volatile int32_t t33 = -93600312;

	t33 = (x165==(x166&(x167+x168)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	static uint32_t x171 = 1575500287U;
	int8_t x172 = INT8_MIN;

	t34 = (x169==(x170&(x171+x172)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x173 = UINT32_MAX;
	static volatile int8_t x174 = 1;
	int32_t x175 = INT32_MIN;

	t35 = (x173==(x174&(x175+x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = -3469;
	int8_t x178 = INT8_MAX;
	int64_t x179 = INT64_MAX;
	int8_t x180 = -19;
	int32_t t36 = -3166;

	t36 = (x177==(x178&(x179+x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x184 = -2;
	static int32_t t37 = 15210214;

	t37 = (x181==(x182&(x183+x184)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = -2;
	int64_t x186 = INT64_MAX;
	int8_t x187 = 9;
	static volatile int8_t x188 = INT8_MIN;

	t38 = (x185==(x186&(x187+x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 13124U;
	int8_t x190 = 1;
	int32_t x191 = -69;
	volatile int32_t t39 = -135570;

	t39 = (x189==(x190&(x191+x192)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = 13U;
	volatile int64_t x194 = INT64_MAX;
	int64_t x195 = -1LL;
	volatile int64_t x196 = INT64_MAX;

	t40 = (x193==(x194&(x195+x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MIN;
	static int32_t t41 = -14;

	t41 = (x197==(x198&(x199+x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x206 = 416LLU;
	int16_t x207 = INT16_MIN;
	uint8_t x208 = 3U;
	volatile int32_t t42 = -63999087;

	t42 = (x205==(x206&(x207+x208)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x209 = INT64_MIN;
	int64_t x210 = -902443775943288LL;
	volatile int16_t x211 = 4773;
	static int64_t x212 = -1LL;

	t43 = (x209==(x210&(x211+x212)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x214 = -1;
	static int8_t x215 = -1;
	volatile uint8_t x216 = 3U;
	volatile int32_t t44 = 946;

	t44 = (x213==(x214&(x215+x216)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -1;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 4U;
	int32_t t45 = -448605;

	t45 = (x217==(x218&(x219+x220)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 440736U;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	static int32_t t46 = -5427717;

	t46 = (x221==(x222&(x223+x224)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x226 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t47 = 173;

	t47 = (x225==(x226&(x227+x228)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MAX;
	static int8_t x235 = -10;
	static volatile int32_t t48 = -1112;

	t48 = (x233==(x234&(x235+x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = 0;
	int8_t x238 = -1;
	static uint8_t x239 = UINT8_MAX;
	int64_t x240 = -59608LL;
	int32_t t49 = 1;

	t49 = (x237==(x238&(x239+x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = -1;
	int32_t x242 = 458280385;
	int32_t x243 = 31;
	uint64_t x244 = 8413646804927350538LLU;

	t50 = (x241==(x242&(x243+x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x245 = 1;
	static uint32_t x246 = 21651U;
	volatile int8_t x247 = INT8_MIN;
	int32_t t51 = 96567808;

	t51 = (x245==(x246&(x247+x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -1LL;
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = -1;
	int8_t x252 = -3;
	volatile int32_t t52 = 121863;

	t52 = (x249==(x250&(x251+x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = 8008050;
	int8_t x254 = INT8_MAX;
	volatile int32_t t53 = 432112192;

	t53 = (x253==(x254&(x255+x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MIN;
	static volatile int32_t x258 = -1;
	int64_t x259 = INT64_MIN;
	uint64_t x260 = 3524269925765LLU;
	int32_t t54 = -132985;

	t54 = (x257==(x258&(x259+x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x261 = 0U;
	static volatile int64_t x262 = INT64_MIN;
	static int16_t x263 = -338;
	int8_t x264 = -1;

	t55 = (x261==(x262&(x263+x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 51U;
	int32_t x268 = INT32_MAX;

	t56 = (x265==(x266&(x267+x268)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x280 = -1;
	volatile int32_t t57 = -15;

	t57 = (x277==(x278&(x279+x280)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x281 = -54;
	uint16_t x282 = 36U;
	int8_t x283 = 0;
	int8_t x284 = 1;
	int32_t t58 = -467;

	t58 = (x281==(x282&(x283+x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = -1LL;
	int32_t x288 = INT32_MIN;
	int32_t t59 = 45216330;

	t59 = (x285==(x286&(x287+x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = 31706579LL;
	int32_t x292 = -1;
	volatile int32_t t60 = 411;

	t60 = (x289==(x290&(x291+x292)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	uint64_t x300 = 28619928718059246LLU;
	volatile int32_t t61 = 494;

	t61 = (x297==(x298&(x299+x300)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = 5580;
	int8_t x302 = -1;
	static volatile int32_t t62 = -15;

	t62 = (x301==(x302&(x303+x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MAX;
	int8_t x308 = INT8_MAX;
	volatile int32_t t63 = 772100686;

	t63 = (x305==(x306&(x307+x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint64_t x310 = 214748023419LLU;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t64 = 779;

	t64 = (x309==(x310&(x311+x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MAX;
	static volatile uint8_t x314 = 6U;
	uint16_t x315 = 6U;
	volatile int16_t x316 = -1;
	int32_t t65 = 2345303;

	t65 = (x313==(x314&(x315+x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	int32_t x319 = 169;
	volatile uint8_t x320 = 3U;
	static volatile int32_t t66 = 10;

	t66 = (x317==(x318&(x319+x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = 1569;
	static int64_t x322 = INT64_MIN;
	static volatile uint64_t x323 = UINT64_MAX;
	int32_t t67 = -24647860;

	t67 = (x321==(x322&(x323+x324)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x325 = UINT8_MAX;
	static int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = UINT32_MAX;
	int64_t x328 = -63702LL;
	int32_t t68 = -3323402;

	t68 = (x325==(x326&(x327+x328)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x331 = INT64_MIN;
	int32_t t69 = -3499;

	t69 = (x329==(x330&(x331+x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = -515153003;
	static int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MAX;
	int32_t t70 = 11423;

	t70 = (x333==(x334&(x335+x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = -3221298587390975LL;
	static int8_t x338 = INT8_MIN;
	static uint64_t x339 = 3LLU;
	int16_t x340 = INT16_MIN;
	volatile int32_t t71 = -2653813;

	t71 = (x337==(x338&(x339+x340)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x342 = -104LL;
	uint8_t x343 = 0U;
	int64_t x344 = 15830876870092196LL;
	int32_t t72 = -60;

	t72 = (x341==(x342&(x343+x344)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x345 = 1LL;
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile int32_t t73 = -24;

	t73 = (x345==(x346&(x347+x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x350 = -2554;
	int32_t x351 = INT32_MIN;
	static volatile uint8_t x352 = UINT8_MAX;

	t74 = (x349==(x350&(x351+x352)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x354 = INT32_MIN;
	int32_t x355 = -1;
	int16_t x356 = INT16_MIN;
	int32_t t75 = 4704841;

	t75 = (x353==(x354&(x355+x356)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -1;
	static int8_t x359 = INT8_MAX;
	volatile int32_t t76 = 1714;

	t76 = (x357==(x358&(x359+x360)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x370 = 46;
	volatile int8_t x371 = INT8_MIN;

	t77 = (x369==(x370&(x371+x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x381 = 9235LLU;
	uint32_t x382 = 108U;
	volatile int16_t x383 = -602;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t78 = -22335374;

	t78 = (x381==(x382&(x383+x384)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x385 = -53;
	volatile int64_t x386 = -50LL;
	static int32_t x387 = -1;
	int16_t x388 = -16276;
	int32_t t79 = -2563;

	t79 = (x385==(x386&(x387+x388)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = 1825140465074955LL;
	volatile int64_t x390 = INT64_MAX;
	uint64_t x391 = 2LLU;
	int64_t x392 = -1LL;
	volatile int32_t t80 = 3901512;

	t80 = (x389==(x390&(x391+x392)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = 6;
	int8_t x394 = 0;
	static int64_t x395 = INT64_MAX;
	static int64_t x396 = -1LL;
	volatile int32_t t81 = 107237276;

	t81 = (x393==(x394&(x395+x396)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x397 = 54782649;
	int8_t x398 = INT8_MAX;
	int16_t x399 = 1116;
	int8_t x400 = INT8_MAX;
	static int32_t t82 = 25824;

	t82 = (x397==(x398&(x399+x400)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x401 = INT16_MAX;
	int64_t x402 = -791LL;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t83 = -283198997;

	t83 = (x401==(x402&(x403+x404)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x409 = UINT32_MAX;
	uint64_t x410 = 6281588141086675LLU;
	int64_t x411 = INT64_MIN;

	t84 = (x409==(x410&(x411+x412)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x417 = -1;
	int64_t x420 = INT64_MIN;
	int32_t t85 = 3719289;

	t85 = (x417==(x418&(x419+x420)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x421 = 5U;
	static int16_t x422 = INT16_MAX;
	uint8_t x423 = 3U;
	static int8_t x424 = -1;
	volatile int32_t t86 = -14254760;

	t86 = (x421==(x422&(x423+x424)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x426 = 3U;
	int64_t x427 = INT64_MIN;

	t87 = (x425==(x426&(x427+x428)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int32_t x430 = -68630;
	int32_t t88 = -80;

	t88 = (x429==(x430&(x431+x432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 2450925364LLU;
	int16_t x436 = 47;
	int32_t t89 = 768568;

	t89 = (x433==(x434&(x435+x436)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x437 = INT32_MAX;
	volatile int64_t x438 = INT64_MAX;
	static int16_t x439 = INT16_MIN;
	int16_t x440 = -1;
	volatile int32_t t90 = -272510;

	t90 = (x437==(x438&(x439+x440)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x441 = 3450201;
	uint8_t x444 = 10U;
	int32_t t91 = -1;

	t91 = (x441==(x442&(x443+x444)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x445 = 363118338810LL;
	volatile int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t92 = 243;

	t92 = (x445==(x446&(x447+x448)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	static uint64_t x451 = 2LLU;
	int32_t t93 = -321208345;

	t93 = (x449==(x450&(x451+x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x453 = UINT8_MAX;
	int32_t x454 = INT32_MAX;
	uint64_t x455 = 3542LLU;
	volatile int32_t t94 = 3783;

	t94 = (x453==(x454&(x455+x456)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x457 = INT16_MIN;
	static volatile uint16_t x459 = UINT16_MAX;
	int16_t x460 = INT16_MIN;
	int32_t t95 = -15;

	t95 = (x457==(x458&(x459+x460)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x461 = 4451589369LLU;
	int16_t x462 = INT16_MAX;
	uint32_t x463 = 121U;
	static int8_t x464 = 0;
	static volatile int32_t t96 = 84360;

	t96 = (x461==(x462&(x463+x464)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x465 = -5502170877LL;
	uint64_t x466 = UINT64_MAX;
	int64_t x467 = INT64_MIN;
	static uint64_t x468 = UINT64_MAX;
	int32_t t97 = 109;

	t97 = (x465==(x466&(x467+x468)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x470 = -16358;
	int64_t x472 = -25LL;
	int32_t t98 = 523860415;

	t98 = (x469==(x470&(x471+x472)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = 239;
	static int32_t x474 = INT32_MIN;
	volatile uint64_t x475 = 240923LLU;
	uint8_t x476 = 22U;
	volatile int32_t t99 = 10435601;

	t99 = (x473==(x474&(x475+x476)));

	if (t99 != 0) { NG(); } else { ; }
	
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

