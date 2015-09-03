#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
uint32_t x3 = 3U;
int32_t x12 = INT32_MAX;
uint8_t x22 = 4U;
volatile int32_t x23 = 710;
uint16_t x24 = 90U;
static int8_t x26 = -1;
uint8_t x30 = UINT8_MAX;
int32_t x32 = INT32_MAX;
uint64_t x47 = 71931563174695989LLU;
uint32_t x66 = UINT32_MAX;
int32_t x68 = INT32_MAX;
uint64_t x90 = UINT64_MAX;
static uint64_t x92 = UINT64_MAX;
volatile uint16_t x123 = 237U;
uint16_t x124 = UINT16_MAX;
volatile int64_t x143 = -20208LL;
volatile int64_t t15 = 10557LL;
volatile uint32_t x168 = 5691930U;
static volatile uint64_t t20 = 296426623450LLU;
volatile int64_t t21 = -443441293LL;
static int8_t x188 = INT8_MAX;
volatile int8_t x191 = INT8_MIN;
int8_t x197 = INT8_MIN;
static uint32_t x202 = 17393899U;
volatile uint32_t t25 = 79593U;
int8_t x210 = 12;
int16_t x219 = -504;
int16_t x220 = -1;
uint8_t x230 = 4U;
static int32_t x232 = INT32_MIN;
static int16_t x249 = -1;
volatile int8_t x251 = INT8_MIN;
volatile uint64_t t30 = 21968LLU;
volatile uint64_t t31 = 636825130356599LLU;
volatile int64_t x267 = -8024LL;
static uint16_t x271 = UINT16_MAX;
static volatile uint32_t t34 = 224U;
volatile uint64_t t35 = 369233886LLU;
int16_t x278 = INT16_MAX;
volatile uint64_t t37 = 1571106LLU;
volatile int64_t x294 = -1LL;
int8_t x306 = INT8_MAX;
static volatile uint64_t x315 = 22387617269392LLU;
int8_t x318 = -1;
static volatile uint16_t x320 = 348U;
volatile int64_t t42 = 1LL;
int32_t x328 = -1;
int64_t x343 = -3726661284794LL;
static uint64_t x348 = 497030LLU;
volatile int8_t x364 = INT8_MIN;
int16_t x377 = 80;
int16_t x378 = -1;
static int64_t x413 = INT64_MIN;
uint32_t x422 = 3262U;
uint16_t x423 = 18453U;
static int16_t x441 = INT16_MAX;
int8_t x443 = INT8_MAX;
int8_t x445 = INT8_MAX;
volatile uint64_t t56 = 712LLU;
int16_t x469 = -12992;
static uint16_t x470 = 15U;
volatile int16_t x471 = INT16_MIN;
int16_t x472 = INT16_MIN;
uint64_t x491 = 204660110142567195LLU;
volatile int8_t x502 = INT8_MIN;
volatile int64_t x519 = 5622LL;
int64_t t67 = 187530061LL;
volatile uint64_t x540 = 13712LLU;
volatile uint64_t t69 = 3045103LLU;
uint8_t x550 = 25U;
volatile int32_t x556 = INT32_MIN;
int32_t x577 = -1;
static uint64_t x579 = 667522044164412LLU;
static volatile uint64_t t74 = 4787129095072LLU;
int16_t x590 = INT16_MAX;
volatile uint64_t x601 = 1629480769LLU;
volatile int8_t x602 = INT8_MAX;
static uint16_t x618 = 5043U;
volatile int16_t x620 = -6946;
uint64_t x672 = UINT64_MAX;
volatile int32_t x687 = -1;
volatile uint32_t t85 = 21U;
int32_t x692 = -1;
volatile uint16_t x698 = 6U;
uint32_t x712 = 1938144U;
static uint8_t x715 = UINT8_MAX;
int16_t x721 = -1;
int64_t x725 = -1LL;
int8_t x726 = INT8_MIN;
int8_t x734 = INT8_MAX;
uint16_t x741 = UINT16_MAX;
static volatile uint16_t x748 = 3788U;
volatile int16_t x752 = INT16_MIN;
int32_t x756 = INT32_MIN;
static volatile int64_t x757 = INT64_MIN;
static int64_t t97 = -209088849525323975LL;
int16_t x762 = INT16_MAX;


