#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t0 = 149U;
volatile int8_t x6 = INT8_MIN;
uint16_t x11 = UINT16_MAX;
uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = -937;
uint32_t x19 = 3U;
uint32_t x24 = UINT32_MAX;
static uint32_t x29 = UINT32_MAX;
int32_t x32 = -123096;
volatile uint64_t t7 = 7040174478805783LLU;
int8_t x36 = -1;
volatile int8_t x40 = -1;
uint64_t x45 = 4913361186LLU;
uint16_t x46 = 178U;
static int64_t x49 = 407257244007LL;
volatile int16_t x55 = INT16_MAX;
volatile int64_t x58 = -1LL;
uint64_t x63 = 836913805163328844LLU;
int32_t t14 = 28;
volatile int16_t x66 = INT16_MAX;
volatile int64_t t15 = 18181759867910LL;
int64_t x69 = -1LL;
volatile uint32_t t18 = 0U;
volatile int32_t x83 = 492161;
uint32_t x101 = 1722891U;
int32_t x102 = -9;
volatile int8_t x115 = INT8_MIN;
int16_t x122 = -66;
uint8_t x123 = 77U;
static uint32_t x134 = 1881109816U;
int32_t x135 = -72515;
int32_t x148 = 0;
volatile int32_t t29 = -7650;
uint32_t t31 = 180861U;
uint32_t x162 = 2207513U;
volatile int8_t x163 = INT8_MIN;
uint8_t x165 = 19U;
uint16_t x167 = 192U;
volatile int32_t t33 = -267441;
int16_t x172 = 4082;
volatile uint8_t x178 = 1U;
volatile int8_t x180 = 0;
int64_t x182 = 900036871366LL;
int16_t x187 = -1;
uint16_t x188 = UINT16_MAX;
int64_t x201 = 27424LL;
uint64_t x207 = 221LLU;
int8_t x210 = INT8_MIN;
int64_t x211 = INT64_MAX;
int16_t x212 = INT16_MAX;
int8_t x214 = INT8_MAX;
volatile uint32_t x225 = 18U;
uint8_t x226 = UINT8_MAX;
static int32_t x227 = 4;
uint64_t x229 = 128096105753810LLU;
volatile uint32_t x232 = 47U;
static int8_t x240 = INT8_MIN;
int8_t x249 = INT8_MIN;
int16_t x253 = -3;
static int16_t x254 = 13620;
uint8_t x255 = 60U;
static int64_t x257 = -57LL;
int64_t x260 = INT64_MAX;
int64_t t53 = 33970846LL;
static volatile uint8_t x262 = UINT8_MAX;
uint64_t x273 = 385249433575LLU;
int32_t x283 = -3476458;
int32_t x285 = 54902159;
int8_t x287 = 11;
static volatile int8_t x290 = INT8_MAX;
static int32_t x291 = INT32_MAX;
int8_t x294 = -1;
uint32_t x302 = 25U;
static uint16_t x310 = 4856U;
volatile int8_t x314 = INT8_MIN;
uint16_t x315 = 48U;
int16_t x322 = -4199;
uint16_t x332 = 413U;
static uint8_t x336 = 18U;
static uint32_t x337 = 381814U;
static int64_t x338 = 3622731LL;
int64_t t71 = -463701LL;
static volatile int16_t x349 = -117;
int8_t x352 = INT8_MIN;
static uint32_t x359 = UINT32_MAX;
volatile int64_t t75 = -12LL;
uint8_t x367 = UINT8_MAX;
int64_t x370 = -1LL;
int8_t x372 = INT8_MAX;
uint32_t x377 = 1301356U;
static uint8_t x378 = 21U;
int8_t x379 = INT8_MAX;
volatile uint64_t x387 = 34715496588LLU;
static uint32_t x391 = UINT32_MAX;
uint8_t x395 = 2U;
int32_t t84 = 6982;
int32_t t86 = -17449759;
int16_t x417 = INT16_MAX;
uint8_t x422 = 14U;
volatile int32_t t89 = 26;
int32_t x428 = INT32_MIN;
static uint8_t x429 = 1U;
int32_t x431 = -1;
volatile int32_t t94 = INT32_MAX;
int16_t x445 = INT16_MIN;
int32_t x451 = INT32_MIN;
uint32_t x452 = UINT32_MAX;
static uint64_t x457 = 21191993LLU;
uint16_t x459 = 1U;
volatile uint64_t t98 = 485498194092LLU;
uint8_t x461 = 15U;


