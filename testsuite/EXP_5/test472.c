#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
int8_t x12 = -1;
volatile uint64_t t1 = 3075572951LLU;
uint64_t t2 = 111298880437531LLU;
int8_t x41 = -1;
int32_t x43 = -111;
static int32_t x55 = 118014098;
static uint32_t x59 = 3782U;
static int32_t x61 = INT32_MIN;
int32_t t8 = 88459660;
uint64_t x71 = 274741873464LLU;
uint32_t x76 = 17030U;
volatile uint32_t t10 = 59530U;
static int8_t x85 = -1;
uint64_t x87 = 148684728352877798LLU;
volatile uint64_t t13 = 232387825173LLU;
volatile uint8_t x103 = 5U;
static int16_t x104 = INT16_MIN;
static int16_t x105 = INT16_MAX;
uint16_t x109 = 3U;
uint64_t x123 = 163LLU;
int8_t x133 = INT8_MIN;
int16_t x150 = 1;
int32_t x153 = INT32_MAX;
static int64_t x154 = 28593066976948535LL;
volatile uint32_t x158 = UINT32_MAX;
int16_t x165 = -361;
uint8_t x166 = UINT8_MAX;
int8_t x168 = INT8_MIN;
volatile int32_t x181 = -1;
static uint16_t x184 = 26534U;
volatile uint64_t t26 = 33195831773059LLU;
uint32_t x186 = UINT32_MAX;
int8_t x187 = INT8_MIN;
static int8_t x196 = INT8_MIN;
uint16_t x209 = 6U;
uint64_t x212 = UINT64_MAX;
volatile uint8_t x219 = 24U;
int16_t x240 = -836;
volatile uint32_t t34 = 145U;
volatile uint16_t x250 = 5414U;
int64_t x262 = -7118275LL;
int64_t x264 = -196210535LL;
int64_t t37 = 9615LL;
int8_t x273 = 1;
volatile uint64_t t40 = 10023083LLU;
volatile int8_t x314 = -1;
static volatile uint32_t t45 = 42U;
uint32_t x337 = 199694939U;
int16_t x365 = -98;
volatile uint64_t x414 = 3080976218107793LLU;
uint16_t x423 = 313U;
volatile uint64_t x434 = UINT64_MAX;
static uint32_t x436 = 8200323U;
static int32_t x441 = 160268;
int16_t x442 = 77;
static int32_t x465 = INT32_MIN;
static uint8_t x474 = UINT8_MAX;
volatile int64_t x476 = -1LL;
static int8_t x483 = INT8_MAX;
uint64_t x485 = UINT64_MAX;
static int16_t x505 = INT16_MIN;
uint32_t x506 = UINT32_MAX;
int16_t x527 = INT16_MIN;
int64_t x528 = INT64_MAX;
volatile int8_t x530 = 1;
int8_t x531 = INT8_MAX;
int64_t x549 = INT64_MIN;
volatile int64_t t72 = 267110945839LL;
int64_t x555 = 245903LL;
int8_t x556 = INT8_MIN;
uint16_t x562 = UINT16_MAX;
int32_t x569 = 10307;
int64_t t75 = -938020053LL;
volatile int8_t x588 = INT8_MIN;
int64_t x592 = INT64_MAX;
int32_t x600 = INT32_MAX;
int32_t t79 = -179;
int8_t x632 = INT8_MIN;
int8_t x635 = 3;
volatile int64_t t84 = 80318LL;
volatile int16_t x658 = -198;
int16_t x665 = -30;
int8_t x677 = INT8_MIN;
static volatile int32_t t93 = 300;
int16_t x682 = INT16_MAX;
int16_t x691 = INT16_MAX;
static int16_t x693 = INT16_MIN;
int16_t x694 = 6351;
int8_t x721 = INT8_MIN;
int64_t x724 = INT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = -14;
	static int32_t x3 = 453697;
	volatile int32_t t0 = 2;

	t0 = (x1/((x2*x3)&x4));

	if (t0 != -410294) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x10 = 224373702101024546LLU;
	int32_t x11 = 6645;

	t1 = (x9/((x10*x11)&x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x17 = -1;
	uint8_t x18 = 4U;
	int32_t x19 = 1002;
	uint64_t x20 = 35170075653LLU;

	t2 = (x17/((x18*x19)&x20));

	if (t2 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x42 = 14584U;
	uint32_t x44 = 6589U;
	uint32_t t3 = 66U;

	t3 = (x41/((x42*x43)&x44));

	if (t3 != 2041334U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x45 = 775999LLU;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile uint64_t x48 = 37253275399635LLU;
	static uint64_t t4 = 14630111636136LLU;

	t4 = (x45/((x46*x47)&x48));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x53 = -1;
	static int16_t x54 = -1;
	static int16_t x56 = 2;
	static volatile int32_t t5 = -39287;

	t5 = (x53/((x54*x55)&x56));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x57 = 3U;
	volatile uint32_t x58 = 106432704U;
	int16_t x60 = INT16_MIN;
	uint32_t t6 = 0U;

	t6 = (x57/((x58*x59)&x60));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x62 = -1915;
	static int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t7 = 934;

	t7 = (x61/((x62*x63)&x64));

	if (t7 != -44267) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = -13770;
	int8_t x67 = INT8_MAX;
	int32_t x68 = 2377;

	t8 = (x65/((x66*x67)&x68));

	if (t8 != -29826161) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x69 = UINT64_MAX;
	static int16_t x70 = -1;
	static uint16_t x72 = 24338U;
	volatile uint64_t t9 = 260213LLU;

	t9 = (x69/((x70*x71)&x72));

	if (t9 != 3602879701896396LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = -28;
	int16_t x75 = 3;

	t10 = (x73/((x74*x75)&x76));

	if (t10 != 126114U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = 4U;
	int16_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile uint32_t t11 = 91U;

	t11 = (x77/((x78*x79)&x80));

	if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	volatile int8_t x83 = INT8_MAX;
	static int8_t x84 = INT8_MIN;
	int64_t t12 = -39252065894LL;

	t12 = (x81/((x82*x83)&x84));

	if (t12 != -284812624655841LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x86 = 1985;
	int8_t x88 = INT8_MAX;

	t13 = (x85/((x86*x87)&x88));

	if (t13 != 180850432095191682LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x97 = -6074384786313LL;
	uint32_t x98 = 97U;
	static uint16_t x99 = 62U;
	int8_t x100 = 13;
	int64_t t14 = 2LL;

	t14 = (x97/((x98*x99)&x100));

	if (t14 != -506198732192LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = -69;
	volatile uint16_t x102 = UINT16_MAX;
	static volatile int32_t t15 = -45975;

	t15 = (x101/((x102*x103)&x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t16 = 559140LLU;

	t16 = (x105/((x106*x107)&x108));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x110 = -1LL;
	int16_t x111 = -3;
	int16_t x112 = -1710;
	volatile int64_t t17 = 7428283228139877LL;

	t17 = (x109/((x110*x111)&x112));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x121 = -1;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t18 = 2505105370330LLU;

	t18 = (x121/((x122*x123)&x124));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x134 = INT16_MIN;
	static volatile int8_t x135 = -1;
	int64_t x136 = -1LL;
	volatile int64_t t19 = 33826932168213208LL;

	t19 = (x133/((x134*x135)&x136));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x137 = 1152U;
	int8_t x138 = 5;
	static int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = 265387706102483807LLU;
	volatile uint64_t t20 = 69LLU;

	t20 = (x137/((x138*x139)&x140));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x141 = INT32_MIN;
	uint64_t x142 = 68842103156218LLU;
	static uint16_t x143 = UINT16_MAX;
	int32_t x144 = -1;
	static uint64_t t21 = 3210803LLU;

	t21 = (x141/((x142*x143)&x144));

	if (t21 != 4LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MAX;
	volatile int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t22 = 6975U;

	t22 = (x149/((x150*x151)&x152));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x155 = 196U;
	int64_t x156 = -295LL;
	volatile int64_t t23 = 423960LL;

	t23 = (x153/((x154*x155)&x156));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x157 = 997715U;
	static int16_t x159 = -2;
	static uint16_t x160 = UINT16_MAX;
	volatile uint32_t t24 = 84U;

	t24 = (x157/((x158*x159)&x160));

	if (t24 != 498857U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x167 = -228LL;
	volatile int64_t t25 = 4135049912500LL;

	t25 = (x165/((x166*x167)&x168));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x182 = 7133845051107LLU;
	uint8_t x183 = UINT8_MAX;

	t26 = (x181/((x182*x183)&x184));

	if (t26 != 17944303573647423LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int32_t x188 = INT32_MAX;
	volatile uint32_t t27 = 26765U;

	t27 = (x185/((x186*x187)&x188));

	if (t27 != 511U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x193 = 22U;
	int32_t x194 = -1;
	volatile int32_t x195 = INT32_MAX;
	static volatile int32_t t28 = 18;

	t28 = (x193/((x194*x195)&x196));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x205 = -1564738LL;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	int64_t x208 = -911LL;
	volatile int64_t t29 = -143LL;

	t29 = (x205/((x206*x207)&x208));

	if (t29 != -1564738LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x210 = UINT8_MAX;
	uint32_t x211 = 818050798U;
	uint64_t t30 = 270162LLU;

	t30 = (x209/((x210*x211)&x212));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x217 = 75510575716057854LL;
	int64_t x218 = 885711LL;
	int16_t x220 = -1;
	static volatile int64_t t31 = -25493900843791636LL;

	t31 = (x217/((x218*x219)&x220));

	if (t31 != 3552258003LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x229 = -1;
	volatile uint64_t x230 = 4946803LLU;
	volatile int16_t x231 = INT16_MAX;
	uint16_t x232 = 5U;
	uint64_t t32 = 3900205LLU;

	t32 = (x229/((x230*x231)&x232));

	if (t32 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -26183398;
	uint64_t x235 = 688LLU;
	int8_t x236 = -15;
	static volatile uint64_t t33 = 140LLU;

	t33 = (x233/((x234*x235)&x236));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x237 = 30U;
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 6U;

	t34 = (x237/((x238*x239)&x240));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x249 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = -321060387087655LL;
	static volatile int64_t t35 = -4052248461816LL;

	t35 = (x249/((x250*x251)&x252));

	if (t35 != -6468LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x257 = INT64_MAX;
	uint64_t x258 = 363315797750LLU;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t36 = 15LLU;

	t36 = (x257/((x258*x259)&x260));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;

	t37 = (x261/((x262*x263)&x264));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x265 = 32U;
	int32_t x266 = -1;
	static uint16_t x267 = 1U;
	static int64_t x268 = -415192200LL;
	int64_t t38 = 3LL;

	t38 = (x265/((x266*x267)&x268));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x269 = -20686724;
	uint16_t x270 = 252U;
	uint64_t x271 = 807LLU;
	int16_t x272 = -1;
	uint64_t t39 = 381LLU;

	t39 = (x269/((x270*x271)&x272));

	if (t39 != 90708011613111LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x274 = -212;
	int16_t x275 = -1;
	uint64_t x276 = UINT64_MAX;

	t40 = (x273/((x274*x275)&x276));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x285 = -1400614LL;
	static int32_t x286 = -1;
	volatile int8_t x287 = 3;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t41 = -24391562428306LL;

	t41 = (x285/((x286*x287)&x288));

	if (t41 != -21LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x297 = UINT8_MAX;
	volatile int32_t x298 = -1;
	volatile int8_t x299 = 6;
	uint32_t x300 = 406390052U;
	uint32_t t42 = 159U;

	t42 = (x297/((x298*x299)&x300));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x309 = UINT8_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = 105792902;
	static volatile int32_t t43 = -16;

	t43 = (x309/((x310*x311)&x312));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x313 = UINT8_MAX;
	static volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = -1;
	static volatile int32_t t44 = -45770760;

	t44 = (x313/((x314*x315)&x316));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x325 = 15551U;
	uint32_t x326 = 816086U;
	uint16_t x327 = 7U;
	volatile int8_t x328 = INT8_MIN;

	t45 = (x325/((x326*x327)&x328));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x333 = UINT8_MAX;
	static volatile uint16_t x334 = 2213U;
	int32_t x335 = 1206;
	static int64_t x336 = 5837LL;
	int64_t t46 = -13LL;

	t46 = (x333/((x334*x335)&x336));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x338 = 15;
	int16_t x339 = 86;
	uint64_t x340 = 10LLU;
	static volatile uint64_t t47 = 37890027263404LLU;

	t47 = (x337/((x338*x339)&x340));

	if (t47 != 19969493LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x357 = INT8_MIN;
	static int32_t x358 = INT32_MAX;
	uint32_t x359 = 6995U;
	int8_t x360 = -1;
	uint32_t t48 = 48U;

	t48 = (x357/((x358*x359)&x360));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x366 = INT8_MIN;
	uint64_t x367 = 5717LLU;
	volatile int16_t x368 = -1;
	static uint64_t t49 = 666760358LLU;

	t49 = (x365/((x366*x367)&x368));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x385 = -1;
	uint8_t x386 = 11U;
	int32_t x387 = -1;
	static int64_t x388 = -101393592782LL;
	int64_t t50 = -27674434025741LL;

	t50 = (x385/((x386*x387)&x388));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x401 = -26;
	static uint32_t x402 = UINT32_MAX;
	volatile uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MAX;
	uint64_t t51 = 5LLU;

	t51 = (x401/((x402*x403)&x404));

	if (t51 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = 1808974;
	volatile int64_t x412 = INT64_MIN;
	static uint64_t t52 = 307233071957410LLU;

	t52 = (x409/((x410*x411)&x412));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x413 = -1;
	int32_t x415 = -1;
	int64_t x416 = -1LL;
	static uint64_t t53 = 3060527273418538904LLU;

	t53 = (x413/((x414*x415)&x416));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x421 = -1;
	static int8_t x422 = INT8_MAX;
	uint32_t x424 = UINT32_MAX;
	uint32_t t54 = 7U;

	t54 = (x421/((x422*x423)&x424));

	if (t54 != 108046U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x433 = INT64_MAX;
	volatile int32_t x435 = -1;
	static volatile uint64_t t55 = 523882522269426LLU;

	t55 = (x433/((x434*x435)&x436));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x443 = -3364;
	uint16_t x444 = 24303U;
	int32_t t56 = 59466;

	t56 = (x441/((x442*x443)&x444));

	if (t56 != 51) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x449 = 12274244U;
	int8_t x450 = -1;
	int16_t x451 = 61;
	uint64_t x452 = 6299932208555695064LLU;
	uint64_t t57 = 478574088368961LLU;

	t57 = (x449/((x450*x451)&x452));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x461 = 6338;
	static int64_t x462 = -1LL;
	int16_t x463 = -315;
	uint16_t x464 = 7U;
	static int64_t t58 = 42556671615091LL;

	t58 = (x461/((x462*x463)&x464));

	if (t58 != 2112LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x466 = 1833871235287LLU;
	uint8_t x467 = 3U;
	static volatile int64_t x468 = 1528552215040471420LL;
	static volatile uint64_t t59 = 7172363LLU;

	t59 = (x465/((x466*x467)&x468));

	if (t59 != 68269457315LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x469 = 7;
	int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = 3016370569LLU;
	volatile int64_t x472 = INT64_MIN;
	static volatile uint64_t t60 = 521LLU;

	t60 = (x469/((x470*x471)&x472));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x473 = -1;
	int32_t x475 = -1;
	int64_t t61 = -201LL;

	t61 = (x473/((x474*x475)&x476));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x481 = INT64_MIN;
	volatile uint32_t x482 = 446302U;
	int8_t x484 = -1;
	static int64_t t62 = -502681380LL;

	t62 = (x481/((x482*x483)&x484));

	if (t62 != -162726083835LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x486 = UINT16_MAX;
	int8_t x487 = INT8_MIN;
	uint8_t x488 = UINT8_MAX;
	volatile uint64_t t63 = 86722LLU;

	t63 = (x485/((x486*x487)&x488));

	if (t63 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x489 = INT32_MIN;
	uint64_t x490 = 52LLU;
	int8_t x491 = 15;
	int8_t x492 = INT8_MIN;
	static uint64_t t64 = 434503334LLU;

	t64 = (x489/((x490*x491)&x492));

	if (t64 != 24019198009846442LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x493 = -8600858;
	static int64_t x494 = -1LL;
	int8_t x495 = 3;
	uint16_t x496 = 592U;
	int64_t t65 = 382569685352113516LL;

	t65 = (x493/((x494*x495)&x496));

	if (t65 != -14528LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x507 = INT32_MAX;
	int8_t x508 = INT8_MAX;
	volatile uint32_t t66 = 12401010U;

	t66 = (x505/((x506*x507)&x508));

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x513 = -1;
	int32_t x514 = -1673;
	int8_t x515 = -1;
	int32_t x516 = INT32_MAX;
	volatile int32_t t67 = 49469;

	t67 = (x513/((x514*x515)&x516));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x525 = 88780U;
	uint32_t x526 = 3466731U;
	int64_t t68 = -149249095410378LL;

	t68 = (x525/((x526*x527)&x528));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = 7U;
	uint32_t x532 = 338446273U;
	uint32_t t69 = 18U;

	t69 = (x529/((x530*x531)&x532));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x533 = -1;
	uint32_t x534 = UINT32_MAX;
	uint16_t x535 = 23655U;
	uint16_t x536 = 19985U;
	volatile uint32_t t70 = 0U;

	t70 = (x533/((x534*x535)&x536));

	if (t70 != 8119030U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x545 = -1211369208717LL;
	int32_t x546 = -1;
	volatile uint32_t x547 = 88U;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t71 = 67858LLU;

	t71 = (x545/((x546*x547)&x548));

	if (t71 != 4294967101LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x550 = -1;
	static int32_t x551 = 18052;
	int32_t x552 = 82285973;

	t72 = (x549/((x550*x551)&x552));

	if (t72 != -112090808934LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x553 = 1422LLU;
	volatile uint64_t x554 = UINT64_MAX;
	volatile uint64_t t73 = 1540706LLU;

	t73 = (x553/((x554*x555)&x556));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x561 = -972790677LL;
	static int64_t x563 = 1393369330674LL;
	int32_t x564 = INT32_MAX;
	volatile int64_t t74 = -314LL;

	t74 = (x561/((x562*x563)&x564));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x570 = -13069;
	volatile uint32_t x571 = 266066U;
	volatile int64_t x572 = -3769498601105237LL;

	t75 = (x569/((x570*x571)&x572));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x585 = -1LL;
	volatile int16_t x586 = -1;
	static int16_t x587 = INT16_MIN;
	int64_t t76 = -3LL;

	t76 = (x585/((x586*x587)&x588));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x589 = INT64_MIN;
	uint8_t x590 = 52U;
	static int8_t x591 = -37;
	volatile int64_t t77 = 194949694462002808LL;

	t77 = (x589/((x590*x591)&x592));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x593 = UINT8_MAX;
	int16_t x594 = INT16_MIN;
	uint16_t x595 = 1006U;
	uint64_t x596 = UINT64_MAX;
	uint64_t t78 = 16460775LLU;

	t78 = (x593/((x594*x595)&x596));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x597 = -1;
	int16_t x598 = 81;
	int32_t x599 = -217;

	t79 = (x597/((x598*x599)&x600));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x601 = 1;
	int8_t x602 = INT8_MAX;
	uint64_t x603 = UINT64_MAX;
	static uint64_t x604 = 1795444407917LLU;
	uint64_t t80 = 7794536LLU;

	t80 = (x601/((x602*x603)&x604));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x609 = 1;
	static uint64_t x610 = 5632338057532168148LLU;
	int8_t x611 = INT8_MIN;
	int64_t x612 = -212217692999LL;
	volatile uint64_t t81 = 198961LLU;

	t81 = (x609/((x610*x611)&x612));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x625 = 1948U;
	volatile uint64_t x626 = UINT64_MAX;
	static int64_t x627 = INT64_MAX;
	volatile int64_t x628 = INT64_MIN;
	volatile uint64_t t82 = 54211293LLU;

	t82 = (x625/((x626*x627)&x628));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x629 = 11376U;
	int64_t x630 = -1LL;
	volatile int8_t x631 = INT8_MIN;
	volatile int64_t t83 = -164331625LL;

	t83 = (x629/((x630*x631)&x632));

	if (t83 != 88LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x633 = UINT16_MAX;
	int64_t x634 = -105535049595LL;
	static uint32_t x636 = 12229U;

	t84 = (x633/((x634*x635)&x636));

	if (t84 != 168LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x637 = 1;
	uint8_t x638 = 18U;
	volatile int8_t x639 = -1;
	volatile int8_t x640 = -1;
	static int32_t t85 = 1;

	t85 = (x637/((x638*x639)&x640));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x641 = -1;
	static int16_t x642 = -17;
	static uint8_t x643 = 13U;
	uint32_t x644 = 66691U;
	volatile uint32_t t86 = 6659872U;

	t86 = (x641/((x642*x643)&x644));

	if (t86 != 64524U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x649 = -963721475;
	int32_t x650 = -1;
	static uint8_t x651 = 13U;
	int64_t x652 = INT64_MAX;
	static int64_t t87 = 13749080634868LL;

	t87 = (x649/((x650*x651)&x652));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x657 = INT32_MAX;
	int8_t x659 = INT8_MIN;
	int64_t x660 = -8981198307520840LL;
	static int64_t t88 = -12764916880LL;

	t88 = (x657/((x658*x659)&x660));

	if (t88 != 4194303LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x661 = INT32_MIN;
	static volatile int32_t x662 = -1;
	int64_t x663 = 324092LL;
	uint32_t x664 = 897225U;
	volatile int64_t t89 = -1883585394838730LL;

	t89 = (x661/((x662*x663)&x664));

	if (t89 != -3640LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x666 = INT16_MIN;
	int32_t x667 = -1;
	static int64_t x668 = -1LL;
	volatile int64_t t90 = 1307586435543324021LL;

	t90 = (x665/((x666*x667)&x668));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x669 = INT32_MIN;
	static volatile uint8_t x670 = UINT8_MAX;
	uint8_t x671 = 6U;
	uint64_t x672 = UINT64_MAX;
	uint64_t t91 = 49358936356671533LLU;

	t91 = (x669/((x670*x671)&x672));

	if (t91 != 12056695471609194LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x673 = INT16_MAX;
	static int16_t x674 = INT16_MIN;
	static uint8_t x675 = 53U;
	volatile int8_t x676 = INT8_MIN;
	static volatile int32_t t92 = 39474;

	t92 = (x673/((x674*x675)&x676));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x678 = 1U;
	int8_t x679 = -1;
	int32_t x680 = INT32_MIN;

	t93 = (x677/((x678*x679)&x680));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x681 = 273360LL;
	int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MIN;
	int64_t t94 = -132LL;

	t94 = (x681/((x682*x683)&x684));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x685 = -1008019234;
	uint32_t x686 = 27268U;
	uint8_t x687 = 29U;
	static uint8_t x688 = UINT8_MAX;
	uint32_t t95 = 9337U;

	t95 = (x685/((x686*x687)&x688));

	if (t95 != 13471098U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x689 = INT16_MIN;
	int16_t x690 = -1;
	static int16_t x692 = INT16_MAX;
	volatile int32_t t96 = -1;

	t96 = (x689/((x690*x691)&x692));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x695 = -1317332LL;
	static int16_t x696 = 10187;
	int64_t t97 = 104266732604LL;

	t97 = (x693/((x694*x695)&x696));

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x717 = INT16_MAX;
	int8_t x718 = -7;
	static volatile int64_t x719 = -3LL;
	volatile uint16_t x720 = UINT16_MAX;
	volatile int64_t t98 = 1715628LL;

	t98 = (x717/((x718*x719)&x720));

	if (t98 != 1560LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x722 = 2854LLU;
	static int16_t x723 = INT16_MIN;
	volatile uint64_t t99 = 1018251340277059188LLU;

	t99 = (x721/((x722*x723)&x724));

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

