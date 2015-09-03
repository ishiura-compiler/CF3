#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = INT16_MIN;
volatile int32_t t3 = 232111;
volatile int32_t t4 = 282901;
int64_t x38 = -28703LL;
static uint16_t x46 = UINT16_MAX;
static int32_t x47 = -1;
uint16_t x52 = 94U;
uint64_t x53 = 4559720993250859287LLU;
static int32_t x54 = -1;
static uint32_t x56 = 21043779U;
int32_t t10 = 14340240;
static volatile int64_t x65 = INT64_MAX;
uint16_t x67 = 1228U;
uint64_t x70 = 7100736851900862786LLU;
volatile int8_t x71 = -2;
volatile int32_t x79 = 0;
int32_t x87 = 23;
uint64_t x88 = 3LLU;
static int16_t x90 = -6;
uint32_t x99 = UINT32_MAX;
static uint32_t x106 = 7556844U;
int16_t x107 = 10591;
static int16_t x108 = -1;
volatile uint64_t x110 = UINT64_MAX;
int8_t x115 = -1;
static int8_t x119 = INT8_MIN;
int16_t x129 = -1;
uint64_t x134 = UINT64_MAX;
static uint8_t x149 = 6U;
uint32_t x152 = 46194U;
volatile uint64_t x153 = 252706LLU;
uint8_t x157 = 0U;
volatile int32_t x161 = INT32_MAX;
volatile int16_t x164 = INT16_MIN;
uint16_t x167 = 8U;
int8_t x175 = INT8_MIN;
volatile int32_t t32 = -4056;
int64_t x185 = INT64_MIN;
int8_t x187 = -24;
static int32_t t34 = -11;
static int32_t x191 = -1;
static volatile int32_t t35 = 59;
static int8_t x193 = INT8_MIN;
uint8_t x195 = UINT8_MAX;
int32_t x196 = INT32_MIN;
volatile int32_t t36 = -111933;
uint64_t x199 = 528975565826774106LLU;
int32_t x200 = INT32_MIN;
uint32_t x202 = 354587U;
uint16_t x206 = 22481U;
volatile uint16_t x223 = UINT16_MAX;
uint32_t x235 = UINT32_MAX;
uint8_t x239 = 1U;
volatile int8_t x248 = -22;
int32_t t47 = -848;
int8_t x249 = INT8_MIN;
static uint16_t x271 = 8037U;
int16_t x274 = INT16_MIN;
int32_t x278 = 11;
uint16_t x280 = 997U;
int32_t t55 = -807856;
static volatile uint64_t x285 = 15591LLU;
volatile int8_t x286 = 1;
uint16_t x291 = 290U;
volatile int8_t x296 = INT8_MIN;
int32_t t60 = -210;
static int16_t x316 = 138;
int32_t x320 = INT32_MIN;
volatile int32_t t64 = 1752;
int8_t x327 = -1;
int16_t x328 = -13;
volatile int32_t t67 = 218593;
static int8_t x351 = -1;
int16_t x353 = INT16_MIN;
static uint64_t x355 = 233121827430012753LLU;
volatile int8_t x364 = -1;
volatile int32_t t71 = -248294837;
int16_t x369 = INT16_MAX;
int8_t x372 = INT8_MAX;
int8_t x373 = 9;
uint8_t x376 = 13U;
volatile int32_t t74 = -1;
int32_t t75 = 182;
static int64_t x385 = INT64_MIN;
volatile int32_t x392 = INT32_MIN;
uint16_t x393 = 2018U;
int32_t t78 = 15;
volatile int32_t x398 = -1;
uint64_t x399 = 8633288046617045LLU;
int16_t x406 = 2498;
uint8_t x412 = 7U;
int32_t t82 = -16573;
int32_t x415 = -1156110;
int32_t x419 = INT32_MIN;
volatile int32_t x420 = 9670612;
int16_t x421 = INT16_MIN;
int8_t x422 = -6;
uint16_t x425 = 31828U;
int16_t x428 = -2305;
int64_t x438 = INT64_MIN;
volatile int32_t t88 = -717;
uint32_t x449 = 12U;
volatile int16_t x450 = -2;
int8_t x456 = INT8_MAX;
int32_t t93 = -45170;
int64_t x490 = -1369353LL;
static int64_t x493 = INT64_MAX;
uint8_t x494 = 114U;
int64_t x496 = INT64_MAX;
uint8_t x498 = 0U;
int32_t x499 = INT32_MIN;


