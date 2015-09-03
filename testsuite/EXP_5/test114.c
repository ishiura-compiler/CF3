#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = INT32_MAX;
uint16_t x13 = UINT16_MAX;
static volatile int64_t x14 = -1LL;
volatile uint32_t x18 = 384U;
volatile int64_t x23 = 11254832317570LL;
static uint8_t x27 = 50U;
uint32_t x28 = 193637591U;
int64_t x32 = -3387LL;
int32_t t8 = 210127;
volatile int32_t t9 = 2140636;
int16_t x49 = -250;
uint16_t x52 = UINT16_MAX;
volatile int32_t t11 = -3;
static int8_t x58 = 1;
volatile int16_t x59 = -1;
static uint32_t x60 = 433U;
int8_t x62 = INT8_MIN;
int64_t x68 = INT64_MAX;
int32_t t14 = 1963;
int64_t x71 = INT64_MAX;
int8_t x74 = INT8_MIN;
uint32_t x75 = UINT32_MAX;
int32_t x85 = -4;
uint8_t x93 = 7U;
volatile int8_t x97 = 7;
int16_t x102 = -1;
volatile uint64_t x103 = 314779239LLU;
int16_t x104 = -9;
volatile int8_t x106 = 7;
static uint64_t x108 = 171285984569827104LLU;
int8_t x113 = 4;
volatile int64_t x115 = -3847623348205LL;
int8_t x121 = INT8_MIN;
int32_t x135 = -4097;
uint64_t x141 = UINT64_MAX;
uint8_t x144 = 12U;
uint8_t x147 = UINT8_MAX;
int8_t x153 = -1;
int8_t x180 = -1;
int16_t x189 = 1066;
int32_t t44 = -5576210;
int32_t t45 = 459736;
uint64_t x203 = 524404697447LLU;
volatile uint64_t x207 = 23387847371132LLU;
static int32_t x208 = INT32_MIN;
uint64_t x214 = 946731775417150555LLU;
int16_t x215 = 0;
uint64_t x223 = 172700LLU;
volatile int32_t t52 = 5;
static int8_t x237 = INT8_MIN;
uint16_t x238 = 736U;
int64_t x253 = INT64_MIN;
uint8_t x264 = 8U;
static uint8_t x265 = UINT8_MAX;
int8_t x281 = INT8_MAX;
int32_t t62 = 1930;
static volatile int32_t t63 = -12630;
uint16_t x290 = UINT16_MAX;
static uint16_t x295 = UINT16_MAX;
volatile int32_t t65 = -219;
int32_t x305 = INT32_MIN;
int8_t x307 = 1;
static uint32_t x309 = UINT32_MAX;
int32_t t71 = -447141;
int32_t x334 = -448730;
uint32_t x335 = 33126U;
volatile uint16_t x337 = 107U;
volatile int32_t x341 = 2019;
static volatile uint32_t x352 = UINT32_MAX;
uint8_t x354 = UINT8_MAX;
int32_t t77 = -347866;
int64_t x358 = -5LL;
uint64_t x359 = UINT64_MAX;
int8_t x362 = INT8_MIN;
volatile uint64_t x371 = UINT64_MAX;
int64_t x372 = -1LL;
uint32_t x397 = UINT32_MAX;
uint64_t x401 = 2644237LLU;
int32_t x402 = -64047085;
static int64_t x412 = INT64_MIN;
static volatile int64_t x414 = INT64_MIN;
volatile int16_t x415 = 3487;
static int32_t x426 = INT32_MIN;
volatile uint16_t x430 = UINT16_MAX;
uint8_t x431 = 10U;
static int16_t x433 = INT16_MIN;
static int64_t x439 = -3526611588623372439LL;
int8_t x440 = 10;
int64_t x449 = INT64_MIN;
volatile int64_t x451 = 2341049818546703718LL;
int64_t x452 = INT64_MIN;
int32_t t97 = -3;
volatile int32_t x456 = -1132;
static int8_t x460 = INT8_MAX;


