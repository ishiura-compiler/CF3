#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x21 = 823U;
int32_t x22 = -192331467;
int16_t x23 = INT16_MAX;
static int8_t x25 = INT8_MIN;
int64_t x26 = INT64_MIN;
int16_t x28 = INT16_MAX;
int32_t t6 = -4874;
int32_t x29 = -105377433;
int8_t x41 = INT8_MAX;
volatile uint16_t x49 = UINT16_MAX;
volatile uint8_t x55 = UINT8_MAX;
static int64_t x58 = -1LL;
volatile int32_t t13 = 6;
volatile uint64_t x76 = 781573757886906LLU;
volatile int64_t x77 = -1LL;
volatile int64_t t17 = 55474432821LL;
int8_t x84 = -5;
int8_t x86 = -1;
static volatile int32_t t19 = 1199572;
int32_t x89 = INT32_MIN;
int16_t x92 = -1;
volatile int32_t t20 = 267846385;
uint16_t x101 = 1U;
int64_t x102 = -168LL;
int64_t x104 = 0LL;
volatile int32_t t24 = -1609900;
uint16_t x109 = 1236U;
int32_t x110 = INT32_MAX;
int32_t t25 = -375885;
uint64_t t26 = 60LLU;
uint64_t x121 = 975304LLU;
int64_t x123 = -48631039826806LL;
int8_t x125 = -20;
int16_t x131 = -10119;
volatile int16_t x133 = 92;
volatile int32_t t31 = -13;
static uint8_t x142 = 12U;
volatile int32_t t33 = -113309;
int64_t x146 = INT64_MIN;
int16_t x147 = 3;
uint32_t x149 = 29509581U;
int8_t x150 = -29;
int16_t x151 = INT16_MIN;
uint64_t x153 = UINT64_MAX;
uint64_t x159 = 17618162079526769LLU;
int32_t t37 = -4191246;
uint32_t x170 = UINT32_MAX;
uint64_t t40 = 506240761059366LLU;
uint8_t x175 = 7U;
volatile int32_t x178 = INT32_MIN;
static uint8_t x179 = UINT8_MAX;
static uint16_t x180 = 20124U;
int64_t t44 = 3011089609788015LL;
int64_t x195 = -7486479647245031LL;
volatile int32_t t46 = 1008431;
volatile int32_t x197 = INT32_MIN;
int8_t x200 = -42;
int32_t t47 = -6747309;
volatile uint8_t x201 = 0U;
int16_t x202 = INT16_MIN;
uint8_t x204 = UINT8_MAX;
int64_t x224 = INT64_MIN;
int8_t x225 = INT8_MIN;
int8_t x226 = INT8_MIN;
int32_t x228 = INT32_MIN;
int32_t t51 = -9772312;
uint16_t x229 = UINT16_MAX;
static volatile int32_t x235 = INT32_MAX;
int8_t x236 = -45;
static int32_t x247 = -1;
uint64_t x248 = UINT64_MAX;
uint8_t x252 = 23U;
uint32_t x253 = 36770U;
static int16_t x260 = INT16_MIN;
uint16_t x262 = UINT16_MAX;
static volatile int16_t x264 = INT16_MIN;
volatile int32_t t61 = -27;
uint32_t x269 = 96607U;
volatile uint32_t x275 = UINT32_MAX;
static int32_t x281 = INT32_MAX;
static int16_t x282 = 88;
int16_t x290 = -11852;
int64_t x291 = INT64_MAX;
static volatile int32_t t67 = 6800443;
uint8_t x314 = 3U;
volatile int8_t x315 = INT8_MIN;
uint32_t t72 = 624313U;
int16_t x321 = INT16_MIN;
static int32_t t74 = 450212;
volatile uint64_t t75 = 3470691766872850LLU;
uint8_t x335 = 114U;
uint64_t x336 = 57564775923735947LLU;
int32_t x341 = -1;
int32_t x343 = -3;
int32_t t79 = -1;
int16_t x347 = INT16_MIN;
uint8_t x349 = 0U;
int32_t x352 = -1;
int32_t x353 = INT32_MAX;
uint16_t x368 = 1U;
uint32_t x378 = 4892581U;
int8_t x387 = -22;
static uint32_t x388 = UINT32_MAX;
int32_t x389 = -106;
int64_t x392 = INT64_MAX;
int32_t t90 = 9231;
int64_t x396 = -1LL;
int64_t x399 = INT64_MAX;
static uint8_t x412 = 1U;
uint16_t x422 = 368U;
static uint32_t x442 = 347761740U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int16_t x2 = 1972;
	volatile int32_t x3 = -1;
	volatile uint8_t x4 = 2U;
	volatile int64_t t0 = 813LL;

	t0 = (x1&(x2<=(x3+x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 86243316272LLU;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MAX;
	int16_t x8 = -4;
	uint64_t t1 = 9473487253398LLU;

	t1 = (x5&(x6<=(x7+x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x10 = INT32_MIN;
	static int64_t x11 = -5731872635LL;
	uint8_t x12 = 2U;
	volatile int32_t t2 = -75097516;

	t2 = (x9&(x10<=(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint64_t x14 = 27556844623415480LLU;
	int16_t x15 = 488;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -1;

	t3 = (x13&(x14<=(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x18 = 1087U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -7331788;
	volatile int32_t t4 = 3;

	t4 = (x17&(x18<=(x19+x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x24 = -1;
	volatile int32_t t5 = -231874;

	t5 = (x21&(x22<=(x23+x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = 8403174580708250LL;

	t6 = (x25&(x26<=(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int8_t x31 = -54;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 154006732;

	t7 = (x29&(x30<=(x31+x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 45;
	uint32_t x38 = 1391165U;
	int32_t x39 = INT32_MAX;
	volatile uint32_t x40 = 7575U;
	volatile int32_t t8 = 4415347;

	t8 = (x37&(x38<=(x39+x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -88791670769783LL;
	int16_t x43 = INT16_MAX;
	int64_t x44 = 14481736139547478LL;
	volatile int32_t t9 = 3;

	t9 = (x41&(x42<=(x43+x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MAX;
	uint8_t x46 = 2U;
	int64_t x47 = -1054115311LL;
	static int64_t x48 = INT64_MAX;
	int32_t t10 = 26;

	t10 = (x45&(x46<=(x47+x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x50 = 0;
	int8_t x51 = 10;
	int16_t x52 = INT16_MAX;
	int32_t t11 = -12;

	t11 = (x49&(x50<=(x51+x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	int8_t x54 = -1;
	volatile int64_t x56 = -164045129461LL;
	static volatile int32_t t12 = 21301;

	t12 = (x53&(x54<=(x55+x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;

	t13 = (x57&(x58<=(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 21;
	uint64_t x66 = 106284092LLU;
	uint8_t x67 = 1U;
	static int64_t x68 = -1LL;
	int32_t t14 = -9;

	t14 = (x65&(x66<=(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -2579;
	volatile uint8_t x70 = 7U;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	static int32_t t15 = -186994234;

	t15 = (x69&(x70<=(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x73 = 164767902U;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MAX;
	static volatile uint32_t t16 = 1156079310U;

	t16 = (x73&(x74<=(x75+x76)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 107396370U;
	uint64_t x79 = 71054062649LLU;
	int64_t x80 = -1LL;

	t17 = (x77&(x78<=(x79+x80)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	static int32_t t18 = -326754;

	t18 = (x81&(x82<=(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MIN;
	volatile uint32_t x87 = 102233335U;
	static int64_t x88 = -3737512346896731LL;

	t19 = (x85&(x86<=(x87+x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x90 = 12333U;
	int8_t x91 = 63;

	t20 = (x89&(x90<=(x91+x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	volatile uint16_t x94 = 26519U;
	int64_t x95 = -1522285048495LL;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t21 = -429831;

	t21 = (x93&(x94<=(x95+x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = 16337LLU;
	volatile int8_t x98 = INT8_MIN;
	static uint64_t x99 = 364898998406591LLU;
	volatile int16_t x100 = 2160;
	uint64_t t22 = 2030167942413LLU;

	t22 = (x97&(x98<=(x99+x100)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x103 = -4;
	int32_t t23 = 1545;

	t23 = (x101&(x102<=(x103+x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 123U;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MIN;
	volatile int32_t x108 = -85;

	t24 = (x105&(x106<=(x107+x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = INT8_MIN;

	t25 = (x109&(x110<=(x111+x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = UINT64_MAX;
	static int32_t x114 = INT32_MIN;
	uint32_t x115 = 2812U;
	uint8_t x116 = 0U;

	t26 = (x113&(x114<=(x115+x116)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MIN;
	volatile uint8_t x119 = 18U;
	int64_t x120 = 24864006LL;
	volatile int32_t t27 = 388206044;

	t27 = (x117&(x118<=(x119+x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x122 = INT8_MIN;
	int32_t x124 = 50532055;
	uint64_t t28 = 578556LLU;

	t28 = (x121&(x122<=(x123+x124)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = UINT16_MAX;
	volatile int16_t x127 = INT16_MIN;
	static int64_t x128 = -1LL;
	int32_t t29 = -119935;

	t29 = (x125&(x126<=(x127+x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x129 = 509494U;
	int64_t x130 = 64149535908LL;
	volatile int8_t x132 = -53;
	uint32_t t30 = 0U;

	t30 = (x129&(x130<=(x131+x132)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	static int64_t x135 = 60595713626LL;
	static int64_t x136 = INT64_MIN;

	t31 = (x133&(x134<=(x135+x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	volatile uint8_t x138 = 14U;
	volatile int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	static volatile int64_t t32 = -174LL;

	t32 = (x137&(x138<=(x139+x140)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x141 = -1;
	int32_t x143 = INT32_MAX;
	uint32_t x144 = UINT32_MAX;

	t33 = (x141&(x142<=(x143+x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = -1;
	uint64_t x148 = 1414LLU;
	int32_t t34 = 261;

	t34 = (x145&(x146<=(x147+x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x152 = -1;
	uint32_t t35 = 4U;

	t35 = (x149&(x150<=(x151+x152)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t36 = 1817867310377307LLU;

	t36 = (x153&(x154<=(x155+x156)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x157 = 7U;
	static uint8_t x158 = UINT8_MAX;
	int32_t x160 = INT32_MIN;

	t37 = (x157&(x158<=(x159+x160)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 12U;
	int16_t x163 = INT16_MAX;
	volatile int64_t x164 = 214671358030201LL;
	volatile int32_t t38 = -34;

	t38 = (x161&(x162<=(x163+x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MAX;
	static int16_t x166 = -3;
	volatile int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t39 = 0;

	t39 = (x165&(x166<=(x167+x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int32_t x171 = 24081;
	uint8_t x172 = UINT8_MAX;

	t40 = (x169&(x170<=(x171+x172)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x173 = INT16_MIN;
	int32_t x174 = 2401670;
	int8_t x176 = -14;
	int32_t t41 = 105101926;

	t41 = (x173&(x174<=(x175+x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 1U;
	uint32_t t42 = 119298U;

	t42 = (x177&(x178<=(x179+x180)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = -1;
	int8_t x182 = 15;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 105U;
	static int32_t t43 = 32;

	t43 = (x181&(x182<=(x183+x184)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = 15U;
	int64_t x188 = -200LL;

	t44 = (x185&(x186<=(x187+x188)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -3262277575886217201LL;
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = -1;
	static volatile int64_t t45 = -2153090086808321209LL;

	t45 = (x189&(x190<=(x191+x192)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x194 = 1459511596LLU;
	static int64_t x196 = 5709LL;

	t46 = (x193&(x194<=(x195+x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = -61;
	int16_t x199 = INT16_MIN;

	t47 = (x197&(x198<=(x199+x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x203 = INT8_MAX;
	int32_t t48 = 814491;

	t48 = (x201&(x202<=(x203+x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	static volatile int64_t x219 = -1LL;
	volatile int32_t x220 = 167;
	static volatile uint64_t t49 = 7081517605512LLU;

	t49 = (x217&(x218<=(x219+x220)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -1;
	static int32_t x222 = -1;
	static volatile uint64_t x223 = 403490056338660413LLU;
	int32_t t50 = 55;

	t50 = (x221&(x222<=(x223+x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x227 = INT16_MAX;

	t51 = (x225&(x226<=(x227+x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = 52LL;
	static volatile int16_t x231 = -1;
	volatile int64_t x232 = INT64_MAX;
	int32_t t52 = 1;

	t52 = (x229&(x230<=(x231+x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = UINT16_MAX;
	volatile uint8_t x234 = 23U;
	int32_t t53 = 5735;

	t53 = (x233&(x234<=(x235+x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = 0U;
	int16_t x238 = -1;
	volatile int64_t x239 = INT64_MIN;
	volatile uint8_t x240 = 0U;
	int32_t t54 = -3264;

	t54 = (x237&(x238<=(x239+x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	volatile int64_t x242 = -1LL;
	volatile int32_t x243 = -1;
	int16_t x244 = -1;
	int32_t t55 = 120534604;

	t55 = (x241&(x242<=(x243+x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x245 = 123U;
	volatile int16_t x246 = -1;
	int32_t t56 = 232518192;

	t56 = (x245&(x246<=(x247+x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = INT8_MIN;
	uint8_t x250 = 4U;
	static uint64_t x251 = 615469188LLU;
	static int32_t t57 = 5384093;

	t57 = (x249&(x250<=(x251+x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x254 = 1U;
	static int64_t x255 = -1LL;
	int8_t x256 = 31;
	uint32_t t58 = 9457655U;

	t58 = (x253&(x254<=(x255+x256)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x257 = 100U;
	volatile int16_t x258 = INT16_MAX;
	uint32_t x259 = UINT32_MAX;
	static volatile uint32_t t59 = 9074128U;

	t59 = (x257&(x258<=(x259+x260)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = 19593U;
	int64_t x263 = 60012363830LL;
	int32_t t60 = -1398417;

	t60 = (x261&(x262<=(x263+x264)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 483834859LLU;
	volatile uint16_t x268 = 14U;

	t61 = (x265&(x266<=(x267+x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = -430916187917326LL;
	int64_t x271 = -133992803485558492LL;
	int16_t x272 = INT16_MIN;
	volatile uint32_t t62 = 248807U;

	t62 = (x269&(x270<=(x271+x272)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -1LL;
	int8_t x274 = -6;
	int8_t x276 = INT8_MIN;
	int64_t t63 = 51169997983654LL;

	t63 = (x273&(x274<=(x275+x276)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 225179810U;
	int16_t x278 = INT16_MAX;
	int8_t x279 = 0;
	volatile uint8_t x280 = UINT8_MAX;
	volatile uint32_t t64 = 2218606U;

	t64 = (x277&(x278<=(x279+x280)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x283 = 2;
	volatile uint8_t x284 = 2U;
	int32_t t65 = -276;

	t65 = (x281&(x282<=(x283+x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 6U;
	static volatile int32_t t66 = -18826;

	t66 = (x285&(x286<=(x287+x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	static int16_t x292 = INT16_MIN;

	t67 = (x289&(x290<=(x291+x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 57233032LLU;
	volatile int8_t x295 = INT8_MIN;
	static int16_t x296 = 7;
	static uint32_t t68 = 21908U;

	t68 = (x293&(x294<=(x295+x296)));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = -500144;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -1;
	static volatile int32_t t69 = -59;

	t69 = (x297&(x298<=(x299+x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x305 = 2389494933LLU;
	volatile int32_t x306 = 1;
	static int8_t x307 = -1;
	int16_t x308 = INT16_MIN;
	uint64_t t70 = 1LLU;

	t70 = (x305&(x306<=(x307+x308)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 17U;
	volatile int8_t x311 = INT8_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t71 = -15633933;

	t71 = (x309&(x310<=(x311+x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x313 = 6U;
	uint8_t x316 = 3U;

	t72 = (x313&(x314<=(x315+x316)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = INT64_MAX;
	uint64_t x318 = 63796455492586910LLU;
	volatile uint16_t x319 = UINT16_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int64_t t73 = 2853187332959LL;

	t73 = (x317&(x318<=(x319+x320)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x322 = 105U;
	uint64_t x323 = UINT64_MAX;
	uint16_t x324 = 34U;

	t74 = (x321&(x322<=(x323+x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = 134255535554LLU;
	volatile uint32_t x326 = 5843140U;
	int16_t x327 = INT16_MIN;
	static int16_t x328 = INT16_MAX;

	t75 = (x325&(x326<=(x327+x328)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = 8;
	int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	int32_t t76 = -1;

	t76 = (x329&(x330<=(x331+x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 120192LLU;
	static int32_t t77 = -960;

	t77 = (x333&(x334<=(x335+x336)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = -38;
	uint32_t x340 = 48610U;
	volatile int32_t t78 = -189235;

	t78 = (x337&(x338<=(x339+x340)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x342 = UINT16_MAX;
	uint16_t x344 = UINT16_MAX;

	t79 = (x341&(x342<=(x343+x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x348 = 60U;
	volatile int32_t t80 = -15;

	t80 = (x345&(x346<=(x347+x348)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x350 = INT16_MAX;
	uint16_t x351 = 7U;
	static int32_t t81 = 1772;

	t81 = (x349&(x350<=(x351+x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int64_t x356 = 10438361738LL;
	int32_t t82 = 345;

	t82 = (x353&(x354<=(x355+x356)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = INT32_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t83 = 2;

	t83 = (x357&(x358<=(x359+x360)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x361 = -10;
	int32_t x362 = 18075014;
	uint8_t x363 = 62U;
	volatile int8_t x364 = INT8_MAX;
	int32_t t84 = 90988363;

	t84 = (x361&(x362<=(x363+x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	static int8_t x367 = INT8_MIN;
	volatile int64_t t85 = 1355065632LL;

	t85 = (x365&(x366<=(x367+x368)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = INT8_MAX;
	static uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t86 = -942;

	t86 = (x369&(x370<=(x371+x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x377 = UINT16_MAX;
	uint32_t x379 = 10U;
	int8_t x380 = 2;
	int32_t t87 = 28762;

	t87 = (x377&(x378<=(x379+x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = -59903041;
	volatile int32_t t88 = 1;

	t88 = (x381&(x382<=(x383+x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = 0U;
	int32_t x386 = 5913;
	volatile uint32_t t89 = 171476U;

	t89 = (x385&(x386<=(x387+x388)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x390 = INT16_MIN;
	static volatile int16_t x391 = INT16_MIN;

	t90 = (x389&(x390<=(x391+x392)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int32_t t91 = 12356023;

	t91 = (x393&(x394<=(x395+x396)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x397 = 433931413U;
	int32_t x398 = -129118294;
	int32_t x400 = -3448221;
	volatile uint32_t t92 = 603U;

	t92 = (x397&(x398<=(x399+x400)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x401 = -1;
	uint8_t x402 = 34U;
	int16_t x403 = 10368;
	uint8_t x404 = 7U;
	int32_t t93 = -71181060;

	t93 = (x401&(x402<=(x403+x404)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x410 = 14807U;
	int16_t x411 = 206;
	static int32_t t94 = 15;

	t94 = (x409&(x410<=(x411+x412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = 217193;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = 16U;
	static volatile int32_t t95 = 919;

	t95 = (x421&(x422<=(x423+x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x425 = INT8_MIN;
	int8_t x426 = INT8_MIN;
	static int8_t x427 = INT8_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t96 = -624740047;

	t96 = (x425&(x426<=(x427+x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = -13;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 2540U;
	static volatile int32_t t97 = -2427;

	t97 = (x429&(x430<=(x431+x432)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x437 = -1;
	int8_t x438 = INT8_MAX;
	static uint64_t x439 = 14054286LLU;
	int8_t x440 = -1;
	int32_t t98 = -7456984;

	t98 = (x437&(x438<=(x439+x440)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = INT16_MAX;
	static int32_t x443 = INT32_MIN;
	uint16_t x444 = 25237U;
	int32_t t99 = 822274489;

	t99 = (x441&(x442<=(x443+x444)));

	if (t99 != 1) { NG(); } else { ; }
	
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

