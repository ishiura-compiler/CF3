#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 1866827691971860547LL;
volatile uint8_t x5 = UINT8_MAX;
uint16_t x10 = 6678U;
int32_t x13 = 357701381;
static volatile int64_t x14 = 908873842320035874LL;
static int8_t x15 = INT8_MAX;
int32_t t4 = -4802198;
static int32_t t5 = 420933910;
static uint8_t x34 = UINT8_MAX;
int32_t t9 = -240532;
int8_t x45 = 0;
static int32_t x48 = -480;
volatile uint16_t x51 = 84U;
static volatile int64_t x53 = INT64_MIN;
int8_t x60 = INT8_MIN;
uint16_t x62 = 735U;
static int8_t x66 = INT8_MIN;
volatile int16_t x74 = INT16_MIN;
uint64_t x75 = UINT64_MAX;
static volatile int16_t x80 = INT16_MAX;
volatile int64_t x82 = INT64_MIN;
volatile int8_t x84 = -1;
uint32_t x94 = 1518U;
int32_t t22 = -12613;
uint64_t x99 = 1193862609594LLU;
volatile int32_t t24 = -909;
static volatile int64_t x110 = INT64_MAX;
volatile uint64_t x114 = 122LLU;
uint32_t x132 = UINT32_MAX;
int32_t t31 = 336;
uint64_t x145 = 244058LLU;
volatile int64_t x148 = INT64_MIN;
static volatile int32_t t34 = 5428615;
volatile int32_t x150 = -1;
int8_t x152 = 1;
int32_t t35 = 613;
static int32_t x155 = -1;
volatile int32_t t37 = 97265036;
static int8_t x169 = -45;
int8_t x173 = INT8_MIN;
volatile int32_t x178 = 3612788;
uint8_t x189 = 63U;
uint16_t x196 = 6240U;
volatile int32_t t48 = -6681124;
int32_t t50 = 4192123;
static uint64_t x218 = 480LLU;
static int8_t x227 = 56;
static int8_t x228 = INT8_MIN;
uint64_t x230 = UINT64_MAX;
int32_t t54 = 10474487;
int64_t x233 = -45720587LL;
int8_t x238 = INT8_MAX;
volatile int8_t x240 = -1;
int8_t x242 = -1;
volatile int32_t t58 = -7105;
int32_t t63 = 9633701;
uint32_t x269 = UINT32_MAX;
static int16_t x277 = -1;
int16_t x279 = 1729;
int64_t x284 = -676219949LL;
volatile int32_t t66 = -12;
volatile int32_t t68 = -5412;
uint32_t x304 = 153630U;
volatile int32_t t70 = 15688;
int8_t x307 = INT8_MAX;
int8_t x308 = -1;
uint32_t x315 = UINT32_MAX;
uint32_t x324 = 6145U;
int32_t x330 = 2218;
static int16_t x334 = -1;
volatile int32_t x335 = -1126;
volatile int32_t t77 = -11458;
int64_t x338 = -1LL;
int16_t x349 = 650;
int32_t t80 = 13;
static volatile int32_t x357 = -1;
volatile int32_t t84 = 12978008;
int32_t t85 = -78506228;
static volatile int32_t t86 = 30903619;
int8_t x382 = INT8_MAX;
int32_t x383 = INT32_MIN;
uint16_t x385 = 2U;
static volatile int32_t t89 = 377633;
int64_t x390 = -1887075LL;
int8_t x398 = INT8_MIN;
volatile int8_t x399 = INT8_MIN;
int64_t x402 = INT64_MIN;
static int32_t x403 = 6086;
volatile uint8_t x406 = UINT8_MAX;
static volatile int32_t t94 = 12455;
int16_t x410 = INT16_MIN;
int32_t x412 = -1;
int8_t x415 = INT8_MIN;
int16_t x419 = INT16_MAX;
volatile int32_t t99 = 30790303;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 5916333LLU;
	int32_t t0 = -14;

	t0 = (x1<=(x2-(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MAX;
	uint32_t x7 = 0U;
	volatile uint8_t x8 = 3U;
	int32_t t1 = 152607131;

	t1 = (x5<=(x6-(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 7882818456LL;
	int32_t x11 = INT32_MAX;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 63109075;

	t2 = (x9<=(x10-(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x16 = -1;
	volatile int32_t t3 = -673;

	t3 = (x13<=(x14-(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile int8_t x20 = 1;

	t4 = (x17<=(x18-(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	static uint16_t x27 = 2159U;
	static volatile int32_t x28 = -1;

	t5 = (x25<=(x26-(x27%x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	static int32_t x30 = 2893783;
	int16_t x31 = -2;
	int8_t x32 = -1;
	int32_t t6 = -101647994;

	t6 = (x29<=(x30-(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int32_t x35 = INT32_MIN;
	int8_t x36 = 5;
	volatile int32_t t7 = -372622706;

	t7 = (x33<=(x34-(x35%x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 4127172355998LL;
	int64_t x38 = INT64_MIN;
	volatile int16_t x39 = -34;
	int64_t x40 = 1428033900547LL;
	volatile int32_t t8 = 16197966;

	t8 = (x37<=(x38-(x39%x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x42 = INT64_MAX;
	static uint32_t x43 = UINT32_MAX;
	static int8_t x44 = INT8_MIN;

	t9 = (x41<=(x42-(x43%x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = 107U;
	uint64_t x47 = 177234LLU;
	volatile int32_t t10 = -63773;

	t10 = (x45<=(x46-(x47%x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -26338777;
	static int8_t x50 = -27;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t11 = 8;

	t11 = (x49<=(x50-(x51%x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = 1;
	int8_t x55 = -44;
	int64_t x56 = -724744531591096779LL;
	volatile int32_t t12 = -90050614;

	t12 = (x53<=(x54-(x55%x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 602551453LLU;
	static int32_t x58 = -1051283341;
	volatile int16_t x59 = INT16_MIN;
	int32_t t13 = 28;

	t13 = (x57<=(x58-(x59%x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = 1972LL;
	static volatile int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 7085;

	t14 = (x61<=(x62-(x63%x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 10899U;
	int32_t t15 = 58491;

	t15 = (x65<=(x66-(x67%x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MAX;
	int32_t x71 = INT32_MAX;
	static uint32_t x72 = 15U;
	int32_t t16 = -1;

	t16 = (x69<=(x70-(x71%x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 13U;
	uint8_t x76 = 22U;
	int32_t t17 = -3569;

	t17 = (x73<=(x74-(x75%x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = -3025022401LL;
	static int16_t x79 = 6;
	int32_t t18 = 63;

	t18 = (x77<=(x78-(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	static volatile int64_t x83 = 23939894016690LL;
	volatile int32_t t19 = -5831340;

	t19 = (x81<=(x82-(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	volatile int32_t x86 = INT32_MAX;
	volatile int64_t x87 = INT64_MAX;
	uint32_t x88 = 27002U;
	static volatile int32_t t20 = 0;

	t20 = (x85<=(x86-(x87%x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -2;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = 522;
	volatile uint64_t x92 = 2576939LLU;
	volatile int32_t t21 = 191;

	t21 = (x89<=(x90-(x91%x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 1U;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;

	t22 = (x93<=(x94-(x95%x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 42U;
	int32_t x98 = -933222;
	volatile int8_t x100 = 1;
	int32_t t23 = 44547;

	t23 = (x97<=(x98-(x99%x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	int16_t x104 = -70;

	t24 = (x101<=(x102-(x103%x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -1;
	int16_t x107 = INT16_MAX;
	uint8_t x108 = 108U;
	volatile int32_t t25 = -111631;

	t25 = (x105<=(x106-(x107%x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 14285U;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -483308657882LL;
	volatile int32_t t26 = -7086527;

	t26 = (x109<=(x110-(x111%x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x115 = 238916655U;
	static uint32_t x116 = UINT32_MAX;
	volatile int32_t t27 = -80755;

	t27 = (x113<=(x114-(x115%x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -7726810;
	int16_t x118 = -1941;
	int64_t x119 = INT64_MIN;
	int32_t x120 = 23619446;
	int32_t t28 = 35;

	t28 = (x117<=(x118-(x119%x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MIN;
	uint16_t x126 = 23021U;
	uint16_t x127 = 5U;
	static int64_t x128 = -1LL;
	int32_t t29 = -4570;

	t29 = (x125<=(x126-(x127%x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	int32_t t30 = 1;

	t30 = (x129<=(x130-(x131%x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	static volatile int64_t x134 = -16495179571300LL;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 246U;

	t31 = (x133<=(x134-(x135%x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	static int32_t x138 = INT32_MIN;
	int32_t x139 = 17720;
	static uint64_t x140 = 846434394070LLU;
	static int32_t t32 = 509035;

	t32 = (x137<=(x138-(x139%x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x141 = 13;
	uint32_t x142 = 15512U;
	static int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	int32_t t33 = 32;

	t33 = (x141<=(x142-(x143%x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x146 = 0U;
	uint32_t x147 = 8U;

	t34 = (x145<=(x146-(x147%x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 5U;
	int32_t x151 = 1350632;

	t35 = (x149<=(x150-(x151%x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	static int64_t x154 = -1LL;
	uint16_t x156 = UINT16_MAX;
	int32_t t36 = -7331;

	t36 = (x153<=(x154-(x155%x156)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	static int32_t x162 = -212;
	static uint16_t x163 = UINT16_MAX;
	int16_t x164 = -28;

	t37 = (x161<=(x162-(x163%x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = 11;
	uint8_t x166 = UINT8_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile int8_t x168 = 1;
	static int32_t t38 = -1015;

	t38 = (x165<=(x166-(x167%x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x170 = 2;
	int64_t x171 = 202851225300712242LL;
	static uint8_t x172 = 1U;
	volatile int32_t t39 = 237291763;

	t39 = (x169<=(x170-(x171%x172)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MIN;
	int16_t x175 = 15;
	uint16_t x176 = 31U;
	int32_t t40 = 1698367;

	t40 = (x173<=(x174-(x175%x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = INT8_MAX;
	uint8_t x179 = 1U;
	int16_t x180 = -1;
	volatile int32_t t41 = -453069234;

	t41 = (x177<=(x178-(x179%x180)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x181 = UINT16_MAX;
	static uint64_t x182 = UINT64_MAX;
	int64_t x183 = -1LL;
	volatile int32_t x184 = -58081688;
	int32_t t42 = -12694;

	t42 = (x181<=(x182-(x183%x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = INT16_MAX;
	static int32_t x186 = 143696124;
	volatile uint64_t x187 = UINT64_MAX;
	int8_t x188 = -1;
	volatile int32_t t43 = 480052307;

	t43 = (x185<=(x186-(x187%x188)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x190 = UINT8_MAX;
	static int32_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t44 = -6;

	t44 = (x189<=(x190-(x191%x192)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	int32_t t45 = -1365644;

	t45 = (x193<=(x194-(x195%x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x197 = 3114805870666134870LL;
	int8_t x198 = 49;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = -5;
	volatile int32_t t46 = 202271585;

	t46 = (x197<=(x198-(x199%x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = INT64_MIN;
	int64_t x202 = 966184490677480LL;
	volatile int32_t x203 = -38001479;
	uint8_t x204 = 4U;
	int32_t t47 = 106325;

	t47 = (x201<=(x202-(x203%x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x205 = 7;
	uint32_t x206 = 2035U;
	volatile int8_t x207 = INT8_MIN;
	volatile int16_t x208 = 3271;

	t48 = (x205<=(x206-(x207%x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 0U;
	static uint8_t x210 = 1U;
	int64_t x211 = 2LL;
	int64_t x212 = 1103118090102LL;
	int32_t t49 = 2486;

	t49 = (x209<=(x210-(x211%x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;

	t50 = (x213<=(x214-(x215%x216)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	static int16_t x219 = -5;
	uint64_t x220 = 3058177841523LLU;
	volatile int32_t t51 = -45841;

	t51 = (x217<=(x218-(x219%x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = -883;
	uint16_t x223 = 98U;
	int8_t x224 = INT8_MIN;
	int32_t t52 = -1;

	t52 = (x221<=(x222-(x223%x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 23U;
	volatile uint8_t x226 = 13U;
	int32_t t53 = 0;

	t53 = (x225<=(x226-(x227%x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -1;
	static int32_t x231 = INT32_MIN;
	int64_t x232 = -1LL;

	t54 = (x229<=(x230-(x231%x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = INT64_MIN;
	int64_t x235 = 993122304LL;
	int64_t x236 = -1LL;
	volatile int32_t t55 = -222660;

	t55 = (x233<=(x234-(x235%x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	int64_t x239 = 9244570215458006LL;
	volatile int32_t t56 = -55886;

	t56 = (x237<=(x238-(x239%x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x241 = UINT16_MAX;
	static int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t57 = 65319577;

	t57 = (x241<=(x242-(x243%x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x245 = 20128U;
	int8_t x246 = -3;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = -1920298LL;

	t58 = (x245<=(x246-(x247%x248)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 8723752777451121LLU;
	int64_t x250 = INT64_MIN;
	volatile int8_t x251 = INT8_MIN;
	volatile int16_t x252 = -15573;
	int32_t t59 = 2;

	t59 = (x249<=(x250-(x251%x252)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -114;
	uint64_t x254 = 0LLU;
	int16_t x255 = -1;
	volatile int8_t x256 = INT8_MIN;
	int32_t t60 = -75;

	t60 = (x253<=(x254-(x255%x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = INT8_MAX;
	uint16_t x258 = 13042U;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int32_t t61 = 6327;

	t61 = (x257<=(x258-(x259%x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = INT32_MIN;
	static int16_t x263 = -782;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t62 = 449;

	t62 = (x261<=(x262-(x263%x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	static int64_t x267 = 381416524948LL;
	uint16_t x268 = 40U;

	t63 = (x265<=(x266-(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 8U;
	uint32_t x272 = 2862U;
	static int32_t t64 = -894;

	t64 = (x269<=(x270-(x271%x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x278 = INT32_MAX;
	int8_t x280 = 41;
	volatile int32_t t65 = -13;

	t65 = (x277<=(x278-(x279%x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int32_t x282 = -16353606;
	int64_t x283 = INT64_MAX;

	t66 = (x281<=(x282-(x283%x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	static volatile int32_t t67 = -4677;

	t67 = (x285<=(x286-(x287%x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MAX;
	static int8_t x291 = 0;
	uint8_t x292 = 42U;

	t68 = (x289<=(x290-(x291%x292)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MAX;
	static uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = 7;
	int32_t t69 = -148;

	t69 = (x293<=(x294-(x295%x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = 3U;
	static int32_t x302 = INT32_MIN;
	static int16_t x303 = 14687;

	t70 = (x301<=(x302-(x303%x304)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x305 = -1003890455;
	static volatile int8_t x306 = 5;
	volatile int32_t t71 = -84336;

	t71 = (x305<=(x306-(x307%x308)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = 348140548619929555LL;
	volatile int32_t t72 = 48990709;

	t72 = (x309<=(x310-(x311%x312)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MAX;
	static int8_t x314 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	volatile int32_t t73 = 511964;

	t73 = (x313<=(x314-(x315%x316)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = 4880;
	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MAX;
	int32_t t74 = 79771887;

	t74 = (x321<=(x322-(x323%x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x325 = -1LL;
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MAX;
	volatile int32_t t75 = -5557458;

	t75 = (x325<=(x326-(x327%x328)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x329 = INT64_MAX;
	int8_t x331 = 18;
	static uint64_t x332 = 110492347074684692LLU;
	volatile int32_t t76 = 6230385;

	t76 = (x329<=(x330-(x331%x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = 15387525U;
	volatile int32_t x336 = -40526;

	t77 = (x333<=(x334-(x335%x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	int64_t x340 = -1LL;
	int32_t t78 = 155607;

	t78 = (x337<=(x338-(x339%x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x341 = UINT64_MAX;
	static uint16_t x342 = 31U;
	volatile int16_t x343 = -7938;
	int32_t x344 = INT32_MAX;
	static volatile int32_t t79 = -81082911;

	t79 = (x341<=(x342-(x343%x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x350 = 35307U;
	int8_t x351 = INT8_MAX;
	static uint32_t x352 = UINT32_MAX;

	t80 = (x349<=(x350-(x351%x352)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 154654U;
	static volatile uint16_t x354 = 7743U;
	int16_t x355 = -563;
	int16_t x356 = INT16_MAX;
	volatile int32_t t81 = -51;

	t81 = (x353<=(x354-(x355%x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x358 = -7283;
	static volatile uint32_t x359 = 444639U;
	int64_t x360 = 1219868LL;
	int32_t t82 = 32288;

	t82 = (x357<=(x358-(x359%x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x361 = 111U;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t83 = 6873;

	t83 = (x361<=(x362-(x363%x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x365 = UINT64_MAX;
	static uint64_t x366 = 28856072942637LLU;
	uint8_t x367 = 6U;
	uint8_t x368 = 43U;

	t84 = (x365<=(x366-(x367%x368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static uint64_t x371 = UINT64_MAX;
	static int32_t x372 = INT32_MIN;

	t85 = (x369<=(x370-(x371%x372)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = -1LL;
	uint32_t x374 = 31826U;
	int64_t x375 = -1LL;
	uint64_t x376 = 194LLU;

	t86 = (x373<=(x374-(x375%x376)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = 27LL;
	static int16_t x380 = -830;
	volatile int32_t t87 = 2601;

	t87 = (x377<=(x378-(x379%x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x381 = -4;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t88 = -781802681;

	t88 = (x381<=(x382-(x383%x384)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x386 = 436;
	static uint32_t x387 = UINT32_MAX;
	static int8_t x388 = INT8_MAX;

	t89 = (x385<=(x386-(x387%x388)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	static volatile int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t90 = -7;

	t90 = (x389<=(x390-(x391%x392)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = 421;
	static int8_t x395 = INT8_MIN;
	uint32_t x396 = 160023879U;
	int32_t t91 = -74;

	t91 = (x393<=(x394-(x395%x396)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x397 = 10775U;
	uint64_t x400 = UINT64_MAX;
	int32_t t92 = -2;

	t92 = (x397<=(x398-(x399%x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = -1;
	uint8_t x404 = 1U;
	volatile int32_t t93 = 239;

	t93 = (x401<=(x402-(x403%x404)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x405 = 0U;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;

	t94 = (x405<=(x406-(x407%x408)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = 0;
	int32_t x411 = 33383946;
	static int32_t t95 = -1;

	t95 = (x409<=(x410-(x411%x412)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -1;
	int16_t x414 = INT16_MIN;
	uint8_t x416 = 16U;
	int32_t t96 = -7668125;

	t96 = (x413<=(x414-(x415%x416)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = 477079;
	static int32_t x418 = -8;
	int8_t x420 = INT8_MAX;
	volatile int32_t t97 = 2881770;

	t97 = (x417<=(x418-(x419%x420)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x421 = INT8_MAX;
	static int32_t x422 = INT32_MIN;
	volatile int16_t x423 = INT16_MIN;
	static int64_t x424 = -1LL;
	int32_t t98 = -17505160;

	t98 = (x421<=(x422-(x423%x424)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x425 = UINT64_MAX;
	uint8_t x426 = UINT8_MAX;
	volatile int16_t x427 = -1;
	uint32_t x428 = 95220U;

	t99 = (x425<=(x426-(x427%x428)));

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

