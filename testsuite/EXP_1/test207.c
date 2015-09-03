#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile uint16_t x7 = 3837U;
volatile int64_t t1 = 1LL;
int16_t x10 = -14759;
int8_t x32 = -1;
int8_t x33 = -17;
uint32_t x39 = 308134494U;
int16_t x42 = INT16_MAX;
uint32_t x55 = 838U;
static int16_t x61 = INT16_MIN;
volatile int32_t t10 = -3321;
uint16_t x66 = UINT16_MAX;
volatile int8_t x68 = INT8_MIN;
static int8_t x71 = 0;
volatile int32_t t15 = -47946290;
volatile int32_t x97 = -1;
uint8_t x103 = 6U;
int32_t t17 = -3366;
uint16_t x106 = UINT16_MAX;
uint64_t x107 = UINT64_MAX;
uint64_t t18 = UINT64_MAX;
static volatile uint8_t x118 = UINT8_MAX;
int32_t x124 = INT32_MIN;
int8_t x125 = INT8_MAX;
volatile uint32_t t22 = 3293431U;
static uint64_t x151 = 32943LLU;
static int16_t x155 = -1;
static int8_t x157 = INT8_MIN;
int64_t x160 = INT64_MIN;
volatile int64_t t27 = 68678266263LL;
volatile uint64_t x163 = UINT64_MAX;
volatile uint64_t t28 = UINT64_MAX;
int64_t x165 = 28126502601838279LL;
static uint16_t x170 = UINT16_MAX;
volatile int32_t t30 = -1299211;
uint16_t x181 = 13628U;
volatile uint32_t t31 = UINT32_MAX;
uint16_t x194 = 25191U;
uint32_t x196 = UINT32_MAX;
int16_t x198 = INT16_MAX;
int8_t x199 = INT8_MAX;
static uint32_t x215 = 807953U;
uint64_t x216 = UINT64_MAX;
uint8_t x217 = UINT8_MAX;
uint16_t x220 = 656U;
volatile int8_t x226 = INT8_MIN;
int64_t t41 = -3006966140LL;
int32_t x248 = INT32_MIN;
volatile uint32_t t43 = 57U;
static volatile uint8_t x255 = 14U;
static uint32_t x259 = 30793U;
uint32_t t45 = 0U;
int64_t x275 = INT64_MAX;
uint32_t x278 = 4080U;
volatile uint32_t t47 = 1267U;
int64_t t48 = -11107258460685536LL;
int8_t x285 = INT8_MIN;
uint32_t t49 = UINT32_MAX;
uint32_t x290 = UINT32_MAX;
static volatile uint32_t t50 = 5494U;
int8_t x293 = 6;
int16_t x295 = -1;
uint32_t t53 = 129829U;
int64_t x316 = INT64_MIN;
volatile int64_t t55 = 133830097604843847LL;
int32_t x319 = -1;
int16_t x330 = INT16_MIN;
static uint64_t t58 = 90LLU;
static int16_t x341 = INT16_MIN;
static uint64_t t59 = UINT64_MAX;
uint64_t x356 = 410LLU;
volatile uint64_t t61 = 3895LLU;
int16_t x359 = -850;
static volatile int8_t x360 = 6;
static volatile uint32_t x365 = UINT32_MAX;
static uint64_t x367 = 5146504618232690LLU;
uint64_t x370 = 589908LLU;
uint32_t x375 = 707510407U;
int64_t x377 = -870208LL;
static int64_t t67 = -9002552153761204LL;
int8_t x387 = 2;
int16_t x396 = 18;
volatile uint8_t x401 = 48U;
volatile int64_t t72 = -364479456821589LL;
uint64_t x423 = 387190327899277435LLU;
uint64_t x434 = 51129886281077562LLU;
volatile uint64_t t75 = 12777228902LLU;
volatile uint16_t x441 = 16007U;
int8_t x452 = 1;
static volatile int32_t t78 = -14424;
volatile int16_t x457 = INT16_MAX;
int32_t x467 = 59134;
uint16_t x471 = 14U;
uint64_t t82 = UINT64_MAX;
volatile int8_t x488 = INT8_MIN;
volatile int8_t x491 = -7;
static uint64_t t86 = UINT64_MAX;
uint16_t x498 = 1U;
uint32_t x507 = UINT32_MAX;
static int16_t x508 = -125;
uint32_t t89 = 14162U;
static uint32_t x517 = 176280U;
int8_t x521 = INT8_MIN;
int8_t x537 = -1;
int16_t x538 = -1292;
static int32_t x559 = 2579;
volatile uint32_t t97 = 926867U;
int64_t x562 = 107LL;
static volatile int16_t x564 = INT16_MIN;


