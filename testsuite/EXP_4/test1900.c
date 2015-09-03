#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = 1;
static int32_t t3 = 580176273;
int32_t x21 = 8642425;
static int32_t x22 = INT32_MIN;
volatile uint64_t x25 = 3084027675899LLU;
volatile uint32_t x36 = UINT32_MAX;
static uint16_t x37 = 10U;
uint8_t x38 = UINT8_MAX;
uint64_t t8 = 3638LLU;
int32_t x54 = -1;
uint16_t x63 = UINT16_MAX;
volatile int16_t x65 = -3271;
int64_t t15 = -534LL;
uint64_t x70 = UINT64_MAX;
volatile uint64_t t16 = 35690037783478759LLU;
static int8_t x73 = -1;
int16_t x75 = -1;
volatile int8_t x76 = -1;
static uint64_t x84 = 15878362LLU;
static uint64_t t18 = 85328755994327LLU;
int32_t x87 = INT32_MIN;
static uint32_t x96 = 289116U;
int64_t t21 = -662LL;
int64_t t22 = -2667521LL;
uint16_t x107 = 201U;
uint64_t x116 = 22529LLU;
static int8_t x119 = INT8_MIN;
int16_t x120 = INT16_MAX;
int8_t x122 = 0;
int32_t t28 = -12327;
int64_t t29 = -31737046613LL;
int64_t x131 = -24785LL;
static int64_t t30 = -6799415735284633LL;
int8_t x133 = -63;
volatile uint8_t x138 = UINT8_MAX;
int32_t x144 = -1;
volatile uint64_t t33 = 12LLU;
static int32_t t34 = 0;
static int16_t x150 = INT16_MAX;
int64_t x152 = INT64_MIN;
int8_t x156 = INT8_MIN;
int16_t x157 = INT16_MIN;
volatile int64_t x161 = INT64_MIN;
int8_t x163 = INT8_MIN;
uint8_t x178 = UINT8_MAX;
uint8_t x191 = 29U;
int16_t x197 = -1;
volatile int32_t x214 = 5;
volatile uint64_t t48 = 413LLU;
volatile int64_t t52 = -61588439LL;
int16_t x236 = INT16_MIN;
static volatile int32_t x239 = INT32_MAX;
int8_t x258 = 55;
int8_t x264 = -1;
volatile uint32_t x280 = 111061924U;
volatile uint64_t t64 = 12303LLU;
uint16_t x287 = 16U;
uint16_t x291 = 3U;
int8_t x301 = INT8_MAX;
int16_t x302 = INT16_MAX;
volatile int32_t t69 = 1;
volatile uint64_t x309 = 8851LLU;
int8_t x313 = INT8_MIN;
static int64_t x315 = 8242716989LL;
static int32_t x316 = 16187;
int64_t t72 = 3854485195600170009LL;
volatile int32_t t73 = -830;
int16_t x328 = -3120;
volatile uint32_t t76 = 2U;
int8_t x343 = INT8_MAX;
uint8_t x352 = UINT8_MAX;
int16_t x355 = -33;
uint8_t x356 = 0U;
int64_t x361 = -112191649070675406LL;
static int64_t t84 = -2351LL;
int16_t x370 = INT16_MAX;
uint64_t x376 = UINT64_MAX;
uint64_t t86 = 229LLU;
static volatile int16_t x379 = INT16_MIN;
static int32_t x380 = -1;
int64_t x381 = INT64_MAX;
int16_t x384 = INT16_MIN;
static int64_t x385 = 2031166145LL;
volatile int8_t x386 = -1;
int8_t x387 = INT8_MIN;
static volatile uint8_t x395 = UINT8_MAX;
uint64_t t92 = 356LLU;
int8_t x404 = INT8_MIN;
int64_t t93 = -133355095LL;
static int8_t x409 = 0;
volatile int8_t x415 = INT8_MIN;
uint64_t x419 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = -959439;

	t0 = (x1-(x2/(x3|x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	uint64_t x7 = 2340842042LLU;
	volatile int8_t x8 = 0;
	volatile uint64_t t1 = 2046172470701687LLU;

	t1 = (x5-(x6/(x7|x8)));

	if (t1 != 18446744065829163389LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 353LLU;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	int8_t x16 = 1;
	uint64_t t2 = 1218454884566LLU;

	t2 = (x13-(x14/(x15|x16)));

	if (t2 != 18446462590142644569LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	static volatile int16_t x18 = -1745;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = 2123838;

	t3 = (x17-(x18/(x19|x20)));

	if (t3 != -27) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x23 = UINT32_MAX;
	static uint8_t x24 = 16U;
	uint32_t t4 = 168221U;

	t4 = (x21-(x22/(x23|x24)));

	if (t4 != 8642425U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -1LL;
	uint64_t x27 = 6640212989LLU;
	int32_t x28 = -1;
	volatile uint64_t t5 = 12LLU;

	t5 = (x25-(x26/(x27|x28)));

	if (t5 != 3084027675898LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 3;
	static int8_t x30 = INT8_MAX;
	static int32_t x31 = -1;
	int16_t x32 = -1;
	volatile int32_t t6 = 23983;

	t6 = (x29-(x30/(x31|x32)));

	if (t6 != 130) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = -1LL;
	volatile int16_t x34 = -1;
	static int32_t x35 = INT32_MIN;
	volatile int64_t t7 = -1169299993989LL;

	t7 = (x33-(x34/(x35|x36)));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x39 = 245701725826580LLU;
	uint32_t x40 = 2881178U;

	t8 = (x37-(x38/(x39|x40)));

	if (t8 != 10LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -4033;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 263356478U;
	uint32_t t9 = 38U;

	t9 = (x41-(x42/(x43|x44)));

	if (t9 != 4294967167U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	uint8_t x46 = 23U;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	volatile int64_t t10 = -321487508712220LL;

	t10 = (x45-(x46/(x47|x48)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 680LL;
	static volatile int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;
	volatile int64_t t11 = -12LL;

	t11 = (x49-(x50/(x51|x52)));

	if (t11 != 680LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x53 = 137U;
	volatile uint8_t x55 = UINT8_MAX;
	static volatile int32_t x56 = -252439;
	static volatile int32_t t12 = 122;

	t12 = (x53-(x54/(x55|x56)));

	if (t12 != 137) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1676;
	int64_t x58 = 3117596086068848LL;
	int64_t x59 = -1LL;
	int16_t x60 = -1;
	volatile int64_t t13 = 87LL;

	t13 = (x57-(x58/(x59|x60)));

	if (t13 != 3117596086067172LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x61 = 573904LLU;
	uint16_t x62 = 24598U;
	int16_t x64 = INT16_MIN;
	uint64_t t14 = 2348731380138LLU;

	t14 = (x61-(x62/(x63|x64)));

	if (t14 != 598502LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = INT64_MAX;
	uint16_t x67 = 23U;
	int16_t x68 = INT16_MIN;

	t15 = (x65-(x66/(x67|x68)));

	if (t15 != 281672683974581LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MAX;
	int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MAX;

	t16 = (x69-(x70/(x71|x72)));

	if (t16 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x74 = -1LL;
	int64_t t17 = -131LL;

	t17 = (x73-(x74/(x75|x76)));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1531;
	volatile int16_t x82 = INT16_MAX;
	uint16_t x83 = 3U;

	t18 = (x81-(x82/(x83|x84)));

	if (t18 != 18446744073709550085LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	int16_t x88 = INT16_MAX;
	uint64_t t19 = 879154551102153LLU;

	t19 = (x85-(x86/(x87|x88)));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -19190843969LL;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	uint16_t x92 = 1U;
	volatile int64_t t20 = 924LL;

	t20 = (x89-(x90/(x91|x92)));

	if (t20 != -19190843970LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = 3U;
	int16_t x94 = -1;
	static int64_t x95 = INT64_MIN;

	t21 = (x93-(x94/(x95|x96)));

	if (t21 != 3LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 12;
	static int16_t x98 = 26;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;

	t22 = (x97-(x98/(x99|x100)));

	if (t22 != 12LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = 2087505LL;
	volatile int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = 9U;
	volatile int64_t t23 = 1401363LL;

	t23 = (x101-(x102/(x103|x104)));

	if (t23 != 50309LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 12675881468LL;
	uint8_t x106 = 71U;
	volatile int64_t x108 = -1LL;
	static int64_t t24 = 1882342LL;

	t24 = (x105-(x106/(x107|x108)));

	if (t24 != 12675881539LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x109 = INT32_MAX;
	static int64_t x110 = INT64_MIN;
	int16_t x111 = -13814;
	uint32_t x112 = 1U;
	volatile int64_t t25 = -257LL;

	t25 = (x109-(x110/(x111|x112)));

	if (t25 != 4294974201LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	int32_t x115 = -1;
	uint64_t t26 = 478705798156LLU;

	t26 = (x113-(x114/(x115|x116)));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = -1;
	int32_t t27 = -1;

	t27 = (x117-(x118/(x119|x120)));

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 11640U;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;

	t28 = (x121-(x122/(x123|x124)));

	if (t28 != 11640) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 24065U;
	static int64_t x126 = -1LL;
	int8_t x127 = 34;
	int16_t x128 = -1;

	t29 = (x125-(x126/(x127|x128)));

	if (t29 != 24064LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	static int64_t x132 = INT64_MIN;

	t30 = (x129-(x130/(x131|x132)));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	static uint16_t x135 = 1U;
	int8_t x136 = INT8_MAX;
	static int32_t t31 = -756876;

	t31 = (x133-(x134/(x135|x136)));

	if (t31 != -62) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = 285;
	uint8_t x139 = 11U;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t32 = 1313U;

	t32 = (x137-(x138/(x139|x140)));

	if (t32 != 285U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 291476LLU;
	static uint64_t x142 = 717907691LLU;
	int64_t x143 = INT64_MAX;

	t33 = (x141-(x142/(x143|x144)));

	if (t33 != 291476LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MIN;

	t34 = (x145-(x146/(x147|x148)));

	if (t34 != 126) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	int8_t x151 = -31;
	static int64_t t35 = -31151744LL;

	t35 = (x149-(x150/(x151|x152)));

	if (t35 != 929LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 130346161824068435LLU;
	uint32_t x154 = 531878U;
	int16_t x155 = INT16_MAX;
	volatile uint64_t t36 = 62262211LLU;

	t36 = (x153-(x154/(x155|x156)));

	if (t36 != 130346161824068435LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x158 = 60LL;
	volatile uint32_t x159 = UINT32_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t37 = 912133LL;

	t37 = (x157-(x158/(x159|x160)));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = 6LL;
	int32_t x164 = INT32_MAX;
	static volatile int64_t t38 = 13938207LL;

	t38 = (x161-(x162/(x163|x164)));

	if (t38 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = -1;
	static int32_t t39 = 535765113;

	t39 = (x169-(x170/(x171|x172)));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	int16_t x174 = 0;
	int32_t x175 = INT32_MAX;
	volatile int16_t x176 = INT16_MIN;
	int32_t t40 = 320477664;

	t40 = (x173-(x174/(x175|x176)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = INT64_MIN;
	int32_t x179 = -51;
	uint32_t x180 = UINT32_MAX;
	int64_t t41 = INT64_MIN;

	t41 = (x177-(x178/(x179|x180)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 127U;
	volatile int64_t x183 = INT64_MAX;
	int16_t x184 = INT16_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x181-(x182/(x183|x184)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	uint64_t x186 = 21LLU;
	uint32_t x187 = 11233U;
	static int8_t x188 = 49;
	volatile uint64_t t43 = 382LLU;

	t43 = (x185-(x186/(x187|x188)));

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -3;
	static int8_t x190 = INT8_MIN;
	uint16_t x192 = 16U;
	volatile int32_t t44 = -7801;

	t44 = (x189-(x190/(x191|x192)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 508U;
	static volatile int8_t x194 = INT8_MIN;
	volatile int64_t x195 = INT64_MIN;
	static uint8_t x196 = 1U;
	volatile int64_t t45 = 12965324141LL;

	t45 = (x193-(x194/(x195|x196)));

	if (t45 != 508LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MAX;
	volatile uint64_t t46 = 3788558496973124531LLU;

	t46 = (x197-(x198/(x199|x200)));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 182977LLU;
	uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = -8;
	int8_t x208 = -1;
	volatile uint64_t t47 = 51336LLU;

	t47 = (x205-(x206/(x207|x208)));

	if (t47 != 182976LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = 23U;
	static int32_t x215 = 67;
	static uint64_t x216 = 1567649727896389645LLU;

	t48 = (x213-(x214/(x215|x216)));

	if (t48 != 23LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = -3035889;
	volatile int16_t x219 = INT16_MIN;
	uint32_t x220 = 8084999U;
	static volatile uint32_t t49 = 1167911U;

	t49 = (x217-(x218/(x219|x220)));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = 1080499833261571970LL;
	int32_t x222 = -1;
	int16_t x223 = 0;
	int32_t x224 = INT32_MIN;
	static volatile int64_t t50 = 65577575593932241LL;

	t50 = (x221-(x222/(x223|x224)));

	if (t50 != 1080499833261571970LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	volatile int16_t x226 = -1;
	int8_t x227 = 62;
	static int8_t x228 = 1;
	static int32_t t51 = 128;

	t51 = (x225-(x226/(x227|x228)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MAX;
	int64_t x230 = 69654586980LL;
	static uint32_t x231 = 18U;
	volatile int64_t x232 = INT64_MAX;

	t52 = (x229-(x230/(x231|x232)));

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = -2;
	uint8_t x234 = 49U;
	int16_t x235 = INT16_MIN;
	static volatile int32_t t53 = 1395;

	t53 = (x233-(x234/(x235|x236)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x237 = 27U;
	static int64_t x238 = -1LL;
	static int16_t x240 = -1;
	static int64_t t54 = -1732796237LL;

	t54 = (x237-(x238/(x239|x240)));

	if (t54 != 26LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 783272712U;
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	uint32_t t55 = 934U;

	t55 = (x241-(x242/(x243|x244)));

	if (t55 != 783272584U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x245 = 3582U;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 1U;
	volatile int16_t x248 = INT16_MAX;
	volatile uint32_t t56 = 1306020113U;

	t56 = (x245-(x246/(x247|x248)));

	if (t56 != 4294839802U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = 1LL;
	static uint16_t x250 = UINT16_MAX;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = -15;
	int64_t t57 = -1365LL;

	t57 = (x249-(x250/(x251|x252)));

	if (t57 != 65536LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = -1LL;
	volatile uint16_t x254 = UINT16_MAX;
	int32_t x255 = -71844;
	int32_t x256 = INT32_MIN;
	int64_t t58 = -85876292LL;

	t58 = (x253-(x254/(x255|x256)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x259 = 0;
	int64_t x260 = INT64_MAX;
	static volatile int64_t t59 = -1482336416277LL;

	t59 = (x257-(x258/(x259|x260)));

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = 723972695112LL;
	volatile uint8_t x262 = 12U;
	volatile uint16_t x263 = 5U;
	volatile int64_t t60 = -132695611271656929LL;

	t60 = (x261-(x262/(x263|x264)));

	if (t60 != 723972695124LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = 96467119U;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	int64_t t61 = 1625LL;

	t61 = (x265-(x266/(x267|x268)));

	if (t61 != -2147480705LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int32_t x274 = 0;
	uint16_t x275 = UINT16_MAX;
	static uint64_t x276 = 250LLU;
	static volatile uint64_t t62 = 46052922152LLU;

	t62 = (x273-(x274/(x275|x276)));

	if (t62 != 255LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = -1LL;
	int64_t x278 = 508516292831581LL;
	static uint8_t x279 = 2U;
	volatile int64_t t63 = 848425153378203LL;

	t63 = (x277-(x278/(x279|x280)));

	if (t63 != -4578674LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 2072967U;
	volatile uint8_t x282 = 1U;
	uint64_t x283 = 45706LLU;
	static int32_t x284 = INT32_MAX;

	t64 = (x281-(x282/(x283|x284)));

	if (t64 != 2072967LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -2;
	uint32_t x286 = UINT32_MAX;
	static uint8_t x288 = UINT8_MAX;
	uint32_t t65 = 78U;

	t65 = (x285-(x286/(x287|x288)));

	if (t65 != 4278124285U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x289 = 2U;
	volatile int64_t x290 = INT64_MIN;
	int8_t x292 = INT8_MAX;
	int64_t t66 = 172668289085LL;

	t66 = (x289-(x290/(x291|x292)));

	if (t66 != 72624976668147843LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = -2LL;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	uint8_t x296 = UINT8_MAX;
	int64_t t67 = 41225435LL;

	t67 = (x293-(x294/(x295|x296)));

	if (t67 != 65533LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 11872U;
	uint16_t x298 = 4U;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t68 = -1;

	t68 = (x297-(x298/(x299|x300)));

	if (t68 != 11872) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x303 = INT16_MIN;
	volatile uint16_t x304 = 4U;

	t69 = (x301-(x302/(x303|x304)));

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MAX;
	int8_t x307 = -1;
	volatile int64_t x308 = INT64_MAX;
	int64_t t70 = -250903737620276LL;

	t70 = (x305-(x306/(x307|x308)));

	if (t70 != 32639LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	uint64_t t71 = 7383239LLU;

	t71 = (x309-(x310/(x311|x312)));

	if (t71 != 8851LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x314 = 7U;

	t72 = (x313-(x314/(x315|x316)));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = -1;
	int32_t x318 = INT32_MIN;
	int32_t x319 = 58085842;
	volatile int32_t x320 = 292951;

	t73 = (x317-(x318/(x319|x320)));

	if (t73 != 35) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile uint16_t x323 = UINT16_MAX;
	int32_t x324 = 3350226;
	volatile int32_t t74 = 91265;

	t74 = (x321-(x322/(x323|x324)));

	if (t74 != 629) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = 1;
	static volatile int16_t x326 = INT16_MAX;
	uint8_t x327 = UINT8_MAX;
	int32_t t75 = 13966;

	t75 = (x325-(x326/(x327|x328)));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = 39;
	uint32_t x330 = 29U;
	static volatile int32_t x331 = 0;
	int32_t x332 = 223941;

	t76 = (x329-(x330/(x331|x332)));

	if (t76 != 39U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = 9U;
	int8_t x334 = 0;
	volatile uint16_t x335 = UINT16_MAX;
	volatile int16_t x336 = -1;
	volatile int32_t t77 = 110;

	t77 = (x333-(x334/(x335|x336)));

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -9740;
	volatile int64_t t78 = 8547961031567050LL;

	t78 = (x337-(x338/(x339|x340)));

	if (t78 != -220481LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -224;
	static int32_t x342 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t79 = 180943;

	t79 = (x341-(x342/(x343|x344)));

	if (t79 != -66014) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = 1541739399174726050LL;
	uint32_t x350 = 0U;
	int64_t x351 = INT64_MAX;
	volatile int64_t t80 = 1LL;

	t80 = (x349-(x350/(x351|x352)));

	if (t80 != 1541739399174726050LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 229544LL;
	uint32_t x354 = 1810429U;
	int64_t t81 = -5884969241580LL;

	t81 = (x353-(x354/(x355|x356)));

	if (t81 != 229544LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = INT32_MAX;
	int32_t x358 = -7915;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = -1;
	int32_t t82 = -363670;

	t82 = (x357-(x358/(x359|x360)));

	if (t82 != 2147475732) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	static volatile int64_t t83 = 20LL;

	t83 = (x361-(x362/(x363|x364)));

	if (t83 != -112191649070675406LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = INT8_MAX;
	static uint16_t x366 = 72U;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = 1950581520309LL;

	t84 = (x365-(x366/(x367|x368)));

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -1;
	int16_t x371 = 8;
	int16_t x372 = INT16_MIN;
	volatile int32_t t85 = 2927;

	t85 = (x369-(x370/(x371|x372)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x373 = 780803695U;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = 546;

	t86 = (x373-(x374/(x375|x376)));

	if (t86 != 780803695LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x377 = UINT64_MAX;
	static uint16_t x378 = 5U;
	static uint64_t t87 = 115933600547049357LLU;

	t87 = (x377-(x378/(x379|x380)));

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x382 = 254U;
	volatile uint8_t x383 = 23U;
	int64_t t88 = INT64_MAX;

	t88 = (x381-(x382/(x383|x384)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x388 = 33646469U;
	static volatile int64_t t89 = 36LL;

	t89 = (x385-(x386/(x387|x388)));

	if (t89 != 2031166144LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x389 = 2578U;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t90 = 142804276846511271LLU;

	t90 = (x389-(x390/(x391|x392)));

	if (t90 != 2578LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	int32_t x396 = -8387084;
	int32_t t91 = -689158860;

	t91 = (x393-(x394/(x395|x396)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = -3;
	uint8_t x399 = 100U;
	uint64_t x400 = UINT64_MAX;

	t92 = (x397-(x398/(x399|x400)));

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = 8U;
	static int64_t x402 = 25409477583545LL;
	int32_t x403 = -1;

	t93 = (x401-(x402/(x403|x404)));

	if (t93 != 25409477583553LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = 4U;
	int64_t x406 = INT64_MAX;
	static int8_t x407 = INT8_MAX;
	static uint32_t x408 = 1495347U;
	int64_t t94 = -5741LL;

	t94 = (x405-(x406/(x407|x408)));

	if (t94 != -6167734505119LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x410 = 2U;
	static volatile int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t95 = 4;

	t95 = (x409-(x410/(x411|x412)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = 224967U;
	int8_t x414 = -5;
	volatile int64_t x416 = 184015LL;
	int64_t t96 = -631650307210LL;

	t96 = (x413-(x414/(x415|x416)));

	if (t96 != 224967LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x417 = 23U;
	int32_t x418 = INT32_MAX;
	int16_t x420 = 3;
	volatile uint64_t t97 = 20932701969LLU;

	t97 = (x417-(x418/(x419|x420)));

	if (t97 != 23LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = 0LL;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = 2476256914669471444LLU;
	int8_t x424 = -29;
	uint64_t t98 = 248LLU;

	t98 = (x421-(x422/(x423|x424)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x425 = INT64_MAX;
	static uint64_t x426 = 15023527731LLU;
	volatile int64_t x427 = 74838901659LL;
	static int8_t x428 = -1;
	uint64_t t99 = 4444558336608664073LLU;

	t99 = (x425-(x426/(x427|x428)));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

