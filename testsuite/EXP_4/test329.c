#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int32_t x3 = -1;
int64_t x6 = -1252460562LL;
static int64_t t1 = -1500662267786827753LL;
static uint32_t t2 = 3629U;
uint64_t t3 = 30273358607324635LLU;
int32_t t4 = 14076836;
int16_t x28 = 2;
static int32_t x31 = -1;
volatile int64_t t8 = -25065402LL;
int8_t x38 = -1;
int16_t x55 = -1;
uint16_t x56 = 2506U;
static volatile int64_t t11 = 10815324870077531LL;
static uint64_t x58 = 10854527896LLU;
int16_t x59 = INT16_MIN;
uint32_t x61 = 553803671U;
static int16_t x63 = INT16_MAX;
static uint32_t t13 = 32831263U;
uint32_t x70 = 117U;
volatile uint32_t t14 = 369855U;
int16_t x77 = INT16_MAX;
static volatile int32_t x79 = INT32_MAX;
int64_t x81 = 3922051616199785036LL;
uint16_t x83 = 4211U;
volatile int64_t t17 = 1LL;
static int64_t x90 = 139317577892067883LL;
int16_t x92 = -1;
uint16_t x98 = 1848U;
uint32_t x104 = 2242U;
volatile uint16_t x109 = 50U;
volatile int64_t t23 = 5228266LL;
int8_t x121 = -13;
volatile int8_t x125 = INT8_MIN;
static int64_t x127 = INT64_MIN;
int64_t x128 = INT64_MIN;
static uint64_t x129 = 116666LLU;
volatile uint64_t t28 = 9628542LLU;
volatile int32_t x137 = INT32_MIN;
uint8_t x138 = 18U;
uint64_t x139 = 32678670899701LLU;
static volatile uint64_t t31 = 226129LLU;
int8_t x146 = INT8_MIN;
uint32_t x148 = 23U;
static int16_t x149 = 2;
int64_t x155 = 20419791005502LL;
volatile int64_t t34 = -3766839LL;
uint32_t x175 = UINT32_MAX;
int64_t x177 = 39197917857LL;
uint64_t x179 = 65LLU;
int8_t x180 = 10;
volatile int32_t x181 = 1154;
int8_t x184 = -1;
static uint32_t x186 = UINT32_MAX;
int32_t x204 = 22570;
volatile int32_t x208 = -3;
volatile int8_t x211 = INT8_MIN;
static uint16_t x212 = 14U;
int32_t t49 = INT32_MIN;
uint64_t x227 = UINT64_MAX;
volatile int32_t t53 = 204912;
int64_t t54 = 153123659562LL;
static int32_t x238 = -1;
volatile int8_t x246 = INT8_MIN;
uint64_t x247 = 29610LLU;
volatile uint64_t t56 = 332212709961LLU;
uint8_t x250 = UINT8_MAX;
uint64_t x253 = UINT64_MAX;
int64_t x267 = -1LL;
static int16_t x271 = INT16_MIN;
uint32_t x279 = 1940133382U;
int32_t x286 = INT32_MIN;
volatile int8_t x296 = -1;
int8_t x298 = -1;
static int8_t x304 = 12;
uint64_t x310 = 22036646958LLU;
static int64_t x312 = INT64_MIN;
uint32_t x324 = 135410U;
int8_t x325 = INT8_MIN;
int16_t x337 = 78;
int64_t x339 = INT64_MAX;
uint32_t x342 = 47U;
int32_t x344 = -215;
volatile int64_t x355 = INT64_MIN;
int8_t x356 = INT8_MIN;
static volatile int32_t x373 = INT32_MIN;
static int8_t x376 = INT8_MIN;
static int32_t x383 = -5185;
int16_t x392 = INT16_MIN;
int64_t x394 = INT64_MIN;
uint8_t x395 = UINT8_MAX;
static uint64_t t88 = 260163619582LLU;
int64_t x405 = 226325722LL;
volatile uint32_t x408 = 11835U;
uint8_t x410 = 2U;
static int32_t x421 = 1769808;
volatile int64_t x424 = INT64_MIN;
volatile int64_t t92 = 30LL;
int8_t x425 = -1;
uint32_t x431 = 1U;
int64_t x432 = -1LL;
static uint64_t x440 = 17483610176094503LLU;
int16_t x446 = -1;
uint64_t t98 = 1LLU;
static uint32_t t99 = 2434U;