void f0(void) {
	volatile uint64_t x9 = 9216081634514705LLU;
	volatile uint64_t x10 = 561491822908334547LLU;
	uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 10738U;
	int32_t t0 = 38704832;

	t0 = (x9==((x10*x11)<x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -87803965LL;
	int32_t x18 = -11978651;
	uint8_t x19 = 2U;
	volatile int32_t t1 = 1057616947;

	t1 = (x17==((x18*x19)<x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MAX;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	static uint64_t x24 = 22668699375224200LLU;
	volatile int32_t t2 = 25705691;

	t2 = (x21==((x22*x23)<x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = -303;
	int64_t x27 = 2369848LL;
	int8_t x28 = INT8_MAX;

	t3 = (x25==((x26*x27)<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 5974364U;
	static volatile int16_t x34 = INT16_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = INT32_MIN;

	t4 = (x33==((x34*x35)<x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -2;
	uint8_t x39 = 0U;
	int8_t x40 = -1;
	int32_t t5 = 7;

	t5 = (x37==((x38*x39)<x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x41 = -1;
	uint32_t x42 = 99446487U;
	int32_t x43 = -1;
	static int8_t x44 = -1;
	int32_t t6 = 0;

	t6 = (x41==((x42*x43)<x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int64_t x48 = -1LL;
	volatile int32_t t7 = 1;

	t7 = (x45==((x46*x47)<x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = -1;
	int16_t x50 = INT16_MAX;
	volatile int16_t x51 = INT16_MIN;
	int32_t t8 = 14500813;

	t8 = (x49==((x50*x51)<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x55 = -66253726;
	int32_t t9 = -15320;

	t9 = (x53==((x54*x55)<x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 1582088U;
	int16_t x58 = -9743;
	int8_t x59 = 4;
	int32_t x60 = 1;

	t10 = (x57==((x58*x59)<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x61 = -1;
	int8_t x62 = -4;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = -1;
	volatile int32_t t11 = 51504974;

	t11 = (x61==((x62*x63)<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x66 = UINT64_MAX;
	volatile int32_t x68 = -1;
	int32_t t12 = -410;

	t12 = (x65==((x66*x67)<x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	int8_t x72 = -5;
	volatile int32_t t13 = 0;

	t13 = (x69==((x70*x71)<x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = 0;
	static volatile int8_t x78 = INT8_MAX;
	static int64_t x80 = INT64_MIN;
	int32_t t14 = 193;

	t14 = (x77==((x78*x79)<x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x85 = UINT32_MAX;
	uint32_t x86 = UINT32_MAX;
	volatile int32_t t15 = 3;

	t15 = (x85==((x86*x87)<x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = INT32_MIN;
	int16_t x91 = 955;
	int32_t x92 = -1;
	volatile int32_t t16 = 192537096;

	t16 = (x89==((x90*x91)<x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = 4675U;
	int32_t x98 = -1;
	int32_t x100 = 2806463;
	int32_t t17 = 4;

	t17 = (x97==((x98*x99)<x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = -1LL;
	static volatile int64_t x103 = -3761706762244540112LL;
	int32_t x104 = INT32_MAX;
	static int32_t t18 = -60414;

	t18 = (x101==((x102*x103)<x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = 2485LL;
	int32_t t19 = 133;

	t19 = (x105==((x106*x107)<x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	int32_t x112 = -1;
	static volatile int32_t t20 = 187;

	t20 = (x109==((x110*x111)<x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -642;
	uint8_t x114 = UINT8_MAX;
	int8_t x116 = -3;
	int32_t t21 = -47231436;

	t21 = (x113==((x114*x115)<x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x117 = 7U;
	uint16_t x118 = 2U;
	uint8_t x120 = 1U;
	volatile int32_t t22 = -23;

	t22 = (x117==((x118*x119)<x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -665713181LL;
	int32_t t23 = -47787;

	t23 = (x129==((x130*x131)<x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = -1463087064643963LL;
	int16_t x135 = -1;
	static volatile int64_t x136 = INT64_MIN;
	int32_t t24 = -474;

	t24 = (x133==((x134*x135)<x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = -1LL;
	volatile int16_t x138 = -1;
	static volatile int32_t x139 = INT32_MAX;
	static int64_t x140 = -1LL;
	static int32_t t25 = 59;

	t25 = (x137==((x138*x139)<x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x146 = INT32_MIN;
	static int64_t x147 = 330960381LL;
	int8_t x148 = 1;
	volatile int32_t t26 = 2;

	t26 = (x145==((x146*x147)<x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x150 = INT32_MIN;
	uint32_t x151 = UINT32_MAX;
	int32_t t27 = 387405;

	t27 = (x149==((x150*x151)<x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x154 = 32469468795LLU;
	volatile int32_t x155 = INT32_MIN;
	volatile uint16_t x156 = 7682U;
	int32_t t28 = 474761;

	t28 = (x153==((x154*x155)<x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	volatile int16_t x160 = INT16_MAX;
	int32_t t29 = 1012575881;

	t29 = (x157==((x158*x159)<x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x162 = 145U;
	uint64_t x163 = 3003987574668080LLU;
	static volatile int32_t t30 = -44514;

	t30 = (x161==((x162*x163)<x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x165 = 10U;
	int8_t x166 = -1;
	uint64_t x168 = UINT64_MAX;
	static volatile int32_t t31 = 127910;

	t31 = (x165==((x166*x167)<x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = -1;
	static int16_t x174 = INT16_MIN;
	static int16_t x176 = INT16_MIN;

	t32 = (x173==((x174*x175)<x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x177 = INT8_MAX;
	static int16_t x178 = INT16_MIN;
	uint8_t x179 = 24U;
	int8_t x180 = INT8_MIN;
	int32_t t33 = -398908594;

	t33 = (x177==((x178*x179)<x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x186 = INT8_MAX;
	int16_t x188 = 5;

	t34 = (x185==((x186*x187)<x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = 191121209LL;
	static volatile uint64_t x190 = 1460LLU;
	int64_t x192 = INT64_MAX;

	t35 = (x189==((x190*x191)<x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x194 = 100;

	t36 = (x193==((x194*x195)<x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x197 = -3;
	int16_t x198 = -1;
	volatile int32_t t37 = -4976;

	t37 = (x197==((x198*x199)<x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = 42LLU;
	int32_t x203 = -1;
	volatile int16_t x204 = INT16_MIN;
	static int32_t t38 = -12310902;

	t38 = (x201==((x202*x203)<x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	int16_t x207 = 3607;
	int16_t x208 = -1;
	volatile int32_t t39 = -9468475;

	t39 = (x205==((x206*x207)<x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile int8_t x214 = -5;
	static int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t40 = 6;

	t40 = (x213==((x214*x215)<x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int64_t x224 = -151899LL;
	int32_t t41 = 4525;

	t41 = (x221==((x222*x223)<x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	int32_t x227 = -45844139;
	static int8_t x228 = -5;
	volatile int32_t t42 = -84776;

	t42 = (x225==((x226*x227)<x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	int64_t x232 = 699385440LL;
	static int32_t t43 = -720168;

	t43 = (x229==((x230*x231)<x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x233 = 2U;
	uint16_t x234 = 50U;
	uint8_t x236 = 115U;
	volatile int32_t t44 = 563148;

	t44 = (x233==((x234*x235)<x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x237 = 2452643LLU;
	static uint64_t x238 = 2917994985LLU;
	volatile uint64_t x240 = UINT64_MAX;
	volatile int32_t t45 = 10;

	t45 = (x237==((x238*x239)<x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1LL;
	int64_t x243 = 285124331256980858LL;
	uint64_t x244 = 103705708178117LLU;
	int32_t t46 = -115;

	t46 = (x241==((x242*x243)<x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = -2;
	uint32_t x247 = 251963091U;

	t47 = (x245==((x246*x247)<x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x250 = INT16_MAX;
	uint32_t x251 = 1014196077U;
	static int64_t x252 = INT64_MAX;
	volatile int32_t t48 = 74038;

	t48 = (x249==((x250*x251)<x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = INT32_MIN;
	static volatile uint16_t x254 = 865U;
	int8_t x255 = -1;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t49 = 26902557;

	t49 = (x253==((x254*x255)<x256));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = -14414719;
	uint32_t x258 = 1U;
	volatile int32_t x259 = -3;
	int64_t x260 = INT64_MAX;
	int32_t t50 = 113129;

	t50 = (x257==((x258*x259)<x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = 22958116U;
	volatile uint16_t x262 = 11U;
	uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;
	int32_t t51 = 13996414;

	t51 = (x261==((x262*x263)<x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x265 = 10;
	int8_t x266 = INT8_MAX;
	uint16_t x267 = 13U;
	int16_t x268 = -22;
	int32_t t52 = -175;

	t52 = (x265==((x266*x267)<x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x269 = 524641U;
	int32_t x270 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t53 = -1454068;

	t53 = (x269==((x270*x271)<x272));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x273 = 71U;
	static volatile int8_t x275 = INT8_MIN;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t54 = 312;

	t54 = (x273==((x274*x275)<x276));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = -16204;
	uint32_t x279 = 2140U;

	t55 = (x277==((x278*x279)<x280));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MAX;
	int64_t x284 = INT64_MAX;
	static int32_t t56 = 64356679;

	t56 = (x281==((x282*x283)<x284));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x287 = 886337440555305894LLU;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t57 = -3;

	t57 = (x285==((x286*x287)<x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x289 = -1232;
	int8_t x290 = -1;
	static volatile int32_t x292 = -114639;
	volatile int32_t t58 = 7739526;

	t58 = (x289==((x290*x291)<x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = 431U;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = 376999825LL;
	static int32_t t59 = -377150;

	t59 = (x293==((x294*x295)<x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x297 = INT8_MAX;
	int8_t x298 = 1;
	volatile uint8_t x299 = 29U;
	int16_t x300 = -155;

	t60 = (x297==((x298*x299)<x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	uint32_t x311 = 13365001U;
	static int64_t x312 = INT64_MIN;
	int32_t t61 = -30786169;

	t61 = (x309==((x310*x311)<x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x313 = UINT8_MAX;
	static int8_t x314 = 4;
	volatile int32_t x315 = -4074;
	static volatile int32_t t62 = 11095798;

	t62 = (x313==((x314*x315)<x316));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x317 = 7U;
	static volatile uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	int32_t t63 = 1042191951;

	t63 = (x317==((x318*x319)<x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = 2776053230158280LL;
	int8_t x322 = 0;
	volatile uint32_t x323 = 28346749U;
	uint32_t x324 = 1U;

	t64 = (x321==((x322*x323)<x324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x325 = 3U;
	volatile uint32_t x326 = UINT32_MAX;
	int32_t t65 = 477203;

	t65 = (x325==((x326*x327)<x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x329 = 26216693572LLU;
	static uint8_t x330 = 1U;
	int64_t x331 = -1LL;
	static int64_t x332 = 522699933658LL;
	volatile int32_t t66 = 2;

	t66 = (x329==((x330*x331)<x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = 13;
	static uint64_t x338 = UINT64_MAX;
	static int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;

	t67 = (x337==((x338*x339)<x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	volatile int8_t x342 = 0;
	volatile int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t68 = -1069984;

	t68 = (x341==((x342*x343)<x344));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x349 = INT8_MIN;
	int16_t x350 = 1;
	uint16_t x352 = 722U;
	static volatile int32_t t69 = -22912154;

	t69 = (x349==((x350*x351)<x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x354 = INT32_MIN;
	uint64_t x356 = 4512472640796LLU;
	static volatile int32_t t70 = 370;

	t70 = (x353==((x354*x355)<x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x361 = -11240;
	uint64_t x362 = 6937LLU;
	uint64_t x363 = 936LLU;

	t71 = (x361==((x362*x363)<x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x365 = INT32_MAX;
	static int64_t x366 = 12565LL;
	int32_t x367 = INT32_MAX;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t72 = -1;

	t72 = (x365==((x366*x367)<x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x370 = 3308U;
	static int8_t x371 = INT8_MAX;
	volatile int32_t t73 = -565204;

	t73 = (x369==((x370*x371)<x372));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x374 = -11LL;
	uint8_t x375 = UINT8_MAX;

	t74 = (x373==((x374*x375)<x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile int32_t x378 = INT32_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	static volatile int64_t x380 = -523326098126LL;

	t75 = (x377==((x378*x379)<x380));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x386 = -1;
	static volatile int64_t x387 = INT64_MAX;
	uint8_t x388 = 0U;
	volatile int32_t t76 = 10422;

	t76 = (x385==((x386*x387)<x388));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	volatile int16_t x391 = INT16_MIN;
	volatile int32_t t77 = 0;

	t77 = (x389==((x390*x391)<x392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x394 = 12U;
	int64_t x395 = -3606LL;
	int8_t x396 = -31;

	t78 = (x393==((x394*x395)<x396));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x397 = INT64_MAX;
	volatile uint16_t x400 = 3865U;
	volatile int32_t t79 = 22411;

	t79 = (x397==((x398*x399)<x400));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x401 = 43428118U;
	int32_t x402 = 746;
	int16_t x403 = 0;
	uint32_t x404 = 1818945U;
	volatile int32_t t80 = -4182;

	t80 = (x401==((x402*x403)<x404));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x405 = 264518712U;
	static int64_t x407 = -886LL;
	static volatile int64_t x408 = -1LL;
	volatile int32_t t81 = 5;

	t81 = (x405==((x406*x407)<x408));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x409 = 27U;
	volatile uint64_t x410 = 4162096094048201362LLU;
	uint8_t x411 = UINT8_MAX;

	t82 = (x409==((x410*x411)<x412));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x413 = -47;
	int8_t x414 = INT8_MIN;
	uint16_t x416 = 701U;
	int32_t t83 = 0;

	t83 = (x413==((x414*x415)<x416));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = -1;
	uint64_t x418 = 10109LLU;
	int32_t t84 = 1641889;

	t84 = (x417==((x418*x419)<x420));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x423 = INT8_MAX;
	uint64_t x424 = 43225129785475072LLU;
	volatile int32_t t85 = -63473;

	t85 = (x421==((x422*x423)<x424));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x426 = 46LLU;
	uint16_t x427 = 8419U;
	volatile int32_t t86 = -3;

	t86 = (x425==((x426*x427)<x428));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x429 = 4;
	volatile int8_t x430 = INT8_MIN;
	static int8_t x431 = 9;
	uint16_t x432 = 9U;
	volatile int32_t t87 = -9;

	t87 = (x429==((x430*x431)<x432));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x437 = -1LL;
	uint8_t x439 = 0U;
	static int64_t x440 = INT64_MAX;

	t88 = (x437==((x438*x439)<x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x441 = INT8_MAX;
	int8_t x442 = -1;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MAX;
	static int32_t t89 = -4462;

	t89 = (x441==((x442*x443)<x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x451 = UINT8_MAX;
	volatile int8_t x452 = INT8_MAX;
	int32_t t90 = 3424653;

	t90 = (x449==((x450*x451)<x452));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = 0U;
	int64_t x455 = INT64_MIN;
	volatile int32_t t91 = 63743898;

	t91 = (x453==((x454*x455)<x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x457 = -1;
	uint8_t x458 = 12U;
	volatile uint16_t x459 = UINT16_MAX;
	int8_t x460 = -1;
	int32_t t92 = -3779;

	t92 = (x457==((x458*x459)<x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x461 = -2;
	static int8_t x462 = 2;
	static int32_t x463 = 2034;
	int64_t x464 = INT64_MIN;

	t93 = (x461==((x462*x463)<x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x465 = 56LLU;
	int16_t x466 = INT16_MIN;
	int16_t x467 = -1;
	int64_t x468 = -8866449976435LL;
	volatile int32_t t94 = 535;

	t94 = (x465==((x466*x467)<x468));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x469 = -1LL;
	static int32_t x470 = 1603644;
	uint64_t x471 = 30LLU;
	int8_t x472 = -1;
	int32_t t95 = -168;

	t95 = (x469==((x470*x471)<x472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x485 = 55726011LLU;
	int8_t x486 = INT8_MIN;
	static int16_t x487 = INT16_MIN;
	uint32_t x488 = 922886U;
	volatile int32_t t96 = -847;

	t96 = (x485==((x486*x487)<x488));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x489 = INT32_MIN;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MIN;
	int32_t t97 = 1;

	t97 = (x489==((x490*x491)<x492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x495 = -1;
	volatile int32_t t98 = -1494;

	t98 = (x493==((x494*x495)<x496));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x497 = UINT64_MAX;
	int64_t x500 = INT64_MIN;
	int32_t t99 = 213347229;

	t99 = (x497==((x498*x499)<x500));

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

