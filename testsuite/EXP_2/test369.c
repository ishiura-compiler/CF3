#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = -196461271421956275LL;
int16_t x8 = 250;
volatile int64_t x20 = -3LL;
volatile uint32_t t2 = 14U;
volatile uint64_t x31 = 875270LLU;
static volatile uint64_t t3 = 79066LLU;
int32_t x38 = -25477;
uint32_t x40 = 5U;
uint32_t t5 = 6886U;
int16_t x51 = -1;
int64_t t8 = 25052899924323030LL;
volatile uint64_t x65 = 55558297622LLU;
volatile int64_t t10 = 175276LL;
int16_t x78 = -1;
int64_t x98 = INT64_MAX;
int64_t x124 = INT64_MAX;
uint16_t x143 = UINT16_MAX;
static volatile uint32_t t19 = 82U;
int8_t x173 = INT8_MIN;
static int32_t x176 = -13641;
int16_t x178 = -1;
int32_t x180 = 7;
uint32_t t25 = 45U;
int8_t x193 = -1;
volatile int8_t x194 = INT8_MIN;
static uint32_t x198 = UINT32_MAX;
volatile int16_t x212 = INT16_MIN;
int64_t x213 = INT64_MAX;
int8_t x223 = INT8_MAX;
uint8_t x225 = 126U;
static volatile int32_t t32 = 24033427;
int16_t x231 = 47;
uint8_t x232 = 56U;
uint16_t x233 = UINT16_MAX;
static int64_t x235 = -773326326826LL;
uint64_t x236 = 400368484LLU;
uint32_t x251 = 7595777U;
uint16_t x275 = 48U;
int16_t x276 = INT16_MIN;
volatile uint64_t t39 = 203508269484191515LLU;
static uint8_t x284 = 54U;
static int8_t x295 = -27;
volatile uint64_t t43 = 1956841909641793044LLU;
int16_t x305 = INT16_MAX;
int8_t x311 = -5;
uint32_t x316 = 5831U;
uint64_t t48 = 4888821LLU;
volatile uint16_t x326 = 0U;
uint64_t x341 = 344514008591277LLU;
static int16_t x351 = INT16_MAX;
int8_t x355 = -1;
int32_t t52 = 12770;
volatile uint64_t x366 = 4541929LLU;
volatile int64_t x404 = 12058120159303LL;
volatile int32_t t58 = -7564;
static int8_t x441 = INT8_MIN;
int8_t x447 = INT8_MIN;
uint16_t x448 = 2914U;
static volatile uint64_t t61 = 11230961987689LLU;
static int64_t x458 = -14355338326490666LL;
int64_t x459 = -1LL;
int8_t x472 = INT8_MIN;
static int16_t x475 = INT16_MIN;
int32_t x476 = -1;
uint16_t x479 = 50U;
int32_t x482 = 6550;
static uint16_t x487 = 19011U;
uint8_t x495 = UINT8_MAX;
static uint32_t x502 = 4140U;
static volatile int32_t x504 = -3298;
uint32_t t72 = 258081U;
int16_t x526 = -1;
uint8_t x562 = 33U;
volatile int64_t t77 = 13202452301299LL;
volatile int8_t x565 = INT8_MAX;
int8_t x594 = INT8_MAX;
int64_t x602 = -1LL;
uint64_t x603 = 3237393910LLU;
volatile int16_t x605 = INT16_MIN;
int16_t x606 = -3938;
uint16_t x608 = 1476U;
int64_t x613 = -1LL;
int8_t x614 = INT8_MIN;
volatile uint32_t x615 = 263689610U;
uint32_t x621 = UINT32_MAX;
static int16_t x622 = -1;
uint64_t t89 = 581LLU;
uint64_t x638 = UINT64_MAX;
volatile uint64_t x640 = UINT64_MAX;
static uint32_t x641 = 295U;
uint32_t t91 = 758944U;
int64_t x650 = -1LL;
int16_t x652 = 98;
int32_t x654 = INT32_MIN;
volatile uint64_t t94 = 14022LLU;
volatile uint64_t x672 = 204372963927245LLU;
static uint16_t x676 = UINT16_MAX;
int32_t x681 = INT32_MIN;


