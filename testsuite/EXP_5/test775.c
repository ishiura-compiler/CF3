#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = -1LL;
uint64_t x15 = 356043705224LLU;
volatile int32_t t3 = 1;
static volatile int16_t x17 = -438;
volatile uint8_t x23 = 40U;
int16_t x24 = INT16_MAX;
int8_t x25 = 58;
int64_t x28 = INT64_MIN;
int32_t t6 = 6;
static int16_t x29 = -13328;
int16_t x33 = -3954;
int32_t x38 = -1;
int64_t x39 = INT64_MIN;
int8_t x47 = -1;
volatile int32_t t10 = 0;
volatile int32_t x53 = INT32_MIN;
uint32_t x54 = 28571U;
static int8_t x57 = 42;
static int32_t x62 = -2146687;
int32_t x63 = -198189;
uint32_t x66 = UINT32_MAX;
uint16_t x68 = 3U;
static uint64_t x69 = UINT64_MAX;
int32_t x80 = INT32_MAX;
volatile int32_t t20 = 1;
int8_t x92 = INT8_MIN;
volatile uint8_t x93 = UINT8_MAX;
volatile uint8_t x108 = 3U;
int32_t x110 = -2464040;
int32_t x111 = INT32_MIN;
static int32_t t28 = 3982;
int8_t x124 = INT8_MIN;
uint16_t x130 = 5U;
uint32_t x134 = 1314844763U;
int64_t x140 = INT64_MIN;
volatile int32_t t34 = -47422922;
int32_t x146 = INT32_MIN;
static uint8_t x148 = 108U;
volatile int32_t t35 = 63429078;
int64_t x153 = INT64_MIN;
static volatile int32_t x170 = INT32_MIN;
uint64_t x173 = 5073165169569LLU;
volatile int8_t x174 = INT8_MAX;
int64_t x183 = -30LL;
volatile int32_t t44 = 11206028;
static int32_t x187 = INT32_MAX;
volatile int32_t t49 = 942710;
int16_t x208 = 0;
static volatile int32_t t50 = -3523;
volatile uint64_t x209 = UINT64_MAX;
volatile int32_t t51 = -9;
uint16_t x215 = 80U;
int32_t t52 = -24533759;
int16_t x233 = -757;
int16_t x237 = INT16_MIN;
volatile int8_t x238 = -14;
volatile uint64_t x246 = 17505124867841220LLU;
int16_t x247 = INT16_MIN;
static uint8_t x249 = UINT8_MAX;
int64_t x251 = -1LL;
int16_t x253 = -1;
int64_t x262 = INT64_MAX;
int32_t t65 = 24807531;
int32_t x278 = INT32_MIN;
int32_t x282 = INT32_MAX;
volatile int8_t x303 = -1;
uint64_t x304 = UINT64_MAX;
int32_t t74 = -1;
static uint8_t x306 = UINT8_MAX;
static volatile int32_t t75 = -13247;
volatile uint8_t x318 = 52U;
static uint32_t x319 = UINT32_MAX;
static volatile int32_t t79 = 295046440;
int64_t x327 = INT64_MAX;
int32_t t80 = -11;
int32_t x329 = INT32_MIN;
int64_t x335 = INT64_MAX;
volatile int32_t t82 = 1977;
volatile int64_t x339 = INT64_MIN;
volatile int16_t x340 = -11;
uint64_t x353 = 21136LLU;
int16_t x372 = INT16_MAX;
int32_t t91 = -2182959;
volatile int16_t x374 = INT16_MIN;
int16_t x375 = INT16_MIN;
int8_t x378 = INT8_MAX;
int16_t x386 = -33;
static uint8_t x387 = 51U;
int8_t x390 = -1;
static uint16_t x392 = 623U;
volatile int8_t x402 = 62;
int64_t x404 = INT64_MIN;
int32_t t99 = 920;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x2 = -1LL;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;
	int32_t t0 = 7;

	t0 = (x1==((x2%x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	uint64_t x6 = 759LLU;
	static int32_t x7 = -43;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 3831461;

	t1 = (x5==((x6%x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int16_t x10 = INT16_MIN;
	uint8_t x11 = 101U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -284605;

	t2 = (x9==((x10%x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	static uint64_t x16 = UINT64_MAX;

	t3 = (x13==((x14%x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -163;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = -1216330;

	t4 = (x17==((x18%x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int32_t t5 = -48886;

	t5 = (x21==((x22%x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static volatile int32_t x27 = -1;

	t6 = (x25==((x26%x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 580041309U;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = -2344515;

	t7 = (x29==((x30%x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 6;

	t8 = (x33==((x34%x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 15179154625LLU;
	int32_t x40 = -1;
	volatile int32_t t9 = 143834100;

	t9 = (x37==((x38%x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 4U;
	uint32_t x46 = 1U;
	int64_t x48 = 1273796LL;

	t10 = (x45==((x46%x47)==x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = 51;
	volatile int64_t x50 = -1LL;
	int16_t x51 = INT16_MIN;
	static int64_t x52 = INT64_MAX;
	volatile int32_t t11 = 45;

	t11 = (x49==((x50%x51)==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x55 = 437408367U;
	int32_t x56 = INT32_MAX;
	int32_t t12 = 2508;

	t12 = (x53==((x54%x55)==x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x58 = -1;
	static volatile int64_t x59 = INT64_MIN;
	int64_t x60 = 13761LL;
	int32_t t13 = -192580;

	t13 = (x57==((x58%x59)==x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t14 = 1626077;

	t14 = (x61==((x62%x63)==x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	static int64_t x67 = INT64_MAX;
	volatile int32_t t15 = -541;

	t15 = (x65==((x66%x67)==x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -1011LL;
	static volatile int16_t x71 = 130;
	int64_t x72 = -1LL;
	volatile int32_t t16 = 71223155;

	t16 = (x69==((x70%x71)==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -30;
	int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t17 = 107;

	t17 = (x73==((x74%x75)==x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 0U;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = 5697;
	volatile int32_t t18 = -917061;

	t18 = (x77==((x78%x79)==x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = INT16_MIN;
	static int16_t x82 = INT16_MIN;
	int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	static int32_t t19 = -231;

	t19 = (x81==((x82%x83)==x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint32_t x86 = 1509598U;
	uint8_t x87 = 125U;
	int64_t x88 = -1LL;

	t20 = (x85==((x86%x87)==x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 33891438U;
	volatile int64_t x90 = INT64_MAX;
	static uint8_t x91 = 23U;
	int32_t t21 = -18;

	t21 = (x89==((x90%x91)==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 1U;
	static int64_t x95 = -1LL;
	int16_t x96 = INT16_MAX;
	volatile int32_t t22 = 18273576;

	t22 = (x93==((x94%x95)==x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 64979983LLU;
	int64_t x98 = -1LL;
	volatile int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MAX;
	int32_t t23 = -7345279;

	t23 = (x97==((x98%x99)==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 17U;
	static volatile uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 49U;
	volatile uint64_t x104 = UINT64_MAX;
	int32_t t24 = 1;

	t24 = (x101==((x102%x103)==x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	volatile int16_t x106 = 1924;
	int64_t x107 = INT64_MAX;
	int32_t t25 = -1;

	t25 = (x105==((x106%x107)==x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t26 = -1479;

	t26 = (x109==((x110%x111)==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	volatile int64_t x114 = -22395LL;
	volatile int8_t x115 = -6;
	static uint16_t x116 = 372U;
	volatile int32_t t27 = -17;

	t27 = (x113==((x114%x115)==x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	volatile uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;

	t28 = (x117==((x118%x119)==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -1LL;
	uint64_t x123 = 113659LLU;
	volatile int32_t t29 = -85;

	t29 = (x121==((x122%x123)==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 165635687054LLU;
	volatile int16_t x127 = -1;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t30 = -1875;

	t30 = (x125==((x126%x127)==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	static uint8_t x131 = 38U;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -239312;

	t31 = (x129==((x130%x131)==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -57LL;
	static int64_t x135 = INT64_MIN;
	volatile int64_t x136 = INT64_MIN;
	int32_t t32 = -45270;

	t32 = (x133==((x134%x135)==x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x137 = 126U;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 235965LLU;
	int32_t t33 = 0;

	t33 = (x137==((x138%x139)==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = -858691798LL;
	static volatile int32_t x143 = INT32_MIN;
	volatile uint64_t x144 = 53582LLU;

	t34 = (x141==((x142%x143)==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 3U;
	volatile int32_t x147 = -1;

	t35 = (x145==((x146%x147)==x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 28;
	uint32_t x150 = 208U;
	uint16_t x151 = 108U;
	int32_t x152 = INT32_MIN;
	int32_t t36 = -187426;

	t36 = (x149==((x150%x151)==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int8_t x156 = INT8_MIN;
	int32_t t37 = -3;

	t37 = (x153==((x154%x155)==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	int32_t x158 = -64;
	uint32_t x159 = 41720U;
	static uint8_t x160 = 1U;
	volatile int32_t t38 = -881;

	t38 = (x157==((x158%x159)==x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = INT8_MAX;
	static uint8_t x163 = UINT8_MAX;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t39 = 28925;

	t39 = (x161==((x162%x163)==x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -1;
	int8_t x166 = INT8_MAX;
	uint8_t x167 = 1U;
	volatile int32_t x168 = INT32_MIN;
	int32_t t40 = -95411980;

	t40 = (x165==((x166%x167)==x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	static volatile int16_t x172 = INT16_MIN;
	static int32_t t41 = -10;

	t41 = (x169==((x170%x171)==x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x175 = UINT64_MAX;
	uint16_t x176 = 492U;
	int32_t t42 = 217;

	t42 = (x173==((x174%x175)==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = 174;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MAX;
	int32_t t43 = 272353444;

	t43 = (x177==((x178%x179)==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -11097;
	uint8_t x182 = UINT8_MAX;
	int16_t x184 = INT16_MIN;

	t44 = (x181==((x182%x183)==x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 1U;
	static int8_t x186 = -1;
	int16_t x188 = 642;
	static volatile int32_t t45 = -191474;

	t45 = (x185==((x186%x187)==x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = 7;
	static int8_t x191 = 7;
	uint64_t x192 = 19865504877061LLU;
	static volatile int32_t t46 = 0;

	t46 = (x189==((x190%x191)==x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MIN;
	static int64_t x195 = 6831177281493LL;
	uint32_t x196 = 4024U;
	static volatile int32_t t47 = -233579456;

	t47 = (x193==((x194%x195)==x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t48 = -5395058;

	t48 = (x197==((x198%x199)==x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = 27U;
	uint32_t x203 = 58U;
	static int16_t x204 = 16;

	t49 = (x201==((x202%x203)==x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x205 = 24U;
	int8_t x206 = 0;
	int64_t x207 = -2048659773077741438LL;

	t50 = (x205==((x206%x207)==x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = -1;
	int64_t x211 = INT64_MIN;
	volatile uint32_t x212 = 19664962U;

	t51 = (x209==((x210%x211)==x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x213 = UINT8_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x216 = -123146;

	t52 = (x213==((x214%x215)==x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = UINT64_MAX;
	int32_t x218 = 2;
	uint64_t x219 = 6032424878LLU;
	volatile uint8_t x220 = 3U;
	static volatile int32_t t53 = 701848;

	t53 = (x217==((x218%x219)==x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = 0;
	static volatile int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -13;
	static volatile int32_t t54 = -1694;

	t54 = (x221==((x222%x223)==x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 0U;
	volatile int64_t x226 = INT64_MAX;
	volatile int16_t x227 = INT16_MAX;
	uint16_t x228 = 496U;
	static int32_t t55 = 0;

	t55 = (x225==((x226%x227)==x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = INT16_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	static int8_t x232 = INT8_MIN;
	int32_t t56 = 221000;

	t56 = (x229==((x230%x231)==x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x234 = 87020119009956722LLU;
	uint32_t x235 = 386034029U;
	static uint32_t x236 = 1631428U;
	volatile int32_t t57 = 9493;

	t57 = (x233==((x234%x235)==x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x239 = INT32_MAX;
	volatile int32_t x240 = 7333;
	static volatile int32_t t58 = 14152;

	t58 = (x237==((x238%x239)==x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	uint32_t x242 = 567939U;
	uint16_t x243 = UINT16_MAX;
	uint16_t x244 = UINT16_MAX;
	static int32_t t59 = 36;

	t59 = (x241==((x242%x243)==x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = 202359;
	int32_t x248 = INT32_MIN;
	int32_t t60 = 953739;

	t60 = (x245==((x246%x247)==x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x250 = -1;
	int16_t x252 = -29;
	static volatile int32_t t61 = 835628;

	t61 = (x249==((x250%x251)==x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 60LLU;
	volatile uint64_t x256 = 0LLU;
	int32_t t62 = 1066290652;

	t62 = (x253==((x254%x255)==x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = INT64_MIN;
	static int8_t x258 = INT8_MIN;
	volatile int16_t x259 = INT16_MAX;
	int32_t x260 = 154809;
	volatile int32_t t63 = -1;

	t63 = (x257==((x258%x259)==x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x261 = -1LL;
	int8_t x263 = INT8_MIN;
	int64_t x264 = -8979442060300LL;
	volatile int32_t t64 = -1;

	t64 = (x261==((x262%x263)==x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	volatile int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MAX;
	volatile int32_t x268 = INT32_MAX;

	t65 = (x265==((x266%x267)==x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -17613487014580LL;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = 121289476;

	t66 = (x269==((x270%x271)==x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	static int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	int64_t x276 = -734966LL;
	static int32_t t67 = 7590;

	t67 = (x273==((x274%x275)==x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	uint64_t x279 = 56563LLU;
	int32_t x280 = INT32_MIN;
	static int32_t t68 = -5693762;

	t68 = (x277==((x278%x279)==x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -51;
	static int64_t x283 = INT64_MAX;
	int64_t x284 = -19627618944805703LL;
	static int32_t t69 = -14;

	t69 = (x281==((x282%x283)==x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = UINT32_MAX;
	static int64_t x286 = INT64_MIN;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = 1058;
	int32_t t70 = 383292;

	t70 = (x285==((x286%x287)==x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = 50801286LL;
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t71 = 30;

	t71 = (x289==((x290%x291)==x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x293 = 2U;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	int64_t x296 = INT64_MAX;
	int32_t t72 = -1117;

	t72 = (x293==((x294%x295)==x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -108300;
	volatile uint32_t x298 = 22980U;
	static uint32_t x299 = UINT32_MAX;
	static volatile uint64_t x300 = 9LLU;
	int32_t t73 = 14;

	t73 = (x297==((x298%x299)==x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 682U;
	static uint64_t x302 = 63235913978357LLU;

	t74 = (x301==((x302%x303)==x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = -1LL;
	volatile int32_t x307 = -1;
	int64_t x308 = INT64_MIN;

	t75 = (x305==((x306%x307)==x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t76 = -31;

	t76 = (x309==((x310%x311)==x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 4;
	int32_t x314 = -3518109;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t77 = 102310757;

	t77 = (x313==((x314%x315)==x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 7490250806642LLU;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t78 = -76821797;

	t78 = (x317==((x318%x319)==x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 1;
	int16_t x322 = 4429;
	static int32_t x323 = -1;
	int8_t x324 = INT8_MAX;

	t79 = (x321==((x322%x323)==x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	static volatile int8_t x328 = INT8_MAX;

	t80 = (x325==((x326%x327)==x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x330 = -1;
	int8_t x331 = INT8_MAX;
	int64_t x332 = -1LL;
	int32_t t81 = 5294238;

	t81 = (x329==((x330%x331)==x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	uint32_t x334 = UINT32_MAX;
	int16_t x336 = INT16_MIN;

	t82 = (x333==((x334%x335)==x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int8_t x338 = INT8_MIN;
	static volatile int32_t t83 = 508617;

	t83 = (x337==((x338%x339)==x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MIN;
	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 54U;
	int64_t x344 = INT64_MIN;
	int32_t t84 = 8328;

	t84 = (x341==((x342%x343)==x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x345 = 1130663986U;
	int8_t x346 = 8;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;
	static int32_t t85 = -19776;

	t85 = (x345==((x346%x347)==x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	static uint16_t x350 = 13355U;
	volatile int32_t x351 = -83346;
	int64_t x352 = -1LL;
	static int32_t t86 = -2081842;

	t86 = (x349==((x350%x351)==x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x354 = UINT8_MAX;
	volatile uint64_t x355 = 3140265244598LLU;
	int32_t x356 = INT32_MIN;
	int32_t t87 = -8679974;

	t87 = (x353==((x354%x355)==x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	static uint8_t x359 = UINT8_MAX;
	int32_t x360 = -2095;
	volatile int32_t t88 = -831839080;

	t88 = (x357==((x358%x359)==x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MAX;
	static int64_t x362 = -1042316405511LL;
	volatile uint64_t x363 = 104041827729LLU;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t89 = 57586728;

	t89 = (x361==((x362%x363)==x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MIN;
	uint64_t x368 = 47388LLU;
	volatile int32_t t90 = -157;

	t90 = (x365==((x366%x367)==x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	static int8_t x371 = INT8_MIN;

	t91 = (x369==((x370%x371)==x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = 1968986936337602393LLU;
	volatile int32_t x376 = INT32_MAX;
	int32_t t92 = -749;

	t92 = (x373==((x374%x375)==x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x377 = INT32_MAX;
	int8_t x379 = -1;
	int16_t x380 = -1;
	static int32_t t93 = -158;

	t93 = (x377==((x378%x379)==x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 1306121081714LLU;
	uint16_t x382 = 6U;
	uint64_t x383 = UINT64_MAX;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t94 = 1604714;

	t94 = (x381==((x382%x383)==x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = 1U;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t95 = -96;

	t95 = (x385==((x386%x387)==x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 10;
	int8_t x391 = INT8_MIN;
	static volatile int32_t t96 = 77056;

	t96 = (x389==((x390%x391)==x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = INT16_MIN;
	volatile uint32_t x394 = 25U;
	uint8_t x395 = 1U;
	uint8_t x396 = 3U;
	int32_t t97 = 8032;

	t97 = (x393==((x394%x395)==x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x397 = 5U;
	volatile int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	int32_t t98 = -1964;

	t98 = (x397==((x398%x399)==x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -1LL;
	uint16_t x403 = UINT16_MAX;

	t99 = (x401==((x402%x403)==x404));

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