void f0(void) {
	int32_t x1 = -8;
	int64_t x2 = INT64_MIN;
	volatile int8_t x4 = INT8_MAX;
	uint64_t t0 = 4566729873844669LLU;

	t0 = (((x1-x2)*x3)|x4);

	if (t0 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	int64_t x6 = 20205149281475LL;
	static int8_t x8 = 1;

	t1 = (((x5-x6)*x7)|x8);

	if (t1 != -77527157793023411LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x11 = -1;
	static int64_t x12 = -1LL;
	int64_t t2 = 3LL;

	t2 = (((x9-x10)*x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 57621U;
	uint32_t x18 = 87438657U;
	int32_t x19 = INT32_MAX;
	static int8_t x20 = -1;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (((x17-x18)*x19)|x20);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = UINT16_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x29-x30)*x31)|x32);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = -1;
	int32_t x35 = -1;
	volatile int64_t x36 = INT64_MIN;
	int64_t t5 = -210LL;

	t5 = (((x33-x34)*x35)|x36);

	if (t5 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 76U;
	static uint16_t x38 = 4209U;
	uint8_t x40 = 5U;
	volatile uint32_t t6 = 4U;

	t6 = (((x37-x38)*x39)|x40);

	if (t6 != 2085423215U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = -1;
	int64_t x43 = -1LL;
	static int64_t x44 = 30811403755LL;
	int64_t t7 = 41240360LL;

	t7 = (((x41-x42)*x43)|x44);

	if (t7 != 30811403755LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = INT16_MIN;
	volatile int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 252581238U;
	static volatile uint32_t t8 = 972063U;

	t8 = (((x49-x50)*x51)|x52);

	if (t8 != 1070470518U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	static int32_t x54 = -1;
	static uint16_t x56 = 19184U;
	uint32_t t9 = 24U;

	t9 = (((x53-x54)*x55)|x56);

	if (t9 != 27478768U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x62 = 40U;
	int32_t x63 = -1;
	int32_t x64 = 2006000;

	t10 = (((x61-x62)*x63)|x64);

	if (t10 != 2006008) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = INT16_MAX;
	uint32_t x67 = 333U;
	static volatile uint32_t t11 = 160134683U;

	t11 = (((x65-x66)*x67)|x68);

	if (t11 != 4294967168U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int8_t x70 = INT8_MAX;
	int64_t x72 = INT64_MIN;
	uint64_t t12 = 265606301712006087LLU;

	t12 = (((x69-x70)*x71)|x72);

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = 1U;
	uint32_t x79 = 25140U;
	static int64_t x80 = -1LL;
	int64_t t13 = -307553844842LL;

	t13 = (((x77-x78)*x79)|x80);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1LL;
	int64_t x82 = INT64_MIN;
	int8_t x83 = 1;
	uint32_t x84 = UINT32_MAX;
	static int64_t t14 = INT64_MAX;

	t14 = (((x81-x82)*x83)|x84);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = 1;
	uint8_t x92 = 26U;

	t15 = (((x89-x90)*x91)|x92);

	if (t15 != -2147483494) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x98 = INT16_MIN;
	static int8_t x99 = -1;
	int32_t x100 = -381939299;
	static volatile int32_t t16 = -443;

	t16 = (((x97-x98)*x99)|x100);

	if (t16 != -28259) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = 17U;
	int8_t x102 = 12;
	volatile int16_t x104 = INT16_MIN;

	t17 = (((x101-x102)*x103)|x104);

	if (t17 != -32738) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MIN;
	int8_t x108 = INT8_MIN;

	t18 = (((x105-x106)*x107)|x108);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -59233LL;
	int64_t x112 = -39073286829588LL;
	volatile int64_t t19 = -2LL;

	t19 = (((x109-x110)*x111)|x112);

	if (t19 != -38661107732LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 777603760LLU;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -24;
	uint64_t t20 = 0LLU;

	t20 = (((x117-x118)*x119)|x120);

	if (t20 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x121 = -1LL;
	uint16_t x122 = 212U;
	volatile uint64_t x123 = 123902852LLU;
	volatile uint64_t t21 = 27764951924LLU;

	t21 = (((x121-x122)*x123)|x124);

	if (t21 != 18446744073088047916LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x126 = INT16_MIN;
	static uint32_t x127 = UINT32_MAX;
	volatile int32_t x128 = INT32_MIN;

	t22 = (((x125-x126)*x127)|x128);

	if (t22 != 4294934401U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	uint8_t x131 = 3U;
	int64_t x132 = INT64_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (((x129-x130)*x131)|x132);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = -19;
	volatile int32_t t24 = -115001;

	t24 = (((x133-x134)*x135)|x136);

	if (t24 != -19) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x149 = INT8_MAX;
	volatile uint64_t x150 = UINT64_MAX;
	volatile int16_t x152 = -1;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x149-x150)*x151)|x152);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	volatile int32_t x156 = -1;
	volatile int64_t t26 = -13931247087LL;

	t26 = (((x153-x154)*x155)|x156);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x158 = INT8_MAX;
	int32_t x159 = -1;

	t27 = (((x157-x158)*x159)|x160);

	if (t27 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	int32_t x164 = -1;

	t28 = (((x161-x162)*x163)|x164);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x166 = 556U;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MAX;
	volatile int64_t t29 = 57LL;

	t29 = (((x165-x166)*x167)|x168);

	if (t29 != -3600192332269355009LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x169 = INT16_MIN;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;

	t30 = (((x169-x170)*x171)|x172);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x182 = INT8_MAX;
	static uint16_t x183 = 493U;
	uint32_t x184 = UINT32_MAX;

	t31 = (((x181-x182)*x183)|x184);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x185 = -1;
	volatile uint32_t x186 = 1U;
	static uint8_t x187 = 2U;
	static volatile uint32_t x188 = 87901U;
	static uint32_t t32 = 477660516U;

	t32 = (((x185-x186)*x187)|x188);

	if (t32 != 4294967293U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 14U;
	volatile uint32_t t33 = 60425846U;

	t33 = (((x189-x190)*x191)|x192);

	if (t33 != 14U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x193 = 2LLU;
	static int64_t x195 = INT64_MAX;
	uint64_t t34 = 1131039714676554LLU;

	t34 = (((x193-x194)*x195)|x196);

	if (t34 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 1573U;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t35 = 563;

	t35 = (((x197-x198)*x199)|x200);

	if (t35 != -3932161) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static uint16_t x202 = 5U;
	volatile int64_t x203 = -1LL;
	uint8_t x204 = 7U;
	uint64_t t36 = 9206048491713LLU;

	t36 = (((x201-x202)*x203)|x204);

	if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x209 = 11U;
	volatile uint64_t x210 = 1LLU;
	int8_t x211 = 14;
	uint64_t x212 = 110689899660736LLU;
	volatile uint64_t t37 = 3197127550884386LLU;

	t37 = (((x209-x210)*x211)|x212);

	if (t37 != 110689899660748LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x213 = 154U;
	static int32_t x214 = INT32_MIN;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x213-x214)*x215)|x216);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x218 = UINT16_MAX;
	volatile int16_t x219 = -1;
	volatile int32_t t39 = 2003800;

	t39 = (((x217-x218)*x219)|x220);

	if (t39 != 65424) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = -1;
	static int16_t x227 = -3422;
	uint64_t x228 = 17635082LLU;
	volatile uint64_t t40 = 281165LLU;

	t40 = (((x225-x226)*x227)|x228);

	if (t40 != 18446744073709379422LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x233 = 22U;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = 3LL;
	int8_t x236 = INT8_MIN;

	t41 = (((x233-x234)*x235)|x236);

	if (t41 != -59LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x237 = 0U;
	int16_t x238 = -1;
	uint64_t x239 = 3052579333481LLU;
	uint64_t x240 = 883902939675119216LLU;
	uint64_t t42 = 731222845954699LLU;

	t42 = (((x237-x238)*x239)|x240);

	if (t42 != 883905983207337849LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x245 = UINT32_MAX;
	volatile uint32_t x246 = 2120450191U;
	volatile uint16_t x247 = UINT16_MAX;

	t43 = (((x245-x246)*x247)|x248);

	if (t43 != 4258496656U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x253 = 17470LLU;
	static int16_t x254 = INT16_MAX;
	int8_t x256 = -1;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (((x253-x254)*x255)|x256);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = 1U;
	volatile uint16_t x258 = UINT16_MAX;
	int32_t x260 = INT32_MIN;

	t45 = (((x257-x258)*x259)|x260);

	if (t45 != 2276978834U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x273 = 12320117LLU;
	int16_t x274 = -10;
	static int32_t x276 = -81394;
	volatile uint64_t t46 = 45035LLU;

	t46 = (((x273-x274)*x275)|x276);

	if (t46 != 18446744073709470351LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x279 = INT16_MAX;
	volatile int16_t x280 = INT16_MAX;

	t47 = (((x277-x278)*x279)|x280);

	if (t47 != 2013724671U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = -1;
	static volatile int32_t x282 = -11777;
	int8_t x283 = -26;
	int64_t x284 = 111484770527832003LL;

	t48 = (((x281-x282)*x283)|x284);

	if (t48 != -34877LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x286 = -1;
	uint8_t x287 = 26U;
	static uint32_t x288 = UINT32_MAX;

	t49 = (((x285-x286)*x287)|x288);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x289 = -457431;
	static uint8_t x291 = 7U;
	static volatile uint16_t x292 = UINT16_MAX;

	t50 = (((x289-x290)*x291)|x292);

	if (t50 != 4291821567U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x294 = 1;
	int16_t x296 = INT16_MAX;
	int32_t t51 = -5391;

	t51 = (((x293-x294)*x295)|x296);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x301 = 793867213848853LLU;
	static volatile int8_t x302 = INT8_MIN;
	volatile int8_t x303 = 43;
	int64_t x304 = INT64_MIN;
	uint64_t t52 = 17822056782779LLU;

	t52 = (((x301-x302)*x303)|x304);

	if (t52 != 9257508327050281991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = UINT16_MAX;

	t53 = (((x305-x306)*x307)|x308);

	if (t53 != 2147549183U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x309 = INT16_MIN;
	int64_t x310 = -10LL;
	static volatile int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MIN;
	volatile int64_t t54 = -7666117LL;

	t54 = (((x309-x310)*x311)|x312);

	if (t54 != -1280LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x313 = -1;
	volatile uint8_t x314 = UINT8_MAX;
	volatile int16_t x315 = INT16_MIN;

	t55 = (((x313-x314)*x315)|x316);

	if (t55 != -9223372036846387200LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x317 = 6U;
	uint64_t x318 = 513006749LLU;
	static volatile int16_t x320 = INT16_MIN;
	uint64_t t56 = 194047556121723LLU;

	t56 = (((x317-x318)*x319)|x320);

	if (t56 != 18446744073709542551LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int8_t x331 = -7;
	int16_t x332 = -8;
	uint64_t t57 = UINT64_MAX;

	t57 = (((x329-x330)*x331)|x332);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x333 = 3U;
	volatile int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = 17978U;
	uint64_t x336 = 5239798812656986LLU;

	t58 = (((x333-x334)*x335)|x336);

	if (t58 != 5239798830585854LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x342 = UINT64_MAX;
	volatile uint32_t x343 = 8027721U;
	int64_t x344 = -1LL;

	t59 = (((x341-x342)*x343)|x344);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x349 = UINT64_MAX;
	static uint8_t x350 = 17U;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = -65189LL;
	uint64_t t60 = 4953494110340818LLU;

	t60 = (((x349-x350)*x351)|x352);

	if (t60 != 18446744073709547355LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = INT32_MIN;
	static int8_t x354 = -1;
	uint64_t x355 = UINT64_MAX;

	t61 = (((x353-x354)*x355)|x356);

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = 2973U;
	int16_t x358 = INT16_MIN;
	static int32_t t62 = -87;

	t62 = (((x357-x358)*x359)|x360);

	if (t62 != -30379850) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x361 = 1491026885976108070LLU;
	int16_t x362 = -2671;
	volatile uint8_t x363 = 45U;
	int8_t x364 = -8;
	volatile uint64_t t63 = 173676978354674569LLU;

	t63 = (((x361-x362)*x363)|x364);

	if (t63 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x366 = 4;
	static uint16_t x368 = 2U;
	volatile uint64_t t64 = 1004422720896839180LLU;

	t64 = (((x365-x366)*x367)|x368);

	if (t64 != 18104294417328899782LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x369 = -1;
	static int64_t x371 = INT64_MIN;
	int32_t x372 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x369-x370)*x371)|x372);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x373 = 0U;
	volatile int64_t x374 = -14LL;
	int32_t x376 = 12;
	static int64_t t66 = -6624770943123LL;

	t66 = (((x373-x374)*x375)|x376);

	if (t66 != 9905145710LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	volatile uint32_t x380 = 9U;

	t67 = (((x377-x378)*x379)|x380);

	if (t67 != -27440396471LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 17U;
	uint64_t x388 = 3819088096560904953LLU;
	volatile uint64_t t68 = 4136788857907685792LLU;

	t68 = (((x385-x386)*x387)|x388);

	if (t68 != 3819088097878999037LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = 48;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t69 = 53496914LLU;

	t69 = (((x393-x394)*x395)|x396);

	if (t69 != 32818LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = 5;
	static uint16_t x404 = 2597U;
	static volatile uint32_t t70 = 73622U;

	t70 = (((x401-x402)*x403)|x404);

	if (t70 != 2805U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x409 = -3024049247LL;
	volatile int16_t x410 = -1;
	volatile uint8_t x411 = UINT8_MAX;
	int32_t x412 = -1;
	static int64_t t71 = -6469762524LL;

	t71 = (((x409-x410)*x411)|x412);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x417 = -1LL;
	uint32_t x418 = 61U;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MIN;

	t72 = (((x417-x418)*x419)|x420);

	if (t72 != -9223372036854767872LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x421 = INT64_MAX;
	static uint16_t x422 = UINT16_MAX;
	int64_t x424 = -1LL;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (((x421-x422)*x423)|x424);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x433 = 1235611U;
	int16_t x435 = 2;
	uint32_t x436 = UINT32_MAX;
	volatile uint64_t t74 = 5485294043900985309LLU;

	t74 = (((x433-x434)*x435)|x436);

	if (t74 != 18344484304005890047LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x437 = -1;
	uint64_t x438 = 976462774294LLU;
	int64_t x439 = INT64_MIN;
	static int8_t x440 = INT8_MAX;

	t75 = (((x437-x438)*x439)|x440);

	if (t75 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x442 = 1U;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t x444 = -721;
	volatile int32_t t76 = 21;

	t76 = (((x441-x442)*x443)|x444);

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x449 = UINT32_MAX;
	static volatile int32_t x450 = -1;
	volatile uint16_t x451 = 14U;
	volatile uint32_t t77 = 175774255U;

	t77 = (((x449-x450)*x451)|x452);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x453 = 11342U;
	volatile int16_t x454 = -1;
	uint16_t x455 = 11351U;
	static int8_t x456 = INT8_MAX;

	t78 = (((x453-x454)*x455)|x456);

	if (t78 != 128754431) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x458 = 13764U;
	int16_t x459 = 1;
	static int8_t x460 = -1;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (((x457-x458)*x459)|x460);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x465 = INT32_MAX;
	int64_t x466 = 9223412181LL;
	volatile uint16_t x468 = UINT16_MAX;
	int64_t t80 = 42804147LL;

	t80 = (((x465-x466)*x467)|x468);

	if (t80 != -418427957870593LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x469 = INT8_MAX;
	static uint16_t x470 = UINT16_MAX;
	static int8_t x472 = INT8_MIN;
	int32_t t81 = 2;

	t81 = (((x469-x470)*x471)|x472);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x473 = -1;
	int8_t x474 = -1;
	int32_t x475 = INT32_MIN;
	static uint64_t x476 = UINT64_MAX;

	t82 = (((x473-x474)*x475)|x476);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x477 = INT16_MIN;
	int32_t x478 = -1;
	volatile uint64_t x479 = 14819876814LLU;
	static volatile uint16_t x480 = 455U;
	static uint64_t t83 = 20379938LLU;

	t83 = (((x477-x478)*x479)|x480);

	if (t83 != 18446258470805987279LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x481 = INT8_MIN;
	static int8_t x482 = -1;
	static uint16_t x483 = UINT16_MAX;
	int32_t x484 = INT32_MIN;
	volatile int32_t t84 = 231519137;

	t84 = (((x481-x482)*x483)|x484);

	if (t84 != -8322945) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x485 = UINT64_MAX;
	volatile uint16_t x486 = UINT16_MAX;
	static volatile int8_t x487 = INT8_MIN;
	volatile uint64_t t85 = 163334511775LLU;

	t85 = (((x485-x486)*x487)|x488);

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x489 = INT8_MAX;
	int64_t x490 = -12LL;
	uint64_t x492 = UINT64_MAX;

	t86 = (((x489-x490)*x491)|x492);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x493 = -1;
	static volatile int16_t x494 = INT16_MIN;
	volatile uint64_t x495 = 0LLU;
	static int16_t x496 = -1;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = (((x493-x494)*x495)|x496);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x497 = INT8_MIN;
	int8_t x499 = INT8_MIN;
	uint64_t x500 = UINT64_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (((x497-x498)*x499)|x500);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x505 = -456560340;
	static volatile uint32_t x506 = UINT32_MAX;

	t89 = (((x505-x506)*x507)|x508);

	if (t89 != 4294967251U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x509 = INT8_MIN;
	int16_t x510 = -92;
	uint64_t x511 = 2307270121099969LLU;
	int8_t x512 = 2;
	static uint64_t t90 = 185748942561163808LLU;

	t90 = (((x509-x510)*x511)|x512);

	if (t90 != 18363682349349952734LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x513 = INT8_MAX;
	volatile int8_t x514 = INT8_MAX;
	volatile int64_t x515 = -1LL;
	volatile int16_t x516 = -6967;
	int64_t t91 = 418141241085738LL;

	t91 = (((x513-x514)*x515)|x516);

	if (t91 != -6967LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x518 = INT8_MIN;
	volatile uint8_t x519 = 0U;
	volatile int32_t x520 = -772447;
	static uint32_t t92 = 20858655U;

	t92 = (((x517-x518)*x519)|x520);

	if (t92 != 4294194849U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x522 = 1817193693LLU;
	uint16_t x523 = 1824U;
	volatile int16_t x524 = -3;
	static volatile uint64_t t93 = 752414257792LLU;

	t93 = (((x521-x522)*x523)|x524);

	if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x529 = -1;
	volatile int16_t x530 = INT16_MIN;
	uint8_t x531 = 10U;
	static int16_t x532 = INT16_MIN;
	volatile int32_t t94 = 9235;

	t94 = (((x529-x530)*x531)|x532);

	if (t94 != -10) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x539 = 7757545U;
	int64_t x540 = INT64_MIN;
	static int64_t t95 = 228323384378998LL;

	t95 = (((x537-x538)*x539)|x540);

	if (t95 != -9223372035429719805LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x541 = -1;
	int8_t x542 = INT8_MAX;
	uint32_t x543 = 1199U;
	uint64_t x544 = 876193096022LLU;
	uint64_t t96 = 102LLU;

	t96 = (((x541-x542)*x543)|x544);

	if (t96 != 880468142550LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x557 = 1U;
	uint32_t x558 = 48052463U;
	int8_t x560 = INT8_MIN;

	t97 = (((x557-x558)*x559)|x560);

	if (t97 != 4294967254U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x561 = INT8_MIN;
	volatile int32_t x563 = INT32_MIN;
	volatile int64_t t98 = -149571555529LL;

	t98 = (((x561-x562)*x563)|x564);

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x565 = 8663689;
	volatile int16_t x566 = INT16_MIN;
	uint32_t x567 = UINT32_MAX;
	volatile int16_t x568 = -60;
	volatile uint32_t t99 = 999990U;

	t99 = (((x565-x566)*x567)|x568);

	if (t99 != 4294967287U) { NG(); } else { ; }
	
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