void f0(void) {
	static uint32_t x1 = 1061758U;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = 0;
	volatile uint16_t x4 = 113U;
	int32_t t0 = 53731711;

	t0 = (x1<=((x2+x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	volatile int64_t x7 = -105329LL;
	int16_t x8 = 0;
	volatile int32_t t1 = -706463;

	t1 = (x5<=((x6+x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	static int64_t x10 = INT64_MIN;
	int32_t x12 = -50;
	static volatile int32_t t2 = -961915398;

	t2 = (x9<=((x10+x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = 184LLU;
	int16_t x16 = INT16_MAX;
	static int32_t t3 = 4330;

	t3 = (x13<=((x14+x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x19 = 521717956999LLU;
	int32_t x20 = -1;
	volatile int32_t t4 = -22499662;

	t4 = (x17<=((x18+x19)<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -47;
	volatile uint16_t x22 = UINT16_MAX;
	uint8_t x24 = 23U;
	volatile int32_t t5 = -155240552;

	t5 = (x21<=((x22+x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t t6 = 2;

	t6 = (x25<=((x26+x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -62;
	int16_t x30 = -1;
	int64_t x31 = -1LL;
	static int32_t t7 = 346106;

	t7 = (x29<=((x30+x31)<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MAX;
	uint32_t x36 = 5U;

	t8 = (x33<=((x34+x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static uint32_t x38 = UINT32_MAX;
	int32_t x39 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;

	t9 = (x37<=((x38+x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = 81U;
	int8_t x47 = -7;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t10 = -183;

	t10 = (x45<=((x46+x47)<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MIN;
	uint64_t x51 = 65787188522810LLU;

	t11 = (x49<=((x50+x51)<x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = INT64_MIN;
	static volatile int32_t t12 = 75652;

	t12 = (x57<=((x58+x59)<x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 1;
	uint64_t x63 = 6016751LLU;
	int32_t x64 = INT32_MIN;
	int32_t t13 = 431;

	t13 = (x61<=((x62+x63)<x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	static int64_t x66 = -1LL;
	int32_t x67 = 386947189;

	t14 = (x65<=((x66+x67)<x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x69 = 12383603U;
	static volatile uint8_t x70 = 0U;
	uint16_t x72 = 704U;
	int32_t t15 = 1488109;

	t15 = (x69<=((x70+x71)<x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	static uint64_t x76 = 8262480008583LLU;
	int32_t t16 = 139;

	t16 = (x73<=((x74+x75)<x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 24479U;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 5U;
	int16_t x80 = -12923;
	static int32_t t17 = 91620545;

	t17 = (x77<=((x78+x79)<x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	uint64_t x82 = UINT64_MAX;
	static uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t18 = 8331;

	t18 = (x81<=((x82+x83)<x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = -12;
	uint8_t x87 = 6U;
	int64_t x88 = 120955572006LL;
	int32_t t19 = 289;

	t19 = (x85<=((x86+x87)<x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 31U;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	int32_t x92 = INT32_MAX;
	volatile int32_t t20 = -111405;

	t20 = (x89<=((x90+x91)<x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MIN;
	static uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t21 = -158790;

	t21 = (x93<=((x94+x95)<x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -14737;
	volatile uint8_t x99 = 4U;
	volatile uint64_t x100 = 10LLU;
	int32_t t22 = -3;

	t22 = (x97<=((x98+x99)<x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int32_t t23 = -14080954;

	t23 = (x101<=((x102+x103)<x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 1U;
	volatile int64_t x107 = INT64_MIN;
	static int32_t t24 = -359597;

	t24 = (x105<=((x106+x107)<x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	static volatile int64_t x110 = INT64_MIN;
	int16_t x111 = 9515;
	static uint64_t x112 = UINT64_MAX;
	int32_t t25 = 5817;

	t25 = (x109<=((x110+x111)<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x114 = -871;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t26 = -9;

	t26 = (x113<=((x114+x115)<x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;
	int32_t x118 = 3;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = INT8_MAX;
	static int32_t t27 = -58695309;

	t27 = (x117<=((x118+x119)<x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x122 = 1U;
	int16_t x123 = -1;
	uint64_t x124 = 12654869141LLU;
	volatile int32_t t28 = -142352;

	t28 = (x121<=((x122+x123)<x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = 315;
	int16_t x127 = 820;
	int16_t x128 = INT16_MIN;
	int32_t t29 = -126;

	t29 = (x125<=((x126+x127)<x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	volatile int32_t t30 = 173371384;

	t30 = (x129<=((x130+x131)<x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -21121517656472867LL;
	int8_t x134 = INT8_MIN;
	uint64_t x136 = 138684703057826LLU;
	volatile int32_t t31 = -23;

	t31 = (x133<=((x134+x135)<x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MIN;
	int8_t x138 = -5;
	volatile uint32_t x139 = 1805841U;
	static uint64_t x140 = 10425100717448285LLU;
	volatile int32_t t32 = 1;

	t32 = (x137<=((x138+x139)<x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = 1;
	int16_t x143 = INT16_MIN;
	volatile int32_t t33 = -5;

	t33 = (x141<=((x142+x143)<x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -5;
	static int32_t x146 = -493660;
	int8_t x148 = INT8_MIN;
	int32_t t34 = -239266;

	t34 = (x145<=((x146+x147)<x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MAX;
	int16_t x151 = 0;
	volatile int64_t x152 = -1LL;
	static volatile int32_t t35 = 29341410;

	t35 = (x149<=((x150+x151)<x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x154 = INT32_MIN;
	static uint64_t x155 = 47015385154991LLU;
	int8_t x156 = -1;
	static int32_t t36 = 7;

	t36 = (x153<=((x154+x155)<x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -1;
	int64_t x159 = INT64_MAX;
	int16_t x160 = -10355;
	int32_t t37 = -5;

	t37 = (x157<=((x158+x159)<x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 6204U;
	volatile int32_t x162 = -1;
	volatile int8_t x163 = INT8_MIN;
	uint16_t x164 = 1U;
	volatile int32_t t38 = 482771;

	t38 = (x161<=((x162+x163)<x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -36;
	int16_t x166 = 4;
	static volatile int16_t x167 = -1;
	uint64_t x168 = 98341LLU;
	volatile int32_t t39 = -6901;

	t39 = (x165<=((x166+x167)<x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -1;
	static volatile int32_t t40 = 2;

	t40 = (x169<=((x170+x171)<x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = 2;
	int32_t x178 = INT32_MIN;
	uint64_t x179 = UINT64_MAX;
	int32_t t41 = 1;

	t41 = (x177<=((x178+x179)<x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = UINT8_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t42 = 430874514;

	t42 = (x181<=((x182+x183)<x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = -1045180470LL;
	uint32_t x186 = 524867U;
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 6373071716704037LLU;
	volatile int32_t t43 = 2;

	t43 = (x185<=((x186+x187)<x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x190 = 52U;
	int32_t x191 = -1117;
	int32_t x192 = -4;

	t44 = (x189<=((x190+x191)<x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 8640765U;
	uint64_t x194 = 2130309LLU;
	uint32_t x195 = 1028343U;
	int32_t x196 = INT32_MIN;

	t45 = (x193<=((x194+x195)<x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = -1LL;
	uint32_t x202 = 570U;
	volatile int64_t x204 = -798133103705900057LL;
	int32_t t46 = 0;

	t46 = (x201<=((x202+x203)<x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 3U;
	static uint64_t x206 = 5751145165169919119LLU;
	int32_t t47 = 301308;

	t47 = (x205<=((x206+x207)<x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = 5;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 7U;
	static uint64_t x212 = 2815625944883379299LLU;
	static int32_t t48 = -24329;

	t48 = (x209<=((x210+x211)<x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x216 = UINT64_MAX;
	int32_t t49 = -1154467;

	t49 = (x213<=((x214+x215)<x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	static uint64_t x218 = 2LLU;
	int64_t x219 = INT64_MAX;
	static int8_t x220 = INT8_MIN;
	int32_t t50 = 208;

	t50 = (x217<=((x218+x219)<x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = INT32_MAX;
	int64_t x222 = -4LL;
	uint64_t x224 = 832932542783LLU;
	volatile int32_t t51 = 30;

	t51 = (x221<=((x222+x223)<x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = UINT8_MAX;
	volatile int16_t x227 = -14;
	uint32_t x228 = UINT32_MAX;

	t52 = (x225<=((x226+x227)<x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = -1;
	static int16_t x230 = INT16_MAX;
	volatile int32_t x231 = -149430659;
	static uint16_t x232 = UINT16_MAX;
	int32_t t53 = 25;

	t53 = (x229<=((x230+x231)<x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x239 = -738439678565342LL;
	int16_t x240 = INT16_MIN;
	volatile int32_t t54 = 205;

	t54 = (x237<=((x238+x239)<x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 172511359236294951LLU;
	static volatile int8_t x242 = -1;
	uint8_t x243 = 0U;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t55 = 21;

	t55 = (x241<=((x242+x243)<x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	static int32_t t56 = 0;

	t56 = (x245<=((x246+x247)<x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 792491LLU;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = -71203LL;
	uint32_t x252 = 422156467U;
	static int32_t t57 = -314805;

	t57 = (x249<=((x250+x251)<x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = -66;
	uint64_t x255 = 2030431100016746LLU;
	int16_t x256 = INT16_MIN;
	int32_t t58 = 12;

	t58 = (x253<=((x254+x255)<x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 15U;
	int32_t t59 = 585957;

	t59 = (x257<=((x258+x259)<x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MAX;
	int64_t x263 = -4420380189643122129LL;
	int32_t t60 = -478727;

	t60 = (x261<=((x262+x263)<x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MAX;
	static int8_t x268 = -1;
	int32_t t61 = -62962;

	t61 = (x265<=((x266+x267)<x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x282 = UINT64_MAX;
	static volatile int64_t x283 = -20937770LL;
	volatile int32_t x284 = -1883278;

	t62 = (x281<=((x282+x283)<x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 2009U;
	volatile uint32_t x287 = 48U;
	int32_t x288 = 33141969;

	t63 = (x285<=((x286+x287)<x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	int32_t x291 = 603;
	int16_t x292 = -1;
	volatile int32_t t64 = -41129;

	t64 = (x289<=((x290+x291)<x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MAX;
	static uint64_t x294 = 31475877LLU;
	int16_t x296 = INT16_MIN;

	t65 = (x293<=((x294+x295)<x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = 26196645LL;
	int8_t x299 = -7;
	static int16_t x300 = INT16_MAX;
	int32_t t66 = 207491888;

	t66 = (x297<=((x298+x299)<x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = 2042203851763LL;
	volatile int64_t x308 = -1LL;
	volatile int32_t t67 = 11171628;

	t67 = (x305<=((x306+x307)<x308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 66U;
	volatile int32_t t68 = -50978683;

	t68 = (x309<=((x310+x311)<x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = 1;
	static int32_t x318 = INT32_MIN;
	static int64_t x319 = -3981378450142601056LL;
	int16_t x320 = INT16_MAX;
	int32_t t69 = 2289055;

	t69 = (x317<=((x318+x319)<x320));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 11102U;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t70 = -226814605;

	t70 = (x321<=((x322+x323)<x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x325 = -66374245;
	uint32_t x326 = 5U;
	uint64_t x327 = 10188807LLU;
	int64_t x328 = INT64_MIN;

	t71 = (x325<=((x326+x327)<x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = 0;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t72 = -7;

	t72 = (x333<=((x334+x335)<x336));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x338 = INT32_MAX;
	static int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t73 = -8137;

	t73 = (x337<=((x338+x339)<x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x342 = INT64_MIN;
	volatile int8_t x343 = 3;
	volatile int8_t x344 = -1;
	int32_t t74 = -35158899;

	t74 = (x341<=((x342+x343)<x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x345 = -95LL;
	int16_t x346 = 8189;
	uint16_t x347 = 2U;
	uint16_t x348 = 11U;
	volatile int32_t t75 = 1051896706;

	t75 = (x345<=((x346+x347)<x348));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = 7221462U;
	uint16_t x350 = 178U;
	int8_t x351 = 50;
	int32_t t76 = 13461789;

	t76 = (x349<=((x350+x351)<x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = INT32_MAX;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MAX;

	t77 = (x353<=((x354+x355)<x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = INT8_MIN;
	static uint8_t x360 = 3U;
	volatile int32_t t78 = -5;

	t78 = (x357<=((x358+x359)<x360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = 230;
	static uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	static int32_t t79 = 0;

	t79 = (x361<=((x362+x363)<x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x365 = UINT32_MAX;
	static int64_t x366 = INT64_MAX;
	static int8_t x367 = INT8_MIN;
	static volatile int64_t x368 = INT64_MIN;
	volatile int32_t t80 = 15275;

	t80 = (x365<=((x366+x367)<x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = INT64_MIN;
	volatile uint16_t x370 = 4U;
	volatile int32_t t81 = -223;

	t81 = (x369<=((x370+x371)<x372));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MAX;
	static uint16_t x382 = 24498U;
	volatile uint16_t x383 = 2195U;
	uint8_t x384 = 52U;
	int32_t t82 = -4;

	t82 = (x381<=((x382+x383)<x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = 177025425U;
	volatile uint8_t x386 = 7U;
	int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MAX;
	int32_t t83 = -24450;

	t83 = (x385<=((x386+x387)<x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x389 = 16659U;
	int64_t x390 = -72848706897171LL;
	int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MAX;
	volatile int32_t t84 = 923236592;

	t84 = (x389<=((x390+x391)<x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x398 = 0;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = -1;
	volatile int32_t t85 = 6691866;

	t85 = (x397<=((x398+x399)<x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x403 = -17571;
	static int8_t x404 = -35;
	int32_t t86 = -11;

	t86 = (x401<=((x402+x403)<x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 2027155LLU;
	volatile int16_t x406 = -8;
	int8_t x407 = INT8_MIN;
	volatile int8_t x408 = -1;
	int32_t t87 = 1731242;

	t87 = (x405<=((x406+x407)<x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x409 = INT64_MIN;
	static int16_t x410 = -1;
	static uint32_t x411 = UINT32_MAX;
	volatile int32_t t88 = 653184;

	t88 = (x409<=((x410+x411)<x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x413 = INT32_MIN;
	int32_t x416 = INT32_MAX;
	volatile int32_t t89 = -19;

	t89 = (x413<=((x414+x415)<x416));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = 32U;
	volatile int16_t x418 = INT16_MIN;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MAX;
	int32_t t90 = 20573;

	t90 = (x417<=((x418+x419)<x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x425 = 370LLU;
	uint64_t x427 = 115LLU;
	uint32_t x428 = 976268464U;
	int32_t t91 = -217645;

	t91 = (x425<=((x426+x427)<x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x429 = 0U;
	int32_t x432 = INT32_MIN;
	static int32_t t92 = 0;

	t92 = (x429<=((x430+x431)<x432));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x434 = 10U;
	int8_t x435 = -2;
	int64_t x436 = 7LL;
	volatile int32_t t93 = 2;

	t93 = (x433<=((x434+x435)<x436));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x437 = -1;
	volatile int8_t x438 = INT8_MIN;
	volatile int32_t t94 = -78479;

	t94 = (x437<=((x438+x439)<x440));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MAX;
	static uint64_t x442 = 25045LLU;
	int16_t x443 = INT16_MAX;
	uint8_t x444 = 75U;
	volatile int32_t t95 = -916719;

	t95 = (x441<=((x442+x443)<x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = -3;
	uint16_t x446 = 1136U;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = -2374;
	static volatile int32_t t96 = -3252208;

	t96 = (x445<=((x446+x447)<x448));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x450 = 2107LLU;

	t97 = (x449<=((x450+x451)<x452));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = INT32_MAX;
	uint64_t x455 = 2410LLU;
	static int32_t t98 = 10558;

	t98 = (x453<=((x454+x455)<x456));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = INT32_MIN;
	volatile uint64_t x458 = 1LLU;
	int8_t x459 = INT8_MIN;
	static int32_t t99 = -1;

	t99 = (x457<=((x458+x459)<x460));

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

