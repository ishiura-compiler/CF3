#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MIN;
int32_t x10 = INT32_MAX;
volatile int16_t x13 = -246;
uint64_t x20 = UINT64_MAX;
static int32_t t4 = 24855632;
uint32_t x21 = 441982U;
int8_t x24 = 10;
volatile int32_t t5 = 1;
uint16_t x28 = 2U;
volatile uint8_t x29 = 31U;
uint16_t x31 = 25U;
static uint32_t x33 = 31U;
int32_t x52 = INT32_MAX;
static int16_t x56 = -1;
uint16_t x57 = 18522U;
int16_t x60 = INT16_MIN;
int16_t x62 = INT16_MAX;
static volatile uint64_t x63 = UINT64_MAX;
int32_t t15 = -97;
static int32_t t16 = 478;
int8_t x73 = -1;
int8_t x79 = -1;
static volatile int16_t x84 = INT16_MIN;
int64_t x85 = INT64_MIN;
static int8_t x92 = INT8_MIN;
int8_t x97 = INT8_MIN;
int32_t x111 = -527686;
static int64_t x113 = INT64_MIN;
int16_t x116 = INT16_MAX;
static volatile int16_t x127 = -6294;
static int32_t t31 = -478243443;
volatile uint64_t x130 = 150516383LLU;
int16_t x135 = -58;
volatile int64_t x137 = -903600084LL;
int32_t t34 = -5375184;
static volatile int16_t x141 = INT16_MAX;
int8_t x152 = 0;
static volatile int32_t t39 = -15;
static uint16_t x165 = 4901U;
static volatile uint32_t x167 = UINT32_MAX;
volatile int32_t t41 = 461845;
int8_t x169 = INT8_MIN;
int32_t x170 = 2;
uint8_t x172 = UINT8_MAX;
int32_t t42 = 124;
uint32_t x175 = UINT32_MAX;
int32_t t43 = 1;
int8_t x180 = 49;
volatile int8_t x182 = INT8_MIN;
int16_t x196 = -1;
uint64_t x199 = 3886554030LLU;
int16_t x207 = -82;
volatile int32_t t51 = -84437;
static int32_t x221 = INT32_MIN;
static int64_t x222 = -1LL;
static int8_t x230 = -1;
int64_t x241 = -8527157258465972LL;
int32_t t62 = -5889;
static int16_t x253 = INT16_MIN;
int16_t x254 = 864;
volatile int32_t t63 = 2;
static int16_t x260 = -1;
uint64_t x262 = 13462381669LLU;
static volatile int32_t t66 = 23311;
volatile int32_t x281 = 7;
static int16_t x285 = -1;
int64_t x288 = INT64_MAX;
int32_t x294 = -797776246;
uint8_t x295 = UINT8_MAX;
int16_t x297 = 12581;
uint8_t x310 = 57U;
volatile uint16_t x318 = 14765U;
uint8_t x322 = UINT8_MAX;
static int16_t x334 = INT16_MIN;
volatile int32_t t83 = 0;
int16_t x339 = INT16_MIN;
int8_t x349 = 29;
int8_t x350 = INT8_MAX;
uint16_t x352 = 6004U;
volatile int32_t t87 = 14;
uint64_t x354 = UINT64_MAX;
static uint64_t x356 = 115LLU;
int32_t x360 = -994;
int32_t t89 = -39;
static int32_t x361 = INT32_MIN;
int32_t x367 = INT32_MAX;
static int16_t x370 = -1;
volatile int32_t t92 = -238;
volatile uint8_t x373 = 11U;
static int8_t x375 = -1;
int32_t x376 = INT32_MIN;
uint16_t x378 = UINT16_MAX;
static int32_t x385 = -1;
uint32_t x390 = 180934U;
int32_t t97 = 506218;
int16_t x399 = -1575;


