#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 169;
static uint64_t x25 = UINT64_MAX;
static int32_t x26 = INT32_MAX;
volatile int8_t x27 = INT8_MIN;
static int8_t x30 = -1;
static uint32_t t3 = 1168U;
static volatile int16_t x34 = INT16_MIN;
volatile int16_t x38 = INT16_MIN;
uint32_t x41 = 14802978U;
static volatile uint64_t x42 = 661LLU;
static int32_t x43 = -200;
int32_t x68 = 46958145;
static int32_t x72 = INT32_MIN;
int32_t t10 = -1636;
int32_t t12 = -276013809;
uint64_t x85 = UINT64_MAX;
static int8_t x86 = INT8_MAX;
volatile int32_t x90 = -12266;
static volatile uint8_t x91 = 13U;
volatile int32_t t18 = 164367458;
int8_t x145 = 2;
int16_t x148 = -1;
uint16_t x164 = UINT16_MAX;
int32_t x166 = INT32_MAX;
static uint8_t x167 = 3U;
int8_t x193 = INT8_MAX;
static int8_t x195 = -46;
static volatile int32_t t28 = 0;
static uint32_t x203 = 897U;
uint64_t x209 = 80348420064050230LLU;
volatile uint64_t t30 = 28919213LLU;
int32_t x227 = -1;
int32_t t32 = -202;
int16_t x230 = 131;
int64_t x235 = 15034LL;
static int64_t x236 = INT64_MIN;
volatile int8_t x243 = INT8_MAX;
int8_t x250 = 0;
static uint32_t x254 = 0U;
static int16_t x255 = 335;
volatile int32_t t40 = 71;
int64_t x289 = 17LL;
static int64_t x291 = INT64_MIN;
int8_t x292 = 1;
volatile int64_t t41 = -3684506855LL;
int8_t x293 = INT8_MAX;
static uint8_t x300 = 1U;
uint32_t x303 = 576U;
uint64_t x322 = 339469LLU;
static volatile uint32_t t47 = 562U;
uint16_t x333 = 29U;
static uint64_t x335 = 1242580838808LLU;
static int64_t x346 = INT64_MIN;
uint32_t x358 = 2034U;
volatile uint16_t x360 = 32021U;
static uint8_t x362 = UINT8_MAX;
int32_t x368 = INT32_MIN;
volatile int64_t t53 = INT64_MAX;
static int64_t x376 = -1LL;
volatile uint32_t t54 = 57U;
static uint32_t x393 = 239081351U;
int32_t x396 = -1;
volatile uint32_t x397 = 124U;
int16_t x399 = INT16_MAX;
volatile int64_t x402 = -10LL;
static volatile int32_t x403 = 1827;
int64_t x423 = -1LL;
static int32_t x426 = INT32_MIN;
int8_t x434 = INT8_MAX;
int8_t x435 = INT8_MIN;
uint32_t x438 = 59U;
int32_t x447 = INT32_MAX;
uint8_t x465 = 1U;
uint32_t x475 = 6U;
uint32_t x477 = 55341U;
int16_t x479 = INT16_MIN;
static uint16_t x518 = UINT16_MAX;
int8_t x521 = INT8_MAX;
int16_t x524 = INT16_MAX;
static int64_t x527 = 40280340783705096LL;
int32_t t76 = -3;
int32_t x532 = -1;
int32_t x533 = 43322;
uint32_t x534 = 700622767U;
volatile int32_t t78 = -64256453;
volatile uint8_t x539 = UINT8_MAX;
volatile uint64_t t80 = 6LLU;
static int32_t x550 = -7017;
volatile uint8_t x553 = 0U;
int8_t x556 = INT8_MIN;
volatile int8_t x557 = INT8_MAX;
static int16_t x558 = INT16_MIN;
uint16_t x568 = 659U;
volatile int16_t x587 = INT16_MIN;
int8_t x588 = -44;
uint64_t x598 = 10779LLU;
int64_t x606 = INT64_MIN;
int32_t x607 = -334;
static uint8_t x626 = 92U;
uint8_t x637 = 1U;
int64_t x643 = -121120459357LL;
uint32_t x647 = 1617U;
int64_t x656 = -1LL;
uint8_t x677 = 2U;
int32_t x680 = -1;


