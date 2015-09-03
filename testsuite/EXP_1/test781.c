#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int16_t x3 = -1;
volatile uint64_t x4 = UINT64_MAX;
static uint32_t x12 = UINT32_MAX;
int16_t x13 = INT16_MIN;
int8_t x14 = INT8_MIN;
int64_t x17 = -154LL;
uint64_t x18 = UINT64_MAX;
int16_t x19 = -1;
uint64_t t4 = 1859480915054LLU;
static int32_t x23 = INT32_MAX;
static uint64_t x30 = UINT64_MAX;
static uint64_t x33 = 1LLU;
uint8_t x34 = UINT8_MAX;
static uint8_t x35 = UINT8_MAX;
volatile int32_t t10 = 219;
static uint32_t t11 = 3972U;
uint8_t x50 = 77U;
int32_t t12 = 757663;
volatile int32_t x56 = INT32_MIN;
static int64_t x60 = INT64_MIN;
volatile int32_t x61 = -15209;
int16_t x63 = -10;
int16_t x64 = INT16_MIN;
uint8_t x65 = 7U;
int8_t x74 = 1;
static uint16_t x85 = 17753U;
int8_t x90 = INT8_MIN;
int8_t x100 = -5;
int32_t x106 = INT32_MIN;
int32_t x108 = INT32_MAX;
int8_t x119 = -3;
static volatile int32_t t28 = 0;
volatile int16_t x127 = -1;
int16_t x128 = INT16_MAX;
int8_t x131 = -1;
static volatile int32_t x133 = -22536223;
uint16_t x134 = 7U;
volatile int32_t x136 = -6;
volatile int32_t t31 = 5966;
int8_t x137 = -1;
volatile int32_t t32 = INT32_MAX;
uint32_t x153 = 245049U;
int16_t x156 = INT16_MAX;
volatile int32_t x161 = -1;
int32_t x163 = 5290526;
int8_t x169 = 1;
int64_t x179 = INT64_MAX;
int32_t x181 = INT32_MIN;
int8_t x184 = -38;
int32_t t41 = 60;
static int8_t x187 = INT8_MAX;
volatile int64_t x189 = -563441198997576380LL;
int32_t x192 = -14185408;
int32_t x194 = -1;
int64_t x200 = 1344737203737LL;
int32_t x201 = INT32_MIN;
uint32_t x205 = UINT32_MAX;
static volatile int32_t t48 = -228671127;
int64_t x216 = 3652764785640LL;
int32_t x219 = INT32_MIN;
uint64_t x231 = UINT64_MAX;
int64_t x232 = INT64_MIN;
int64_t t53 = 905LL;
int16_t x234 = INT16_MIN;
static volatile int64_t x235 = 14432783704637LL;
volatile uint64_t x237 = 4LLU;
int32_t x239 = -6921;
int64_t t55 = -396490458947LL;
uint8_t x251 = 98U;
int64_t x252 = -1LL;
int16_t x253 = INT16_MIN;
int8_t x260 = 1;
static int16_t x263 = INT16_MIN;
uint32_t x264 = UINT32_MAX;
uint8_t x268 = 5U;
int32_t t61 = -6951271;
int64_t x271 = -71517799007LL;
static int8_t x275 = INT8_MIN;
int64_t x276 = -1LL;
int32_t x278 = INT32_MIN;
int32_t t64 = 1725;
int8_t x283 = 10;
int64_t x286 = INT64_MIN;
volatile int64_t t67 = 54001507LL;
uint64_t x294 = UINT64_MAX;
int16_t x295 = -4797;
volatile int32_t t68 = 1803;
static int8_t x297 = 2;
int8_t x298 = INT8_MIN;
static uint8_t x311 = UINT8_MAX;
int32_t x325 = INT32_MAX;
uint32_t t74 = 877U;
int32_t t75 = 2;
int8_t x335 = -1;
int32_t x336 = INT32_MIN;
int32_t t76 = -9363;
volatile int64_t t77 = 537LL;
volatile int8_t x344 = INT8_MAX;
int64_t x346 = 47LL;
volatile uint32_t x352 = UINT32_MAX;
static volatile uint32_t t80 = 1848U;
static int32_t x359 = -204985;
static volatile int32_t x361 = 492380;
int64_t x363 = -1LL;
int32_t t83 = 51;
int64_t x371 = -1LL;
static volatile uint16_t x380 = UINT16_MAX;
int8_t x386 = -1;
int32_t x388 = INT32_MIN;
int32_t t93 = -909787099;
static int64_t x413 = INT64_MIN;
int32_t t95 = -3;
volatile int32_t t97 = -15;
static int64_t t98 = -4468685862472088LL;