void f0(void) {
	static int16_t x1 = 0;
	uint64_t x2 = UINT64_MAX;
	uint8_t x3 = 57U;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = 16243572;

	t0 = (((x1&x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -13LL;
	int8_t x6 = INT8_MIN;
	static int32_t x8 = -1;
	volatile int32_t t1 = 0;

	t1 = (((x5&x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x11 = -1LL;
	static volatile int32_t x12 = 400;
	int32_t t2 = 2931305;

	t2 = (((x9&x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	int32_t x15 = -1;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 473956592;

	t3 = (((x13&x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -1;
	int64_t x19 = INT64_MIN;

	t4 = (((x17&x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int32_t x23 = 1;

	t5 = (((x21&x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	static int64_t x26 = -394734859754553LL;
	volatile uint8_t x27 = 0U;
	int32_t t6 = -54421061;

	t6 = (((x25&x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = 1285326359LL;
	int64_t x32 = -1LL;
	int32_t t7 = 1;

	t7 = (((x29&x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 97U;
	int16_t x35 = -70;
	int32_t x36 = INT32_MAX;
	int32_t t8 = -2377;

	t8 = (((x33&x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 3207950370416355LL;
	uint16_t x38 = 0U;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = -9599257LL;
	volatile int32_t t9 = 89076493;

	t9 = (((x37&x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	volatile int64_t x43 = 2872613LL;
	static volatile int8_t x44 = -1;
	static int32_t t10 = 5384681;

	t10 = (((x41&x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	volatile int64_t x47 = -1034580370464LL;
	uint64_t x48 = 5859304LLU;
	volatile int32_t t11 = -1;

	t11 = (((x45&x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1515;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 402777U;
	int32_t t12 = 19847082;

	t12 = (((x49&x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 3U;
	static uint16_t x54 = 87U;
	int64_t x55 = -1LL;
	int32_t t13 = -231;

	t13 = (((x53&x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = -1LL;
	static int32_t x59 = INT32_MAX;
	int32_t t14 = -46373164;

	t14 = (((x57&x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 9U;
	volatile int32_t x64 = INT32_MIN;

	t15 = (((x61&x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MAX;
	static volatile uint64_t x67 = 45353LLU;
	volatile uint64_t x68 = 3449353LLU;

	t16 = (((x65&x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile int8_t x70 = INT8_MIN;
	int8_t x71 = -3;
	uint32_t x72 = 62771120U;
	volatile int32_t t17 = 0;

	t17 = (((x69&x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MAX;
	static uint32_t x75 = 16712266U;
	static uint8_t x76 = 46U;
	int32_t t18 = -1217;

	t18 = (((x73&x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MAX;
	int16_t x78 = INT16_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t19 = -3136024;

	t19 = (((x77&x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = 466677371569651LL;
	int32_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	int32_t t20 = -1;

	t20 = (((x81&x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = UINT32_MAX;
	static int64_t x87 = -115LL;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = -126118;

	t21 = (((x85&x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 188U;
	volatile uint8_t x90 = 0U;
	static uint64_t x91 = 10LLU;
	int32_t t22 = 36;

	t22 = (((x89&x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 50U;
	int32_t t23 = 791915;

	t23 = (((x93&x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x98 = 28325871906134LLU;
	int64_t x99 = -12LL;
	int32_t x100 = -1;
	volatile int32_t t24 = -1;

	t24 = (((x97&x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	static uint8_t x104 = 48U;
	static volatile int32_t t25 = 4467;

	t25 = (((x101&x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	int16_t x106 = 3032;
	volatile uint8_t x107 = 4U;
	uint32_t x108 = 757297U;
	volatile int32_t t26 = -59156117;

	t26 = (((x105&x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = -3422033;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 14;

	t27 = (((x109&x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = 0;
	int64_t x115 = -1LL;
	volatile int32_t t28 = -1619428;

	t28 = (((x113&x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	uint32_t x118 = 29U;
	uint32_t x119 = 742967U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 477144;

	t29 = (((x117&x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	volatile int32_t x122 = -3896;
	volatile int32_t x123 = INT32_MIN;
	int16_t x124 = -1;
	int32_t t30 = -312400;

	t30 = (((x121&x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	uint8_t x128 = 9U;

	t31 = (((x125&x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x131 = 432819;
	static int32_t x132 = -1;
	volatile int32_t t32 = 4;

	t32 = (((x129&x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	volatile int64_t x134 = INT64_MIN;
	uint8_t x136 = 1U;
	int32_t t33 = 4197;

	t33 = (((x133&x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -47056518LL;
	static uint32_t x139 = 330071764U;
	int16_t x140 = INT16_MIN;

	t34 = (((x137&x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = INT16_MAX;
	int16_t x143 = 4;
	volatile int16_t x144 = INT16_MAX;
	static int32_t t35 = -64028166;

	t35 = (((x141&x142)<=x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 37933957577LLU;
	volatile int16_t x146 = -103;
	uint32_t x147 = 154882078U;
	uint16_t x148 = 4665U;
	int32_t t36 = -1;

	t36 = (((x145&x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 16;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MIN;
	static int32_t t37 = -2744548;

	t37 = (((x149&x150)<=x151)==x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = 120967U;
	volatile int32_t t38 = 25940413;

	t38 = (((x153&x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	static uint32_t x158 = 700U;
	uint32_t x159 = 3729U;
	uint8_t x160 = 13U;

	t39 = (((x157&x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	volatile int16_t x162 = -1;
	volatile uint32_t x163 = 1U;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 0;

	t40 = (((x161&x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = -3;
	volatile uint16_t x168 = 137U;

	t41 = (((x165&x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x171 = 167U;

	t42 = (((x169&x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 891;
	static int32_t x174 = -1;
	static int64_t x176 = INT64_MIN;

	t43 = (((x173&x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	volatile uint16_t x178 = 0U;
	int16_t x179 = INT16_MIN;
	static int32_t t44 = 92;

	t44 = (((x177&x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x183 = 0U;
	int32_t x184 = -145923;
	int32_t t45 = 46;

	t45 = (((x181&x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	volatile uint64_t x187 = 795067019692LLU;
	int16_t x188 = 0;
	static volatile int32_t t46 = -179;

	t46 = (((x185&x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -678054855614120642LL;
	static int32_t x190 = -1;
	int8_t x191 = -1;
	int8_t x192 = -1;
	volatile int32_t t47 = 386473915;

	t47 = (((x189&x190)<=x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1842;
	static uint16_t x194 = 19693U;
	uint8_t x195 = UINT8_MAX;
	int32_t t48 = 1;

	t48 = (((x193&x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	int8_t x200 = -1;
	int32_t t49 = -594;

	t49 = (((x197&x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -5061;
	static int16_t x202 = INT16_MAX;
	volatile uint32_t x203 = 4326938U;
	static int64_t x204 = INT64_MIN;
	int32_t t50 = -22852;

	t50 = (((x201&x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 103U;
	static uint32_t x206 = UINT32_MAX;
	int64_t x208 = 945435650055331438LL;

	t51 = (((x205&x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 111U;
	volatile int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 702;

	t52 = (((x209&x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -7;
	uint8_t x214 = 7U;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	static volatile int32_t t53 = 121;

	t53 = (((x213&x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = 4139LL;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = 14129;

	t54 = (((x217&x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x223 = 3U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 364;

	t55 = (((x221&x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -11;
	int64_t x226 = 0LL;
	int32_t x227 = 6132564;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -225602750;

	t56 = (((x225&x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 53U;
	static uint16_t x231 = 47U;
	static volatile uint8_t x232 = UINT8_MAX;
	int32_t t57 = -6432;

	t57 = (((x229&x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 246;
	static int8_t x234 = INT8_MIN;
	static uint64_t x235 = 4740035620994303LLU;
	int8_t x236 = -1;
	int32_t t58 = -17843596;

	t58 = (((x233&x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 131674895394768LLU;
	int16_t x238 = INT16_MIN;
	int32_t x239 = 1;
	uint32_t x240 = 1487U;
	int32_t t59 = 67385;

	t59 = (((x237&x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	int16_t x243 = 0;
	int16_t x244 = -1;
	static volatile int32_t t60 = 181879;

	t60 = (((x241&x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint16_t x246 = 299U;
	volatile uint8_t x247 = 32U;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 128103;

	t61 = (((x245&x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;

	t62 = (((x249&x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = -1;
	uint32_t x256 = 600U;

	t63 = (((x253&x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MAX;
	static int16_t x259 = -30;
	int32_t t64 = 44631844;

	t64 = (((x257&x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = UINT8_MAX;
	static int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -3732328;

	t65 = (((x261&x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = 1;
	static int8_t x267 = -10;
	volatile int8_t x268 = INT8_MAX;

	t66 = (((x265&x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MAX;
	volatile int8_t x271 = INT8_MAX;
	uint16_t x272 = 93U;
	int32_t t67 = 0;

	t67 = (((x269&x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 215U;
	static int32_t x274 = INT32_MIN;
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t68 = 254991;

	t68 = (((x273&x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 15459080315LL;
	int8_t x278 = -1;
	volatile uint64_t x279 = 121787722226130LLU;
	int16_t x280 = -1;
	static int32_t t69 = 193920;

	t69 = (((x277&x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x282 = UINT32_MAX;
	static int16_t x283 = 5745;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t70 = 35;

	t70 = (((x281&x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MAX;
	static int16_t x287 = INT16_MAX;
	volatile int32_t t71 = 9;

	t71 = (((x285&x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -14352;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	volatile int16_t x292 = 323;
	volatile int32_t t72 = -24076;

	t72 = (((x289&x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 313819050402539447LLU;
	int16_t x296 = 763;
	int32_t t73 = 6494;

	t73 = (((x293&x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = 9377;
	static volatile int32_t x299 = INT32_MIN;
	volatile int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = -1;

	t74 = (((x297&x298)<=x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MIN;
	int64_t x302 = -10781LL;
	uint16_t x303 = 12U;
	static uint8_t x304 = 3U;
	int32_t t75 = -16;

	t75 = (((x301&x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 31991LL;
	int64_t x306 = 2LL;
	uint64_t x307 = 803600250LLU;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -49863756;

	t76 = (((x305&x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint16_t x311 = 775U;
	volatile int32_t x312 = -124602811;
	static int32_t t77 = -111045;

	t77 = (((x309&x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int64_t x314 = -1LL;
	int8_t x315 = -1;
	uint64_t x316 = 8090LLU;
	int32_t t78 = -274773;

	t78 = (((x313&x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 0LLU;
	int8_t x319 = INT8_MIN;
	static volatile int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -54062725;

	t79 = (((x317&x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int8_t x323 = INT8_MAX;
	uint64_t x324 = 7423666LLU;
	int32_t t80 = 4584872;

	t80 = (((x321&x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = 15904;
	int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	static uint32_t x328 = 2U;
	static int32_t t81 = 0;

	t81 = (((x325&x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 1011LLU;
	int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 217677781;

	t82 = (((x329&x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x335 = 1U;
	static uint64_t x336 = 482078LLU;

	t83 = (((x333&x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 44U;
	static uint32_t x338 = 78059620U;
	uint16_t x340 = 1283U;
	volatile int32_t t84 = 1;

	t84 = (((x337&x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = 5775117663644LLU;
	static volatile int32_t x343 = INT32_MIN;
	volatile int32_t x344 = -1;
	int32_t t85 = -26327403;

	t85 = (((x341&x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 3338277775869LL;
	int32_t x346 = -1;
	static int16_t x347 = -931;
	uint32_t x348 = 34230U;
	volatile int32_t t86 = 0;

	t86 = (((x345&x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x351 = INT64_MAX;

	t87 = (((x349&x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 26506482LLU;
	volatile uint8_t x355 = 86U;
	static int32_t t88 = -35094;

	t88 = (((x353&x354)<=x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = 246611221527LL;
	int8_t x359 = 33;

	t89 = (((x357&x358)<=x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = 1;
	volatile int32_t x363 = INT32_MAX;
	uint64_t x364 = 130098392730LLU;
	int32_t t90 = 111030;

	t90 = (((x361&x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 998975535LL;
	int8_t x366 = 0;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = 106;

	t91 = (((x365&x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int32_t x371 = -5051;
	static int16_t x372 = INT16_MAX;

	t92 = (((x369&x370)<=x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x374 = INT8_MAX;
	static int32_t t93 = 212653096;

	t93 = (((x373&x374)<=x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x377 = INT16_MIN;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 440;

	t94 = (((x377&x378)<=x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = INT64_MIN;
	int8_t x383 = 2;
	static int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -1572;

	t95 = (((x381&x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -11;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	static int32_t t96 = 1868;

	t96 = (((x385&x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 29LLU;
	int64_t x391 = -606788668895248511LL;
	volatile uint8_t x392 = 1U;

	t97 = (((x389&x390)<=x391)==x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int64_t x394 = 206752488922473370LL;
	int16_t x395 = -3;
	int64_t x396 = 0LL;
	volatile int32_t t98 = -1225382;

	t98 = (((x393&x394)<=x395)==x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	uint8_t x398 = UINT8_MAX;
	uint16_t x400 = 0U;
	static volatile int32_t t99 = 18;

	t99 = (((x397&x398)<=x399)==x400);

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