void f0(void) {
	uint16_t x5 = 2U;
	uint64_t x7 = 1393031LLU;
	static uint64_t t0 = 31992656306646518LLU;

	t0 = ((x5*(x6*x7))%x8);

	if (t0 != 18LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x17 = 0U;
	int16_t x18 = -222;
	uint16_t x19 = 1027U;
	volatile int64_t t1 = -3438380535LL;

	t1 = ((x17*(x18*x19))%x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x25 = 1U;
	int32_t x26 = -1;
	uint32_t x27 = 327281180U;
	int32_t x28 = INT32_MIN;

	t2 = ((x25*(x26*x27))%x28);

	if (t2 != 1820202468U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -1LL;
	int16_t x30 = INT16_MAX;
	volatile uint16_t x32 = 3U;

	t3 = ((x29*(x30*x31))%x32);

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x33 = 113777102U;
	volatile uint32_t x34 = UINT32_MAX;
	static int64_t x35 = 14LL;
	static volatile uint16_t x36 = 474U;
	static int64_t t4 = 341504558LL;

	t4 = ((x33*(x34*x35))%x36);

	if (t4 != 156LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x37 = INT16_MIN;
	static int32_t x39 = 1;

	t5 = ((x37*(x38*x39))%x40);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x41 = INT16_MAX;
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = -2;
	int64_t x44 = -1LL;
	volatile uint64_t t6 = 876519567LLU;

	t6 = ((x41*(x42*x43))%x44);

	if (t6 != 65534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = 1728721113LL;
	volatile uint64_t x47 = UINT64_MAX;
	int16_t x48 = 716;
	volatile uint64_t t7 = 102LLU;

	t7 = ((x45*(x46*x47))%x48);

	if (t7 != 689LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -1;
	int64_t x50 = -7011591LL;
	int16_t x52 = -4950;

	t8 = ((x49*(x50*x51))%x52);

	if (t8 != -2391LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x66 = -185;
	volatile uint64_t x67 = 136416831298LLU;
	volatile int8_t x68 = INT8_MIN;
	uint64_t t9 = 2796482238908LLU;

	t9 = ((x65*(x66*x67))%x68);

	if (t9 != 5937970340032261300LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x73 = INT16_MAX;
	static int8_t x74 = 1;
	int16_t x75 = INT16_MIN;
	int64_t x76 = 587944LL;

	t10 = ((x73*(x74*x75))%x76);

	if (t10 != -123312LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = 11U;
	int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = 443U;
	volatile uint32_t t11 = 2U;

	t11 = ((x77*(x78*x79))%x80);

	if (t11 != 79U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MIN;
	static uint64_t x82 = 13000454562662405LLU;
	static uint16_t x83 = UINT16_MAX;
	volatile uint16_t x84 = 238U;
	volatile uint64_t t12 = 1661527878650LLU;

	t12 = ((x81*(x82*x83))%x84);

	if (t12 != 124LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = UINT16_MAX;
	volatile uint32_t x86 = 14816U;
	uint8_t x87 = 2U;
	static int16_t x88 = -1015;
	uint32_t t13 = 875U;

	t13 = ((x85*(x86*x87))%x88);

	if (t13 != 1941933120U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = 701987LLU;
	int8_t x90 = -1;
	volatile uint16_t x91 = 7406U;
	static int16_t x92 = -1;
	uint64_t t14 = 1633613744472719LLU;

	t14 = ((x89*(x90*x91))%x92);

	if (t14 != 18446744068510635894LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x97 = -1;
	int8_t x99 = 0;
	uint8_t x100 = UINT8_MAX;
	static volatile int64_t t15 = -453084854438633LL;

	t15 = ((x97*(x98*x99))%x100);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x121 = 2;
	int32_t x122 = 14;
	volatile int16_t x123 = -1;
	int64_t t16 = 336LL;

	t16 = ((x121*(x122*x123))%x124);

	if (t16 != -28LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = -1;
	volatile int16_t x135 = -1;
	int32_t x136 = INT32_MIN;
	int32_t t17 = 3;

	t17 = ((x133*(x134*x135))%x136);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x141 = INT64_MAX;
	uint64_t x142 = 203157631452958LLU;
	uint64_t x144 = 129352619493LLU;
	volatile uint64_t t18 = 187482448273710LLU;

	t18 = ((x141*(x142*x143))%x144);

	if (t18 != 128550947815LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static volatile uint32_t x148 = UINT32_MAX;

	t19 = ((x145*(x146*x147))%x148);

	if (t19 != 4290772992U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x153 = 3U;
	uint16_t x154 = 417U;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -1;
	int32_t t20 = -4142158;

	t20 = ((x153*(x154*x155))%x156);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x165 = UINT64_MAX;
	static uint8_t x166 = 0U;
	int8_t x167 = -17;
	int16_t x168 = -1;
	uint64_t t21 = 486120LLU;

	t21 = ((x165*(x166*x167))%x168);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x169 = INT32_MIN;
	static uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	int64_t x172 = INT64_MIN;
	uint64_t t22 = 1570LLU;

	t22 = ((x169*(x170*x171))%x172);

	if (t22 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	volatile int32_t t23 = 835935882;

	t23 = ((x173*(x174*x175))%x176);

	if (t23 != 5358) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x177 = 0;
	uint32_t x179 = 419181049U;
	uint32_t t24 = 65361691U;

	t24 = ((x177*(x178*x179))%x180);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x181 = UINT8_MAX;
	static uint32_t x182 = 257U;
	static int32_t x183 = -221;
	volatile uint32_t x184 = UINT32_MAX;

	t25 = ((x181*(x182*x183))%x184);

	if (t25 != 4280484061U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x195 = INT16_MIN;
	int32_t x196 = -1;
	volatile int32_t t26 = 10099490;

	t26 = ((x193*(x194*x195))%x196);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x197 = INT8_MAX;
	int8_t x199 = -1;
	int32_t x200 = 7;
	volatile uint32_t t27 = 7594U;

	t27 = ((x197*(x198*x199))%x200);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x201 = -1;
	volatile int64_t x202 = 51247628LL;
	int16_t x203 = -103;
	static uint32_t x204 = 13292028U;
	int64_t t28 = 1LL;

	t28 = ((x201*(x202*x203))%x204);

	if (t28 != 1570568LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x209 = INT8_MIN;
	uint64_t x210 = 799231146343856626LLU;
	volatile uint16_t x211 = 0U;
	volatile uint64_t t29 = 15LLU;

	t29 = ((x209*(x210*x211))%x212);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x214 = 147LLU;
	int64_t x215 = 1LL;
	int16_t x216 = INT16_MIN;
	static uint64_t t30 = 14601374439460LLU;

	t30 = ((x213*(x214*x215))%x216);

	if (t30 != 9223372036854775661LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x221 = INT8_MIN;
	static int16_t x222 = -1;
	int64_t x224 = INT64_MIN;
	int64_t t31 = -16408454837LL;

	t31 = ((x221*(x222*x223))%x224);

	if (t31 != 16256LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x226 = -1;
	static uint16_t x227 = 1653U;
	static volatile int32_t x228 = INT32_MAX;

	t32 = ((x225*(x226*x227))%x228);

	if (t32 != -208278) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x229 = 5795676LLU;
	volatile uint64_t x230 = 123645948LLU;
	uint64_t t33 = 9585338LLU;

	t33 = ((x229*(x230*x231))%x232);

	if (t33 != 24LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x234 = 1U;
	static volatile uint64_t t34 = 7900342437927LLU;

	t34 = ((x233*(x234*x235))%x236);

	if (t34 != 85696870LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x249 = -1;
	int32_t x250 = INT32_MAX;
	int8_t x252 = -1;
	static volatile uint32_t t35 = 65U;

	t35 = ((x249*(x250*x251))%x252);

	if (t35 != 2155079425U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint64_t x262 = 399892155LLU;
	int16_t x263 = -1;
	int8_t x264 = INT8_MIN;
	uint64_t t36 = 8571764588LLU;

	t36 = ((x261*(x262*x263))%x264);

	if (t36 != 399892155LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x265 = INT8_MAX;
	static int8_t x266 = -1;
	volatile int16_t x267 = INT16_MIN;
	static volatile int64_t x268 = INT64_MIN;
	volatile int64_t t37 = 1353253200328LL;

	t37 = ((x265*(x266*x267))%x268);

	if (t37 != 4161536LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x269 = 6;
	volatile int16_t x270 = -37;
	int8_t x271 = -50;
	uint16_t x272 = 6369U;
	static volatile int32_t t38 = 1;

	t38 = ((x269*(x270*x271))%x272);

	if (t38 != 4731) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;

	t39 = ((x273*(x274*x275))%x276);

	if (t39 != 1572864LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x277 = INT32_MIN;
	static uint8_t x278 = 1U;
	uint64_t x279 = UINT64_MAX;
	uint32_t x280 = 948072U;
	volatile uint64_t t40 = 0LLU;

	t40 = ((x277*(x278*x279))%x280);

	if (t40 != 100568LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x281 = -48167;
	uint32_t x282 = 34981U;
	int8_t x283 = 0;
	uint32_t t41 = 178U;

	t41 = ((x281*(x282*x283))%x284);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x293 = UINT32_MAX;
	static int32_t x294 = -1;
	int64_t x296 = INT64_MAX;
	int64_t t42 = -317913453764095911LL;

	t42 = ((x293*(x294*x295))%x296);

	if (t42 != 4294967269LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x301 = -1LL;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = 8305989821505844873LLU;
	uint16_t x304 = 3U;

	t43 = ((x301*(x302*x303))%x304);

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1;
	volatile int16_t x308 = INT16_MAX;
	int32_t t44 = -345770;

	t44 = ((x305*(x306*x307))%x308);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	volatile int64_t x312 = -777LL;
	int64_t t45 = -2537374LL;

	t45 = ((x309*(x310*x311))%x312);

	if (t45 != -290LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x313 = INT16_MAX;
	uint64_t x314 = 985434105787610LLU;
	static volatile int8_t x315 = INT8_MIN;
	static volatile uint64_t t46 = 60944242427466737LLU;

	t46 = ((x313*(x314*x315))%x316);

	if (t46 != 1073LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	int32_t x319 = -1;
	int64_t x320 = INT64_MIN;
	int64_t t47 = -15290927599LL;

	t47 = ((x317*(x318*x319))%x320);

	if (t47 != 16256LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x321 = 6955594351913101LLU;
	uint64_t x322 = 5864473729692197LLU;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = UINT64_MAX;

	t48 = ((x321*(x322*x323))%x324);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x325 = INT16_MIN;
	int16_t x327 = 2;
	int16_t x328 = -4;
	int32_t t49 = 12852972;

	t49 = ((x325*(x326*x327))%x328);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x342 = 11799614LLU;
	int64_t x343 = -1LL;
	static int8_t x344 = INT8_MAX;
	uint64_t t50 = 7498621733167LLU;

	t50 = ((x341*(x342*x343))%x344);

	if (t50 != 109LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x349 = 6172064758LLU;
	static int8_t x350 = INT8_MIN;
	volatile int16_t x352 = INT16_MAX;
	volatile uint64_t t51 = 1LLU;

	t51 = ((x349*(x350*x351))%x352);

	if (t51 != 16LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x353 = INT16_MIN;
	volatile int16_t x354 = -1;
	int8_t x356 = INT8_MIN;

	t52 = ((x353*(x354*x355))%x356);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x365 = 3936075245307LL;
	volatile int16_t x367 = -831;
	uint64_t x368 = 1621266481LLU;
	volatile uint64_t t53 = 19LLU;

	t53 = ((x365*(x366*x367))%x368);

	if (t53 != 177241747LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x369 = INT64_MIN;
	uint64_t x370 = UINT64_MAX;
	static int64_t x371 = -1LL;
	uint64_t x372 = 19LLU;
	uint64_t t54 = 417323517LLU;

	t54 = ((x369*(x370*x371))%x372);

	if (t54 != 18LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x381 = 4;
	static volatile int32_t x382 = -1;
	uint64_t x383 = 106LLU;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t55 = 6958LLU;

	t55 = ((x381*(x382*x383))%x384);

	if (t55 != 32344LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = 513788U;
	static int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	uint32_t t56 = 15U;

	t56 = ((x393*(x394*x395))%x396);

	if (t56 != 2246802944U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x401 = UINT8_MAX;
	static int16_t x402 = 24;
	volatile int8_t x403 = INT8_MIN;
	volatile int64_t t57 = 161489140LL;

	t57 = ((x401*(x402*x403))%x404);

	if (t57 != -783360LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 2U;
	volatile int8_t x411 = INT8_MAX;
	static uint16_t x412 = UINT16_MAX;

	t58 = ((x409*(x410*x411))%x412);

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x417 = -1;
	int8_t x418 = -32;
	uint8_t x419 = 117U;
	int32_t x420 = 1;
	int32_t t59 = 2;

	t59 = ((x417*(x418*x419))%x420);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x442 = INT16_MIN;
	volatile int64_t x443 = 8483300545LL;
	static volatile int8_t x444 = INT8_MIN;
	static volatile int64_t t60 = 31856597095434399LL;

	t60 = ((x441*(x442*x443))%x444);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x445 = 1499505U;
	uint64_t x446 = 152922919578LLU;

	t61 = ((x445*(x446*x447))%x448);

	if (t61 != 1958LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x454 = 0U;
	uint16_t x455 = 12500U;
	static int64_t x456 = INT64_MIN;
	volatile int64_t t62 = -1643791832111069LL;

	t62 = ((x453*(x454*x455))%x456);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x457 = -1;
	uint64_t x460 = 7010421460192189LLU;
	uint64_t t63 = 2219946631138LLU;

	t63 = ((x457*(x458*x459))%x460);

	if (t63 != 1990716537796069LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x469 = INT32_MIN;
	uint16_t x470 = 41U;
	uint64_t x471 = UINT64_MAX;
	uint64_t t64 = 1916453750725509LLU;

	t64 = ((x469*(x470*x471))%x472);

	if (t64 != 88046829568LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x473 = 0;
	static uint8_t x474 = 2U;
	int32_t t65 = 465599;

	t65 = ((x473*(x474*x475))%x476);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x477 = 3U;
	int8_t x478 = -1;
	int16_t x480 = INT16_MAX;
	volatile int32_t t66 = 178;

	t66 = ((x477*(x478*x479))%x480);

	if (t66 != -150) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x481 = INT8_MIN;
	int64_t x483 = -1LL;
	int64_t x484 = -380141822496565145LL;
	volatile int64_t t67 = 2390LL;

	t67 = ((x481*(x482*x483))%x484);

	if (t67 != 838400LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x485 = INT16_MAX;
	uint32_t x486 = 4005863U;
	uint16_t x488 = 32U;
	volatile uint32_t t68 = 300367U;

	t68 = ((x485*(x486*x487))%x488);

	if (t68 != 11U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x489 = -1;
	static int16_t x490 = 305;
	int32_t x491 = -1;
	int16_t x492 = INT16_MAX;
	volatile int32_t t69 = 3509248;

	t69 = ((x489*(x490*x491))%x492);

	if (t69 != 305) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x493 = INT32_MAX;
	volatile uint64_t x494 = 2663785956656648LLU;
	static int16_t x496 = -1;
	volatile uint64_t t70 = 917828241LLU;

	t70 = ((x493*(x494*x495))%x496);

	if (t70 != 5826431615725616648LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x497 = -3258;
	int8_t x498 = -1;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x497*(x498*x499))%x500);

	if (t71 != -23814) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x501 = INT8_MIN;
	int16_t x503 = INT16_MIN;

	t72 = ((x501*(x502*x503))%x504);

	if (t72 != 184549376U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MIN;
	volatile uint64_t x507 = 24027027357LLU;
	int64_t x508 = INT64_MIN;
	static volatile uint64_t t73 = 19LLU;

	t73 = ((x505*(x506*x507))%x508);

	if (t73 != 100776656951574528LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x517 = -1LL;
	static int64_t x518 = -528564577212LL;
	int8_t x519 = -1;
	static uint16_t x520 = UINT16_MAX;
	int64_t t74 = -493578334942339LL;

	t74 = ((x517*(x518*x519))%x520);

	if (t74 != -29982LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x525 = -113;
	volatile int8_t x527 = INT8_MIN;
	volatile int32_t x528 = INT32_MIN;
	int32_t t75 = -238;

	t75 = ((x525*(x526*x527))%x528);

	if (t75 != -14464) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x541 = INT8_MIN;
	static uint8_t x542 = UINT8_MAX;
	volatile int8_t x543 = INT8_MAX;
	int16_t x544 = 1405;
	volatile int32_t t76 = 30744427;

	t76 = ((x541*(x542*x543))%x544);

	if (t76 != -530) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x561 = -1096931LL;
	static int64_t x563 = -1LL;
	volatile int64_t x564 = INT64_MIN;

	t77 = ((x561*(x562*x563))%x564);

	if (t77 != 36198723LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x566 = 1;
	int32_t x567 = -38327;
	int8_t x568 = INT8_MIN;
	volatile int32_t t78 = -229138;

	t78 = ((x565*(x566*x567))%x568);

	if (t78 != -73) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x577 = INT8_MIN;
	static volatile uint64_t x578 = UINT64_MAX;
	int16_t x579 = INT16_MIN;
	static int8_t x580 = INT8_MIN;
	uint64_t t79 = 6474330277293773LLU;

	t79 = ((x577*(x578*x579))%x580);

	if (t79 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x585 = -26;
	int64_t x586 = -1LL;
	static int32_t x587 = INT32_MIN;
	static uint16_t x588 = UINT16_MAX;
	volatile int64_t t80 = -2330798317926892LL;

	t80 = ((x585*(x586*x587))%x588);

	if (t80 != -13LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x593 = 0LL;
	uint16_t x595 = 253U;
	int64_t x596 = INT64_MIN;
	static volatile int64_t t81 = -2LL;

	t81 = ((x593*(x594*x595))%x596);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x601 = INT16_MAX;
	volatile int8_t x604 = INT8_MIN;
	volatile uint64_t t82 = 1986979303898955LLU;

	t82 = ((x601*(x602*x603))%x604);

	if (t82 != 18446637994023302646LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x607 = 7568079U;
	uint32_t t83 = 1U;

	t83 = ((x605*(x606*x607))%x608);

	if (t83 != 516U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x609 = INT64_MIN;
	int8_t x610 = 0;
	uint64_t x611 = 380LLU;
	int16_t x612 = INT16_MAX;
	volatile uint64_t t84 = 31955588791626941LLU;

	t84 = ((x609*(x610*x611))%x612);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x616 = UINT64_MAX;
	static uint64_t t85 = 64335LLU;

	t85 = ((x613*(x614*x615))%x616);

	if (t85 != 18446744073102083328LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x617 = INT16_MAX;
	uint64_t x618 = 7046LLU;
	int64_t x619 = INT64_MIN;
	uint32_t x620 = 213408204U;
	static uint64_t t86 = 3594281651004212LLU;

	t86 = ((x617*(x618*x619))%x620);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x623 = INT16_MAX;
	int8_t x624 = -37;
	static volatile uint32_t t87 = 962U;

	t87 = ((x621*(x622*x623))%x624);

	if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x629 = -93;
	volatile uint64_t x630 = 11872424LLU;
	int64_t x631 = INT64_MIN;
	volatile int32_t x632 = -1;
	volatile uint64_t t88 = 1775975374409478LLU;

	t88 = ((x629*(x630*x631))%x632);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x633 = 1233656357LL;
	int8_t x634 = -1;
	int16_t x635 = INT16_MAX;
	static volatile uint64_t x636 = 6392806643LLU;

	t89 = ((x633*(x634*x635))%x636);

	if (t89 != 3562544628LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x637 = 90;
	int16_t x639 = -4458;
	uint64_t t90 = 7630662067312680690LLU;

	t90 = ((x637*(x638*x639))%x640);

	if (t90 != 401220LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x642 = 1;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = UINT32_MAX;

	t91 = ((x641*(x642*x643))%x644);

	if (t91 != 4294929536U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x649 = 286630;
	static uint32_t x651 = 13502683U;
	volatile int64_t t92 = 74820038556295200LL;

	t92 = ((x649*(x650*x651))%x652);

	if (t92 != -40LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x653 = -1;
	volatile uint64_t x655 = 6699131519015528529LLU;
	uint16_t x656 = 18498U;
	volatile uint64_t t93 = 311345461287LLU;

	t93 = ((x653*(x654*x655))%x656);

	if (t93 != 6432LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x661 = -1;
	int8_t x662 = 33;
	int8_t x663 = -1;
	uint64_t x664 = 168654294LLU;

	t94 = ((x661*(x662*x663))%x664);

	if (t94 != 33LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x669 = 1U;
	int16_t x670 = 3;
	int8_t x671 = 30;
	static uint64_t t95 = 14687201LLU;

	t95 = ((x669*(x670*x671))%x672);

	if (t95 != 90LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x673 = 401140252U;
	volatile int16_t x674 = INT16_MIN;
	volatile uint32_t x675 = UINT32_MAX;
	volatile uint32_t t96 = 30647U;

	t96 = ((x673*(x674*x675))%x676);

	if (t96 != 29966U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x682 = UINT64_MAX;
	volatile uint64_t x683 = 2976LLU;
	static volatile uint64_t x684 = UINT64_MAX;
	static volatile uint64_t t97 = 962808772667756LLU;

	t97 = ((x681*(x682*x683))%x684);

	if (t97 != 6390911336448LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x685 = 18948869622LL;
	int8_t x686 = -2;
	uint16_t x687 = UINT16_MAX;
	int8_t x688 = -1;
	int64_t t98 = -7727297383771LL;

	t98 = ((x685*(x686*x687))%x688);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x689 = -1;
	volatile int8_t x690 = INT8_MIN;
	int16_t x691 = INT16_MIN;
	static int64_t x692 = -1LL;
	volatile int64_t t99 = -351838LL;

	t99 = ((x689*(x690*x691))%x692);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

