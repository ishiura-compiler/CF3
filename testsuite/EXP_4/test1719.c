#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x17 = INT16_MIN;
static uint16_t x19 = UINT16_MAX;
uint32_t x21 = UINT32_MAX;
volatile int16_t x22 = INT16_MIN;
uint32_t x41 = 38U;
volatile uint64_t x46 = 83411042333LLU;
uint16_t x47 = 89U;
volatile uint64_t t7 = 1040601985304606LLU;
static uint64_t t9 = 15006365104475LLU;
int16_t x69 = -40;
int64_t t11 = -1LL;
int16_t x81 = -1;
volatile int32_t x86 = 1609;
int8_t x92 = -19;
uint64_t t16 = 1LLU;
volatile uint64_t x104 = UINT64_MAX;
volatile int8_t x107 = 1;
uint64_t x109 = 793784543710323LLU;
int16_t x112 = 230;
volatile uint16_t x113 = 1132U;
int64_t x122 = INT64_MAX;
int8_t x125 = -1;
int32_t x140 = -13581415;
volatile int32_t t24 = -484720044;
int32_t t25 = 102548;
int64_t x145 = INT64_MIN;
int8_t x146 = -2;
volatile int8_t x147 = INT8_MIN;
volatile uint64_t x155 = 8331022210122275LLU;
uint32_t x172 = UINT32_MAX;
static volatile int32_t x176 = INT32_MAX;
static int64_t t32 = 366887116132LL;
int32_t x190 = -1;
uint64_t t34 = 102034279LLU;
volatile int64_t t35 = 2326260LL;
uint64_t x204 = 34783232613933LLU;
static volatile int16_t x210 = 0;
uint32_t x211 = UINT32_MAX;
uint64_t x212 = 6572461411230LLU;
volatile uint64_t x222 = 128129837356LLU;
uint64_t t40 = 1117644521LLU;
uint32_t x225 = 19U;
int16_t x227 = 1;
int8_t x242 = -1;
int32_t x250 = 1;
static uint64_t x251 = 51743798902315927LLU;
volatile uint16_t x260 = 8195U;
int8_t x261 = INT8_MIN;
int8_t x262 = INT8_MAX;
static int16_t x273 = INT16_MIN;
uint32_t x283 = 113965208U;
uint8_t x291 = UINT8_MAX;
int8_t x299 = 50;
volatile uint32_t t58 = 485478193U;
int16_t x321 = INT16_MAX;
int16_t x331 = INT16_MAX;
static volatile int8_t x336 = INT8_MAX;
int32_t t61 = 1357242;
int16_t x337 = INT16_MIN;
int32_t t62 = 505661;
int16_t x344 = 0;
int16_t x345 = INT16_MIN;
volatile int64_t x352 = INT64_MIN;
int8_t x357 = INT8_MIN;
int64_t x358 = 14933LL;
int64_t x364 = 1LL;
uint64_t x375 = UINT64_MAX;
static int32_t x380 = INT32_MAX;
static uint8_t x384 = 101U;
int16_t x404 = INT16_MIN;
volatile int32_t t75 = -20913243;
uint64_t x407 = UINT64_MAX;
volatile int8_t x415 = 28;
int32_t x419 = -1;
int64_t x420 = -34576LL;
volatile int32_t x427 = 250416256;
uint64_t t81 = 3580LLU;
static uint32_t x437 = 543992U;
int16_t x438 = 4;
int16_t x445 = INT16_MIN;
int8_t x447 = INT8_MAX;
int64_t t84 = -2LL;
uint8_t x454 = UINT8_MAX;
int64_t x459 = INT64_MIN;
int64_t x460 = 0LL;
volatile int32_t x471 = INT32_MAX;
uint64_t x499 = 146558831520037122LLU;
uint64_t x503 = 5063377143418LLU;
int16_t x516 = -1;
static int8_t x518 = INT8_MIN;
static volatile uint32_t t98 = 113U;
int8_t x526 = INT8_MIN;
uint32_t x528 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -1;
	uint64_t x2 = 2534755496369974LLU;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = -460789813LL;
	static volatile uint64_t t0 = 795LLU;

	t0 = (x1*(x2*(x3&x4)));

	if (t0 != 1559629782139897390LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int8_t x12 = 0;
	volatile int32_t t1 = 27709744;

	t1 = (x9*(x10*(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x18 = 205233797LLU;
	int64_t x20 = 1924937203433360061LL;
	static uint64_t t2 = 190421530878064361LLU;

	t2 = (x17*(x18*(x19&x20)));

	if (t2 != 18318072715126734848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x23 = INT32_MIN;
	volatile int8_t x24 = INT8_MAX;
	volatile uint32_t t3 = 507810792U;

	t3 = (x21*(x22*(x23&x24)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	static int32_t x34 = -1;
	uint8_t x35 = 34U;
	static uint16_t x36 = 14407U;
	volatile int32_t t4 = 918;

	t4 = (x33*(x34*(x35&x36)));

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x37 = INT8_MAX;
	static int64_t x38 = -10641442LL;
	static int8_t x39 = -6;
	volatile int32_t x40 = 842;
	volatile int64_t t5 = 201822149351035897LL;

	t5 = (x37*(x38*(x39&x40)));

	if (t5 != -1137931958828LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	uint64_t t6 = 67792139997LLU;

	t6 = (x41*(x42*(x43&x44)));

	if (t6 != 4864LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = -1;
	int16_t x48 = -13840;

	t7 = (x45*(x46*(x47&x48)));

	if (t7 != 18446737400826164976LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int16_t x50 = INT16_MAX;
	static int64_t x51 = -1LL;
	int8_t x52 = INT8_MIN;
	static int64_t t8 = -187972785546731LL;

	t8 = (x49*(x50*(x51&x52)));

	if (t8 != -1069514880LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = 8U;
	uint16_t x62 = UINT16_MAX;
	uint64_t x63 = 109LLU;
	int8_t x64 = -1;

	t9 = (x61*(x62*(x63&x64)));

	if (t9 != 57146520LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 0;
	uint64_t x66 = 209198456067144LLU;
	int16_t x67 = -27;
	static volatile int16_t x68 = -1;
	uint64_t t10 = 2161104422002429LLU;

	t10 = (x65*(x66*(x67&x68)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x70 = 56U;
	static uint8_t x71 = 6U;
	static int64_t x72 = 273LL;

	t11 = (x69*(x70*(x71&x72)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x73 = INT32_MAX;
	uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 48U;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t12 = 3971893LLU;

	t12 = (x73*(x74*(x75&x76)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = -1LL;
	uint16_t x79 = 0U;
	static int32_t x80 = INT32_MIN;
	volatile uint64_t t13 = 1406906146LLU;

	t13 = (x77*(x78*(x79&x80)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x82 = 2422U;
	uint64_t x83 = 37576227172785156LLU;
	int8_t x84 = INT8_MIN;
	uint64_t t14 = 15759LLU;

	t14 = (x81*(x82*(x83&x84)));

	if (t14 != 1224098156062119936LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x85 = -723;
	int16_t x87 = -2;
	int8_t x88 = -54;
	volatile int32_t t15 = 74;

	t15 = (x85*(x86*(x87&x88)));

	if (t15 != 62818578) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MAX;
	static int32_t x90 = INT32_MIN;
	uint64_t x91 = UINT64_MAX;

	t16 = (x89*(x90*(x91&x92)));

	if (t16 != 1336965337186304LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x101 = 0;
	static uint8_t x102 = 0U;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t t17 = 11LLU;

	t17 = (x101*(x102*(x103&x104)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MAX;
	volatile int16_t x108 = -120;
	volatile int32_t t18 = 953819;

	t18 = (x105*(x106*(x107&x108)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x110 = UINT32_MAX;
	static volatile uint32_t x111 = 26661U;
	volatile uint64_t t19 = 5069367466280052LLU;

	t19 = (x109*(x110*(x111&x112)));

	if (t19 != 6727259098008010708LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x114 = -1;
	uint64_t x115 = 1261LLU;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t20 = 15953615LLU;

	t20 = (x113*(x114*(x115&x116)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x117 = INT8_MIN;
	uint8_t x118 = 28U;
	int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;
	volatile int64_t t21 = -466508100LL;

	t21 = (x117*(x118*(x119&x120)));

	if (t21 != 7696581394432LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x121 = -4;
	volatile uint16_t x123 = UINT16_MAX;
	volatile int16_t x124 = 0;
	int64_t t22 = -2933553LL;

	t22 = (x121*(x122*(x123&x124)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x126 = 1564839642U;
	uint16_t x127 = 31137U;
	static uint8_t x128 = 0U;
	volatile uint32_t t23 = 1U;

	t23 = (x125*(x126*(x127&x128)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x137 = 1;
	volatile int8_t x138 = INT8_MAX;
	static int8_t x139 = INT8_MAX;

	t24 = (x137*(x138*(x139&x140)));

	if (t24 != 3175) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = 0;
	int8_t x142 = -1;
	uint8_t x143 = 25U;
	uint16_t x144 = UINT16_MAX;

	t25 = (x141*(x142*(x143&x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x148 = 2;
	int64_t t26 = -136044570LL;

	t26 = (x145*(x146*(x147&x148)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x153 = -1LL;
	int8_t x154 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	uint64_t t27 = 906454LLU;

	t27 = (x153*(x154*(x155&x156)));

	if (t27 != 1066370698047389696LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x158 = -625;
	int16_t x159 = -1;
	int64_t x160 = -1LL;
	int64_t t28 = 487324539LL;

	t28 = (x157*(x158*(x159&x160)));

	if (t28 != -1342177280000LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = -1;
	uint8_t x170 = 16U;
	int16_t x171 = INT16_MIN;
	static uint32_t t29 = 337608367U;

	t29 = (x169*(x170*(x171&x172)));

	if (t29 != 524288U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = -18;
	uint8_t x174 = 2U;
	uint32_t x175 = 1170771292U;
	static volatile uint32_t t30 = 2U;

	t30 = (x173*(x174*(x175&x176)));

	if (t30 != 801906448U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 143787611LLU;
	uint32_t x182 = 147U;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -13;
	volatile uint64_t t31 = 1386796660068964LLU;

	t31 = (x181*(x182*(x183&x184)));

	if (t31 != 617560381307281280LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x185 = -13266760LL;
	volatile int32_t x186 = INT32_MIN;
	int32_t x187 = 840165700;
	int64_t x188 = 399LL;

	t32 = (x185*(x186*(x187&x188)));

	if (t32 != 7407439042104524800LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x189 = 40U;
	static uint8_t x191 = 3U;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t33 = 1943377LLU;

	t33 = (x189*(x190*(x191&x192)));

	if (t33 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x193 = -10LL;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	static uint64_t x196 = 543518837702LLU;

	t34 = (x193*(x194*(x195&x196)));

	if (t34 != 5433133629440LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = -544088160333LL;
	volatile uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = -1;

	t35 = (x197*(x198*(x199&x200)));

	if (t35 != 17759037553269120LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = -1357696449782333LL;
	int64_t x202 = INT64_MIN;
	static uint8_t x203 = 100U;
	volatile uint64_t t36 = 2LLU;

	t36 = (x201*(x202*(x203&x204)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x209 = 91U;
	volatile uint64_t t37 = 7909983LLU;

	t37 = (x209*(x210*(x211&x212)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = 3U;
	volatile int16_t x214 = 86;
	uint64_t x215 = UINT64_MAX;
	static uint32_t x216 = 1U;
	static uint64_t t38 = 14102443151053639LLU;

	t38 = (x213*(x214*(x215&x216)));

	if (t38 != 258LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x217 = INT8_MIN;
	static int8_t x218 = INT8_MIN;
	uint16_t x219 = 3483U;
	static int16_t x220 = INT16_MAX;
	int32_t t39 = 75620344;

	t39 = (x217*(x218*(x219&x220)));

	if (t39 != 57065472) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;

	t40 = (x221*(x222*(x223&x224)));

	if (t40 != 537415489341620224LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x226 = INT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile uint32_t t41 = 501312U;

	t41 = (x225*(x226*(x227&x228)));

	if (t41 != 622573U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = 316504277573LL;
	uint16_t x234 = 66U;
	uint8_t x235 = 23U;
	uint16_t x236 = 1171U;
	int64_t t42 = -18235393657063LL;

	t42 = (x233*(x234*(x235&x236)));

	if (t42 != 396896364076542LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x237 = 226U;
	int64_t x238 = -97648369LL;
	int16_t x239 = 42;
	int8_t x240 = 0;
	int64_t t43 = -33605307811LL;

	t43 = (x237*(x238*(x239&x240)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x241 = 646628495900160LLU;
	static int32_t x243 = 281110976;
	uint32_t x244 = UINT32_MAX;
	uint64_t t44 = 4649624527882295311LLU;

	t44 = (x241*(x242*(x243&x244)));

	if (t44 != 16983790017392640000LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x249 = 197451533LLU;
	int64_t x252 = 2342984702927283LL;
	volatile uint64_t t45 = 1020679216800748LLU;

	t45 = (x249*(x250*(x251&x252)));

	if (t45 != 2839320842760855927LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	int8_t x255 = 0;
	static int16_t x256 = 412;
	volatile int64_t t46 = -9188271LL;

	t46 = (x253*(x254*(x255&x256)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x257 = INT16_MAX;
	uint8_t x258 = 12U;
	uint32_t x259 = 1U;
	uint32_t t47 = 311U;

	t47 = (x257*(x258*(x259&x260)));

	if (t47 != 393204U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x263 = -217LL;
	uint32_t x264 = UINT32_MAX;
	static volatile int64_t t48 = 4622LL;

	t48 = (x261*(x262*(x263&x264)));

	if (t48 != -69818984836224LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x265 = -1;
	static volatile uint16_t x266 = 13944U;
	static uint64_t x267 = UINT64_MAX;
	static int64_t x268 = INT64_MAX;
	uint64_t t49 = 4301517LLU;

	t49 = (x265*(x266*(x267&x268)));

	if (t49 != 13944LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MIN;
	volatile uint8_t x271 = 15U;
	volatile uint16_t x272 = 11952U;
	int64_t t50 = 1317661LL;

	t50 = (x269*(x270*(x271&x272)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x274 = 24973335U;
	static int32_t x275 = INT32_MAX;
	static int8_t x276 = 1;
	volatile uint32_t t51 = 59766054U;

	t51 = (x273*(x274*(x275&x276)));

	if (t51 != 2012512256U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = UINT64_MAX;
	uint64_t t52 = 9348059831010163LLU;

	t52 = (x277*(x278*(x279&x280)));

	if (t52 != 32640LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x281 = 476800351U;
	int16_t x282 = -562;
	volatile uint64_t x284 = 62410664LLU;
	volatile uint64_t t53 = 56757465258629366LLU;

	t53 = (x281*(x282*(x283&x284)));

	if (t53 != 7062147023263134864LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x289 = 503649212U;
	volatile int8_t x290 = -43;
	static int32_t x292 = -305199828;
	volatile uint32_t t54 = 31302U;

	t54 = (x289*(x290*(x291&x292)));

	if (t54 != 578430608U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = 1U;
	static int16_t x294 = 1;
	static int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MIN;
	int64_t t55 = -6LL;

	t55 = (x293*(x294*(x295&x296)));

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = 1;
	static int64_t x298 = 1205897740790LL;
	int32_t x300 = INT32_MIN;
	volatile int64_t t56 = -739660966629633258LL;

	t56 = (x297*(x298*(x299&x300)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x309 = 1;
	static volatile int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t57 = -79;

	t57 = (x309*(x310*(x311&x312)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x313 = 998;
	volatile uint8_t x314 = 35U;
	volatile int32_t x315 = 52197;
	uint32_t x316 = UINT32_MAX;

	t58 = (x313*(x314*(x315&x316)));

	if (t58 != 1823241210U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x322 = INT8_MAX;
	static uint64_t x323 = 96499987669390444LLU;
	static int32_t x324 = -509325;
	uint64_t t59 = 1709383580806067781LLU;

	t59 = (x321*(x322*(x323&x324)));

	if (t59 != 8745445339267326048LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t60 = -250200818;

	t60 = (x329*(x330*(x331&x332)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x333 = 11762;
	int8_t x334 = -1;
	int32_t x335 = 33;

	t61 = (x333*(x334*(x335&x336)));

	if (t61 != -388146) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x338 = 1;
	int32_t x339 = -1;
	static uint8_t x340 = 27U;

	t62 = (x337*(x338*(x339&x340)));

	if (t62 != -884736) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x341 = 3U;
	volatile int16_t x342 = -5;
	int64_t x343 = INT64_MAX;
	volatile int64_t t63 = 11029LL;

	t63 = (x341*(x342*(x343&x344)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x346 = 31;
	uint8_t x347 = 26U;
	volatile int64_t x348 = INT64_MAX;
	int64_t t64 = -257886044033LL;

	t64 = (x345*(x346*(x347&x348)));

	if (t64 != -26411008LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x349 = 8310143415332300257LLU;
	volatile uint32_t x350 = 200U;
	uint32_t x351 = UINT32_MAX;
	static volatile uint64_t t65 = 465273LLU;

	t65 = (x349*(x350*(x351&x352)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 24133098980171LLU;
	static volatile int32_t x355 = INT32_MIN;
	int8_t x356 = 29;
	uint64_t t66 = 419744542502137873LLU;

	t66 = (x353*(x354*(x355&x356)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = -1;
	volatile int64_t t67 = 2777866465390791LL;

	t67 = (x357*(x358*(x359&x360)));

	if (t67 != -125265171840LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x361 = 6397U;
	volatile int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	volatile int64_t t68 = 828250658828071868LL;

	t68 = (x361*(x362*(x363&x364)));

	if (t68 != -209616896LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x369 = 974U;
	int8_t x370 = 1;
	int8_t x371 = 30;
	int16_t x372 = -346;
	int32_t t69 = 150671869;

	t69 = (x369*(x370*(x371&x372)));

	if (t69 != 5844) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x373 = 7U;
	static volatile uint16_t x374 = 113U;
	int64_t x376 = -1LL;
	static volatile uint64_t t70 = 372156156LLU;

	t70 = (x373*(x374*(x375&x376)));

	if (t70 != 18446744073709550825LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x377 = 77135500LLU;
	int16_t x378 = 117;
	static volatile int8_t x379 = 0;
	volatile uint64_t t71 = 128689339579LLU;

	t71 = (x377*(x378*(x379&x380)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x381 = INT16_MIN;
	static int16_t x382 = INT16_MIN;
	int64_t x383 = 15183568LL;
	int64_t t72 = -10003254174LL;

	t72 = (x381*(x382*(x383&x384)));

	if (t72 != 68719476736LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = 0;
	static int64_t x387 = -21935363LL;
	int16_t x388 = -1;
	volatile int64_t t73 = -5122045LL;

	t73 = (x385*(x386*(x387&x388)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -556171532457968931LL;
	volatile uint64_t x399 = UINT64_MAX;
	static int64_t x400 = INT64_MAX;
	uint64_t t74 = 400291509916LLU;

	t74 = (x397*(x398*(x399&x400)));

	if (t74 != 6530107391603145437LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	uint16_t x403 = 415U;

	t75 = (x401*(x402*(x403&x404)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x405 = 17;
	volatile uint64_t x406 = 85LLU;
	volatile int16_t x408 = INT16_MAX;
	static uint64_t t76 = 11402094220LLU;

	t76 = (x405*(x406*(x407&x408)));

	if (t76 != 47348315LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x409 = INT16_MIN;
	uint64_t x410 = 49283871LLU;
	int16_t x411 = INT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t77 = 3177180108250858LLU;

	t77 = (x409*(x410*(x411&x412)));

	if (t77 != 18393827535102115840LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	int16_t x416 = INT16_MIN;
	int32_t t78 = -287;

	t78 = (x413*(x414*(x415&x416)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x417 = -58;
	int32_t x418 = INT32_MIN;
	int64_t t79 = 23823LL;

	t79 = (x417*(x418*(x419&x420)));

	if (t79 != -4306580887568384LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x425 = INT32_MIN;
	int32_t x426 = 784196;
	uint32_t x428 = 1156U;
	uint32_t t80 = 475201179U;

	t80 = (x425*(x426*(x427&x428)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = INT16_MIN;
	static uint64_t x430 = 208040772LLU;
	int32_t x431 = -3270578;
	uint32_t x432 = 1387738127U;

	t81 = (x429*(x430*(x431&x432)));

	if (t81 != 6365388152800280576LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x433 = INT32_MIN;
	volatile uint32_t x434 = 386418U;
	int32_t x435 = 13690;
	int16_t x436 = INT16_MAX;
	volatile uint32_t t82 = 9U;

	t82 = (x433*(x434*(x435&x436)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x439 = -1;
	uint64_t x440 = 11510228264161735LLU;
	static volatile uint64_t t83 = 1884LLU;

	t83 = (x437*(x438*(x439&x440)));

	if (t83 != 13656667487620641568LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x446 = -1LL;
	int16_t x448 = -3244;

	t84 = (x445*(x446*(x447&x448)));

	if (t84 != 2752512LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x453 = INT16_MIN;
	uint8_t x455 = 11U;
	int64_t x456 = INT64_MIN;
	int64_t t85 = 35143804609485LL;

	t85 = (x453*(x454*(x455&x456)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x457 = INT32_MIN;
	int16_t x458 = -2;
	volatile int64_t t86 = -34722048384389LL;

	t86 = (x457*(x458*(x459&x460)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x465 = 9694561492169218LL;
	uint8_t x466 = 16U;
	static uint8_t x467 = 3U;
	int64_t x468 = -1LL;
	int64_t t87 = 73146785981LL;

	t87 = (x465*(x466*(x467&x468)));

	if (t87 != 465338951624122464LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x469 = INT16_MIN;
	static uint8_t x470 = 0U;
	uint16_t x472 = 124U;
	int32_t t88 = -3077;

	t88 = (x469*(x470*(x471&x472)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x473 = INT8_MIN;
	static int64_t x474 = -1LL;
	static uint8_t x475 = UINT8_MAX;
	int64_t x476 = INT64_MIN;
	int64_t t89 = 2541551698507493LL;

	t89 = (x473*(x474*(x475&x476)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x477 = -5;
	volatile uint64_t x478 = 69706964533149LLU;
	volatile uint32_t x479 = 40687U;
	int16_t x480 = INT16_MIN;
	volatile uint64_t t90 = 2105LLU;

	t90 = (x477*(x478*(x479&x480)));

	if (t90 != 7025955004598419456LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x481 = UINT32_MAX;
	int8_t x482 = -1;
	int32_t x483 = INT32_MIN;
	volatile uint32_t x484 = UINT32_MAX;
	static volatile uint32_t t91 = 65U;

	t91 = (x481*(x482*(x483&x484)));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x489 = 0U;
	int8_t x490 = -1;
	uint64_t x491 = 680985287838025366LLU;
	static uint8_t x492 = 3U;
	volatile uint64_t t92 = 52273LLU;

	t92 = (x489*(x490*(x491&x492)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x493 = 119828381726227492LLU;
	static volatile int64_t x494 = 129643917172LL;
	int32_t x495 = INT32_MAX;
	uint8_t x496 = 1U;
	uint64_t t93 = 1981962881907LLU;

	t93 = (x493*(x494*(x495&x496)));

	if (t93 != 14708939823338347600LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x497 = INT8_MIN;
	int16_t x498 = -250;
	int64_t x500 = INT64_MIN;
	uint64_t t94 = 6154LLU;

	t94 = (x497*(x498*(x499&x500)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x501 = UINT32_MAX;
	int8_t x502 = -1;
	int32_t x504 = -1;
	static uint64_t t95 = 421112LLU;

	t95 = (x501*(x502*(x503&x504)));

	if (t95 != 1672029672726840954LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x505 = -1LL;
	int64_t x506 = INT64_MAX;
	volatile int8_t x507 = 0;
	uint32_t x508 = 7313042U;
	volatile int64_t t96 = 2060LL;

	t96 = (x505*(x506*(x507&x508)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x513 = 185059107U;
	uint16_t x514 = 1U;
	static uint32_t x515 = 528892702U;
	static uint32_t t97 = 163U;

	t97 = (x513*(x514*(x515&x516)));

	if (t97 != 3445194522U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x517 = UINT32_MAX;
	uint16_t x519 = UINT16_MAX;
	int16_t x520 = 0;

	t98 = (x517*(x518*(x519&x520)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x525 = -1;
	static int8_t x527 = INT8_MIN;
	volatile uint32_t t99 = 1862789868U;

	t99 = (x525*(x526*(x527&x528)));

	if (t99 != 4294950912U) { NG(); } else { ; }
	
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