void f0(void) {
	static uint32_t x1 = 118U;
	static volatile uint64_t t0 = 155LLU;

	t0 = (((x1%x2)<x3)+x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 57U;
	volatile uint16_t x6 = 11021U;
	static uint8_t x7 = UINT8_MAX;
	int8_t x8 = -4;
	int32_t t1 = 465;

	t1 = (((x5%x6)<x7)+x8);

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 5471597;
	volatile int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	uint32_t t2 = UINT32_MAX;

	t2 = (((x9%x10)<x11)+x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = 0;
	int64_t x16 = INT64_MAX;
	int64_t t3 = INT64_MAX;

	t3 = (((x13%x14)<x15)+x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x20 = 49447099LLU;

	t4 = (((x17%x18)<x19)+x20);

	if (t4 != 49447100LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x21 = 14912LLU;
	static uint8_t x22 = 2U;
	static uint8_t x24 = 4U;
	int32_t t5 = 3203611;

	t5 = (((x21%x22)<x23)+x24);

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -86;
	int64_t x26 = INT64_MIN;
	volatile int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -10075605;

	t6 = (((x25%x26)<x27)+x28);

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 116736238;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 264U;
	volatile int32_t t7 = -36;

	t7 = (((x29%x30)<x31)+x32);

	if (t7 != 264) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 2070321349068447LLU;

	t8 = (((x33%x34)<x35)+x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	volatile int16_t x38 = INT16_MIN;
	static uint8_t x39 = 1U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (((x37%x38)<x39)+x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = 6;
	uint16_t x44 = 121U;

	t10 = (((x41%x42)<x43)+x44);

	if (t10 != 122) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -460LL;
	volatile int16_t x46 = INT16_MIN;
	static uint8_t x47 = 23U;
	uint32_t x48 = 7U;

	t11 = (((x45%x46)<x47)+x48);

	if (t11 != 8U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x51 = 22U;
	uint8_t x52 = 1U;

	t12 = (((x49%x50)<x51)+x52);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 29;
	int8_t x54 = 1;
	volatile int64_t x55 = -69045893LL;
	static volatile int32_t t13 = INT32_MIN;

	t13 = (((x53%x54)<x55)+x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 37U;
	uint8_t x58 = 21U;
	volatile int64_t x59 = -19171538235746LL;
	int64_t t14 = INT64_MIN;

	t14 = (((x57%x58)<x59)+x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = -1;
	volatile int32_t t15 = 317691;

	t15 = (((x61%x62)<x63)+x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 25731U;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 41891;

	t16 = (((x65%x66)<x67)+x68);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 2030310LL;
	int8_t x70 = -1;
	uint64_t x71 = 117281495LLU;
	uint16_t x72 = 15U;
	int32_t t17 = 23960548;

	t17 = (((x69%x70)<x71)+x72);

	if (t17 != 16) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -236740LL;
	static int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 113;

	t18 = (((x73%x74)<x75)+x76);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 1U;
	uint32_t x78 = 59368U;
	int8_t x79 = -4;
	int8_t x80 = -3;
	volatile int32_t t19 = -13;

	t19 = (((x77%x78)<x79)+x80);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	static volatile int16_t x88 = -1;
	static volatile int32_t t20 = -4495;

	t20 = (((x85%x86)<x87)+x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -10552;
	volatile uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = -114102;
	volatile int32_t t21 = -493599856;

	t21 = (((x89%x90)<x91)+x92);

	if (t21 != -114101) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = 6705U;
	uint16_t x94 = 230U;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 173;

	t22 = (((x93%x94)<x95)+x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 14LLU;
	int64_t x98 = -1LL;
	static uint16_t x99 = 10U;
	int32_t t23 = -887;

	t23 = (((x97%x98)<x99)+x100);

	if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = -4939;
	uint16_t x102 = UINT16_MAX;
	volatile int64_t x103 = -1LL;
	uint16_t x104 = 0U;
	int32_t t24 = 843;

	t24 = (((x101%x102)<x103)+x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 20U;
	int64_t x107 = INT64_MIN;
	volatile int32_t t25 = INT32_MAX;

	t25 = (((x105%x106)<x107)+x108);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	volatile uint64_t x112 = 1LLU;
	uint64_t t26 = 367816341018265LLU;

	t26 = (((x109%x110)<x111)+x112);

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MAX;
	uint8_t x120 = 61U;
	volatile int32_t t27 = 1717709;

	t27 = (((x117%x118)<x119)+x120);

	if (t27 != 62) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	static uint16_t x122 = 17U;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MAX;

	t28 = (((x121%x122)<x123)+x124);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = 1;
	volatile int32_t t29 = -1601613;

	t29 = (((x125%x126)<x127)+x128);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	int64_t x130 = -1LL;
	static uint8_t x132 = 7U;
	static int32_t t30 = -21;

	t30 = (((x129%x130)<x131)+x132);

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x135 = 1U;

	t31 = (((x133%x134)<x135)+x136);

	if (t31 != -5) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MAX;

	t32 = (((x137%x138)<x139)+x140);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x145 = 25U;
	uint8_t x146 = UINT8_MAX;
	volatile uint8_t x147 = 27U;
	int16_t x148 = INT16_MAX;
	int32_t t33 = 225227911;

	t33 = (((x145%x146)<x147)+x148);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 9453U;
	int32_t t34 = 210585;

	t34 = (((x153%x154)<x155)+x156);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MAX;
	static volatile int16_t x158 = INT16_MIN;
	volatile int16_t x159 = -64;
	volatile int16_t x160 = INT16_MIN;
	int32_t t35 = -109378351;

	t35 = (((x157%x158)<x159)+x160);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x162 = 34080U;
	int16_t x164 = 1;
	volatile int32_t t36 = -454234481;

	t36 = (((x161%x162)<x163)+x164);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = UINT16_MAX;
	uint16_t x166 = 4999U;
	int8_t x167 = 1;
	volatile int16_t x168 = INT16_MIN;
	int32_t t37 = -1;

	t37 = (((x165%x166)<x167)+x168);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = INT16_MIN;
	static volatile int32_t t38 = -13;

	t38 = (((x169%x170)<x171)+x172);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x173 = UINT32_MAX;
	int16_t x174 = 2;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = -50;
	static volatile int32_t t39 = 7681;

	t39 = (((x173%x174)<x175)+x176);

	if (t39 != -49) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MAX;
	int8_t x178 = -5;
	static int8_t x180 = -2;
	volatile int32_t t40 = -2849540;

	t40 = (((x177%x178)<x179)+x180);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x182 = 29648U;
	int16_t x183 = INT16_MIN;

	t41 = (((x181%x182)<x183)+x184);

	if (t41 != -37) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x185 = 433U;
	volatile int32_t x186 = INT32_MAX;
	static int8_t x188 = 6;
	volatile int32_t t42 = 95951249;

	t42 = (((x185%x186)<x187)+x188);

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x190 = UINT16_MAX;
	static int32_t x191 = INT32_MIN;
	static volatile int32_t t43 = -22571719;

	t43 = (((x189%x190)<x191)+x192);

	if (t43 != -14185408) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -2585LL;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = 19324068LLU;
	volatile uint64_t t44 = 563425291172816660LLU;

	t44 = (((x193%x194)<x195)+x196);

	if (t44 != 19324069LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -58163259173LL;
	static int64_t x198 = -1LL;
	int8_t x199 = -1;
	volatile int64_t t45 = 3007622LL;

	t45 = (((x197%x198)<x199)+x200);

	if (t45 != 1344737203737LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	int8_t x204 = -1;
	volatile int32_t t46 = 806950666;

	t46 = (((x201%x202)<x203)+x204);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = INT8_MAX;
	int16_t x207 = -10;
	uint32_t x208 = 12929332U;
	volatile uint32_t t47 = 7005U;

	t47 = (((x205%x206)<x207)+x208);

	if (t47 != 12929333U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = -1;
	int64_t x210 = -69LL;
	volatile uint8_t x211 = 12U;
	volatile uint16_t x212 = 681U;

	t48 = (((x209%x210)<x211)+x212);

	if (t48 != 682) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 18;
	int16_t x214 = INT16_MAX;
	int8_t x215 = 7;
	static int64_t t49 = 3867950LL;

	t49 = (((x213%x214)<x215)+x216);

	if (t49 != 3652764785640LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MAX;
	int8_t x218 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x217%x218)<x219)+x220);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 203U;
	uint32_t x223 = 6182U;
	volatile uint32_t x224 = 345486U;
	uint32_t t51 = 108U;

	t51 = (((x221%x222)<x223)+x224);

	if (t51 != 345486U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 7525570726LLU;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = INT16_MIN;
	int8_t x228 = -1;
	int32_t t52 = 2043718;

	t52 = (((x225%x226)<x227)+x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 24LLU;
	int64_t x230 = INT64_MAX;

	t53 = (((x229%x230)<x231)+x232);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t54 = -43;

	t54 = (((x233%x234)<x235)+x236);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = -777396;
	static int64_t x240 = INT64_MIN;

	t55 = (((x237%x238)<x239)+x240);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 12U;
	uint64_t x247 = 5876461LLU;
	int16_t x248 = 81;
	int32_t t56 = 6;

	t56 = (((x245%x246)<x247)+x248);

	if (t56 != 82) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -5;
	static int8_t x250 = -1;
	int64_t t57 = -1LL;

	t57 = (((x249%x250)<x251)+x252);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = INT16_MAX;
	static uint16_t x255 = 63U;
	volatile int32_t x256 = 21085761;
	volatile int32_t t58 = -63350;

	t58 = (((x253%x254)<x255)+x256);

	if (t58 != 21085762) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = 174095LL;
	static int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	volatile int32_t t59 = 342;

	t59 = (((x257%x258)<x259)+x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MAX;
	uint32_t x262 = 101487U;
	uint32_t t60 = 16028998U;

	t60 = (((x261%x262)<x263)+x264);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = -8;
	uint16_t x266 = 3U;
	int32_t x267 = INT32_MIN;

	t61 = (((x265%x266)<x267)+x268);

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 118U;
	uint16_t x270 = 8U;
	int64_t x272 = -1LL;
	int64_t t62 = 700024098LL;

	t62 = (((x269%x270)<x271)+x272);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = -1;
	volatile int64_t t63 = -374971683LL;

	t63 = (((x273%x274)<x275)+x276);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = 0;
	volatile int64_t x279 = INT64_MAX;
	int16_t x280 = -1;

	t64 = (((x277%x278)<x279)+x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = -104034;
	uint64_t x282 = UINT64_MAX;
	volatile int16_t x284 = INT16_MIN;
	int32_t t65 = -773;

	t65 = (((x281%x282)<x283)+x284);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x285 = INT16_MAX;
	int32_t x287 = -1;
	int64_t x288 = 1369726182LL;
	volatile int64_t t66 = 2882877LL;

	t66 = (((x285%x286)<x287)+x288);

	if (t66 != 1369726182LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = 13U;
	volatile uint32_t x290 = 31037972U;
	volatile uint16_t x291 = 1U;
	int64_t x292 = -1LL;

	t67 = (((x289%x290)<x291)+x292);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -510726LL;
	volatile uint8_t x296 = UINT8_MAX;

	t68 = (((x293%x294)<x295)+x296);

	if (t68 != 256) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x299 = -472;
	volatile uint32_t x300 = 43076U;
	uint32_t t69 = 41702U;

	t69 = (((x297%x298)<x299)+x300);

	if (t69 != 43076U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x305 = -1LL;
	static int8_t x306 = -35;
	int8_t x307 = 10;
	int8_t x308 = INT8_MIN;
	volatile int32_t t70 = -16758323;

	t70 = (((x305%x306)<x307)+x308);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MAX;
	static int32_t x312 = -128478;
	volatile int32_t t71 = -253;

	t71 = (((x309%x310)<x311)+x312);

	if (t71 != -128477) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	static volatile int16_t x315 = 1664;
	volatile int64_t x316 = -1LL;
	int64_t t72 = 1669LL;

	t72 = (((x313%x314)<x315)+x316);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	static uint64_t x319 = 5325273819129529LLU;
	uint8_t x320 = 75U;
	int32_t t73 = 32302590;

	t73 = (((x317%x318)<x319)+x320);

	if (t73 != 76) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x326 = 5;
	static uint32_t x327 = UINT32_MAX;
	static uint32_t x328 = 54674604U;

	t74 = (((x325%x326)<x327)+x328);

	if (t74 != 54674605U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = 19;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 79597U;
	volatile int8_t x332 = INT8_MIN;

	t75 = (((x329%x330)<x331)+x332);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -1;
	volatile uint64_t x334 = 29971985923409693LLU;

	t76 = (((x333%x334)<x335)+x336);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x337 = -1;
	uint32_t x338 = 62338U;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = -1525372569LL;

	t77 = (((x337%x338)<x339)+x340);

	if (t77 != -1525372568LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 246609178LLU;
	uint16_t x342 = 207U;
	int16_t x343 = 2;
	volatile int32_t t78 = 1944;

	t78 = (((x341%x342)<x343)+x344);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = INT8_MAX;
	volatile int64_t x347 = INT64_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t79 = 4018;

	t79 = (((x345%x346)<x347)+x348);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	static int32_t x350 = -715538167;
	uint8_t x351 = UINT8_MAX;

	t80 = (((x349%x350)<x351)+x352);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -1LL;
	int8_t x354 = 15;
	uint16_t x355 = UINT16_MAX;
	static uint64_t x356 = 845996LLU;
	uint64_t t81 = 29976180LLU;

	t81 = (((x353%x354)<x355)+x356);

	if (t81 != 845997LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = -40LL;
	volatile int16_t x360 = -6825;
	int32_t t82 = 87545;

	t82 = (((x357%x358)<x359)+x360);

	if (t82 != -6825) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x362 = 48U;
	int16_t x364 = -6;

	t83 = (((x361%x362)<x363)+x364);

	if (t83 != -6) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x365 = 2841050LL;
	volatile uint32_t x366 = 2279662U;
	uint16_t x367 = 1384U;
	uint8_t x368 = UINT8_MAX;
	static volatile int32_t t84 = 52224;

	t84 = (((x365%x366)<x367)+x368);

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = -39118;
	uint64_t x372 = 21LLU;
	volatile uint64_t t85 = 2LLU;

	t85 = (((x369%x370)<x371)+x372);

	if (t85 != 21LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = 95389754;
	int8_t x374 = 1;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = -60265;
	volatile int32_t t86 = -40633344;

	t86 = (((x373%x374)<x375)+x376);

	if (t86 != -60265) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x377 = 86U;
	volatile int16_t x378 = INT16_MIN;
	volatile int32_t x379 = 6956;
	int32_t t87 = -1;

	t87 = (((x377%x378)<x379)+x380);

	if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MIN;
	volatile int8_t x382 = -1;
	int16_t x383 = 14;
	uint16_t x384 = 145U;
	int32_t t88 = 960077;

	t88 = (((x381%x382)<x383)+x384);

	if (t88 != 146) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x385 = INT16_MAX;
	int32_t x387 = INT32_MAX;
	static volatile int32_t t89 = -13053;

	t89 = (((x385%x386)<x387)+x388);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = INT8_MAX;
	int64_t x390 = 15810666622910136LL;
	static int32_t x391 = INT32_MAX;
	int32_t x392 = -94;
	int32_t t90 = -122774419;

	t90 = (((x389%x390)<x391)+x392);

	if (t90 != -93) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	static int64_t x394 = 945981LL;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = 1;
	volatile int32_t t91 = -18462;

	t91 = (((x393%x394)<x395)+x396);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile int8_t x398 = INT8_MIN;
	int16_t x399 = -1;
	volatile int32_t x400 = 2889;
	volatile int32_t t92 = -49825716;

	t92 = (((x397%x398)<x399)+x400);

	if (t92 != 2889) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = -1LL;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MIN;
	int32_t x408 = -1;

	t93 = (((x405%x406)<x407)+x408);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x409 = 24570U;
	static volatile int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	volatile int8_t x412 = INT8_MAX;
	volatile int32_t t94 = -216539;

	t94 = (((x409%x410)<x411)+x412);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x414 = INT16_MIN;
	static int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MIN;

	t95 = (((x413%x414)<x415)+x416);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x417 = 115865540LLU;
	int64_t x418 = INT64_MAX;
	volatile int16_t x419 = 17;
	int32_t x420 = INT32_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = (((x417%x418)<x419)+x420);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	uint64_t x423 = UINT64_MAX;
	static int16_t x424 = INT16_MIN;

	t97 = (((x421%x422)<x423)+x424);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x425 = 8U;
	static int16_t x426 = 10;
	int8_t x427 = INT8_MIN;
	static volatile int64_t x428 = -1LL;

	t98 = (((x425%x426)<x427)+x428);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = 1;
	int64_t x431 = 0LL;
	volatile int64_t x432 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = (((x429%x430)<x431)+x432);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

