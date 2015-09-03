#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 5U;
static int16_t x12 = -1154;
volatile uint64_t t1 = 1389LLU;
int8_t x17 = -1;
int32_t t4 = -217215691;
volatile uint64_t t5 = 3006304LLU;
static int16_t x41 = -11887;
int8_t x45 = 5;
int64_t t7 = 9LL;
int8_t x49 = 2;
int32_t x51 = INT32_MIN;
volatile uint64_t t8 = 1277105140715080LLU;
int32_t x54 = -948524748;
uint16_t x55 = UINT16_MAX;
uint64_t x59 = UINT64_MAX;
volatile uint64_t t10 = 40934LLU;
uint8_t x68 = UINT8_MAX;
uint16_t x69 = UINT16_MAX;
volatile uint64_t x83 = 1262116598LLU;
uint64_t x93 = 761657602169LLU;
int16_t x112 = -85;
int8_t x114 = -10;
static volatile int16_t x115 = -565;
int16_t x116 = INT16_MIN;
volatile int32_t x139 = -1;
volatile int32_t t23 = -1;
uint64_t t24 = 14903117919855LLU;
static int64_t x147 = 1627172488439LL;
uint16_t x155 = UINT16_MAX;
volatile uint32_t x158 = 46U;
uint64_t t28 = 52504826LLU;
int32_t t29 = -36;
int32_t x170 = -169;
int32_t x200 = -1;
static int32_t t33 = 4997378;
int8_t x205 = INT8_MIN;
int8_t x226 = INT8_MAX;
uint16_t x228 = 0U;
int32_t x241 = -1;
volatile uint64_t t41 = 72441775757859216LLU;
int64_t t43 = -107422LL;
volatile int32_t x275 = -1;
int16_t x285 = INT16_MAX;
int8_t x294 = INT8_MIN;
int32_t x295 = -3;
static int32_t x306 = -9;
int32_t x307 = -1;
int32_t t52 = 239724;
static int64_t x309 = INT64_MIN;
uint32_t x310 = 1876140U;
int32_t x315 = 29;
volatile int32_t t55 = -15798123;
int64_t x328 = -1928897132204LL;
volatile uint64_t t56 = 214450369369764LLU;
volatile int64_t t57 = -74885807092LL;
volatile int64_t t58 = -18673LL;
int32_t x350 = INT32_MIN;
int16_t x352 = 211;
volatile int64_t t60 = 1528712857441698633LL;
uint64_t x354 = UINT64_MAX;
uint64_t x355 = 419739349LLU;
static uint32_t x356 = 104U;
uint64_t x360 = 1612064LLU;
uint16_t x368 = 197U;
static int8_t x370 = -1;
uint64_t x375 = UINT64_MAX;
int8_t x384 = -13;
int64_t t68 = 27316859LL;
int64_t x409 = INT64_MIN;
int32_t x412 = -1;
static int32_t x413 = 10;
volatile uint64_t t71 = 200LLU;
uint8_t x428 = UINT8_MAX;
volatile int64_t x429 = INT64_MIN;
volatile uint64_t x430 = 941740974524LLU;
static uint32_t x436 = 823112657U;
static uint64_t x443 = UINT64_MAX;
uint32_t x444 = UINT32_MAX;
uint64_t t76 = 110470750868986LLU;
volatile int64_t t77 = 2570157102879719290LL;
uint8_t x462 = UINT8_MAX;
int32_t x485 = INT32_MIN;
uint64_t t82 = 129675094802336320LLU;
int32_t x501 = INT32_MIN;
int16_t x517 = -1;
volatile int64_t t87 = -60091964085439LL;
volatile int64_t x542 = INT64_MAX;
static int32_t x549 = -641472719;
uint64_t x563 = 46035LLU;
uint64_t x565 = UINT64_MAX;
int64_t x568 = -1LL;
int32_t x569 = INT32_MIN;
int64_t x577 = -207856LL;
static int16_t x584 = 0;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint32_t x2 = 2U;
	uint32_t x3 = 212367U;
	static int32_t x4 = INT32_MIN;

	t0 = ((x1%x2)+(x3*x4));

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 5756634564LLU;
	static volatile int8_t x10 = 31;
	int16_t x11 = INT16_MIN;

	t1 = ((x9%x10)+(x11*x12));

	if (t1 != 37814277LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MIN;
	static volatile int8_t x19 = -1;
	int32_t x20 = 100;
	static volatile int32_t t2 = 3;

	t2 = ((x17%x18)+(x19*x20));

	if (t2 != -101) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = -1LL;
	static int16_t x27 = INT16_MAX;
	int8_t x28 = -40;
	volatile uint64_t t3 = 46LLU;

	t3 = ((x25%x26)+(x27*x28));

	if (t3 != 18446744073708240936LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 1;
	int16_t x34 = INT16_MAX;
	int32_t x35 = 5771449;
	uint8_t x36 = 5U;

	t4 = ((x33%x34)+(x35*x36));

	if (t4 != 28857246) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x37 = 29U;
	uint8_t x38 = 2U;
	volatile int8_t x39 = INT8_MIN;
	static uint64_t x40 = 6LLU;

	t5 = ((x37%x38)+(x39*x40));

	if (t5 != 18446744073709550849LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x42 = 3U;
	static volatile int16_t x43 = INT16_MIN;
	int64_t x44 = -1LL;
	volatile int64_t t6 = -108548493461846LL;

	t6 = ((x41%x42)+(x43*x44));

	if (t6 != 32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	int8_t x48 = -1;

	t7 = ((x45%x46)+(x47*x48));

	if (t7 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x50 = 97928665438LLU;
	static int8_t x52 = 0;

	t8 = ((x49%x50)+(x51*x52));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 15991LLU;
	volatile int16_t x56 = -1;
	static volatile uint64_t t9 = 17720969811075000LLU;

	t9 = ((x53%x54)+(x55*x56));

	if (t9 != 18446744073709502072LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 67673167LLU;
	static uint16_t x58 = UINT16_MAX;
	int32_t x60 = INT32_MAX;

	t10 = ((x57%x58)+(x59*x60));

	if (t10 != 18446744071562109016LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x65 = 5U;
	volatile int8_t x66 = INT8_MAX;
	int32_t x67 = -3;
	volatile int32_t t11 = -402078;

	t11 = ((x65%x66)+(x67*x68));

	if (t11 != -760) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 6U;
	volatile int64_t x72 = -11738185195445329LL;
	int64_t t12 = -2427723573741790LL;

	t12 = ((x69%x70)+(x71*x72));

	if (t12 != -70429111172671974LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = -151751;
	uint64_t x78 = 553065394653090LLU;
	uint8_t x79 = 1U;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t13 = 0LLU;

	t13 = ((x77%x78)+(x79*x80));

	if (t13 != 353967992372742LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	volatile int8_t x84 = INT8_MAX;
	volatile uint64_t t14 = 357124476187430782LLU;

	t14 = ((x81%x82)+(x83*x84));

	if (t14 != 160288807818LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = -1LL;
	int64_t x86 = -1119073304627890LL;
	static int16_t x87 = INT16_MIN;
	static volatile int16_t x88 = INT16_MAX;
	volatile int64_t t15 = 19238131107656352LL;

	t15 = ((x85%x86)+(x87*x88));

	if (t15 != -1073709057LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x94 = -1;
	volatile int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	uint64_t t16 = 86078LLU;

	t16 = ((x93%x94)+(x95*x96));

	if (t16 != 761657602297LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x97 = INT8_MIN;
	uint8_t x98 = 42U;
	volatile int64_t x99 = INT64_MIN;
	uint64_t x100 = 5917775996361LLU;
	volatile uint64_t t17 = 172166065018LLU;

	t17 = ((x97%x98)+(x99*x100));

	if (t17 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x105 = 6;
	static int32_t x106 = 151784;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = -346;
	int32_t t18 = -19597;

	t18 = ((x105%x106)+(x107*x108));

	if (t18 != 11337734) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -1;
	uint32_t x110 = 27737932U;
	int8_t x111 = -11;
	uint32_t t19 = 95129453U;

	t19 = ((x109%x110)+(x111*x112));

	if (t19 != 23326702U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x113 = INT8_MIN;
	volatile int32_t t20 = -70321;

	t20 = ((x113%x114)+(x115*x116));

	if (t20 != 18513912) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = -1;
	volatile uint16_t x130 = 1460U;
	volatile uint64_t x131 = 100LLU;
	int16_t x132 = -40;
	static uint64_t t21 = 53936065LLU;

	t21 = ((x129%x130)+(x131*x132));

	if (t21 != 18446744073709547615LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MAX;
	volatile int32_t x135 = 11;
	uint32_t x136 = 13U;
	volatile int64_t t22 = 2012332240730633LL;

	t22 = ((x133%x134)+(x135*x136));

	if (t22 != 135LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 2U;
	volatile int16_t x138 = INT16_MAX;
	static int32_t x140 = 145454;

	t23 = ((x137%x138)+(x139*x140));

	if (t23 != -145452) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = 3643;
	volatile int8_t x142 = INT8_MIN;
	uint64_t x143 = 3181261491916LLU;
	int64_t x144 = INT64_MIN;

	t24 = ((x141%x142)+(x143*x144));

	if (t24 != 59LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x145 = 956422U;
	static volatile uint32_t x146 = 31968171U;
	static int16_t x148 = INT16_MAX;
	static int64_t t25 = 1468799097LL;

	t25 = ((x145%x146)+(x147*x148));

	if (t25 != 53317560929637135LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t26 = -2288;

	t26 = ((x153%x154)+(x155*x156));

	if (t26 != 16776960) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x157 = 8851011U;
	int8_t x159 = -51;
	uint32_t x160 = 5516U;
	static volatile uint32_t t27 = 924588433U;

	t27 = ((x157%x158)+(x159*x160));

	if (t27 != 4294685993U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x162 = -1;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 203783152LLU;

	t28 = ((x161%x162)+(x163*x164));

	if (t28 != 18446744047625308160LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = INT16_MIN;
	static int8_t x166 = INT8_MIN;
	int32_t x167 = -85;
	static volatile uint16_t x168 = 1U;

	t29 = ((x165%x166)+(x167*x168));

	if (t29 != -85) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x171 = 1008U;
	uint32_t x172 = UINT32_MAX;
	uint32_t t30 = 0U;

	t30 = ((x169%x170)+(x171*x172));

	if (t30 != 4294966137U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x189 = -28;
	int32_t x190 = 1;
	static int32_t x191 = -24;
	static uint32_t x192 = UINT32_MAX;
	volatile uint32_t t31 = 4238U;

	t31 = ((x189%x190)+(x191*x192));

	if (t31 != 24U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x193 = INT64_MAX;
	volatile int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -13;
	static volatile int64_t t32 = 50129093300686182LL;

	t32 = ((x193%x194)+(x195*x196));

	if (t32 != 34431LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x197 = -1;
	int16_t x198 = -1;
	volatile int32_t x199 = INT32_MAX;

	t33 = ((x197%x198)+(x199*x200));

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = INT64_MAX;
	int16_t x202 = -1;
	uint16_t x203 = 456U;
	int64_t x204 = -1990LL;
	int64_t t34 = 15633134980333LL;

	t34 = ((x201%x202)+(x203*x204));

	if (t34 != -907440LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x206 = 1;
	uint8_t x207 = 16U;
	uint64_t x208 = 430336LLU;
	uint64_t t35 = 10LLU;

	t35 = ((x205%x206)+(x207*x208));

	if (t35 != 6885376LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x213 = 10772;
	volatile uint64_t x214 = 191225783896276039LLU;
	int32_t x215 = -1;
	uint32_t x216 = 41594036U;
	static volatile uint64_t t36 = 327362265LLU;

	t36 = ((x213%x214)+(x215*x216));

	if (t36 != 4253384032LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x225 = 2;
	int16_t x227 = INT16_MIN;
	static int32_t t37 = 1;

	t37 = ((x225%x226)+(x227*x228));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	int32_t x235 = -1;
	volatile int32_t x236 = -319;
	volatile int32_t t38 = -912;

	t38 = ((x233%x234)+(x235*x236));

	if (t38 != 446) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x242 = -1;
	int16_t x243 = 5;
	int16_t x244 = INT16_MAX;
	static int32_t t39 = 9217;

	t39 = ((x241%x242)+(x243*x244));

	if (t39 != 163835) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1;
	uint64_t x247 = 9472838LLU;
	int64_t x248 = -1LL;
	static volatile uint64_t t40 = 10733124195130LLU;

	t40 = ((x245%x246)+(x247*x248));

	if (t40 != 18446744073700078778LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x253 = 2U;
	static int64_t x254 = 229821255245022LL;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = UINT64_MAX;

	t41 = ((x253%x254)+(x255*x256));

	if (t41 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x261 = 8680954722405375LLU;
	uint32_t x262 = 54U;
	static int16_t x263 = INT16_MIN;
	uint8_t x264 = 9U;
	uint64_t t42 = 517LLU;

	t42 = ((x261%x262)+(x263*x264));

	if (t42 != 18446744073709256743LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = 1LL;
	int64_t x266 = INT64_MIN;
	volatile int64_t x267 = -1LL;
	uint8_t x268 = 3U;

	t43 = ((x265%x266)+(x267*x268));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x269 = INT64_MAX;
	uint16_t x270 = UINT16_MAX;
	static uint16_t x271 = UINT16_MAX;
	static int16_t x272 = INT16_MIN;
	volatile int64_t t44 = 2187532179LL;

	t44 = ((x269%x270)+(x271*x272));

	if (t44 != -2147418113LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MAX;
	uint64_t x276 = 140LLU;
	uint64_t t45 = 359185614LLU;

	t45 = ((x273%x274)+(x275*x276));

	if (t45 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x277 = 113U;
	uint8_t x278 = 9U;
	int8_t x279 = 1;
	int8_t x280 = INT8_MIN;
	int32_t t46 = -3704092;

	t46 = ((x277%x278)+(x279*x280));

	if (t46 != -123) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x281 = -1;
	static volatile uint8_t x282 = 10U;
	uint64_t x283 = 38597069LLU;
	static uint64_t x284 = 1LLU;
	volatile uint64_t t47 = 205092736113847LLU;

	t47 = ((x281%x282)+(x283*x284));

	if (t47 != 38597068LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x286 = 5124696927256030203LLU;
	int8_t x287 = INT8_MIN;
	static uint16_t x288 = UINT16_MAX;
	static volatile uint64_t t48 = 62LLU;

	t48 = ((x285%x286)+(x287*x288));

	if (t48 != 18446744073701195903LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x289 = 0;
	int32_t x290 = -1;
	int32_t x291 = -1;
	int32_t x292 = -1;
	static int32_t t49 = 1;

	t49 = ((x289%x290)+(x291*x292));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x293 = -1LL;
	int8_t x296 = INT8_MIN;
	int64_t t50 = -93LL;

	t50 = ((x293%x294)+(x295*x296));

	if (t50 != 383LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x301 = INT32_MAX;
	static uint16_t x302 = 17366U;
	int32_t x303 = -34344;
	int32_t x304 = -1;
	static int32_t t51 = 202864274;

	t51 = ((x301%x302)+(x303*x304));

	if (t51 != 38431) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x305 = -1;
	int16_t x308 = 23;

	t52 = ((x305%x306)+(x307*x308));

	if (t52 != -24) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x311 = INT32_MIN;
	static uint32_t x312 = 1867825U;
	volatile int64_t t53 = 158500719253LL;

	t53 = ((x309%x310)+(x311*x312));

	if (t53 != 2146760400LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = -51;
	int32_t x316 = 128890;
	static int32_t t54 = -32172;

	t54 = ((x313%x314)+(x315*x316));

	if (t54 != 3737784) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x317 = -1795547;
	static int16_t x318 = -1;
	int8_t x319 = INT8_MIN;
	static uint16_t x320 = 7U;

	t55 = ((x317%x318)+(x319*x320));

	if (t55 != -896) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 569175474LLU;
	int8_t x327 = INT8_MIN;

	t56 = ((x325%x326)+(x327*x328));

	if (t56 != 246898832987647LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x329 = 1;
	static int16_t x330 = INT16_MIN;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MAX;

	t57 = ((x329%x330)+(x331*x332));

	if (t57 != -2147483646LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x333 = -7413LL;
	static int8_t x334 = -1;
	int64_t x335 = -1LL;
	volatile int64_t x336 = -50160361LL;

	t58 = ((x333%x334)+(x335*x336));

	if (t58 != 50160361LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = -15;
	volatile uint64_t x338 = 71522163536LLU;
	int64_t x339 = -116184370LL;
	int8_t x340 = INT8_MAX;
	volatile uint64_t t59 = 8328257LLU;

	t59 = ((x337%x338)+(x339*x340));

	if (t59 != 41464135155LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x349 = 15U;
	int64_t x351 = 6300105211613LL;

	t60 = ((x349%x350)+(x351*x352));

	if (t60 != 1329322199650358LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x353 = INT8_MAX;
	volatile uint64_t t61 = 560885204418LLU;

	t61 = ((x353%x354)+(x355*x356));

	if (t61 != 43652892423LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MAX;
	uint64_t t62 = 243LLU;

	t62 = ((x357%x358)+(x359*x360));

	if (t62 != 2352215775LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = 43113;
	int8_t x363 = 1;
	uint32_t x364 = 234379580U;
	static uint32_t t63 = 208500928U;

	t63 = ((x361%x362)+(x363*x364));

	if (t63 != 234354462U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = INT8_MAX;
	uint64_t x366 = 7LLU;
	volatile uint64_t x367 = 546379297123LLU;
	uint64_t t64 = 1687LLU;

	t64 = ((x365%x366)+(x367*x368));

	if (t64 != 107636721533232LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x369 = 619;
	int32_t x371 = -2701609;
	uint64_t x372 = UINT64_MAX;
	uint64_t t65 = 3517639047309387LLU;

	t65 = ((x369%x370)+(x371*x372));

	if (t65 != 2701609LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = 14917810874499LL;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t66 = 13704802371495011LLU;

	t66 = ((x373%x374)+(x375*x376));

	if (t66 != 5694360849941LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	uint8_t x380 = 40U;
	volatile int32_t t67 = -618443788;

	t67 = ((x377%x378)+(x379*x380));

	if (t67 != 2621400) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x381 = -25;
	static int64_t x382 = INT64_MAX;
	static uint16_t x383 = UINT16_MAX;

	t68 = ((x381%x382)+(x383*x384));

	if (t68 != -851980LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x410 = 507;
	static uint64_t x411 = UINT64_MAX;
	static volatile uint64_t t69 = 3217LLU;

	t69 = ((x409%x410)+(x411*x412));

	if (t69 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x414 = -2283LL;
	static int32_t x415 = 23889321;
	int8_t x416 = 0;
	static volatile int64_t t70 = -156760729LL;

	t70 = ((x413%x414)+(x415*x416));

	if (t70 != 10LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 31U;
	uint64_t x423 = 362772570789850060LLU;
	static int32_t x424 = -33;

	t71 = ((x421%x422)+(x423*x424));

	if (t71 != 6475249237644499651LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x425 = UINT16_MAX;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 37U;
	int32_t t72 = 0;

	t72 = ((x425%x426)+(x427*x428));

	if (t72 != 9562) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x431 = 4287823301LLU;
	int16_t x432 = 102;
	static volatile uint64_t t73 = 132803151303343735LLU;

	t73 = ((x429%x430)+(x431*x432));

	if (t73 != 922845626518LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x433 = 51U;
	int64_t x434 = -1LL;
	volatile int32_t x435 = 2364;
	static volatile int64_t t74 = 318LL;

	t74 = ((x433%x434)+(x435*x436));

	if (t74 != 218136060LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x437 = INT8_MIN;
	int64_t x438 = INT64_MIN;
	static int8_t x439 = INT8_MAX;
	int8_t x440 = 59;
	int64_t t75 = -625LL;

	t75 = ((x437%x438)+(x439*x440));

	if (t75 != 7365LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x441 = 4563050U;
	volatile int16_t x442 = 282;

	t76 = ((x441%x442)+(x443*x444));

	if (t76 != 18446744069414584329LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x449 = -1LL;
	int8_t x450 = INT8_MAX;
	uint32_t x451 = 2U;
	uint32_t x452 = 1U;

	t77 = ((x449%x450)+(x451*x452));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x461 = -116;
	uint64_t x463 = 3555048783459LLU;
	static int32_t x464 = INT32_MAX;
	volatile uint64_t t78 = 5826451535758510LLU;

	t78 = ((x461%x462)+(x463*x464));

	if (t78 != 15903824323401777449LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x465 = INT8_MIN;
	static uint8_t x466 = UINT8_MAX;
	uint8_t x467 = 13U;
	int16_t x468 = -1;
	int32_t t79 = 199758;

	t79 = ((x465%x466)+(x467*x468));

	if (t79 != -141) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x477 = -87;
	uint16_t x478 = 2827U;
	volatile uint32_t x479 = UINT32_MAX;
	volatile int32_t x480 = INT32_MAX;
	volatile uint32_t t80 = 321U;

	t80 = ((x477%x478)+(x479*x480));

	if (t80 != 2147483562U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x481 = INT32_MIN;
	int16_t x482 = INT16_MIN;
	int8_t x483 = -34;
	uint8_t x484 = 12U;
	int32_t t81 = 16918249;

	t81 = ((x481%x482)+(x483*x484));

	if (t81 != -408) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x486 = INT32_MIN;
	int16_t x487 = -1;
	static uint64_t x488 = UINT64_MAX;

	t82 = ((x485%x486)+(x487*x488));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x502 = INT8_MAX;
	uint64_t x503 = 1LLU;
	int16_t x504 = -1;
	volatile uint64_t t83 = 9891320861005LLU;

	t83 = ((x501%x502)+(x503*x504));

	if (t83 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x505 = 12U;
	static int16_t x506 = INT16_MAX;
	int32_t x507 = INT32_MAX;
	int64_t x508 = 22LL;
	int64_t t84 = -1667099LL;

	t84 = ((x505%x506)+(x507*x508));

	if (t84 != 47244640246LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x518 = INT8_MIN;
	uint32_t x519 = 180996533U;
	int16_t x520 = INT16_MIN;
	volatile uint32_t t85 = 1584610U;

	t85 = ((x517%x518)+(x519*x520));

	if (t85 != 455442431U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x525 = 2U;
	uint64_t x526 = 59137097195LLU;
	int16_t x527 = 6;
	uint32_t x528 = UINT32_MAX;
	uint64_t t86 = 21699157LLU;

	t86 = ((x525%x526)+(x527*x528));

	if (t86 != 4294967292LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x533 = -39;
	volatile int64_t x534 = INT64_MIN;
	uint32_t x535 = 26017U;
	int8_t x536 = -1;

	t87 = ((x533%x534)+(x535*x536));

	if (t87 != 4294941240LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x541 = UINT16_MAX;
	static uint8_t x543 = UINT8_MAX;
	static volatile uint16_t x544 = UINT16_MAX;
	volatile int64_t t88 = -25LL;

	t88 = ((x541%x542)+(x543*x544));

	if (t88 != 16776960LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x545 = -1;
	volatile uint64_t x546 = 265031578181686215LLU;
	static int64_t x547 = -1164LL;
	static volatile uint8_t x548 = UINT8_MAX;
	uint64_t t89 = 4030910806744643156LLU;

	t89 = ((x545%x546)+(x547*x548));

	if (t89 != 159565179172905960LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	int32_t t90 = 48;

	t90 = ((x549%x550)+(x551*x552));

	if (t90 != 16305) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x553 = INT32_MIN;
	int32_t x554 = -13786655;
	static int8_t x555 = INT8_MAX;
	int16_t x556 = INT16_MAX;
	int32_t t91 = 10728;

	t91 = ((x553%x554)+(x555*x556));

	if (t91 != -6390714) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x557 = INT64_MIN;
	static int8_t x558 = -1;
	int16_t x559 = -3;
	int16_t x560 = -1;
	int64_t t92 = 886LL;

	t92 = ((x557%x558)+(x559*x560));

	if (t92 != 3LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x561 = -13;
	int64_t x562 = INT64_MIN;
	int64_t x564 = INT64_MIN;
	uint64_t t93 = 9451804836839517LLU;

	t93 = ((x561%x562)+(x563*x564));

	if (t93 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x566 = 148U;
	int32_t x567 = 367733;
	uint64_t t94 = 1037722188LLU;

	t94 = ((x565%x566)+(x567*x568));

	if (t94 != 18446744073709183894LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x570 = -1;
	static uint8_t x571 = UINT8_MAX;
	uint32_t x572 = 54579344U;
	uint32_t t95 = 3970U;

	t95 = ((x569%x570)+(x571*x572));

	if (t95 != 1032830832U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x573 = 7348U;
	static int64_t x574 = -8958LL;
	int16_t x575 = INT16_MIN;
	uint16_t x576 = 67U;
	static volatile int64_t t96 = -66811812026379040LL;

	t96 = ((x573%x574)+(x575*x576));

	if (t96 != -2188108LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x578 = INT16_MIN;
	volatile uint64_t x579 = 3839593900794LLU;
	volatile int8_t x580 = INT8_MAX;
	volatile uint64_t t97 = 14LLU;

	t97 = ((x577%x578)+(x579*x580));

	if (t97 != 487628425389590LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x581 = -1;
	uint16_t x582 = 3U;
	volatile int8_t x583 = 1;
	volatile int32_t t98 = 49316910;

	t98 = ((x581%x582)+(x583*x584));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x585 = -14603954365LL;
	int8_t x586 = INT8_MIN;
	static uint8_t x587 = 0U;
	int16_t x588 = -132;
	int64_t t99 = -448909040LL;

	t99 = ((x585%x586)+(x587*x588));

	if (t99 != -61LL) { NG(); } else { ; }
	
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

