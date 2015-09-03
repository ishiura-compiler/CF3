#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
volatile int64_t t0 = -51851475LL;
volatile uint32_t t2 = 80U;
static int64_t x26 = 407342034222491LL;
volatile uint64_t x28 = 6LLU;
volatile uint64_t x29 = UINT64_MAX;
volatile uint16_t x36 = UINT16_MAX;
uint64_t t7 = 2759452LLU;
static volatile int16_t x50 = 803;
static int64_t x56 = 487LL;
int8_t x58 = INT8_MAX;
int32_t x59 = 6464531;
volatile uint8_t x61 = 3U;
uint32_t x110 = 4020622U;
uint8_t x111 = 18U;
uint8_t x112 = 32U;
static volatile uint64_t t21 = 2LLU;
static int16_t x157 = INT16_MAX;
uint8_t x170 = 1U;
uint32_t x176 = UINT32_MAX;
uint64_t t28 = 2798753950009LLU;
static int8_t x192 = -1;
int8_t x208 = 1;
volatile int32_t t31 = -109;
int8_t x214 = INT8_MIN;
int8_t x220 = INT8_MIN;
uint32_t x225 = UINT32_MAX;
int16_t x232 = INT16_MIN;
int64_t x257 = -1LL;
uint32_t t41 = 8U;
volatile int64_t t42 = 386259804326353811LL;
static uint8_t x274 = UINT8_MAX;
int64_t x299 = -1LL;
volatile uint32_t x319 = UINT32_MAX;
int16_t x328 = -1;
uint64_t x329 = 7291269LLU;
static int16_t x330 = INT16_MIN;
int64_t x334 = -1LL;
uint64_t x341 = 9183051623LLU;
volatile uint32_t x342 = 6588U;
int8_t x350 = INT8_MIN;
uint64_t t53 = 148LLU;
static volatile uint16_t x358 = UINT16_MAX;
volatile uint32_t x360 = 748233965U;
static uint32_t t54 = 48U;
static uint16_t x367 = 2011U;
volatile uint8_t x377 = UINT8_MAX;
int64_t x385 = INT64_MIN;
int8_t x390 = INT8_MAX;
volatile uint8_t x392 = 35U;
volatile int8_t x398 = 2;
static int32_t t62 = -144602;
int8_t x408 = INT8_MAX;
int64_t x409 = INT64_MAX;
volatile int16_t x411 = -1;
volatile uint16_t x454 = 2983U;
int64_t x457 = -1LL;
static uint32_t x462 = 4241U;
int64_t x481 = 2948634029LL;
int8_t x484 = -11;
uint32_t x486 = 93085U;
int64_t x487 = -74231608LL;
volatile uint16_t x488 = UINT16_MAX;
int64_t x493 = INT64_MAX;
uint32_t x511 = UINT32_MAX;
uint8_t x512 = 4U;
uint32_t x514 = 49845136U;
int8_t x515 = INT8_MIN;
int64_t x524 = -1LL;
uint32_t t84 = 6U;
volatile int32_t x530 = INT32_MAX;
int16_t x532 = -1;
volatile uint64_t t86 = 8228561LLU;
static int32_t x537 = -1;
int16_t x546 = -2981;
volatile uint32_t x575 = 24562U;
volatile uint64_t x582 = 1LLU;
int64_t x599 = INT64_MAX;
static int64_t t97 = 13330134LL;
int8_t x614 = -1;
uint8_t x618 = UINT8_MAX;


