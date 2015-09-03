#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 458004LL;
int8_t x28 = -1;
uint16_t x50 = UINT16_MAX;
int8_t x52 = -1;
int64_t x55 = 14493772556068LL;
volatile int64_t t6 = -1LL;
int32_t x66 = 65;
volatile int64_t t9 = 563920LL;
uint16_t x78 = 23U;
int32_t x80 = 27089;
int32_t t10 = 779180285;
int64_t x112 = -11591659085LL;
volatile uint8_t x121 = UINT8_MAX;
static uint64_t t16 = 753861165LLU;
uint32_t t17 = 126042U;
static uint32_t x135 = UINT32_MAX;
volatile uint32_t t18 = 51U;
uint32_t t19 = 85U;
volatile int32_t x160 = -225089;
static int32_t x169 = -5736950;
int32_t x170 = INT32_MAX;
int64_t t24 = 40496422457564LL;
static uint8_t x177 = 90U;
int16_t x197 = INT16_MIN;
int32_t t27 = -44874;
static uint64_t x207 = 1182443563LLU;
static uint64_t t28 = 2354191673239800845LLU;
static uint8_t x210 = 3U;
int64_t t29 = -1135485647LL;
volatile int8_t x220 = INT8_MIN;
int8_t x235 = INT8_MIN;
static volatile uint16_t x251 = 992U;
volatile uint64_t x254 = 128854329LLU;
volatile int64_t x255 = INT64_MAX;
int64_t x256 = INT64_MIN;
volatile uint16_t x257 = 23350U;
int8_t x273 = -1;
static uint64_t x276 = UINT64_MAX;
int64_t x277 = 4LL;
int8_t x280 = -1;
uint64_t x294 = 398LLU;
int64_t x303 = -1LL;
static uint32_t x325 = 60370U;
int16_t x327 = INT16_MIN;
volatile uint64_t t50 = 88LLU;
int8_t x349 = -1;
volatile uint32_t x370 = 1U;
int16_t x371 = INT16_MIN;
int8_t x378 = -7;
uint64_t x380 = UINT64_MAX;
volatile uint64_t t53 = 12LLU;
volatile uint16_t x418 = 5142U;
volatile uint16_t x420 = 6837U;
int16_t x434 = INT16_MAX;
uint32_t x435 = 116666U;
volatile uint32_t t61 = 7539U;
int8_t x440 = INT8_MIN;
int16_t x457 = INT16_MAX;
int16_t x465 = -483;
uint16_t x467 = UINT16_MAX;
uint64_t t65 = 58900915LLU;
int32_t x471 = INT32_MIN;
volatile int64_t x472 = 4332LL;
uint64_t x478 = UINT64_MAX;
uint16_t x480 = 11161U;
uint32_t x482 = UINT32_MAX;
int16_t x490 = INT16_MIN;
volatile uint32_t t71 = 134984386U;
uint64_t x501 = 868700468458337LLU;
uint64_t t74 = 2824LLU;
int64_t x513 = 102LL;
volatile uint64_t t76 = 1751969571LLU;
volatile uint64_t x523 = UINT64_MAX;
volatile uint64_t t77 = 4123LLU;
int16_t x526 = INT16_MIN;
int8_t x533 = INT8_MIN;
int32_t x548 = -59584135;
int8_t x565 = INT8_MIN;
int16_t x566 = INT16_MIN;
int64_t x574 = -107713648307662LL;
volatile uint64_t t84 = 272716080LLU;
static int16_t x588 = INT16_MAX;
static volatile int64_t t85 = -28LL;
int8_t x594 = 1;
uint8_t x596 = UINT8_MAX;
static uint16_t x597 = 10U;
volatile int16_t x599 = INT16_MIN;
int8_t x603 = -1;
int16_t x628 = -1;
int8_t x634 = INT8_MIN;
int8_t x689 = INT8_MIN;
uint64_t x708 = 33487282866994479LLU;
int64_t x709 = INT64_MIN;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint64_t x3 = 5726LLU;
	uint32_t x4 = 1290014U;
	volatile uint64_t t0 = 4860864983LLU;

	t0 = (x1%((x2*x3)*x4));

	if (t0 != 1037125433195551LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 8597606687828LLU;
	int64_t x26 = INT64_MIN;
	volatile uint64_t x27 = 3343817058667719LLU;
	uint64_t t1 = 107670747LLU;

	t1 = (x25%((x26*x27)*x28));

	if (t1 != 8597606687828LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = -1238359859LL;
	uint8_t x34 = 24U;
	volatile int16_t x35 = INT16_MIN;
	int32_t x36 = -24;
	int64_t t2 = -4554676615388985LL;

	t2 = (x33%((x34*x35)*x36));

	if (t2 != -11525939LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x45 = 1;
	int8_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	uint32_t t3 = 63944U;

	t3 = (x45%((x46*x47)*x48));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x49 = INT32_MAX;
	int8_t x51 = INT8_MIN;
	int32_t t4 = -6553;

	t4 = (x49%((x50*x51)*x52));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x53 = -1;
	uint32_t x54 = 91766U;
	static volatile int32_t x56 = -1;
	static volatile int64_t t5 = -184LL;

	t5 = (x53%((x54*x55)*x56));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile int32_t x58 = INT32_MIN;
	volatile int64_t x59 = -2LL;
	static int16_t x60 = 2;

	t6 = (x57%((x58*x59)*x60));

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x61 = INT64_MAX;
	volatile int16_t x62 = INT16_MIN;
	int16_t x63 = -1870;
	int64_t x64 = -3LL;
	int64_t t7 = -80082177163902LL;

	t7 = (x61%((x62*x63)*x64));

	if (t7 != 8388607LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x67 = -157;
	uint64_t x68 = 47921688020LLU;
	static uint64_t t8 = 72041450258913653LLU;

	t8 = (x65%((x66*x67)*x68));

	if (t8 != 255LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = INT64_MIN;
	static volatile int32_t x70 = -1;
	volatile int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MAX;

	t9 = (x69%((x70*x71)*x72));

	if (t9 != -1048552LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = -1;
	static int16_t x79 = -1;

	t10 = (x77%((x78*x79)*x80));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x85 = -24;
	static uint64_t x86 = 18485794832LLU;
	uint64_t x87 = 14675334682716718LLU;
	volatile int32_t x88 = -1;
	uint64_t t11 = 3606LLU;

	t11 = (x85%((x86*x87)*x88));

	if (t11 != 2639833609749063080LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x97 = 7U;
	static int8_t x98 = -3;
	int8_t x99 = 2;
	static int32_t x100 = -15127777;
	volatile int32_t t12 = -14157004;

	t12 = (x97%((x98*x99)*x100));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x101 = -514930838LL;
	uint64_t x102 = 221411LLU;
	volatile uint16_t x103 = 14381U;
	int8_t x104 = -1;
	uint64_t t13 = 1133899LLU;

	t13 = (x101%((x102*x103)*x104));

	if (t13 != 2669180753LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x109 = 4597LLU;
	static int32_t x110 = -65428446;
	int8_t x111 = -1;
	static volatile uint64_t t14 = 178167366284554779LLU;

	t14 = (x109%((x110*x111)*x112));

	if (t14 != 4597LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x117 = 90U;
	static int64_t x118 = -1LL;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int64_t t15 = -1617965466513LL;

	t15 = (x117%((x118*x119)*x120));

	if (t15 != 90LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x122 = 20U;
	uint64_t x123 = 1LLU;
	uint8_t x124 = 89U;

	t16 = (x121%((x122*x123)*x124));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x125 = INT8_MAX;
	static uint32_t x126 = UINT32_MAX;
	int8_t x127 = -1;
	int16_t x128 = INT16_MAX;

	t17 = (x125%((x126*x127)*x128));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x133 = 3;
	volatile uint16_t x134 = UINT16_MAX;
	static volatile int8_t x136 = INT8_MIN;

	t18 = (x133%((x134*x135)*x136));

	if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x137 = INT16_MIN;
	static int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	static uint32_t x140 = UINT32_MAX;

	t19 = (x137%((x138*x139)*x140));

	if (t19 != 98304U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x157 = INT16_MIN;
	uint64_t x158 = 2606333829657893LLU;
	int16_t x159 = INT16_MAX;
	uint64_t t20 = 24LLU;

	t20 = (x157%((x158*x159)*x160));

	if (t20 != 202799667395390774LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x161 = -1;
	int16_t x162 = -1;
	int16_t x163 = 1;
	volatile int8_t x164 = 1;
	int32_t t21 = -51985010;

	t21 = (x161%((x162*x163)*x164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = 449942247U;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	uint32_t t22 = 2092443093U;

	t22 = (x165%((x166*x167)*x168));

	if (t22 != 1073741696U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x171 = -1;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t23 = 203LLU;

	t23 = (x169%((x170*x171)*x172));

	if (t23 != 2141746701LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x173 = -1;
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = -3LL;
	static int64_t x176 = -1LL;

	t24 = (x173%((x174*x175)*x176));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x178 = 160663;
	volatile uint32_t x179 = UINT32_MAX;
	uint8_t x180 = UINT8_MAX;
	uint32_t t25 = 120549U;

	t25 = (x177%((x178*x179)*x180));

	if (t25 != 90U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x185 = INT32_MIN;
	static int8_t x186 = -1;
	int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t26 = -226833;

	t26 = (x185%((x186*x187)*x188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x198 = -8071;
	volatile int8_t x199 = -1;
	int16_t x200 = INT16_MAX;

	t27 = (x197%((x198*x199)*x200));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;

	t28 = (x205%((x206*x207)*x208));

	if (t28 != 6193927231262162943LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x209 = 24U;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;

	t29 = (x209%((x210*x211)*x212));

	if (t29 != 24LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x213 = -1;
	int64_t x214 = -190074517LL;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 1925672U;
	volatile int64_t t30 = 229357984136970LL;

	t30 = (x213%((x214*x215)*x216));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x217 = INT8_MIN;
	static volatile int8_t x218 = INT8_MIN;
	volatile int16_t x219 = 3;
	int32_t t31 = -202160942;

	t31 = (x217%((x218*x219)*x220));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	volatile int16_t x231 = 8816;
	static int16_t x232 = INT16_MAX;
	static uint32_t t32 = 89789U;

	t32 = (x229%((x230*x231)*x232));

	if (t32 != 288873871U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x233 = -1;
	static int32_t x234 = -1;
	int32_t x236 = 286255;
	volatile int32_t t33 = 0;

	t33 = (x233%((x234*x235)*x236));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x237 = INT32_MAX;
	static int32_t x238 = -1;
	uint16_t x239 = 149U;
	static volatile int64_t x240 = -1LL;
	int64_t t34 = 223314578LL;

	t34 = (x237%((x238*x239)*x240));

	if (t34 != 138LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x249 = 39U;
	uint64_t x250 = 2843832115LLU;
	uint8_t x252 = 2U;
	volatile uint64_t t35 = 96052988471433713LLU;

	t35 = (x249%((x250*x251)*x252));

	if (t35 != 39LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x253 = 4;
	uint64_t t36 = 12321844864210LLU;

	t36 = (x253%((x254*x255)*x256));

	if (t36 != 4LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x258 = -1;
	static int64_t x259 = INT64_MAX;
	int8_t x260 = 1;
	volatile int64_t t37 = 32547579357LL;

	t37 = (x257%((x258*x259)*x260));

	if (t37 != 23350LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x261 = -23;
	static int16_t x262 = 9720;
	int8_t x263 = 9;
	int32_t x264 = 4;
	int32_t t38 = 113776;

	t38 = (x261%((x262*x263)*x264));

	if (t38 != -23) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x265 = UINT16_MAX;
	static int16_t x266 = INT16_MIN;
	int64_t x267 = -94LL;
	static int8_t x268 = -1;
	volatile int64_t t39 = -1960609810212LL;

	t39 = (x265%((x266*x267)*x268));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x274 = 67873LLU;
	int64_t x275 = -1LL;
	uint64_t t40 = 4107090314LLU;

	t40 = (x273%((x274*x275)*x276));

	if (t40 != 37104LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	int64_t t41 = -116620LL;

	t41 = (x277%((x278*x279)*x280));

	if (t41 != 4LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x293 = 180U;
	volatile uint16_t x295 = UINT16_MAX;
	static int64_t x296 = -1LL;
	volatile uint64_t t42 = 73228997LLU;

	t42 = (x293%((x294*x295)*x296));

	if (t42 != 180LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x297 = 3337;
	int64_t x298 = -1LL;
	uint16_t x299 = 32296U;
	volatile int64_t x300 = -1LL;
	volatile int64_t t43 = 886654262653653LL;

	t43 = (x297%((x298*x299)*x300));

	if (t43 != 3337LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x301 = 166932;
	static int32_t x302 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	static int64_t t44 = 3356022808LL;

	t44 = (x301%((x302*x303)*x304));

	if (t44 != 166932LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	uint64_t x312 = 1493722945972418026LLU;
	uint64_t t45 = 70077701LLU;

	t45 = (x309%((x310*x311)*x312));

	if (t45 != 7280585405109815702LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x313 = INT8_MIN;
	int64_t x314 = 15176LL;
	static uint16_t x315 = 616U;
	int32_t x316 = 245271306;
	int64_t t46 = 3LL;

	t46 = (x313%((x314*x315)*x316));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x317 = -1LL;
	static volatile uint32_t x318 = UINT32_MAX;
	static int8_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int64_t t47 = -66LL;

	t47 = (x317%((x318*x319)*x320));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x326 = 43209LL;
	volatile int32_t x328 = -365894032;
	volatile int64_t t48 = 2834880915674636LL;

	t48 = (x325%((x326*x327)*x328));

	if (t48 != 60370LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x341 = 5U;
	static volatile uint32_t x342 = 2U;
	volatile uint16_t x343 = 48U;
	int16_t x344 = INT16_MIN;
	uint32_t t49 = 1395U;

	t49 = (x341%((x342*x343)*x344));

	if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x345 = 134108343509LLU;
	int16_t x346 = -5560;
	uint16_t x347 = 605U;
	volatile int16_t x348 = -1;

	t50 = (x345%((x346*x347)*x348));

	if (t50 != 365109LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x350 = 27784731078LLU;
	int16_t x351 = INT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	volatile uint64_t t51 = 2012LLU;

	t51 = (x349%((x350*x351)*x352));

	if (t51 != 4325202532817829887LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x369 = INT8_MIN;
	int8_t x372 = -8;
	volatile uint32_t t52 = 2434U;

	t52 = (x369%((x370*x371)*x372));

	if (t52 != 262016U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x377 = INT64_MIN;
	int8_t x379 = INT8_MIN;

	t53 = (x377%((x378*x379)*x380));

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 179U;
	static uint32_t x392 = UINT32_MAX;
	static volatile uint64_t t54 = 5770763LLU;

	t54 = (x389%((x390*x391)*x392));

	if (t54 != 766651662157LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x393 = -1LL;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	static int64_t t55 = -254244150LL;

	t55 = (x393%((x394*x395)*x396));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x409 = INT16_MIN;
	static uint32_t x410 = UINT32_MAX;
	static int32_t x411 = INT32_MIN;
	volatile uint16_t x412 = 1U;
	volatile uint32_t t56 = 610U;

	t56 = (x409%((x410*x411)*x412));

	if (t56 != 2147450880U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x417 = INT16_MIN;
	int16_t x419 = -1;
	int32_t t57 = -30091282;

	t57 = (x417%((x418*x419)*x420));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x421 = 14;
	static volatile int8_t x422 = -1;
	int8_t x423 = -1;
	static int32_t x424 = -4;
	volatile int32_t t58 = 255408;

	t58 = (x421%((x422*x423)*x424));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x425 = 0U;
	static uint8_t x426 = 14U;
	static uint8_t x427 = 125U;
	int16_t x428 = -6;
	static volatile int32_t t59 = 11525;

	t59 = (x425%((x426*x427)*x428));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x429 = -1874LL;
	uint8_t x430 = 2U;
	volatile uint8_t x431 = 59U;
	int8_t x432 = -1;
	volatile int64_t t60 = 11757142LL;

	t60 = (x429%((x430*x431)*x432));

	if (t60 != -104LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x433 = -9757;
	int16_t x436 = INT16_MIN;

	t61 = (x433%((x434*x435)*x436));

	if (t61 != 944101859U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x437 = INT64_MAX;
	static int8_t x438 = 12;
	uint64_t x439 = UINT64_MAX;
	uint64_t t62 = 156LLU;

	t62 = (x437%((x438*x439)*x440));

	if (t62 != 511LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x441 = 5U;
	static uint8_t x442 = 19U;
	int8_t x443 = -1;
	uint32_t x444 = UINT32_MAX;
	volatile uint32_t t63 = 523808502U;

	t63 = (x441%((x442*x443)*x444));

	if (t63 != 5U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x458 = INT8_MIN;
	static uint16_t x459 = UINT16_MAX;
	volatile int32_t x460 = -1;
	volatile int32_t t64 = 41;

	t64 = (x457%((x458*x459)*x460));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x466 = 1011;
	volatile uint64_t x468 = UINT64_MAX;

	t65 = (x465%((x466*x467)*x468));

	if (t65 != 66255402LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x469 = INT8_MAX;
	int64_t x470 = -24LL;
	int64_t t66 = -1190466LL;

	t66 = (x469%((x470*x471)*x472));

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x473 = UINT32_MAX;
	int8_t x474 = INT8_MAX;
	volatile uint8_t x475 = 2U;
	int8_t x476 = -1;
	volatile uint32_t t67 = 124U;

	t67 = (x473%((x474*x475)*x476));

	if (t67 != 253U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x477 = INT64_MIN;
	static uint32_t x479 = 646179801U;
	volatile uint64_t t68 = 31102LLU;

	t68 = (x477%((x478*x479)*x480));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x481 = UINT32_MAX;
	int8_t x483 = -53;
	int8_t x484 = INT8_MAX;
	static volatile uint32_t t69 = 121U;

	t69 = (x481%((x482*x483)*x484));

	if (t69 != 3698U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x485 = 246;
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	uint16_t x488 = 29U;
	volatile int32_t t70 = -202;

	t70 = (x485%((x486*x487)*x488));

	if (t70 != 246) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x489 = 12753U;
	int16_t x491 = -1020;
	uint8_t x492 = 5U;

	t71 = (x489%((x490*x491)*x492));

	if (t71 != 12753U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x493 = INT16_MIN;
	uint64_t x494 = 1LLU;
	static int64_t x495 = 74856423646599864LL;
	int32_t x496 = -1;
	uint64_t t72 = 29905904LLU;

	t72 = (x493%((x494*x495)*x496));

	if (t72 != 74856423646567096LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x497 = 27;
	int16_t x498 = 391;
	uint8_t x499 = UINT8_MAX;
	int8_t x500 = 1;
	int32_t t73 = 1931395;

	t73 = (x497%((x498*x499)*x500));

	if (t73 != 27) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x502 = -1;
	volatile int8_t x503 = INT8_MAX;
	int64_t x504 = -213LL;

	t74 = (x501%((x502*x503)*x504));

	if (t74 != 3719LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x514 = UINT64_MAX;
	int64_t x515 = INT64_MIN;
	volatile int64_t x516 = INT64_MAX;
	uint64_t t75 = 5849279418800LLU;

	t75 = (x513%((x514*x515)*x516));

	if (t75 != 102LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x517 = 2394;
	static int32_t x518 = 2;
	volatile uint64_t x519 = UINT64_MAX;
	int16_t x520 = -24;

	t76 = (x517%((x518*x519)*x520));

	if (t76 != 42LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x521 = INT64_MIN;
	static uint32_t x522 = UINT32_MAX;
	int32_t x524 = INT32_MAX;

	t77 = (x521%((x522*x523)*x524));

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x525 = INT32_MAX;
	static int8_t x527 = INT8_MAX;
	static int8_t x528 = 3;
	volatile int32_t t78 = 48072;

	t78 = (x525%((x526*x527)*x528));

	if (t78 != 131071) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x534 = -1;
	static uint16_t x535 = 1449U;
	int8_t x536 = 1;
	static int32_t t79 = -75213;

	t79 = (x533%((x534*x535)*x536));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x545 = INT16_MIN;
	uint64_t x546 = 727593964315973LLU;
	int16_t x547 = INT16_MIN;
	static uint64_t t80 = 232673422404933LLU;

	t80 = (x545%((x546*x547)*x548));

	if (t80 != 1736428185855918080LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x561 = UINT16_MAX;
	uint32_t x562 = 19U;
	static int16_t x563 = -1;
	int64_t x564 = -1LL;
	volatile int64_t t81 = 4268893759975LL;

	t81 = (x561%((x562*x563)*x564));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x567 = INT16_MIN;
	static uint64_t x568 = UINT64_MAX;
	volatile uint64_t t82 = 504127453LLU;

	t82 = (x565%((x566*x567)*x568));

	if (t82 != 1073741696LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x569 = -1;
	uint64_t x570 = 1032905LLU;
	static volatile int16_t x571 = -1;
	uint16_t x572 = 3258U;
	uint64_t t83 = 26400592LLU;

	t83 = (x569%((x570*x571)*x572));

	if (t83 != 3365204489LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x573 = INT8_MIN;
	uint64_t x575 = 1980176106314086LLU;
	uint64_t x576 = 9884LLU;

	t84 = (x573%((x574*x575)*x576));

	if (t84 != 7225128870172576688LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x585 = INT32_MIN;
	static int8_t x586 = 2;
	static int64_t x587 = -77LL;

	t85 = (x585%((x586*x587)*x588));

	if (t85 != -2883498LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x593 = INT64_MIN;
	uint8_t x595 = 49U;
	volatile int64_t t86 = 83630638LL;

	t86 = (x593%((x594*x595)*x596));

	if (t86 != -638LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x598 = -1;
	uint8_t x600 = 1U;
	int32_t t87 = 1117214;

	t87 = (x597%((x598*x599)*x600));

	if (t87 != 10) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x601 = 41LLU;
	int16_t x602 = 456;
	uint16_t x604 = 6U;
	uint64_t t88 = 1259292735716769LLU;

	t88 = (x601%((x602*x603)*x604));

	if (t88 != 41LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x613 = INT64_MAX;
	uint16_t x614 = 2354U;
	int8_t x615 = INT8_MAX;
	static volatile uint8_t x616 = 91U;
	volatile int64_t t89 = -135700LL;

	t89 = (x613%((x614*x615)*x616));

	if (t89 != 8890889LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x625 = INT32_MIN;
	uint16_t x626 = UINT16_MAX;
	uint64_t x627 = 152LLU;
	static volatile uint64_t t90 = 104362LLU;

	t90 = (x625%((x626*x627)*x628));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x633 = -1;
	int8_t x635 = -38;
	volatile uint32_t x636 = UINT32_MAX;
	uint32_t t91 = 14340882U;

	t91 = (x633%((x634*x635)*x636));

	if (t91 != 4863U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x645 = 53LL;
	uint16_t x646 = UINT16_MAX;
	int8_t x647 = -1;
	static int16_t x648 = -1;
	volatile int64_t t92 = -1716090LL;

	t92 = (x645%((x646*x647)*x648));

	if (t92 != 53LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x669 = INT16_MIN;
	int64_t x670 = 3835059343742LL;
	int8_t x671 = -3;
	int8_t x672 = INT8_MIN;
	int64_t t93 = -35323502462LL;

	t93 = (x669%((x670*x671)*x672));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x673 = 7089LLU;
	int16_t x674 = -11030;
	volatile int16_t x675 = -7;
	uint64_t x676 = 149429763279LLU;
	volatile uint64_t t94 = 484791LLU;

	t94 = (x673%((x674*x675)*x676));

	if (t94 != 7089LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MAX;
	uint32_t x679 = UINT32_MAX;
	uint16_t x680 = UINT16_MAX;
	volatile uint32_t t95 = 3U;

	t95 = (x677%((x678*x679)*x680));

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x685 = -125698;
	static int8_t x686 = -4;
	uint32_t x687 = 84228360U;
	static uint16_t x688 = UINT16_MAX;
	volatile uint32_t t96 = 2432806U;

	t96 = (x685%((x686*x687)*x688));

	if (t96 != 271949918U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x690 = -2779893925LL;
	int16_t x691 = -1;
	static int32_t x692 = -389;
	volatile int64_t t97 = 3740157LL;

	t97 = (x689%((x690*x691)*x692));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x705 = 129844397LLU;
	static volatile int64_t x706 = -1LL;
	uint8_t x707 = UINT8_MAX;
	static uint64_t t98 = 769040050445731663LLU;

	t98 = (x705%((x706*x707)*x708));

	if (t98 != 129844397LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x710 = -1;
	int64_t x711 = -1LL;
	int16_t x712 = INT16_MAX;
	volatile int64_t t99 = -12033956532LL;

	t99 = (x709%((x710*x711)*x712));

	if (t99 != -8LL) { NG(); } else { ; }
	
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

