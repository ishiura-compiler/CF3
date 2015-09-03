#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 4008U;
volatile int8_t x10 = INT8_MIN;
static uint32_t x11 = 1571U;
uint64_t x39 = 243515797877LLU;
uint32_t x45 = UINT32_MAX;
uint8_t x59 = UINT8_MAX;
volatile uint32_t t7 = 8331847U;
uint32_t x65 = 97184170U;
int32_t x67 = INT32_MIN;
uint64_t x78 = 32813LLU;
int8_t x80 = INT8_MIN;
volatile uint16_t x82 = UINT16_MAX;
int32_t t10 = -6;
int64_t x86 = INT64_MIN;
int64_t x87 = INT64_MIN;
int8_t x90 = INT8_MIN;
static uint32_t x93 = UINT32_MAX;
uint8_t x97 = 50U;
int16_t x99 = INT16_MAX;
int64_t x113 = INT64_MAX;
int64_t x160 = -55LL;
int64_t x161 = INT64_MAX;
int8_t x174 = 3;
volatile uint64_t x210 = 1239575354330364321LLU;
volatile int64_t x211 = -4519319564058146299LL;
volatile int64_t t25 = 4303228230LL;
int32_t x259 = INT32_MIN;
volatile int32_t t29 = -6779;
static int16_t x274 = 11624;
uint32_t x276 = 1117328925U;
uint16_t x278 = UINT16_MAX;
volatile int64_t x279 = 451032859LL;
int32_t t31 = -27;
uint64_t x293 = 8212419682347LLU;
uint32_t x295 = 447127908U;
int32_t x298 = INT32_MIN;
int32_t x300 = -1;
uint32_t x302 = 82490598U;
int16_t x305 = 11610;
uint64_t x318 = 1973471LLU;
int64_t x336 = -1LL;
int16_t x347 = 8414;
volatile int8_t x348 = 2;
volatile int32_t t43 = 919698475;
volatile uint32_t x361 = 20U;
volatile uint32_t t44 = 164349U;
uint64_t x366 = UINT64_MAX;
volatile int64_t x377 = INT64_MAX;
uint32_t x382 = 5784598U;
int32_t x383 = -782936;
int16_t x391 = INT16_MIN;
uint64_t x409 = 272067556746251LLU;
int32_t x424 = 343;
int32_t x448 = INT32_MIN;
int8_t x459 = -1;
static volatile uint64_t t58 = 41LLU;
int32_t x468 = INT32_MAX;
static uint8_t x471 = UINT8_MAX;
volatile uint32_t x473 = 19584123U;
uint32_t t61 = 3121308U;
volatile uint32_t x482 = UINT32_MAX;
uint16_t x483 = 6U;
static uint32_t x484 = UINT32_MAX;
int8_t x503 = -1;
volatile uint16_t x513 = UINT16_MAX;
static volatile uint16_t x514 = UINT16_MAX;
int8_t x515 = INT8_MIN;
int8_t x516 = INT8_MIN;
static volatile int32_t t65 = 3503168;
int16_t x528 = INT16_MAX;
uint8_t x539 = 1U;
int16_t x544 = 11;
static uint32_t t72 = 24157250U;
static volatile int64_t x578 = INT64_MIN;
static int64_t t75 = -1954828296875614163LL;
uint32_t t79 = 50U;
volatile uint8_t x641 = 71U;
volatile uint16_t x642 = 5U;
int32_t t80 = 1157;
volatile uint32_t x649 = 61514U;
uint64_t x654 = UINT64_MAX;
int8_t x678 = 0;
volatile uint16_t x687 = 1U;
int32_t x693 = 609789;
int32_t x704 = 7;
int32_t t89 = 712363000;
int32_t x709 = 1429968;
volatile uint32_t t92 = 976U;
int64_t x729 = 93921019449616590LL;
int32_t x738 = 17177;
int64_t t96 = -159LL;
int64_t x745 = INT64_MAX;
static int8_t x748 = INT8_MIN;
static int64_t t97 = 48202927170905713LL;
volatile uint8_t x753 = 38U;
int64_t t99 = -15LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile uint64_t x2 = 3770547356325012LLU;
	int16_t x3 = -2211;
	int16_t x4 = -1;
	volatile int32_t t0 = 146589;

	t0 = ((x1<<(x2==x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int64_t x6 = INT64_MIN;
	volatile uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 304855396517793LLU;

	t1 = ((x5<<(x6==x7))%x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4LLU;
	int8_t x12 = INT8_MIN;
	uint64_t t2 = 17458447915544LLU;

	t2 = ((x9<<(x10==x11))%x12);

	if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 1682LLU;
	int64_t x14 = INT64_MAX;
	int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 113651LLU;

	t3 = ((x13<<(x14==x15))%x16);

	if (t3 != 1682LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1856;
	static uint64_t x18 = 9691122384405323LLU;
	static uint8_t x19 = UINT8_MAX;
	uint64_t x20 = 23922LLU;
	volatile uint64_t t4 = 109331826LLU;

	t4 = ((x17<<(x18==x19))%x20);

	if (t4 != 1856LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 11U;
	int16_t x38 = -11;
	uint64_t x40 = UINT64_MAX;
	static uint64_t t5 = 440288330269LLU;

	t5 = ((x37<<(x38==x39))%x40);

	if (t5 != 11LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x46 = INT32_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 340726U;
	uint32_t t6 = 130816U;

	t6 = ((x45<<(x46==x47))%x48);

	if (t6 != 116065U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x57 = 646U;
	volatile uint16_t x58 = 24U;
	static uint32_t x60 = 162U;

	t7 = ((x57<<(x58==x59))%x60);

	if (t7 != 160U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x66 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	uint32_t t8 = 32336U;

	t8 = ((x65<<(x66==x67))%x68);

	if (t8 != 97184170U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x77 = 0;
	int8_t x79 = INT8_MAX;
	int32_t t9 = -7;

	t9 = ((x77<<(x78==x79))%x80);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = 0U;
	volatile uint16_t x83 = 1754U;
	int32_t x84 = -369499542;

	t10 = ((x81<<(x82==x83))%x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = 0;
	volatile uint64_t x88 = 2LLU;
	volatile uint64_t t11 = 16649787LLU;

	t11 = ((x85<<(x86==x87))%x88);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = 4U;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = UINT8_MAX;
	int32_t t12 = 15;

	t12 = ((x89<<(x90==x91))%x92);

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x94 = 26U;
	int64_t x95 = INT64_MIN;
	volatile int64_t x96 = INT64_MIN;
	int64_t t13 = 3204328LL;

	t13 = ((x93<<(x94==x95))%x96);

	if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x98 = -481;
	int16_t x100 = INT16_MAX;
	int32_t t14 = -90;

	t14 = ((x97<<(x98==x99))%x100);

	if (t14 != 50) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = 60U;
	static int16_t x102 = 1;
	volatile int32_t x103 = INT32_MIN;
	int64_t x104 = -1LL;
	static volatile int64_t t15 = 3958854917LL;

	t15 = ((x101<<(x102==x103))%x104);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x114 = INT16_MIN;
	uint16_t x115 = 34U;
	int16_t x116 = INT16_MIN;
	static int64_t t16 = 2605472143023046LL;

	t16 = ((x113<<(x114==x115))%x116);

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = 10795LLU;
	int64_t x122 = -1516184304606292295LL;
	uint16_t x123 = UINT16_MAX;
	static uint8_t x124 = 3U;
	static uint64_t t17 = 15364838712LLU;

	t17 = ((x121<<(x122==x123))%x124);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = 0;
	volatile int32_t x130 = -1;
	int8_t x131 = 11;
	int32_t x132 = -2;
	int32_t t18 = 700257;

	t18 = ((x129<<(x130==x131))%x132);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = 1505145903LL;
	static volatile int32_t x146 = INT32_MIN;
	int8_t x147 = -1;
	uint32_t x148 = 45283U;
	int64_t t19 = 30360LL;

	t19 = ((x145<<(x146==x147))%x148);

	if (t19 != 29549LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x157 = 347271LLU;
	int8_t x158 = -1;
	static uint8_t x159 = 4U;
	uint64_t t20 = 13588737050383380LLU;

	t20 = ((x157<<(x158==x159))%x160);

	if (t20 != 347271LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x162 = UINT16_MAX;
	volatile int64_t x163 = -1LL;
	static volatile int64_t x164 = -57LL;
	volatile int64_t t21 = 3106877LL;

	t21 = ((x161<<(x162==x163))%x164);

	if (t21 != 55LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = INT16_MAX;
	volatile int64_t x175 = -407172858LL;
	int32_t x176 = -45;
	volatile int32_t t22 = 12305929;

	t22 = ((x173<<(x174==x175))%x176);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x177 = 424U;
	int16_t x178 = INT16_MIN;
	volatile int8_t x179 = INT8_MAX;
	uint64_t x180 = 146LLU;
	static volatile uint64_t t23 = 103856098LLU;

	t23 = ((x177<<(x178==x179))%x180);

	if (t23 != 132LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x201 = INT16_MAX;
	int64_t x202 = 11979405169LL;
	volatile int8_t x203 = 3;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t24 = -62;

	t24 = ((x201<<(x202==x203))%x204);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x209 = 6264595700130LL;
	int8_t x212 = INT8_MIN;

	t25 = ((x209<<(x210==x211))%x212);

	if (t25 != 34LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x241 = 1123612975818907774LL;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 711533U;
	static int64_t t26 = 926634887717LL;

	t26 = ((x241<<(x242==x243))%x244);

	if (t26 != 529039LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x245 = 1668U;
	int8_t x246 = -3;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = -24;
	volatile uint32_t t27 = 2U;

	t27 = ((x245<<(x246==x247))%x248);

	if (t27 != 1668U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x257 = INT64_MAX;
	uint64_t x258 = 732366296454390LLU;
	volatile int16_t x260 = INT16_MAX;
	volatile int64_t t28 = -1678344689092LL;

	t28 = ((x257<<(x258==x259))%x260);

	if (t28 != 7LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x261 = 1U;
	uint32_t x262 = 171294715U;
	int32_t x263 = -316;
	int16_t x264 = INT16_MIN;

	t29 = ((x261<<(x262==x263))%x264);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x273 = INT64_MAX;
	int8_t x275 = 9;
	int64_t t30 = 702408077237754LL;

	t30 = ((x273<<(x274==x275))%x276);

	if (t30 != 641878582LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x277 = 0;
	static int32_t x280 = INT32_MIN;

	t31 = ((x277<<(x278==x279))%x280);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MAX;
	volatile int8_t x291 = -47;
	int8_t x292 = 2;
	static volatile int64_t t32 = -1LL;

	t32 = ((x289<<(x290==x291))%x292);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x294 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	uint64_t t33 = 106795437272860167LLU;

	t33 = ((x293<<(x294==x295))%x296);

	if (t33 != 442214307LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x297 = 304U;
	int16_t x299 = -1;
	volatile int32_t t34 = -64578;

	t34 = ((x297<<(x298==x299))%x300);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x301 = 312448451214276LLU;
	uint8_t x303 = 4U;
	static int16_t x304 = INT16_MAX;
	volatile uint64_t t35 = 1249921182LLU;

	t35 = ((x301<<(x302==x303))%x304);

	if (t35 != 4703LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x306 = 48U;
	static volatile int8_t x307 = -1;
	volatile uint32_t x308 = 435297353U;
	uint32_t t36 = 217U;

	t36 = ((x305<<(x306==x307))%x308);

	if (t36 != 11610U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x313 = 2446U;
	uint16_t x314 = 558U;
	uint64_t x315 = 323062687287LLU;
	static volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t37 = 2018731LLU;

	t37 = ((x313<<(x314==x315))%x316);

	if (t37 != 2446LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x317 = 4U;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t38 = -3;

	t38 = ((x317<<(x318==x319))%x320);

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x321 = 9098U;
	static uint32_t x322 = 6U;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	volatile int32_t t39 = 99945;

	t39 = ((x321<<(x322==x323))%x324);

	if (t39 != 9098) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = -7701;
	volatile uint32_t x327 = 0U;
	int8_t x328 = INT8_MIN;
	static volatile uint64_t t40 = 9676699017924748LLU;

	t40 = ((x325<<(x326==x327))%x328);

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = -64006920665LL;
	int64_t x331 = -1LL;
	int64_t x332 = -1LL;
	static uint64_t t41 = 2LLU;

	t41 = ((x329<<(x330==x331))%x332);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x333 = 1U;
	volatile int32_t x334 = -1;
	uint64_t x335 = 822396LLU;
	int64_t t42 = 1008704644870LL;

	t42 = ((x333<<(x334==x335))%x336);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int32_t x346 = INT32_MIN;

	t43 = ((x345<<(x346==x347))%x348);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x362 = 51LLU;
	uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = -967;

	t44 = ((x361<<(x362==x363))%x364);

	if (t44 != 20U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x365 = 2;
	uint16_t x367 = 3U;
	int16_t x368 = INT16_MIN;
	int32_t t45 = -122;

	t45 = ((x365<<(x366==x367))%x368);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x373 = 8380U;
	static int8_t x374 = 0;
	int64_t x375 = 326LL;
	uint16_t x376 = 7937U;
	int32_t t46 = -1224;

	t46 = ((x373<<(x374==x375))%x376);

	if (t46 != 443) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = 6;
	int8_t x380 = -1;
	volatile int64_t t47 = 1425724216LL;

	t47 = ((x377<<(x378==x379))%x380);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x381 = 13761U;
	uint8_t x384 = 126U;
	volatile int32_t t48 = 0;

	t48 = ((x381<<(x382==x383))%x384);

	if (t48 != 27) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x389 = 7U;
	int32_t x390 = 2019;
	int32_t x392 = INT32_MAX;
	volatile int32_t t49 = -13;

	t49 = ((x389<<(x390==x391))%x392);

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x397 = UINT32_MAX;
	static volatile int16_t x398 = 12663;
	static int64_t x399 = INT64_MIN;
	static volatile int8_t x400 = INT8_MIN;
	uint32_t t50 = 10114152U;

	t50 = ((x397<<(x398==x399))%x400);

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x410 = INT8_MAX;
	int16_t x411 = -2;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t51 = 35050880339849800LLU;

	t51 = ((x409<<(x410==x411))%x412);

	if (t51 != 86LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	int32_t t52 = 117708414;

	t52 = ((x421<<(x422==x423))%x424);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x437 = 0;
	int8_t x438 = 8;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = 356373U;
	static uint32_t t53 = 4015U;

	t53 = ((x437<<(x438==x439))%x440);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x445 = INT8_MAX;
	uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 15170999652117702LLU;
	volatile int32_t t54 = 1;

	t54 = ((x445<<(x446==x447))%x448);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x449 = UINT64_MAX;
	static int16_t x450 = INT16_MIN;
	int64_t x451 = INT64_MAX;
	int32_t x452 = 160;
	volatile uint64_t t55 = 6608589120LLU;

	t55 = ((x449<<(x450==x451))%x452);

	if (t55 != 95LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x453 = 1087214337LLU;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = 0U;
	static volatile int8_t x456 = INT8_MIN;
	volatile uint64_t t56 = 508546LLU;

	t56 = ((x453<<(x454==x455))%x456);

	if (t56 != 1087214337LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x457 = 3U;
	int16_t x458 = INT16_MIN;
	int32_t x460 = -394330087;
	int32_t t57 = 1;

	t57 = ((x457<<(x458==x459))%x460);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x461 = INT8_MAX;
	volatile int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	volatile uint64_t x464 = 18090348271205LLU;

	t58 = ((x461<<(x462==x463))%x464);

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x465 = UINT8_MAX;
	static int32_t x466 = -635794253;
	volatile uint32_t x467 = UINT32_MAX;
	int32_t t59 = 153751343;

	t59 = ((x465<<(x466==x467))%x468);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x469 = 0U;
	uint8_t x470 = 1U;
	int16_t x472 = -91;
	volatile int32_t t60 = -2191;

	t60 = ((x469<<(x470==x471))%x472);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x474 = -1LL;
	volatile int8_t x475 = INT8_MIN;
	static volatile uint16_t x476 = 2U;

	t61 = ((x473<<(x474==x475))%x476);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x481 = INT8_MAX;
	uint32_t t62 = 36049785U;

	t62 = ((x481<<(x482==x483))%x484);

	if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x501 = 1459787U;
	int64_t x502 = -1LL;
	int32_t x504 = 219;
	uint32_t t63 = 1624368264U;

	t63 = ((x501<<(x502==x503))%x504);

	if (t63 != 85U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x509 = 0;
	int32_t x510 = INT32_MIN;
	int32_t x511 = INT32_MIN;
	static int16_t x512 = -1;
	volatile int32_t t64 = -50762162;

	t64 = ((x509<<(x510==x511))%x512);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {


	t65 = ((x513<<(x514==x515))%x516);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x517 = INT64_MAX;
	int32_t x518 = -3;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = 82U;
	int64_t t66 = 166677LL;

	t66 = ((x517<<(x518==x519))%x520);

	if (t66 != 7LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x525 = 28U;
	uint32_t x526 = 1929U;
	static int16_t x527 = -315;
	static int32_t t67 = -17221;

	t67 = ((x525<<(x526==x527))%x528);

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x533 = 12U;
	int64_t x534 = INT64_MIN;
	uint32_t x535 = UINT32_MAX;
	int32_t x536 = -63789213;
	volatile uint32_t t68 = 2079123U;

	t68 = ((x533<<(x534==x535))%x536);

	if (t68 != 12U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x537 = 3U;
	static int64_t x538 = -1LL;
	volatile int8_t x540 = -1;
	static volatile int32_t t69 = -23401801;

	t69 = ((x537<<(x538==x539))%x540);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x541 = INT32_MAX;
	uint32_t x542 = 35U;
	int16_t x543 = INT16_MAX;
	volatile int32_t t70 = 1;

	t70 = ((x541<<(x542==x543))%x544);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x545 = 140296571LLU;
	int32_t x546 = 8399592;
	volatile int32_t x547 = -6;
	volatile uint8_t x548 = 27U;
	volatile uint64_t t71 = 62LLU;

	t71 = ((x545<<(x546==x547))%x548);

	if (t71 != 8LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x553 = UINT32_MAX;
	static int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	uint8_t x556 = UINT8_MAX;

	t72 = ((x553<<(x554==x555))%x556);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x565 = 1U;
	uint16_t x566 = 7U;
	static int32_t x567 = INT32_MIN;
	int32_t x568 = -1;
	volatile int32_t t73 = 1;

	t73 = ((x565<<(x566==x567))%x568);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x573 = 5851;
	int16_t x574 = INT16_MAX;
	int32_t x575 = -1;
	uint64_t x576 = 26204408455LLU;
	volatile uint64_t t74 = 56LLU;

	t74 = ((x573<<(x574==x575))%x576);

	if (t74 != 5851LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x577 = INT8_MAX;
	int16_t x579 = -13257;
	int64_t x580 = INT64_MAX;

	t75 = ((x577<<(x578==x579))%x580);

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x581 = 0U;
	static int64_t x582 = -1LL;
	int64_t x583 = INT64_MIN;
	static int64_t x584 = -1LL;
	static int64_t t76 = -731722LL;

	t76 = ((x581<<(x582==x583))%x584);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x589 = 938714038287LLU;
	uint32_t x590 = 638641732U;
	uint16_t x591 = 1U;
	int8_t x592 = -1;
	uint64_t t77 = 72147841567260919LLU;

	t77 = ((x589<<(x590==x591))%x592);

	if (t77 != 938714038287LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x597 = UINT64_MAX;
	volatile uint64_t x598 = 270290LLU;
	uint16_t x599 = UINT16_MAX;
	volatile int32_t x600 = INT32_MIN;
	static uint64_t t78 = 80823967276300138LLU;

	t78 = ((x597<<(x598==x599))%x600);

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x637 = 4848U;
	int32_t x638 = -91569;
	static uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 3022375U;

	t79 = ((x637<<(x638==x639))%x640);

	if (t79 != 4848U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x643 = 113997270;
	volatile int8_t x644 = -1;

	t80 = ((x641<<(x642==x643))%x644);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = INT16_MIN;
	volatile int32_t x652 = -1;
	uint32_t t81 = 107U;

	t81 = ((x649<<(x650==x651))%x652);

	if (t81 != 61514U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x653 = 6U;
	int64_t x655 = INT64_MIN;
	static uint64_t x656 = 1LLU;
	volatile uint64_t t82 = 0LLU;

	t82 = ((x653<<(x654==x655))%x656);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x661 = 123U;
	int16_t x662 = -1;
	int16_t x663 = INT16_MIN;
	uint16_t x664 = 14369U;
	static volatile int32_t t83 = 116;

	t83 = ((x661<<(x662==x663))%x664);

	if (t83 != 123) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x669 = 378093U;
	uint8_t x670 = 2U;
	int8_t x671 = 25;
	int8_t x672 = -1;
	volatile uint32_t t84 = 8014650U;

	t84 = ((x669<<(x670==x671))%x672);

	if (t84 != 378093U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x677 = INT32_MAX;
	static uint8_t x679 = UINT8_MAX;
	static int64_t x680 = INT64_MAX;
	volatile int64_t t85 = 669LL;

	t85 = ((x677<<(x678==x679))%x680);

	if (t85 != 2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x681 = INT32_MAX;
	volatile int8_t x682 = 5;
	uint64_t x683 = 4465982860169301LLU;
	int32_t x684 = INT32_MIN;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x681<<(x682==x683))%x684);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x685 = 1;
	static int32_t x686 = INT32_MAX;
	int8_t x688 = -1;
	volatile int32_t t87 = -18569234;

	t87 = ((x685<<(x686==x687))%x688);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x694 = -1LL;
	int16_t x695 = -1;
	volatile int8_t x696 = INT8_MIN;
	volatile int32_t t88 = 1320529;

	t88 = ((x693<<(x694==x695))%x696);

	if (t88 != 122) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x701 = INT16_MAX;
	int32_t x702 = 25410;
	static int32_t x703 = 46274340;

	t89 = ((x701<<(x702==x703))%x704);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x705 = 60;
	volatile int32_t x706 = -1;
	int16_t x707 = 0;
	uint32_t x708 = 57911U;
	uint32_t t90 = 147U;

	t90 = ((x705<<(x706==x707))%x708);

	if (t90 != 60U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x710 = -2;
	volatile uint8_t x711 = 0U;
	int64_t x712 = -64189066822776525LL;
	int64_t t91 = -1275987344LL;

	t91 = ((x709<<(x710==x711))%x712);

	if (t91 != 1429968LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x717 = 15U;
	volatile int8_t x718 = INT8_MAX;
	int64_t x719 = 4124905LL;
	volatile uint32_t x720 = UINT32_MAX;

	t92 = ((x717<<(x718==x719))%x720);

	if (t92 != 15U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x725 = UINT8_MAX;
	static uint16_t x726 = UINT16_MAX;
	int16_t x727 = INT16_MIN;
	int64_t x728 = INT64_MAX;
	int64_t t93 = 111595LL;

	t93 = ((x725<<(x726==x727))%x728);

	if (t93 != 255LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x730 = 7063;
	int32_t x731 = INT32_MAX;
	uint32_t x732 = 17U;
	int64_t t94 = -889LL;

	t94 = ((x729<<(x730==x731))%x732);

	if (t94 != 8LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x733 = 4LL;
	int16_t x734 = -1;
	volatile int64_t x735 = -1LL;
	int16_t x736 = INT16_MAX;
	int64_t t95 = 1285064818084969LL;

	t95 = ((x733<<(x734==x735))%x736);

	if (t95 != 8LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x737 = 2724802LL;
	uint64_t x739 = 234990494LLU;
	static volatile int32_t x740 = INT32_MIN;

	t96 = ((x737<<(x738==x739))%x740);

	if (t96 != 2724802LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x746 = -1;
	int8_t x747 = INT8_MAX;

	t97 = ((x745<<(x746==x747))%x748);

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x749 = 3852420LLU;
	int8_t x750 = INT8_MIN;
	uint64_t x751 = 4076LLU;
	int64_t x752 = INT64_MIN;
	static volatile uint64_t t98 = 1504944655LLU;

	t98 = ((x749<<(x750==x751))%x752);

	if (t98 != 3852420LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x754 = 244257538U;
	volatile uint16_t x755 = 20U;
	int64_t x756 = 2212729016561022528LL;

	t99 = ((x753<<(x754==x755))%x756);

	if (t99 != 38LL) { NG(); } else { ; }
	
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

