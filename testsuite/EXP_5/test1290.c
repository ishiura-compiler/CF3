#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 25;
static uint32_t t2 = 31U;
int16_t x14 = INT16_MIN;
int64_t x19 = -1LL;
static int64_t x21 = 3501141420LL;
uint32_t x23 = 2021247213U;
int32_t x25 = INT32_MIN;
static int64_t x38 = INT64_MAX;
int16_t x41 = -1;
int64_t x45 = 2061834661983085LL;
uint64_t x48 = UINT64_MAX;
volatile int64_t t11 = -491670LL;
int32_t x53 = INT32_MIN;
static volatile int32_t t13 = 49;
volatile uint32_t x60 = UINT32_MAX;
int16_t x64 = 100;
volatile uint32_t t15 = UINT32_MAX;
uint8_t x65 = 18U;
volatile int64_t x66 = INT64_MIN;
int8_t x67 = INT8_MIN;
int8_t x71 = 0;
int16_t x80 = -1;
int32_t t19 = 733930;
static uint8_t x88 = 89U;
int32_t t21 = INT32_MIN;
int16_t x91 = -68;
volatile int32_t t22 = -3;
uint64_t x93 = 828LLU;
int8_t x102 = 5;
uint32_t x107 = UINT32_MAX;
int32_t t27 = -821154975;
int16_t x113 = -6677;
uint8_t x119 = UINT8_MAX;
static volatile int8_t x126 = INT8_MAX;
uint8_t x127 = UINT8_MAX;
uint64_t t31 = 1548964382LLU;
int64_t x134 = 2105LL;
int16_t x137 = INT16_MIN;
static uint32_t x138 = UINT32_MAX;
int8_t x144 = INT8_MIN;
static uint32_t x154 = 25U;
static int64_t t38 = 11839380LL;
int16_t x157 = INT16_MIN;
static int64_t t41 = 457823656558142LL;
static int64_t x173 = INT64_MIN;
uint8_t x175 = 5U;
volatile int32_t t45 = -11585;
static int64_t x185 = INT64_MIN;
int16_t x194 = INT16_MIN;
int64_t x212 = INT64_MAX;
int32_t t52 = 3710738;
volatile int32_t x223 = 113109784;
static volatile int64_t x225 = -1615781094630LL;
int64_t x241 = 1LL;
int32_t x250 = INT32_MAX;
volatile int64_t t62 = -81327727514304LL;
int32_t x256 = INT32_MAX;
volatile int32_t t63 = INT32_MIN;
volatile int64_t x261 = INT64_MIN;
uint64_t x264 = UINT64_MAX;
int64_t t67 = -10089491946LL;
volatile uint64_t x278 = 58794LLU;
int8_t x284 = -3;
uint8_t x286 = 26U;
static uint64_t x288 = UINT64_MAX;
int64_t x297 = -1LL;
volatile int8_t x304 = -51;
uint64_t x312 = 2228024807390LLU;
volatile int8_t x317 = INT8_MIN;
static volatile int64_t x331 = INT64_MIN;
uint32_t x334 = UINT32_MAX;
int32_t t83 = -15;
static uint64_t x344 = UINT64_MAX;
static int32_t x349 = INT32_MAX;
volatile int16_t x352 = 252;
static volatile int32_t t88 = -11624;
uint64_t x360 = UINT64_MAX;
volatile int32_t t89 = 0;
int32_t x364 = INT32_MIN;
int16_t x368 = 33;
volatile uint64_t t93 = 2146973645399057794LLU;
uint16_t x379 = 2844U;
int32_t t95 = 358773199;
int16_t x385 = -821;
uint64_t x387 = UINT64_MAX;
int16_t x392 = 2;
int16_t x394 = INT16_MIN;
int16_t x398 = INT16_MIN;
uint8_t x400 = 14U;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = UINT16_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -103565393;

	t0 = (x1*((x2==x3)<x4));

	if (t0 != 25) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = 71043671221LL;
	volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -688650868;

	t1 = (x5*((x6==x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2U;
	int16_t x10 = -1;
	int32_t x11 = -1;
	static int64_t x12 = INT64_MIN;

	t2 = (x9*((x10==x11)<x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	uint16_t x15 = 8119U;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x13*((x14==x15)<x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x18 = 5591U;
	volatile uint16_t x20 = UINT16_MAX;
	static volatile int32_t t4 = 3010;

	t4 = (x17*((x18==x19)<x20));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = 13688;
	int16_t x24 = -1;
	volatile int64_t t5 = 7LL;

	t5 = (x21*((x22==x23)<x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	static int32_t x28 = -625;
	volatile int32_t t6 = -1;

	t6 = (x25*((x26==x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1588231397248374LL;
	static int32_t x30 = INT32_MAX;
	static int8_t x31 = INT8_MAX;
	int8_t x32 = INT8_MIN;
	volatile int64_t t7 = 2LL;

	t7 = (x29*((x30==x31)<x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = 271345177620749203LL;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 65756853U;
	volatile int32_t x36 = INT32_MIN;
	int64_t t8 = 1007525419902LL;

	t8 = (x33*((x34==x35)<x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1000U;
	volatile uint32_t x39 = UINT32_MAX;
	int32_t x40 = -1;
	volatile int32_t t9 = -113;

	t9 = (x37*((x38==x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 15278;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -39597;

	t10 = (x41*((x42==x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x46 = -332120;
	static uint8_t x47 = UINT8_MAX;

	t11 = (x45*((x46==x47)<x48));

	if (t11 != 2061834661983085LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1218368948631926324LL;
	uint8_t x50 = 46U;
	volatile int8_t x51 = INT8_MIN;
	static uint64_t x52 = 536632154849550LLU;
	int64_t t12 = 103899277467749507LL;

	t12 = (x49*((x50==x51)<x52));

	if (t12 != -1218368948631926324LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = UINT8_MAX;
	uint32_t x55 = UINT32_MAX;
	static int16_t x56 = INT16_MIN;

	t13 = (x53*((x54==x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1727661469633476819LLU;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint64_t t14 = 327779087LLU;

	t14 = (x57*((x58==x59)<x60));

	if (t14 != 1727661469633476819LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = 0U;

	t15 = (x61*((x62==x63)<x64));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x68 = -52;
	int32_t t16 = 74;

	t16 = (x65*((x66==x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	static int64_t x70 = INT64_MAX;
	int64_t x72 = -8982LL;
	int32_t t17 = 1;

	t17 = (x69*((x70==x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	int64_t x75 = 3195546881908873387LL;
	static volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 3177;

	t18 = (x73*((x74==x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = 1520LLU;

	t19 = (x77*((x78==x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile uint64_t x82 = 5862218LLU;
	volatile uint64_t x83 = 6460LLU;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 84;

	t20 = (x81*((x82==x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;

	t21 = (x85*((x86==x87)<x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint8_t x90 = 6U;
	int16_t x92 = INT16_MAX;

	t22 = (x89*((x90==x91)<x92));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = 47424U;
	int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MAX;
	static volatile uint64_t t23 = 9121342448218LLU;

	t23 = (x93*((x94==x95)<x96));

	if (t23 != 828LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = 3293;
	uint8_t x100 = 72U;
	int32_t t24 = -3800457;

	t24 = (x97*((x98==x99)<x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile uint16_t x103 = 1U;
	static int8_t x104 = 1;
	volatile int32_t t25 = -3598;

	t25 = (x101*((x102==x103)<x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 15U;
	uint16_t x106 = 4U;
	int32_t x108 = INT32_MAX;
	int32_t t26 = 4865;

	t26 = (x105*((x106==x107)<x108));

	if (t26 != 15) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -11;
	int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = -1;

	t27 = (x109*((x110==x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 4U;
	uint8_t x115 = 1U;
	int8_t x116 = -1;
	int32_t t28 = -4124;

	t28 = (x113*((x114==x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 28277U;
	int32_t x118 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	static volatile uint32_t t29 = 496U;

	t29 = (x117*((x118==x119)<x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 156U;
	static int16_t x122 = 7340;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = -2;
	uint32_t t30 = 68083357U;

	t30 = (x121*((x122==x123)<x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 3837715473783190LLU;
	uint16_t x128 = 5576U;

	t31 = (x125*((x126==x127)<x128));

	if (t31 != 3837715473783190LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	uint8_t x130 = 2U;
	int8_t x131 = -1;
	uint8_t x132 = 57U;
	static int32_t t32 = 230;

	t32 = (x129*((x130==x131)<x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int64_t x135 = -1LL;
	int64_t x136 = -1LL;
	uint64_t t33 = 122390574423165LLU;

	t33 = (x133*((x134==x135)<x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = 50654997;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -884838;

	t34 = (x137*((x138==x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -6;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1LL;
	int32_t t35 = 2;

	t35 = (x141*((x142==x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 59;
	uint16_t x146 = 5U;
	int8_t x147 = 12;
	static int64_t x148 = INT64_MAX;
	static int32_t t36 = -5713;

	t36 = (x145*((x146==x147)<x148));

	if (t36 != 59) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -960574224987632340LL;
	int32_t x150 = 9672528;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = -1;
	static int64_t t37 = -1698460581LL;

	t37 = (x149*((x150==x151)<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -168477523738LL;
	uint64_t x155 = 30785755873162076LLU;
	int32_t x156 = -1;

	t38 = (x153*((x154==x155)<x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x158 = 421829482440497480LLU;
	int16_t x159 = 8449;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -114;

	t39 = (x157*((x158==x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	int64_t x162 = -16661568358LL;
	int64_t x163 = 6639298LL;
	static uint64_t x164 = 66232221725005LLU;
	volatile int32_t t40 = -1456;

	t40 = (x161*((x162==x163)<x164));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -26LL;
	int32_t x166 = INT32_MAX;
	volatile int16_t x167 = -1;
	int16_t x168 = INT16_MAX;

	t41 = (x165*((x166==x167)<x168));

	if (t41 != -26LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -30;
	int64_t x170 = -1LL;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = 2734;
	int32_t t42 = -3311639;

	t42 = (x169*((x170==x171)<x172));

	if (t42 != -30) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = 146456;
	uint8_t x176 = UINT8_MAX;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x173*((x174==x175)<x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	static int64_t x178 = INT64_MAX;
	volatile int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = -1668775980959394LL;

	t44 = (x177*((x178==x179)<x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 570;
	int64_t x182 = INT64_MAX;
	int64_t x183 = -30LL;
	volatile int16_t x184 = INT16_MAX;

	t45 = (x181*((x182==x183)<x184));

	if (t45 != 570) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x186 = UINT32_MAX;
	static volatile uint16_t x187 = UINT16_MAX;
	static int16_t x188 = INT16_MAX;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (x185*((x186==x187)<x188));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 9LLU;
	int64_t x190 = INT64_MIN;
	volatile int16_t x191 = INT16_MAX;
	uint8_t x192 = 7U;
	uint64_t t47 = 10LLU;

	t47 = (x189*((x190==x191)<x192));

	if (t47 != 9LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -20374765636LL;
	int32_t x195 = -31784613;
	static int32_t x196 = INT32_MIN;
	int64_t t48 = 214559720LL;

	t48 = (x193*((x194==x195)<x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -1LL;
	static volatile int64_t x198 = -1LL;
	int8_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	int64_t t49 = 1387270542696001965LL;

	t49 = (x197*((x198==x199)<x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -183084777300820LL;
	static int8_t x202 = 0;
	volatile int64_t x203 = -1LL;
	int8_t x204 = 3;
	int64_t t50 = -8LL;

	t50 = (x201*((x202==x203)<x204));

	if (t50 != -183084777300820LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 12456U;
	volatile uint16_t x206 = UINT16_MAX;
	volatile int32_t x207 = INT32_MAX;
	uint32_t x208 = 81955U;
	volatile int32_t t51 = -32250;

	t51 = (x205*((x206==x207)<x208));

	if (t51 != 12456) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static int32_t x210 = -1;
	static uint16_t x211 = UINT16_MAX;

	t52 = (x209*((x210==x211)<x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -3;
	uint64_t x214 = 48070001156LLU;
	volatile uint64_t x215 = 87381415015847LLU;
	int32_t x216 = INT32_MIN;
	int32_t t53 = 28173077;

	t53 = (x213*((x214==x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = UINT16_MAX;
	uint8_t x218 = 68U;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t54 = 612200;

	t54 = (x217*((x218==x219)<x220));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 121335U;
	int64_t x222 = -1LL;
	static uint32_t x224 = 19203U;
	volatile uint32_t t55 = 2773048U;

	t55 = (x221*((x222==x223)<x224));

	if (t55 != 121335U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = 767584076LL;
	uint8_t x227 = 77U;
	static int32_t x228 = INT32_MAX;
	volatile int64_t t56 = 7193LL;

	t56 = (x225*((x226==x227)<x228));

	if (t56 != -1615781094630LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	volatile uint16_t x230 = 11U;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = -1;
	volatile int64_t t57 = 139312377575371357LL;

	t57 = (x229*((x230==x231)<x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int16_t x234 = -757;
	uint64_t x235 = 343900511132LLU;
	int16_t x236 = 1;
	volatile int64_t t58 = -3475260982LL;

	t58 = (x233*((x234==x235)<x236));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = 0;
	uint16_t x238 = 228U;
	int32_t x239 = 1;
	uint32_t x240 = 331U;
	int32_t t59 = -533697;

	t59 = (x237*((x238==x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x242 = 11749927483858588LLU;
	volatile uint8_t x243 = 12U;
	volatile int16_t x244 = INT16_MIN;
	volatile int64_t t60 = -368483015508337LL;

	t60 = (x241*((x242==x243)<x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 2037;
	static int16_t x246 = 0;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 117955U;
	int32_t t61 = -1;

	t61 = (x245*((x246==x247)<x248));

	if (t61 != 2037) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	volatile uint64_t x251 = 2167646500287LLU;
	int64_t x252 = INT64_MIN;

	t62 = (x249*((x250==x251)<x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	uint64_t x255 = UINT64_MAX;

	t63 = (x253*((x254==x255)<x256));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	int32_t x258 = -29;
	int64_t x259 = 174776907131LL;
	int16_t x260 = -16;
	volatile int64_t t64 = 6814LL;

	t64 = (x257*((x258==x259)<x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x262 = 1U;
	uint32_t x263 = 10809U;
	static int64_t t65 = INT64_MIN;

	t65 = (x261*((x262==x263)<x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile uint64_t x266 = 3784LLU;
	int16_t x267 = 1;
	uint64_t x268 = UINT64_MAX;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x265*((x266==x267)<x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static int64_t x270 = -1594104616518LL;
	volatile int32_t x271 = -29507;
	int8_t x272 = INT8_MIN;

	t67 = (x269*((x270==x271)<x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 527281382971578LLU;
	uint32_t x275 = 15928U;
	int16_t x276 = INT16_MIN;
	volatile int64_t t68 = 962690892629392LL;

	t68 = (x273*((x274==x275)<x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	volatile int32_t x279 = 827597;
	volatile uint64_t x280 = 108817111LLU;
	int32_t t69 = INT32_MAX;

	t69 = (x277*((x278==x279)<x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 15U;
	static volatile int32_t x282 = 1;
	int16_t x283 = 59;
	volatile int32_t t70 = 259;

	t70 = (x281*((x282==x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	volatile int16_t x287 = -1;
	int32_t t71 = 42336138;

	t71 = (x285*((x286==x287)<x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = -25327;
	int32_t t72 = -60;

	t72 = (x289*((x290==x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MAX;
	static uint32_t x294 = UINT32_MAX;
	static int16_t x295 = 19;
	int64_t x296 = -1LL;
	int64_t t73 = -13032337935697LL;

	t73 = (x293*((x294==x295)<x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x298 = 26U;
	static uint16_t x299 = UINT16_MAX;
	int32_t x300 = -3;
	volatile int64_t t74 = -28376348655LL;

	t74 = (x297*((x298==x299)<x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static volatile int8_t x302 = INT8_MIN;
	static volatile int64_t x303 = INT64_MAX;
	int32_t t75 = 2;

	t75 = (x301*((x302==x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 5832443;

	t76 = (x305*((x306==x307)<x308));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -25;
	int8_t x310 = -1;
	int64_t x311 = 1480254286368281LL;
	int32_t t77 = 66209667;

	t77 = (x309*((x310==x311)<x312));

	if (t77 != -25) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint64_t x314 = 208616211LLU;
	volatile uint32_t x315 = 2U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 0;

	t78 = (x313*((x314==x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint16_t x320 = UINT16_MAX;
	int32_t t79 = 14516;

	t79 = (x317*((x318==x319)<x320));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = 6;
	int8_t x322 = 0;
	volatile int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 22032;

	t80 = (x321*((x322==x323)<x324));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 7221511774LLU;
	int16_t x326 = -1;
	int16_t x327 = 28;
	uint32_t x328 = 0U;
	uint64_t t81 = 3LLU;

	t81 = (x325*((x326==x327)<x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 4132779U;
	int32_t x330 = INT32_MIN;
	int32_t x332 = INT32_MAX;
	volatile uint32_t t82 = 42086U;

	t82 = (x329*((x330==x331)<x332));

	if (t82 != 4132779U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 3U;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = 0;

	t83 = (x333*((x334==x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 3U;
	static uint64_t x338 = 2694005061897LLU;
	static int8_t x339 = -2;
	int16_t x340 = -1;
	volatile int32_t t84 = -12524105;

	t84 = (x337*((x338==x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint16_t x342 = 8254U;
	volatile uint8_t x343 = 0U;
	volatile int64_t t85 = 1737LL;

	t85 = (x341*((x342==x343)<x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile int64_t x346 = -1LL;
	volatile uint64_t x347 = 1432450043475LLU;
	uint16_t x348 = 2U;
	volatile int64_t t86 = 5LL;

	t86 = (x345*((x346==x347)<x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	uint32_t x351 = 37365540U;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x349*((x350==x351)<x352));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = 47U;
	int8_t x355 = 0;
	static uint64_t x356 = 8275738798658404LLU;

	t88 = (x353*((x354==x355)<x356));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int64_t x358 = INT64_MAX;
	uint8_t x359 = 0U;

	t89 = (x357*((x358==x359)<x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	static int8_t x362 = -1;
	int64_t x363 = 108846711075LL;
	volatile int32_t t90 = 35474482;

	t90 = (x361*((x362==x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 361380245LLU;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MAX;
	uint64_t t91 = 1339LLU;

	t91 = (x365*((x366==x367)<x368));

	if (t91 != 361380245LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 112U;
	int32_t t92 = 52301;

	t92 = (x369*((x370==x371)<x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 64912389041060LLU;
	static uint16_t x374 = 100U;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = INT32_MIN;

	t93 = (x373*((x374==x375)<x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 0;
	uint8_t x378 = 3U;
	static volatile int64_t x380 = -1LL;
	static volatile int32_t t94 = 67229;

	t94 = (x377*((x378==x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint64_t x382 = 9LLU;
	int16_t x383 = -353;
	int8_t x384 = -1;

	t95 = (x381*((x382==x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	static volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -20;

	t96 = (x385*((x386==x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 997786LLU;
	uint8_t x390 = 52U;
	int16_t x391 = 558;
	volatile uint64_t t97 = 123877141LLU;

	t97 = (x389*((x390==x391)<x392));

	if (t97 != 997786LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 1;
	uint16_t x395 = UINT16_MAX;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 19463872;

	t98 = (x393*((x394==x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	static int16_t x399 = -86;
	static int32_t t99 = -155;

	t99 = (x397*((x398==x399)<x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

