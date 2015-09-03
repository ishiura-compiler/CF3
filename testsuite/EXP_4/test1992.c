#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
static int32_t t1 = -90627;
volatile int64_t x20 = 367379660438718LL;
uint32_t x21 = 1447U;
volatile uint64_t x47 = 6342713116593431775LLU;
volatile uint32_t x48 = 22578701U;
volatile uint64_t t7 = 2LLU;
static int16_t x53 = 584;
volatile uint32_t x59 = UINT32_MAX;
volatile uint64_t t10 = 10194LLU;
volatile uint64_t x65 = UINT64_MAX;
int16_t x66 = 144;
static volatile uint64_t t13 = 60216302625LLU;
uint32_t x74 = 248947454U;
int64_t t14 = 1697LL;
int32_t x77 = INT32_MIN;
int8_t x78 = INT8_MIN;
uint32_t t15 = 24808U;
uint64_t x82 = 8331093961LLU;
uint64_t x84 = UINT64_MAX;
uint64_t t16 = 443057LLU;
uint32_t x98 = UINT32_MAX;
int16_t x104 = INT16_MIN;
uint64_t t20 = 15703409788933499LLU;
int64_t t22 = -5492262553373LL;
int16_t x117 = INT16_MAX;
uint32_t x120 = 312763U;
volatile int64_t t23 = 85561060273730368LL;
int32_t x125 = -614;
volatile int32_t x132 = -1;
uint32_t t26 = 33533842U;
int32_t x137 = INT32_MIN;
int16_t x140 = INT16_MIN;
uint64_t x147 = 2995062470LLU;
volatile int16_t x154 = INT16_MIN;
int64_t x159 = 1816448196033LL;
uint8_t x160 = 38U;
uint64_t x173 = 1919735791LLU;
static volatile int16_t x194 = INT16_MIN;
int16_t x195 = INT16_MIN;
int64_t x197 = -152380565011LL;
int16_t x198 = 114;
volatile int32_t x199 = -1;
uint64_t t40 = 916LLU;
int32_t x216 = INT32_MAX;
uint32_t x223 = 2560U;
int32_t x225 = -15765;
uint64_t x227 = 7739850LLU;
volatile uint64_t t43 = 1024461942541LLU;
int64_t x238 = -594878LL;
int16_t x239 = INT16_MIN;
static volatile uint16_t x240 = 602U;
static int8_t x241 = INT8_MIN;
int16_t x244 = INT16_MIN;
volatile uint32_t x252 = 1U;
uint64_t x265 = 957LLU;
static int64_t x272 = -549231909LL;
uint32_t x279 = 1182650985U;
int64_t t54 = 32969357LL;
int16_t x302 = INT16_MAX;
static int32_t x314 = INT32_MAX;
int64_t x315 = -1LL;
int32_t x316 = -41493;
int64_t x324 = 425253LL;
int8_t x346 = INT8_MIN;
volatile int64_t t63 = 217301161493652LL;
volatile int64_t t65 = -369LL;
uint8_t x366 = 3U;
volatile int64_t x369 = 41425432LL;
int32_t x372 = -33;
int8_t x373 = -3;
int32_t x374 = INT32_MIN;
static volatile uint32_t t70 = 5065496U;
static int64_t x380 = -50169852LL;
int8_t x390 = INT8_MAX;
volatile int16_t x396 = INT16_MIN;
int16_t x399 = 0;
int16_t x400 = -1;
int32_t t76 = 59458741;
uint8_t x402 = 22U;
int16_t x405 = -1;
volatile int32_t x417 = INT32_MAX;
static int64_t t83 = 144758906758790475LL;
uint8_t x435 = 26U;
int32_t x440 = 2162;
uint32_t x448 = 48453U;
int32_t x451 = INT32_MIN;
uint8_t x470 = 1U;
int64_t t91 = INT64_MIN;
int16_t x492 = -1;
int16_t x500 = 1;
int32_t x502 = -1;
uint64_t x504 = 2027LLU;
uint64_t t97 = 323643LLU;
int16_t x507 = INT16_MIN;
uint64_t x508 = UINT64_MAX;
int64_t x509 = -5298797901508LL;
static volatile int64_t t99 = 374852853945LL;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int16_t x3 = -2;
	volatile uint32_t x4 = 979000866U;
	int64_t t0 = 1985LL;

	t0 = (x1*(x2&(x3|x4)));

	if (t0 != 1095216659970LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -131;
	int8_t x10 = 2;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;

	t1 = (x9*(x10&(x11|x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int8_t x14 = -61;
	static int64_t x15 = 5962793351832LL;
	static uint8_t x16 = 1U;
	static int64_t t2 = -2515LL;

	t2 = (x13*(x14&(x15|x16)));

	if (t2 != -5962793351809LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 88LLU;
	uint64_t t3 = 1023853815416264772LLU;

	t3 = (x17*(x18&(x19|x20)));

	if (t3 != 18446376694049144832LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = -1LL;
	volatile int32_t x23 = INT32_MIN;
	int8_t x24 = -1;
	volatile int64_t t4 = -504367273LL;

	t4 = (x21*(x22&(x23|x24)));

	if (t4 != -1447LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 21505463U;
	int8_t x34 = 0;
	static int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;
	volatile uint32_t t5 = 28053U;

	t5 = (x33*(x34&(x35|x36)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = 62U;
	int8_t x42 = INT8_MAX;
	volatile int16_t x43 = 2;
	volatile uint32_t x44 = 125330342U;
	volatile uint32_t t6 = 1885U;

	t6 = (x41*(x42&(x43|x44)));

	if (t6 != 2356U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = -4;

	t7 = (x45*(x46&(x47|x48)));

	if (t7 != 5049147137812594688LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = INT8_MAX;
	uint8_t x50 = 126U;
	int32_t x51 = INT32_MIN;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t8 = 182416;

	t8 = (x49*(x50&(x51|x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x54 = 1U;
	int32_t x55 = INT32_MIN;
	static int64_t x56 = -1258848LL;
	volatile int64_t t9 = 74402982816153565LL;

	t9 = (x53*(x54&(x55|x56)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 94173260987916LLU;
	static uint8_t x58 = 111U;
	uint8_t x60 = UINT8_MAX;

	t10 = (x57*(x58&(x59|x60)));

	if (t10 != 10453231969658676LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MAX;
	uint8_t x63 = 12U;
	int32_t x64 = INT32_MIN;
	int32_t t11 = -10521;

	t11 = (x61*(x62&(x63|x64)));

	if (t11 != 786420) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x67 = -1;
	int64_t x68 = INT64_MIN;
	static uint64_t t12 = 229333274726LLU;

	t12 = (x65*(x66&(x67|x68)));

	if (t12 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MIN;
	static int64_t x72 = -331LL;

	t13 = (x69*(x70&(x71|x72)));

	if (t13 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x75 = -8640;
	int64_t x76 = -24704851LL;

	t14 = (x73*(x74&(x75|x76)));

	if (t14 != -31864223232LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x79 = UINT32_MAX;
	int8_t x80 = 0;

	t15 = (x77*(x78&(x79|x80)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	static int32_t x83 = -4;

	t16 = (x81*(x82&(x83|x84)));

	if (t16 != 272984955820087LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 230835555LLU;
	volatile int16_t x86 = -1;
	int64_t x87 = 15626323149740LL;
	static uint64_t x88 = UINT64_MAX;
	static uint64_t t17 = 1155LLU;

	t17 = (x85*(x86&(x87|x88)));

	if (t17 != 18446744073478716061LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = 3;
	int64_t x91 = INT64_MAX;
	int8_t x92 = 7;
	volatile int64_t t18 = 1961229519251LL;

	t18 = (x89*(x90&(x91|x92)));

	if (t18 != -6442450944LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = 12;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = -1LL;
	int64_t t19 = -1030397LL;

	t19 = (x97*(x98&(x99|x100)));

	if (t19 != 51539607540LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 13LLU;
	int32_t x102 = -12815234;
	int8_t x103 = -1;

	t20 = (x101*(x102&(x103|x104)));

	if (t20 != 18446744073542953574LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 1U;
	volatile int64_t x110 = INT64_MAX;
	int8_t x111 = 0;
	static int8_t x112 = -1;
	int64_t t21 = INT64_MAX;

	t21 = (x109*(x110&(x111|x112)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = -1;
	static int8_t x114 = -3;
	int64_t x115 = INT64_MAX;
	int16_t x116 = -1513;

	t22 = (x113*(x114&(x115|x116)));

	if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x118 = 14U;
	int64_t x119 = INT64_MIN;

	t23 = (x117*(x118&(x119|x120)));

	if (t23 != 327670LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x121 = 8364365572023999027LLU;
	uint8_t x122 = 9U;
	uint64_t x123 = 937393488071424787LLU;
	static int16_t x124 = -1;
	volatile uint64_t t24 = 20576LLU;

	t24 = (x121*(x122&(x123|x124)));

	if (t24 != 1492313853377784779LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x126 = 1U;
	static volatile int64_t x127 = INT64_MIN;
	static uint32_t x128 = UINT32_MAX;
	int64_t t25 = -9951992862734LL;

	t25 = (x125*(x126&(x127|x128)));

	if (t25 != -614LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = -1;
	int8_t x130 = INT8_MAX;
	static uint32_t x131 = 229945U;

	t26 = (x129*(x130&(x131|x132)));

	if (t26 != 4294967169U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = INT8_MIN;
	volatile uint8_t x134 = 10U;
	int32_t x135 = -1;
	int32_t x136 = -821696;
	int32_t t27 = -1421;

	t27 = (x133*(x134&(x135|x136)));

	if (t27 != -1280) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x138 = INT32_MAX;
	volatile int64_t x139 = 607LL;
	volatile int64_t t28 = -11602LL;

	t28 = (x137*(x138&(x139|x140)));

	if (t28 != -4611616953205784576LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 28013U;
	int8_t x142 = 0;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t29 = -42;

	t29 = (x141*(x142&(x143|x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 0U;
	uint64_t x146 = 14LLU;
	int32_t x148 = -44391551;
	static uint64_t t30 = 1131678LLU;

	t30 = (x145*(x146&(x147|x148)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = 1U;
	uint16_t x155 = 59U;
	int16_t x156 = -1;
	static volatile int32_t t31 = -13127;

	t31 = (x153*(x154&(x155|x156)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = INT16_MAX;
	int64_t x158 = INT64_MAX;
	volatile int64_t t32 = -438539LL;

	t32 = (x157*(x158&(x159|x160)));

	if (t32 != 59519558040658457LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = 2;
	static volatile int32_t x163 = -1;
	volatile uint16_t x164 = 1809U;
	volatile int32_t t33 = -4;

	t33 = (x161*(x162&(x163|x164)));

	if (t33 != -65536) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	static uint64_t x170 = 8790267414880463LLU;
	int8_t x171 = 0;
	static int8_t x172 = 1;
	volatile uint64_t t34 = 3965608302843LLU;

	t34 = (x169*(x170&(x171|x172)));

	if (t34 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x174 = 17204106U;
	static int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MIN;
	uint64_t t35 = 12071982214LLU;

	t35 = (x173*(x174&(x175|x176)));

	if (t35 != 33027318842999936LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = 4LL;
	uint16_t x178 = 3U;
	static int8_t x179 = 1;
	int8_t x180 = 0;
	static volatile int64_t t36 = 0LL;

	t36 = (x177*(x178&(x179|x180)));

	if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int8_t x190 = 23;
	int64_t x191 = -4065917523LL;
	volatile int32_t x192 = -470913;
	int64_t t37 = -1LL;

	t37 = (x189*(x190&(x191|x192)));

	if (t37 != 1507305LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x193 = -40;
	volatile int64_t x196 = -101681LL;
	int64_t t38 = 12705386LL;

	t38 = (x193*(x194&(x195|x196)));

	if (t38 != 1310720LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x200 = INT16_MIN;
	volatile int64_t t39 = 69901253037519569LL;

	t39 = (x197*(x198&(x199|x200)));

	if (t39 != -17371384411254LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x205 = 1LLU;
	volatile int32_t x206 = INT32_MIN;
	static int16_t x207 = -1;
	int8_t x208 = -5;

	t40 = (x205*(x206&(x207|x208)));

	if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -2191;
	int32_t x214 = 7156;
	int8_t x215 = 9;
	int32_t t41 = 60219;

	t41 = (x213*(x214&(x215|x216)));

	if (t41 != -15678796) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x221 = UINT8_MAX;
	uint32_t x222 = UINT32_MAX;
	uint16_t x224 = 114U;
	static volatile uint32_t t42 = 677960U;

	t42 = (x221*(x222&(x223|x224)));

	if (t42 != 681870U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x226 = 1;
	volatile int8_t x228 = INT8_MAX;

	t43 = (x225*(x226&(x227|x228)));

	if (t43 != 18446744073709535851LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x237 = INT16_MIN;
	int64_t t44 = 3257574646573LL;

	t44 = (x237*(x238&(x239|x240)));

	if (t44 != 20398931968LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x242 = 76;
	uint64_t x243 = 586LLU;
	volatile uint64_t t45 = 87LLU;

	t45 = (x241*(x242&(x243|x244)));

	if (t45 != 18446744073709542400LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = -407058946036008LL;
	int8_t x251 = -56;
	int64_t t46 = 216672371LL;

	t46 = (x249*(x250&(x251|x252)));

	if (t46 != -28652656132096LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = 4;
	int64_t x258 = INT64_MAX;
	uint64_t x259 = 22LLU;
	static uint16_t x260 = UINT16_MAX;
	static volatile uint64_t t47 = 469291LLU;

	t47 = (x257*(x258&(x259|x260)));

	if (t47 != 262140LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x261 = 7U;
	int16_t x262 = -6;
	uint64_t x263 = 6737745989837LLU;
	uint64_t x264 = 361LLU;
	volatile uint64_t t48 = 1592418585059LLU;

	t48 = (x261*(x262&(x263|x264)));

	if (t48 != 47164221930840LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x266 = 1U;
	volatile uint32_t x267 = UINT32_MAX;
	int16_t x268 = 6;
	volatile uint64_t t49 = 1496LLU;

	t49 = (x265*(x266&(x267|x268)));

	if (t49 != 957LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -332336;
	int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 2U;
	volatile int64_t t50 = -1679044861733111559LL;

	t50 = (x269*(x270&(x271|x272)));

	if (t50 != 182529565952000LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x273 = 16;
	int16_t x274 = INT16_MAX;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = -1;
	int32_t t51 = 1;

	t51 = (x273*(x274&(x275|x276)));

	if (t51 != 524272) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = INT8_MAX;
	static volatile uint64_t x278 = UINT64_MAX;
	int16_t x280 = -1380;
	volatile uint64_t t52 = 917305389237286582LLU;

	t52 = (x277*(x278&(x279|x280)));

	if (t52 != 545460683651LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = 430579308LL;
	uint64_t x294 = 222495976LLU;
	uint32_t x295 = 69761744U;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t53 = 74970228329098LLU;

	t53 = (x293*(x294&(x295|x296)));

	if (t53 != 95802163378864608LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	static int16_t x299 = -6;
	int64_t x300 = INT64_MAX;

	t54 = (x297*(x298&(x299|x300)));

	if (t54 != -272730423296LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x301 = 4737305U;
	volatile uint32_t x303 = UINT32_MAX;
	volatile int32_t x304 = -226151827;
	uint32_t t55 = 2U;

	t55 = (x301*(x302&(x303|x304)));

	if (t55 != 608450279U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = -5703177LL;
	uint8_t x306 = 108U;
	static int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int64_t t56 = 4390266243419020017LL;

	t56 = (x305*(x306&(x307|x308)));

	if (t56 != -615943116LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 26U;
	int8_t x311 = -1;
	int8_t x312 = -1;
	static volatile int32_t t57 = 523929;

	t57 = (x309*(x310&(x311|x312)));

	if (t57 != -851968) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x313 = -80;
	int64_t t58 = 2LL;

	t58 = (x313*(x314&(x315|x316)));

	if (t58 != -171798691760LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = 1U;
	static volatile int64_t t59 = -2153207647498250LL;

	t59 = (x321*(x322&(x323|x324)));

	if (t59 != -12884901888LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = UINT16_MAX;
	uint8_t x330 = UINT8_MAX;
	static int8_t x331 = INT8_MIN;
	uint64_t x332 = 8738029474596142LLU;
	volatile uint64_t t60 = 2637604LLU;

	t60 = (x329*(x330&(x331|x332)));

	if (t60 != 11403090LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = 30991863LL;
	int32_t x335 = -1;
	volatile int32_t x336 = 102;
	volatile int64_t t61 = 18581571833LL;

	t61 = (x333*(x334&(x335|x336)));

	if (t61 != 7902925065LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x337 = -1;
	int64_t x338 = -1LL;
	int16_t x339 = -1;
	uint32_t x340 = 0U;
	static int64_t t62 = 2611592LL;

	t62 = (x337*(x338&(x339|x340)));

	if (t62 != -4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x345 = 2;
	uint16_t x347 = 1U;
	int64_t x348 = 3479830821329441500LL;

	t63 = (x345*(x346&(x347|x348)));

	if (t63 != 6959661642658882816LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x349 = 32242U;
	static int32_t x350 = INT32_MAX;
	static int64_t x351 = INT64_MAX;
	volatile int16_t x352 = -1;
	int64_t t64 = 20333118LL;

	t64 = (x349*(x350&(x351|x352)));

	if (t64 != 69239167746574LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x353 = -1;
	uint16_t x354 = 1U;
	static int64_t x355 = 91671107LL;
	int16_t x356 = 1;

	t65 = (x353*(x354&(x355|x356)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x357 = 1;
	int64_t x358 = -548005774031LL;
	uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 3835U;
	volatile uint64_t t66 = 15227864651728LLU;

	t66 = (x357*(x358&(x359|x360)));

	if (t66 != 18446743525703777585LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x361 = 5978U;
	uint32_t x362 = 64779U;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t67 = -32390582790LL;

	t67 = (x361*(x362&(x363|x364)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = 213;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t68 = 3458;

	t68 = (x365*(x366&(x367|x368)));

	if (t68 != 639) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x370 = 96237LL;
	volatile int8_t x371 = INT8_MAX;
	volatile int64_t t69 = 145LL;

	t69 = (x369*(x370&(x371|x372)));

	if (t69 != 3986659299384LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x375 = 470U;
	uint32_t x376 = UINT32_MAX;

	t70 = (x373*(x374&(x375|x376)));

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = 0U;
	static int8_t x379 = INT8_MIN;
	int64_t t71 = 973LL;

	t71 = (x377*(x378&(x379|x380)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x381 = -1LL;
	static volatile int8_t x382 = INT8_MIN;
	volatile int64_t x383 = 137663780LL;
	static uint32_t x384 = 123252192U;
	static int64_t t72 = -1094176843127740LL;

	t72 = (x381*(x382&(x383|x384)));

	if (t72 != -259833216LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x385 = UINT8_MAX;
	static uint8_t x386 = UINT8_MAX;
	int32_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	int32_t t73 = 4856118;

	t73 = (x385*(x386&(x387|x388)));

	if (t73 != 65025) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x389 = 1U;
	int64_t x391 = INT64_MIN;
	volatile uint64_t x392 = UINT64_MAX;
	uint64_t t74 = 6980084978LLU;

	t74 = (x389*(x390&(x391|x392)));

	if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x393 = 1528;
	int8_t x394 = INT8_MAX;
	static int32_t x395 = -1;
	volatile int32_t t75 = 102609;

	t75 = (x393*(x394&(x395|x396)));

	if (t75 != 194056) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = -109;
	int32_t x398 = 113895;

	t76 = (x397*(x398&(x399|x400)));

	if (t76 != -12414555) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x401 = -1;
	volatile int32_t x403 = 1;
	volatile uint64_t x404 = 16764761816987297LLU;
	static volatile uint64_t t77 = 5290226LLU;

	t77 = (x401*(x402&(x403|x404)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x406 = 4;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;
	static volatile int64_t t78 = 569019LL;

	t78 = (x405*(x406&(x407|x408)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = 1U;
	static int8_t x410 = 0;
	int16_t x411 = INT16_MAX;
	int64_t x412 = INT64_MAX;
	volatile int64_t t79 = 119LL;

	t79 = (x409*(x410&(x411|x412)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = 8648157757339LL;
	uint32_t x414 = UINT32_MAX;
	volatile uint8_t x415 = 29U;
	int8_t x416 = 1;
	volatile int64_t t80 = -664293LL;

	t80 = (x413*(x414&(x415|x416)));

	if (t80 != 250796574962831LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x418 = 1;
	uint64_t x419 = UINT64_MAX;
	uint16_t x420 = 4U;
	static volatile uint64_t t81 = 715LLU;

	t81 = (x417*(x418&(x419|x420)));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x421 = 1U;
	int32_t x422 = INT32_MAX;
	int8_t x423 = INT8_MAX;
	static volatile int16_t x424 = INT16_MAX;
	static int32_t t82 = 2620486;

	t82 = (x421*(x422&(x423|x424)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = -8482566028432LL;
	int8_t x426 = -4;
	int8_t x427 = INT8_MIN;
	int64_t x428 = 3807067213LL;

	t83 = (x425*(x426&(x427|x428)));

	if (t83 != 441093433478464LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = 0;
	int64_t x430 = INT64_MAX;
	static int16_t x431 = -239;
	uint8_t x432 = UINT8_MAX;
	static int64_t t84 = 4057LL;

	t84 = (x429*(x430&(x431|x432)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x433 = 30906LLU;
	uint32_t x434 = 106205U;
	int8_t x436 = INT8_MIN;
	uint64_t t85 = 2727LLU;

	t85 = (x433*(x434&(x435|x436)));

	if (t85 != 3280239216LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x437 = 48U;
	int8_t x438 = 28;
	int16_t x439 = INT16_MIN;
	volatile int32_t t86 = -96381541;

	t86 = (x437*(x438&(x439|x440)));

	if (t86 != 768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 3188U;
	uint16_t x442 = UINT16_MAX;
	static uint8_t x443 = 6U;
	int64_t x444 = INT64_MAX;
	volatile int64_t t87 = 36354168756430LL;

	t87 = (x441*(x442&(x443|x444)));

	if (t87 != 208925580LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x445 = 10U;
	static volatile int16_t x446 = INT16_MIN;
	volatile int64_t x447 = -593LL;
	static int64_t t88 = -208144224297LL;

	t88 = (x445*(x446&(x447|x448)));

	if (t88 != -327680LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = -1;
	uint16_t x450 = 3978U;
	int64_t x452 = INT64_MIN;
	volatile int64_t t89 = 3483587118744568LL;

	t89 = (x449*(x450&(x451|x452)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x465 = 113U;
	static uint16_t x466 = 1U;
	int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MIN;
	volatile int64_t t90 = 0LL;

	t90 = (x465*(x466&(x467|x468)));

	if (t90 != 113LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x469 = INT64_MIN;
	static int32_t x471 = 577;
	volatile int32_t x472 = -9564;

	t91 = (x469*(x470&(x471|x472)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x473 = -1;
	static volatile uint8_t x474 = 0U;
	int16_t x475 = 11;
	volatile int64_t x476 = INT64_MAX;
	int64_t t92 = 11815929564547163LL;

	t92 = (x473*(x474&(x475|x476)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x477 = INT32_MIN;
	uint32_t x478 = 0U;
	int64_t x479 = 104926156LL;
	static volatile uint16_t x480 = 121U;
	static volatile int64_t t93 = -30464088359517420LL;

	t93 = (x477*(x478&(x479|x480)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x481 = 3U;
	int8_t x482 = -1;
	static int8_t x483 = -4;
	uint32_t x484 = 1U;
	volatile uint32_t t94 = 42435037U;

	t94 = (x481*(x482&(x483|x484)));

	if (t94 != 4294967287U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x489 = INT32_MAX;
	int64_t x490 = -1LL;
	int64_t x491 = INT64_MIN;
	static volatile int64_t t95 = -15482100348037181LL;

	t95 = (x489*(x490&(x491|x492)));

	if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	uint16_t x499 = UINT16_MAX;
	volatile uint32_t t96 = 7339920U;

	t96 = (x497*(x498&(x499|x500)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = 1;
	int32_t x503 = -101301981;

	t97 = (x501*(x502&(x503|x504)));

	if (t97 != 18446744073608251371LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x505 = 19079114558607LLU;
	int64_t x506 = INT64_MAX;
	volatile uint64_t t98 = 3663104009866509336LLU;

	t98 = (x505*(x506&(x507|x508)));

	if (t98 != 9223352957740217201LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x510 = 0;
	volatile int16_t x511 = INT16_MAX;
	static volatile int16_t x512 = INT16_MIN;

	t99 = (x509*(x510&(x511|x512)));

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

