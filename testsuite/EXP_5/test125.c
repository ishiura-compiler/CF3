#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = 4688;
int8_t x15 = INT8_MIN;
volatile int32_t t4 = 85095;
volatile int64_t x31 = -58715LL;
int32_t x33 = 254120968;
static int8_t x44 = 2;
int64_t x63 = INT64_MIN;
int8_t x69 = INT8_MAX;
uint16_t x77 = 31329U;
int32_t x91 = 19;
int64_t x93 = INT64_MIN;
static int8_t x94 = -7;
int32_t t19 = -523731311;
static int32_t t20 = -1458505;
int64_t x104 = -1526985292812320LL;
static int64_t x105 = -1LL;
int32_t x107 = -1;
uint64_t x109 = 523212LLU;
int8_t x113 = -1;
uint64_t x118 = UINT64_MAX;
volatile int16_t x120 = 5;
uint8_t x128 = UINT8_MAX;
int32_t x129 = -123;
volatile int32_t t28 = 4512929;
static uint8_t x133 = UINT8_MAX;
static int16_t x145 = -15;
volatile uint16_t x148 = 1U;
int32_t t32 = 57309394;
volatile int8_t x149 = INT8_MAX;
int64_t x155 = -1572822623137467LL;
static int32_t t34 = 349475261;
volatile uint8_t x157 = UINT8_MAX;
uint16_t x158 = 497U;
volatile uint16_t x159 = UINT16_MAX;
uint16_t x171 = 0U;
volatile uint16_t x172 = UINT16_MAX;
static uint64_t x175 = 3394436LLU;
uint8_t x178 = UINT8_MAX;
int8_t x185 = INT8_MAX;
uint64_t x187 = 95LLU;
volatile int64_t x192 = INT64_MAX;
static volatile int64_t x196 = 2033843LL;
uint32_t x197 = 768521682U;
int16_t x201 = INT16_MAX;
volatile int32_t t46 = 123166;
int64_t x215 = 858307369395182986LL;
int64_t x218 = -1LL;
int16_t x226 = INT16_MIN;
volatile uint16_t x238 = UINT16_MAX;
uint16_t x241 = 8U;
int32_t t56 = -933084;
int16_t x252 = 38;
volatile int32_t t57 = 3758;
uint16_t x254 = 1541U;
int16_t x264 = 29;
volatile uint8_t x269 = 3U;
volatile int16_t x276 = INT16_MIN;
static int32_t t63 = 1229848;
static int32_t t64 = -265027575;
int16_t x291 = INT16_MAX;
uint64_t x296 = 2084649749863747LLU;
static volatile int64_t x301 = -129382493700622LL;
int16_t x307 = INT16_MIN;
int32_t x310 = 1815898;
volatile int32_t t74 = -18;
int32_t t75 = -3;
static int32_t t76 = -931;
int8_t x339 = INT8_MIN;
int32_t t77 = 408912;
volatile int32_t t78 = -1241;
static int32_t t79 = 3;
volatile int32_t x357 = INT32_MIN;
uint32_t x363 = 942952447U;
uint64_t x368 = 47861LLU;
int64_t x389 = INT64_MIN;
static int8_t x399 = -22;
uint64_t x402 = UINT64_MAX;
volatile int16_t x403 = 1155;
static int8_t x404 = INT8_MIN;
volatile uint64_t x405 = 5354LLU;
static volatile int8_t x406 = -1;
volatile uint64_t x407 = 6943264842863555494LLU;
uint64_t x413 = 1LLU;
static int32_t t90 = 0;
static int8_t x418 = INT8_MAX;
uint8_t x421 = 27U;
volatile int8_t x422 = 0;
static int8_t x443 = INT8_MIN;
volatile uint32_t x445 = UINT32_MAX;
volatile uint64_t x446 = UINT64_MAX;
int8_t x451 = INT8_MIN;


