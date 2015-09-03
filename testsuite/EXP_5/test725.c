#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 14839;
int8_t x10 = INT8_MIN;
uint32_t x13 = 10U;
uint32_t x14 = 2489U;
int32_t x20 = INT32_MIN;
int8_t x23 = INT8_MIN;
int32_t x24 = -1;
static uint64_t x33 = 4LLU;
static uint16_t x34 = UINT16_MAX;
int32_t x36 = INT32_MIN;
int64_t x37 = INT64_MIN;
uint8_t x40 = 3U;
int16_t x41 = INT16_MIN;
volatile int32_t x47 = -3548;
int32_t x50 = -1;
int8_t x52 = INT8_MIN;
uint8_t x60 = UINT8_MAX;
int64_t x65 = 4160268042LL;
int32_t x66 = -1;
uint32_t x71 = 21059U;
uint32_t x79 = 14U;
uint8_t x80 = 9U;
int16_t x85 = INT16_MIN;
static volatile int16_t x89 = 3;
volatile int32_t t22 = -8;
int16_t x99 = 1;
int32_t x100 = INT32_MIN;
static int32_t x104 = INT32_MIN;
int8_t x118 = -7;
volatile int16_t x119 = INT16_MAX;
int16_t x125 = -82;
volatile int32_t x127 = INT32_MIN;
static uint16_t x129 = 1474U;
int16_t x133 = 6976;
volatile int64_t x136 = -1539411297LL;
volatile int16_t x144 = INT16_MIN;
static volatile int32_t t34 = 29;
int64_t x162 = 11LL;
volatile int16_t x168 = INT16_MAX;
int32_t x175 = 825109124;
volatile int64_t x182 = INT64_MIN;
volatile int16_t x185 = INT16_MIN;
uint64_t x190 = 160LLU;
int32_t x198 = -1498;
uint32_t x200 = 145109U;
int8_t x201 = -1;
int16_t x205 = -499;
uint32_t x216 = UINT32_MAX;
int32_t x218 = INT32_MIN;
uint8_t x220 = UINT8_MAX;
int64_t x222 = INT64_MIN;
int16_t x223 = -292;
volatile int32_t t53 = 1965;
int32_t t55 = 6256;
volatile uint8_t x234 = 1U;
volatile uint8_t x241 = UINT8_MAX;
static volatile int32_t t58 = -34746;
int32_t x245 = INT32_MIN;
int8_t x248 = INT8_MAX;
static int32_t t59 = -405;
uint64_t x254 = 0LLU;
uint32_t x260 = 465737U;
volatile int32_t t62 = -4293;
uint16_t x281 = 14U;
uint32_t x285 = UINT32_MAX;
int8_t x289 = -1;
static int64_t x292 = -749179LL;
volatile int32_t x294 = 482;
int64_t x297 = INT64_MAX;
uint32_t x299 = 43744U;
static volatile int64_t x303 = INT64_MIN;
uint32_t x308 = UINT32_MAX;
static volatile int32_t x310 = INT32_MAX;
static volatile int32_t t73 = -57622865;
uint64_t x313 = UINT64_MAX;
volatile uint32_t x316 = 185388U;
uint64_t x326 = 145274LLU;
uint16_t x327 = 9U;
int64_t x331 = INT64_MIN;
volatile int16_t x333 = INT16_MIN;
int64_t x339 = INT64_MIN;
volatile int32_t t81 = 13231337;
static int32_t x349 = INT32_MIN;
int16_t x360 = -54;
static volatile int16_t x361 = -1;
uint64_t x364 = UINT64_MAX;
volatile int64_t x369 = -5287558569LL;
volatile int32_t x377 = -1;
volatile int64_t x389 = INT64_MAX;
uint64_t x401 = 0LLU;
static int16_t x402 = INT16_MIN;
static uint64_t x404 = 58LLU;
uint64_t x410 = UINT64_MAX;
int8_t x427 = 2;