void f0(void) {
	int64_t x5 = -917975142480LL;
	int16_t x7 = -115;
	int8_t x8 = INT8_MIN;

	t0 = ((x5-x6)%(x7*x8));

	if (t0 != 12848LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	static uint64_t x11 = 507742364891LLU;
	static uint32_t x12 = 633U;
	uint64_t t1 = 239LLU;

	t1 = ((x9-x10)%(x11*x12));

	if (t1 != 259844788802539LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	static volatile int16_t x22 = INT16_MIN;
	uint32_t x23 = 67672674U;
	static uint16_t x24 = UINT16_MAX;

	t2 = ((x21-x22)%(x23*x24));

	if (t2 != 2147516416U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = -1;
	static int64_t x27 = -1LL;
	uint64_t t3 = 96026LLU;

	t3 = ((x25-x26)%(x27*x28));

	if (t3 != 18446336731675329124LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = -3;
	volatile int16_t x31 = -1;
	int8_t x32 = -1;
	uint64_t t4 = 3185335LLU;

	t4 = ((x29-x30)%(x31*x32));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 1236460167LLU;
	int8_t x34 = 0;
	int16_t x35 = INT16_MAX;
	static volatile uint64_t t5 = 1437088847471671LLU;

	t5 = ((x33-x34)%(x35*x36));

	if (t5 != 1236460167LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 508U;
	volatile int32_t x38 = INT32_MAX;
	int8_t x39 = -1;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t6 = 924807615U;

	t6 = ((x37-x38)%(x39*x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = -1;
	int8_t x42 = -1;
	uint64_t x43 = 459926LLU;
	int8_t x44 = INT8_MIN;

	t7 = ((x41-x42)%(x43*x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x49 = UINT64_MAX;
	uint64_t x51 = 40389544854747534LLU;
	volatile uint16_t x52 = 151U;
	volatile uint64_t t8 = 60703280738495LLU;

	t8 = ((x49-x50)%(x51*x52));

	if (t8 != 150280254508917910LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	volatile int64_t x54 = -1LL;
	uint64_t x55 = UINT64_MAX;
	static uint64_t t9 = 2188506109046LLU;

	t9 = ((x53-x54)%(x55*x56));

	if (t9 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t10 = 3888;

	t10 = ((x57-x58)%(x59*x60));

	if (t10 != 32640) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x62 = INT8_MIN;
	volatile int8_t x63 = 1;
	uint64_t x64 = 393229701410618523LLU;
	uint64_t t11 = 5058087097918LLU;

	t11 = ((x61-x62)%(x63*x64));

	if (t11 != 131LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x70 = 1U;
	uint32_t x71 = 7U;
	volatile int8_t x72 = INT8_MAX;
	volatile uint32_t t12 = 437231U;

	t12 = ((x69-x70)%(x71*x72));

	if (t12 != 133U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 6U;
	uint32_t t13 = 826867U;

	t13 = ((x73-x74)%(x75*x76));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x77 = -1;
	int16_t x78 = 1;
	int64_t x79 = INT64_MAX;
	int8_t x80 = -1;
	static volatile int64_t t14 = 0LL;

	t14 = ((x77-x78)%(x79*x80));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MAX;
	int32_t x83 = 16528183;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t15 = 66307089431792191LLU;

	t15 = ((x81-x82)%(x83*x84));

	if (t15 != 16495543LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = 0U;
	uint8_t x91 = UINT8_MAX;
	int8_t x92 = -1;
	volatile int32_t t16 = -131;

	t16 = ((x89-x90)%(x91*x92));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x101 = 967244836794280955LL;
	static volatile int32_t x102 = -1;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;
	int64_t t17 = 975904542431LL;

	t17 = ((x101-x102)%(x103*x104));

	if (t17 != 4172796LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = -1972401089874866333LL;
	volatile int64_t t18 = -436LL;

	t18 = ((x109-x110)%(x111*x112));

	if (t18 != -555LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = INT32_MAX;
	uint64_t x118 = 6782LLU;
	static volatile uint32_t x119 = 488132U;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t19 = 76LLU;

	t19 = ((x117-x118)%(x119*x120));

	if (t19 != 2147476865LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x125 = 5744995826204258LL;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int64_t t20 = 5552044115LL;

	t20 = ((x125-x126)%(x127*x128));

	if (t20 != 1952226LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x141 = -2260;
	uint64_t x142 = 85LLU;
	int16_t x143 = -1;
	int8_t x144 = 37;

	t21 = ((x141-x142)%(x143*x144));

	if (t21 != 18446744073709549271LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x149 = -1;
	volatile int16_t x150 = -4690;
	uint64_t x151 = 20992972093630LLU;
	volatile int32_t x152 = INT32_MAX;
	uint64_t t22 = 3019227LLU;

	t22 = ((x149-x150)%(x151*x152));

	if (t22 != 4689LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x158 = INT16_MIN;
	uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = -1;
	uint64_t t23 = 362416LLU;

	t23 = ((x157-x158)%(x159*x160));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x161 = -3;
	volatile uint32_t x162 = 40U;
	int16_t x163 = INT16_MAX;
	int16_t x164 = 43;
	uint32_t t24 = 5179U;

	t24 = ((x161-x162)%(x163*x164));

	if (t24 != 393165U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x169 = -1LL;
	int8_t x171 = -1;
	static volatile int8_t x172 = 1;
	int64_t t25 = 368968662660422338LL;

	t25 = ((x169-x170)%(x171*x172));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x173 = 3U;
	volatile int16_t x174 = 7;
	volatile int32_t x175 = 1914499;
	uint32_t t26 = 133U;

	t26 = ((x173-x174)%(x175*x176));

	if (t26 != 1914495U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x177 = -1LL;
	uint32_t x178 = 4931U;
	volatile int16_t x179 = -1;
	int32_t x180 = 1;
	volatile int64_t t27 = 4692191LL;

	t27 = ((x177-x178)%(x179*x180));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x181 = -1LL;
	static volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MAX;
	static uint64_t x184 = 71092LLU;

	t28 = ((x181-x182)%(x183*x184));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = 0;
	static int16_t x186 = 1;
	static uint64_t x187 = 1LLU;
	int16_t x188 = INT16_MAX;
	volatile uint64_t t29 = 22888LLU;

	t29 = ((x185-x186)%(x187*x188));

	if (t29 != 15LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = -1;
	int8_t x190 = -3;
	volatile uint32_t x191 = UINT32_MAX;
	static volatile uint32_t t30 = 1997U;

	t30 = ((x189-x190)%(x191*x192));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x205 = INT16_MIN;
	int16_t x206 = 12;
	static int8_t x207 = -3;

	t31 = ((x205-x206)%(x207*x208));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x213 = INT16_MIN;
	int16_t x215 = -6009;
	int32_t x216 = -1;
	volatile int32_t t32 = -674553;

	t32 = ((x213-x214)%(x215*x216));

	if (t32 != -2595) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = 98;
	int64_t x219 = -80733430LL;
	volatile int64_t t33 = -21836LL;

	t33 = ((x217-x218)%(x219*x220));

	if (t33 != 29LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x226 = -486988LL;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 70854441103870777LLU;
	uint64_t t34 = 24659LLU;

	t34 = ((x225-x226)%(x227*x228));

	if (t34 != 4295454283LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = -1;
	volatile int32_t x230 = -3;
	uint16_t x231 = 19789U;
	volatile int32_t t35 = 184;

	t35 = ((x229-x230)%(x231*x232));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x233 = 238202U;
	volatile int32_t x234 = INT32_MIN;
	static volatile int8_t x235 = -1;
	int16_t x236 = INT16_MIN;
	volatile uint32_t t36 = 3166U;

	t36 = ((x233-x234)%(x235*x236));

	if (t36 != 8826U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t37 = 481198U;

	t37 = ((x241-x242)%(x243*x244));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x245 = -136348185308390LL;
	int32_t x246 = 0;
	int32_t x247 = -650;
	int8_t x248 = INT8_MIN;
	int64_t t38 = -3827LL;

	t38 = ((x245-x246)%(x247*x248));

	if (t38 != -15590LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x249 = INT64_MAX;
	volatile int32_t x250 = 2088086;
	int16_t x251 = INT16_MAX;
	int8_t x252 = -1;
	volatile int64_t t39 = -20485460LL;

	t39 = ((x249-x250)%(x251*x252));

	if (t39 != 9009LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x258 = INT64_MIN;
	static int8_t x259 = -1;
	volatile int64_t x260 = -1LL;
	volatile int64_t t40 = -7253444LL;

	t40 = ((x257-x258)%(x259*x260));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x261 = -1;
	volatile uint8_t x262 = 1U;
	int16_t x263 = INT16_MIN;
	static volatile uint32_t x264 = UINT32_MAX;

	t41 = ((x261-x262)%(x263*x264));

	if (t41 != 32766U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x265 = -24723137;
	uint16_t x266 = 89U;
	uint8_t x267 = 111U;
	int64_t x268 = -1LL;

	t42 = ((x265-x266)%(x267*x268));

	if (t42 != -85LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x273 = INT16_MIN;
	volatile int64_t x275 = -1LL;
	int32_t x276 = 30324;
	int64_t t43 = -10015221LL;

	t43 = ((x273-x274)%(x275*x276));

	if (t43 != -2699LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x285 = 10;
	uint8_t x286 = 10U;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t44 = -3205701;

	t44 = ((x285-x286)%(x287*x288));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x289 = -1;
	int32_t x290 = -3677322;
	int64_t x291 = -1LL;
	uint64_t x292 = UINT64_MAX;
	uint64_t t45 = 116LLU;

	t45 = ((x289-x290)%(x291*x292));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x297 = 7;
	uint32_t x298 = 293941520U;
	static int8_t x300 = INT8_MIN;
	int64_t t46 = -177740LL;

	t46 = ((x297-x298)%(x299*x300));

	if (t46 != 119LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x301 = UINT64_MAX;
	volatile uint8_t x302 = 1U;
	int32_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t47 = 279254021781492LLU;

	t47 = ((x301-x302)%(x303*x304));

	if (t47 != 32765LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MIN;
	static int16_t x320 = -1;
	static uint32_t t48 = 1464186277U;

	t48 = ((x317-x318)%(x319*x320));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x325 = 12993U;
	int64_t x326 = 33918780228LL;
	int8_t x327 = INT8_MAX;
	int64_t t49 = -5LL;

	t49 = ((x325-x326)%(x327*x328));

	if (t49 != -46LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x331 = INT32_MAX;
	static int64_t x332 = 1107LL;
	volatile uint64_t t50 = 213480029183LLU;

	t50 = ((x329-x330)%(x331*x332));

	if (t50 != 7324037LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x333 = INT16_MAX;
	volatile uint32_t x335 = 163U;
	uint64_t x336 = 184272906431852LLU;
	static uint64_t t51 = 26185170795255450LLU;

	t51 = ((x333-x334)%(x335*x336));

	if (t51 != 32768LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x343 = -1;
	int8_t x344 = 16;
	volatile uint64_t t52 = 31648LLU;

	t52 = ((x341-x342)%(x343*x344));

	if (t52 != 9183045035LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x349 = UINT64_MAX;
	volatile int32_t x351 = -35172960;
	int64_t x352 = -1LL;

	t53 = ((x349-x350)%(x351*x352));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x359 = -1;

	t54 = ((x357-x358)%(x359*x360));

	if (t54 != 748168429U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x365 = UINT32_MAX;
	static uint8_t x366 = 24U;
	uint16_t x368 = UINT16_MAX;
	static uint32_t t55 = 4U;

	t55 = ((x365-x366)%(x367*x368));

	if (t55 != 77658951U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x373 = -473259702084036577LL;
	static int32_t x374 = 52403;
	int16_t x375 = -1;
	static int32_t x376 = -1;
	static int64_t t56 = 341222795306693LL;

	t56 = ((x373-x374)%(x375*x376));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x378 = INT64_MAX;
	int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;
	volatile int64_t t57 = 177501946955LL;

	t57 = ((x377-x378)%(x379*x380));

	if (t57 != -16128LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x381 = 4U;
	int64_t x382 = INT64_MAX;
	uint32_t x383 = UINT32_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t58 = 2657LLU;

	t58 = ((x381-x382)%(x383*x384));

	if (t58 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x386 = -176349260;
	uint32_t x387 = 110U;
	int8_t x388 = INT8_MIN;
	int64_t t59 = 49731LL;

	t59 = ((x385-x386)%(x387*x388));

	if (t59 != -4217727156LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x389 = -590;
	volatile int16_t x391 = INT16_MIN;
	int32_t t60 = 42;

	t60 = ((x389-x390)%(x391*x392));

	if (t60 != -717) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x393 = -4274707251061LL;
	int8_t x394 = INT8_MIN;
	static volatile int64_t x395 = -945308727328LL;
	int16_t x396 = INT16_MIN;
	volatile int64_t t61 = -6309LL;

	t61 = ((x393-x394)%(x395*x396));

	if (t61 != -4274707250933LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x397 = -1;
	volatile int16_t x399 = 1;
	int8_t x400 = -1;

	t62 = ((x397-x398)%(x399*x400));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x401 = -37;
	static uint16_t x402 = 501U;
	uint8_t x403 = UINT8_MAX;
	static int8_t x404 = INT8_MIN;
	int32_t t63 = 4515042;

	t63 = ((x401-x402)%(x403*x404));

	if (t63 != -538) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x405 = INT32_MAX;
	uint64_t x406 = UINT64_MAX;
	static int16_t x407 = INT16_MIN;
	volatile uint64_t t64 = 1050241608423385810LLU;

	t64 = ((x405-x406)%(x407*x408));

	if (t64 != 2147483648LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x410 = UINT8_MAX;
	volatile int8_t x412 = -1;
	static int64_t t65 = 32415827336227LL;

	t65 = ((x409-x410)%(x411*x412));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x413 = UINT32_MAX;
	uint16_t x414 = UINT16_MAX;
	static int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MAX;
	uint32_t t66 = 880072041U;

	t66 = ((x413-x414)%(x415*x416));

	if (t66 != 1073643520U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x421 = INT16_MIN;
	int16_t x422 = -446;
	static int8_t x423 = INT8_MAX;
	int16_t x424 = -1;
	volatile int32_t t67 = 232732;

	t67 = ((x421-x422)%(x423*x424));

	if (t67 != -64) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x429 = 3U;
	volatile uint64_t x430 = 14527789LLU;
	volatile int64_t x431 = -33190LL;
	volatile uint32_t x432 = UINT32_MAX;
	static volatile uint64_t t68 = 703210815LLU;

	t68 = ((x429-x430)%(x431*x432));

	if (t68 != 142549949993264LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x434 = 0U;
	static int16_t x435 = -4;
	uint32_t x436 = UINT32_MAX;
	uint32_t t69 = 1U;

	t69 = ((x433-x434)%(x435*x436));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x437 = -27;
	int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MAX;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t70 = -62988578;

	t70 = ((x437-x438)%(x439*x440));

	if (t70 != 101) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x449 = -1;
	int64_t x450 = -1LL;
	volatile int16_t x451 = 1;
	int32_t x452 = -1;
	volatile int64_t t71 = 609LL;

	t71 = ((x449-x450)%(x451*x452));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x455 = 2U;
	volatile int32_t x456 = -62;
	int32_t t72 = -1881;

	t72 = ((x453-x454)%(x455*x456));

	if (t72 != -11) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x458 = 6860U;
	static int16_t x459 = -1;
	uint32_t x460 = UINT32_MAX;
	volatile int64_t t73 = 270242796807735640LL;

	t73 = ((x457-x458)%(x459*x460));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x461 = UINT8_MAX;
	volatile int32_t x463 = 5644;
	static int16_t x464 = 7363;
	uint32_t t74 = 373U;

	t74 = ((x461-x462)%(x463*x464));

	if (t74 != 14615794U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x477 = UINT8_MAX;
	int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	static uint64_t x480 = UINT64_MAX;
	static uint64_t t75 = 3433523709149083018LLU;

	t75 = ((x477-x478)%(x479*x480));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x482 = -80;
	int32_t x483 = -1;
	volatile int64_t t76 = -2794963LL;

	t76 = ((x481-x482)%(x483*x484));

	if (t76 != 3LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x485 = -1;
	volatile int64_t t77 = 31290478LL;

	t77 = ((x485-x486)%(x487*x488));

	if (t77 != 4294874210LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x494 = 561677474806LLU;
	uint16_t x495 = 1061U;
	static int16_t x496 = INT16_MAX;
	volatile uint64_t t78 = 2652659596596759618LLU;

	t78 = ((x493-x494)%(x495*x496));

	if (t78 != 2446479LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x497 = 10;
	int64_t x498 = -52317423LL;
	int32_t x499 = INT32_MAX;
	int8_t x500 = 1;
	volatile int64_t t79 = -26988343LL;

	t79 = ((x497-x498)%(x499*x500));

	if (t79 != 52317433LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x505 = INT32_MAX;
	uint8_t x506 = 15U;
	int16_t x507 = 2;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t80 = -226455748;

	t80 = ((x505-x506)%(x507*x508));

	if (t80 != 112) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x509 = 644858208075809LLU;
	volatile int32_t x510 = INT32_MIN;
	uint64_t t81 = 32LLU;

	t81 = ((x509-x510)%(x511*x512));

	if (t81 != 1081436701LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x513 = INT32_MAX;
	volatile int8_t x516 = 34;
	uint32_t t82 = 103U;

	t82 = ((x513-x514)%(x515*x516));

	if (t82 != 2097638511U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x521 = UINT32_MAX;
	int16_t x522 = -623;
	uint32_t x523 = 61U;
	int64_t t83 = -858013LL;

	t83 = ((x521-x522)%(x523*x524));

	if (t83 != 12LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x525 = -1;
	uint32_t x526 = 3U;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;

	t84 = ((x525-x526)%(x527*x528));

	if (t84 != 196602U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x529 = 31198022U;
	int16_t x531 = INT16_MIN;
	volatile uint32_t t85 = 28U;

	t85 = ((x529-x530)%(x531*x532));

	if (t85 != 2887U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x533 = 47U;
	uint16_t x534 = 1757U;
	volatile uint16_t x535 = UINT16_MAX;
	uint64_t x536 = UINT64_MAX;

	t86 = ((x533-x534)%(x535*x536));

	if (t86 != 63825LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x538 = -1;
	static uint16_t x539 = UINT16_MAX;
	static uint64_t x540 = UINT64_MAX;
	volatile uint64_t t87 = 105055200581578LLU;

	t87 = ((x537-x538)%(x539*x540));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x545 = 167933LLU;
	static uint16_t x547 = 744U;
	static int8_t x548 = -1;
	volatile uint64_t t88 = 4555LLU;

	t88 = ((x545-x546)%(x547*x548));

	if (t88 != 170914LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x549 = -1;
	uint16_t x550 = UINT16_MAX;
	uint16_t x551 = UINT16_MAX;
	int32_t x552 = -1;
	volatile int32_t t89 = 1;

	t89 = ((x549-x550)%(x551*x552));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x561 = -1;
	int16_t x562 = INT16_MIN;
	int16_t x563 = -1;
	static int16_t x564 = INT16_MAX;
	static int32_t t90 = -6;

	t90 = ((x561-x562)%(x563*x564));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x573 = INT32_MAX;
	int8_t x574 = INT8_MAX;
	int16_t x576 = -4;
	volatile uint32_t t91 = 214558427U;

	t91 = ((x573-x574)%(x575*x576));

	if (t91 != 2147483520U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x581 = INT32_MAX;
	int64_t x583 = 121892LL;
	static uint64_t x584 = UINT64_MAX;
	uint64_t t92 = 1909274LLU;

	t92 = ((x581-x582)%(x583*x584));

	if (t92 != 2147483646LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x585 = UINT64_MAX;
	static uint64_t x586 = 2044944084920LLU;
	uint32_t x587 = 853438791U;
	int64_t x588 = 16515098LL;
	uint64_t t93 = 207758826LLU;

	t93 = ((x585-x586)%(x587*x588));

	if (t93 != 10972175126061151LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x593 = 137235221503336LL;
	uint64_t x594 = 7896405762967427LLU;
	volatile int32_t x595 = -50;
	int64_t x596 = -1LL;
	volatile uint64_t t94 = 33784207643161LLU;

	t94 = ((x593-x594)%(x595*x596));

	if (t94 != 25LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x597 = 1;
	volatile int16_t x598 = -2561;
	int8_t x600 = -1;
	volatile int64_t t95 = 32690LL;

	t95 = ((x597-x598)%(x599*x600));

	if (t95 != 2562LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x605 = INT8_MAX;
	uint8_t x606 = 2U;
	int64_t x607 = -55550LL;
	static volatile uint64_t x608 = 16129705097938808LLU;
	uint64_t t96 = 0LLU;

	t96 = ((x605-x606)%(x607*x608));

	if (t96 != 125LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x609 = 7;
	int64_t x610 = -472LL;
	static uint32_t x611 = UINT32_MAX;
	int8_t x612 = INT8_MIN;

	t97 = ((x609-x610)%(x611*x612));

	if (t97 != 95LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x613 = INT32_MIN;
	int8_t x615 = -60;
	volatile uint16_t x616 = 15U;
	int32_t t98 = 4;

	t98 = ((x613-x614)%(x615*x616));

	if (t98 != -847) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x617 = INT8_MAX;
	uint8_t x619 = 2U;
	static int64_t x620 = 3227116532379015LL;
	int64_t t99 = 24LL;

	t99 = ((x617-x618)%(x619*x620));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

