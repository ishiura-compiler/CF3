#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 547134U;
static int16_t x19 = INT16_MIN;
int32_t x28 = 784957771;
static int64_t x34 = -1LL;
uint16_t x36 = UINT16_MAX;
int16_t x44 = INT16_MIN;
int32_t x50 = 3734580;
volatile int32_t x67 = -227795665;
uint8_t x83 = 51U;
int32_t t13 = 499;
static volatile int64_t x88 = INT64_MAX;
volatile int64_t t14 = INT64_MAX;
int8_t x89 = INT8_MAX;
int32_t x93 = INT32_MIN;
volatile uint16_t x100 = UINT16_MAX;
static int64_t x108 = 607481LL;
static volatile int64_t t19 = -50101633324016LL;
static volatile int64_t x109 = -103692551649LL;
int32_t x114 = -485414;
static int8_t x116 = -11;
uint8_t x129 = 37U;
int8_t x130 = INT8_MIN;
uint16_t x133 = 1U;
volatile int32_t x135 = INT32_MIN;
volatile int64_t t24 = 209972266677195779LL;
int64_t x137 = INT64_MAX;
uint16_t x139 = UINT16_MAX;
volatile uint16_t x145 = 2U;
uint64_t t26 = 18556650019789LLU;
volatile uint16_t x151 = 431U;
int64_t x152 = -35859730LL;
volatile int32_t x153 = -1;
int8_t x157 = 24;
static int64_t x158 = INT64_MIN;
static volatile uint64_t t29 = 11385758509LLU;
int32_t x166 = -54895;
volatile int16_t x167 = -43;
uint8_t x168 = 38U;
volatile uint64_t t32 = 1181422241465987LLU;
volatile int64_t x176 = INT64_MIN;
uint64_t x183 = 10968LLU;
static volatile int64_t t35 = -230735438694540340LL;
uint64_t t36 = 102669352369564661LLU;
uint32_t x200 = 3480158U;
static int8_t x207 = INT8_MIN;
uint64_t x212 = 23281029LLU;
int32_t x218 = INT32_MIN;
static int16_t x221 = INT16_MIN;
uint16_t x223 = UINT16_MAX;
int64_t x226 = -7687LL;
static uint16_t x234 = 2U;
uint16_t x235 = 54U;
uint64_t x236 = 6392337317LLU;
uint64_t t45 = 139332456125606LLU;
volatile uint32_t t46 = 2U;
int8_t x246 = INT8_MIN;
int64_t x261 = INT64_MIN;
static int8_t x262 = 27;
volatile int64_t t49 = 0LL;
volatile int64_t t50 = INT64_MAX;
int16_t x278 = INT16_MAX;
int32_t x283 = INT32_MIN;
int16_t x299 = INT16_MAX;
uint32_t x302 = UINT32_MAX;
uint64_t x312 = UINT64_MAX;
uint32_t x330 = 13U;
static int64_t x331 = INT64_MAX;
volatile uint64_t x338 = UINT64_MAX;
int8_t x341 = INT8_MIN;
int32_t x342 = 67;
volatile uint64_t t64 = 949077523742LLU;
uint16_t x368 = 9452U;
int16_t x370 = -173;
int64_t t71 = 5194865LL;
static int64_t x386 = INT64_MIN;
volatile int32_t x398 = -231;
int64_t x423 = INT64_MIN;
uint8_t x428 = 7U;
uint64_t x433 = 19802LLU;
static int64_t x437 = INT64_MIN;
int64_t x438 = 45016563403LL;
uint16_t x439 = 736U;
uint16_t x441 = 5U;
uint16_t x443 = 241U;
int32_t t83 = 0;
volatile int8_t x452 = INT8_MIN;
volatile int32_t x453 = -1;
volatile int64_t x454 = INT64_MIN;
uint16_t x460 = 6284U;
int64_t x461 = INT64_MIN;
int64_t t90 = -9LL;
int64_t x478 = 1242LL;
int32_t x480 = INT32_MAX;
int8_t x486 = -7;
static int8_t x496 = INT8_MIN;
uint8_t x503 = 30U;
volatile int16_t x504 = INT16_MAX;
int16_t x510 = INT16_MIN;
uint64_t x512 = 146LLU;
volatile uint32_t t98 = 707073186U;
static volatile int32_t t99 = -26480;


