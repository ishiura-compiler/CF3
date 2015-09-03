#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static int64_t x3 = 161077869024LL;
int32_t x12 = -1;
volatile int64_t t2 = 6669119293715136LL;
static int8_t x13 = -48;
int32_t x18 = -1;
int64_t x23 = INT64_MIN;
int64_t x29 = INT64_MIN;
int64_t t7 = 4378047897637378251LL;
int8_t x33 = INT8_MAX;
int32_t x35 = -1;
static int16_t x46 = -25;
uint32_t x47 = 8844U;
static uint64_t t12 = 53769027LLU;
int64_t x53 = INT64_MIN;
int64_t x61 = INT64_MIN;
int8_t x74 = INT8_MIN;
static uint16_t x83 = 691U;
int16_t x85 = 1;
static int32_t x86 = 1;
int16_t x94 = -2;
volatile int32_t t24 = 127131;
uint16_t x101 = UINT16_MAX;
uint64_t t26 = 0LLU;
int32_t x111 = INT32_MIN;
static volatile int16_t x121 = INT16_MAX;
int64_t x124 = -200LL;
int64_t x127 = 340334LL;
uint32_t x138 = 281U;
int64_t t34 = INT64_MAX;
int64_t t35 = -581654920138067LL;
int8_t x148 = INT8_MIN;
int32_t t38 = -22;
int32_t x157 = 7123996;
int8_t x160 = INT8_MIN;
static uint64_t t40 = 1910153384497452055LLU;
int64_t t42 = 3376LL;
int32_t x175 = 6272847;
volatile int64_t t43 = 1576213LL;
static uint16_t x178 = UINT16_MAX;
int16_t x184 = -1;
int64_t x186 = -1LL;
uint32_t x187 = UINT32_MAX;
volatile int16_t x192 = -1;
uint64_t t48 = 152049228LLU;
int32_t x199 = INT32_MIN;
int8_t x202 = -1;
volatile uint8_t x203 = 90U;
int8_t x207 = INT8_MIN;
volatile uint32_t x209 = UINT32_MAX;
int8_t x210 = -1;
volatile int64_t x215 = -1LL;
int16_t x218 = INT16_MAX;
int8_t x220 = INT8_MAX;
static uint8_t x222 = UINT8_MAX;
int16_t x223 = INT16_MAX;
int64_t x224 = INT64_MIN;
int64_t x225 = INT64_MIN;
int16_t x228 = INT16_MIN;
volatile uint64_t x244 = 518295967LLU;
uint16_t x247 = 32640U;
volatile int8_t x248 = INT8_MAX;
volatile uint32_t x249 = 835674U;
static uint32_t x250 = 19U;
int16_t x257 = 2;
int32_t x261 = INT32_MIN;
volatile uint64_t x264 = 9400038361947LLU;
int8_t x280 = INT8_MIN;
volatile int64_t x283 = -23741798723071LL;
int8_t x287 = INT8_MAX;
int32_t x288 = INT32_MIN;
int64_t t71 = -60272LL;
uint64_t x291 = 2288LLU;
volatile int64_t x292 = INT64_MIN;
volatile uint32_t t73 = UINT32_MAX;
int32_t x301 = INT32_MIN;
uint8_t x302 = UINT8_MAX;
static int32_t x307 = -11294549;
int16_t x313 = INT16_MIN;
static volatile int32_t t80 = -173;
int32_t x326 = INT32_MIN;
int32_t t81 = -11509;
int16_t x336 = INT16_MIN;
volatile int16_t x341 = 0;
uint16_t x342 = UINT16_MAX;
int32_t x344 = -1;
static volatile int16_t x345 = INT16_MAX;
volatile int8_t x347 = -1;
int32_t x348 = INT32_MAX;
static int32_t x350 = INT32_MAX;
uint64_t x351 = 3364729085621910LLU;
uint32_t x356 = UINT32_MAX;
int32_t t88 = INT32_MIN;
static uint64_t x357 = 2054LLU;
uint64_t x359 = 5892390356LLU;
uint32_t t90 = 10953835U;
int8_t x370 = INT8_MIN;
static int8_t x371 = 27;
int8_t x372 = INT8_MIN;
static int8_t x382 = INT8_MAX;
int16_t x385 = INT16_MIN;
uint16_t x389 = 975U;
uint32_t x392 = 174846U;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static uint64_t x4 = 2067670LLU;
	volatile int32_t t0 = -108148373;

	t0 = (x1^(x2*(x3<=x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 99;
	uint32_t x6 = 0U;
	uint64_t x7 = 5701153447613LLU;
	volatile int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 79609064U;

	t1 = (x5^(x6*(x7<=x8)));

	if (t1 != 99U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	int64_t x10 = INT64_MIN;
	static uint32_t x11 = 2010U;

	t2 = (x9^(x10*(x11<=x12)));

	if (t2 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 15U;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 1U;
	int32_t t3 = 7551380;

	t3 = (x13^(x14*(x15<=x16)));

	if (t3 != -48) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 1332087LLU;
	int32_t t4 = -2;

	t4 = (x17^(x18*(x19<=x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int32_t x22 = -1;
	volatile uint32_t x24 = 1U;
	volatile int32_t t5 = 3026834;

	t5 = (x21^(x22*(x23<=x24)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 3;
	int32_t x26 = INT32_MIN;
	volatile int16_t x27 = INT16_MIN;
	volatile int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = 9351161;

	t6 = (x25^(x26*(x27<=x28)));

	if (t6 != -2147483645) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 6U;
	int32_t x31 = -55;
	uint16_t x32 = UINT16_MAX;

	t7 = (x29^(x30*(x31<=x32)));

	if (t7 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 90744;

	t8 = (x33^(x34*(x35<=x36)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 1401244370542998260LL;
	int16_t x38 = 11139;
	static volatile uint32_t x39 = 919U;
	volatile int32_t x40 = INT32_MIN;
	volatile int64_t t9 = 2903600LL;

	t9 = (x37^(x38*(x39<=x40)));

	if (t9 != 1401244370542991735LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -93;
	uint8_t x44 = UINT8_MAX;
	int64_t t10 = -311261867725957181LL;

	t10 = (x41^(x42*(x43<=x44)));

	if (t10 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int8_t x48 = -1;
	static volatile int32_t t11 = 109490068;

	t11 = (x45^(x46*(x47<=x48)));

	if (t11 != 24) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = INT64_MIN;
	volatile uint32_t x52 = 1U;

	t12 = (x49^(x50*(x51<=x52)));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	uint8_t x55 = 76U;
	uint8_t x56 = 1U;
	int64_t t13 = INT64_MIN;

	t13 = (x53^(x54*(x55<=x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int64_t x58 = INT64_MAX;
	static int16_t x59 = INT16_MIN;
	static int32_t x60 = INT32_MIN;
	volatile int64_t t14 = 336779799LL;

	t14 = (x57^(x58*(x59<=x60)));

	if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = 163988072647LL;
	uint8_t x63 = UINT8_MAX;
	static int16_t x64 = INT16_MAX;
	int64_t t15 = 36305LL;

	t15 = (x61^(x62*(x63<=x64)));

	if (t15 != -9223371872866703161LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 2U;
	static uint16_t x66 = 7911U;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MAX;
	int32_t t16 = 46017558;

	t16 = (x65^(x66*(x67<=x68)));

	if (t16 != 7909) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = -1;
	uint64_t x71 = 293704325971207881LLU;
	int16_t x72 = INT16_MIN;
	int32_t t17 = -96246863;

	t17 = (x69^(x70*(x71<=x72)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1301291395LLU;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = -68068;
	volatile uint64_t t18 = 35296LLU;

	t18 = (x73^(x74*(x75<=x76)));

	if (t18 != 1301291395LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -116357;
	static volatile uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 151LLU;
	int16_t x80 = 9;
	int32_t t19 = 37583;

	t19 = (x77^(x78*(x79<=x80)));

	if (t19 != -116357) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = 10;
	uint64_t x84 = 32879751LLU;
	int32_t t20 = 13755;

	t20 = (x81^(x82*(x83<=x84)));

	if (t20 != -2147483638) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = 2354793;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 2085791;

	t21 = (x85^(x86*(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 5U;
	int32_t x90 = INT32_MAX;
	uint8_t x91 = 0U;
	uint16_t x92 = 1637U;
	int32_t t22 = -271;

	t22 = (x89^(x90*(x91<=x92)));

	if (t22 != 2147483642) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 8681;

	t23 = (x93^(x94*(x95<=x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	static int32_t x98 = INT32_MAX;
	static uint32_t x99 = UINT32_MAX;
	uint64_t x100 = 46987614678LLU;

	t24 = (x97^(x98*(x99<=x100)));

	if (t24 != 2147483520) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = -1;
	uint32_t x103 = 6315366U;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 971;

	t25 = (x101^(x102*(x103<=x104)));

	if (t25 != -65536) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	uint64_t x106 = 1651493173LLU;
	int16_t x107 = -1;
	static uint16_t x108 = 1U;

	t26 = (x105^(x106*(x107<=x108)));

	if (t26 != 18446744072058058442LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	uint64_t x110 = UINT64_MAX;
	uint32_t x112 = 156686938U;
	volatile uint64_t t27 = 250585011223112400LLU;

	t27 = (x109^(x110*(x111<=x112)));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = 7745U;
	uint8_t x114 = 4U;
	int16_t x115 = -1;
	static uint8_t x116 = UINT8_MAX;
	int32_t t28 = -16391326;

	t28 = (x113^(x114*(x115<=x116)));

	if (t28 != 7749) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 124U;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MAX;
	int64_t t29 = -7867989450206990LL;

	t29 = (x117^(x118*(x119<=x120)));

	if (t29 != 124LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 5U;
	uint8_t x123 = 0U;
	int32_t t30 = 42;

	t30 = (x121^(x122*(x123<=x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint64_t x126 = 14438563293LLU;
	static volatile int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125^(x126*(x127<=x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x130 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 87563201;

	t32 = (x129^(x130*(x131<=x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	uint8_t x134 = 0U;
	static int64_t x135 = INT64_MAX;
	volatile int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 738017914;

	t33 = (x133^(x134*(x135<=x136)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	static uint8_t x139 = 10U;
	static int16_t x140 = INT16_MIN;

	t34 = (x137^(x138*(x139<=x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = 3290834754544163LL;
	static int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	int16_t x144 = 5;

	t35 = (x141^(x142*(x143<=x144)));

	if (t35 != 3290834754544163LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int32_t x146 = INT32_MIN;
	int32_t x147 = -1;
	static int32_t t36 = 2656;

	t36 = (x145^(x146*(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = 31877U;
	uint8_t x151 = 60U;
	uint16_t x152 = UINT16_MAX;
	int64_t t37 = -100LL;

	t37 = (x149^(x150*(x151<=x152)));

	if (t37 != 9223372036854743930LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 7975;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 666799398852LLU;
	volatile int8_t x156 = INT8_MAX;

	t38 = (x153^(x154*(x155<=x156)));

	if (t38 != 7975) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	uint64_t t39 = 581470500LLU;

	t39 = (x157^(x158*(x159<=x160)));

	if (t39 != 7123996LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;

	t40 = (x161^(x162*(x163<=x164)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	volatile uint32_t x166 = UINT32_MAX;
	int32_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	uint32_t t41 = 2039319964U;

	t41 = (x165^(x166*(x167<=x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1030671716165LL;
	volatile int16_t x170 = 0;
	int32_t x171 = 1005055902;
	uint32_t x172 = UINT32_MAX;

	t42 = (x169^(x170*(x171<=x172)));

	if (t42 != -1030671716165LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 90842U;
	int64_t x174 = 26LL;
	volatile int8_t x176 = INT8_MAX;

	t43 = (x173^(x174*(x175<=x176)));

	if (t43 != 90842LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = 46;
	int32_t x179 = -1;
	int32_t x180 = -191431;
	volatile int32_t t44 = -142538762;

	t44 = (x177^(x178*(x179<=x180)));

	if (t44 != 46) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MAX;
	int32_t x183 = 16;
	volatile int32_t t45 = -467;

	t45 = (x181^(x182*(x183<=x184)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 6790U;
	int16_t x188 = INT16_MIN;
	int64_t t46 = -1LL;

	t46 = (x185^(x186*(x187<=x188)));

	if (t46 != 6790LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 200728171429LLU;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 254540033U;
	volatile uint64_t t47 = 1045176449588LLU;

	t47 = (x189^(x190*(x191<=x192)));

	if (t47 != 18446743872981380133LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int16_t x194 = INT16_MAX;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MAX;

	t48 = (x193^(x194*(x195<=x196)));

	if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -7214920359LL;
	volatile int32_t x198 = INT32_MIN;
	volatile uint32_t x200 = 11538U;
	int64_t t49 = 0LL;

	t49 = (x197^(x198*(x199<=x200)));

	if (t49 != -7214920359LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MIN;
	int16_t x204 = -1;
	static int32_t t50 = 199530588;

	t50 = (x201^(x202*(x203<=x204)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	int32_t x208 = -350712382;
	volatile int32_t t51 = -296;

	t51 = (x205^(x206*(x207<=x208)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x211 = -7;
	uint8_t x212 = 113U;
	volatile uint32_t t52 = 20U;

	t52 = (x209^(x210*(x211<=x212)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 916;
	static int64_t x214 = 4865556809249571LL;
	int16_t x216 = INT16_MIN;
	volatile int64_t t53 = 14040847486616LL;

	t53 = (x213^(x214*(x215<=x216)));

	if (t53 != 916LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 0U;
	uint64_t x219 = UINT64_MAX;
	static int32_t t54 = 1412;

	t54 = (x217^(x218*(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 2031546940959153LLU;
	uint64_t t55 = 18501777LLU;

	t55 = (x221^(x222*(x223<=x224)));

	if (t55 != 2031546940959153LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x226 = 13U;
	volatile uint16_t x227 = 22894U;
	int64_t t56 = INT64_MIN;

	t56 = (x225^(x226*(x227<=x228)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	uint8_t x230 = 2U;
	uint8_t x231 = 5U;
	static int16_t x232 = -1;
	int32_t t57 = -26;

	t57 = (x229^(x230*(x231<=x232)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = 4U;
	static int8_t x236 = INT8_MIN;
	volatile int64_t t58 = 57179131853441976LL;

	t58 = (x233^(x234*(x235<=x236)));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = 3;
	int16_t x238 = -656;
	int64_t x239 = -1LL;
	volatile int32_t x240 = -1;
	static int32_t t59 = -3;

	t59 = (x237^(x238*(x239<=x240)));

	if (t59 != -653) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	static int32_t x242 = -777330387;
	int16_t x243 = -1;
	int32_t t60 = 316670;

	t60 = (x241^(x242*(x243<=x244)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 904;
	static int16_t x246 = INT16_MIN;
	int32_t t61 = 496974480;

	t61 = (x245^(x246*(x247<=x248)));

	if (t61 != 904) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x251 = -1;
	int32_t x252 = INT32_MAX;
	uint32_t t62 = 14970248U;

	t62 = (x249^(x250*(x251<=x252)));

	if (t62 != 835657U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -15;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile int8_t x256 = 1;
	volatile int32_t t63 = 205057030;

	t63 = (x253^(x254*(x255<=x256)));

	if (t63 != -15) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 0U;
	uint16_t x259 = 0U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = -1;

	t64 = (x257^(x258*(x259<=x260)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -913;
	uint8_t x263 = 4U;
	volatile int32_t t65 = 245514;

	t65 = (x261^(x262*(x263<=x264)));

	if (t65 != 2147482735) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 33;
	int32_t x266 = INT32_MAX;
	int32_t x267 = -1;
	static int64_t x268 = INT64_MIN;
	int32_t t66 = -1;

	t66 = (x265^(x266*(x267<=x268)));

	if (t66 != 33) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	static int8_t x271 = INT8_MAX;
	static int64_t x272 = INT64_MIN;
	int32_t t67 = 1;

	t67 = (x269^(x270*(x271<=x272)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static int32_t x274 = 7843941;
	static int64_t x275 = INT64_MAX;
	uint16_t x276 = 19U;
	volatile int32_t t68 = 1054328315;

	t68 = (x273^(x274*(x275<=x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 1U;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	volatile int32_t t69 = -5430;

	t69 = (x277^(x278*(x279<=x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -12584;
	int8_t x282 = INT8_MAX;
	int16_t x284 = -23;
	int32_t t70 = -507459;

	t70 = (x281^(x282*(x283<=x284)));

	if (t70 != -12633) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 31186LL;
	int8_t x286 = INT8_MIN;

	t71 = (x285^(x286*(x287<=x288)));

	if (t71 != 31186LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	static int8_t x290 = -1;
	volatile int32_t t72 = 1894;

	t72 = (x289^(x290*(x291<=x292)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = -1;
	uint32_t x294 = 25510U;
	uint64_t x295 = 34527300LLU;
	uint16_t x296 = UINT16_MAX;

	t73 = (x293^(x294*(x295<=x296)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = -1;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x297^(x298*(x299<=x300)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = INT32_MIN;
	uint16_t x304 = 4U;
	int32_t t75 = 12443;

	t75 = (x301^(x302*(x303<=x304)));

	if (t75 != -2147483393) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 11;
	int64_t x306 = 3530652LL;
	int8_t x308 = 0;
	static volatile int64_t t76 = 72850978LL;

	t76 = (x305^(x306*(x307<=x308)));

	if (t76 != 3530647LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 4U;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -147990539;

	t77 = (x309^(x310*(x311<=x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x314 = UINT32_MAX;
	static uint32_t x315 = UINT32_MAX;
	static uint16_t x316 = UINT16_MAX;
	volatile uint32_t t78 = 35922U;

	t78 = (x313^(x314*(x315<=x316)));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 3U;
	static volatile int64_t x318 = INT64_MIN;
	static uint64_t x319 = UINT64_MAX;
	static uint8_t x320 = UINT8_MAX;
	int64_t t79 = -1583345058322195LL;

	t79 = (x317^(x318*(x319<=x320)));

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 11U;
	volatile int64_t x324 = -392617LL;

	t80 = (x321^(x322*(x323<=x324)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1;
	int64_t x327 = 25671600801LL;
	volatile uint16_t x328 = 2079U;

	t81 = (x325^(x326*(x327<=x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 47U;
	uint8_t x330 = 3U;
	int8_t x331 = -1;
	int32_t x332 = 4070452;
	int32_t t82 = -236995;

	t82 = (x329^(x330*(x331<=x332)));

	if (t82 != 44) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 437506078U;
	static int16_t x334 = -1;
	volatile int64_t x335 = -131213532171053048LL;
	uint32_t t83 = 67144U;

	t83 = (x333^(x334*(x335<=x336)));

	if (t83 != 3857461217U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 8132472384690193930LLU;
	volatile int64_t x338 = -1LL;
	int16_t x339 = INT16_MIN;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t84 = 9937267755417LLU;

	t84 = (x337^(x338*(x339<=x340)));

	if (t84 != 10314271689019357685LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x343 = -6067064778LL;
	int32_t t85 = 864;

	t85 = (x341^(x342*(x343<=x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x346 = -1;
	static volatile int32_t t86 = -702673107;

	t86 = (x345^(x346*(x347<=x348)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	uint32_t x352 = UINT32_MAX;
	static volatile int32_t t87 = -572172;

	t87 = (x349^(x350*(x351<=x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	static int8_t x354 = -1;
	static int64_t x355 = INT64_MIN;

	t88 = (x353^(x354*(x355<=x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x358 = -9;
	int32_t x360 = -1;
	uint64_t t89 = 28423331412LLU;

	t89 = (x357^(x358*(x359<=x360)));

	if (t89 != 18446744073709549553LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = 9;
	uint64_t x363 = 9374337501LLU;
	int8_t x364 = INT8_MIN;

	t90 = (x361^(x362*(x363<=x364)));

	if (t90 != 4294967286U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint32_t x366 = 22507764U;
	int64_t x367 = -1LL;
	int64_t x368 = -17970768616319LL;
	uint32_t t91 = 1682594U;

	t91 = (x365^(x366*(x367<=x368)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x369 = 7146U;
	int32_t t92 = 7597;

	t92 = (x369^(x370*(x371<=x372)));

	if (t92 != 7146) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = -1;
	static int64_t x375 = INT64_MIN;
	volatile int32_t x376 = INT32_MAX;
	int64_t t93 = INT64_MIN;

	t93 = (x373^(x374*(x375<=x376)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	static uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MAX;
	volatile int64_t t94 = 13305015586035LL;

	t94 = (x377^(x378*(x379<=x380)));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = 6543242359LL;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MIN;
	static int64_t t95 = -30804140562LL;

	t95 = (x381^(x382*(x383<=x384)));

	if (t95 != 6543242359LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = 12;
	static volatile int8_t x387 = -29;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -32655;

	t96 = (x385^(x386*(x387<=x388)));

	if (t96 != -32756) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 8U;
	int32_t t97 = 1;

	t97 = (x389^(x390*(x391<=x392)));

	if (t97 != -31793) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -4208720309LL;
	uint16_t x394 = 38U;
	int16_t x395 = 27;
	int64_t x396 = -11595637681199LL;
	int64_t t98 = -631LL;

	t98 = (x393^(x394*(x395<=x396)));

	if (t98 != -4208720309LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	int64_t x400 = INT64_MAX;
	int32_t t99 = 45186919;

	t99 = (x397^(x398*(x399<=x400)));

	if (t99 != -2147418113) { NG(); } else { ; }
	
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