void f0(void) {
	int64_t x1 = 145024662471LL;
	static int8_t x2 = 0;
	int16_t x3 = -736;
	volatile int16_t x4 = INT16_MIN;
	int64_t t0 = 33877754318LL;

	t0 = (x1<<(x2==(x3^x4)));

	if (t0 != 145024662471LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x21 = 15U;
	static int32_t x22 = -1;
	uint32_t x23 = 618244U;
	int32_t x24 = 33;

	t1 = (x21<<(x22==(x23^x24)));

	if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x28 = -1;
	uint64_t t2 = UINT64_MAX;

	t2 = (x25<<(x26==(x27^x28)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 670068U;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MAX;

	t3 = (x29<<(x30==(x31^x32)));

	if (t3 != 670068U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 24U;
	uint8_t x35 = 57U;
	volatile int8_t x36 = -39;
	int32_t t4 = -59658;

	t4 = (x33<<(x34==(x35^x36)));

	if (t4 != 24) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x37 = 4;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;
	int32_t t5 = -31128553;

	t5 = (x37<<(x38==(x39^x40)));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x44 = 1;
	volatile uint32_t t6 = 3U;

	t6 = (x41<<(x42==(x43^x44)));

	if (t6 != 14802978U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x45 = 5;
	volatile uint8_t x46 = 14U;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -2;
	static int32_t t7 = -504;

	t7 = (x45<<(x46==(x47^x48)));

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x61 = INT16_MAX;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = 1;
	uint16_t x64 = 13334U;
	volatile int32_t t8 = 200;

	t8 = (x61<<(x62==(x63^x64)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 4414U;
	static int32_t x66 = -3087;
	uint64_t x67 = 3963251096LLU;
	int32_t t9 = 308400;

	t9 = (x65<<(x66==(x67^x68)));

	if (t9 != 4414) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x69 = 13798U;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = 97425;

	t10 = (x69<<(x70==(x71^x72)));

	if (t10 != 13798) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x73 = 1U;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 15U;
	int32_t t11 = 26047;

	t11 = (x73<<(x74==(x75^x76)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 187U;
	uint16_t x78 = UINT16_MAX;
	static volatile int8_t x79 = -1;
	int32_t x80 = INT32_MIN;

	t12 = (x77<<(x78==(x79^x80)));

	if (t12 != 187) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = UINT8_MAX;
	uint32_t x82 = 29791252U;
	int16_t x83 = -1;
	static int16_t x84 = 5;
	static int32_t t13 = -13002;

	t13 = (x81<<(x82==(x83^x84)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x87 = INT64_MIN;
	uint32_t x88 = 3196U;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x85<<(x86==(x87^x88)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t15 = 1133423;

	t15 = (x89<<(x90==(x91^x92)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = 25497U;
	volatile int8_t x95 = -1;
	uint32_t x96 = 1U;
	volatile int32_t t16 = -2963759;

	t16 = (x93<<(x94==(x95^x96)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x113 = 31820U;
	static uint16_t x114 = 3277U;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 671LLU;
	volatile int32_t t17 = -14850648;

	t17 = (x113<<(x114==(x115^x116)));

	if (t17 != 31820) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x121 = 4U;
	int8_t x122 = -1;
	volatile int64_t x123 = -1LL;
	int64_t x124 = -1LL;

	t18 = (x121<<(x122==(x123^x124)));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x133 = INT32_MAX;
	static uint8_t x134 = 0U;
	static int16_t x135 = INT16_MIN;
	uint32_t x136 = 42526222U;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x133<<(x134==(x135^x136)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x137 = 273978;
	int32_t x138 = -8;
	volatile int32_t x139 = INT32_MAX;
	volatile int32_t x140 = 44911260;
	volatile int32_t t20 = 124516245;

	t20 = (x137<<(x138==(x139^x140)));

	if (t20 != 273978) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x146 = INT64_MIN;
	volatile uint64_t x147 = UINT64_MAX;
	int32_t t21 = -125179;

	t21 = (x145<<(x146==(x147^x148)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x153 = UINT8_MAX;
	static uint32_t x154 = 2U;
	static int16_t x155 = 21;
	static int64_t x156 = INT64_MIN;
	int32_t t22 = 391;

	t22 = (x153<<(x154==(x155^x156)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x161 = UINT32_MAX;
	volatile uint32_t x162 = 521784866U;
	int16_t x163 = -28;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x161<<(x162==(x163^x164)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x165 = UINT64_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x165<<(x166==(x167^x168)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x173 = UINT64_MAX;
	volatile int8_t x174 = INT8_MAX;
	uint8_t x175 = 3U;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x173<<(x174==(x175^x176)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x177 = INT32_MAX;
	volatile int64_t x178 = -7519579LL;
	static uint8_t x179 = 3U;
	int16_t x180 = INT16_MIN;
	int32_t t26 = INT32_MAX;

	t26 = (x177<<(x178==(x179^x180)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = 34U;
	uint16_t x188 = UINT16_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x185<<(x186==(x187^x188)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x194 = 47240191U;
	static uint8_t x196 = UINT8_MAX;

	t28 = (x193<<(x194==(x195^x196)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x201 = 4U;
	uint16_t x202 = 0U;
	int32_t x204 = -327636;
	volatile int32_t t29 = -120718363;

	t29 = (x201<<(x202==(x203^x204)));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	volatile uint64_t x212 = UINT64_MAX;

	t30 = (x209<<(x210==(x211^x212)));

	if (t30 != 80348420064050230LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x221 = 119188030764LLU;
	volatile uint32_t x222 = 2949U;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = -1680047253380089LL;
	uint64_t t31 = 6954LLU;

	t31 = (x221<<(x222==(x223^x224)));

	if (t31 != 119188030764LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x225 = 0;
	uint8_t x226 = 6U;
	int16_t x228 = -16191;

	t32 = (x225<<(x226==(x227^x228)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x229 = 2;
	volatile int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	static volatile int32_t t33 = -488;

	t33 = (x229<<(x230==(x231^x232)));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x233 = 3;
	volatile int16_t x234 = 505;
	volatile int32_t t34 = -3938150;

	t34 = (x233<<(x234==(x235^x236)));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x237 = 0U;
	uint64_t x238 = 73921LLU;
	int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t35 = 2;

	t35 = (x237<<(x238==(x239^x240)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = 2106;
	static int32_t x244 = INT32_MIN;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x241<<(x242==(x243^x244)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x249 = 401439311LLU;
	uint8_t x251 = 4U;
	int8_t x252 = -1;
	static uint64_t t37 = 945114LLU;

	t37 = (x249<<(x250==(x251^x252)));

	if (t37 != 401439311LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x253 = 22034262658400LLU;
	uint64_t x256 = 869710840663856LLU;
	static uint64_t t38 = 11640011601LLU;

	t38 = (x253<<(x254==(x255^x256)));

	if (t38 != 22034262658400LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x257 = 29880U;
	int16_t x258 = INT16_MIN;
	static volatile int16_t x259 = INT16_MIN;
	int32_t x260 = -234555;
	volatile uint32_t t39 = 16768081U;

	t39 = (x257<<(x258==(x259^x260)));

	if (t39 != 29880U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = -27;
	volatile int64_t x280 = 30558180421LL;

	t40 = (x277<<(x278==(x279^x280)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x290 = INT64_MIN;

	t41 = (x289<<(x290==(x291^x292)));

	if (t41 != 17LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x294 = INT8_MIN;
	static int32_t x295 = -43834;
	static int8_t x296 = 0;
	int32_t t42 = -135;

	t42 = (x293<<(x294==(x295^x296)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x297 = 18U;
	volatile uint32_t x298 = 19703458U;
	volatile int8_t x299 = INT8_MIN;
	volatile int32_t t43 = -249043;

	t43 = (x297<<(x298==(x299^x300)));

	if (t43 != 18) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = INT32_MAX;
	static uint8_t x304 = 4U;
	int32_t t44 = 1935;

	t44 = (x301<<(x302==(x303^x304)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x313 = 14U;
	int16_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	static int16_t x316 = INT16_MIN;
	static volatile int32_t t45 = -2;

	t45 = (x313<<(x314==(x315^x316)));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x317 = 7503U;
	volatile int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	uint64_t x320 = 115LLU;
	volatile int32_t t46 = -1;

	t46 = (x317<<(x318==(x319^x320)));

	if (t46 != 7503) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x321 = 66866818U;
	volatile uint64_t x323 = 157LLU;
	uint8_t x324 = UINT8_MAX;

	t47 = (x321<<(x322==(x323^x324)));

	if (t47 != 66866818U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x334 = 1U;
	uint16_t x336 = UINT16_MAX;
	int32_t t48 = -27;

	t48 = (x333<<(x334==(x335^x336)));

	if (t48 != 29) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x345 = UINT8_MAX;
	volatile int32_t x347 = INT32_MAX;
	static volatile int32_t x348 = INT32_MAX;
	volatile int32_t t49 = -737;

	t49 = (x345<<(x346==(x347^x348)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x349 = 8845U;
	int32_t x350 = 267792743;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MAX;
	volatile int32_t t50 = 8;

	t50 = (x349<<(x350==(x351^x352)));

	if (t50 != 8845) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int8_t x359 = INT8_MAX;
	volatile int32_t t51 = -5051;

	t51 = (x357<<(x358==(x359^x360)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint16_t x363 = 70U;
	uint32_t x364 = 904U;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x361<<(x362==(x363^x364)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x365 = INT64_MAX;
	int64_t x366 = -960360813511114094LL;
	int16_t x367 = INT16_MIN;

	t53 = (x365<<(x366==(x367^x368)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x373 = 198973049U;
	volatile int32_t x374 = INT32_MIN;
	uint16_t x375 = UINT16_MAX;

	t54 = (x373<<(x374==(x375^x376)));

	if (t54 != 198973049U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -19124700269LL;
	static int8_t x383 = 32;
	volatile int32_t x384 = -1;
	static volatile int32_t t55 = -13229;

	t55 = (x381<<(x382==(x383^x384)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x394 = 14;
	uint8_t x395 = 8U;
	volatile uint32_t t56 = 2042730U;

	t56 = (x393<<(x394==(x395^x396)));

	if (t56 != 239081351U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x398 = INT64_MAX;
	int16_t x400 = INT16_MAX;
	uint32_t t57 = 475U;

	t57 = (x397<<(x398==(x399^x400)));

	if (t57 != 124U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x401 = INT8_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t58 = -7235;

	t58 = (x401<<(x402==(x403^x404)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x405 = 1U;
	int8_t x406 = INT8_MAX;
	int8_t x407 = -1;
	int64_t x408 = -6629442397695089LL;
	volatile int32_t t59 = -306;

	t59 = (x405<<(x406==(x407^x408)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x421 = 0;
	int16_t x422 = INT16_MIN;
	int32_t x424 = -1;
	volatile int32_t t60 = -3;

	t60 = (x421<<(x422==(x423^x424)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x425 = 2U;
	uint64_t x427 = 7283810313606885864LLU;
	int8_t x428 = INT8_MIN;
	int32_t t61 = -893423;

	t61 = (x425<<(x426==(x427^x428)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x433 = INT32_MAX;
	uint8_t x436 = UINT8_MAX;
	static int32_t t62 = INT32_MAX;

	t62 = (x433<<(x434==(x435^x436)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x437 = 22U;
	static int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	static int32_t t63 = -57222;

	t63 = (x437<<(x438==(x439^x440)));

	if (t63 != 22) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x445 = 0;
	int16_t x446 = INT16_MAX;
	int16_t x448 = 0;
	volatile int32_t t64 = 6;

	t64 = (x445<<(x446==(x447^x448)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x449 = INT32_MAX;
	int32_t x450 = -61031;
	uint16_t x451 = 5U;
	uint64_t x452 = 13787LLU;
	volatile int32_t t65 = INT32_MAX;

	t65 = (x449<<(x450==(x451^x452)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x457 = INT8_MAX;
	static int32_t x458 = INT32_MIN;
	volatile uint32_t x459 = UINT32_MAX;
	uint64_t x460 = UINT64_MAX;
	int32_t t66 = 726617;

	t66 = (x457<<(x458==(x459^x460)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x466 = INT8_MAX;
	int8_t x467 = -37;
	int16_t x468 = 176;
	volatile int32_t t67 = 0;

	t67 = (x465<<(x466==(x467^x468)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x473 = UINT64_MAX;
	static int8_t x474 = INT8_MAX;
	uint8_t x476 = 55U;
	uint64_t t68 = UINT64_MAX;

	t68 = (x473<<(x474==(x475^x476)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x478 = INT16_MAX;
	int16_t x480 = 6;
	static uint32_t t69 = 6U;

	t69 = (x477<<(x478==(x479^x480)));

	if (t69 != 55341U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x481 = UINT64_MAX;
	uint64_t x482 = 11315840LLU;
	volatile uint64_t x483 = 1504600216230801LLU;
	int16_t x484 = INT16_MIN;
	uint64_t t70 = UINT64_MAX;

	t70 = (x481<<(x482==(x483^x484)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x485 = 12U;
	int64_t x486 = INT64_MIN;
	uint8_t x487 = 40U;
	int16_t x488 = INT16_MIN;
	uint32_t t71 = 2U;

	t71 = (x485<<(x486==(x487^x488)));

	if (t71 != 12U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x493 = 30394014LLU;
	int32_t x494 = -1;
	volatile uint32_t x495 = 2057397876U;
	static int64_t x496 = INT64_MAX;
	uint64_t t72 = 439600019484454830LLU;

	t72 = (x493<<(x494==(x495^x496)));

	if (t72 != 30394014LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x505 = 11LLU;
	uint16_t x506 = 32363U;
	int64_t x507 = INT64_MIN;
	volatile uint16_t x508 = 12U;
	volatile uint64_t t73 = 2249784925258180156LLU;

	t73 = (x505<<(x506==(x507^x508)));

	if (t73 != 11LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x517 = 44015U;
	volatile uint8_t x519 = 16U;
	int32_t x520 = INT32_MAX;
	static volatile uint32_t t74 = 5874U;

	t74 = (x517<<(x518==(x519^x520)));

	if (t74 != 44015U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x522 = UINT16_MAX;
	uint16_t x523 = UINT16_MAX;
	static volatile int32_t t75 = 1890943;

	t75 = (x521<<(x522==(x523^x524)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x525 = UINT8_MAX;
	int8_t x526 = -1;
	int32_t x528 = INT32_MIN;

	t76 = (x525<<(x526==(x527^x528)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x529 = INT8_MAX;
	uint64_t x530 = 4691220264342171LLU;
	int16_t x531 = 22;
	static int32_t t77 = 613;

	t77 = (x529<<(x530==(x531^x532)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x535 = INT16_MIN;
	uint64_t x536 = 436148LLU;

	t78 = (x533<<(x534==(x535^x536)));

	if (t78 != 43322) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x537 = 25U;
	static int32_t x538 = 477;
	uint16_t x540 = 1U;
	static volatile int32_t t79 = 17459154;

	t79 = (x537<<(x538==(x539^x540)));

	if (t79 != 25) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x541 = 46101152465176LLU;
	uint8_t x542 = 1U;
	int8_t x543 = -42;
	uint16_t x544 = UINT16_MAX;

	t80 = (x541<<(x542==(x543^x544)));

	if (t80 != 46101152465176LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x545 = 1;
	uint32_t x546 = 2648U;
	int32_t x547 = 128630340;
	int16_t x548 = INT16_MIN;
	static int32_t t81 = -2019208;

	t81 = (x545<<(x546==(x547^x548)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x549 = INT32_MAX;
	int64_t x551 = -1LL;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x549<<(x550==(x551^x552)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x554 = 503U;
	static int32_t x555 = INT32_MIN;
	int32_t t83 = 983;

	t83 = (x553<<(x554==(x555^x556)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x559 = INT8_MIN;
	int16_t x560 = 456;
	volatile int32_t t84 = 133855;

	t84 = (x557<<(x558==(x559^x560)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x565 = 62;
	int8_t x566 = -1;
	static uint8_t x567 = UINT8_MAX;
	volatile int32_t t85 = 31;

	t85 = (x565<<(x566==(x567^x568)));

	if (t85 != 62) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x577 = INT64_MAX;
	volatile int8_t x578 = INT8_MIN;
	uint8_t x579 = 87U;
	static volatile int16_t x580 = INT16_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x577<<(x578==(x579^x580)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x585 = INT32_MAX;
	int32_t x586 = 8768;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x585<<(x586==(x587^x588)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x597 = INT32_MAX;
	volatile int64_t x599 = 777968LL;
	int8_t x600 = -35;
	int32_t t88 = INT32_MAX;

	t88 = (x597<<(x598==(x599^x600)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x605 = 75U;
	int16_t x608 = -1;
	static volatile int32_t t89 = -363068969;

	t89 = (x605<<(x606==(x607^x608)));

	if (t89 != 75) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x617 = INT8_MAX;
	static int32_t x618 = 1430294;
	static uint32_t x619 = UINT32_MAX;
	int16_t x620 = INT16_MAX;
	int32_t t90 = -436;

	t90 = (x617<<(x618==(x619^x620)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x625 = UINT64_MAX;
	volatile uint64_t x627 = UINT64_MAX;
	uint32_t x628 = UINT32_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x625<<(x626==(x627^x628)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MAX;
	uint16_t x640 = 28202U;
	int32_t t92 = 473055;

	t92 = (x637<<(x638==(x639^x640)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x641 = 100U;
	uint64_t x642 = 52134348727874858LLU;
	uint64_t x644 = UINT64_MAX;
	int32_t t93 = -2;

	t93 = (x641<<(x642==(x643^x644)));

	if (t93 != 100) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x645 = 10177525635LL;
	uint8_t x646 = 104U;
	static volatile int16_t x648 = 1;
	volatile int64_t t94 = -1145LL;

	t94 = (x645<<(x646==(x647^x648)));

	if (t94 != 10177525635LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x649 = 0;
	volatile int8_t x650 = INT8_MAX;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MAX;
	int32_t t95 = 6961753;

	t95 = (x649<<(x650==(x651^x652)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x653 = 102193837;
	int16_t x654 = INT16_MIN;
	int16_t x655 = -1;
	static int32_t t96 = 3521;

	t96 = (x653<<(x654==(x655^x656)));

	if (t96 != 102193837) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x661 = INT32_MAX;
	int64_t x662 = INT64_MIN;
	uint32_t x663 = 107329U;
	uint32_t x664 = UINT32_MAX;
	static int32_t t97 = INT32_MAX;

	t97 = (x661<<(x662==(x663^x664)));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x678 = 24;
	int64_t x679 = INT64_MIN;
	volatile int32_t t98 = 234089;

	t98 = (x677<<(x678==(x679^x680)));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x681 = 0;
	uint8_t x682 = 15U;
	volatile int8_t x683 = -1;
	volatile int16_t x684 = INT16_MIN;
	static int32_t t99 = -36;

	t99 = (x681<<(x682==(x683^x684)));

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

