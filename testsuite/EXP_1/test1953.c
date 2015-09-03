#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -15;
int32_t x17 = -30018;
static int8_t x21 = INT8_MAX;
uint32_t t6 = 4258516U;
uint16_t x34 = UINT16_MAX;
int32_t t8 = -248;
uint16_t x37 = 27U;
static volatile int8_t x48 = INT8_MAX;
uint8_t x54 = 11U;
int64_t x55 = INT64_MAX;
static int16_t x56 = -1;
int32_t t13 = -253084;
static int32_t t14 = 143423;
volatile uint32_t t15 = 2853U;
uint32_t x67 = 383449U;
int64_t x68 = 2366493927759885728LL;
volatile int8_t x70 = -1;
int64_t x74 = INT64_MIN;
int32_t t18 = 22;
int32_t x82 = INT32_MAX;
static int32_t x90 = 108880;
volatile int8_t x96 = INT8_MIN;
static uint8_t x98 = UINT8_MAX;
static int8_t x100 = -1;
int32_t t24 = 1262;
int32_t x107 = INT32_MAX;
int64_t x110 = -1LL;
uint16_t x115 = UINT16_MAX;
int8_t x117 = INT8_MIN;
int8_t x122 = INT8_MIN;
uint8_t x133 = 1U;
volatile int32_t t36 = 21;
static int32_t x160 = -2035892;
int8_t x167 = INT8_MIN;
int16_t x173 = INT16_MAX;
int64_t x174 = -4950282407489703LL;
int64_t x177 = -14340094009LL;
int16_t x179 = -1;
static int32_t t44 = -549691957;
static int8_t x181 = INT8_MAX;
volatile int32_t t45 = -483589405;
volatile int8_t x185 = INT8_MIN;
int8_t x186 = -16;
volatile int64_t x191 = INT64_MIN;
int8_t x193 = INT8_MIN;
static int32_t t48 = 862810501;
uint64_t x204 = 8640733015471LLU;
volatile int64_t t51 = 14527103252861752LL;
static volatile uint32_t x216 = 125598U;
int64_t x226 = INT64_MIN;
volatile int32_t t58 = 24866;
volatile int8_t x238 = INT8_MIN;
int32_t x246 = 468847989;
uint8_t x247 = UINT8_MAX;
int16_t x257 = -2703;
volatile uint16_t x260 = UINT16_MAX;
uint64_t x267 = UINT64_MAX;
uint16_t x268 = 15492U;
int8_t x270 = INT8_MIN;
int64_t x282 = 234206997301LL;
int64_t t70 = 156LL;
volatile int8_t x308 = INT8_MIN;
int32_t x313 = -2031;
uint32_t x317 = 229375U;
volatile int8_t x318 = -2;
int32_t x320 = -1;
int8_t x321 = -1;
volatile int16_t x322 = INT16_MIN;
static int8_t x323 = INT8_MAX;
volatile int32_t x332 = -428827024;
static uint32_t x338 = 127782700U;
static volatile int32_t x346 = 11579;
static volatile int8_t x347 = -20;
uint32_t x349 = 15200U;
volatile int32_t t88 = 1;
int16_t x361 = -288;
static volatile int32_t x363 = INT32_MIN;
int32_t x364 = INT32_MAX;
int16_t x365 = INT16_MIN;
volatile uint8_t x374 = 0U;
int64_t x375 = INT64_MIN;
static int8_t x376 = 27;
static int64_t x378 = -1LL;
int32_t x383 = INT32_MIN;
int16_t x399 = -1;