void f0(void) {
	int32_t x1 = 0;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	int64_t x4 = -1LL;

	t0 = (x1-(x2-(x3==x4)));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 4;
	uint64_t x7 = 194539821523873LLU;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 6;

	t1 = (x5-(x6-(x7==x8)));

	if (t1 != 132) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = 304283275LL;
	int8_t x12 = INT8_MAX;
	static int64_t t2 = -258383116101LL;

	t2 = (x9-(x10-(x11==x12)));

	if (t2 != -304283403LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 58;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 7267105625680LLU;

	t3 = (x13-(x14-(x15==x16)));

	if (t3 != -69) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 2U;
	uint16_t x18 = 13U;
	int32_t x20 = -1;
	int32_t t4 = 1674326;

	t4 = (x17-(x18-(x19==x20)));

	if (t4 != -11) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	static volatile int64_t x22 = -1LL;
	int32_t x23 = INT32_MAX;
	volatile int64_t t5 = -13907457512696LL;

	t5 = (x21-(x22-(x23==x24)));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = 34998714LL;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 1LLU;
	int64_t t6 = 2168470658809LL;

	t6 = (x25-(x26-(x27==x28)));

	if (t6 != -34998715LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 231123308LLU;
	static int16_t x31 = INT16_MIN;

	t7 = (x29-(x30-(x31==x32)));

	if (t7 != 4063843987LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static uint8_t x34 = UINT8_MAX;
	static int16_t x35 = INT16_MIN;
	int32_t t8 = 27383;

	t8 = (x33-(x34-(x35==x36)));

	if (t8 != -256) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 244279U;
	int32_t x39 = INT32_MIN;
	static uint32_t t9 = 3U;

	t9 = (x37-(x38-(x39==x40)));

	if (t9 != 4294723016U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x47 = 53163994823914992LL;
	uint8_t x48 = UINT8_MAX;
	uint64_t t10 = 5LLU;

	t10 = (x45-(x46-(x47==x48)));

	if (t10 != 4913361008LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = -1LL;
	uint8_t x51 = 87U;
	int64_t x52 = 5262LL;
	static int64_t t11 = -214948295001LL;

	t11 = (x49-(x50-(x51==x52)));

	if (t11 != 407257244008LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 45859LLU;
	int8_t x54 = -1;
	volatile int32_t x56 = -1;
	volatile uint64_t t12 = 376967LLU;

	t12 = (x53-(x54-(x55==x56)));

	if (t12 != 45860LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	uint8_t x59 = 34U;
	uint64_t x60 = 633746522LLU;
	static int64_t t13 = -243826907136LL;

	t13 = (x57-(x58-(x59==x60)));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = -1;
	uint8_t x64 = UINT8_MAX;

	t14 = (x61-(x62-(x63==x64)));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;

	t15 = (x65-(x66-(x67==x68)));

	if (t15 != -32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = -1LL;
	static volatile uint32_t x72 = 636U;
	volatile int64_t t16 = -2LL;

	t16 = (x69-(x70-(x71==x72)));

	if (t16 != -256LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 3;
	static uint64_t x74 = 504223274LLU;
	static int8_t x75 = 2;
	volatile uint64_t x76 = 15LLU;
	volatile uint64_t t17 = 555775902127774343LLU;

	t17 = (x73-(x74-(x75==x76)));

	if (t17 != 18446744073205328345LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 9555150U;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = 61U;
	uint8_t x80 = 2U;

	t18 = (x77-(x78-(x79==x80)));

	if (t18 != 2157038799U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 26U;
	int8_t x82 = -10;
	uint64_t x84 = UINT64_MAX;
	volatile int32_t t19 = -57172;

	t19 = (x81-(x82-(x83==x84)));

	if (t19 != 36) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 93;
	int32_t x86 = -1;
	uint64_t x87 = 3870451LLU;
	volatile int64_t x88 = INT64_MIN;
	static volatile int32_t t20 = -12004625;

	t20 = (x85-(x86-(x87==x88)));

	if (t20 != 94) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 85;
	volatile int8_t x90 = 1;
	int8_t x91 = -17;
	static int32_t x92 = -1;
	int32_t t21 = -6;

	t21 = (x89-(x90-(x91==x92)));

	if (t21 != 84) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x103 = UINT64_MAX;
	int8_t x104 = 4;
	uint32_t t22 = 6U;

	t22 = (x101-(x102-(x103==x104)));

	if (t22 != 1722900U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MAX;
	volatile int16_t x110 = 926;
	uint64_t x111 = 0LLU;
	static uint16_t x112 = 15487U;
	int32_t t23 = 8846656;

	t23 = (x109-(x110-(x111==x112)));

	if (t23 != -799) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = 106812399LL;
	uint16_t x114 = 9U;
	uint8_t x116 = 1U;
	static int64_t t24 = -3712819387662493LL;

	t24 = (x113-(x114-(x115==x116)));

	if (t24 != 106812390LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 132355072491518895LL;
	volatile uint32_t x124 = 5U;
	volatile int64_t t25 = 56075796405LL;

	t25 = (x121-(x122-(x123==x124)));

	if (t25 != 132355072491518961LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = -1LL;
	int16_t x136 = INT16_MIN;
	int64_t t26 = 68324900096LL;

	t26 = (x133-(x134-(x135==x136)));

	if (t26 != -1881109817LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 10U;
	int8_t x138 = INT8_MIN;
	static volatile int32_t x139 = INT32_MIN;
	uint32_t x140 = 907780891U;
	static int32_t t27 = -506033085;

	t27 = (x137-(x138-(x139==x140)));

	if (t27 != 138) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -1;
	static volatile int16_t x146 = -4319;
	int64_t x147 = -7024484LL;
	int32_t t28 = -1881;

	t28 = (x145-(x146-(x147==x148)));

	if (t28 != 4318) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x149 = 7118822;
	volatile uint8_t x150 = 0U;
	static volatile int16_t x151 = INT16_MIN;
	uint8_t x152 = 1U;

	t29 = (x149-(x150-(x151==x152)));

	if (t29 != 7118822) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = 1753390371233675LL;
	int32_t x154 = INT32_MAX;
	static volatile int8_t x155 = INT8_MAX;
	static uint64_t x156 = 1256926LLU;
	int64_t t30 = 506092967225486218LL;

	t30 = (x153-(x154-(x155==x156)));

	if (t30 != 1753388223750028LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = 32U;
	int64_t x160 = -3477078578419LL;

	t31 = (x157-(x158-(x159==x160)));

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x161 = 3U;
	int64_t x164 = -1LL;
	uint32_t t32 = 881378889U;

	t32 = (x161-(x162-(x163==x164)));

	if (t32 != 4292759786U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x166 = -1;
	int64_t x168 = INT64_MIN;

	t33 = (x165-(x166-(x167==x168)));

	if (t33 != 20) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = 6;
	volatile int16_t x170 = INT16_MAX;
	uint32_t x171 = 447660U;
	int32_t t34 = 366773;

	t34 = (x169-(x170-(x171==x172)));

	if (t34 != -32761) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	int16_t x175 = -1;
	uint8_t x176 = 5U;
	int32_t t35 = -1667751;

	t35 = (x173-(x174-(x175==x176)));

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = 0;
	static uint32_t x179 = 1U;
	volatile int32_t t36 = -155450;

	t36 = (x177-(x178-(x179==x180)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MAX;
	static int8_t x183 = INT8_MIN;
	volatile int64_t x184 = INT64_MAX;
	volatile int64_t t37 = -8639LL;

	t37 = (x181-(x182-(x183==x184)));

	if (t37 != -900036871239LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x185 = UINT16_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	static int32_t t38 = -1;

	t38 = (x185-(x186-(x187==x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	uint32_t x196 = 1893169580U;
	static volatile int32_t t39 = -11430711;

	t39 = (x193-(x194-(x195==x196)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x202 = 16376U;
	int8_t x203 = -1;
	uint8_t x204 = 13U;
	volatile int64_t t40 = -1LL;

	t40 = (x201-(x202-(x203==x204)));

	if (t40 != 11048LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x205 = 7715U;
	uint32_t x206 = 22465U;
	volatile int32_t x208 = INT32_MIN;
	volatile uint32_t t41 = 114151859U;

	t41 = (x205-(x206-(x207==x208)));

	if (t41 != 4294952546U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x209 = 61386675LL;
	int64_t t42 = 4181198231955649431LL;

	t42 = (x209-(x210-(x211==x212)));

	if (t42 != 61386803LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 983527178413LLU;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t43 = 25455786926322273LLU;

	t43 = (x213-(x214-(x215==x216)));

	if (t43 != 983527178287LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = -1;
	int32_t x218 = -1;
	volatile uint64_t x219 = UINT64_MAX;
	uint16_t x220 = 1U;
	int32_t t44 = 499;

	t44 = (x217-(x218-(x219==x220)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x228 = -1;
	volatile uint32_t t45 = 1765654U;

	t45 = (x225-(x226-(x227==x228)));

	if (t45 != 4294967059U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x230 = INT16_MAX;
	volatile int64_t x231 = INT64_MIN;
	volatile uint64_t t46 = 527832303208281105LLU;

	t46 = (x229-(x230-(x231==x232)));

	if (t46 != 128096105721043LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x233 = UINT64_MAX;
	volatile int16_t x234 = -3;
	static int32_t x235 = INT32_MAX;
	uint8_t x236 = 8U;
	volatile uint64_t t47 = 162946978680315LLU;

	t47 = (x233-(x234-(x235==x236)));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	volatile int32_t t48 = 51;

	t48 = (x237-(x238-(x239==x240)));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x241 = -314046902;
	int16_t x242 = 2767;
	uint8_t x243 = 22U;
	volatile int16_t x244 = INT16_MIN;
	int32_t t49 = 2927254;

	t49 = (x241-(x242-(x243==x244)));

	if (t49 != -314049669) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = -6;
	volatile int64_t x247 = INT64_MIN;
	volatile int64_t x248 = 8895LL;
	volatile int32_t t50 = -71279;

	t50 = (x245-(x246-(x247==x248)));

	if (t50 != -2147483642) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = -6875224;
	uint64_t x251 = 407842190LLU;
	static volatile int32_t x252 = INT32_MAX;
	volatile int32_t t51 = 11275;

	t51 = (x249-(x250-(x251==x252)));

	if (t51 != 6875096) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x256 = INT32_MAX;
	int32_t t52 = 13877;

	t52 = (x253-(x254-(x255==x256)));

	if (t52 != -13623) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x258 = UINT32_MAX;
	static uint32_t x259 = 775U;

	t53 = (x257-(x258-(x259==x260)));

	if (t53 != -4294967352LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x261 = -15804;
	int32_t x263 = INT32_MAX;
	uint64_t x264 = 1344959139LLU;
	int32_t t54 = -14012839;

	t54 = (x261-(x262-(x263==x264)));

	if (t54 != -16059) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 6U;
	uint64_t x266 = 859LLU;
	volatile int8_t x267 = 0;
	volatile int16_t x268 = -1;
	uint64_t t55 = 201LLU;

	t55 = (x265-(x266-(x267==x268)));

	if (t55 != 18446744073709550763LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = 11797848244LLU;
	volatile int32_t x276 = INT32_MIN;
	volatile uint64_t t56 = 6773846722892538LLU;

	t56 = (x273-(x274-(x275==x276)));

	if (t56 != 385249466343LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x277 = UINT16_MAX;
	int64_t x278 = INT64_MAX;
	volatile uint16_t x279 = 3050U;
	uint8_t x280 = 2U;
	int64_t t57 = 662401841433368LL;

	t57 = (x277-(x278-(x279==x280)));

	if (t57 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x281 = 215055231LLU;
	int32_t x282 = INT32_MAX;
	int32_t x284 = INT32_MIN;
	static volatile uint64_t t58 = 5690LLU;

	t58 = (x281-(x282-(x283==x284)));

	if (t58 != 18446744071777123200LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x286 = -1;
	int64_t x288 = 31001267124062497LL;
	volatile int32_t t59 = 1464;

	t59 = (x285-(x286-(x287==x288)));

	if (t59 != 54902160) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x289 = 1298801LLU;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t60 = 1723798204033558LLU;

	t60 = (x289-(x290-(x291==x292)));

	if (t60 != 1298674LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x293 = 2699766961513214676LL;
	static int16_t x295 = INT16_MAX;
	volatile uint8_t x296 = 0U;
	int64_t t61 = 15830150942LL;

	t61 = (x293-(x294-(x295==x296)));

	if (t61 != 2699766961513214677LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MAX;
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;
	uint64_t x300 = UINT64_MAX;
	static volatile int32_t t62 = -6;

	t62 = (x297-(x298-(x299==x300)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x301 = UINT64_MAX;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;
	uint64_t t63 = 8139754053027703094LLU;

	t63 = (x301-(x302-(x303==x304)));

	if (t63 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = -1;
	uint16_t x306 = 9U;
	static int8_t x307 = 0;
	volatile uint32_t x308 = 222935070U;
	int32_t t64 = 490368940;

	t64 = (x305-(x306-(x307==x308)));

	if (t64 != -10) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = 55;
	uint8_t x311 = 7U;
	int16_t x312 = 1;
	int32_t t65 = -837;

	t65 = (x309-(x310-(x311==x312)));

	if (t65 != -4801) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 6730158U;
	uint16_t x316 = 1075U;
	uint32_t t66 = 428622U;

	t66 = (x313-(x314-(x315==x316)));

	if (t66 != 6730286U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	static uint32_t x320 = 1573U;
	static volatile int32_t t67 = INT32_MAX;

	t67 = (x317-(x318-(x319==x320)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x321 = INT8_MIN;
	static volatile int8_t x323 = INT8_MAX;
	int8_t x324 = INT8_MAX;
	static int32_t t68 = 3616898;

	t68 = (x321-(x322-(x323==x324)));

	if (t68 != 4072) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x329 = INT64_MAX;
	uint64_t x330 = 3779575136194814LLU;
	int32_t x331 = INT32_MIN;
	uint64_t t69 = 5406396323373326258LLU;

	t69 = (x329-(x330-(x331==x332)));

	if (t69 != 9219592461718580993LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = INT8_MAX;
	int16_t x334 = 3433;
	int32_t x335 = INT32_MIN;
	int32_t t70 = 6725510;

	t70 = (x333-(x334-(x335==x336)));

	if (t70 != -3306) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x339 = -234350282694LL;
	int32_t x340 = INT32_MIN;

	t71 = (x337-(x338-(x339==x340)));

	if (t71 != -3240917LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	int32_t x343 = INT32_MAX;
	int32_t x344 = 10;
	volatile int64_t t72 = 2067224LL;

	t72 = (x341-(x342-(x343==x344)));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x350 = 1813;
	static volatile int8_t x351 = INT8_MIN;
	volatile int32_t t73 = 3;

	t73 = (x349-(x350-(x351==x352)));

	if (t73 != -1929) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = INT8_MIN;
	volatile int64_t x354 = 1LL;
	static int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	int64_t t74 = 31368LL;

	t74 = (x353-(x354-(x355==x356)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x357 = 417U;
	int64_t x358 = -1LL;
	volatile int8_t x360 = 1;

	t75 = (x357-(x358-(x359==x360)));

	if (t75 != 418LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x361 = UINT64_MAX;
	uint8_t x362 = 52U;
	volatile int32_t x363 = 870;
	static int64_t x364 = INT64_MAX;
	static volatile uint64_t t76 = 4338655934254671LLU;

	t76 = (x361-(x362-(x363==x364)));

	if (t76 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 3549356920400656776LLU;
	int16_t x366 = 732;
	uint8_t x368 = 0U;
	static uint64_t t77 = 1372LLU;

	t77 = (x365-(x366-(x367==x368)));

	if (t77 != 3549356920400656044LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	volatile uint16_t x371 = 0U;
	static int64_t t78 = 1LL;

	t78 = (x369-(x370-(x371==x372)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x373 = 0U;
	int8_t x374 = -1;
	uint16_t x375 = 14U;
	static volatile int64_t x376 = INT64_MIN;
	volatile int32_t t79 = 1;

	t79 = (x373-(x374-(x375==x376)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x380 = UINT32_MAX;
	static uint32_t t80 = 116751424U;

	t80 = (x377-(x378-(x379==x380)));

	if (t80 != 1301335U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x385 = UINT32_MAX;
	volatile int64_t x386 = -1LL;
	static int16_t x388 = INT16_MAX;
	volatile int64_t t81 = -665650927781387LL;

	t81 = (x385-(x386-(x387==x388)));

	if (t81 != 4294967296LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = 104U;
	volatile int32_t x392 = INT32_MIN;
	int32_t t82 = 150345;

	t82 = (x389-(x390-(x391==x392)));

	if (t82 != -232) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = 22546218LLU;
	static uint64_t x396 = 2874883LLU;
	volatile uint64_t t83 = 10857127755170213LLU;

	t83 = (x393-(x394-(x395==x396)));

	if (t83 != 18446744073687005270LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	volatile uint32_t x399 = 72U;
	static volatile int32_t x400 = -1;

	t84 = (x397-(x398-(x399==x400)));

	if (t84 != -65536) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x401 = UINT16_MAX;
	uint16_t x402 = 0U;
	static int64_t x403 = -20309750055LL;
	int8_t x404 = INT8_MIN;
	int32_t t85 = 11733;

	t85 = (x401-(x402-(x403==x404)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = 8;
	uint8_t x410 = 89U;
	uint32_t x411 = 3U;
	int8_t x412 = INT8_MAX;

	t86 = (x409-(x410-(x411==x412)));

	if (t86 != -81) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x413 = -7423354LL;
	int16_t x414 = -1;
	uint64_t x415 = 14450235166367557LLU;
	int16_t x416 = -1;
	int64_t t87 = 0LL;

	t87 = (x413-(x414-(x415==x416)));

	if (t87 != -7423353LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x418 = INT8_MAX;
	volatile int32_t x419 = -205;
	int16_t x420 = INT16_MIN;
	int32_t t88 = 104465;

	t88 = (x417-(x418-(x419==x420)));

	if (t88 != 32640) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x421 = 0U;
	uint16_t x423 = 22060U;
	int64_t x424 = INT64_MAX;

	t89 = (x421-(x422-(x423==x424)));

	if (t89 != -14) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x425 = 0U;
	int8_t x426 = -34;
	uint32_t x427 = 0U;
	volatile int32_t t90 = 1384;

	t90 = (x425-(x426-(x427==x428)));

	if (t90 != 34) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x430 = 1953319439250LLU;
	uint64_t x432 = 10278924770LLU;
	uint64_t t91 = 247174216LLU;

	t91 = (x429-(x430-(x431==x432)));

	if (t91 != 18446742120390112367LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = 401486006U;
	int16_t x434 = 6;
	volatile uint64_t x435 = 1303431LLU;
	static int32_t x436 = -1;
	volatile uint32_t t92 = 1625U;

	t92 = (x433-(x434-(x435==x436)));

	if (t92 != 401486000U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = UINT64_MAX;
	volatile int8_t x439 = 1;
	int16_t x440 = 38;
	static uint64_t t93 = 2940014935LLU;

	t93 = (x437-(x438-(x439==x440)));

	if (t93 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = -1;
	int32_t x442 = INT32_MIN;
	volatile int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = 510U;

	t94 = (x441-(x442-(x443==x444)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x446 = 6737LLU;
	uint32_t x447 = 982993464U;
	static int64_t x448 = 2031LL;
	static uint64_t t95 = 55332647992LLU;

	t95 = (x445-(x446-(x447==x448)));

	if (t95 != 18446744073709512111LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x449 = 385U;
	int16_t x450 = INT16_MIN;
	volatile uint32_t t96 = 520U;

	t96 = (x449-(x450-(x451==x452)));

	if (t96 != 33153U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = 144U;
	uint8_t x454 = 0U;
	static uint32_t x455 = 8581U;
	uint32_t x456 = 46U;
	int32_t t97 = 25797;

	t97 = (x453-(x454-(x455==x456)));

	if (t97 != 144) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x458 = 2;
	int8_t x460 = INT8_MIN;

	t98 = (x457-(x458-(x459==x460)));

	if (t98 != 21191991LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x462 = 212627957U;
	static int8_t x463 = 49;
	uint64_t x464 = 20210144698086LLU;
	volatile uint32_t t99 = 25578238U;

	t99 = (x461-(x462-(x463==x464)));

	if (t99 != 4082339354U) { NG(); } else { ; }
	
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

