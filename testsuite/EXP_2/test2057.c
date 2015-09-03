#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
int8_t x9 = INT8_MIN;
int32_t x14 = INT32_MIN;
int64_t x16 = INT64_MIN;
int16_t x17 = INT16_MAX;
volatile int16_t x20 = INT16_MIN;
uint64_t x25 = UINT64_MAX;
volatile uint64_t t4 = 11836990LLU;
uint64_t t9 = 329741686061LLU;
uint8_t x54 = UINT8_MAX;
volatile uint64_t t10 = 2LLU;
volatile uint64_t x67 = UINT64_MAX;
int8_t x68 = 25;
volatile uint64_t t11 = 44086955617LLU;
int16_t x69 = 1104;
int16_t x77 = INT16_MAX;
int8_t x83 = INT8_MIN;
uint8_t x91 = 7U;
static int8_t x92 = INT8_MIN;
int64_t x98 = -1LL;
static int16_t x99 = 101;
int16_t x101 = INT16_MIN;
int64_t t17 = 7985545398605251LL;
int8_t x110 = INT8_MAX;
volatile int64_t x114 = -23LL;
volatile int64_t x146 = -1LL;
int16_t x147 = INT16_MIN;
int8_t x153 = -1;
uint64_t t23 = 97940293LLU;
static int16_t x157 = 32;
volatile int32_t x158 = -8148441;
volatile int32_t x162 = INT32_MAX;
uint32_t x169 = 61018U;
int16_t x170 = INT16_MIN;
int8_t x172 = INT8_MIN;
static uint64_t x196 = 14580709LLU;
int16_t x199 = -6;
int8_t x200 = INT8_MIN;
volatile uint64_t t30 = 162867LLU;
static int8_t x201 = INT8_MAX;
volatile uint16_t x218 = 873U;
uint32_t x220 = 2107628U;
uint32_t x224 = 38U;
int8_t x225 = 2;
static int16_t x229 = 2;
uint32_t x230 = 655077U;
uint64_t x246 = 29LLU;
uint32_t x254 = UINT32_MAX;
int64_t x265 = 4858941LL;
int16_t x273 = INT16_MIN;
int32_t x280 = 8035245;
uint64_t t44 = 460192LLU;
uint64_t t45 = 244285671941LLU;
uint64_t t47 = 13189LLU;
static int16_t x298 = INT16_MAX;
int64_t x305 = -1478934LL;
int64_t t50 = 0LL;
static int32_t x324 = INT32_MAX;
volatile uint32_t t53 = 9410U;
int64_t x325 = INT64_MAX;
uint64_t t54 = 2515943LLU;
uint32_t x330 = UINT32_MAX;
int8_t x332 = -1;
int16_t x337 = INT16_MIN;
int8_t x345 = INT8_MAX;
int16_t x350 = 0;
volatile int32_t t59 = 2041734;
volatile uint8_t x353 = 126U;
uint64_t t60 = 179261686LLU;
volatile int8_t x361 = INT8_MAX;
static int8_t x364 = INT8_MIN;
uint64_t x380 = 491559505594005512LLU;
uint64_t x385 = 0LLU;
uint16_t x405 = 271U;
static uint16_t x407 = 62U;
uint32_t x417 = 5545464U;
uint32_t x418 = 399500U;
int32_t x419 = INT32_MIN;
volatile uint64_t t72 = 139006886869697LLU;
int8_t x422 = -1;
uint64_t x429 = 13206LLU;
uint64_t t74 = 12492LLU;
int32_t x433 = -1;
int16_t x434 = -7;
int32_t x445 = 10;
uint16_t x451 = UINT16_MAX;
volatile uint32_t t78 = 74U;
uint64_t x457 = 168799LLU;
uint16_t x460 = 2U;
static int8_t x470 = 61;
volatile int32_t x477 = INT32_MAX;
static uint8_t x480 = UINT8_MAX;
int64_t t82 = 1761954208063217202LL;
volatile uint32_t x487 = UINT32_MAX;
volatile int16_t x501 = INT16_MIN;
volatile uint32_t x502 = UINT32_MAX;
volatile uint32_t t85 = 14264252U;
int16_t x506 = INT16_MAX;
uint64_t x509 = 422551LLU;
static volatile uint8_t x515 = 76U;
int8_t x533 = 15;
uint64_t x535 = UINT64_MAX;
uint64_t x537 = 9137100LLU;
uint32_t x561 = 8776656U;
static uint8_t x582 = 1U;
static int64_t t97 = 8885900485272631LL;
static int32_t x592 = INT32_MAX;
volatile uint64_t x594 = 4095859824456LLU;
static uint64_t x596 = 79084742596LLU;
volatile uint64_t t99 = 4128590LLU;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x7 = INT8_MIN;
	static volatile uint64_t x8 = UINT64_MAX;
	uint64_t t0 = 1608637430LLU;

	t0 = ((x5*(x6^x7))*x8);

	if (t0 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	int64_t x12 = 58618912389LL;
	volatile int64_t t1 = 10882268191693LL;

	t1 = ((x9*(x10^x11))*x12);

	if (t1 != 491731077417664512LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	static uint8_t x15 = UINT8_MAX;
	static volatile uint64_t t2 = 87LLU;

	t2 = ((x13*(x14^x15))*x16);

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -17359;
	static volatile uint64_t x19 = UINT64_MAX;
	static uint64_t t3 = 1LLU;

	t3 = ((x17*(x18^x19))*x20);

	if (t3 != 18446725436267757568LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = INT32_MIN;
	static uint32_t x27 = UINT32_MAX;
	static int8_t x28 = INT8_MIN;

	t4 = ((x25*(x26^x27))*x28);

	if (t4 != 274877906816LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int8_t x30 = -1;
	uint32_t x31 = 335914823U;
	uint8_t x32 = 40U;
	volatile uint32_t t5 = 521013870U;

	t5 = ((x29*(x30^x31))*x32);

	if (t5 != 1052697408U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = -141262623;
	static volatile uint64_t x34 = UINT64_MAX;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1LL;
	uint64_t t6 = 1425507573257LLU;

	t6 = ((x33*(x34^x35))*x36);

	if (t6 != 18446739444815921152LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	static int16_t x42 = -1;
	volatile uint16_t x43 = 0U;
	uint32_t x44 = 1906732U;
	volatile uint32_t t7 = 544067155U;

	t7 = ((x41*(x42^x43))*x44);

	if (t7 != 2350252032U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 133820989757LLU;
	static uint16_t x46 = 17U;
	int16_t x47 = -4;
	volatile int8_t x48 = INT8_MAX;
	uint64_t t8 = 134057213141LLU;

	t8 = ((x45*(x46^x47))*x48);

	if (t8 != 18446421163661267975LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = 1319461993534LL;
	int64_t x50 = -3LL;
	uint64_t x51 = 773LLU;
	uint64_t x52 = 3LLU;

	t9 = ((x49*(x50^x51))*x52);

	if (t9 != 18443672366188604464LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	static uint64_t x55 = 9322234201323LLU;
	uint16_t x56 = UINT16_MAX;

	t10 = ((x53*(x54^x55))*x56);

	if (t10 != 6437022634631840788LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = 9;
	static uint8_t x66 = 68U;

	t11 = ((x65*(x66^x67))*x68);

	if (t11 != 18446744073709536091LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x70 = 263398078U;
	volatile int8_t x71 = INT8_MAX;
	static int32_t x72 = -1032523;
	volatile uint32_t t12 = 18251U;

	t12 = ((x69*(x70^x71))*x72);

	if (t12 != 167442576U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x78 = INT16_MIN;
	uint8_t x79 = 1U;
	uint64_t x80 = 0LLU;
	uint64_t t13 = 62282LLU;

	t13 = ((x77*(x78^x79))*x80);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x81 = -23;
	int16_t x82 = INT16_MIN;
	volatile uint8_t x84 = 1U;
	int32_t t14 = 713461;

	t14 = ((x81*(x82^x83))*x84);

	if (t14 != -750720) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -1;
	uint64_t t15 = 42096784851557LLU;

	t15 = ((x89*(x90^x91))*x92);

	if (t15 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = INT16_MIN;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t16 = 49736673400LLU;

	t16 = ((x97*(x98^x99))*x100);

	if (t16 != 18446744073706209280LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = -12LL;
	volatile int32_t x104 = -60388;

	t17 = ((x101*(x102^x103))*x104);

	if (t17 != -8498855425034813440LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = 0;
	int8_t x111 = INT8_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t18 = 996;

	t18 = ((x109*(x110^x111))*x112);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x113 = 2U;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = UINT8_MAX;
	uint64_t t19 = 39146224457251584LLU;

	t19 = ((x113*(x114^x115))*x116);

	if (t19 != 11220LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = 5930722015341LLU;
	static uint32_t x123 = 8173U;
	uint8_t x124 = 47U;
	uint64_t t20 = 8372816893032LLU;

	t20 = ((x121*(x122^x123))*x124);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x141 = 16956335LLU;
	int16_t x142 = 3;
	static int64_t x143 = -1LL;
	volatile int32_t x144 = INT32_MIN;
	uint64_t t21 = 8334320425669624386LLU;

	t21 = ((x141*(x142^x143))*x144);

	if (t21 != 145653808570040320LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x145 = 3U;
	uint32_t x148 = UINT32_MAX;
	volatile int64_t t22 = -7947LL;

	t22 = ((x145*(x146^x147))*x148);

	if (t22 != 422199580065795LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x154 = INT32_MIN;
	static volatile uint64_t x155 = 24124598342525511LLU;
	static uint64_t x156 = 4521964LLU;

	t23 = ((x153*(x154^x155))*x156);

	if (t23 != 14967123808416673164LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x159 = 12030591U;
	uint8_t x160 = 2U;
	volatile uint32_t t24 = 586946795U;

	t24 = ((x157*(x158^x159))*x160);

	if (t24 != 3440252416U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x161 = 0U;
	int8_t x163 = INT8_MIN;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t25 = 3840;

	t25 = ((x161*(x162^x163))*x164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x171 = 0;
	static volatile uint32_t t26 = 16362U;

	t26 = ((x169*(x170^x171))*x172);

	if (t26 != 2524971008U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x177 = 91LLU;
	static uint8_t x178 = UINT8_MAX;
	uint64_t x179 = 445LLU;
	int32_t x180 = INT32_MIN;
	static volatile uint64_t t27 = 66661922829LLU;

	t27 = ((x177*(x178^x179))*x180);

	if (t27 != 18446681148143697920LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x189 = UINT8_MAX;
	int32_t x190 = -1;
	int16_t x191 = -4040;
	int64_t x192 = -1LL;
	volatile int64_t t28 = -8693LL;

	t28 = ((x189*(x190^x191))*x192);

	if (t28 != -1029945LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x194 = 7U;
	static int64_t x195 = 71591735LL;
	uint64_t t29 = 5665619LLU;

	t29 = ((x193*(x194^x195))*x196);

	if (t29 != 18445700215556776464LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x197 = -1;
	static uint64_t x198 = 9738535329332LLU;

	t30 = ((x197*(x198^x199))*x200);

	if (t30 != 18445497541187397376LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x202 = -14196221;
	static volatile uint64_t x203 = 92LLU;
	uint16_t x204 = 0U;
	uint64_t t31 = 3428867028741058571LLU;

	t31 = ((x201*(x202^x203))*x204);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	int32_t x212 = -1;
	int32_t t32 = 155208;

	t32 = ((x209*(x210^x211))*x212);

	if (t32 != 8323455) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x217 = 14U;
	uint64_t x219 = 1087575139181463LLU;
	volatile uint64_t t33 = 2343534LLU;

	t33 = ((x217*(x218^x219))*x220);

	if (t33 != 11965471997946719792LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x221 = 10539360488130387LLU;
	int64_t x222 = -271LL;
	int32_t x223 = 5175601;
	uint64_t t34 = 131565083663LLU;

	t34 = ((x221*(x222^x223))*x224);

	if (t34 != 3639167834411432832LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x226 = 34417343530LLU;
	int64_t x227 = -7LL;
	int32_t x228 = -2368;
	volatile uint64_t t35 = 8417040324159207LLU;

	t35 = ((x225*(x226^x227))*x228);

	if (t35 != 163000538972288LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x231 = UINT32_MAX;
	int32_t x232 = INT32_MIN;
	uint32_t t36 = 15U;

	t36 = ((x229*(x230^x231))*x232);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x247 = 48275536U;
	uint8_t x248 = 1U;
	static volatile uint64_t t37 = 47LLU;

	t37 = ((x245*(x246^x247))*x248);

	if (t37 != 3163737055155LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x249 = -1;
	int8_t x250 = -2;
	int8_t x251 = -1;
	int16_t x252 = -1;
	volatile int32_t t38 = -1;

	t38 = ((x249*(x250^x251))*x252);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = -1LL;
	int32_t x255 = 1;
	volatile int8_t x256 = INT8_MAX;
	int64_t t39 = -7LL;

	t39 = ((x253*(x254^x255))*x256);

	if (t39 != -545460846338LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = -272LL;
	uint8_t x259 = 0U;
	uint32_t x260 = 975355829U;
	volatile uint64_t t40 = 86174101848569LLU;

	t40 = ((x257*(x258^x259))*x260);

	if (t40 != 265296785488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x261 = UINT64_MAX;
	static int16_t x262 = INT16_MIN;
	uint16_t x263 = 97U;
	int32_t x264 = -1;
	uint64_t t41 = 1015847177LLU;

	t41 = ((x261*(x262^x263))*x264);

	if (t41 != 18446744073709518945LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x266 = -1LL;
	volatile uint32_t x267 = 186443U;
	static uint16_t x268 = 11U;
	volatile int64_t t42 = -1645284632237588LL;

	t42 = ((x265*(x266^x267))*x268);

	if (t42 != -9965124353844LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x274 = -1;
	int32_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile int64_t t43 = 44617333769457LL;

	t43 = ((x273*(x274^x275))*x276);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x277 = INT16_MIN;
	static uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;

	t44 = ((x277*(x278^x279))*x280);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x281 = 3428LLU;
	int8_t x282 = 20;
	uint64_t x283 = 712LLU;
	int8_t x284 = INT8_MIN;

	t45 = ((x281*(x282^x283))*x284);

	if (t45 != 18446744073388361728LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = 121U;
	uint16_t x291 = 1U;
	int16_t x292 = -1;
	int64_t t46 = 21699685LL;

	t46 = ((x289*(x290^x291))*x292);

	if (t46 != 120LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x293 = INT64_MIN;
	static uint64_t x294 = 263800710560167LLU;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 14U;

	t47 = ((x293*(x294^x295))*x296);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = 11221;
	uint8_t x299 = 5U;
	int32_t x300 = -1;
	int32_t t48 = -487828093;

	t48 = ((x297*(x298^x299))*x300);

	if (t48 != -367622402) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x301 = INT32_MAX;
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	static volatile int16_t x304 = -1;
	volatile int32_t t49 = -18;

	t49 = ((x301*(x302^x303))*x304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x306 = -1;
	uint8_t x307 = 2U;
	int32_t x308 = -1;

	t50 = ((x305*(x306^x307))*x308);

	if (t50 != -4436802LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x313 = INT16_MIN;
	static int8_t x314 = 23;
	volatile int8_t x315 = 13;
	int8_t x316 = -30;
	volatile int32_t t51 = -929019324;

	t51 = ((x313*(x314^x315))*x316);

	if (t51 != 25559040) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = INT16_MIN;
	volatile int64_t x318 = -3LL;
	int64_t x319 = 137264867LL;
	volatile int8_t x320 = INT8_MIN;
	volatile int64_t t52 = 98LL;

	t52 = ((x317*(x318^x319))*x320);

	if (t52 != -575730576523264LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -2;
	uint32_t x323 = 1415892U;

	t53 = ((x321*(x322^x323))*x324);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x326 = 1931449;
	static uint64_t x327 = 82192LLU;
	int64_t x328 = -1LL;

	t54 = ((x325*(x326^x327))*x328);

	if (t54 != 9223372036856625577LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = INT8_MAX;
	volatile int16_t x331 = -1;
	static volatile uint32_t t55 = 124U;

	t55 = ((x329*(x330^x331))*x332);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = INT8_MAX;
	uint64_t x334 = 464256383131LLU;
	uint8_t x335 = 1U;
	int8_t x336 = -25;
	volatile uint64_t t56 = 3632821670867423454LLU;

	t56 = ((x333*(x334^x335))*x336);

	if (t56 != 18445270059693113866LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x338 = 51535U;
	int8_t x339 = INT8_MIN;
	int32_t x340 = -1;
	uint32_t t57 = 3U;

	t57 = ((x337*(x338^x339))*x340);

	if (t57 != 2607251456U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x346 = 4643136LLU;
	int16_t x347 = -1;
	static uint64_t x348 = 3547828760672166342LLU;
	uint64_t t58 = 4853724264292LLU;

	t58 = ((x345*(x346^x347))*x348);

	if (t58 != 4850813870812431942LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = 27;
	int32_t x351 = -1;
	int16_t x352 = INT16_MAX;

	t59 = ((x349*(x350^x351))*x352);

	if (t59 != -884709) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = 94013190629LL;
	uint64_t x356 = 1319244924LLU;

	t60 = ((x353*(x354^x355))*x356);

	if (t60 != 2938460198156669648LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x362 = -1;
	int64_t x363 = -34087LL;
	volatile int64_t t61 = 191LL;

	t61 = ((x361*(x362^x363))*x364);

	if (t61 != -554102016LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x369 = 1U;
	static uint16_t x370 = 16274U;
	int8_t x371 = 1;
	uint64_t x372 = 6392427621875081819LLU;
	uint64_t t62 = 33487456052888LLU;

	t62 = ((x369*(x370^x371))*x372);

	if (t62 != 15569714368795041601LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = -2989;
	uint64_t x374 = 394167310516427450LLU;
	int64_t x375 = -1LL;
	int64_t x376 = INT64_MIN;
	uint64_t t63 = 0LLU;

	t63 = ((x373*(x374^x375))*x376);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile int16_t x378 = 0;
	int16_t x379 = INT16_MAX;
	static volatile uint64_t t64 = 124LLU;

	t64 = ((x377*(x378^x379))*x380);

	if (t64 != 17029812618294048776LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x381 = 317086332;
	volatile int16_t x382 = 2541;
	uint32_t x383 = 0U;
	int32_t x384 = INT32_MAX;
	volatile uint32_t t65 = 107U;

	t65 = ((x381*(x382^x383))*x384);

	if (t65 != 1737482036U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;
	volatile int64_t x388 = INT64_MAX;
	volatile uint64_t t66 = 2338842736LLU;

	t66 = ((x385*(x386^x387))*x388);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x393 = -567;
	static uint8_t x394 = UINT8_MAX;
	volatile uint16_t x395 = 8856U;
	static volatile uint64_t x396 = UINT64_MAX;
	uint64_t t67 = 1308961250499530421LLU;

	t67 = ((x393*(x394^x395))*x396);

	if (t67 != 4993569LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x397 = INT16_MAX;
	int16_t x398 = 1;
	uint64_t x399 = 1066666304LLU;
	volatile int64_t x400 = -999175509LL;
	uint64_t t68 = 3477273LLU;

	t68 = ((x397*(x398^x399))*x400);

	if (t68 != 15495619603535824789LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x401 = 1LLU;
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	uint64_t t69 = 12237LLU;

	t69 = ((x401*(x402^x403))*x404);

	if (t69 != 69821135847424LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x406 = -1;
	static int16_t x408 = -578;
	volatile int32_t t70 = 411;

	t70 = ((x405*(x406^x407))*x408);

	if (t70 != 9868194) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x409 = INT64_MAX;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 11LLU;
	static volatile uint16_t x412 = 339U;
	uint64_t t71 = 365897591LLU;

	t71 = ((x409*(x410^x411))*x412);

	if (t71 != 9223372764851728751LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x420 = 5636534877600564LLU;

	t72 = ((x417*(x418^x419))*x420);

	if (t72 != 7992984256092249216LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x421 = 14;
	static int8_t x423 = 6;
	static uint64_t x424 = 287337975484LLU;
	volatile uint64_t t73 = 140883LLU;

	t73 = ((x421*(x422^x423))*x424);

	if (t73 != 18446715914587954184LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;

	t74 = ((x429*(x430^x431))*x432);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x435 = INT8_MAX;
	static volatile int64_t x436 = -289282LL;
	int64_t t75 = -14743819637642LL;

	t75 = ((x433*(x434^x435))*x436);

	if (t75 != -35292404LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x441 = -1;
	static int32_t x442 = INT32_MAX;
	uint16_t x443 = UINT16_MAX;
	volatile int16_t x444 = -1;
	volatile int32_t t76 = 30662;

	t76 = ((x441*(x442^x443))*x444);

	if (t76 != 2147418112) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x446 = 2530;
	int64_t x447 = -2992LL;
	int32_t x448 = INT32_MIN;
	volatile int64_t t77 = -919332510LL;

	t77 = ((x445*(x446^x447))*x448);

	if (t77 != 12670153523200LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x449 = INT32_MIN;
	uint32_t x450 = 4113U;
	int8_t x452 = INT8_MIN;

	t78 = ((x449*(x450^x451))*x452);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x458 = INT32_MIN;
	uint32_t x459 = UINT32_MAX;
	volatile uint64_t t79 = 539960470LLU;

	t79 = ((x457*(x458^x459))*x460);

	if (t79 != 724986184259906LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x469 = INT16_MIN;
	uint64_t x471 = 113LLU;
	volatile uint8_t x472 = UINT8_MAX;
	volatile uint64_t t80 = 26708048248LLU;

	t80 = ((x469*(x470^x471))*x472);

	if (t80 != 18446744073074507776LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x473 = 1669628974532LLU;
	uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	int64_t x476 = -1LL;
	volatile uint64_t t81 = 8556783543641539610LLU;

	t81 = ((x473*(x474^x475))*x476);

	if (t81 != 54284646848958916LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x478 = 4252U;
	int64_t x479 = 271LL;

	t82 = ((x477*(x478^x479))*x480);

	if (t82 != 2463689876602515LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;
	volatile uint32_t t83 = 781642U;

	t83 = ((x485*(x486^x487))*x488);

	if (t83 != 1073725440U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x497 = 55U;
	static int32_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	int16_t x500 = -2;
	int32_t t84 = -118366456;

	t84 = ((x497*(x498^x499))*x500);

	if (t84 != 28160) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x503 = INT16_MIN;
	volatile int32_t x504 = -40963;

	t85 = ((x501*(x502^x503))*x504);

	if (t85 != 1878949888U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x505 = -1;
	int32_t x507 = INT32_MIN;
	static int64_t x508 = -1LL;
	int64_t t86 = -306LL;

	t86 = ((x505*(x506^x507))*x508);

	if (t86 != -2147450881LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x510 = INT8_MAX;
	static int64_t x511 = INT64_MIN;
	static int8_t x512 = -12;
	volatile uint64_t t87 = 4162012264371317086LLU;

	t87 = ((x509*(x510^x511))*x512);

	if (t87 != 18446744073065583892LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x513 = 1;
	int64_t x514 = 435LL;
	uint32_t x516 = UINT32_MAX;
	int64_t t88 = -5408609001LL;

	t88 = ((x513*(x514^x515))*x516);

	if (t88 != 2194728287745LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x529 = 1U;
	volatile uint8_t x530 = UINT8_MAX;
	volatile int32_t x531 = -9238;
	int8_t x532 = INT8_MAX;
	int32_t t89 = -147765;

	t89 = ((x529*(x530^x531))*x532);

	if (t89 != -1200277) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x534 = -1;
	int8_t x536 = INT8_MAX;
	volatile uint64_t t90 = 30271LLU;

	t90 = ((x533*(x534^x535))*x536);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x538 = 2953;
	uint64_t x539 = 11508412020781LLU;
	volatile int16_t x540 = 1;
	volatile uint64_t t91 = 16127446608LLU;

	t91 = ((x537*(x538^x539))*x540);

	if (t91 != 12919791095922143920LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x541 = 1683768008685LLU;
	int16_t x542 = INT16_MAX;
	uint32_t x543 = 7624689U;
	static uint16_t x544 = 15U;
	uint64_t t92 = 9064192617848LLU;

	t92 = ((x541*(x542^x543))*x544);

	if (t92 != 7796050798213802090LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x545 = 3U;
	uint32_t x546 = UINT32_MAX;
	volatile uint8_t x547 = 98U;
	int32_t x548 = -1;
	uint32_t t93 = 6U;

	t93 = ((x545*(x546^x547))*x548);

	if (t93 != 297U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x557 = INT64_MIN;
	static uint64_t x558 = UINT64_MAX;
	volatile uint8_t x559 = 1U;
	volatile int32_t x560 = -1;
	volatile uint64_t t94 = 1136318981068419LLU;

	t94 = ((x557*(x558^x559))*x560);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x562 = 1;
	uint64_t x563 = UINT64_MAX;
	volatile int16_t x564 = INT16_MIN;
	volatile uint64_t t95 = 3874345173LLU;

	t95 = ((x561*(x562^x563))*x564);

	if (t95 != 575186927616LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x573 = INT32_MIN;
	static volatile int16_t x574 = INT16_MAX;
	volatile uint32_t x575 = 413U;
	volatile int16_t x576 = -5;
	uint32_t t96 = 12297U;

	t96 = ((x573*(x574^x575))*x576);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x581 = -4564LL;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MAX;

	t97 = ((x581*(x582^x583))*x584);

	if (t97 != 18992670676LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x589 = -20;
	volatile uint64_t x590 = 15757351584646034LLU;
	static int32_t x591 = -1;
	volatile uint64_t t98 = 5932915036419LLU;

	t98 = ((x589*(x590^x591))*x592);

	if (t98 != 1849294100674427012LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x593 = 79652092LLU;
	int8_t x595 = 0;

	t99 = ((x593*(x594^x595))*x596);

	if (t99 != 17377518134148494208LLU) { NG(); } else { ; }
	
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