void f0(void) {
	int8_t x5 = -1;
	int64_t x6 = INT64_MAX;
	int16_t x7 = -1;
	static int8_t x8 = -1;

	t0 = (x5<=((x6%x7)/x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x11 = INT16_MIN;
	uint16_t x12 = 8U;
	volatile int32_t t1 = 4185943;

	t1 = (x9<=((x10%x11)/x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = -1;
	int16_t x16 = 3641;
	int32_t t2 = 0;

	t2 = (x13<=((x14%x15)/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 253839LLU;
	static uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 761041099U;
	int32_t t3 = 428932766;

	t3 = (x17<=((x18%x19)/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	volatile int64_t x22 = -1LL;
	volatile int32_t t4 = -1917782;

	t4 = (x21<=((x22%x23)/x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = -1;
	int16_t x27 = 2;
	int16_t x28 = -1;
	volatile int32_t t5 = 4050;

	t5 = (x25<=((x26%x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	uint32_t x31 = 54825U;
	int32_t x32 = -1;
	static volatile int32_t t6 = -1;

	t6 = (x29<=((x30%x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x35 = UINT16_MAX;
	volatile int32_t t7 = 68;

	t7 = (x33<=((x34%x35)/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = INT32_MIN;
	uint32_t x39 = 9202248U;
	int32_t t8 = -4744720;

	t8 = (x37<=((x38%x39)/x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	int32_t x44 = 7;
	volatile int32_t t9 = 18453;

	t9 = (x41<=((x42%x43)/x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 67589065854LLU;
	int32_t x46 = -1;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -57486279;

	t10 = (x45<=((x46%x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 2U;
	volatile int16_t x51 = INT16_MAX;
	volatile int32_t t11 = 1724243;

	t11 = (x49<=((x50%x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = -51;
	static volatile int16_t x54 = INT16_MIN;
	uint32_t x55 = 7U;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t12 = -451347100;

	t12 = (x53<=((x54%x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = -6;
	static int32_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int32_t t13 = 235;

	t13 = (x57<=((x58%x59)/x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -28LL;
	int8_t x62 = 3;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t14 = -71927;

	t14 = (x61<=((x62%x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x67 = 889U;
	static uint64_t x68 = 92LLU;
	int32_t t15 = -80978;

	t15 = (x65<=((x66%x67)/x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	uint8_t x70 = 1U;
	int16_t x72 = -1;
	volatile int32_t t16 = 2580889;

	t16 = (x69<=((x70%x71)/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -1;
	volatile uint32_t x74 = 45020267U;
	int32_t x75 = INT32_MAX;
	volatile int16_t x76 = -1229;
	int32_t t17 = -530708;

	t17 = (x73<=((x74%x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = UINT16_MAX;
	volatile int32_t t18 = 10865;

	t18 = (x77<=((x78%x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int64_t x82 = -8707230800233LL;
	int16_t x83 = INT16_MIN;
	static uint16_t x84 = 29908U;
	volatile int32_t t19 = 3;

	t19 = (x81<=((x82%x83)/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = -1LL;
	uint16_t x87 = 3U;
	uint16_t x88 = 9U;
	static int32_t t20 = 82585;

	t20 = (x85<=((x86%x87)/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = UINT8_MAX;
	static volatile uint64_t x91 = UINT64_MAX;
	static uint64_t x92 = UINT64_MAX;
	int32_t t21 = -67018708;

	t21 = (x89<=((x90%x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 6U;
	uint16_t x94 = 112U;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;

	t22 = (x93<=((x94%x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	int32_t t23 = 96874008;

	t23 = (x97<=((x98%x99)/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = 8LL;
	static int16_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t t24 = -16281524;

	t24 = (x101<=((x102%x103)/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 22U;
	uint32_t x106 = 50964710U;
	int16_t x107 = 899;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -85;

	t25 = (x105<=((x106%x107)/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = UINT16_MAX;
	static int8_t x110 = INT8_MAX;
	volatile int32_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	int32_t t26 = 301;

	t26 = (x109<=((x110%x111)/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1643967027050839LL;
	static int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	volatile int16_t x116 = 77;
	static int32_t t27 = 228589;

	t27 = (x113<=((x114%x115)/x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	volatile int64_t x120 = -1LL;
	int32_t t28 = 1044942;

	t28 = (x117<=((x118%x119)/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MAX;
	int8_t x128 = INT8_MAX;
	volatile int32_t t29 = -634;

	t29 = (x125<=((x126%x127)/x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x130 = UINT64_MAX;
	static int16_t x131 = INT16_MAX;
	uint32_t x132 = UINT32_MAX;
	static int32_t t30 = -61300446;

	t30 = (x129<=((x130%x131)/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x134 = 8U;
	static int8_t x135 = INT8_MAX;
	int32_t t31 = -114529430;

	t31 = (x133<=((x134%x135)/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int64_t x138 = INT64_MIN;
	int32_t x139 = -90664;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t32 = -3076571;

	t32 = (x137<=((x138%x139)/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x141 = 9;
	uint64_t x142 = 946481LLU;
	volatile int64_t x143 = INT64_MIN;
	volatile int32_t t33 = 54943601;

	t33 = (x141<=((x142%x143)/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	volatile int16_t x146 = INT16_MAX;
	int16_t x147 = 691;
	static int64_t x148 = INT64_MIN;

	t34 = (x145<=((x146%x147)/x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 7;
	int16_t x150 = 441;
	int16_t x151 = 51;
	int64_t x152 = INT64_MAX;
	static volatile int32_t t35 = 265;

	t35 = (x149<=((x150%x151)/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 0LLU;
	int32_t x154 = -405602311;
	uint16_t x155 = 3U;
	int16_t x156 = -1;
	int32_t t36 = -1769;

	t36 = (x153<=((x154%x155)/x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -96;
	uint8_t x158 = UINT8_MAX;
	int8_t x159 = 2;
	static volatile int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 887402220;

	t37 = (x157<=((x158%x159)/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 5946U;
	int32_t x163 = -1;
	int32_t x164 = -478104;
	volatile int32_t t38 = -13;

	t38 = (x161<=((x162%x163)/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -565702;
	uint16_t x167 = 26U;
	volatile int32_t t39 = 172143640;

	t39 = (x165<=((x166%x167)/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 0U;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t40 = -3824374;

	t40 = (x169<=((x170%x171)/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int32_t x174 = INT32_MIN;
	static int32_t x176 = -1;
	volatile int32_t t41 = 140;

	t41 = (x173<=((x174%x175)/x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x178 = 669U;
	volatile int32_t x179 = INT32_MIN;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t42 = 1439;

	t42 = (x177<=((x178%x179)/x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = UINT16_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t43 = 1823939;

	t43 = (x181<=((x182%x183)/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x186 = 3665;
	uint32_t x187 = 259675U;
	volatile int16_t x188 = -9;
	static int32_t t44 = 1;

	t44 = (x185<=((x186%x187)/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 145382505649481LLU;
	volatile int8_t x191 = INT8_MAX;
	volatile int64_t x192 = INT64_MAX;
	int32_t t45 = -3962458;

	t45 = (x189<=((x190%x191)/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	int32_t x194 = -3340;
	volatile uint8_t x195 = 5U;
	volatile uint32_t x196 = UINT32_MAX;
	static int32_t t46 = -946;

	t46 = (x193<=((x194%x195)/x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = 9656996;
	int32_t x199 = INT32_MIN;
	int32_t t47 = 2079761;

	t47 = (x197<=((x198%x199)/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x202 = 20U;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t48 = 238082;

	t48 = (x201<=((x202%x203)/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = 46;
	int32_t x207 = -1;
	int8_t x208 = 3;
	int32_t t49 = -11366204;

	t49 = (x205<=((x206%x207)/x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x209 = -1;
	int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t50 = 993595241;

	t50 = (x209<=((x210%x211)/x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	uint16_t x215 = 29U;
	volatile int32_t t51 = -285422340;

	t51 = (x213<=((x214%x215)/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x219 = -1005510841;
	int32_t t52 = 15259;

	t52 = (x217<=((x218%x219)/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = UINT8_MAX;
	static uint32_t x224 = UINT32_MAX;

	t53 = (x221<=((x222%x223)/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x225 = INT32_MIN;
	uint8_t x226 = 123U;
	int8_t x227 = INT8_MIN;
	volatile int64_t x228 = INT64_MAX;
	volatile int32_t t54 = 450227859;

	t54 = (x225<=((x226%x227)/x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x229 = 23420U;
	int8_t x230 = 1;
	uint8_t x231 = 1U;
	static uint8_t x232 = UINT8_MAX;

	t55 = (x229<=((x230%x231)/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 0U;
	int8_t x235 = INT8_MAX;
	volatile uint64_t x236 = 3488038LLU;
	volatile int32_t t56 = 81;

	t56 = (x233<=((x234%x235)/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x237 = UINT16_MAX;
	volatile int64_t x238 = INT64_MIN;
	int16_t x239 = -6212;
	uint32_t x240 = 24U;
	int32_t t57 = 228939;

	t57 = (x237<=((x238%x239)/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x242 = UINT32_MAX;
	int64_t x243 = -1LL;
	int8_t x244 = -1;

	t58 = (x241<=((x242%x243)/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x246 = -1;
	volatile int16_t x247 = 2;

	t59 = (x245<=((x246%x247)/x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 5552U;
	volatile int32_t t60 = -23250;

	t60 = (x249<=((x250%x251)/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	int16_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int32_t t61 = 112;

	t61 = (x253<=((x254%x255)/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = INT16_MAX;
	static int8_t x258 = -1;
	static int32_t x259 = INT32_MIN;

	t62 = (x257<=((x258%x259)/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	volatile int32_t x262 = -1;
	uint64_t x263 = 7114691229157LLU;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 67759772;

	t63 = (x261<=((x262%x263)/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -5;
	volatile int32_t t64 = 449;

	t64 = (x273<=((x274%x275)/x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	int64_t x278 = -837791LL;
	volatile int32_t x279 = 64559;
	uint8_t x280 = 120U;
	volatile int32_t t65 = 136711710;

	t65 = (x277<=((x278%x279)/x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x282 = 9U;
	uint16_t x283 = 15441U;
	uint32_t x284 = UINT32_MAX;
	static int32_t t66 = -6753931;

	t66 = (x281<=((x282%x283)/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MAX;
	int32_t x288 = -14262;
	int32_t t67 = 640;

	t67 = (x285<=((x286%x287)/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x290 = -1;
	int64_t x291 = INT64_MIN;
	volatile int32_t t68 = -203110946;

	t68 = (x289<=((x290%x291)/x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = -18;
	uint64_t x295 = 1313629631428591LLU;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t69 = 25;

	t69 = (x293<=((x294%x295)/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = INT16_MIN;
	int32_t x300 = INT32_MAX;
	volatile int32_t t70 = 1003923372;

	t70 = (x297<=((x298%x299)/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x301 = -6666LL;
	int32_t x302 = INT32_MAX;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t71 = 31089851;

	t71 = (x301<=((x302%x303)/x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	static volatile uint64_t x307 = UINT64_MAX;
	volatile int32_t t72 = 1;

	t72 = (x305<=((x306%x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = INT64_MIN;
	static int32_t x311 = -29;
	int16_t x312 = INT16_MAX;

	t73 = (x309<=((x310%x311)/x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x314 = UINT32_MAX;
	static int16_t x315 = INT16_MIN;
	int32_t t74 = -39309647;

	t74 = (x313<=((x314%x315)/x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = 1;
	uint16_t x319 = 18U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t75 = -1416;

	t75 = (x317<=((x318%x319)/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x321 = INT64_MAX;
	volatile int8_t x322 = INT8_MIN;
	int32_t x323 = -13167499;
	static uint32_t x324 = 7936998U;
	volatile int32_t t76 = 221;

	t76 = (x321<=((x322%x323)/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = -1;
	int32_t x328 = INT32_MIN;
	static volatile int32_t t77 = 3755986;

	t77 = (x325<=((x326%x327)/x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x329 = 88082013181LL;
	uint32_t x330 = 20182569U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t78 = -22;

	t78 = (x329<=((x330%x331)/x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = 1427057391411420LL;
	static uint32_t x336 = UINT32_MAX;
	int32_t t79 = -76;

	t79 = (x333<=((x334%x335)/x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = -599884;
	uint32_t x340 = 239287U;
	static int32_t t80 = 21827;

	t80 = (x337<=((x338%x339)/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -1;
	int32_t x342 = 1702;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = -1;

	t81 = (x341<=((x342%x343)/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -1LL;
	int8_t x346 = -2;
	static uint64_t x347 = 2861LLU;
	uint64_t x348 = 105471030LLU;
	volatile int32_t t82 = -13423644;

	t82 = (x345<=((x346%x347)/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = -385216LL;
	uint64_t x351 = 65716749886331LLU;
	int64_t x352 = INT64_MIN;
	int32_t t83 = -440544;

	t83 = (x349<=((x350%x351)/x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 131U;
	volatile int64_t x354 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t x356 = -1;
	int32_t t84 = 54485165;

	t84 = (x353<=((x354%x355)/x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = 136487;
	volatile int8_t x358 = INT8_MAX;
	volatile int64_t x359 = 2937737188581553039LL;
	volatile int32_t t85 = 0;

	t85 = (x357<=((x358%x359)/x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x362 = 8383U;
	int16_t x363 = -1;
	volatile int32_t t86 = -11;

	t86 = (x361<=((x362%x363)/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x370 = -60891037786717LL;
	int8_t x371 = -13;
	static int8_t x372 = INT8_MAX;
	int32_t t87 = 1;

	t87 = (x369<=((x370%x371)/x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = 896400LL;
	volatile int64_t x374 = 5726594875LL;
	static uint8_t x375 = UINT8_MAX;
	static uint16_t x376 = 7U;
	int32_t t88 = -17306;

	t88 = (x373<=((x374%x375)/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x378 = UINT16_MAX;
	volatile uint16_t x379 = 8606U;
	uint16_t x380 = 2U;
	int32_t t89 = 0;

	t89 = (x377<=((x378%x379)/x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 155107829U;
	volatile int8_t x382 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	static volatile int32_t x384 = -1;
	int32_t t90 = 122724;

	t90 = (x381<=((x382%x383)/x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t91 = -266963;

	t91 = (x389<=((x390%x391)/x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x393 = 43U;
	static uint32_t x394 = UINT32_MAX;
	uint32_t x395 = UINT32_MAX;
	static int8_t x396 = INT8_MIN;
	int32_t t92 = 149;

	t92 = (x393<=((x394%x395)/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x397 = 10657LLU;
	volatile int64_t x398 = -1LL;
	static int16_t x399 = INT16_MIN;
	volatile int8_t x400 = -1;
	volatile int32_t t93 = 42289;

	t93 = (x397<=((x398%x399)/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x403 = INT16_MIN;
	static int32_t t94 = -518264;

	t94 = (x401<=((x402%x403)/x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x405 = INT8_MIN;
	uint16_t x406 = 0U;
	int16_t x407 = -124;
	static volatile uint16_t x408 = 1U;
	volatile int32_t t95 = -76989;

	t95 = (x405<=((x406%x407)/x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x409 = 250LL;
	int8_t x411 = 3;
	int64_t x412 = 100186963LL;
	volatile int32_t t96 = -14;

	t96 = (x409<=((x410%x411)/x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	int8_t x418 = -1;
	int8_t x419 = INT8_MAX;
	uint32_t x420 = 229U;
	volatile int32_t t97 = -3886;

	t97 = (x417<=((x418%x419)/x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -54025;
	static volatile int8_t x422 = INT8_MAX;
	int16_t x423 = -260;
	int16_t x424 = -1;
	static volatile int32_t t98 = -147235;

	t98 = (x421<=((x422%x423)/x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -1;
	uint64_t x426 = 26774667959647LLU;
	uint64_t x428 = 16LLU;
	static int32_t t99 = 0;

	t99 = (x425<=((x426%x427)/x428));

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

