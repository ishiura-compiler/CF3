#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x22 = 51;
int8_t x26 = -1;
static uint16_t x28 = UINT16_MAX;
static int32_t x35 = INT32_MIN;
int64_t x37 = INT64_MIN;
int32_t x45 = INT32_MIN;
int32_t t11 = -1428;
static volatile int16_t x49 = 123;
int16_t x52 = INT16_MIN;
int8_t x58 = INT8_MIN;
int8_t x65 = INT8_MIN;
uint8_t x68 = UINT8_MAX;
volatile int32_t t16 = 6;
int64_t x72 = -1LL;
int32_t x73 = -1;
static volatile uint16_t x74 = 208U;
int32_t x77 = INT32_MAX;
volatile int32_t t19 = -1;
int32_t x83 = INT32_MIN;
uint8_t x84 = UINT8_MAX;
volatile int32_t t20 = 407;
uint8_t x87 = 2U;
static uint64_t x91 = 495543481262LLU;
uint32_t x102 = UINT32_MAX;
uint8_t x103 = 36U;
int32_t x108 = INT32_MAX;
int8_t x114 = -1;
static volatile uint64_t x115 = 6290LLU;
volatile int32_t t28 = 1;
volatile int8_t x117 = INT8_MIN;
static int64_t x119 = -12626905761LL;
static int8_t x120 = -1;
volatile int32_t t29 = 59;
uint16_t x127 = 347U;
int16_t x129 = INT16_MAX;
int32_t t32 = -112103;
int32_t x137 = INT32_MIN;
uint16_t x140 = 13U;
static int32_t x147 = -1;
static int32_t t35 = 64;
uint8_t x161 = 1U;
volatile uint32_t x182 = 75U;
static volatile int32_t x194 = -1;
int32_t t47 = -62;
int8_t x208 = -1;
uint32_t x210 = 79U;
uint16_t x213 = 150U;
int32_t x214 = INT32_MIN;
int64_t x216 = -1739LL;
int16_t x221 = -19;
int32_t t53 = 2;
int64_t x227 = -2LL;
static volatile int32_t t54 = -324463820;
uint16_t x232 = UINT16_MAX;
volatile int32_t t55 = 3983;
int8_t x233 = INT8_MIN;
int64_t x234 = INT64_MIN;
int32_t x235 = INT32_MIN;
int8_t x237 = INT8_MIN;
int8_t x241 = -5;
static int16_t x242 = INT16_MAX;
int64_t x247 = -1LL;
uint64_t x252 = 3821035LLU;
int64_t x257 = -1LL;
volatile int16_t x258 = INT16_MIN;
uint16_t x261 = 5U;
int16_t x266 = INT16_MIN;
int32_t t68 = -4;
int32_t t69 = 55051049;
volatile int64_t x293 = 13816239LL;
int8_t x294 = -1;
static int64_t x296 = -1LL;
int32_t x297 = -1;
int16_t x301 = INT16_MIN;
volatile uint32_t x302 = 1419U;
int64_t x306 = -1LL;
uint32_t x321 = UINT32_MAX;
int16_t x324 = 126;
int64_t x336 = -1LL;
int32_t t78 = 8522;
int8_t x337 = -1;
int32_t x344 = INT32_MAX;
volatile int8_t x347 = -1;
int16_t x348 = INT16_MIN;
int32_t t81 = 223;
uint32_t x355 = 392U;
static int32_t t84 = -2;
int8_t x361 = INT8_MIN;
uint8_t x363 = 2U;
uint8_t x365 = 2U;
volatile int32_t t87 = -4016;
int64_t x376 = INT64_MIN;
static volatile int64_t x377 = INT64_MAX;
static int32_t x379 = INT32_MAX;
int32_t t90 = 2579;
int32_t t91 = 5061076;
int16_t x395 = -1;
int8_t x399 = 1;
static uint16_t x402 = UINT16_MAX;
uint16_t x406 = 31U;
volatile int32_t t96 = -14;
int32_t t97 = 766404;
static volatile int64_t x418 = 714LL;


