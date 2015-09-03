#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = UINT8_MAX;
int8_t x8 = -1;
static int8_t x10 = INT8_MAX;
int32_t x12 = INT32_MIN;
uint32_t t2 = 2U;
int8_t x19 = -1;
static int8_t x20 = INT8_MAX;
uint32_t t4 = 18U;
uint32_t x27 = UINT32_MAX;
int16_t x34 = INT16_MAX;
volatile int32_t x38 = INT32_MIN;
uint32_t x39 = 146369U;
int16_t x40 = INT16_MAX;
volatile int64_t x43 = 1219796566LL;
static int32_t x51 = INT32_MIN;
volatile uint32_t x57 = 31532499U;
int64_t x66 = -1125858508LL;
uint64_t x67 = UINT64_MAX;
volatile uint64_t t12 = 131272547150395748LLU;
int8_t x72 = -1;
volatile uint32_t t15 = 740184U;
uint16_t x105 = 29U;
uint64_t x108 = UINT64_MAX;
volatile uint64_t t18 = 3LLU;
int32_t x111 = -1;
static int8_t x119 = 1;
int16_t x120 = 0;
volatile uint64_t t20 = 2175955998LLU;
uint32_t t21 = 4819U;
uint32_t x134 = 60387U;
static uint8_t x135 = UINT8_MAX;
static volatile uint32_t t22 = 1361241358U;
volatile int64_t x145 = INT64_MAX;
int8_t x148 = INT8_MAX;
volatile int64_t x164 = INT64_MIN;
uint32_t x177 = 14677021U;
static uint64_t x180 = 1153419170565LLU;
int16_t x183 = INT16_MIN;
static int8_t x186 = 0;
int32_t x190 = 531151937;
uint64_t t35 = 11668LLU;
static int64_t t36 = -1LL;
uint32_t x202 = 187216U;
int64_t t37 = -2353992LL;
volatile int16_t x205 = 0;
volatile int32_t x206 = INT32_MAX;
static int64_t t38 = 1114253211313964313LL;
uint16_t x221 = UINT16_MAX;
int16_t x243 = INT16_MIN;
static int64_t x248 = -75154523LL;
int32_t x253 = INT32_MIN;
uint32_t x260 = 6088740U;
volatile int8_t x269 = -12;
uint64_t x273 = 75144738LLU;
uint32_t x275 = UINT32_MAX;
volatile uint64_t t51 = 3011859LLU;
int32_t t52 = -841;
uint32_t x299 = 15738U;
int32_t t55 = 1111328;
volatile int64_t x311 = 1215451386286LL;
uint16_t x334 = UINT16_MAX;
volatile int64_t t59 = 0LL;
uint32_t x343 = 39932191U;
uint16_t x348 = 305U;
static int16_t x356 = INT16_MIN;
int64_t x359 = INT64_MAX;
volatile int64_t x366 = 36363LL;
volatile uint64_t t66 = 219799361LLU;
int64_t x371 = INT64_MIN;
uint32_t x374 = 6U;
int64_t x376 = -1LL;
volatile uint8_t x377 = 5U;
int8_t x378 = -11;
int8_t x399 = -6;
uint8_t x403 = 5U;
static uint32_t t74 = 27650U;
int32_t x412 = -9283;
int8_t x418 = -10;
int16_t x420 = INT16_MIN;
uint64_t x426 = 23918958LLU;
uint16_t x428 = 11029U;
uint64_t t79 = 3623LLU;
volatile uint8_t x432 = 0U;
int64_t t83 = -14777707LL;
volatile int8_t x452 = 53;
int64_t x455 = INT64_MAX;
uint32_t x458 = UINT32_MAX;
int8_t x466 = -20;
volatile uint64_t t88 = 14569959021522LLU;
int8_t x469 = INT8_MAX;
int64_t t89 = -385877LL;
uint8_t x473 = UINT8_MAX;
volatile int32_t t92 = 1;
volatile int64_t x503 = INT64_MIN;
volatile int64_t t93 = 2935992141029933367LL;
static volatile int32_t x518 = 1;
volatile uint8_t x519 = 98U;
volatile int16_t x522 = INT16_MIN;
int64_t t97 = -1190673446LL;
int8_t x533 = 8;