void f0(void) {
	static uint64_t x5 = 271396739857LLU;
	int32_t x6 = -55093;
	int8_t x7 = INT8_MAX;
	static int32_t x8 = INT32_MAX;
	uint64_t t0 = 458310859167116LLU;

	t0 = ((x5/(x6%x7))^x8);

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = INT64_MAX;
	static uint16_t x15 = 25077U;
	static int32_t x16 = -7;
	volatile int64_t t1 = -1257920914246457LL;

	t1 = ((x13/(x14%x15))^x16);

	if (t1 != -38LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 42U;
	uint16_t x18 = 21863U;
	static volatile int8_t x20 = 3;
	volatile int32_t t2 = -109;

	t2 = ((x17/(x18%x19))^x20);

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	volatile int32_t x27 = INT32_MAX;
	volatile int64_t t3 = 105841142462906LL;

	t3 = ((x25/(x26%x27))^x28);

	if (t3 != -72057593252970166LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x33 = INT8_MIN;
	volatile int16_t x35 = INT16_MAX;
	volatile int64_t t4 = 7806606482269347LL;

	t4 = ((x33/(x34%x35))^x36);

	if (t4 != 65407LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x37 = 9043338893507142LL;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = UINT16_MAX;
	uint16_t x40 = UINT16_MAX;
	static volatile int64_t t5 = 1647985486LL;

	t5 = ((x37/(x38%x39))^x40);

	if (t5 != 71207392878539LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 13U;
	int32_t x43 = 206;
	volatile int32_t t6 = 111842228;

	t6 = ((x41/(x42%x43))^x44);

	if (t6 != -30248) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = -1LL;
	uint32_t x47 = 6U;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t7 = -42LL;

	t7 = ((x45/(x46%x47))^x48);

	if (t7 != 2147549183LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = -1;
	uint8_t x51 = 9U;
	int16_t x52 = INT16_MIN;
	int32_t t8 = -15550851;

	t8 = ((x49/(x50%x51))^x52);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x53 = -1;
	int32_t x54 = -1;
	uint8_t x55 = 4U;
	static volatile uint32_t x56 = UINT32_MAX;
	static volatile uint32_t t9 = 7893U;

	t9 = ((x53/(x54%x55))^x56);

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 611737U;
	volatile int64_t x64 = INT64_MIN;
	uint64_t t10 = 349533LLU;

	t10 = ((x61/(x62%x63))^x64);

	if (t10 != 9224318557665166774LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -59290;
	int32_t x66 = INT32_MIN;
	static uint32_t x68 = 37U;
	volatile uint32_t t11 = 1085101048U;

	t11 = ((x65/(x66%x67))^x68);

	if (t11 != 37U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = 0;
	volatile int32_t x78 = -108207314;
	int8_t x79 = 5;
	uint8_t x80 = 1U;
	int32_t t12 = 0;

	t12 = ((x77/(x78%x79))^x80);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x81 = 108U;
	static int16_t x82 = INT16_MIN;
	static int32_t x84 = INT32_MAX;

	t13 = ((x81/(x82%x83))^x84);

	if (t13 != -2147483645) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = 0;
	static int32_t x86 = INT32_MAX;
	volatile int16_t x87 = 5830;

	t14 = ((x85/(x86%x87))^x88);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = INT64_MIN;
	static int64_t x91 = -96563LL;
	uint64_t x92 = 2963LLU;
	uint64_t t15 = 2475LLU;

	t15 = ((x89/(x90%x91))^x92);

	if (t15 != 2963LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 7U;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t16 = 2065918692834339507LLU;

	t16 = ((x93/(x94%x95))^x96);

	if (t16 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = 23;
	uint8_t x98 = 11U;
	uint16_t x99 = UINT16_MAX;
	int32_t t17 = 535391578;

	t17 = ((x97/(x98%x99))^x100);

	if (t17 != 65533) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MAX;
	int32_t x103 = 1691758;
	uint64_t x104 = 236157466845LLU;
	volatile uint64_t t18 = 162LLU;

	t18 = ((x101/(x102%x103))^x104);

	if (t18 != 236157467103LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x105 = 719U;
	uint32_t x106 = 13356530U;
	static int8_t x107 = -17;

	t19 = ((x105/(x106%x107))^x108);

	if (t19 != 607481LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x110 = 604836677337LLU;
	uint16_t x111 = 3161U;
	int32_t x112 = -10;
	volatile uint64_t t20 = 7441298229351LLU;

	t20 = ((x109/(x110%x111))^x112);

	if (t20 != 18380149330135483033LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = 1;
	static volatile int64_t x115 = INT64_MIN;
	volatile int64_t t21 = -88869688LL;

	t21 = ((x113/(x114%x115))^x116);

	if (t21 != -11LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile uint16_t x120 = UINT16_MAX;
	uint64_t t22 = 17222618LLU;

	t22 = ((x117/(x118%x119))^x120);

	if (t22 != 65534LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t23 = -1120557;

	t23 = ((x129/(x130%x131))^x132);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x134 = INT64_MAX;
	uint8_t x136 = UINT8_MAX;

	t24 = ((x133/(x134%x135))^x136);

	if (t24 != 255LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x138 = INT32_MAX;
	static int64_t x140 = -1LL;
	int64_t t25 = -8858LL;

	t25 = ((x137/(x138%x139))^x140);

	if (t25 != -281483566907401LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x146 = 11LLU;
	uint16_t x147 = 36U;
	volatile int32_t x148 = INT32_MIN;

	t26 = ((x145/(x146%x147))^x148);

	if (t26 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = 1U;
	int16_t x150 = INT16_MIN;
	volatile int64_t t27 = 164047915622LL;

	t27 = ((x149/(x150%x151))^x152);

	if (t27 != -35859730LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x154 = 3U;
	uint16_t x155 = 26425U;
	int16_t x156 = INT16_MAX;
	int32_t t28 = -33;

	t28 = ((x153/(x154%x155))^x156);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x159 = 5053539467LLU;
	static int16_t x160 = INT16_MAX;

	t29 = ((x157/(x158%x159))^x160);

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x161 = 88;
	volatile int16_t x162 = INT16_MAX;
	static int64_t x163 = INT64_MIN;
	int16_t x164 = -1;
	volatile int64_t t30 = 20316985LL;

	t30 = ((x161/(x162%x163))^x164);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x165 = 35U;
	volatile int32_t t31 = 27459;

	t31 = ((x165/(x166%x167))^x168);

	if (t31 != -39) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = INT32_MAX;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -3258LL;
	int16_t x172 = -1;

	t32 = ((x169/(x170%x171))^x172);

	if (t32 != 18446744073708892271LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = 7;
	uint8_t x174 = UINT8_MAX;
	volatile uint8_t x175 = 2U;
	volatile int64_t t33 = -176LL;

	t33 = ((x173/(x174%x175))^x176);

	if (t33 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MIN;
	volatile int16_t x182 = INT16_MIN;
	int16_t x184 = 35;
	volatile uint64_t t34 = 842942LLU;

	t34 = ((x181/(x182%x183))^x184);

	if (t34 != 2271766511276151LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = 7LL;
	int64_t x187 = INT64_MIN;
	static uint16_t x188 = 289U;

	t35 = ((x185/(x186%x187))^x188);

	if (t35 != -305LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x193 = 2LLU;
	volatile uint32_t x194 = 942891U;
	int16_t x195 = -1;
	int16_t x196 = INT16_MIN;

	t36 = ((x193/(x194%x195))^x196);

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint32_t t37 = 13508U;

	t37 = ((x197/(x198%x199))^x200);

	if (t37 != 3480158U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x202 = INT64_MAX;
	volatile int8_t x203 = 28;
	volatile int32_t x204 = 15202088;
	volatile int64_t t38 = -32975LL;

	t38 = ((x201/(x202%x203))^x204);

	if (t38 != -1317624576703948129LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x205 = 16268U;
	int32_t x206 = -2795;
	uint64_t x208 = 49027345LLU;
	volatile uint64_t t39 = 102917726091359649LLU;

	t39 = ((x205/(x206%x207))^x208);

	if (t39 != 18446744073660524153LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = 36U;
	static int32_t x211 = 1711593;
	uint64_t t40 = 48725080075LLU;

	t40 = ((x209/(x210%x211))^x212);

	if (t40 != 512409557613607577LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = -686522;
	int8_t x215 = INT8_MIN;
	volatile int32_t x216 = 2;
	int32_t t41 = -15722649;

	t41 = ((x213/(x214%x215))^x216);

	if (t41 != 566) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x217 = 6U;
	static int8_t x219 = INT8_MAX;
	int8_t x220 = -1;
	volatile int32_t t42 = 8;

	t42 = ((x217/(x218%x219))^x220);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x222 = INT64_MIN;
	uint8_t x224 = 11U;
	volatile int64_t t43 = 43915658334750LL;

	t43 = ((x221/(x222%x223))^x224);

	if (t43 != 10LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MIN;
	volatile int32_t x227 = 700;
	int8_t x228 = 4;
	static int64_t t44 = 12LL;

	t44 = ((x225/(x226%x227))^x228);

	if (t44 != 4LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -1LL;

	t45 = ((x233/(x234%x235))^x236);

	if (t45 != 6392337317LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x242 = 15776U;
	volatile int8_t x243 = INT8_MIN;
	volatile uint32_t x244 = UINT32_MAX;

	t46 = ((x241/(x242%x243))^x244);

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x247 = 117942715621LLU;
	int8_t x248 = -8;
	uint64_t t47 = 3LLU;

	t47 = ((x245/(x246%x247))^x248);

	if (t47 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MAX;
	volatile int64_t x259 = INT64_MIN;
	static int16_t x260 = INT16_MIN;
	int64_t t48 = 685185065960602830LL;

	t48 = ((x257/(x258%x259))^x260);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x263 = 491U;
	volatile int8_t x264 = INT8_MAX;

	t49 = ((x261/(x262%x263))^x264);

	if (t49 != -341606371735362159LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = INT16_MIN;
	static uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile int64_t x272 = INT64_MIN;

	t50 = ((x269/(x270%x271))^x272);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = 25817372793676249LL;
	int16_t x274 = INT16_MIN;
	volatile uint8_t x275 = 10U;
	uint16_t x276 = 25U;
	static volatile int64_t t51 = -7LL;

	t51 = ((x273/(x274%x275))^x276);

	if (t51 != -3227171599209508LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x277 = 3U;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 88U;
	static uint32_t t52 = 18U;

	t52 = ((x277/(x278%x279))^x280);

	if (t52 != 88U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = 12;
	volatile int32_t x282 = -1711;
	int32_t x284 = 75914;
	volatile int32_t t53 = -565;

	t53 = ((x281/(x282%x283))^x284);

	if (t53 != 75914) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x285 = 2U;
	volatile int64_t x286 = 91790LL;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	static volatile int64_t t54 = -45873566494LL;

	t54 = ((x285/(x286%x287))^x288);

	if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 1U;
	uint16_t x298 = 4833U;
	static uint16_t x300 = 1489U;
	volatile int32_t t55 = -254;

	t55 = ((x297/(x298%x299))^x300);

	if (t55 != 1489) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x301 = 36LLU;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	uint64_t t56 = 3701914883LLU;

	t56 = ((x301/(x302%x303))^x304);

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = INT8_MAX;
	volatile int16_t x306 = 19;
	volatile uint64_t x307 = 24634LLU;
	static int64_t x308 = INT64_MIN;
	static volatile uint64_t t57 = 196058065LLU;

	t57 = ((x305/(x306%x307))^x308);

	if (t57 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = UINT32_MAX;
	uint16_t x311 = 21122U;
	static volatile uint64_t t58 = 329080751956LLU;

	t58 = ((x309/(x310%x311))^x312);

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x313 = 9U;
	uint16_t x314 = 4U;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t59 = -10075120986LL;

	t59 = ((x313/(x314%x315))^x316);

	if (t59 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = -1;
	static volatile int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = 0U;
	static int64_t t60 = -524063277LL;

	t60 = ((x317/(x318%x319))^x320);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x329 = 6211057407997LLU;
	int16_t x332 = -33;
	volatile uint64_t t61 = 161LLU;

	t61 = ((x329/(x330%x331))^x332);

	if (t61 != 18446743595935904878LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = -31;
	int16_t x334 = -1127;
	static int64_t x335 = -1458724LL;
	static uint8_t x336 = 48U;
	int64_t t62 = -19695LL;

	t62 = ((x333/(x334%x335))^x336);

	if (t62 != 48LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x337 = -1LL;
	static volatile int32_t x339 = 18622;
	int64_t x340 = 9053221LL;
	static volatile uint64_t t63 = 3557LLU;

	t63 = ((x337/(x338%x339))^x340);

	if (t63 != 69610355003118634LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x343 = INT16_MAX;
	static uint64_t x344 = 48070614255631LLU;

	t64 = ((x341/(x342%x343))^x344);

	if (t64 != 18446696003095295984LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = -13;
	uint16_t x347 = UINT16_MAX;
	static int64_t x348 = 27658LL;
	volatile uint64_t t65 = 384012751725667153LLU;

	t65 = ((x345/(x346%x347))^x348);

	if (t65 != 27659LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x349 = 30U;
	int8_t x350 = -2;
	static uint16_t x351 = 35U;
	uint64_t x352 = 717811488LLU;
	uint64_t t66 = 3814600088LLU;

	t66 = ((x349/(x350%x351))^x352);

	if (t66 != 18446744072991740113LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MIN;
	int64_t t67 = -414465LL;

	t67 = ((x357/(x358%x359))^x360);

	if (t67 != -32640LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = -2892345752730675137LL;
	volatile int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	int64_t t68 = 10103884656973197LL;

	t68 = ((x361/(x362%x363))^x364);

	if (t68 != 88266505810369LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x365 = 290209698613014LLU;
	int32_t x366 = INT32_MIN;
	static volatile int16_t x367 = 3;
	volatile uint64_t t69 = 609839555611LLU;

	t69 = ((x365/(x366%x367))^x368);

	if (t69 != 9452LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = INT32_MIN;
	volatile int16_t x371 = 5;
	volatile int8_t x372 = 7;
	int32_t t70 = -47;

	t70 = ((x369/(x370%x371))^x372);

	if (t70 != 715827885) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x373 = 597862LL;
	int64_t x374 = 14928769LL;
	uint16_t x375 = 414U;
	int8_t x376 = 3;

	t71 = ((x373/(x374%x375))^x376);

	if (t71 != 1740LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = -3460750;
	int32_t x378 = INT32_MIN;
	static volatile uint16_t x379 = 9188U;
	int64_t x380 = -1LL;
	int64_t t72 = 6LL;

	t72 = ((x377/(x378%x379))^x380);

	if (t72 != -378LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x381 = 1782U;
	int16_t x382 = -9;
	static int8_t x383 = INT8_MIN;
	static int8_t x384 = -1;
	static volatile int32_t t73 = -20;

	t73 = ((x381/(x382%x383))^x384);

	if (t73 != 197) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x385 = 18U;
	static uint64_t x387 = UINT64_MAX;
	static uint64_t x388 = 194680175756169LLU;
	static uint64_t t74 = 5597378127999LLU;

	t74 = ((x385/(x386%x387))^x388);

	if (t74 != 194680175756169LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x393 = INT32_MAX;
	static int8_t x394 = 13;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t75 = -243489;

	t75 = ((x393/(x394%x395))^x396);

	if (t75 != -1982292599) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = -5;
	uint32_t x399 = 5518U;
	static uint64_t x400 = 59673LLU;
	uint64_t t76 = 3097653747792989LLU;

	t76 = ((x397/(x398%x399))^x400);

	if (t76 != 1006439LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x405 = UINT8_MAX;
	volatile int32_t x406 = INT32_MAX;
	volatile int8_t x407 = INT8_MAX;
	static uint16_t x408 = 1U;
	volatile int32_t t77 = 25227956;

	t77 = ((x405/(x406%x407))^x408);

	if (t77 != 37) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x409 = UINT16_MAX;
	uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	volatile uint32_t t78 = 28206U;

	t78 = ((x409/(x410%x411))^x412);

	if (t78 != 635U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MAX;
	int64_t x424 = -1LL;
	int64_t t79 = 4505363236930708191LL;

	t79 = ((x421/(x422%x423))^x424);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = INT32_MIN;
	volatile uint16_t x426 = 32U;
	uint64_t x427 = 14000276LLU;
	volatile uint64_t t80 = 48419343876619LLU;

	t80 = ((x425/(x426%x427))^x428);

	if (t80 != 576460752236314631LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x434 = -1LL;
	static uint8_t x435 = 125U;
	int32_t x436 = -1;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x433/(x434%x435))^x436);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x440 = UINT32_MAX;
	int64_t t82 = -410251375LL;

	t82 = ((x437/(x438%x439))^x440);

	if (t82 != -12899819883239193LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x442 = UINT8_MAX;
	volatile int8_t x444 = 3;

	t83 = ((x441/(x442%x443))^x444);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = 2;
	int8_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	uint32_t x448 = 118U;
	volatile uint32_t t84 = 44826602U;

	t84 = ((x445/(x446%x447))^x448);

	if (t84 != 4294967176U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = -1LL;
	volatile uint32_t x450 = 5U;
	int32_t x451 = -1;
	int64_t t85 = 446351LL;

	t85 = ((x449/(x450%x451))^x452);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x455 = UINT64_MAX;
	uint32_t x456 = 2608U;
	static uint64_t t86 = 1818363962111LLU;

	t86 = ((x453/(x454%x455))^x456);

	if (t86 != 2609LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x457 = INT16_MAX;
	int32_t x458 = -1;
	static int16_t x459 = INT16_MAX;
	int32_t t87 = 7;

	t87 = ((x457/(x458%x459))^x460);

	if (t87 != -26483) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x462 = INT64_MAX;
	static int16_t x463 = INT16_MIN;
	volatile int8_t x464 = INT8_MIN;
	int64_t t88 = -8689493233152LL;

	t88 = ((x461/(x462%x463))^x464);

	if (t88 != 281483566907512LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x465 = UINT64_MAX;
	static uint32_t x466 = 478U;
	int64_t x467 = -22LL;
	volatile int16_t x468 = -3;
	volatile uint64_t t89 = 16789377LLU;

	t89 = ((x465/(x466%x467))^x468);

	if (t89 != 17293822569102704642LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = 121745213;
	uint8_t x474 = 3U;
	int32_t x475 = INT32_MAX;
	int64_t x476 = INT64_MIN;

	t90 = ((x473/(x474%x475))^x476);

	if (t90 != -9223372036814194071LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = INT16_MIN;
	static uint64_t x479 = 159992640973LLU;
	uint64_t t91 = 624LLU;

	t91 = ((x477/(x478%x479))^x480);

	if (t91 != 14852451259703388LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MAX;
	static uint8_t x483 = UINT8_MAX;
	static uint8_t x484 = 79U;
	volatile int32_t t92 = 61;

	t92 = ((x481/(x482%x483))^x484);

	if (t92 != -335) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = 16;
	volatile int16_t x487 = 78;
	uint8_t x488 = 79U;
	int32_t t93 = 0;

	t93 = ((x485/(x486%x487))^x488);

	if (t93 != -79) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x493 = 374069034U;
	static uint16_t x494 = 32735U;
	uint32_t x495 = UINT32_MAX;
	uint32_t t94 = 100036U;

	t94 = ((x493/(x494%x495))^x496);

	if (t94 != 4294955811U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x497 = 69U;
	uint64_t x498 = 56231688430LLU;
	static int16_t x499 = 1730;
	static int32_t x500 = -1;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x497/(x498%x499))^x500);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = -1;
	int32_t x502 = -340760;
	static volatile int32_t t96 = -373757632;

	t96 = ((x501/(x502%x503))^x504);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x509 = INT16_MIN;
	uint32_t x511 = 822428555U;
	volatile uint64_t t97 = 14102437647232LLU;

	t97 = ((x509/(x510%x511))^x512);

	if (t97 != 133LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x513 = 625U;
	uint32_t x514 = 1U;
	uint16_t x515 = 8U;
	static uint16_t x516 = 23282U;

	t98 = ((x513/(x514%x515))^x516);

	if (t98 != 22659U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x517 = 3087;
	int16_t x518 = -1;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -21;

	t99 = ((x517/(x518%x519))^x520);

	if (t99 != 3098) { NG(); } else { ; }
	
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