void f0(void) {
	uint8_t x1 = 1U;
	static int32_t x2 = -1;
	volatile uint64_t x3 = UINT64_MAX;
	volatile int8_t x4 = 29;
	int32_t t0 = 46082;

	t0 = (((x1|x2)==x3)*x4);

	if (t0 != 29) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -2;
	int16_t x6 = -1;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 22014854392780598LL;

	t1 = (((x5|x6)==x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = INT8_MIN;
	volatile int32_t x11 = INT32_MIN;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 402142490;

	t2 = (((x9|x10)==x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int8_t x14 = INT8_MAX;
	volatile uint16_t x15 = 47U;
	static int64_t x16 = -1LL;
	int64_t t3 = -38117284123190LL;

	t3 = (((x13|x14)==x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -148665250904676LL;
	volatile int32_t x19 = -1;
	int64_t x20 = -1LL;
	int64_t t4 = 231LL;

	t4 = (((x17|x18)==x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -106;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -31173932;

	t5 = (((x21|x22)==x23)*x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = 2364609465529148706LL;
	volatile uint8_t x27 = 4U;
	uint32_t x28 = UINT32_MAX;

	t6 = (((x25|x26)==x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 5350055U;
	int64_t x30 = INT64_MAX;
	int32_t x31 = 3747;
	uint64_t x32 = 431466LLU;
	static uint64_t t7 = 138011914042625392LLU;

	t7 = (((x29|x30)==x31)*x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 0U;

	t8 = (((x33|x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -8117679146694LL;
	uint8_t x39 = 0U;
	int64_t x40 = INT64_MIN;
	int64_t t9 = 1LL;

	t9 = (((x37|x38)==x39)*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int8_t x42 = 1;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 8316189927067192LLU;
	volatile uint64_t t10 = 15LLU;

	t10 = (((x41|x42)==x43)*x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -4;
	uint8_t x46 = 2U;
	int8_t x47 = INT8_MIN;
	volatile int32_t t11 = -455067553;

	t11 = (((x45|x46)==x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	int32_t x50 = INT32_MAX;
	int32_t x51 = -683027200;
	static int8_t x52 = -1;
	int32_t t12 = 2;

	t12 = (((x49|x50)==x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;

	t13 = (((x53|x54)==x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int32_t x58 = 989;
	int16_t x59 = INT16_MIN;
	static int16_t x60 = INT16_MAX;

	t14 = (((x57|x58)==x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int8_t x62 = 52;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = 2047941248U;

	t15 = (((x61|x62)==x63)*x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MAX;
	static volatile int64_t t16 = 6046171912943732LL;

	t16 = (((x65|x66)==x67)*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -63044286;

	t17 = (((x69|x70)==x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 1U;
	uint8_t x75 = UINT8_MAX;
	volatile int32_t x76 = INT32_MIN;

	t18 = (((x73|x74)==x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 49U;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -16344987LL;
	int64_t t19 = -721414LL;

	t19 = (((x77|x78)==x79)*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 1558U;
	uint64_t x83 = UINT64_MAX;
	volatile uint8_t x84 = 5U;
	static volatile int32_t t20 = -7;

	t20 = (((x81|x82)==x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -512791;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = -1578783085LL;
	volatile int64_t t21 = -17721140LL;

	t21 = (((x85|x86)==x87)*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -1906424;

	t22 = (((x89|x90)==x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 12;
	volatile int64_t x94 = -6570007232426156LL;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = -361109522;

	t23 = (((x93|x94)==x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x99 = 4897610;

	t24 = (((x97|x98)==x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -204018387406655LL;
	int8_t x102 = 1;
	static uint64_t x103 = 38092495645205LLU;
	static uint8_t x104 = 80U;
	int32_t t25 = -36640;

	t25 = (((x101|x102)==x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile int64_t x106 = INT64_MIN;
	volatile uint32_t x108 = 0U;
	static volatile uint32_t t26 = 32415175U;

	t26 = (((x105|x106)==x107)*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x111 = INT8_MIN;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = -19145;

	t27 = (((x109|x110)==x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static uint8_t x114 = UINT8_MAX;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = 1025LL;

	t28 = (((x113|x114)==x115)*x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 26U;
	int16_t x119 = INT16_MAX;
	uint16_t x120 = 2U;
	volatile int32_t t29 = 42;

	t29 = (((x117|x118)==x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int32_t x123 = -181074;
	uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 0U;

	t30 = (((x121|x122)==x123)*x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	uint64_t x126 = 6321646605937275LLU;
	static uint16_t x127 = 19U;
	uint8_t x128 = 2U;
	volatile int32_t t31 = 1181019;

	t31 = (((x125|x126)==x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static volatile int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = 236892;
	int32_t t32 = -135830880;

	t32 = (((x129|x130)==x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = -59;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 30;

	t33 = (((x133|x134)==x135)*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = INT16_MAX;
	int32_t x139 = INT32_MAX;
	int32_t x140 = -1;
	volatile int32_t t34 = -295;

	t34 = (((x137|x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -7;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = -9336544;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = -297237049;

	t35 = (((x141|x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int8_t x146 = -1;
	static uint32_t x147 = 309U;
	uint8_t x148 = 36U;

	t36 = (((x145|x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = -1;
	static volatile int16_t x150 = 127;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 332;
	volatile int32_t t37 = -958046198;

	t37 = (((x149|x150)==x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 147087LL;
	static volatile uint8_t x154 = 4U;
	static volatile int8_t x155 = INT8_MIN;
	static volatile uint8_t x156 = 6U;
	int32_t t38 = -1383207;

	t38 = (((x153|x154)==x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int16_t x158 = INT16_MIN;
	static int32_t x159 = INT32_MIN;
	volatile int32_t t39 = 127134;

	t39 = (((x157|x158)==x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 0;
	volatile int8_t x162 = -1;
	volatile int8_t x163 = -1;
	int32_t x164 = -1;
	static int32_t t40 = -104150;

	t40 = (((x161|x162)==x163)*x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 1;

	t41 = (((x165|x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = 1;
	static int32_t x170 = INT32_MIN;
	uint8_t x171 = 3U;
	uint32_t x172 = 56879345U;
	uint32_t t42 = 14U;

	t42 = (((x169|x170)==x171)*x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x175 = UINT32_MAX;
	volatile uint16_t x176 = 0U;
	volatile int32_t t43 = 15;

	t43 = (((x173|x174)==x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = UINT32_MAX;
	static int32_t x180 = -10550;

	t44 = (((x177|x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	int32_t x183 = -1;
	int32_t x184 = -1;

	t45 = (((x181|x182)==x183)*x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x187 = -357387;
	uint8_t x188 = 26U;
	int32_t t46 = 44314975;

	t46 = (((x185|x186)==x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	uint8_t x192 = 11U;
	int32_t t47 = 0;

	t47 = (((x189|x190)==x191)*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MAX;
	static volatile int32_t x195 = INT32_MAX;
	volatile int8_t x196 = INT8_MIN;

	t48 = (((x193|x194)==x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 68U;
	volatile int8_t x198 = INT8_MIN;
	static volatile uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 5847567160066534538LLU;
	volatile uint64_t t49 = 3LLU;

	t49 = (((x197|x198)==x199)*x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -10;
	volatile int8_t x202 = -1;
	int8_t x203 = INT8_MAX;
	uint64_t t50 = 3284732196278LLU;

	t50 = (((x201|x202)==x203)*x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint16_t x206 = UINT16_MAX;
	static volatile int16_t x207 = 1202;
	static int64_t x208 = 1099058LL;

	t51 = (((x205|x206)==x207)*x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	volatile uint16_t x210 = 234U;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -44;
	volatile int32_t t52 = 1426;

	t52 = (((x209|x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 7937U;
	volatile uint8_t x214 = 3U;
	int8_t x215 = -1;
	static volatile uint32_t t53 = 6272U;

	t53 = (((x213|x214)==x215)*x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	int32_t x218 = -314780;
	int32_t x219 = INT32_MAX;
	static int8_t x220 = 44;
	int32_t t54 = -66;

	t54 = (((x217|x218)==x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	static int64_t x222 = INT64_MIN;
	volatile uint8_t x223 = 1U;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = -4123588177255753945LL;

	t55 = (((x221|x222)==x223)*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -3848LL;
	static volatile uint16_t x227 = UINT16_MAX;
	static volatile uint16_t x228 = 1U;
	volatile int32_t t56 = -202255;

	t56 = (((x225|x226)==x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 3U;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 110289LLU;
	volatile uint64_t t57 = 23LLU;

	t57 = (((x229|x230)==x231)*x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MIN;
	volatile int16_t x235 = 14241;
	int32_t x236 = INT32_MIN;

	t58 = (((x233|x234)==x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = INT64_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (((x237|x238)==x239)*x240);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 57U;
	int32_t x243 = -685199;
	int64_t x244 = INT64_MIN;
	volatile int64_t t60 = -15LL;

	t60 = (((x241|x242)==x243)*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 47U;
	int16_t x248 = -1;
	int32_t t61 = -29098422;

	t61 = (((x245|x246)==x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	static int64_t x251 = 7803053205LL;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = 14;

	t62 = (((x249|x250)==x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -1;
	static volatile int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 14607;

	t63 = (((x253|x254)==x255)*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -1;
	int32_t x259 = -14;
	int32_t t64 = 201;

	t64 = (((x257|x258)==x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 14227916619LLU;
	uint8_t x262 = 19U;
	int32_t x263 = -1;
	static volatile int64_t x264 = -901182LL;
	int64_t t65 = -2206644519LL;

	t65 = (((x261|x262)==x263)*x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	volatile int32_t t66 = 22483;

	t66 = (((x265|x266)==x267)*x268);

	if (t66 != 15492) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 931999830U;
	int64_t x271 = -1LL;
	int16_t x272 = 111;
	int32_t t67 = 261023;

	t67 = (((x269|x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = UINT64_MAX;
	int16_t x274 = 1759;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = -62;
	int32_t t68 = 1859;

	t68 = (((x273|x274)==x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x278 = UINT16_MAX;
	volatile uint32_t x279 = 147U;
	int8_t x280 = -1;
	volatile int32_t t69 = 407391;

	t69 = (((x277|x278)==x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 10U;
	uint64_t x283 = 95156746260LLU;
	static volatile int64_t x284 = INT64_MIN;

	t70 = (((x281|x282)==x283)*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MAX;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	volatile int16_t x288 = 1755;
	int32_t t71 = 459886;

	t71 = (((x285|x286)==x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint32_t x290 = 345U;
	uint16_t x291 = 1U;
	int32_t x292 = 938;
	volatile int32_t t72 = 11;

	t72 = (((x289|x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 75461741U;
	static uint8_t x294 = 14U;
	int8_t x295 = -1;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = 796LL;

	t73 = (((x293|x294)==x295)*x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	uint16_t x298 = 1412U;
	int8_t x299 = INT8_MAX;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t74 = -252978432;

	t74 = (((x297|x298)==x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 50066LLU;
	int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	int32_t x304 = 254;
	int32_t t75 = -2;

	t75 = (((x301|x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	uint16_t x306 = 19U;
	volatile uint64_t x307 = 1030994LLU;
	volatile int32_t t76 = -11231995;

	t76 = (((x305|x306)==x307)*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = 5U;
	uint16_t x312 = UINT16_MAX;
	static volatile int32_t t77 = -981406658;

	t77 = (((x309|x310)==x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x314 = INT32_MIN;
	uint16_t x315 = 1U;
	volatile uint8_t x316 = 8U;
	static int32_t t78 = -28;

	t78 = (((x313|x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x319 = INT8_MIN;
	static int32_t t79 = -6;

	t79 = (((x317|x318)==x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x324 = -1LL;
	volatile int64_t t80 = -174053280LL;

	t80 = (((x321|x322)==x323)*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = -1;
	volatile int64_t x327 = -1LL;
	int8_t x328 = 1;
	static volatile int32_t t81 = 121498175;

	t81 = (((x325|x326)==x327)*x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MIN;
	static int8_t x331 = 28;
	volatile int32_t t82 = -143852;

	t82 = (((x329|x330)==x331)*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = 5;
	volatile uint64_t x335 = 1319LLU;
	int64_t x336 = -1LL;
	volatile int64_t t83 = -5918398LL;

	t83 = (((x333|x334)==x335)*x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	static int64_t x340 = INT64_MIN;
	static int64_t t84 = -16127714813LL;

	t84 = (((x337|x338)==x339)*x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = 16282LL;
	int32_t x343 = 7757;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 1995;

	t85 = (((x341|x342)==x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 1221818942U;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -49;

	t86 = (((x345|x346)==x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -419831156LL;
	volatile uint16_t x351 = 21317U;
	int64_t x352 = INT64_MIN;
	static int64_t t87 = 512812LL;

	t87 = (((x349|x350)==x351)*x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -4;
	int16_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = -1;

	t88 = (((x353|x354)==x355)*x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = 41;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = 1;
	uint64_t x360 = 26661888946863LLU;
	volatile uint64_t t89 = 4202964063252LLU;

	t89 = (((x357|x358)==x359)*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 10U;
	int32_t t90 = -1;

	t90 = (((x361|x362)==x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = INT64_MIN;
	static int8_t x367 = -1;
	int64_t x368 = -1LL;
	volatile int64_t t91 = 60296428758865LL;

	t91 = (((x365|x366)==x367)*x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 4983761;

	t92 = (((x369|x370)==x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 36142626;
	int32_t t93 = -432347689;

	t93 = (((x373|x374)==x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = 0;
	volatile int64_t x380 = -1LL;
	static int64_t t94 = 3600019964868774983LL;

	t94 = (((x377|x378)==x379)*x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	static int32_t x382 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	static int64_t t95 = INT64_MAX;

	t95 = (((x381|x382)==x383)*x384);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 3734;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	static volatile int32_t x388 = INT32_MAX;
	int32_t t96 = -375710;

	t96 = (((x385|x386)==x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 1317362117271519LL;
	int16_t x392 = 5;
	static int32_t t97 = 12214636;

	t97 = (((x389|x390)==x391)*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 0U;
	int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t98 = -3;

	t98 = (((x393|x394)==x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 93683662952LLU;
	static int64_t x398 = -1LL;
	int8_t x400 = INT8_MAX;
	static volatile int32_t t99 = -188192547;

	t99 = (((x397|x398)==x399)*x400);

	if (t99 != 127) { NG(); } else { ; }
	
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