void f0(void) {
	uint32_t x2 = 11U;
	uint32_t x4 = 3468668U;
	uint32_t t0 = 20513U;

	t0 = (x1/(x2^(x3-x4)));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 0;
	int64_t x7 = -1LL;
	int8_t x8 = -1;

	t1 = (x5/(x6^(x7-x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	uint16_t x11 = 7U;
	uint32_t x12 = 10U;

	t2 = (x9/(x10^(x11-x12)));

	if (t2 != 34359738U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = -839921671424LL;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 43LLU;

	t3 = (x13/(x14^(x15-x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -1;

	t4 = (x17/(x18^(x19-x20)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t5 = 17121420621LLU;

	t5 = (x21/(x22^(x23-x24)));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int8_t x26 = -11;
	int8_t x27 = INT8_MIN;
	volatile uint32_t t6 = 582807U;

	t6 = (x25/(x26^(x27-x28)));

	if (t6 != 30899045U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static int16_t x30 = INT16_MIN;
	static volatile uint8_t x32 = 15U;
	int64_t t7 = 272286710910607LL;

	t7 = (x29/(x30^(x31-x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -4857336LL;
	uint32_t x34 = 3U;
	static int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MIN;

	t8 = (x33/(x34^(x35-x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 46U;
	volatile int32_t x39 = INT32_MIN;
	static int32_t x40 = -1;
	int32_t t9 = 7688275;

	t9 = (x37/(x38^(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	volatile int64_t x48 = 53374492148353LL;
	uint64_t t10 = 129338457844699425LLU;

	t10 = (x45/(x46^(x47-x48)));

	if (t10 != 345609LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -1LL;
	uint16_t x54 = 977U;

	t11 = (x53/(x54^(x55-x56)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x60 = 0U;
	volatile uint64_t t12 = 519611367597196LLU;

	t12 = (x57/(x58^(x59-x60)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MAX;
	int16_t x64 = -30;

	t13 = (x61/(x62^(x63-x64)));

	if (t13 != 16850U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x71 = UINT32_MAX;
	volatile int16_t x72 = INT16_MIN;

	t14 = (x69/(x70^(x71-x72)));

	if (t14 != 65772U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	int8_t x74 = -33;
	int64_t x75 = 28375121LL;
	static int32_t x76 = -95;
	volatile int64_t t15 = 173738686880652LL;

	t15 = (x73/(x74^(x75-x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x78 = 0;
	uint32_t x80 = 1671076066U;
	volatile uint32_t t16 = 1244144U;

	t16 = (x77/(x78^(x79-x80)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x82 = INT64_MAX;
	int8_t x84 = INT8_MIN;

	t17 = (x81/(x82^(x83-x84)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 44U;
	volatile int8_t x86 = 0;
	volatile int8_t x87 = -1;
	volatile int64_t x88 = 0LL;
	static volatile int64_t t18 = -316086326818LL;

	t18 = (x85/(x86^(x87-x88)));

	if (t18 != -44LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	volatile uint64_t t19 = 21929LLU;

	t19 = (x89/(x90^(x91-x92)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x97 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	uint32_t x100 = 3832U;
	volatile uint64_t t20 = 7LLU;

	t20 = (x97/(x98^(x99-x100)));

	if (t20 != 609386676149104LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MIN;
	static uint32_t t21 = 3884742U;

	t21 = (x101/(x102^(x103-x104)));

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = 1U;
	int64_t x106 = -1LL;
	int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	volatile int64_t t22 = 63LL;

	t22 = (x105/(x106^(x107-x108)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -2;
	int64_t x111 = 512092LL;
	uint8_t x112 = UINT8_MAX;

	t23 = (x109/(x110^(x111-x112)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	int64_t t24 = 16986825094LL;

	t24 = (x113/(x114^(x115-x116)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	int8_t x118 = 4;
	int32_t x119 = 1707297;
	int64_t x120 = INT64_MAX;
	volatile int64_t t25 = -953875655154803592LL;

	t25 = (x117/(x118^(x119-x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x122 = INT8_MAX;
	int64_t x123 = 8915578LL;
	int64_t x124 = 61825558845330420LL;
	volatile int64_t t26 = -1LL;

	t26 = (x121/(x122^(x123-x124)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = -113633683;
	volatile int64_t t27 = 187LL;

	t27 = (x125/(x126^(x127-x128)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x130 = 28U;
	volatile int8_t x131 = INT8_MAX;
	int8_t x132 = INT8_MIN;

	t28 = (x129/(x130^(x131-x132)));

	if (t28 != 513LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 17547U;
	static int64_t x134 = 0LL;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 12617351783LLU;
	uint64_t t29 = 3571LLU;

	t29 = (x133/(x134^(x135-x136)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x140 = INT64_MIN;
	uint64_t t30 = 24570LLU;

	t30 = (x137/(x138^(x139-x140)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 1696705665LLU;
	volatile int16_t x142 = -1;
	uint16_t x143 = 3047U;
	uint64_t x144 = 266609820320259221LLU;

	t31 = (x141/(x142^(x143-x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	uint16_t x147 = 0U;
	static uint32_t t32 = 8261U;

	t32 = (x145/(x146^(x147-x148)));

	if (t32 != 40904450U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x150 = INT32_MIN;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t33 = 152181200;

	t33 = (x149/(x150^(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	volatile int32_t x154 = -1;
	volatile int32_t x156 = -147;

	t34 = (x153/(x154^(x155-x156)));

	if (t34 != -451687LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -42;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t35 = -671062;

	t35 = (x157/(x158^(x159-x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = INT32_MIN;
	int32_t x162 = 59;
	static volatile uint64_t x163 = 11953496876310LLU;
	static int16_t x164 = -1;
	volatile uint64_t t36 = 817132999943LLU;

	t36 = (x161/(x162^(x163-x164)));

	if (t36 != 1543209LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = -1;
	volatile int64_t t37 = 348LL;

	t37 = (x165/(x166^(x167-x168)));

	if (t37 != -283700041120075LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MIN;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = -388;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t38 = -1;

	t38 = (x169/(x170^(x171-x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -2;
	uint64_t x174 = 0LLU;
	uint64_t x176 = 11025337LLU;
	static volatile uint64_t t39 = 84738279LLU;

	t39 = (x173/(x174^(x175-x176)));

	if (t39 != 4306021009LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x178 = INT8_MIN;
	volatile uint64_t t40 = 6934999546165047LLU;

	t40 = (x177/(x178^(x179-x180)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MAX;
	int32_t t41 = -840;

	t41 = (x181/(x182^(x183-x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 1;
	int8_t x187 = INT8_MIN;
	int64_t x188 = 4LL;
	static volatile int64_t t42 = -267452490LL;

	t42 = (x185/(x186^(x187-x188)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	static int32_t x190 = INT32_MIN;
	static int8_t x191 = -18;
	uint32_t x192 = UINT32_MAX;
	int64_t t43 = 25587470984020779LL;

	t43 = (x189/(x190^(x191-x192)));

	if (t43 != -4294967330LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = 64;
	int8_t x194 = -1;
	int8_t x195 = -1;
	int8_t x196 = INT8_MAX;
	volatile int32_t t44 = 34065;

	t44 = (x193/(x194^(x195-x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	volatile int16_t x199 = INT16_MAX;
	int16_t x200 = -10615;
	uint32_t t45 = 10011U;

	t45 = (x197/(x198^(x199-x200)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1254;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 15U;
	static int32_t t46 = 15214;

	t46 = (x201/(x202^(x203-x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int16_t x206 = 1;
	int32_t x207 = INT32_MIN;
	volatile int32_t t47 = 1;

	t47 = (x205/(x206^(x207-x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = 165602303272246LL;
	static volatile int16_t x210 = 23;
	int64_t t48 = -22671641LL;

	t48 = (x209/(x210^(x211-x212)));

	if (t48 != -1068401956595LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	static int16_t x216 = -1;

	t49 = (x213/(x214^(x215-x216)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = -15;
	volatile uint64_t t50 = 1025698351LLU;

	t50 = (x217/(x218^(x219-x220)));

	if (t50 != 281539415969071LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MIN;
	uint16_t x223 = 16U;
	int8_t x224 = INT8_MAX;
	volatile int64_t t51 = -3753LL;

	t51 = (x221/(x222^(x223-x224)));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = 3LL;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t52 = 3343146LLU;

	t52 = (x225/(x226^(x227-x228)));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = 2;
	volatile uint8_t x230 = 74U;
	int8_t x231 = 1;
	int16_t x232 = INT16_MIN;

	t53 = (x229/(x230^(x231-x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MAX;
	int16_t x234 = -826;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = -1LL;

	t54 = (x233/(x234^(x235-x236)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -1;
	int64_t x239 = 799936548LL;
	static int8_t x240 = -1;
	int64_t t55 = 10577LL;

	t55 = (x237/(x238^(x239-x240)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x245 = 2235U;
	static volatile uint64_t x248 = 151953313LLU;

	t56 = (x245/(x246^(x247-x248)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 4LLU;
	uint8_t x251 = 0U;
	volatile int8_t x252 = INT8_MIN;
	volatile uint64_t t57 = 53313542LLU;

	t57 = (x249/(x250^(x251-x252)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x254 = 10605925U;
	static int8_t x255 = -51;
	int16_t x256 = INT16_MIN;
	uint64_t t58 = 250476339685984994LLU;

	t58 = (x253/(x254^(x255-x256)));

	if (t58 != 1741082768384LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = 88;
	volatile int16_t x258 = -1;
	static int32_t x259 = -1;
	static int8_t x260 = -1;
	volatile int32_t t59 = 3877703;

	t59 = (x257/(x258^(x259-x260)));

	if (t59 != -88) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	volatile int8_t x262 = -1;
	int32_t x263 = -7759;
	int64_t x264 = INT64_MIN;
	int64_t t60 = -1LL;

	t60 = (x261/(x262^(x263-x264)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	static int64_t x268 = -1LL;
	volatile int64_t t61 = 5970282LL;

	t61 = (x265/(x266^(x267-x268)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x269 = INT8_MIN;
	int8_t x270 = -35;
	volatile int8_t x272 = -1;
	volatile int32_t t62 = -8248;

	t62 = (x269/(x270^(x271-x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = -1;
	uint16_t x280 = 12U;
	volatile uint32_t t63 = 1769505276U;

	t63 = (x277/(x278^(x279-x280)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x287 = 37U;
	int16_t x288 = 1;
	int32_t t64 = -235936;

	t64 = (x285/(x286^(x287-x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x294 = 229U;
	int8_t x295 = INT8_MAX;
	volatile int32_t t65 = 2258;

	t65 = (x293/(x294^(x295-x296)));

	if (t65 != 21262214) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = -2258615LL;
	int8_t x299 = -1;
	uint32_t x300 = 6227U;
	int64_t t66 = -6714356976153758LL;

	t66 = (x297/(x298^(x299-x300)));

	if (t66 != -362LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = UINT64_MAX;
	int32_t x302 = -50031;
	int64_t x303 = 5133379523652349LL;
	uint64_t t67 = 158113154LLU;

	t67 = (x301/(x302^(x303-x304)));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x305 = INT64_MAX;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1661;
	uint32_t x308 = 19U;
	int64_t t68 = 331LL;

	t68 = (x305/(x306^(x307-x308)));

	if (t68 != 2147484472LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x311 = INT32_MIN;
	volatile uint64_t t69 = 160551859LLU;

	t69 = (x309/(x310^(x311-x312)));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MAX;
	static int64_t x314 = INT64_MIN;
	int64_t x315 = -1142591276047854845LL;
	int32_t x316 = INT32_MAX;
	volatile int64_t t70 = -45528555LL;

	t70 = (x313/(x314^(x315-x316)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x318 = INT16_MAX;
	volatile int64_t x319 = -1LL;
	uint8_t x320 = UINT8_MAX;
	static volatile int64_t t71 = -18LL;

	t71 = (x317/(x318^(x319-x320)));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 3U;
	static int64_t x322 = INT64_MAX;
	static int32_t x323 = INT32_MIN;
	int64_t t72 = -485859LL;

	t72 = (x321/(x322^(x323-x324)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x326 = 3U;
	uint64_t x327 = 33085070304641LLU;
	int8_t x328 = 13;
	volatile uint64_t t73 = 12388LLU;

	t73 = (x325/(x326^(x327-x328)));

	if (t73 != 557554LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x329 = 127;
	uint16_t x330 = 70U;
	static int8_t x331 = INT8_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t74 = -598621869;

	t74 = (x329/(x330^(x331-x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = 0;
	int64_t x335 = -1LL;
	static uint32_t x336 = 1450270115U;
	volatile int64_t t75 = 1769290LL;

	t75 = (x333/(x334^(x335-x336)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x338 = INT16_MAX;
	uint64_t x340 = 100552867474196422LLU;
	volatile uint64_t t76 = 552032156LLU;

	t76 = (x337/(x338^(x339-x340)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x341 = 1969LLU;
	int64_t x343 = INT64_MIN;
	uint64_t t77 = 5812016LLU;

	t77 = (x341/(x342^(x343-x344)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile int16_t x346 = 3;
	static int64_t x347 = -1LL;
	int32_t x348 = 10599;
	volatile int64_t t78 = 2477118449819812382LL;

	t78 = (x345/(x346^(x347-x348)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x353 = UINT8_MAX;
	int64_t x354 = -1LL;
	int64_t t79 = 26631LL;

	t79 = (x353/(x354^(x355-x356)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x361 = 6U;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	static uint64_t x364 = 2086163618696813604LLU;
	uint64_t t80 = 80697349041LLU;

	t80 = (x361/(x362^(x363-x364)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	int64_t t81 = 26LL;

	t81 = (x365/(x366^(x367-x368)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x374 = -1;
	static int8_t x375 = 50;
	volatile int32_t t82 = 209201;

	t82 = (x373/(x374^(x375-x376)));

	if (t82 != 11997115) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x377 = -1;
	uint16_t x378 = 0U;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 3902480114948LL;
	volatile int64_t t83 = -4LL;

	t83 = (x377/(x378^(x379-x380)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x381 = INT64_MAX;
	static int64_t x382 = -25909344021LL;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t84 = -27993176278526647LL;

	t84 = (x381/(x382^(x383-x384)));

	if (t84 != -332041698LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = -520;
	int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t85 = 640;

	t85 = (x385/(x386^(x387-x388)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 57938139348LLU;
	uint32_t x390 = UINT32_MAX;
	uint8_t x391 = 63U;
	uint64_t t86 = 140159047738LLU;

	t86 = (x389/(x390^(x391-x392)));

	if (t86 != 13LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	static int16_t x396 = INT16_MIN;
	volatile int64_t t87 = 142553294LL;

	t87 = (x393/(x394^(x395-x396)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x397 = 11U;
	volatile uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 610010312849677LLU;

	t88 = (x397/(x398^(x399-x400)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x406 = 3U;
	uint16_t x407 = 0U;
	volatile int64_t t89 = 17918414355333656LL;

	t89 = (x405/(x406^(x407-x408)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 1U;
	uint64_t x411 = 104141651173648030LLU;
	int32_t x412 = INT32_MAX;
	uint64_t t90 = 1968816334244LLU;

	t90 = (x409/(x410^(x411-x412)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = 28202U;
	static uint64_t x419 = 31LLU;
	uint32_t x420 = UINT32_MAX;
	volatile uint64_t t91 = 46126LLU;

	t91 = (x417/(x418^(x419-x420)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x422 = INT8_MIN;
	static volatile int32_t x423 = INT32_MIN;

	t92 = (x421/(x422^(x423-x424)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x426 = -1;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -1LL;
	volatile int64_t t93 = -1LL;

	t93 = (x425/(x426^(x427-x428)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	int64_t x430 = INT64_MAX;
	volatile int64_t t94 = -1LL;

	t94 = (x429/(x430^(x431-x432)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x433 = 82U;
	volatile int64_t x434 = INT64_MIN;
	static int8_t x435 = -4;
	int8_t x436 = 44;
	int64_t t95 = 1750238893023612618LL;

	t95 = (x433/(x434^(x435-x436)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -1;
	int8_t x438 = INT8_MIN;
	static int64_t x439 = 1588618765223605766LL;
	volatile uint64_t t96 = 383336626147LLU;

	t96 = (x437/(x438^(x439-x440)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x445 = INT32_MIN;
	static int8_t x447 = INT8_MIN;
	static volatile uint8_t x448 = 3U;
	int32_t t97 = 23;

	t97 = (x445/(x446^(x447-x448)));

	if (t97 != -16519104) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = INT32_MAX;
	static uint64_t x450 = 599529238623045LLU;
	volatile int8_t x451 = INT8_MIN;
	volatile uint32_t x452 = 200475837U;

	t98 = (x449/(x450^(x451-x452)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x453 = -1;
	int32_t x454 = INT32_MIN;
	uint32_t x455 = 12U;
	int16_t x456 = 444;

	t99 = (x453/(x454^(x455-x456)));

	if (t99 != 2U) { NG(); } else { ; }
	
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

