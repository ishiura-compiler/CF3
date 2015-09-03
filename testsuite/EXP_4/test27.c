#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
static int8_t x9 = INT8_MAX;
volatile int32_t x12 = INT32_MAX;
uint16_t x14 = 7U;
int32_t x15 = -794477;
static int16_t x26 = INT16_MIN;
volatile uint32_t t6 = 116494196U;
int16_t x45 = 0;
volatile int32_t t9 = -4600613;
uint8_t x49 = UINT8_MAX;
static int8_t x50 = -1;
uint32_t x77 = UINT32_MAX;
int32_t x85 = INT32_MAX;
static int16_t x88 = INT16_MIN;
int32_t t15 = -76190;
static uint64_t t16 = 7LLU;
volatile uint64_t t17 = 7181023LLU;
volatile uint32_t x99 = 314478293U;
static uint64_t x106 = 14881808608995LLU;
uint64_t x114 = UINT64_MAX;
int16_t x117 = INT16_MAX;
int16_t x127 = INT16_MIN;
int16_t x128 = INT16_MIN;
int32_t x138 = INT32_MIN;
uint8_t x143 = 1U;
uint8_t x145 = 29U;
int64_t t29 = 148596LL;
uint8_t x157 = UINT8_MAX;
static int32_t x175 = -1;
volatile int16_t x185 = INT16_MAX;
uint8_t x186 = 1U;
static uint32_t x198 = 19879584U;
int64_t x201 = -1LL;
volatile uint64_t x203 = 669067LLU;
int64_t t36 = -1886151356LL;
int8_t x214 = 0;
static uint64_t t37 = 27209593LLU;
int16_t x220 = 0;
int8_t x221 = -36;
volatile uint8_t x223 = 2U;
int32_t t39 = -48000;
volatile int16_t x233 = INT16_MIN;
int16_t x234 = -1;
int64_t t42 = 729714779LL;
static int32_t x250 = -1;
int32_t x251 = INT32_MAX;
uint8_t x255 = 7U;
int64_t x263 = INT64_MAX;
volatile uint64_t x264 = 1483256272LLU;
static int64_t x267 = -1LL;
uint16_t x274 = 541U;
volatile int16_t x275 = 1;
uint8_t x276 = 20U;
int32_t t47 = -13566784;
static int8_t x283 = INT8_MIN;
uint32_t x310 = 31657724U;
uint64_t x311 = UINT64_MAX;
volatile int64_t x312 = 83300755LL;
volatile int64_t x344 = -1LL;
int64_t t56 = 0LL;
volatile uint16_t x347 = 968U;
uint32_t t58 = 1U;
uint64_t x354 = 274LLU;
volatile int64_t t61 = -300974LL;
volatile uint8_t x386 = 17U;
static volatile int16_t x388 = INT16_MAX;
int64_t x419 = -1LL;
uint32_t x420 = 2U;
static volatile int8_t x423 = INT8_MAX;
volatile int16_t x430 = INT16_MAX;
volatile int32_t x435 = INT32_MAX;
int32_t t75 = -873;
int8_t x463 = INT8_MIN;
uint64_t t77 = 2135981505805659LLU;
int16_t x490 = INT16_MIN;
static uint64_t x500 = UINT64_MAX;
uint64_t t80 = 949646829435LLU;
volatile int64_t x501 = INT64_MIN;
static int64_t t81 = -9826473507458LL;
int8_t x511 = INT8_MIN;
static uint64_t t84 = 308731713LLU;
static volatile uint32_t x525 = UINT32_MAX;
int32_t x528 = -2010088;
int16_t x530 = 10;
int8_t x535 = 56;
int8_t x538 = INT8_MIN;
uint64_t t90 = 24858968154LLU;
int64_t x545 = -1LL;
static uint16_t x549 = 20U;
volatile int64_t x551 = -33137LL;
int8_t x559 = -42;
static volatile int64_t t93 = -1909962725370823809LL;
int8_t x575 = 19;
volatile uint32_t t96 = 7585U;
uint64_t t97 = 99238LLU;
volatile int16_t x586 = -1;
static uint32_t x589 = 57U;
uint32_t x591 = 17909716U;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = -1;
	uint8_t x4 = 2U;
	int32_t t0 = -79156;

	t0 = (x1+(x2*(x3+x4)));

	if (t0 != 125) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = -1;
	int16_t x11 = INT16_MIN;
	volatile int32_t t1 = -258033282;

	t1 = (x9+(x10*(x11+x12)));

	if (t1 != -2147450752) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int32_t x16 = -76;
	uint32_t t2 = 357041391U;

	t2 = (x13+(x14*(x15+x16)));

	if (t2 != 4289405424U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -4774;
	int32_t x22 = -233;
	uint16_t x23 = 10484U;
	uint64_t x24 = UINT64_MAX;
	static uint64_t t3 = 3570LLU;

	t3 = (x21+(x22*(x23+x24)));

	if (t3 != 18446744073707104303LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -62046526699554LL;
	static int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	static volatile int64_t t4 = -4238085802843LL;

	t4 = (x25+(x26*(x27+x28)));

	if (t4 != -62048669956130LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 181720LLU;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 775267727LLU;
	volatile uint64_t t5 = 1LLU;

	t5 = (x29+(x30*(x31+x32)));

	if (t5 != 921360960714192LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	static volatile int32_t x35 = -1;
	uint32_t x36 = UINT32_MAX;

	t6 = (x33+(x34*(x35+x36)));

	if (t6 != 65535U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -17LL;
	static uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	static volatile int64_t t7 = 188154118534636LL;

	t7 = (x37+(x38*(x39+x40)));

	if (t7 != 64753LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	volatile int32_t x43 = -549733209;
	static int16_t x44 = INT16_MIN;
	int32_t t8 = 18860;

	t8 = (x41+(x42*(x43+x44)));

	if (t8 != 549733209) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MAX;

	t9 = (x45+(x46*(x47+x48)));

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	static volatile int64_t t10 = 149113181201434605LL;

	t10 = (x49+(x50*(x51+x52)));

	if (t10 != 9223372034707292416LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 92U;
	int8_t x62 = INT8_MIN;
	static volatile int32_t x63 = -1;
	uint32_t x64 = 411895U;
	volatile uint32_t t11 = 7945U;

	t11 = (x61+(x62*(x63+x64)));

	if (t11 != 4242244956U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x65 = INT8_MIN;
	int32_t x66 = -280456;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 3104030465441300LLU;
	volatile uint64_t t12 = 116897015198LLU;

	t12 = (x65+(x66*(x67+x68)));

	if (t12 != 14899747322289143008LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = INT16_MIN;
	static int16_t x70 = INT16_MIN;
	uint64_t x71 = 14026975494490187LLU;
	int32_t x72 = -8813069;
	uint64_t t13 = 24LLU;

	t13 = (x69+(x70*(x71+x72)));

	if (t13 != 1532669128070955008LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x78 = 31769U;
	uint32_t x79 = 2U;
	volatile uint8_t x80 = 109U;
	volatile uint32_t t14 = 730576U;

	t14 = (x77+(x78*(x79+x80)));

	if (t14 != 3526358U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x86 = 14U;
	int16_t x87 = INT16_MIN;

	t15 = (x85+(x86*(x87+x88)));

	if (t15 != 2146566143) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 5847105LLU;
	volatile int64_t x90 = 229089LL;
	int16_t x91 = -5;
	int16_t x92 = 807;

	t16 = (x89+(x90*(x91+x92)));

	if (t16 != 189576483LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -1LL;
	volatile uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	volatile int8_t x96 = -1;

	t17 = (x93+(x94*(x95+x96)));

	if (t17 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x97 = INT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	uint16_t x100 = 4601U;
	volatile uint32_t t18 = 94U;

	t18 = (x97+(x98*(x99+x100)));

	if (t18 != 3980484529U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 12013065LLU;
	int8_t x107 = -31;
	int8_t x108 = -1;
	uint64_t t19 = 33794517607LLU;

	t19 = (x105+(x106*(x107+x108)));

	if (t19 != 18446267855846076841LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = INT64_MIN;
	static int64_t x110 = 480635973477LL;
	volatile int16_t x111 = -1;
	uint8_t x112 = 4U;
	volatile int64_t t20 = -3659684902985902467LL;

	t20 = (x109+(x110*(x111+x112)));

	if (t20 != -9223370594946855377LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x113 = -1;
	volatile uint32_t x115 = UINT32_MAX;
	static uint8_t x116 = 7U;
	static volatile uint64_t t21 = 35184LLU;

	t21 = (x113+(x114*(x115+x116)));

	if (t21 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = -16;
	uint16_t x119 = 24U;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t22 = -5;

	t22 = (x117+(x118*(x119+x120)));

	if (t22 != 556671) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = 1543;
	uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = INT16_MIN;
	static int16_t x124 = -1302;
	volatile uint64_t t23 = 36754504LLU;

	t23 = (x121+(x122*(x123+x124)));

	if (t23 != 35613LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 125U;
	uint16_t x126 = 2582U;
	volatile int32_t t24 = -3;

	t24 = (x125+(x126*(x127+x128)));

	if (t24 != -169213827) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 6U;
	int64_t x139 = -1LL;
	volatile int16_t x140 = -1;
	static volatile int64_t t25 = 84091800LL;

	t25 = (x137+(x138*(x139+x140)));

	if (t25 != 4294967302LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x141 = 0;
	uint16_t x142 = UINT16_MAX;
	uint64_t x144 = 12259753200644277LLU;
	uint64_t t26 = 4096374754LLU;

	t26 = (x141+(x142*(x143+x144)));

	if (t26 != 10232930834712039242LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x146 = INT8_MIN;
	static volatile uint8_t x147 = 3U;
	int8_t x148 = INT8_MIN;
	int32_t t27 = -40;

	t27 = (x145+(x146*(x147+x148)));

	if (t27 != 16029) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = UINT32_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint64_t t28 = 902LLU;

	t28 = (x149+(x150*(x151+x152)));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = 29;
	static uint16_t x154 = 1U;
	int16_t x155 = -1;
	int64_t x156 = -1LL;

	t29 = (x153+(x154*(x155+x156)));

	if (t29 != 27LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x158 = INT8_MAX;
	int16_t x159 = -1;
	int32_t x160 = 0;
	int32_t t30 = -192;

	t30 = (x157+(x158*(x159+x160)));

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x165 = 36U;
	static volatile int64_t x166 = -126468376697286LL;
	volatile int16_t x167 = INT16_MIN;
	static volatile int8_t x168 = INT8_MIN;
	volatile int64_t t31 = 238150766LL;

	t31 = (x165+(x166*(x167+x168)));

	if (t31 != 4160303719833920292LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = 39565835;
	static volatile int64_t x174 = 23526925LL;
	uint32_t x176 = 0U;
	static int64_t t32 = -44243705LL;

	t32 = (x173+(x174*(x175+x176)));

	if (t32 != 101047373466483710LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x187 = 1783U;
	static int8_t x188 = 10;
	static volatile int32_t t33 = -2015;

	t33 = (x185+(x186*(x187+x188)));

	if (t33 != 34560) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x197 = INT8_MIN;
	int64_t x199 = -214911587LL;
	uint16_t x200 = 58U;
	int64_t t34 = 32118074816794LL;

	t34 = (x197+(x198*(x199+x200)));

	if (t34 != -4272351793324064LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x202 = INT8_MAX;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t35 = 5449405976357LLU;

	t35 = (x201+(x202*(x203+x204)));

	if (t35 != 84955252LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = -1521;
	uint32_t x207 = 56U;
	volatile int64_t x208 = -1LL;

	t36 = (x205+(x206*(x207+x208)));

	if (t36 != -116423LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x213 = INT64_MAX;
	uint64_t x215 = 2422732359080682LLU;
	static int16_t x216 = -1;

	t37 = (x213+(x214*(x215+x216)));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = 13654241;
	uint64_t x219 = 6386346008218LLU;
	static uint64_t t38 = 1LLU;

	t38 = (x217+(x218*(x219+x220)));

	if (t38 != 4190359173903570266LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x222 = -1;
	uint8_t x224 = 71U;

	t39 = (x221+(x222*(x223+x224)));

	if (t39 != -109) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x235 = -1;
	int16_t x236 = -88;
	static int32_t t40 = 1;

	t40 = (x233+(x234*(x235+x236)));

	if (t40 != -32679) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x237 = 35264343U;
	volatile uint64_t x238 = 255762237LLU;
	uint16_t x239 = 1U;
	static uint32_t x240 = UINT32_MAX;
	uint64_t t41 = 3135LLU;

	t41 = (x237+(x238*(x239+x240)));

	if (t41 != 35264343LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x241 = INT64_MIN;
	static int16_t x242 = -1;
	int16_t x243 = 1;
	uint32_t x244 = 292960915U;

	t42 = (x241+(x242*(x243+x244)));

	if (t42 != -9223372032852769428LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x249 = 3U;
	int32_t x252 = INT32_MIN;
	int32_t t43 = -4057518;

	t43 = (x249+(x250*(x251+x252)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x253 = 337535147LLU;
	static uint64_t x254 = 66LLU;
	static int8_t x256 = INT8_MIN;
	static volatile uint64_t t44 = 1149LLU;

	t44 = (x253+(x254*(x255+x256)));

	if (t44 != 337527161LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = -24;
	static volatile uint64_t t45 = 268673135590LLU;

	t45 = (x261+(x262*(x263+x264)));

	if (t45 != 18446744038111466647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x265 = -1;
	uint64_t x266 = 32184538048873530LLU;
	int16_t x268 = -1;
	volatile uint64_t t46 = 5685LLU;

	t46 = (x265+(x266*(x267+x268)));

	if (t46 != 18382374997611804555LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x273 = 6U;

	t47 = (x273+(x274*(x275+x276)));

	if (t47 != 11367) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = 10U;
	int16_t x284 = INT16_MAX;
	static int32_t t48 = -39;

	t48 = (x281+(x282*(x283+x284)));

	if (t48 != 326262) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint64_t x286 = 133575390598863LLU;
	int64_t x287 = -1LL;
	uint8_t x288 = UINT8_MAX;
	static volatile uint64_t t49 = 157168LLU;

	t49 = (x285+(x286*(x287+x288)));

	if (t49 != 33928149212111457LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x289 = 7;
	uint64_t x290 = 17848627LLU;
	volatile uint64_t x291 = UINT64_MAX;
	static int16_t x292 = -1;
	volatile uint64_t t50 = 1696176389LLU;

	t50 = (x289+(x290*(x291+x292)));

	if (t50 != 18446744073673854369LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = 139U;
	static int16_t x294 = INT16_MIN;
	uint32_t x295 = 1897919U;
	uint16_t x296 = UINT16_MAX;
	uint32_t t51 = 8247U;

	t51 = (x293+(x294*(x295+x296)));

	if (t51 != 86048907U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MAX;
	static uint64_t t52 = 7376752838LLU;

	t52 = (x297+(x298*(x299+x300)));

	if (t52 != 2147483393LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x309 = 1;
	uint64_t t53 = 1480237221200622LLU;

	t53 = (x309+(x310*(x311+x312)));

	if (t53 != 2637112279123897LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x317 = UINT16_MAX;
	uint16_t x318 = 15U;
	uint8_t x319 = 56U;
	int32_t x320 = 63;
	int32_t t54 = 8428755;

	t54 = (x317+(x318*(x319+x320)));

	if (t54 != 67320) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x333 = INT8_MAX;
	static uint32_t x334 = 2821981U;
	volatile int16_t x335 = 285;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t55 = 1883013U;

	t55 = (x333+(x334*(x335+x336)));

	if (t55 != 1059195819U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x341 = 149;
	static int16_t x342 = -308;
	uint16_t x343 = UINT16_MAX;

	t56 = (x341+(x342*(x343+x344)));

	if (t56 != -20184323LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x345 = -19521766LL;
	static volatile int8_t x346 = INT8_MIN;
	static uint32_t x348 = 144637U;
	static int64_t t57 = -5242042727LL;

	t57 = (x345+(x346*(x347+x348)));

	if (t57 != 4256808090LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x349 = UINT32_MAX;
	static volatile uint16_t x350 = 54U;
	int16_t x351 = -1;
	uint16_t x352 = 39U;

	t58 = (x349+(x350*(x351+x352)));

	if (t58 != 2051U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x353 = INT16_MIN;
	static int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	uint64_t t59 = 19950663LLU;

	t59 = (x353+(x354*(x355+x356)));

	if (t59 != 1176821005788LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x361 = UINT64_MAX;
	static uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MIN;
	static uint8_t x364 = 31U;
	uint64_t t60 = 49408LLU;

	t60 = (x361+(x362*(x363+x364)));

	if (t60 != 18446744073703194720LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x369 = -1;
	volatile int64_t x370 = -1LL;
	volatile int32_t x371 = 0;
	int16_t x372 = -3;

	t61 = (x369+(x370*(x371+x372)));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x377 = 212LLU;
	int32_t x378 = -1852579;
	int64_t x379 = 34232230438582LL;
	static uint64_t x380 = 254589551LLU;
	static uint64_t t62 = 66845986030540LLU;

	t62 = (x377+(x378*(x379+x380)));

	if (t62 != 10368593413904601669LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x387 = -1LL;
	volatile int64_t t63 = 19LL;

	t63 = (x385+(x386*(x387+x388)));

	if (t63 != 622557LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x389 = 219LLU;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	int8_t x392 = INT8_MAX;
	static volatile uint64_t t64 = 169451LLU;

	t64 = (x389+(x390*(x391+x392)));

	if (t64 != 18446744073705423067LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x397 = INT16_MAX;
	uint16_t x398 = 2U;
	int16_t x399 = INT16_MAX;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t65 = 3057137567LLU;

	t65 = (x397+(x398*(x399+x400)));

	if (t65 != 98299LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x401 = 11552342U;
	volatile int64_t x402 = INT64_MIN;
	uint64_t x403 = 6387508495LLU;
	uint64_t x404 = 2808LLU;
	uint64_t t66 = 4LLU;

	t66 = (x401+(x402*(x403+x404)));

	if (t66 != 9223372036866328150LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x405 = 60780443185LL;
	uint16_t x406 = 1U;
	static int16_t x407 = 17;
	static volatile uint16_t x408 = 299U;
	int64_t t67 = 390LL;

	t67 = (x405+(x406*(x407+x408)));

	if (t67 != 60780443501LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MIN;
	int64_t t68 = 4790LL;

	t68 = (x417+(x418*(x419+x420)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x421 = -3;
	uint16_t x422 = 2U;
	int16_t x424 = -803;
	volatile int32_t t69 = 18696587;

	t69 = (x421+(x422*(x423+x424)));

	if (t69 != -1355) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x429 = -1;
	uint64_t x431 = 44739090736758136LLU;
	int64_t x432 = 18498141205705LL;
	volatile uint64_t t70 = 54944LLU;

	t70 = (x429+(x430*(x431+x432)));

	if (t70 != 9279132941186600382LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x433 = INT32_MIN;
	int64_t x434 = -13146LL;
	int8_t x436 = -1;
	volatile int64_t t71 = 49380312866106579LL;

	t71 = (x433+(x434*(x435+x436)));

	if (t71 != -28232967493964LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = -1;
	uint8_t x439 = 3U;
	volatile int32_t x440 = -1;
	int32_t t72 = 5829708;

	t72 = (x437+(x438*(x439+x440)));

	if (t72 != -32770) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x441 = INT64_MIN;
	int8_t x442 = -1;
	static uint32_t x443 = 3U;
	uint8_t x444 = 6U;
	int64_t t73 = -7312358392LL;

	t73 = (x441+(x442*(x443+x444)));

	if (t73 != -9223372032559808521LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x449 = 246U;
	int16_t x450 = INT16_MAX;
	static uint64_t x451 = 3LLU;
	int64_t x452 = INT64_MIN;
	volatile uint64_t t74 = 1479762248862951222LLU;

	t74 = (x449+(x450*(x451+x452)));

	if (t74 != 9223372036854874355LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x457 = -1195497;
	int32_t x458 = -3;
	int16_t x459 = 11;
	int32_t x460 = 123740286;

	t75 = (x457+(x458*(x459+x460)));

	if (t75 != -372416388) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x461 = 0;
	int32_t x462 = -1;
	int8_t x464 = -1;
	int32_t t76 = 681392;

	t76 = (x461+(x462*(x463+x464)));

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x473 = INT16_MIN;
	volatile int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MAX;
	uint64_t x476 = 1061953800007LLU;

	t77 = (x473+(x474*(x475+x476)));

	if (t77 != 18446608143623118080LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x481 = 3U;
	int64_t x482 = -1LL;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = -1;
	volatile uint64_t t78 = 5LLU;

	t78 = (x481+(x482*(x483+x484)));

	if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x489 = 550U;
	volatile int16_t x491 = -1;
	int8_t x492 = INT8_MIN;
	volatile int32_t t79 = -19672;

	t79 = (x489+(x490*(x491+x492)));

	if (t79 != 4227622) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x497 = UINT16_MAX;
	int8_t x498 = 41;
	uint16_t x499 = UINT16_MAX;

	t80 = (x497+(x498*(x499+x500)));

	if (t80 != 2752429LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x502 = -14;
	volatile int16_t x503 = -3465;
	int32_t x504 = -92536945;

	t81 = (x501+(x502*(x503+x504)));

	if (t81 != -9223372035559210068LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = 123245231U;
	int8_t x508 = INT8_MAX;
	volatile uint32_t t82 = 1697551763U;

	t82 = (x505+(x506*(x507+x508)));

	if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x509 = -2145LL;
	static uint16_t x510 = 1U;
	int32_t x512 = -149010;
	int64_t t83 = 1LL;

	t83 = (x509+(x510*(x511+x512)));

	if (t83 != -151283LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x513 = INT16_MAX;
	static int64_t x514 = -1LL;
	volatile int8_t x515 = -13;
	uint64_t x516 = 6097921793863751LLU;

	t84 = (x513+(x514*(x515+x516)));

	if (t84 != 18440646151915720645LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x517 = 99U;
	uint64_t x518 = 936LLU;
	int32_t x519 = 2931;
	uint64_t x520 = 15743728LLU;
	volatile uint64_t t85 = 62522721057LLU;

	t85 = (x517+(x518*(x519+x520)));

	if (t85 != 14738872923LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x526 = 24U;
	volatile int64_t x527 = 369216982406389LL;
	static int64_t t86 = 31388300LL;

	t86 = (x525+(x526*(x527+x528)));

	if (t86 != 8861211824478519LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x529 = -1;
	uint64_t x531 = 117640457454082435LLU;
	int16_t x532 = INT16_MIN;
	volatile uint64_t t87 = 1965091760LLU;

	t87 = (x529+(x530*(x531+x532)));

	if (t87 != 1176404574540496669LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x533 = 135468LLU;
	int8_t x534 = 14;
	uint16_t x536 = UINT16_MAX;
	volatile uint64_t t88 = 104741646375955736LLU;

	t88 = (x533+(x534*(x535+x536)));

	if (t88 != 1053742LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x537 = INT32_MIN;
	static int64_t x539 = 1775LL;
	uint64_t x540 = 2827794355703296098LLU;
	volatile uint64_t t89 = 8595633384248LLU;

	t89 = (x537+(x538*(x539+x540)));

	if (t89 != 6977203942021420928LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MAX;
	static int32_t x543 = 2547263;
	volatile uint64_t x544 = 104948499LLU;

	t90 = (x541+(x542*(x543+x544)));

	if (t90 != 13651929006LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	uint8_t x548 = UINT8_MAX;
	volatile int64_t t91 = -8836738460629826LL;

	t91 = (x545+(x546*(x547+x548)));

	if (t91 != -16257LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x550 = 1U;
	volatile uint32_t x552 = 439U;
	volatile int64_t t92 = 1559065LL;

	t92 = (x549+(x550*(x551+x552)));

	if (t92 != -32678LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x557 = INT64_MIN;
	static int64_t x558 = -2257LL;
	int16_t x560 = -1;

	t93 = (x557+(x558*(x559+x560)));

	if (t93 != -9223372036854678757LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x561 = -31LL;
	uint32_t x562 = UINT32_MAX;
	volatile uint32_t x563 = 1U;
	static volatile uint64_t x564 = 2023LLU;
	uint64_t t94 = 33849638637893LLU;

	t94 = (x561+(x562*(x563+x564)));

	if (t94 != 8693013805049LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x569 = 0;
	int64_t x570 = -1LL;
	static int64_t x571 = 102112106LL;
	int32_t x572 = 141252;
	volatile int64_t t95 = 1285LL;

	t95 = (x569+(x570*(x571+x572)));

	if (t95 != -102253358LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x573 = INT32_MIN;
	volatile uint32_t x574 = 94U;
	int32_t x576 = -4;

	t96 = (x573+(x574*(x575+x576)));

	if (t96 != 2147485058U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x581 = -1;
	uint64_t x582 = UINT64_MAX;
	uint32_t x583 = 2361U;
	uint16_t x584 = 3U;

	t97 = (x581+(x582*(x583+x584)));

	if (t97 != 18446744073709549251LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x585 = 423514280921681LLU;
	int8_t x587 = -1;
	int32_t x588 = 375329313;
	volatile uint64_t t98 = 72LLU;

	t98 = (x585+(x586*(x587+x588)));

	if (t98 != 423513905592369LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x590 = INT32_MIN;
	int8_t x592 = -1;
	volatile uint32_t t99 = 1526U;

	t99 = (x589+(x590*(x591+x592)));

	if (t99 != 2147483705U) { NG(); } else { ; }
	
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