void f0(void) {
	uint64_t x1 = 6LLU;
	int16_t x2 = INT16_MAX;
	volatile uint8_t x4 = 43U;
	static volatile uint64_t t0 = 106LLU;

	t0 = (x1-(x2-(x3-x4)));

	if (t0 != 18446744073709519067LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x6 = -1423;
	uint8_t x7 = 0U;
	int32_t t1 = 31;

	t1 = (x5-(x6-(x7-x8)));

	if (t1 != 1679) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile uint32_t x11 = UINT32_MAX;

	t2 = (x9-(x10-(x11-x12)));

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 6052295;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MAX;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 26213427LLU;

	t3 = (x13-(x14-(x15-x16)));

	if (t3 != 6085191LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile uint32_t x18 = 27041299U;

	t4 = (x17-(x18-(x19-x20)));

	if (t4 != 2120442220U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 410999666LLU;
	int32_t x26 = -1;
	int32_t x28 = INT32_MAX;
	uint64_t t5 = 8105589264350856428LLU;

	t5 = (x25-(x26-(x27-x28)));

	if (t5 != 18446744071973067635LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static uint8_t x30 = 5U;
	volatile int16_t x31 = INT16_MIN;
	uint16_t x32 = 3673U;
	int32_t t6 = 52052;

	t6 = (x29-(x30-(x31-x32)));

	if (t6 != -36191) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 319499091LLU;
	int16_t x35 = -4430;
	uint32_t x36 = 30143U;
	uint64_t t7 = 90939496310LLU;

	t7 = (x33-(x34-(x35-x36)));

	if (t7 != 319431751LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	volatile uint32_t t8 = 232082673U;

	t8 = (x37-(x38-(x39-x40)));

	if (t8 != 2147630017U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 55U;
	uint64_t x42 = 1874732591189LLU;
	uint32_t x44 = 793194232U;
	volatile uint64_t t9 = 8792150924872566866LLU;

	t9 = (x41-(x42-(x43-x44)));

	if (t9 != 18446742199403562816LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = INT8_MIN;
	static int64_t x50 = 9510643964043LL;
	static uint32_t x52 = UINT32_MAX;
	int64_t t10 = 28036LL;

	t10 = (x49-(x50-(x51-x52)));

	if (t10 != -9508496480522LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 2U;
	int8_t x59 = -3;
	volatile int16_t x60 = INT16_MAX;
	volatile uint32_t t11 = 874513U;

	t11 = (x57-(x58-(x59-x60)));

	if (t11 != 31499727U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = -822981152LL;
	uint32_t x68 = UINT32_MAX;

	t12 = (x65-(x66-(x67-x68)));

	if (t12 != 18446744069717461676LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 135986418U;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = 118;
	volatile uint32_t t13 = 31U;

	t13 = (x69-(x70-(x71-x72)));

	if (t13 != 136019305U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 17U;
	static int8_t x78 = INT8_MAX;
	uint64_t x79 = 40178098LLU;
	int16_t x80 = -3;
	volatile uint64_t t14 = 5LLU;

	t14 = (x77-(x78-(x79-x80)));

	if (t14 != 40177991LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -1;
	volatile int8_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	uint32_t x88 = 8180U;

	t15 = (x85-(x86-(x87-x88)));

	if (t15 != 4294959243U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = -1;
	static uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile uint64_t t16 = 1018740309LLU;

	t16 = (x97-(x98-(x99-x100)));

	if (t16 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x101 = -5384696268140879LL;
	static int16_t x102 = INT16_MAX;
	static volatile uint16_t x103 = 5547U;
	int16_t x104 = -1;
	int64_t t17 = -1LL;

	t17 = (x101-(x102-(x103-x104)));

	if (t17 != -5384696268168098LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = INT16_MAX;
	uint16_t x107 = 1U;

	t18 = (x105-(x106-(x107-x108)));

	if (t18 != 18446744073709518880LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x109 = INT64_MAX;
	int16_t x110 = INT16_MAX;
	uint8_t x112 = 14U;
	volatile int64_t t19 = -37367312300LL;

	t19 = (x109-(x110-(x111-x112)));

	if (t19 != 9223372036854743025LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x117 = 13594U;
	volatile uint64_t x118 = UINT64_MAX;

	t20 = (x117-(x118-(x119-x120)));

	if (t20 != 13596LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = UINT32_MAX;
	static uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	uint16_t x132 = 74U;

	t21 = (x129-(x130-(x131-x132)));

	if (t21 != 4294967221U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = 122U;
	uint32_t x136 = 105392439U;

	t22 = (x133-(x134-(x135-x136)));

	if (t22 != 4189514847U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MAX;
	uint64_t x139 = 28692885209688464LLU;
	int64_t x140 = INT64_MIN;
	uint64_t t23 = 967725180293LLU;

	t23 = (x137-(x138-(x139-x140)));

	if (t23 != 9252064919916947857LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x141 = 12U;
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = 443616LLU;
	int8_t x144 = -1;
	uint64_t t24 = 44024LLU;

	t24 = (x141-(x142-(x143-x144)));

	if (t24 != 2147927277LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x146 = -1;
	volatile int64_t x147 = -16462202100954670LL;
	volatile int64_t t25 = -93127079490LL;

	t25 = (x145-(x146-(x147-x148)));

	if (t25 != 9206909834753821011LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = -1;
	int64_t x150 = -1LL;
	volatile int32_t x151 = INT32_MIN;
	int64_t x152 = 602279LL;
	volatile int64_t t26 = 39120LL;

	t26 = (x149-(x150-(x151-x152)));

	if (t26 != -2148085927LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = 631095721664173177LLU;
	int64_t x158 = INT64_MIN;
	static uint16_t x159 = 8U;
	volatile uint16_t x160 = 24359U;
	static uint64_t t27 = 823218LLU;

	t27 = (x157-(x158-(x159-x160)));

	if (t27 != 9854467758518924634LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x161 = INT16_MAX;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 125978267059LLU;
	static volatile uint64_t t28 = 95917LLU;

	t28 = (x161-(x162-(x163-x164)));

	if (t28 != 9223372162833010099LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x169 = INT8_MAX;
	volatile uint16_t x170 = 0U;
	volatile int64_t x171 = 11267LL;
	volatile int64_t x172 = 1LL;
	int64_t t29 = -1721081LL;

	t29 = (x169-(x170-(x171-x172)));

	if (t29 != 11393LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = -1;
	volatile int64_t x174 = INT64_MAX;
	static volatile uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 33525794U;
	uint64_t t30 = 0LLU;

	t30 = (x173-(x174-(x175-x176)));

	if (t30 != 9223372036821250013LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x178 = 2552957471973766422LLU;
	static uint32_t x179 = UINT32_MAX;
	volatile uint64_t t31 = 1217133783140728LLU;

	t31 = (x177-(x178-(x179-x180)));

	if (t31 != 15893785452626258945LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = -321282;
	int16_t x182 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	static int32_t t32 = 9;

	t32 = (x181-(x182-(x183-x184)));

	if (t32 != -321154) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MIN;
	int64_t x187 = -1LL;
	uint64_t x188 = 89471068520LLU;
	uint64_t t33 = 6976228395884317LLU;

	t33 = (x185-(x186-(x187-x188)));

	if (t33 != 18446743984238482967LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = UINT32_MAX;
	volatile uint32_t x191 = 2143152155U;
	uint32_t x192 = UINT32_MAX;
	static uint32_t t34 = 1494U;

	t34 = (x189-(x190-(x191-x192)));

	if (t34 != 1612000218U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = 42U;
	uint64_t x194 = 1008785LLU;
	uint16_t x195 = 1U;
	volatile uint64_t x196 = 362221274067754387LLU;

	t35 = (x193-(x194-(x195-x196)));

	if (t35 != 18084522799640788487LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = -1342126;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	int8_t x200 = -1;

	t36 = (x197-(x198-(x199-x200)));

	if (t36 != -2148825772LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = -123;
	int64_t x203 = -1LL;
	int32_t x204 = INT32_MIN;

	t37 = (x201-(x202-(x203-x204)));

	if (t37 != 2147296308LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;

	t38 = (x205-(x206-(x207-x208)));

	if (t38 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = 36556901U;
	int64_t x210 = -25571027453LL;
	volatile int8_t x211 = -1;
	uint64_t x212 = 73LLU;
	uint64_t t39 = 79LLU;

	t39 = (x209-(x210-(x211-x212)));

	if (t39 != 25607584280LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = -52LL;
	int8_t x214 = 19;
	int8_t x215 = INT8_MIN;
	int32_t x216 = -1;
	int64_t t40 = 1831077487479217LL;

	t40 = (x213-(x214-(x215-x216)));

	if (t40 != -198LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x222 = INT8_MAX;
	volatile int16_t x223 = -1;
	uint8_t x224 = 15U;
	volatile int32_t t41 = 23055;

	t41 = (x221-(x222-(x223-x224)));

	if (t41 != 65392) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = 317378;
	static uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t42 = 2186692U;

	t42 = (x225-(x226-(x227-x228)));

	if (t42 != 317379U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x229 = INT8_MAX;
	volatile int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = 10;
	int32_t t43 = -1;

	t43 = (x229-(x230-(x231-x232)));

	if (t43 != 98420) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -1;
	static uint64_t x234 = 50244131321267545LLU;
	uint16_t x235 = 7U;
	int8_t x236 = 14;
	volatile uint64_t t44 = 218267295LLU;

	t44 = (x233-(x234-(x235-x236)));

	if (t44 != 18396499942388284063LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = -1LL;
	uint16_t x242 = 1169U;
	uint8_t x244 = 121U;
	int64_t t45 = 701798747847994LL;

	t45 = (x241-(x242-(x243-x244)));

	if (t45 != -34059LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x245 = -1;
	volatile int32_t x246 = 2;
	static int8_t x247 = -1;
	volatile int64_t t46 = 13670LL;

	t46 = (x245-(x246-(x247-x248)));

	if (t46 != 75154519LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x254 = 1008576LLU;
	int8_t x255 = -1;
	int64_t x256 = INT64_MAX;
	static volatile uint64_t t47 = 25081714329185827LLU;

	t47 = (x253-(x254-(x255-x256)));

	if (t47 != 9223372034706283584LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x257 = 69540522131649LLU;
	int64_t x258 = INT64_MAX;
	uint16_t x259 = 1895U;
	volatile uint64_t t48 = 7602619525277393LLU;

	t48 = (x257-(x258-(x259-x260)));

	if (t48 != 9223441581665787909LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = -2;
	static volatile int8_t x266 = INT8_MIN;
	int32_t x267 = -516;
	uint32_t x268 = 1237921U;
	static volatile uint32_t t49 = 36806U;

	t49 = (x265-(x266-(x267-x268)));

	if (t49 != 4293728985U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x270 = INT16_MIN;
	static uint8_t x271 = 67U;
	volatile uint8_t x272 = UINT8_MAX;
	static volatile int32_t t50 = 613679069;

	t50 = (x269-(x270-(x271-x272)));

	if (t50 != 32568) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x274 = 8882395U;
	uint32_t x276 = 4303U;

	t51 = (x273-(x274-(x275-x276)));

	if (t51 != 66258039LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = 3825;
	volatile int16_t x278 = -24;
	int8_t x279 = -16;
	volatile int16_t x280 = INT16_MIN;

	t52 = (x277-(x278-(x279-x280)));

	if (t52 != 36601) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x281 = 1;
	volatile int32_t x282 = -1;
	static int16_t x283 = -1;
	volatile int16_t x284 = -27;
	static volatile int32_t t53 = -113360;

	t53 = (x281-(x282-(x283-x284)));

	if (t53 != 28) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = -1;
	uint64_t x298 = 2LLU;
	int8_t x300 = 3;
	static volatile uint64_t t54 = 8787742976707666LLU;

	t54 = (x297-(x298-(x299-x300)));

	if (t54 != 15732LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x305 = 1U;
	int8_t x306 = -1;
	uint8_t x307 = 108U;
	volatile uint8_t x308 = 12U;

	t55 = (x305-(x306-(x307-x308)));

	if (t55 != 98) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = 11893LL;
	uint16_t x312 = 190U;
	static int64_t t56 = 6280048105LL;

	t56 = (x309-(x310-(x311-x312)));

	if (t56 != 1215451439738LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x317 = -14607390LL;
	volatile int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = 3503571U;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t57 = 1373536651LL;

	t57 = (x317-(x318-(x319-x320)));

	if (t57 != -4306038219LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MIN;
	static int32_t t58 = 1553;

	t58 = (x333-(x334-(x335-x336)));

	if (t58 != -65408) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = 1930;
	int64_t x338 = 198864666166LL;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -1;

	t59 = (x337-(x338-(x339-x340)));

	if (t59 != -198864664108LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x341 = 37U;
	uint16_t x342 = UINT16_MAX;
	int32_t x344 = INT32_MIN;
	static uint32_t t60 = 16342626U;

	t60 = (x341-(x342-(x343-x344)));

	if (t60 != 2187350341U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x345 = 1904357503921LLU;
	uint16_t x346 = 36U;
	int8_t x347 = INT8_MAX;
	static uint64_t t61 = 1306848875448667LLU;

	t61 = (x345-(x346-(x347-x348)));

	if (t61 != 1904357503707LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 36LLU;
	int32_t x351 = 31329;
	int32_t x352 = -1;
	volatile uint64_t t62 = 2LLU;

	t62 = (x349-(x350-(x351-x352)));

	if (t62 != 18446744071562099262LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile int8_t x354 = INT8_MIN;
	static uint8_t x355 = 72U;
	volatile int64_t t63 = 19168LL;

	t63 = (x353-(x354-(x355-x356)));

	if (t63 != -9223372036854742840LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x357 = 1;
	volatile int16_t x358 = -1010;
	int32_t x360 = INT32_MAX;
	static int64_t t64 = 3065771410935LL;

	t64 = (x357-(x358-(x359-x360)));

	if (t64 != 9223372034707293171LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = -1;
	int32_t x364 = -1;
	volatile int32_t t65 = 12236824;

	t65 = (x361-(x362-(x363-x364)));

	if (t65 != 33023) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x365 = UINT64_MAX;
	static uint16_t x367 = UINT16_MAX;
	static int8_t x368 = 14;

	t66 = (x365-(x366-(x367-x368)));

	if (t66 != 29157LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t67 = -114203799901780LL;

	t67 = (x369-(x370-(x371-x372)));

	if (t67 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x373 = 145;
	uint8_t x375 = 1U;
	int64_t t68 = -30309954LL;

	t68 = (x373-(x374-(x375-x376)));

	if (t68 != 141LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x379 = UINT8_MAX;
	static uint8_t x380 = 3U;
	volatile int32_t t69 = 16644285;

	t69 = (x377-(x378-(x379-x380)));

	if (t69 != 268) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x381 = -400239;
	int32_t x382 = -518118;
	static uint64_t x383 = 34647356956LLU;
	volatile int16_t x384 = INT16_MIN;
	volatile uint64_t t70 = 777546714269232265LLU;

	t70 = (x381-(x382-(x383-x384)));

	if (t70 != 34647507603LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x389 = 0;
	volatile int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	uint32_t x392 = 548U;
	uint32_t t71 = 1U;

	t71 = (x389-(x390-(x391-x392)));

	if (t71 != 2147483099U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x393 = INT16_MIN;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t72 = 452;

	t72 = (x393-(x394-(x395-x396)));

	if (t72 != -2147450880) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x397 = INT16_MIN;
	uint16_t x398 = 145U;
	int8_t x400 = -7;
	int32_t t73 = -1365;

	t73 = (x397-(x398-(x399-x400)));

	if (t73 != -32912) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x401 = UINT16_MAX;
	static int32_t x402 = INT32_MIN;
	uint32_t x404 = 3U;

	t74 = (x401-(x402-(x403-x404)));

	if (t74 != 2147549185U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x405 = 27U;
	static uint8_t x406 = 7U;
	volatile int16_t x407 = -1;
	static int16_t x408 = -14;
	int32_t t75 = -2;

	t75 = (x405-(x406-(x407-x408)));

	if (t75 != 33) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = 8U;
	volatile int64_t t76 = -125446643LL;

	t76 = (x409-(x410-(x411-x412)));

	if (t76 != 9223372032559817930LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x417 = INT16_MIN;
	static uint16_t x419 = 211U;
	volatile int32_t t77 = 22478781;

	t77 = (x417-(x418-(x419-x420)));

	if (t77 != 221) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x421 = -1LL;
	int64_t x422 = -1LL;
	static int64_t x423 = INT64_MAX;
	static volatile uint32_t x424 = 249U;
	int64_t t78 = 818932169312LL;

	t78 = (x421-(x422-(x423-x424)));

	if (t78 != 9223372036854775558LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x425 = INT64_MIN;
	static int16_t x427 = INT16_MIN;

	t79 = (x425-(x426-(x427-x428)));

	if (t79 != 9223372036830813053LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = INT32_MAX;
	static volatile int16_t x430 = INT16_MAX;
	uint8_t x431 = 0U;
	volatile int32_t t80 = -1283809;

	t80 = (x429-(x430-(x431-x432)));

	if (t80 != 2147450880) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x433 = -2035;
	int32_t x434 = -1;
	uint64_t x435 = 129609851717240LLU;
	static uint32_t x436 = 147671U;
	uint64_t t81 = 1614889042LLU;

	t81 = (x433-(x434-(x435-x436)));

	if (t81 != 129609851567535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x437 = INT64_MAX;
	int8_t x438 = 17;
	uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 2U;
	int64_t t82 = 413031886483579LL;

	t82 = (x437-(x438-(x439-x440)));

	if (t82 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x441 = UINT8_MAX;
	int8_t x442 = -1;
	int64_t x443 = INT64_MIN;
	int16_t x444 = -1;

	t83 = (x441-(x442-(x443-x444)));

	if (t83 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x449 = -27149LL;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -1;
	static int64_t t84 = -4965817918951LL;

	t84 = (x449-(x450-(x451-x452)));

	if (t84 != 9223372036854748605LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x453 = 3099189LL;
	static int8_t x454 = 8;
	static int64_t x456 = INT64_MAX;
	static volatile int64_t t85 = 2143523086661426857LL;

	t85 = (x453-(x454-(x455-x456)));

	if (t85 != 3099181LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x457 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	static uint32_t t86 = 177826792U;

	t86 = (x457-(x458-(x459-x460)));

	if (t86 != 32513U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x461 = 1;
	uint16_t x462 = UINT16_MAX;
	int64_t x463 = -1LL;
	static int64_t x464 = -1LL;
	volatile int64_t t87 = -1583564225014441604LL;

	t87 = (x461-(x462-(x463-x464)));

	if (t87 != -65534LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x465 = -1;
	uint32_t x467 = 147647080U;
	uint64_t x468 = 25076LLU;

	t88 = (x465-(x466-(x467-x468)));

	if (t88 != 147622023LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x470 = 0;
	int64_t x471 = -1LL;
	static volatile int8_t x472 = INT8_MIN;

	t89 = (x469-(x470-(x471-x472)));

	if (t89 != 254LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x474 = 40333938LL;
	static int8_t x475 = 2;
	volatile int32_t x476 = -82330373;
	static int64_t t90 = 1972065740868419399LL;

	t90 = (x473-(x474-(x475-x476)));

	if (t90 != 41996692LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = INT16_MIN;
	uint64_t x490 = 3750929700786990062LLU;
	int32_t x491 = -1;
	static uint64_t x492 = UINT64_MAX;
	uint64_t t91 = 254LLU;

	t91 = (x489-(x490-(x491-x492)));

	if (t91 != 14695814372922528786LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x493 = -121;
	static int8_t x494 = INT8_MAX;
	static int16_t x495 = 582;
	static int16_t x496 = 12;

	t92 = (x493-(x494-(x495-x496)));

	if (t92 != 322) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = -161LL;
	int32_t x502 = INT32_MIN;
	int8_t x504 = -3;

	t93 = (x501-(x502-(x503-x504)));

	if (t93 != -9223372034707292318LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = INT8_MAX;
	static int32_t x506 = -118964798;
	int64_t x507 = -990119LL;
	int32_t x508 = INT32_MIN;
	volatile int64_t t94 = -4654LL;

	t94 = (x505-(x506-(x507-x508)));

	if (t94 != 2265458454LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x517 = -1;
	int32_t x520 = 1;
	static volatile int32_t t95 = 215;

	t95 = (x517-(x518-(x519-x520)));

	if (t95 != 95) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = -655798177377669343LL;
	int32_t x523 = -1;
	int16_t x524 = INT16_MIN;
	int64_t t96 = 25571250LL;

	t96 = (x521-(x522-(x523-x524)));

	if (t96 != -655798177377603808LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = UINT32_MAX;
	static int32_t x526 = -1;
	static int64_t x527 = -1LL;
	int32_t x528 = -100;

	t97 = (x525-(x526-(x527-x528)));

	if (t97 != 4294967395LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x529 = 200033614U;
	static volatile int8_t x530 = INT8_MIN;
	volatile uint8_t x531 = 0U;
	static int16_t x532 = -5758;
	static uint32_t t98 = 946984U;

	t98 = (x529-(x530-(x531-x532)));

	if (t98 != 200039500U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x534 = 32275U;
	static int64_t x535 = 9552208436850LL;
	static int32_t x536 = INT32_MAX;
	int64_t t99 = 2157537LL;

	t99 = (x533-(x534-(x535-x536)));

	if (t99 != 9550060920936LL) { NG(); } else { ; }
	
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

