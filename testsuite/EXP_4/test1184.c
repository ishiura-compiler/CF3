#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -7;
uint16_t x14 = 0U;
int32_t x26 = -1;
volatile uint8_t x27 = 27U;
volatile int64_t x29 = 3388LL;
static int16_t x30 = -1;
volatile int32_t x31 = INT32_MIN;
volatile int64_t t5 = -4LL;
int64_t x36 = INT64_MAX;
int16_t x53 = -1;
volatile int32_t t9 = 495;
int32_t t11 = 20;
static volatile uint64_t x69 = 12420894552469LLU;
int8_t x71 = -1;
volatile uint64_t x77 = UINT64_MAX;
static volatile int8_t x78 = -14;
int8_t x96 = INT8_MIN;
int64_t x105 = -1LL;
static int32_t x106 = -1;
volatile int64_t t19 = 502LL;
static int64_t t21 = 2999712LL;
volatile int32_t x118 = 26806770;
int16_t x119 = 0;
static volatile uint32_t t22 = 18U;
static volatile int32_t x126 = -131;
static volatile int32_t t26 = 3047;
uint64_t x138 = UINT64_MAX;
int64_t x139 = INT64_MAX;
int16_t x141 = 192;
uint32_t x148 = 5164U;
uint64_t x162 = 1059507682822524478LLU;
volatile uint64_t t32 = 128947364091342LLU;
int32_t t35 = -30528;
uint64_t t36 = 11570903167410274LLU;
int64_t t37 = 12311855542188LL;
int64_t x198 = -7620998LL;
int64_t x204 = INT64_MIN;
int32_t x217 = INT32_MIN;
volatile uint8_t x222 = 1U;
uint64_t x224 = UINT64_MAX;
static volatile uint16_t x234 = 22U;
static int8_t x239 = INT8_MAX;
int8_t x244 = -1;
static int8_t x248 = INT8_MIN;
uint8_t x254 = 1U;
volatile int32_t t52 = -7617;
static int8_t x262 = INT8_MIN;
uint64_t x273 = 351492336783449104LLU;
static int32_t x274 = -4;
uint64_t x277 = 25551006323238LLU;
int8_t x279 = -1;
uint16_t x283 = 5U;
int8_t x286 = 2;
int64_t x288 = INT64_MIN;
uint64_t x295 = 1870635LLU;
volatile uint32_t t63 = 33331U;
int8_t x308 = INT8_MIN;
volatile int16_t x312 = INT16_MAX;
static int64_t x317 = -522077474258LL;
uint32_t x324 = 12885U;
int8_t x326 = INT8_MAX;
int16_t x332 = 791;
int32_t t70 = -32294;
static int64_t x339 = INT64_MIN;
volatile int8_t x351 = INT8_MIN;
uint64_t t75 = 128308986988LLU;
int32_t x359 = INT32_MAX;
static volatile int8_t x366 = INT8_MIN;
static int16_t x371 = -1;
int32_t x374 = 1;
int32_t t79 = -14573;
int64_t x383 = 1414439370LL;
int16_t x384 = INT16_MIN;
volatile int32_t t81 = 99926;
static int32_t t82 = 7;
uint64_t x390 = 7531830525594483LLU;
volatile int16_t x397 = INT16_MIN;
static uint64_t x404 = 6LLU;
int32_t t86 = -184131738;
static int32_t x406 = INT32_MAX;
static int64_t x407 = -945095LL;
int32_t x408 = -107;
static volatile uint32_t t90 = 16U;
volatile uint32_t x440 = 183917623U;
uint16_t x442 = UINT16_MAX;
int32_t x446 = INT32_MIN;
int64_t x448 = -33088021LL;
int64_t x455 = INT64_MIN;
int32_t x458 = -205982221;
static volatile int16_t x459 = INT16_MIN;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 1654317282491LLU;
	static volatile int32_t t0 = 722258;

	t0 = (x1+(x2+(x3==x4)));

	if (t0 != -32513) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 8894870LLU;
	uint8_t x10 = 1U;
	uint8_t x11 = 4U;
	int64_t x12 = INT64_MIN;
	uint64_t t1 = 158LLU;

	t1 = (x9+(x10+(x11==x12)));

	if (t1 != 8894871LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	int8_t x15 = INT8_MAX;
	uint64_t x16 = 3LLU;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x13+(x14+(x15==x16)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x21 = 252684300U;
	uint32_t x22 = 5U;
	volatile int16_t x23 = -7596;
	static volatile int8_t x24 = -1;
	uint32_t t3 = 20148796U;

	t3 = (x21+(x22+(x23==x24)));

	if (t3 != 252684305U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -3;
	volatile int32_t x28 = INT32_MIN;
	static volatile int32_t t4 = -6667;

	t4 = (x25+(x26+(x27==x28)));

	if (t4 != -4) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x32 = -1;

	t5 = (x29+(x30+(x31==x32)));

	if (t5 != 3387LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x33 = 8505U;
	static int8_t x34 = -7;
	int32_t x35 = INT32_MIN;
	static int32_t t6 = 24696;

	t6 = (x33+(x34+(x35==x36)));

	if (t6 != 8498) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 12178LLU;
	static int64_t x38 = INT64_MAX;
	volatile uint16_t x39 = 879U;
	static volatile uint16_t x40 = 2U;
	static uint64_t t7 = 4656560910752LLU;

	t7 = (x37+(x38+(x39==x40)));

	if (t7 != 9223372036854787985LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = -1;
	int64_t x47 = -1LL;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t8 = -403;

	t8 = (x45+(x46+(x47==x48)));

	if (t8 != 126) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x54 = 1U;
	int16_t x55 = INT16_MAX;
	uint32_t x56 = 401520453U;

	t9 = (x53+(x54+(x55==x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x57 = 1U;
	volatile int64_t x58 = INT64_MIN;
	int32_t x59 = 18714369;
	volatile uint32_t x60 = 51378U;
	static int64_t t10 = 5LL;

	t10 = (x57+(x58+(x59==x60)));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MAX;
	uint64_t x64 = UINT64_MAX;

	t11 = (x61+(x62+(x63==x64)));

	if (t11 != -2147450881) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -57;
	static int64_t x66 = -1LL;
	static uint8_t x67 = UINT8_MAX;
	volatile int64_t x68 = 1LL;
	static int64_t t12 = -2719051LL;

	t12 = (x65+(x66+(x67==x68)));

	if (t12 != -58LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x70 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t13 = 480105951LLU;

	t13 = (x69+(x70+(x71==x72)));

	if (t13 != 12420894552341LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x79 = 18U;
	int16_t x80 = INT16_MAX;
	uint64_t t14 = 3463753056534765772LLU;

	t14 = (x77+(x78+(x79==x80)));

	if (t14 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MAX;
	static int32_t x83 = 1399;
	int8_t x84 = 1;
	int64_t t15 = 593657LL;

	t15 = (x81+(x82+(x83==x84)));

	if (t15 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	uint64_t x90 = 49LLU;
	int32_t x91 = INT32_MIN;
	static int64_t x92 = INT64_MIN;
	uint64_t t16 = 23LLU;

	t16 = (x89+(x90+(x91==x92)));

	if (t16 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -1LL;
	int64_t x94 = 68042819867LL;
	static uint32_t x95 = 12605511U;
	volatile int64_t t17 = 212650LL;

	t17 = (x93+(x94+(x95==x96)));

	if (t17 != 68042819866LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	volatile int64_t x102 = -620LL;
	static volatile int32_t x103 = INT32_MIN;
	volatile int8_t x104 = 5;
	static volatile int64_t t18 = 2164871295088LL;

	t18 = (x101+(x102+(x103==x104)));

	if (t18 != -621LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x107 = INT64_MAX;
	int32_t x108 = INT32_MIN;

	t19 = (x105+(x106+(x107==x108)));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = UINT64_MAX;
	static uint8_t x111 = 5U;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t20 = 463108618LLU;

	t20 = (x109+(x110+(x111==x112)));

	if (t20 != 2147483646LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x113 = -27411858LL;
	int8_t x114 = -21;
	uint32_t x115 = 1U;
	static uint8_t x116 = 27U;

	t21 = (x113+(x114+(x115==x116)));

	if (t21 != -27411879LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = 15445U;
	int16_t x120 = INT16_MIN;

	t22 = (x117+(x118+(x119==x120)));

	if (t22 != 26822215U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = -1LL;
	volatile uint8_t x122 = 0U;
	int64_t x123 = INT64_MAX;
	static int64_t x124 = INT64_MIN;
	int64_t t23 = 84266861620551610LL;

	t23 = (x121+(x122+(x123==x124)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x125 = 105240024342766892LL;
	static int8_t x127 = 0;
	int32_t x128 = INT32_MAX;
	int64_t t24 = -1577985030LL;

	t24 = (x125+(x126+(x127==x128)));

	if (t24 != 105240024342766761LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 79716931U;
	int16_t x130 = INT16_MIN;
	int64_t x131 = 237102455518645432LL;
	int64_t x132 = INT64_MIN;
	uint32_t t25 = 163066U;

	t25 = (x129+(x130+(x131==x132)));

	if (t25 != 79684163U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x133 = INT8_MIN;
	int8_t x134 = -1;
	volatile int16_t x135 = INT16_MAX;
	static int16_t x136 = INT16_MAX;

	t26 = (x133+(x134+(x135==x136)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = -6190LL;
	volatile int8_t x140 = INT8_MIN;
	static uint64_t t27 = 85957906728408LLU;

	t27 = (x137+(x138+(x139==x140)));

	if (t27 != 18446744073709545425LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	int8_t x144 = INT8_MAX;
	int32_t t28 = 19462;

	t28 = (x141+(x142+(x143==x144)));

	if (t28 != -32576) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = 62;
	int64_t x147 = INT64_MIN;
	int32_t t29 = 0;

	t29 = (x145+(x146+(x147==x148)));

	if (t29 != -66) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -6188562;
	static int32_t x150 = INT32_MAX;
	uint32_t x151 = 2625520U;
	int32_t x152 = -322957;
	static int32_t t30 = -2987237;

	t30 = (x149+(x150+(x151==x152)));

	if (t30 != 2141295085) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 5798U;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	volatile int32_t x156 = -1;
	volatile int64_t t31 = -186487071LL;

	t31 = (x153+(x154+(x155==x156)));

	if (t31 != -9223372036854770010LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = UINT16_MAX;
	static volatile int64_t x163 = INT64_MIN;
	uint64_t x164 = 113580735514091LLU;

	t32 = (x161+(x162+(x163==x164)));

	if (t32 != 1059507682822590013LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = 45;
	uint64_t x166 = UINT64_MAX;
	static uint32_t x167 = 39959502U;
	uint8_t x168 = UINT8_MAX;
	uint64_t t33 = 625460425624344449LLU;

	t33 = (x165+(x166+(x167==x168)));

	if (t33 != 44LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	static uint64_t x170 = 4864886099334082963LLU;
	static int8_t x171 = 3;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t34 = 21203401213LLU;

	t34 = (x169+(x170+(x171==x172)));

	if (t34 != 4864886097186599315LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = -772;
	int8_t x174 = 1;
	volatile uint32_t x175 = 317049U;
	int64_t x176 = -6868933LL;

	t35 = (x173+(x174+(x175==x176)));

	if (t35 != -771) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile int32_t x182 = -1;
	static uint8_t x183 = 1U;
	static volatile uint64_t x184 = UINT64_MAX;

	t36 = (x181+(x182+(x183==x184)));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x185 = -1LL;
	static int64_t x186 = 14277999434696652LL;
	static int16_t x187 = INT16_MAX;
	uint8_t x188 = UINT8_MAX;

	t37 = (x185+(x186+(x187==x188)));

	if (t37 != 14277999434696651LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = 8;
	static uint16_t x194 = UINT16_MAX;
	int8_t x195 = -1;
	uint8_t x196 = 6U;
	int32_t t38 = 1;

	t38 = (x193+(x194+(x195==x196)));

	if (t38 != 65543) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x197 = INT8_MIN;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = 61872882873LL;
	int64_t t39 = 54LL;

	t39 = (x197+(x198+(x199==x200)));

	if (t39 != -7621126LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x201 = 35341962U;
	uint16_t x202 = 76U;
	volatile int8_t x203 = INT8_MIN;
	uint32_t t40 = 416U;

	t40 = (x201+(x202+(x203==x204)));

	if (t40 != 35342038U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MAX;
	volatile int32_t x207 = INT32_MAX;
	uint16_t x208 = 125U;
	volatile int64_t t41 = -46268736LL;

	t41 = (x205+(x206+(x207==x208)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint32_t x210 = 304890U;
	int32_t x211 = INT32_MIN;
	volatile int32_t x212 = -1;
	static uint32_t t42 = 915909015U;

	t42 = (x209+(x210+(x211==x212)));

	if (t42 != 304889U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x218 = 52995497261183LL;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = UINT8_MAX;
	int64_t t43 = 1053406561526953620LL;

	t43 = (x217+(x218+(x219==x220)));

	if (t43 != 52993349777535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = -52089725;
	volatile int32_t x223 = INT32_MIN;
	static int32_t t44 = -635;

	t44 = (x221+(x222+(x223==x224)));

	if (t44 != -52089724) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x225 = 51343550269953LLU;
	volatile int64_t x226 = INT64_MIN;
	uint16_t x227 = 5U;
	uint16_t x228 = 132U;
	volatile uint64_t t45 = 13388039LLU;

	t45 = (x225+(x226+(x227==x228)));

	if (t45 != 9223423380405045761LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = -28552;
	uint16_t x230 = 11U;
	uint8_t x231 = 2U;
	int32_t x232 = -1;
	int32_t t46 = -1;

	t46 = (x229+(x230+(x231==x232)));

	if (t46 != -28541) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 3496LLU;
	int32_t x235 = INT32_MAX;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t47 = 1728467317850289LLU;

	t47 = (x233+(x234+(x235==x236)));

	if (t47 != 3518LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int32_t x238 = 393744661;
	int64_t x240 = INT64_MIN;
	volatile int32_t t48 = -1;

	t48 = (x237+(x238+(x239==x240)));

	if (t48 != 393810196) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x241 = 345244211LLU;
	int64_t x242 = 35LL;
	volatile int64_t x243 = -1LL;
	volatile uint64_t t49 = 13755936734342LLU;

	t49 = (x241+(x242+(x243==x244)));

	if (t49 != 345244247LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = 36948571803LLU;
	uint32_t x246 = 283352U;
	uint32_t x247 = UINT32_MAX;
	volatile uint64_t t50 = 266375867689LLU;

	t50 = (x245+(x246+(x247==x248)));

	if (t50 != 36948855155LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x249 = INT32_MAX;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 112437U;
	static volatile int32_t t51 = -1;

	t51 = (x249+(x250+(x251==x252)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = 887;
	int16_t x255 = INT16_MAX;
	int8_t x256 = -1;

	t52 = (x253+(x254+(x255==x256)));

	if (t52 != 888) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	volatile uint8_t x260 = 29U;
	int32_t t53 = 0;

	t53 = (x257+(x258+(x259==x260)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = INT8_MIN;
	volatile uint8_t x263 = 7U;
	int16_t x264 = 18;
	volatile int32_t t54 = -715;

	t54 = (x261+(x262+(x263==x264)));

	if (t54 != -256) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x269 = 23;
	uint32_t x270 = UINT32_MAX;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;
	static uint32_t t55 = 2U;

	t55 = (x269+(x270+(x271==x272)));

	if (t55 != 22U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x275 = 15U;
	volatile int16_t x276 = INT16_MIN;
	static uint64_t t56 = 364805759710LLU;

	t56 = (x273+(x274+(x275==x276)));

	if (t56 != 351492336783449100LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x278 = 3717377U;
	static uint8_t x280 = UINT8_MAX;
	uint64_t t57 = 134430118792LLU;

	t57 = (x277+(x278+(x279==x280)));

	if (t57 != 25551010040615LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	volatile int64_t x282 = -1LL;
	int8_t x284 = INT8_MIN;
	static int64_t t58 = -121767578LL;

	t58 = (x281+(x282+(x283==x284)));

	if (t58 != -32769LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MIN;
	static volatile int64_t x287 = INT64_MIN;
	static int32_t t59 = 1;

	t59 = (x285+(x286+(x287==x288)));

	if (t59 != -32765) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x289 = 7U;
	uint32_t x290 = 13U;
	uint32_t x291 = 86079U;
	static int16_t x292 = INT16_MAX;
	volatile uint32_t t60 = 5798347U;

	t60 = (x289+(x290+(x291==x292)));

	if (t60 != 20U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x293 = 6294U;
	int32_t x294 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	volatile uint32_t t61 = 7U;

	t61 = (x293+(x294+(x295==x296)));

	if (t61 != 2147489942U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = -1;
	int8_t x298 = 0;
	volatile int8_t x299 = INT8_MIN;
	int16_t x300 = -3;
	volatile int32_t t62 = 298926;

	t62 = (x297+(x298+(x299==x300)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x301 = UINT32_MAX;
	uint8_t x302 = 5U;
	static int8_t x303 = INT8_MIN;
	uint64_t x304 = 188053711003666875LLU;

	t63 = (x301+(x302+(x303==x304)));

	if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MAX;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 80822978U;
	volatile uint64_t t64 = 9154895256529535039LLU;

	t64 = (x305+(x306+(x307==x308)));

	if (t64 != 32766LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x309 = 15U;
	int32_t x310 = INT32_MIN;
	int16_t x311 = 1;
	int32_t t65 = 97;

	t65 = (x309+(x310+(x311==x312)));

	if (t65 != -2147483633) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x318 = UINT32_MAX;
	static int16_t x319 = -44;
	uint8_t x320 = 38U;
	volatile int64_t t66 = 390213LL;

	t66 = (x317+(x318+(x319==x320)));

	if (t66 != -517782506963LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x321 = INT32_MIN;
	int64_t x322 = -1LL;
	int32_t x323 = INT32_MIN;
	volatile int64_t t67 = -47289092432207084LL;

	t67 = (x321+(x322+(x323==x324)));

	if (t67 != -2147483649LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MAX;
	static volatile int32_t x327 = INT32_MIN;
	static int16_t x328 = -1;
	volatile int32_t t68 = -156745;

	t68 = (x325+(x326+(x327==x328)));

	if (t68 != 32894) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x329 = -7LL;
	volatile int32_t x330 = -40;
	int16_t x331 = 9;
	int64_t t69 = -187631781290LL;

	t69 = (x329+(x330+(x331==x332)));

	if (t69 != -47LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MIN;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;

	t70 = (x333+(x334+(x335==x336)));

	if (t70 != -32513) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x337 = -23;
	volatile int64_t x338 = INT64_MAX;
	uint32_t x340 = 521281630U;
	static volatile int64_t t71 = 51LL;

	t71 = (x337+(x338+(x339==x340)));

	if (t71 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	int8_t x344 = -1;
	static int32_t t72 = -10;

	t72 = (x341+(x342+(x343==x344)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x346 = -366281933;
	int8_t x347 = 1;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t73 = 671967LLU;

	t73 = (x345+(x346+(x347==x348)));

	if (t73 != 18446744073343269682LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x349 = UINT16_MAX;
	uint16_t x350 = 4045U;
	int16_t x352 = -1;
	int32_t t74 = 6;

	t74 = (x349+(x350+(x351==x352)));

	if (t74 != 69580) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	static uint64_t x354 = 5039436LLU;
	volatile int8_t x355 = INT8_MIN;
	volatile uint64_t x356 = 13LLU;

	t75 = (x353+(x354+(x355==x356)));

	if (t75 != 9223372036859815244LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x357 = 1U;
	int64_t x358 = INT64_MIN;
	static int8_t x360 = INT8_MAX;
	volatile int64_t t76 = -26167358LL;

	t76 = (x357+(x358+(x359==x360)));

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x365 = INT8_MAX;
	static volatile int64_t x367 = -1LL;
	int64_t x368 = INT64_MAX;
	int32_t t77 = 1;

	t77 = (x365+(x366+(x367==x368)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x369 = -1593589831368666701LL;
	volatile int32_t x370 = 16;
	volatile int8_t x372 = INT8_MIN;
	int64_t t78 = 14875550257803821LL;

	t78 = (x369+(x370+(x371==x372)));

	if (t78 != -1593589831368666685LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x375 = 1U;
	int32_t x376 = INT32_MAX;

	t79 = (x373+(x374+(x375==x376)));

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x377 = -12926;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	int32_t t80 = 7389728;

	t80 = (x377+(x378+(x379==x380)));

	if (t80 != 19841) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = 874071;
	volatile uint16_t x382 = 2U;

	t81 = (x381+(x382+(x383==x384)));

	if (t81 != 874073) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -1;
	int32_t x386 = 109;
	int64_t x387 = INT64_MIN;
	volatile uint8_t x388 = 1U;

	t82 = (x385+(x386+(x387==x388)));

	if (t82 != 108) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x389 = INT64_MAX;
	int32_t x391 = INT32_MAX;
	uint64_t x392 = UINT64_MAX;
	uint64_t t83 = 25258446510908LLU;

	t83 = (x389+(x390+(x391==x392)));

	if (t83 != 9230903867380370290LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x393 = 1;
	static int32_t x394 = 110911361;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t x396 = -1;
	volatile int32_t t84 = 13748;

	t84 = (x393+(x394+(x395==x396)));

	if (t84 != 110911362) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x398 = 0;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t85 = -312683;

	t85 = (x397+(x398+(x399==x400)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = 5;
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x403 = INT8_MIN;

	t86 = (x401+(x402+(x403==x404)));

	if (t86 != 65540) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = -1;
	static int32_t t87 = 216411639;

	t87 = (x405+(x406+(x407==x408)));

	if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = UINT32_MAX;
	static int64_t x410 = -1LL;
	volatile int64_t x411 = INT64_MIN;
	volatile uint8_t x412 = 12U;
	int64_t t88 = -68167864LL;

	t88 = (x409+(x410+(x411==x412)));

	if (t88 != 4294967294LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = 1260;
	static int32_t x415 = -1;
	uint32_t x416 = UINT32_MAX;
	uint32_t t89 = 2161052U;

	t89 = (x413+(x414+(x415==x416)));

	if (t89 != 1260U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 1U;
	int32_t x422 = INT32_MIN;
	volatile int64_t x423 = -1LL;
	int64_t x424 = 54320659699558795LL;

	t90 = (x421+(x422+(x423==x424)));

	if (t90 != 2147483649U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -1LL;
	int64_t x426 = -3350LL;
	int32_t x427 = INT32_MIN;
	volatile int16_t x428 = 1;
	static volatile int64_t t91 = -1LL;

	t91 = (x425+(x426+(x427==x428)));

	if (t91 != -3351LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = -202;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t92 = 166837;

	t92 = (x429+(x430+(x431==x432)));

	if (t92 != -32970) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x437 = 1U;
	uint8_t x438 = 13U;
	int64_t x439 = INT64_MIN;
	int32_t t93 = -3212379;

	t93 = (x437+(x438+(x439==x440)));

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x441 = UINT8_MAX;
	volatile uint8_t x443 = UINT8_MAX;
	int64_t x444 = -315684675LL;
	volatile int32_t t94 = -14597918;

	t94 = (x441+(x442+(x443==x444)));

	if (t94 != 65790) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = UINT16_MAX;
	volatile int64_t x447 = 1337262079466089648LL;
	int32_t t95 = 65056;

	t95 = (x445+(x446+(x447==x448)));

	if (t95 != -2147418113) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x449 = INT32_MAX;
	int64_t x450 = INT64_MIN;
	uint8_t x451 = 0U;
	static int16_t x452 = -28;
	int64_t t96 = -20LL;

	t96 = (x449+(x450+(x451==x452)));

	if (t96 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x453 = -1;
	int8_t x454 = -1;
	static int32_t x456 = -1;
	volatile int32_t t97 = -5009633;

	t97 = (x453+(x454+(x455==x456)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MIN;
	static int32_t x460 = INT32_MIN;
	int32_t t98 = -29;

	t98 = (x457+(x458+(x459==x460)));

	if (t98 != -206014989) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x461 = -6814;
	volatile int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MIN;
	int32_t t99 = 1294845;

	t99 = (x461+(x462+(x463==x464)));

	if (t99 != -39582) { NG(); } else { ; }
	
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

