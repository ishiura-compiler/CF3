#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 1565;
uint64_t x9 = 1LLU;
uint64_t x12 = 6295709209LLU;
volatile int32_t t5 = 16480;
static int64_t x33 = INT64_MAX;
uint64_t x36 = UINT64_MAX;
volatile int32_t t7 = -19;
int32_t t8 = -751481017;
static volatile int32_t t10 = 1;
uint64_t x54 = 2315812513LLU;
static volatile int16_t x61 = -5;
uint32_t x64 = 9U;
uint32_t x65 = UINT32_MAX;
int32_t x75 = INT32_MAX;
uint8_t x76 = UINT8_MAX;
volatile uint32_t x88 = UINT32_MAX;
int8_t x89 = INT8_MAX;
volatile int32_t t19 = 7725;
static int32_t x94 = -65;
volatile uint32_t x95 = 23476U;
volatile uint32_t x98 = 666U;
uint8_t x100 = 0U;
int32_t x103 = 3409;
int16_t x105 = -1;
volatile int32_t x106 = -1;
int32_t t23 = -1;
uint16_t x111 = 6U;
int16_t x112 = INT16_MIN;
volatile uint16_t x113 = UINT16_MAX;
volatile int8_t x117 = 24;
uint64_t x131 = UINT64_MAX;
int32_t t28 = -1;
volatile uint8_t x142 = 1U;
int32_t t31 = -1654;
static uint8_t x147 = 30U;
int8_t x148 = INT8_MIN;
volatile int32_t t33 = -1433054;
int32_t x156 = -1;
uint16_t x182 = 1428U;
int32_t x183 = INT32_MIN;
volatile int32_t x185 = INT32_MAX;
int32_t x188 = -1;
volatile uint8_t x189 = 1U;
int16_t x191 = INT16_MIN;
static int64_t x194 = -442077861LL;
static int16_t x196 = INT16_MIN;
int32_t t42 = -109;
uint8_t x198 = 16U;
int8_t x203 = INT8_MIN;
int32_t t45 = 165606718;
int16_t x219 = INT16_MIN;
volatile int32_t x228 = INT32_MIN;
int32_t t49 = -394;
static int8_t x232 = -2;
uint32_t x237 = 7U;
int32_t x244 = INT32_MAX;
int32_t x249 = INT32_MIN;
int64_t x251 = INT64_MIN;
volatile int32_t t54 = -40926;
int32_t t56 = -38;
volatile int64_t x263 = 3LL;
int64_t x269 = INT64_MIN;
uint16_t x270 = 692U;
static int16_t x271 = INT16_MAX;
int8_t x273 = INT8_MAX;
int8_t x274 = -1;
uint8_t x278 = 0U;
static volatile int32_t t61 = -29229327;
volatile int32_t t62 = -5583326;
static volatile int16_t x300 = -1;
int8_t x302 = 52;
int32_t t64 = -3;
int64_t x307 = INT64_MIN;
volatile int32_t t66 = -1903;
uint8_t x313 = 18U;
int16_t x315 = -1;
volatile int16_t x323 = INT16_MIN;
int64_t x333 = 252096789908732325LL;
int32_t t72 = -1907;
static volatile int64_t x337 = INT64_MIN;
static uint32_t x340 = UINT32_MAX;
int64_t x344 = INT64_MIN;
int64_t x347 = INT64_MAX;
uint32_t x349 = 2082012U;
static uint32_t x358 = 2261U;
int32_t t77 = 25795760;
int8_t x361 = -1;
volatile int32_t x364 = -1;
int8_t x368 = -29;
int32_t t79 = 834507;
int8_t x369 = 15;
uint16_t x376 = 736U;
int32_t x384 = INT32_MAX;
static volatile int32_t t83 = 516120165;
int16_t x389 = -3425;
static volatile int64_t x397 = INT64_MIN;
int8_t x399 = INT8_MIN;
uint32_t x400 = 350U;
int32_t t87 = 0;
int32_t t88 = -2827329;
volatile int32_t x405 = INT32_MIN;
static int8_t x406 = INT8_MAX;
int32_t x409 = INT32_MIN;
int64_t x414 = INT64_MIN;
int32_t t92 = -765131806;
uint8_t x422 = 1U;
int16_t x427 = 163;
uint64_t x428 = 45LLU;
int32_t x438 = -1;
static int32_t x441 = INT32_MAX;
int64_t x447 = -1LL;
uint16_t x448 = UINT16_MAX;
volatile uint32_t x449 = 128685U;
volatile uint16_t x457 = 764U;
uint64_t x459 = UINT64_MAX;
volatile uint16_t x460 = UINT16_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int16_t x2 = 25;
	int32_t x3 = INT32_MIN;
	volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -3724507;

	t0 = (x1==((x2/x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int16_t x6 = INT16_MAX;
	static int16_t x7 = INT16_MIN;
	uint16_t x8 = 176U;

	t1 = (x5==((x6/x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = 3020912LL;
	int16_t x11 = 6;
	int32_t t2 = 1512;

	t2 = (x9==((x10/x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -60716229LL;
	uint16_t x14 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -111605785;

	t3 = (x13==((x14/x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	int16_t x18 = -66;
	int32_t x19 = -1;
	uint8_t x20 = 1U;
	int32_t t4 = 742132;

	t4 = (x17==((x18/x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	static uint16_t x22 = 4040U;
	int32_t x23 = -1;
	uint8_t x24 = UINT8_MAX;

	t5 = (x21==((x22/x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MAX;
	int64_t x26 = -1089071LL;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -118;

	t6 = (x25==((x26/x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 1U;
	uint32_t x35 = UINT32_MAX;

	t7 = (x33==((x34/x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	uint64_t x38 = 129476053495340803LLU;
	static int8_t x39 = -2;
	volatile uint32_t x40 = 110451U;

	t8 = (x37==((x38/x39)*x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 14U;
	static volatile uint32_t x42 = UINT32_MAX;
	volatile int32_t x43 = INT32_MIN;
	static uint64_t x44 = 15998488776422839LLU;
	static volatile int32_t t9 = 4024;

	t9 = (x41==((x42/x43)*x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;

	t10 = (x45==((x46/x47)*x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 2U;
	static volatile int16_t x51 = INT16_MAX;
	uint8_t x52 = 6U;
	static volatile int32_t t11 = -8;

	t11 = (x49==((x50/x51)*x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int32_t x55 = 755167;
	int32_t x56 = -1;
	int32_t t12 = -133583939;

	t12 = (x53==((x54/x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1LL;
	int32_t x58 = 0;
	int64_t x59 = INT64_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -799745666;

	t13 = (x57==((x58/x59)*x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MIN;
	volatile int32_t t14 = -819;

	t14 = (x61==((x62/x63)*x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 205772671U;
	volatile int32_t x67 = -474;
	uint8_t x68 = 118U;
	int32_t t15 = 70831;

	t15 = (x65==((x66/x67)*x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int64_t x74 = -1LL;
	volatile int32_t t16 = -1;

	t16 = (x73==((x74/x75)*x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = 1;
	volatile int64_t x83 = INT64_MAX;
	static int16_t x84 = 185;
	volatile int32_t t17 = -663;

	t17 = (x81==((x82/x83)*x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = 3896;
	volatile int8_t x86 = 0;
	uint16_t x87 = 31U;
	volatile int32_t t18 = 16043;

	t18 = (x85==((x86/x87)*x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x90 = UINT8_MAX;
	int64_t x91 = 3456LL;
	volatile uint8_t x92 = 17U;

	t19 = (x89==((x90/x91)*x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	int16_t x96 = INT16_MAX;
	volatile int32_t t20 = -8563;

	t20 = (x93==((x94/x95)*x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -14597;
	int64_t x99 = 428568371904473184LL;
	volatile int32_t t21 = -25841553;

	t21 = (x97==((x98/x99)*x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = 5359526U;
	int64_t x102 = 380LL;
	volatile int32_t x104 = INT32_MAX;
	volatile int32_t t22 = -3;

	t22 = (x101==((x102/x103)*x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x107 = INT8_MAX;
	int8_t x108 = 0;

	t23 = (x105==((x106/x107)*x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 1062407939LLU;
	uint8_t x110 = 4U;
	volatile int32_t t24 = -254;

	t24 = (x109==((x110/x111)*x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = 116748;
	int64_t x115 = INT64_MAX;
	static int32_t x116 = INT32_MIN;
	static int32_t t25 = -745;

	t25 = (x113==((x114/x115)*x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x118 = 43317984773691LLU;
	int64_t x119 = INT64_MIN;
	static volatile uint8_t x120 = 0U;
	int32_t t26 = 207;

	t26 = (x117==((x118/x119)*x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = 0U;
	static int8_t x122 = INT8_MIN;
	static int64_t x123 = INT64_MIN;
	uint32_t x124 = UINT32_MAX;
	int32_t t27 = -6685097;

	t27 = (x121==((x122/x123)*x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	static volatile uint64_t x132 = UINT64_MAX;

	t28 = (x129==((x130/x131)*x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = 124704839684173LL;
	uint32_t x135 = 326981239U;
	int64_t x136 = -1LL;
	int32_t t29 = -15;

	t29 = (x133==((x134/x135)*x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = -1;
	static volatile int32_t t30 = 70026;

	t30 = (x137==((x138/x139)*x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int8_t x143 = INT8_MIN;
	uint16_t x144 = 13U;

	t31 = (x141==((x142/x143)*x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 2517056LLU;
	volatile int16_t x146 = INT16_MIN;
	int32_t t32 = 0;

	t32 = (x145==((x146/x147)*x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x149 = 10523905639LLU;
	uint8_t x150 = 81U;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = -4016;

	t33 = (x149==((x150/x151)*x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = 31U;
	static int32_t t34 = 21611;

	t34 = (x153==((x154/x155)*x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MIN;
	volatile uint8_t x158 = 0U;
	uint8_t x159 = UINT8_MAX;
	volatile int8_t x160 = INT8_MAX;
	static int32_t t35 = 0;

	t35 = (x157==((x158/x159)*x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 5U;
	int32_t x162 = -880139;
	int32_t x163 = -1;
	static int8_t x164 = INT8_MIN;
	int32_t t36 = 1106;

	t36 = (x161==((x162/x163)*x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x173 = -4177;
	int16_t x174 = 1;
	int32_t x175 = 60395744;
	int8_t x176 = INT8_MAX;
	int32_t t37 = -77146;

	t37 = (x173==((x174/x175)*x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile uint8_t x178 = 126U;
	int32_t x179 = 109660354;
	uint32_t x180 = UINT32_MAX;
	static int32_t t38 = -18787570;

	t38 = (x177==((x178/x179)*x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x181 = 3134LLU;
	int32_t x184 = 23433289;
	static int32_t t39 = -254;

	t39 = (x181==((x182/x183)*x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x186 = -469;
	int64_t x187 = INT64_MIN;
	int32_t t40 = 1;

	t40 = (x185==((x186/x187)*x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x190 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t41 = -1;

	t41 = (x189==((x190/x191)*x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -1;
	int16_t x195 = 106;

	t42 = (x193==((x194/x195)*x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t43 = 1;

	t43 = (x197==((x198/x199)*x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	volatile uint16_t x202 = 2283U;
	uint8_t x204 = 0U;
	int32_t t44 = 10;

	t44 = (x201==((x202/x203)*x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x205 = INT16_MIN;
	static int16_t x206 = -1;
	volatile int8_t x207 = INT8_MAX;
	volatile int8_t x208 = 12;

	t45 = (x205==((x206/x207)*x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x209 = 1718882178LLU;
	int64_t x210 = 211LL;
	int8_t x211 = -1;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t46 = -43;

	t46 = (x209==((x210/x211)*x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = 808597;
	int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	static int8_t x216 = -1;
	volatile int32_t t47 = 210640;

	t47 = (x213==((x214/x215)*x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = -1LL;
	uint16_t x218 = 74U;
	volatile uint16_t x220 = 358U;
	volatile int32_t t48 = 1298;

	t48 = (x217==((x218/x219)*x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = 0;
	static uint16_t x227 = UINT16_MAX;

	t49 = (x225==((x226/x227)*x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MAX;
	int64_t x231 = -1LL;
	volatile int32_t t50 = -30;

	t50 = (x229==((x230/x231)*x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x233 = 249U;
	int16_t x234 = INT16_MIN;
	static int32_t x235 = 1864;
	uint16_t x236 = 534U;
	volatile int32_t t51 = 4;

	t51 = (x233==((x234/x235)*x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x238 = -13;
	uint8_t x239 = 59U;
	int64_t x240 = -1LL;
	int32_t t52 = -12805;

	t52 = (x237==((x238/x239)*x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t t53 = 568;

	t53 = (x241==((x242/x243)*x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x250 = -1;
	uint64_t x252 = UINT64_MAX;

	t54 = (x249==((x250/x251)*x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MAX;
	static uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t55 = 881;

	t55 = (x253==((x254/x255)*x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x257 = 9U;
	static int16_t x258 = -1;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = 0;

	t56 = (x257==((x258/x259)*x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MAX;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t57 = -749523;

	t57 = (x261==((x262/x263)*x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x272 = INT16_MIN;
	volatile int32_t t58 = 55713;

	t58 = (x269==((x270/x271)*x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x275 = -1968LL;
	int32_t x276 = 825201;
	static int32_t t59 = 212870;

	t59 = (x273==((x274/x275)*x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	static uint16_t x280 = 32134U;
	volatile int32_t t60 = -471154038;

	t60 = (x277==((x278/x279)*x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x285 = 508234152LLU;
	int64_t x286 = -13299016174088931LL;
	int16_t x287 = INT16_MAX;
	int16_t x288 = -29;

	t61 = (x285==((x286/x287)*x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	static int64_t x290 = INT64_MIN;
	int8_t x291 = -24;
	int8_t x292 = 11;

	t62 = (x289==((x290/x291)*x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x297 = 867;
	int32_t x298 = INT32_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	int32_t t63 = -1003976987;

	t63 = (x297==((x298/x299)*x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x303 = INT32_MAX;
	volatile int32_t x304 = -1;

	t64 = (x301==((x302/x303)*x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	uint32_t x308 = 46U;
	volatile int32_t t65 = -112399769;

	t65 = (x305==((x306/x307)*x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = -14;
	int64_t x310 = 17LL;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = 17;

	t66 = (x309==((x310/x311)*x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x314 = INT8_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t67 = 1;

	t67 = (x313==((x314/x315)*x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = -1;
	volatile int64_t x318 = INT64_MAX;
	static int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t68 = 8;

	t68 = (x317==((x318/x319)*x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	volatile int32_t x322 = -39;
	uint8_t x324 = 42U;
	int32_t t69 = 24;

	t69 = (x321==((x322/x323)*x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	int8_t x327 = 1;
	uint8_t x328 = 116U;
	int32_t t70 = -1579264;

	t70 = (x325==((x326/x327)*x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x329 = INT32_MAX;
	int16_t x330 = -197;
	static int16_t x331 = INT16_MAX;
	static int8_t x332 = INT8_MIN;
	static int32_t t71 = 1;

	t71 = (x329==((x330/x331)*x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = 0;

	t72 = (x333==((x334/x335)*x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x338 = INT32_MIN;
	static volatile uint8_t x339 = 72U;
	volatile int32_t t73 = 12592;

	t73 = (x337==((x338/x339)*x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x341 = -25;
	uint64_t x342 = 112LLU;
	int64_t x343 = 195676LL;
	static int32_t t74 = 9;

	t74 = (x341==((x342/x343)*x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x345 = UINT32_MAX;
	volatile uint8_t x346 = 53U;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t75 = -376;

	t75 = (x345==((x346/x347)*x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x350 = INT32_MAX;
	int8_t x351 = -13;
	volatile uint8_t x352 = 1U;
	int32_t t76 = -1;

	t76 = (x349==((x350/x351)*x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = UINT64_MAX;
	static int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;

	t77 = (x357==((x358/x359)*x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x362 = -121066280591LL;
	static uint64_t x363 = UINT64_MAX;
	int32_t t78 = -232;

	t78 = (x361==((x362/x363)*x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = -1960708186321LL;
	uint8_t x367 = 5U;

	t79 = (x365==((x366/x367)*x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x370 = -1;
	static volatile uint16_t x371 = 9890U;
	static volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t80 = 463763;

	t80 = (x369==((x370/x371)*x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x373 = -1;
	int64_t x374 = 19744992LL;
	int64_t x375 = INT64_MIN;
	int32_t t81 = -2937930;

	t81 = (x373==((x374/x375)*x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = UINT32_MAX;
	static int8_t x378 = INT8_MIN;
	static int64_t x379 = 103553LL;
	int64_t x380 = INT64_MIN;
	volatile int32_t t82 = 1385585;

	t82 = (x377==((x378/x379)*x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 119U;
	volatile int16_t x382 = 102;
	uint16_t x383 = UINT16_MAX;

	t83 = (x381==((x382/x383)*x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t84 = -41846814;

	t84 = (x385==((x386/x387)*x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 7143695U;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t85 = 1282114;

	t85 = (x389==((x390/x391)*x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = 0;
	uint16_t x394 = UINT16_MAX;
	uint8_t x395 = 3U;
	uint32_t x396 = 29527178U;
	static volatile int32_t t86 = 596810;

	t86 = (x393==((x394/x395)*x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x398 = -1LL;

	t87 = (x397==((x398/x399)*x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	uint16_t x402 = 105U;
	static int64_t x403 = -1LL;
	uint64_t x404 = 1LLU;

	t88 = (x401==((x402/x403)*x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x407 = INT8_MIN;
	static int8_t x408 = -1;
	static volatile int32_t t89 = 107;

	t89 = (x405==((x406/x407)*x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x410 = INT32_MAX;
	volatile uint64_t x411 = 2336345079284LLU;
	uint8_t x412 = UINT8_MAX;
	int32_t t90 = 1124760;

	t90 = (x409==((x410/x411)*x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = 11841;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = 15;
	int32_t t91 = -525;

	t91 = (x413==((x414/x415)*x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = 8083803081494022LL;
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;

	t92 = (x417==((x418/x419)*x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x421 = -1LL;
	int16_t x423 = 2801;
	static int32_t x424 = -1;
	int32_t t93 = -138;

	t93 = (x421==((x422/x423)*x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x425 = 7U;
	uint32_t x426 = UINT32_MAX;
	static int32_t t94 = 194;

	t94 = (x425==((x426/x427)*x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = 1;
	int64_t x439 = 173077LL;
	int8_t x440 = 53;
	volatile int32_t t95 = -18500462;

	t95 = (x437==((x438/x439)*x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x442 = INT32_MAX;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = INT8_MAX;
	int32_t t96 = 20618;

	t96 = (x441==((x442/x443)*x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -3974;
	static uint8_t x446 = UINT8_MAX;
	static volatile int32_t t97 = -10868187;

	t97 = (x445==((x446/x447)*x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x450 = UINT8_MAX;
	int64_t x451 = INT64_MIN;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t98 = 833171;

	t98 = (x449==((x450/x451)*x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x458 = INT32_MIN;
	static int32_t t99 = 1852722;

	t99 = (x457==((x458/x459)*x460));

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