void f0(void) {
	static uint64_t x1 = 299544LLU;
	uint16_t x2 = 2U;
	volatile int8_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 409594;

	t0 = (x1==((x2+x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	static uint32_t x6 = 8038910U;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -25416;

	t1 = (x5==((x6+x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1861LL;
	uint16_t x10 = 2771U;
	uint64_t x11 = 2LLU;
	int32_t x12 = 3;
	int32_t t2 = 1690;

	t2 = (x9==((x10+x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint16_t x16 = 0U;
	static int32_t t3 = -595413845;

	t3 = (x13==((x14+x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	static volatile int16_t x22 = 4877;
	int32_t x23 = -1;
	int16_t x24 = -1;

	t4 = (x21==((x22+x23)<=x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x27 = -346;
	static int8_t x28 = 47;
	static volatile int32_t t5 = 949;

	t5 = (x25==((x26+x27)<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 743U;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t6 = 35842;

	t6 = (x29==((x30+x31)<=x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	static int64_t x35 = -1LL;
	static uint32_t x36 = UINT32_MAX;
	volatile int32_t t7 = 114521;

	t7 = (x33==((x34+x35)<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static uint8_t x42 = 52U;
	static uint32_t x43 = 1879U;
	volatile int32_t t8 = 2;

	t8 = (x41==((x42+x43)<=x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MIN;
	static int16_t x55 = INT16_MIN;
	volatile uint8_t x56 = 4U;
	int32_t t9 = 0;

	t9 = (x53==((x54+x55)<=x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x57 = 1;
	uint64_t x58 = 184909742702698963LLU;
	volatile int32_t x59 = INT32_MIN;
	static uint64_t x60 = 247214442LLU;
	volatile int32_t t10 = -425;

	t10 = (x57==((x58+x59)<=x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MAX;
	int64_t x64 = INT64_MIN;
	volatile int32_t t11 = -281337;

	t11 = (x61==((x62+x63)<=x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MAX;
	uint8_t x66 = 10U;
	int32_t x67 = -1;
	volatile int16_t x68 = -1;
	volatile int32_t t12 = 942;

	t12 = (x65==((x66+x67)<=x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x70 = INT64_MIN;
	static uint8_t x71 = 7U;
	int64_t x72 = -52759396446965182LL;
	int32_t t13 = -7797;

	t13 = (x69==((x70+x71)<=x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 118844553222LLU;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	static uint32_t x76 = UINT32_MAX;
	static int32_t t14 = -251667824;

	t14 = (x73==((x74+x75)<=x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = -1;
	int32_t x79 = INT32_MAX;
	int64_t x80 = INT64_MIN;
	static volatile int32_t t15 = 1;

	t15 = (x77==((x78+x79)<=x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 15213044LLU;
	int32_t t16 = 309;

	t16 = (x81==((x82+x83)<=x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	static uint32_t x86 = 7641U;
	volatile uint8_t x87 = UINT8_MAX;
	int8_t x88 = 2;
	int32_t t17 = 888;

	t17 = (x85==((x86+x87)<=x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = 773;
	uint64_t x90 = 2LLU;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t18 = -15857;

	t18 = (x89==((x90+x91)<=x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x95 = INT16_MAX;
	static int32_t x96 = -26627463;

	t19 = (x93==((x94+x95)<=x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = 2;
	static int64_t x98 = INT64_MAX;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MAX;

	t20 = (x97==((x98+x99)<=x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile int32_t t21 = -40256093;

	t21 = (x101==((x102+x103)<=x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x106 = 441U;
	uint32_t x108 = 0U;
	volatile int32_t t22 = 66001483;

	t22 = (x105==((x106+x107)<=x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -2;
	static int16_t x111 = INT16_MIN;
	static uint16_t x112 = 49U;
	volatile int32_t t23 = 1;

	t23 = (x109==((x110+x111)<=x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x114 = 76;
	volatile uint32_t x115 = 2171436U;
	static volatile uint64_t x116 = 143923912LLU;
	volatile int32_t t24 = -1;

	t24 = (x113==((x114+x115)<=x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MAX;
	int16_t x119 = -15101;
	static int32_t t25 = 383508;

	t25 = (x117==((x118+x119)<=x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	static int16_t x122 = INT16_MAX;
	int8_t x123 = INT8_MAX;
	uint64_t x124 = UINT64_MAX;
	static volatile int32_t t26 = -309777;

	t26 = (x121==((x122+x123)<=x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -4LL;
	int16_t x126 = INT16_MAX;
	uint8_t x127 = 0U;
	static int32_t t27 = -1;

	t27 = (x125==((x126+x127)<=x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x130 = INT8_MIN;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = -1;

	t28 = (x129==((x130+x131)<=x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 1225U;
	int64_t x135 = -1LL;
	uint16_t x136 = 6U;
	volatile int32_t t29 = -104295;

	t29 = (x133==((x134+x135)<=x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = -1;
	int16_t x139 = -8;
	uint16_t x140 = UINT16_MAX;
	int32_t t30 = -54653;

	t30 = (x137==((x138+x139)<=x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1LL;
	volatile uint8_t x144 = UINT8_MAX;
	volatile int32_t t31 = 287;

	t31 = (x141==((x142+x143)<=x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = 2U;
	int16_t x147 = INT16_MAX;

	t32 = (x145==((x146+x147)<=x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = 5480198;
	int8_t x151 = INT8_MAX;
	int8_t x152 = 0;
	int32_t t33 = 81;

	t33 = (x149==((x150+x151)<=x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -14;
	int8_t x154 = INT8_MAX;
	volatile int16_t x156 = 1;

	t34 = (x153==((x154+x155)<=x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x160 = 24796486U;
	static volatile int32_t t35 = -141;

	t35 = (x157==((x158+x159)<=x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = -1;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	volatile int32_t t36 = -5963891;

	t36 = (x161==((x162+x163)<=x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x165 = INT32_MIN;
	static int16_t x166 = INT16_MAX;
	uint32_t x167 = 1759958455U;
	int16_t x168 = -13105;
	volatile int32_t t37 = 16;

	t37 = (x165==((x166+x167)<=x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 1194722U;
	int32_t t38 = 51;

	t38 = (x169==((x170+x171)<=x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 6U;
	int64_t x174 = INT64_MIN;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t39 = 226;

	t39 = (x173==((x174+x175)<=x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x179 = 84U;
	uint8_t x180 = 1U;
	static int32_t t40 = 509557617;

	t40 = (x177==((x178+x179)<=x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 244U;
	int64_t x182 = INT64_MAX;
	volatile int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	volatile int32_t t41 = -13;

	t41 = (x181==((x182+x183)<=x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x186 = 1412610582U;
	int8_t x188 = INT8_MIN;
	int32_t t42 = -207156;

	t42 = (x185==((x186+x187)<=x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -978723;
	int16_t x190 = -12;
	uint8_t x191 = UINT8_MAX;
	static int32_t t43 = 11108905;

	t43 = (x189==((x190+x191)<=x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	int32_t t44 = 2;

	t44 = (x193==((x194+x195)<=x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	static uint64_t x200 = 3166478025144684LLU;
	int32_t t45 = -676305125;

	t45 = (x197==((x198+x199)<=x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x202 = 0U;
	uint8_t x203 = 15U;
	int32_t x204 = 4112566;

	t46 = (x201==((x202+x203)<=x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 0;
	volatile int32_t x206 = -1;
	volatile int16_t x207 = -1;
	int64_t x208 = 39908230LL;
	int32_t t47 = 233642;

	t47 = (x205==((x206+x207)<=x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 0;
	uint32_t x210 = 105484U;
	int8_t x211 = INT8_MIN;
	volatile int8_t x212 = INT8_MAX;
	int32_t t48 = 292654333;

	t48 = (x209==((x210+x211)<=x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 0LL;
	static int64_t x214 = 39531707563845LL;
	uint32_t x216 = 7498U;
	int32_t t49 = -2426;

	t49 = (x213==((x214+x215)<=x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = -1;
	int16_t x219 = -8;
	int16_t x220 = INT16_MIN;
	volatile int32_t t50 = 101;

	t50 = (x217==((x218+x219)<=x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -1;
	static uint16_t x224 = 46U;
	volatile int32_t t51 = 1567;

	t51 = (x221==((x222+x223)<=x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MAX;
	int8_t x227 = INT8_MAX;
	int16_t x228 = -476;
	int32_t t52 = -3;

	t52 = (x225==((x226+x227)<=x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MAX;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 808091192031624769LLU;
	static volatile int32_t t53 = 20;

	t53 = (x229==((x230+x231)<=x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 327U;
	static int16_t x239 = INT16_MAX;
	static volatile uint32_t x240 = 430264523U;
	volatile int32_t t54 = -23;

	t54 = (x237==((x238+x239)<=x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x242 = UINT32_MAX;
	static uint64_t x243 = UINT64_MAX;
	static int32_t x244 = -133;
	int32_t t55 = -7893;

	t55 = (x241==((x242+x243)<=x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = 700174745U;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	uint32_t x248 = 337U;

	t56 = (x245==((x246+x247)<=x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = 13LLU;

	t57 = (x249==((x250+x251)<=x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 87308875966764012LLU;
	uint16_t x255 = 6530U;
	static int16_t x256 = -1;
	volatile int32_t t58 = -10013;

	t58 = (x253==((x254+x255)<=x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = INT8_MIN;
	static int32_t x258 = 509190505;
	uint64_t x259 = 6004797152865586747LLU;
	int8_t x260 = 20;
	static volatile int32_t t59 = -22359930;

	t59 = (x257==((x258+x259)<=x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = 1310U;
	static uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 4U;
	static volatile int32_t t60 = 44;

	t60 = (x261==((x262+x263)<=x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	uint64_t x266 = 316768920839LLU;
	volatile int32_t x267 = -50;
	volatile int64_t x268 = -1LL;
	static int32_t t61 = -730;

	t61 = (x265==((x266+x267)<=x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x270 = UINT8_MAX;
	int16_t x271 = -17;
	int64_t x272 = INT64_MIN;
	static int32_t t62 = 935095;

	t62 = (x269==((x270+x271)<=x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x274 = 1854U;
	static uint64_t x275 = UINT64_MAX;

	t63 = (x273==((x274+x275)<=x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = -12;
	int32_t x282 = 0;
	int16_t x283 = INT16_MAX;
	int64_t x284 = -1LL;

	t64 = (x281==((x282+x283)<=x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x285 = INT32_MIN;
	volatile int8_t x286 = -23;
	volatile int16_t x287 = 0;
	volatile int64_t x288 = 89LL;
	int32_t t65 = -125391;

	t65 = (x285==((x286+x287)<=x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	int32_t x290 = 201;
	int32_t x292 = INT32_MAX;
	static int32_t t66 = -42191156;

	t66 = (x289==((x290+x291)<=x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = -71488937;
	int32_t t67 = -2;

	t67 = (x293==((x294+x295)<=x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 3536;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t68 = 38;

	t68 = (x297==((x298+x299)<=x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x302 = 236U;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MAX;
	int32_t t69 = 1;

	t69 = (x301==((x302+x303)<=x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = 103782046;
	int32_t x306 = -16955;
	int16_t x308 = 2;
	static volatile int32_t t70 = 19308;

	t70 = (x305==((x306+x307)<=x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = UINT32_MAX;
	int16_t x311 = 1;
	uint64_t x312 = 2084783995165LLU;
	volatile int32_t t71 = 21851865;

	t71 = (x309==((x310+x311)<=x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x313 = -1;
	volatile int16_t x314 = 6883;
	volatile int8_t x315 = INT8_MIN;
	static int8_t x316 = -1;
	static volatile int32_t t72 = -22;

	t72 = (x313==((x314+x315)<=x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = -1;
	volatile int64_t x318 = -1LL;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t73 = 23561;

	t73 = (x317==((x318+x319)<=x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -2;
	static int16_t x322 = INT16_MAX;
	static uint16_t x323 = 23U;
	static uint8_t x324 = 3U;

	t74 = (x321==((x322+x323)<=x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -1;
	volatile int32_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	static volatile uint64_t x328 = UINT64_MAX;

	t75 = (x325==((x326+x327)<=x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = 4386340926898276LL;
	uint16_t x330 = UINT16_MAX;
	static volatile int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;

	t76 = (x329==((x330+x331)<=x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x337 = UINT32_MAX;
	int64_t x338 = INT64_MAX;
	static int8_t x340 = INT8_MIN;

	t77 = (x337==((x338+x339)<=x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x345 = 4433649207873451LL;
	int64_t x346 = INT64_MIN;
	int32_t x347 = 141;
	uint8_t x348 = UINT8_MAX;

	t78 = (x345==((x346+x347)<=x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x349 = 78U;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = 0;
	int64_t x352 = -27227524441982192LL;

	t79 = (x349==((x350+x351)<=x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x353 = 1U;
	uint32_t x354 = UINT32_MAX;
	int64_t x355 = 0LL;
	uint16_t x356 = UINT16_MAX;
	int32_t t80 = -32154741;

	t80 = (x353==((x354+x355)<=x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x358 = 2720U;
	int64_t x359 = 585860652435484LL;
	int16_t x360 = -206;
	int32_t t81 = 94507526;

	t81 = (x357==((x358+x359)<=x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = -192700050LL;
	int32_t x362 = 1;
	static uint8_t x364 = 0U;
	volatile int32_t t82 = 570158;

	t82 = (x361==((x362+x363)<=x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x365 = UINT16_MAX;
	volatile int64_t x366 = -2019LL;
	uint32_t x367 = UINT32_MAX;
	int32_t t83 = 2171199;

	t83 = (x365==((x366+x367)<=x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x369 = INT8_MIN;
	int16_t x370 = -125;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t84 = -10261;

	t84 = (x369==((x370+x371)<=x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	uint8_t x378 = 0U;
	int64_t x379 = INT64_MIN;
	volatile int8_t x380 = -7;
	static int32_t t85 = 846;

	t85 = (x377==((x378+x379)<=x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x390 = -1;
	int32_t x391 = INT32_MAX;
	int64_t x392 = INT64_MIN;
	int32_t t86 = 1014872;

	t86 = (x389==((x390+x391)<=x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = -124;
	int64_t x400 = -1LL;
	static int32_t t87 = 77590;

	t87 = (x397==((x398+x399)<=x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x401 = -41;
	int32_t t88 = -143691075;

	t88 = (x401==((x402+x403)<=x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x408 = -7;
	static int32_t t89 = -40;

	t89 = (x405==((x406+x407)<=x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x414 = INT32_MAX;
	volatile int32_t x415 = -1;
	int16_t x416 = INT16_MAX;

	t90 = (x413==((x414+x415)<=x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x417 = 150422U;
	int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MAX;
	int32_t t91 = 940172133;

	t91 = (x417==((x418+x419)<=x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x423 = INT8_MAX;
	static int8_t x424 = INT8_MAX;
	int32_t t92 = 0;

	t92 = (x421==((x422+x423)<=x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x425 = INT16_MIN;
	volatile int64_t x426 = -1LL;
	int16_t x427 = 4641;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t93 = -417665;

	t93 = (x425==((x426+x427)<=x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = -45640LL;
	uint64_t x431 = 523389788LLU;
	volatile int64_t x432 = INT64_MAX;
	volatile int32_t t94 = -1;

	t94 = (x429==((x430+x431)<=x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x433 = -4848501490653LL;
	uint32_t x434 = 1U;
	int32_t x435 = INT32_MAX;
	volatile int16_t x436 = -1;
	volatile int32_t t95 = -716370;

	t95 = (x433==((x434+x435)<=x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MAX;
	uint8_t x438 = 29U;
	int16_t x439 = INT16_MIN;
	static volatile int16_t x440 = INT16_MIN;
	volatile int32_t t96 = -103250;

	t96 = (x437==((x438+x439)<=x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -1;
	int8_t x442 = -23;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t97 = 2667;

	t97 = (x441==((x442+x443)<=x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x447 = INT8_MIN;
	int8_t x448 = -24;
	int32_t t98 = 1;

	t98 = (x445==((x446+x447)<=x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = INT64_MIN;
	volatile int8_t x450 = 1;
	int16_t x452 = 6;
	int32_t t99 = -1;

	t99 = (x449==((x450+x451)<=x452));

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