void f0(void) {
	static uint64_t x2 = UINT64_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 1LLU;

	t0 = (x1%((x2*x3)&x4));

	if (t0 != 4294934534LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = -1LL;
	uint32_t x10 = 69U;
	static int16_t x11 = -1;
	static int64_t t1 = -2437621573110LL;

	t1 = (x9%((x10*x11)&x12));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = -1LL;
	volatile int64_t t2 = -6823629889890681LL;

	t2 = (x21%((x22*x23)&x24));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	static uint32_t x27 = 27784270U;
	volatile int64_t x28 = INT64_MAX;
	volatile int64_t t3 = -97287168168LL;

	t3 = (x25%((x26*x27)&x28));

	if (t3 != 27784269LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	static volatile int16_t x31 = 3160;
	static volatile int32_t t4 = 130565;

	t4 = (x29%((x30*x31)&x32));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 31484046U;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 1847U;
	static int8_t x36 = -1;
	uint32_t t5 = 49U;

	t5 = (x33%((x34*x35)&x36));

	if (t5 != 31484046U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = UINT64_MAX;
	static int64_t x42 = -54769166519506LL;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = UINT64_MAX;
	uint64_t t6 = 468064LLU;

	t6 = (x41%((x42*x43)&x44));

	if (t6 != 6955684147977261LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x45 = 7U;
	int64_t x46 = INT64_MAX;
	uint16_t x48 = 4953U;
	static uint64_t t7 = 2201046360898203128LLU;

	t7 = (x45%((x46*x47)&x48));

	if (t7 != 7LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = 322845673;
	volatile int32_t x50 = INT32_MAX;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	uint64_t t8 = 17530813016401LLU;

	t8 = (x49%((x50*x51)&x52));

	if (t8 != 322845673LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	volatile uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 19751531647LLU;
	int16_t x60 = 1;
	uint64_t t9 = 55LLU;

	t9 = (x57%((x58*x59)&x60));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = -1;
	uint32_t x67 = 125482147U;
	volatile uint32_t t10 = 8945093U;

	t10 = (x65%((x66*x67)&x68));

	if (t10 != 250964293U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x89 = 20804LLU;
	static uint16_t x91 = 10U;
	volatile uint64_t t11 = 2LLU;

	t11 = (x89%((x90*x91)&x92));

	if (t11 != 20804LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x97 = -1LL;
	uint64_t x98 = 4505LLU;
	int8_t x99 = INT8_MIN;
	volatile int16_t x100 = -1;
	uint64_t t12 = 6241700250935440857LLU;

	t12 = (x97%((x98*x99)&x100));

	if (t12 != 576639LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = INT64_MAX;
	uint32_t x122 = 12571U;
	int64_t t13 = -41981306LL;

	t13 = (x121%((x122*x123)&x124));

	if (t13 != 9235LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x141 = 1LL;
	static int8_t x142 = INT8_MIN;
	int32_t x144 = -109728797;
	int64_t t14 = 1383LL;

	t14 = (x141%((x142*x143)&x144));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 2U;
	int64_t x147 = 1LL;
	uint16_t x148 = UINT16_MAX;

	t15 = (x145%((x146*x147)&x148));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x149 = 25U;
	volatile int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = -1;
	volatile int32_t t16 = 6012;

	t16 = (x149%((x150*x151)&x152));

	if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x161 = 179585LLU;
	int32_t x162 = -1;
	volatile uint8_t x163 = UINT8_MAX;
	static int16_t x164 = 4458;
	volatile uint64_t t17 = 46876091LLU;

	t17 = (x161%((x162*x163)&x164));

	if (t17 != 1153LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t t18 = 2U;

	t18 = (x165%((x166*x167)&x168));

	if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	volatile uint16_t x171 = 1345U;
	uint16_t x172 = UINT16_MAX;
	volatile int64_t t19 = -13729LL;

	t19 = (x169%((x170*x171)&x172));

	if (t19 != -12988LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x173 = 1879660LLU;
	static uint64_t x174 = 43455LLU;
	static volatile int32_t x175 = 15;
	volatile int64_t x176 = INT64_MAX;

	t20 = (x173%((x174*x175)&x176));

	if (t20 != 576010LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x181 = 35U;
	uint32_t x182 = 1857143158U;
	int16_t x183 = INT16_MIN;
	volatile int64_t x184 = -1LL;

	t21 = (x181%((x182*x183)&x184));

	if (t21 != 35LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -5;
	int16_t x187 = -5;
	volatile int32_t t22 = 2703;

	t22 = (x185%((x186*x187)&x188));

	if (t22 != -23) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x189 = -1;
	volatile int32_t x190 = -1;
	int16_t x192 = 11706;
	static int32_t t23 = -238300513;

	t23 = (x189%((x190*x191)&x192));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x198 = 233159306LL;
	int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	volatile int64_t t24 = 58869148027967332LL;

	t24 = (x197%((x198*x199)&x200));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x201 = UINT32_MAX;
	static uint8_t x203 = 3U;
	int32_t x204 = -5;

	t25 = (x201%((x202*x203)&x204));

	if (t25 != 16068141U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x209 = INT32_MAX;
	volatile int32_t x211 = -12991115;
	uint64_t x212 = 399981509LLU;
	volatile uint64_t t26 = 7836254242031LLU;

	t26 = (x209%((x210*x211)&x212));

	if (t26 != 253163947LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x217 = 1;
	int8_t x218 = -1;
	static int32_t t27 = 141;

	t27 = (x217%((x218*x219)&x220));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x229 = INT32_MIN;
	int64_t x231 = 3666941193637LL;
	int64_t t28 = 6877833820412010LL;

	t28 = (x229%((x230*x231)&x232));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x245 = -1;
	static int8_t x246 = -9;
	int8_t x247 = 2;
	uint64_t x248 = 4749113966497173LLU;
	uint64_t t29 = 1841981090330597249LLU;

	t29 = (x245%((x246*x247)&x248));

	if (t29 != 1185427834597711LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x250 = 4420123038527297LLU;
	uint8_t x252 = UINT8_MAX;

	t30 = (x249%((x250*x251)&x252));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x257 = 64626167U;
	volatile int16_t x258 = 15841;
	uint64_t x259 = 19909769LLU;
	uint16_t x260 = 25235U;

	t31 = (x257%((x258*x259)&x260));

	if (t31 != 13234LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x261 = 1;
	uint8_t x262 = 2U;
	uint64_t x263 = UINT64_MAX;
	static volatile int8_t x264 = INT8_MIN;
	volatile uint64_t t32 = 100776207808021878LLU;

	t32 = (x261%((x262*x263)&x264));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x265 = 2;
	int64_t x266 = 6LL;
	static int8_t x268 = -1;
	volatile int64_t t33 = 63LL;

	t33 = (x265%((x266*x267)&x268));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MAX;
	uint32_t x272 = 16032562U;

	t34 = (x269%((x270*x271)&x272));

	if (t34 != 6737024U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x273 = 26124803LLU;
	uint16_t x274 = 7U;
	uint64_t x275 = 3416080550540LLU;
	uint32_t x276 = 22840063U;

	t35 = (x273%((x274*x275)&x276));

	if (t35 != 3285295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x277 = UINT32_MAX;
	static uint16_t x279 = 120U;
	volatile int32_t x280 = 62;
	volatile uint32_t t36 = 0U;

	t36 = (x277%((x278*x279)&x280));

	if (t36 != 7U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x285 = INT32_MAX;
	volatile int64_t x286 = 20471990409865078LL;
	uint64_t x287 = 395365LLU;
	uint64_t x288 = UINT64_MAX;

	t37 = (x285%((x286*x287)&x288));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x293 = 2LL;
	int16_t x295 = INT16_MAX;
	volatile int32_t x296 = INT32_MIN;
	static int64_t t38 = 1153936008LL;

	t38 = (x293%((x294*x295)&x296));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x297 = INT32_MAX;
	static uint16_t x298 = 1153U;
	int8_t x299 = INT8_MAX;
	volatile int16_t x300 = 790;
	volatile int32_t t39 = -667499;

	t39 = (x297%((x298*x299)&x300));

	if (t39 != 577) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x305 = -1LL;
	volatile int8_t x307 = INT8_MIN;
	volatile int8_t x308 = -17;
	int64_t t40 = 7LL;

	t40 = (x305%((x306*x307)&x308));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x313 = 116807569U;
	int8_t x314 = 56;
	int8_t x316 = -1;
	volatile uint64_t t41 = 12229LLU;

	t41 = (x313%((x314*x315)&x316));

	if (t41 != 116807569LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x317 = INT64_MIN;
	int8_t x319 = INT8_MAX;

	t42 = (x317%((x318*x319)&x320));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -1LL;
	int8_t x327 = INT8_MIN;
	volatile int64_t t43 = -1590047373708018151LL;

	t43 = (x325%((x326*x327)&x328));

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint64_t x330 = 538542858051753LLU;
	static int32_t x331 = -1;
	int8_t x332 = -2;
	static volatile uint64_t t44 = 20696613916LLU;

	t44 = (x329%((x330*x331)&x332));

	if (t44 != 4294967295LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = -12;
	int16_t x344 = INT16_MIN;
	int64_t t45 = -6164914LL;

	t45 = (x341%((x342*x343)&x344));

	if (t45 != -19522536144896LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t46 = 252050181827171899LLU;

	t46 = (x345%((x346*x347)&x348));

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	int8_t x359 = -4;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t47 = 295;

	t47 = (x357%((x358*x359)&x360));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x361 = -190609045;
	int16_t x362 = 3436;
	int8_t x363 = INT8_MAX;
	int32_t t48 = -118;

	t48 = (x361%((x362*x363)&x364));

	if (t48 != -359573) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x369 = 3U;
	int64_t x370 = -6821518901140LL;
	int16_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	static int64_t t49 = -236044430503256LL;

	t49 = (x369%((x370*x371)&x372));

	if (t49 != 3LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x379 = 4;
	static uint8_t x380 = 5U;
	static int32_t t50 = 25;

	t50 = (x377%((x378*x379)&x380));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x401 = 104U;
	static uint16_t x402 = UINT16_MAX;
	static int8_t x403 = INT8_MAX;
	int32_t x404 = 427936;
	int32_t t51 = -1927;

	t51 = (x401%((x402*x403)&x404));

	if (t51 != 104) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x414 = -1;
	static uint32_t x415 = 2U;
	static int8_t x416 = INT8_MIN;
	volatile int64_t t52 = -53375450LL;

	t52 = (x413%((x414*x415)&x416));

	if (t52 != -8192LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x417 = UINT32_MAX;
	uint8_t x418 = UINT8_MAX;
	volatile uint32_t x419 = 58906225U;
	static int8_t x420 = INT8_MAX;
	volatile uint32_t t53 = 8818U;

	t53 = (x417%((x418*x419)&x420));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x421 = UINT8_MAX;
	int8_t x424 = INT8_MIN;
	uint32_t t54 = 1473U;

	t54 = (x421%((x422*x423)&x424));

	if (t54 != 255U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x442 = UINT32_MAX;
	int16_t x444 = -623;
	volatile uint32_t t55 = 110542116U;

	t55 = (x441%((x442*x443)&x444));

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x446 = -1;
	int16_t x447 = INT16_MIN;
	uint64_t x448 = UINT64_MAX;

	t56 = (x445%((x446*x447)&x448));

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x449 = INT8_MAX;
	static int32_t x450 = -21;
	static uint16_t x451 = UINT16_MAX;
	static volatile uint16_t x452 = UINT16_MAX;
	int32_t t57 = 99;

	t57 = (x449%((x450*x451)&x452));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x457 = 33715427U;
	uint16_t x458 = UINT16_MAX;
	static volatile uint8_t x459 = UINT8_MAX;
	uint64_t x460 = 16374043377641189LLU;
	volatile uint64_t t58 = 1584574327336759LLU;

	t58 = (x457%((x458*x459)&x460));

	if (t58 != 115392LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t t59 = 6508143;

	t59 = (x469%((x470*x471)&x472));

	if (t59 != -12992) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x477 = INT16_MIN;
	uint64_t x478 = 2LLU;
	int8_t x479 = -1;
	static int32_t x480 = 15979;
	static volatile uint64_t t60 = 9142005836805598405LLU;

	t60 = (x477%((x478*x479)&x480));

	if (t60 != 4610LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x485 = INT64_MAX;
	volatile uint16_t x486 = 21U;
	uint8_t x487 = UINT8_MAX;
	uint64_t x488 = 13872129780029635LLU;
	uint64_t t61 = 113LLU;

	t61 = (x485%((x486*x487)&x488));

	if (t61 != 3864LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x489 = UINT8_MAX;
	int8_t x490 = -30;
	volatile uint8_t x492 = UINT8_MAX;
	volatile uint64_t t62 = 1544323832228083806LLU;

	t62 = (x489%((x490*x491)&x492));

	if (t62 != 41LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x493 = 16U;
	int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	int32_t x496 = INT32_MAX;
	uint32_t t63 = 9U;

	t63 = (x493%((x494*x495)&x496));

	if (t63 != 16U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x501 = INT32_MAX;
	int64_t x503 = -1LL;
	static int8_t x504 = -26;
	int64_t t64 = -12992321740133LL;

	t64 = (x501%((x502*x503)&x504));

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x517 = 4144476804LLU;
	static uint32_t x518 = 1765038784U;
	uint8_t x520 = UINT8_MAX;
	volatile uint64_t t65 = 3LLU;

	t65 = (x517%((x518*x519)&x520));

	if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x525 = UINT16_MAX;
	uint8_t x526 = 120U;
	int64_t x527 = -1LL;
	volatile int16_t x528 = INT16_MIN;
	volatile int64_t t66 = 15LL;

	t66 = (x525%((x526*x527)&x528));

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x533 = 375U;
	int64_t x534 = 514942LL;
	volatile int8_t x535 = 1;
	int64_t x536 = -1LL;

	t67 = (x533%((x534*x535)&x536));

	if (t67 != 375LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	volatile int64_t x539 = -1LL;
	uint64_t t68 = 19640874LLU;

	t68 = (x537%((x538*x539)&x540));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x541 = UINT32_MAX;
	static uint64_t x542 = 1771476357411351313LLU;
	int8_t x543 = INT8_MIN;
	volatile uint32_t x544 = 194U;

	t69 = (x541%((x542*x543)&x544));

	if (t69 != 127LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x549 = INT64_MAX;
	int64_t x551 = -679535278851LL;
	static int16_t x552 = INT16_MAX;
	int64_t t70 = -4126261184620067LL;

	t70 = (x549%((x550*x551)&x552));

	if (t70 != 25557LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x553 = 3161LLU;
	static volatile int32_t x554 = INT32_MAX;
	uint64_t x555 = 2LLU;
	volatile uint64_t t71 = 65026042465128LLU;

	t71 = (x553%((x554*x555)&x556));

	if (t71 != 3161LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x557 = 0U;
	volatile int8_t x558 = INT8_MIN;
	uint32_t x559 = UINT32_MAX;
	uint64_t x560 = 240954594LLU;
	uint64_t t72 = 637LLU;

	t72 = (x557%((x558*x559)&x560));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x561 = INT8_MIN;
	int16_t x562 = 1;
	volatile int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MAX;
	volatile int64_t t73 = 725924335844088127LL;

	t73 = (x561%((x562*x563)&x564));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x578 = -1;
	uint64_t x580 = 868983642LLU;

	t74 = (x577%((x578*x579)&x580));

	if (t74 != 308504511LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x585 = 106U;
	int8_t x586 = INT8_MAX;
	volatile uint32_t x587 = 40U;
	uint64_t x588 = 24038068885LLU;
	uint64_t t75 = 4LLU;

	t75 = (x585%((x586*x587)&x588));

	if (t75 != 106LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x589 = UINT8_MAX;
	uint8_t x591 = 3U;
	volatile int32_t x592 = INT32_MAX;
	int32_t t76 = 321748641;

	t76 = (x589%((x590*x591)&x592));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x603 = -7382LL;
	uint32_t x604 = 1538749686U;
	static uint64_t t77 = 11640881831LLU;

	t77 = (x601%((x602*x603)&x604));

	if (t77 != 91141739LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x605 = UINT8_MAX;
	int32_t x606 = -1;
	uint64_t x607 = 252953LLU;
	uint8_t x608 = UINT8_MAX;
	static volatile uint64_t t78 = 469853981814830657LLU;

	t78 = (x605%((x606*x607)&x608));

	if (t78 != 24LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x609 = INT64_MIN;
	int32_t x610 = -63;
	int64_t x611 = 7228223292LL;
	uint32_t x612 = 14U;
	volatile int64_t t79 = -10631114062060379LL;

	t79 = (x609%((x610*x611)&x612));

	if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x617 = 1;
	uint32_t x619 = 134286542U;
	static uint32_t t80 = 5586591U;

	t80 = (x617%((x618*x619)&x620));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x625 = -1;
	static uint64_t x626 = UINT64_MAX;
	static int32_t x627 = INT32_MIN;
	int16_t x628 = -1;
	volatile uint64_t t81 = 228305750394999973LLU;

	t81 = (x625%((x626*x627)&x628));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x633 = UINT64_MAX;
	int32_t x634 = 16892;
	int16_t x635 = 3;
	uint8_t x636 = UINT8_MAX;
	volatile uint64_t t82 = 2800224550096LLU;

	t82 = (x633%((x634*x635)&x636));

	if (t82 != 15LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x637 = INT64_MAX;
	static volatile int32_t x638 = 224;
	static uint32_t x639 = 7151087U;
	uint32_t x640 = UINT32_MAX;
	volatile int64_t t83 = 1965522513132LL;

	t83 = (x637%((x638*x639)&x640));

	if (t83 != 570061919LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x669 = 11062U;
	int8_t x670 = -1;
	static volatile int16_t x671 = INT16_MIN;
	volatile uint64_t t84 = 197256381731128090LLU;

	t84 = (x669%((x670*x671)&x672));

	if (t84 != 11062LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x685 = INT8_MIN;
	uint32_t x686 = 116791827U;
	static int16_t x688 = INT16_MAX;

	t85 = (x685%((x686*x687)&x688));

	if (t85 != 7182U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x689 = 40U;
	int8_t x690 = INT8_MIN;
	int16_t x691 = -1;
	int32_t t86 = 1006966;

	t86 = (x689%((x690*x691)&x692));

	if (t86 != 40) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x697 = INT32_MIN;
	int8_t x699 = INT8_MAX;
	static int8_t x700 = INT8_MAX;
	int32_t t87 = 62;

	t87 = (x697%((x698*x699)&x700));

	if (t87 != -120) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x709 = -1;
	int8_t x710 = INT8_MIN;
	uint32_t x711 = 257061U;
	volatile uint32_t t88 = 1U;

	t88 = (x709%((x710*x711)&x712));

	if (t88 != 67455U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x713 = 15789U;
	uint16_t x714 = UINT16_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t89 = 29;

	t89 = (x713%((x714*x715)&x716));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x722 = INT32_MAX;
	uint32_t x723 = 330993093U;
	static int8_t x724 = INT8_MAX;
	volatile uint32_t t90 = 4915U;

	t90 = (x721%((x722*x723)&x724));

	if (t90 != 50U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x727 = 52336;
	int8_t x728 = -6;
	int64_t t91 = -44569544190754LL;

	t91 = (x725%((x726*x727)&x728));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x733 = INT64_MIN;
	int8_t x735 = -1;
	static int32_t x736 = INT32_MIN;
	int64_t t92 = 694LL;

	t92 = (x733%((x734*x735)&x736));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x742 = INT8_MAX;
	int16_t x743 = -291;
	uint32_t x744 = 7036831U;
	static volatile uint32_t t93 = 1352390U;

	t93 = (x741%((x742*x743)&x744));

	if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x745 = 20;
	static int32_t x746 = -1;
	uint8_t x747 = 2U;
	volatile int32_t t94 = -17203;

	t94 = (x745%((x746*x747)&x748));

	if (t94 != 20) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x749 = -1;
	int16_t x750 = INT16_MIN;
	int8_t x751 = 5;
	static int32_t t95 = 16052;

	t95 = (x749%((x750*x751)&x752));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x753 = UINT32_MAX;
	int16_t x754 = -1;
	int16_t x755 = 185;
	volatile uint32_t t96 = 78U;

	t96 = (x753%((x754*x755)&x756));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x758 = INT8_MAX;
	static int8_t x759 = 2;
	int8_t x760 = -56;

	t97 = (x757%((x758*x759)&x760));

	if (t97 != -8LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x761 = -1LL;
	static int16_t x763 = INT16_MIN;
	volatile int8_t x764 = -1;
	volatile int64_t t98 = -3LL;

	t98 = (x761%((x762*x763)&x764));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x769 = -1;
	uint32_t x770 = 17U;
	static uint32_t x771 = 2685U;
	int64_t x772 = INT64_MAX;
	volatile int64_t t99 = -47385LL;

	t99 = (x769%((x770*x771)&x772));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