void f0(void) {
	volatile int8_t x1 = 33;
	static volatile int8_t x2 = -36;
	static int32_t x3 = -1;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 3949109;

	t0 = (x1==(x2^(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = -43085;

	t1 = (x5==(x6^(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = 0U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 112;

	t2 = (x9==(x10^(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 53;
	static volatile uint32_t x14 = UINT32_MAX;
	static int16_t x15 = -1;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 369;

	t3 = (x13==(x14^(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int32_t x18 = INT32_MIN;
	volatile uint64_t x19 = 201586888057LLU;
	volatile int32_t x20 = -7523;
	volatile int32_t t4 = -91;

	t4 = (x17==(x18^(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -229763255;
	uint64_t x23 = UINT64_MAX;
	static volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -48725;

	t5 = (x21==(x22^(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 2U;
	static volatile uint32_t x27 = 55734U;
	int32_t t6 = 72585493;

	t6 = (x25==(x26^(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 30U;
	volatile int32_t x30 = INT32_MIN;
	uint32_t x31 = 2U;
	static int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = -8;

	t7 = (x29==(x30^(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 63;
	uint8_t x34 = UINT8_MAX;
	int64_t x36 = -1LL;
	static int32_t t8 = -6692207;

	t8 = (x33==(x34^(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	static int16_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = 1037621291;

	t9 = (x37==(x38^(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 0U;
	volatile uint64_t x42 = UINT64_MAX;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 57U;
	static int32_t t10 = 179;

	t10 = (x41==(x42^(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = INT16_MAX;
	uint64_t x47 = 540192278738046582LLU;
	static uint8_t x48 = 7U;

	t11 = (x45==(x46^(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 2739631U;
	int32_t x51 = INT32_MIN;
	static volatile int32_t t12 = -5597;

	t12 = (x49==(x50^(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = -1LL;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 480715;

	t13 = (x53==(x54^(x55%x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int64_t x60 = 7862670781905821LL;
	int32_t t14 = -4028;

	t14 = (x57==(x58^(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	volatile uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t15 = -20145;

	t15 = (x61==(x62^(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;

	t16 = (x65==(x66^(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 5865U;
	int32_t x70 = 1;
	uint8_t x71 = 39U;
	int32_t t17 = 1;

	t17 = (x69==(x70^(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x75 = UINT64_MAX;
	volatile int64_t x76 = INT64_MIN;
	int32_t t18 = 937846;

	t18 = (x73==(x74^(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -7;
	static uint16_t x79 = 0U;
	int64_t x80 = INT64_MAX;

	t19 = (x77==(x78^(x79%x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int16_t x82 = INT16_MIN;

	t20 = (x81==(x82^(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 153466302121LLU;
	volatile uint8_t x86 = 1U;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 106855570;

	t21 = (x85==(x86^(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int16_t x90 = -6;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -56011;

	t22 = (x89==(x90^(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int32_t x94 = -1;
	int64_t x95 = 72528785053777268LL;
	int16_t x96 = -4100;
	volatile int32_t t23 = 0;

	t23 = (x93==(x94^(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -13739LL;
	static int32_t x98 = -46;
	int64_t x99 = 4516555662006LL;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -479396302;

	t24 = (x97==(x98^(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 14;
	uint32_t x104 = 2629022U;
	int32_t t25 = 443;

	t25 = (x101==(x102^(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 97U;
	int64_t x107 = -159148LL;
	int32_t t26 = 409191;

	t26 = (x105==(x106^(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	static volatile int64_t x111 = -1LL;
	static int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = 14348;

	t27 = (x109==(x110^(x111%x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint64_t x116 = UINT64_MAX;

	t28 = (x113==(x114^(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;

	t29 = (x117==(x118^(x119%x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	volatile uint32_t x122 = 459U;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	static int32_t t30 = 516;

	t30 = (x121==(x122^(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x126 = 0U;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 22;

	t31 = (x125==(x126^(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = -1LL;
	int8_t x132 = -1;

	t32 = (x129==(x130^(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	uint16_t x134 = UINT16_MAX;
	volatile int8_t x135 = INT8_MIN;
	static int16_t x136 = -1;
	volatile int32_t t33 = 59715891;

	t33 = (x133==(x134^(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	static int32_t t34 = 3980266;

	t34 = (x137==(x138^(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	static uint32_t x146 = UINT32_MAX;
	int64_t x148 = INT64_MIN;

	t35 = (x145==(x146^(x147%x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x150 = 4U;
	uint16_t x151 = 0U;
	int8_t x152 = -2;
	int32_t t36 = 104;

	t36 = (x149==(x150^(x151%x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 3546232U;
	int16_t x154 = -15;
	volatile int16_t x155 = 87;
	static volatile int64_t x156 = INT64_MAX;
	int32_t t37 = -4928197;

	t37 = (x153==(x154^(x155%x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile uint16_t x158 = 166U;
	volatile uint16_t x159 = 28973U;
	static uint8_t x160 = 1U;
	volatile int32_t t38 = -804134;

	t38 = (x157==(x158^(x159%x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x162 = INT64_MIN;
	volatile int16_t x163 = -94;
	int16_t x164 = 3737;
	int32_t t39 = 4961;

	t39 = (x161==(x162^(x163%x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x165 = 86337056U;
	int64_t x166 = -3776230808550LL;
	volatile int64_t x167 = INT64_MAX;
	int16_t x168 = -1;
	volatile int32_t t40 = 484218;

	t40 = (x165==(x166^(x167%x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MIN;
	volatile int64_t x171 = INT64_MIN;
	volatile uint8_t x172 = 2U;
	int32_t t41 = -487;

	t41 = (x169==(x170^(x171%x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = 38LL;
	int64_t x178 = INT64_MAX;
	static int32_t x179 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;
	static volatile int32_t t42 = -24;

	t42 = (x177==(x178^(x179%x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = 1887;
	static int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t43 = -3348456;

	t43 = (x181==(x182^(x183%x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = 1;
	int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 7U;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t44 = -2140;

	t44 = (x185==(x186^(x187%x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x189 = 0U;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = UINT32_MAX;
	uint16_t x192 = 9U;
	volatile int32_t t45 = -5998;

	t45 = (x189==(x190^(x191%x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x193 = 82U;
	int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MIN;
	int32_t t46 = 970977;

	t46 = (x193==(x194^(x195%x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 2U;
	static int8_t x198 = -1;
	int8_t x199 = -8;
	int8_t x200 = INT8_MIN;

	t47 = (x197==(x198^(x199%x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	volatile int32_t x202 = INT32_MAX;
	int64_t x203 = -1LL;
	volatile int32_t x204 = 1;
	static volatile int32_t t48 = -1048245;

	t48 = (x201==(x202^(x203%x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = INT16_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int32_t t49 = -210344;

	t49 = (x205==(x206^(x207%x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x209 = 25128U;
	volatile uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t50 = -3784;

	t50 = (x209==(x210^(x211%x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x215 = 429LLU;
	static int32_t t51 = -8;

	t51 = (x213==(x214^(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x217 = 60U;
	int64_t x218 = INT64_MAX;
	int64_t x219 = -1LL;
	uint16_t x220 = 3U;
	static volatile int32_t t52 = 1595874;

	t52 = (x217==(x218^(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x222 = INT64_MIN;
	static int32_t x223 = 108385647;
	int8_t x224 = 57;

	t53 = (x221==(x222^(x223%x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -44;
	uint32_t x226 = UINT32_MAX;
	int64_t x228 = -1LL;

	t54 = (x225==(x226^(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = 0U;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 60516317U;

	t55 = (x229==(x230^(x231%x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x236 = 111U;
	int32_t t56 = 3451;

	t56 = (x233==(x234^(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x238 = 258133474U;
	int8_t x239 = 1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t57 = 364249;

	t57 = (x237==(x238^(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x243 = 0U;
	int8_t x244 = INT8_MIN;
	int32_t t58 = -50558;

	t58 = (x241==(x242^(x243%x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 1U;
	static int16_t x246 = 3463;
	static int8_t x248 = -1;
	volatile int32_t t59 = -43;

	t59 = (x245==(x246^(x247%x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 1;
	int32_t x250 = -1;
	volatile uint8_t x251 = 7U;
	volatile int32_t t60 = 125;

	t60 = (x249==(x250^(x251%x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	int8_t x256 = 5;
	volatile int32_t t61 = 206;

	t61 = (x253==(x254^(x255%x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x259 = -931812LL;
	int32_t x260 = INT32_MIN;
	int32_t t62 = -147387798;

	t62 = (x257==(x258^(x259%x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x262 = -3;
	volatile int8_t x263 = -1;
	int8_t x264 = INT8_MAX;
	int32_t t63 = 14116402;

	t63 = (x261==(x262^(x263%x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = 0LL;
	int32_t x267 = -1;
	int8_t x268 = -1;
	volatile int32_t t64 = -25377;

	t64 = (x265==(x266^(x267%x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = INT16_MAX;
	int64_t x270 = -1LL;
	volatile int64_t x271 = -295948809127LL;
	int8_t x272 = -1;
	int32_t t65 = 1;

	t65 = (x269==(x270^(x271%x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x273 = 58U;
	static uint8_t x274 = 2U;
	static uint64_t x275 = UINT64_MAX;
	int64_t x276 = -315225518585456LL;
	int32_t t66 = -42605;

	t66 = (x273==(x274^(x275%x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	uint32_t x279 = 376694U;
	uint8_t x280 = UINT8_MAX;
	int32_t t67 = -401567;

	t67 = (x277==(x278^(x279%x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	static int8_t x284 = 2;

	t68 = (x281==(x282^(x283%x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x289 = UINT64_MAX;
	int64_t x290 = -51564038236LL;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = -124750024LL;

	t69 = (x289==(x290^(x291%x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x295 = 1;
	static volatile int32_t t70 = -5055247;

	t70 = (x293==(x294^(x295%x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x298 = -1LL;
	uint8_t x299 = UINT8_MAX;
	volatile int64_t x300 = INT64_MIN;
	static volatile int32_t t71 = 127;

	t71 = (x297==(x298^(x299%x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x303 = -2;
	int16_t x304 = INT16_MIN;
	volatile int32_t t72 = 0;

	t72 = (x301==(x302^(x303%x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x305 = -1399;
	int32_t x307 = 20784057;
	uint8_t x308 = 39U;
	int32_t t73 = -50;

	t73 = (x305==(x306^(x307%x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 155255354LLU;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MIN;
	volatile uint8_t x316 = 1U;
	int32_t t74 = 2;

	t74 = (x313==(x314^(x315%x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 19004925570LLU;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MAX;
	int16_t x320 = 6831;
	int32_t t75 = -82274;

	t75 = (x317==(x318^(x319%x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x322 = -1LL;
	int8_t x323 = 4;
	static volatile int32_t t76 = 1783;

	t76 = (x321==(x322^(x323%x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = 46;
	int16_t x326 = INT16_MAX;
	int64_t x327 = 324805821821LL;
	int8_t x328 = INT8_MAX;
	int32_t t77 = 15;

	t77 = (x325==(x326^(x327%x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = 23;
	int8_t x335 = INT8_MIN;

	t78 = (x333==(x334^(x335%x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MIN;
	uint8_t x340 = 1U;
	static int32_t t79 = -241;

	t79 = (x337==(x338^(x339%x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x341 = 3948706597097LLU;
	static int64_t x342 = INT64_MIN;
	static uint16_t x343 = 9U;
	volatile int32_t t80 = 342;

	t80 = (x341==(x342^(x343%x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = 1469201777U;
	int16_t x346 = -1;

	t81 = (x345==(x346^(x347%x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	volatile int8_t x351 = INT8_MAX;
	uint64_t x352 = 226198851593407LLU;
	volatile int32_t t82 = -6030758;

	t82 = (x349==(x350^(x351%x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = -17;
	static int8_t x354 = INT8_MAX;
	volatile uint32_t x356 = 521515351U;
	volatile int32_t t83 = -652212069;

	t83 = (x353==(x354^(x355%x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = 13085065U;
	int32_t x358 = 137255;
	static uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;

	t84 = (x357==(x358^(x359%x360)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x362 = INT32_MIN;
	int64_t x364 = -1LL;
	volatile int32_t t85 = -36877;

	t85 = (x361==(x362^(x363%x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 8874U;
	volatile int32_t t86 = 1;

	t86 = (x365==(x366^(x367%x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x369 = 0U;
	int8_t x370 = -60;
	int64_t x371 = 2676426LL;
	volatile int64_t x372 = -1LL;

	t87 = (x369==(x370^(x371%x372)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x373 = -3;
	volatile uint8_t x374 = 42U;
	int32_t x375 = INT32_MAX;
	int32_t t88 = -5;

	t88 = (x373==(x374^(x375%x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x378 = 815810763U;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t89 = 7509;

	t89 = (x377==(x378^(x379%x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x381 = 529995877;
	volatile uint32_t x382 = UINT32_MAX;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 30872831U;

	t90 = (x381==(x382^(x383%x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	static int8_t x386 = INT8_MIN;
	static uint8_t x387 = 5U;
	uint16_t x388 = 20U;

	t91 = (x385==(x386^(x387%x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x389 = 1930590765LLU;
	static int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MAX;
	int32_t x392 = -1;
	int32_t t92 = 3164;

	t92 = (x389==(x390^(x391%x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = 2;
	int32_t x394 = -2006;
	volatile int16_t x396 = -1;
	int32_t t93 = -1818;

	t93 = (x393==(x394^(x395%x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MIN;
	int64_t x400 = 1LL;
	static int32_t t94 = 296;

	t94 = (x397==(x398^(x399%x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	uint16_t x403 = 11U;
	static volatile int8_t x404 = INT8_MIN;
	int32_t t95 = -3412544;

	t95 = (x401==(x402^(x403%x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 11584U;
	int16_t x407 = 47;
	int32_t x408 = -11;

	t96 = (x405==(x406^(x407%x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	static int16_t x410 = 1;
	static volatile int8_t x411 = -2;
	int8_t x412 = -3;

	t97 = (x409==(x410^(x411%x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x413 = 7759;
	int64_t x414 = -308867LL;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t98 = -235;

	t98 = (x413==(x414^(x415%x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = 127U;
	int64_t x419 = 1439395445741946677LL;
	int32_t x420 = -1;
	static volatile int32_t t99 = 132;

	t99 = (x417==(x418^(x419%x420)));

	if (t99 != 0) { NG(); } else { ; }
	
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

