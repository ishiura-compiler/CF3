#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x13 = INT64_MIN;
static volatile int8_t x17 = INT8_MAX;
int16_t x19 = -391;
int8_t x27 = 0;
uint8_t x28 = UINT8_MAX;
static volatile uint32_t t7 = 107U;
uint32_t x40 = 243U;
int32_t x46 = INT32_MAX;
static int16_t x52 = -3610;
static uint32_t x59 = 1377803U;
volatile uint64_t t12 = 37424LLU;
int64_t x62 = INT64_MIN;
static uint16_t x68 = 10936U;
static volatile uint32_t x73 = 3583364U;
static uint8_t x74 = 1U;
int8_t x76 = INT8_MAX;
volatile int64_t t16 = -734LL;
int64_t x79 = INT64_MAX;
uint64_t x80 = 718650857304873LLU;
static volatile uint64_t t17 = 8988657595357923LLU;
static uint64_t x85 = 1654LLU;
static int8_t x92 = 1;
uint64_t t20 = 75836118LLU;
uint8_t x93 = 13U;
int32_t x95 = -1;
int64_t x97 = -1LL;
volatile int32_t x99 = INT32_MIN;
uint8_t x113 = UINT8_MAX;
volatile uint32_t t27 = 1303762800U;
int8_t x126 = INT8_MIN;
int16_t x127 = INT16_MIN;
int64_t t28 = 33485603LL;
int64_t x129 = INT64_MIN;
static int16_t x130 = INT16_MAX;
uint16_t x132 = 41U;
int64_t t29 = 54022697832829006LL;
volatile int32_t x133 = INT32_MAX;
static int8_t x142 = -1;
int16_t x181 = INT16_MIN;
int8_t x184 = INT8_MIN;
int64_t x188 = INT64_MIN;
volatile int16_t x193 = INT16_MAX;
static volatile int64_t x197 = INT64_MAX;
int64_t x201 = -1084490LL;
static volatile uint32_t x213 = 19852019U;
static uint16_t x215 = 8537U;
volatile uint16_t x221 = 2U;
int32_t x233 = -1;
uint64_t x237 = 264699LLU;
static uint32_t x246 = UINT32_MAX;
uint16_t x251 = 4U;
int8_t x254 = INT8_MAX;
static volatile uint64_t t55 = 48419852769565LLU;
uint64_t t57 = 3539LLU;
static uint32_t x272 = UINT32_MAX;
uint32_t x273 = 278659U;
uint64_t x274 = 19447LLU;
static int16_t x279 = 590;
int32_t x283 = INT32_MAX;
volatile int32_t t63 = -24;
int16_t x295 = INT16_MIN;
int32_t x309 = INT32_MIN;
int16_t x318 = INT16_MAX;
volatile uint16_t x319 = 12U;
static int8_t x322 = -1;
int8_t x324 = INT8_MAX;
int64_t x333 = 8499782228LL;
int16_t x336 = -1;
static volatile int64_t t74 = -2181367979276LL;
static uint64_t t76 = 67588168042176LLU;
uint32_t x355 = 1010U;
int32_t x359 = -16768;
int8_t x361 = INT8_MIN;
static volatile uint64_t t82 = 111033251LLU;
static uint8_t x381 = UINT8_MAX;
int16_t x382 = -1;
int32_t x383 = INT32_MIN;
uint64_t x385 = 58818916692014LLU;
int8_t x395 = 0;
volatile int64_t t87 = 3LL;
int8_t x405 = INT8_MAX;
static int64_t t89 = -68875089328326958LL;
uint8_t x411 = 0U;
int32_t t90 = 162;
int32_t x423 = -1;
volatile int64_t t94 = -12252848774LL;
volatile int64_t t95 = 23754178125540221LL;
uint64_t x442 = UINT64_MAX;
uint16_t x445 = UINT16_MAX;
static int64_t x452 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = 38U;
	int64_t x3 = -151125950594755756LL;
	int16_t x4 = INT16_MIN;
	static volatile int64_t t0 = 1LL;

	t0 = (x1/(x2^(x3+x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 20U;
	static volatile int32_t x10 = INT32_MIN;
	uint32_t x11 = 1103273U;
	uint16_t x12 = UINT16_MAX;
	uint32_t t1 = 487159U;

	t1 = (x9/(x10^(x11+x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = 1;
	uint64_t x15 = 1934LLU;
	int64_t x16 = INT64_MAX;
	uint64_t t2 = 5912311672750674279LLU;

	t2 = (x13/(x14^(x15+x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -1;
	uint16_t x20 = 71U;
	int32_t t3 = 4060440;

	t3 = (x17/(x18^(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	int64_t x22 = 997679963585606178LL;
	uint16_t x23 = UINT16_MAX;
	static int8_t x24 = INT8_MIN;
	int64_t t4 = 10377400998837922LL;

	t4 = (x21/(x22^(x23+x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -6;
	int64_t x26 = 4350204929688LL;
	static volatile int64_t t5 = -795845408285LL;

	t5 = (x25/(x26^(x27+x28)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 9781U;
	static int8_t x30 = -1;
	static int64_t x31 = 1013215654677LL;
	static int32_t x32 = 13924751;
	volatile int64_t t6 = -3492LL;

	t6 = (x29/(x30^(x31+x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -4;
	int16_t x35 = -1;
	static volatile uint32_t x36 = UINT32_MAX;

	t7 = (x33/(x34^(x35+x36)));

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	int64_t t8 = 230758442613371308LL;

	t8 = (x37/(x38^(x39+x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x47 = 31U;
	uint16_t x48 = 19321U;
	int32_t t9 = -6;

	t9 = (x45/(x46^(x47+x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -762;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	volatile int32_t t10 = -801065;

	t10 = (x49/(x50^(x51+x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;
	uint64_t t11 = 3LLU;

	t11 = (x53/(x54^(x55+x56)));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 69910946904980450LLU;
	int16_t x58 = INT16_MAX;
	static int64_t x60 = 273LL;

	t12 = (x57/(x58^(x59+x60)));

	if (t12 != 49680783017LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int32_t x63 = -25;
	uint8_t x64 = 40U;
	volatile int64_t t13 = 31LL;

	t13 = (x61/(x62^(x63+x64)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 20LL;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	int64_t t14 = 15143LL;

	t14 = (x65/(x66^(x67+x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = -1;
	volatile int64_t x70 = -4208277473176769LL;
	static int64_t x71 = INT64_MIN;
	int16_t x72 = 163;
	static int64_t t15 = 11126370769544794LL;

	t15 = (x69/(x70^(x71+x72)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x75 = 32600660681426LL;

	t16 = (x73/(x74^(x75+x76)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MIN;
	volatile int32_t x78 = INT32_MAX;

	t17 = (x77/(x78^(x79+x80)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = -1;
	int8_t x82 = -1;
	static uint16_t x83 = 3632U;
	int16_t x84 = 5;
	int32_t t18 = -4107;

	t18 = (x81/(x82^(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MIN;
	uint32_t x87 = 3598032U;
	int16_t x88 = INT16_MAX;
	uint64_t t19 = 116533LLU;

	t19 = (x85/(x86^(x87+x88)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 3352U;
	static volatile uint64_t x90 = UINT64_MAX;
	static int64_t x91 = INT64_MIN;

	t20 = (x89/(x90^(x91+x92)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x94 = 4525U;
	volatile int16_t x96 = INT16_MAX;
	uint32_t t21 = 126U;

	t21 = (x93/(x94^(x95+x96)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x98 = UINT8_MAX;
	static volatile int8_t x100 = INT8_MAX;
	int64_t t22 = 20103553196LL;

	t22 = (x97/(x98^(x99+x100)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 26461;
	int64_t x102 = 98713968978404LL;
	uint16_t x103 = UINT16_MAX;
	int32_t x104 = -3160;
	volatile int64_t t23 = 222363577579662119LL;

	t23 = (x101/(x102^(x103+x104)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	volatile int32_t x106 = -23;
	int8_t x107 = 6;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t24 = 15880;

	t24 = (x105/(x106^(x107+x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = 16288;
	int16_t x115 = -1803;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t25 = -8115524468079LL;

	t25 = (x113/(x114^(x115+x116)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int64_t x118 = INT64_MAX;
	int16_t x119 = 0;
	static volatile int8_t x120 = -1;
	volatile int64_t t26 = -399676631099864LL;

	t26 = (x117/(x118^(x119+x120)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	static volatile uint32_t x123 = 1547216059U;
	int32_t x124 = INT32_MIN;

	t27 = (x121/(x122^(x123+x124)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int64_t x128 = -97928393797517297LL;

	t28 = (x125/(x126^(x127+x128)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x131 = -661133935LL;

	t29 = (x129/(x130^(x131+x132)));

	if (t29 != 13950430676LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x134 = 63001992972LLU;
	volatile int32_t x135 = 965439;
	uint8_t x136 = 1U;
	volatile uint64_t t30 = 634261061299451LLU;

	t30 = (x133/(x134^(x135+x136)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MAX;
	int8_t x143 = INT8_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	volatile uint64_t t31 = 3412047549192LLU;

	t31 = (x141/(x142^(x143+x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = INT64_MIN;
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = 307552;
	int8_t x148 = INT8_MIN;
	int64_t t32 = 6863LL;

	t32 = (x145/(x146^(x147+x148)));

	if (t32 != -2147637371LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x149 = -2487;
	int8_t x150 = -12;
	int64_t x151 = -1LL;
	int32_t x152 = INT32_MAX;
	int64_t t33 = 1LL;

	t33 = (x149/(x150^(x151+x152)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int64_t x154 = INT64_MIN;
	volatile uint64_t x155 = 2398794820441858LLU;
	uint8_t x156 = 12U;
	uint64_t t34 = 4377489530LLU;

	t34 = (x153/(x154^(x155+x156)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 25U;
	uint16_t x158 = 31U;
	static int8_t x159 = INT8_MIN;
	volatile int8_t x160 = INT8_MIN;
	int32_t t35 = 1758;

	t35 = (x157/(x158^(x159+x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x161 = 1057383609U;
	uint16_t x162 = 224U;
	volatile int8_t x163 = -1;
	uint8_t x164 = 53U;
	volatile uint32_t t36 = 1455U;

	t36 = (x161/(x162^(x163+x164)));

	if (t36 != 4987658U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 52621LLU;
	volatile int64_t x172 = -1LL;
	volatile uint64_t t37 = 13726048661LLU;

	t37 = (x169/(x170^(x171+x172)));

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x173 = 66606U;
	int8_t x174 = 1;
	volatile uint16_t x175 = 1U;
	static int32_t x176 = -1;
	volatile uint32_t t38 = 334619207U;

	t38 = (x173/(x174^(x175+x176)));

	if (t38 != 66606U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	volatile int32_t t39 = 1945889;

	t39 = (x181/(x182^(x183+x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 156090U;
	int64_t t40 = -80716LL;

	t40 = (x185/(x186^(x187+x188)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = -1;
	int32_t x191 = -1;
	volatile int32_t x192 = 19385128;
	uint64_t t41 = 28201381387078LLU;

	t41 = (x189/(x190^(x191+x192)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x194 = 9052920LLU;
	static int8_t x195 = 1;
	static uint8_t x196 = UINT8_MAX;
	uint64_t t42 = 83708916LLU;

	t42 = (x193/(x194^(x195+x196)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x198 = 60U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int64_t t43 = -1508821161LL;

	t43 = (x197/(x198^(x199+x200)));

	if (t43 != -47058020596197835LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x202 = 2564U;
	int16_t x203 = -1;
	static uint8_t x204 = 54U;
	volatile int64_t t44 = 445203890LL;

	t44 = (x201/(x202^(x203+x204)));

	if (t44 != -415LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = 229;
	int64_t x206 = -1LL;
	uint32_t x207 = 1842075606U;
	uint64_t x208 = 66LLU;
	static volatile uint64_t t45 = 3LLU;

	t45 = (x205/(x206^(x207+x208)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x214 = INT64_MAX;
	volatile int32_t x216 = INT32_MIN;
	volatile int64_t t46 = -501895351321354LL;

	t46 = (x213/(x214^(x215+x216)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x222 = INT32_MIN;
	volatile int64_t x223 = INT64_MIN;
	uint16_t x224 = 2U;
	static volatile int64_t t47 = 313267153981LL;

	t47 = (x221/(x222^(x223+x224)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = 2624669597341LLU;
	volatile int16_t x226 = -1;
	int64_t x227 = -9239224LL;
	int32_t x228 = INT32_MAX;
	static uint64_t t48 = 3692100603877677LLU;

	t48 = (x225/(x226^(x227+x228)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = 0;
	uint64_t x230 = 17785LLU;
	uint32_t x231 = UINT32_MAX;
	int32_t x232 = -1;
	uint64_t t49 = 223140167LLU;

	t49 = (x229/(x230^(x231+x232)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x234 = INT64_MAX;
	int8_t x235 = 1;
	static int16_t x236 = INT16_MAX;
	volatile int64_t t50 = -435789LL;

	t50 = (x233/(x234^(x235+x236)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x238 = INT16_MAX;
	int8_t x239 = -1;
	int16_t x240 = -1511;
	volatile uint64_t t51 = 77485187LLU;

	t51 = (x237/(x238^(x239+x240)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = 112559LLU;
	uint32_t x243 = 84029U;
	int8_t x244 = -1;
	uint64_t t52 = 150822001715411904LLU;

	t52 = (x241/(x242^(x243+x244)));

	if (t52 != 32822LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -1;
	uint8_t x247 = UINT8_MAX;
	volatile uint16_t x248 = 133U;
	uint32_t t53 = 112U;

	t53 = (x245/(x246^(x247+x248)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = 31U;
	static int8_t x250 = -21;
	int32_t x252 = -48138207;
	int32_t t54 = -52750274;

	t54 = (x249/(x250^(x251+x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x253 = 98606U;
	volatile uint64_t x255 = 23621760847238596LLU;
	volatile uint8_t x256 = 1U;

	t55 = (x253/(x254^(x255+x256)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = -1;
	int8_t x259 = 24;
	int8_t x260 = -1;
	static int32_t t56 = -3657;

	t56 = (x257/(x258^(x259+x260)));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x261 = INT32_MAX;
	static int8_t x262 = 1;
	uint64_t x263 = 3LLU;
	static int32_t x264 = INT32_MAX;

	t57 = (x261/(x262^(x263+x264)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = UINT64_MAX;
	uint64_t t58 = 2062720822LLU;

	t58 = (x265/(x266^(x267+x268)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = 2060810LL;
	static int16_t x270 = INT16_MIN;
	static int8_t x271 = INT8_MIN;
	int64_t t59 = -32124501464763LL;

	t59 = (x269/(x270^(x271+x272)));

	if (t59 != 63LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x275 = -7;
	static uint8_t x276 = 13U;
	static volatile uint64_t t60 = 3004541LLU;

	t60 = (x273/(x274^(x275+x276)));

	if (t60 != 14LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = 2;
	int32_t x280 = INT32_MIN;
	volatile int32_t t61 = 993505633;

	t61 = (x277/(x278^(x279+x280)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = -3;
	uint64_t x282 = UINT64_MAX;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t62 = 44LLU;

	t62 = (x281/(x282^(x283+x284)));

	if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x285 = 28U;
	int16_t x286 = 5;
	int16_t x287 = -111;
	uint8_t x288 = UINT8_MAX;

	t63 = (x285/(x286^(x287+x288)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = 6;
	uint8_t x294 = UINT8_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t64 = 10296237;

	t64 = (x293/(x294^(x295+x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = 1;
	volatile uint64_t t65 = 298LLU;

	t65 = (x297/(x298^(x299+x300)));

	if (t65 != 8589934595LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 219U;
	uint64_t x303 = 993029LLU;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t66 = 938LLU;

	t66 = (x301/(x302^(x303+x304)));

	if (t66 != 17422591854574LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = 919U;
	int8_t x306 = -4;
	static int32_t x307 = -1;
	static int32_t x308 = -1;
	int32_t t67 = -14;

	t67 = (x305/(x306^(x307+x308)));

	if (t67 != 459) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = INT16_MAX;
	uint8_t x311 = 3U;
	int16_t x312 = -1;
	int32_t t68 = -1;

	t68 = (x309/(x310^(x311+x312)));

	if (t68 != -65542) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = INT64_MAX;
	static volatile int64_t x314 = 310104LL;
	int16_t x315 = INT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	static int64_t t69 = 1045768923LL;

	t69 = (x313/(x314^(x315+x316)));

	if (t69 != -29742738868624LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x317 = 60U;
	uint8_t x320 = 5U;
	uint32_t t70 = 142857197U;

	t70 = (x317/(x318^(x319+x320)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = 31;
	volatile int64_t x323 = -2LL;
	volatile int64_t t71 = -4280277750828LL;

	t71 = (x321/(x322^(x323+x324)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x325 = 1032392710U;
	uint8_t x326 = UINT8_MAX;
	volatile int32_t x327 = INT32_MAX;
	int8_t x328 = -1;
	volatile uint32_t t72 = 91U;

	t72 = (x325/(x326^(x327+x328)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x329 = INT8_MAX;
	static int64_t x330 = -1LL;
	uint64_t x331 = 17459803977731LLU;
	static uint64_t x332 = 1852LLU;
	uint64_t t73 = 104238983LLU;

	t73 = (x329/(x330^(x331+x332)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x334 = -1;
	int8_t x335 = INT8_MIN;

	t74 = (x333/(x334^(x335+x336)));

	if (t74 != 66404548LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x341 = 63U;
	static volatile int64_t x342 = 329229LL;
	static int64_t x343 = -7759006399LL;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t75 = 19259415016521912LLU;

	t75 = (x341/(x342^(x343+x344)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = 4881618U;
	int64_t x350 = INT64_MIN;
	static uint64_t x351 = 16657972254600454LLU;
	int8_t x352 = -1;

	t76 = (x349/(x350^(x351+x352)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = 948202U;
	uint32_t x354 = UINT32_MAX;
	int16_t x356 = 1334;
	uint32_t t77 = 24239U;

	t77 = (x353/(x354^(x355+x356)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = 208LL;
	uint8_t x358 = 1U;
	int8_t x360 = -1;
	int64_t t78 = -5415756635LL;

	t78 = (x357/(x358^(x359+x360)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = 14U;
	static volatile int64_t t79 = 7021384LL;

	t79 = (x361/(x362^(x363+x364)));

	if (t79 != -9LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MAX;
	int64_t t80 = -1637204827715LL;

	t80 = (x365/(x366^(x367+x368)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MAX;
	uint16_t x370 = 46U;
	int16_t x371 = -1;
	int16_t x372 = 2432;
	int32_t t81 = -38;

	t81 = (x369/(x370^(x371+x372)));

	if (t81 != 900412) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x377 = 58U;
	int16_t x378 = -1;
	uint16_t x379 = 2U;
	uint64_t x380 = UINT64_MAX;

	t82 = (x377/(x378^(x379+x380)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x384 = 1299244346LL;
	volatile int64_t t83 = 2655275716259987434LL;

	t83 = (x381/(x382^(x383+x384)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = -1;
	static volatile uint64_t t84 = 479037955753094LLU;

	t84 = (x385/(x386^(x387+x388)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -12;
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 54U;
	int16_t x392 = INT16_MIN;
	uint64_t t85 = 13028312370LLU;

	t85 = (x389/(x390^(x391+x392)));

	if (t85 != 563896434864107LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int32_t x394 = -1;
	volatile int8_t x396 = INT8_MIN;
	uint32_t t86 = 1U;

	t86 = (x393/(x394^(x395+x396)));

	if (t86 != 33818640U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x397 = UINT8_MAX;
	volatile uint32_t x398 = 0U;
	volatile int64_t x399 = INT64_MIN;
	static uint16_t x400 = 9U;

	t87 = (x397/(x398^(x399+x400)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x401 = INT64_MIN;
	int16_t x402 = -97;
	static int8_t x403 = INT8_MAX;
	volatile int8_t x404 = INT8_MIN;
	int64_t t88 = -82554830113LL;

	t88 = (x401/(x402^(x403+x404)));

	if (t88 != -96076792050570581LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x406 = INT64_MAX;
	volatile int32_t x407 = 0;
	int8_t x408 = -5;

	t89 = (x405/(x406^(x407+x408)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 15U;
	volatile uint8_t x410 = 14U;
	int16_t x412 = 27;

	t90 = (x409/(x410^(x411+x412)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = 54335012439909LL;
	int32_t x414 = -1;
	int64_t x415 = -1LL;
	volatile int64_t x416 = 1077693481060149729LL;
	volatile int64_t t91 = -783403170400LL;

	t91 = (x413/(x414^(x415+x416)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	uint16_t x422 = 305U;
	int8_t x424 = -1;
	volatile int64_t t92 = 45929863LL;

	t92 = (x421/(x422^(x423+x424)));

	if (t92 != 30240564055261560LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = UINT16_MAX;
	int64_t x426 = INT64_MAX;
	volatile uint8_t x427 = UINT8_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile int64_t t93 = 13281LL;

	t93 = (x425/(x426^(x427+x428)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = 2439447296LL;
	int16_t x430 = INT16_MIN;
	int16_t x431 = -1;
	int16_t x432 = INT16_MIN;

	t94 = (x429/(x430^(x431+x432)));

	if (t94 != 37223LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x433 = INT8_MIN;
	int64_t x434 = -6173LL;
	static volatile int8_t x435 = 9;
	volatile int8_t x436 = INT8_MAX;

	t95 = (x433/(x434^(x435+x436)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -343975;
	static uint64_t x438 = UINT64_MAX;
	static int16_t x439 = 12479;
	volatile int64_t x440 = -2231964226709392515LL;
	uint64_t t96 = 6894407872598LLU;

	t96 = (x437/(x438^(x439+x440)));

	if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = UINT8_MAX;
	volatile uint8_t x443 = 3U;
	int8_t x444 = 5;
	volatile uint64_t t97 = 1918166875LLU;

	t97 = (x441/(x442^(x443+x444)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x446 = -1LL;
	uint16_t x447 = 14U;
	static int32_t x448 = 0;
	volatile int64_t t98 = -171999532891LL;

	t98 = (x445/(x446^(x447+x448)));

	if (t98 != -4369LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x449 = INT16_MAX;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = 15922U;
	static int64_t t99 = 22010279538688LL;

	t99 = (x449/(x450^(x451+x452)));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

