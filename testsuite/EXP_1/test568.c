#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static int8_t x5 = -8;
volatile int32_t t1 = -78345689;
int8_t x15 = -1;
static int32_t t3 = 1219;
static int16_t x21 = -6683;
volatile int32_t x31 = -1379;
static int16_t x32 = INT16_MIN;
volatile int32_t t7 = -30595;
int32_t x41 = -36414;
uint32_t x43 = UINT32_MAX;
volatile int16_t x44 = -13817;
static int32_t t9 = 23;
static int64_t x48 = INT64_MIN;
volatile uint64_t x54 = 18146056068756LLU;
uint64_t x66 = 11680533559902475LLU;
int64_t x72 = INT64_MAX;
int16_t x75 = INT16_MIN;
int32_t t18 = -307245458;
volatile uint8_t x91 = 58U;
volatile int32_t t20 = -964665;
volatile int64_t x93 = INT64_MIN;
uint8_t x94 = UINT8_MAX;
int32_t x95 = -1;
static volatile int64_t x98 = INT64_MIN;
int32_t t23 = 0;
int8_t x108 = INT8_MAX;
uint32_t x113 = 1U;
int64_t x126 = -1901LL;
int32_t t30 = 3205642;
int32_t x138 = 252;
int32_t x142 = -1252;
int32_t t32 = 37637;
static uint64_t x151 = 1710LLU;
static int8_t x154 = INT8_MIN;
int32_t x155 = INT32_MIN;
int8_t x158 = INT8_MIN;
int16_t x162 = INT16_MIN;
int32_t t37 = -297238;
int32_t x170 = INT32_MAX;
int32_t x173 = INT32_MIN;
static int32_t t40 = -122308674;
int16_t x178 = -1;
int32_t x180 = INT32_MIN;
uint16_t x183 = UINT16_MAX;
static int64_t x191 = 2882915LL;
static int8_t x195 = 12;
int32_t t44 = 224885122;
int16_t x197 = 7;
static uint64_t x198 = 4326LLU;
int32_t t45 = 3112;
uint32_t x207 = 4U;
int32_t t47 = 13280;
static int32_t x221 = INT32_MIN;
uint64_t x224 = 7230966890LLU;
volatile int32_t t51 = -20;
static uint64_t x227 = 62544831397641447LLU;
volatile int32_t x228 = -1;
volatile int64_t x231 = -58358LL;
int32_t x243 = -1;
int16_t x245 = INT16_MIN;
volatile int32_t t57 = -211;
static volatile int64_t x249 = -2075LL;
volatile int32_t t60 = 15520;
static volatile int64_t x263 = INT64_MIN;
uint32_t x270 = 27310U;
int8_t x272 = -1;
volatile int32_t t63 = -7;
uint8_t x273 = UINT8_MAX;
int32_t x280 = INT32_MIN;
int16_t x282 = -1;
volatile int32_t t67 = -1529722;
int32_t x297 = 27671014;
static volatile int32_t t69 = -1;
static volatile int32_t x308 = -446;
static int16_t x313 = INT16_MIN;
int32_t t73 = 172;
uint64_t x317 = UINT64_MAX;
uint64_t x321 = UINT64_MAX;
static volatile int32_t t75 = -22;
int32_t x326 = 15408203;
volatile int8_t x327 = -1;
uint64_t x328 = 395940650702938LLU;
volatile int32_t t76 = -14699;
volatile int16_t x332 = INT16_MIN;
volatile int32_t t79 = 176;
uint16_t x345 = 2388U;
int32_t t80 = -106742355;
static int8_t x357 = INT8_MIN;
volatile int64_t x361 = INT64_MAX;
uint16_t x364 = UINT16_MAX;
int8_t x366 = INT8_MAX;
static uint8_t x367 = 56U;
uint64_t x375 = 8LLU;
int64_t x380 = -15240553054012604LL;
static volatile uint32_t x381 = UINT32_MAX;
uint16_t x383 = UINT16_MAX;
static int8_t x384 = -1;
uint16_t x385 = 51U;
int16_t x390 = 1;
static volatile int16_t x393 = -12;
volatile uint8_t x396 = 1U;
int16_t x397 = INT16_MIN;
uint16_t x399 = UINT16_MAX;
int32_t t93 = 2968519;
static uint32_t x420 = 492279480U;
static uint32_t x423 = 1202065U;
volatile int64_t x424 = 3612334958150968165LL;
int64_t x428 = INT64_MAX;
int32_t t98 = 371971434;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MAX;
	int16_t x4 = 7;
	int32_t t0 = 88245;

	t0 = (((x1/x2)%x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = -120;
	int32_t x8 = 12;

	t1 = (((x5/x6)%x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = 1;
	static volatile int8_t x11 = INT8_MAX;
	uint8_t x12 = 16U;
	int32_t t2 = -9;

	t2 = (((x9/x10)%x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = 26292;
	int16_t x16 = -1;

	t3 = (((x13/x14)%x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -379;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -16277;

	t4 = (((x17/x18)%x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	static uint8_t x23 = UINT8_MAX;
	uint64_t x24 = UINT64_MAX;
	static volatile int32_t t5 = -2915;

	t5 = (((x21/x22)%x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = 5;
	static int16_t x28 = 1;
	volatile int32_t t6 = -625276231;

	t6 = (((x25/x26)%x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	int16_t x30 = -57;

	t7 = (((x29/x30)%x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 222204U;
	int16_t x34 = -1;
	static volatile uint32_t x35 = UINT32_MAX;
	volatile uint64_t x36 = 888214227586LLU;
	int32_t t8 = 180189886;

	t8 = (((x33/x34)%x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = 21839U;

	t9 = (((x41/x42)%x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 493U;
	volatile uint64_t x46 = UINT64_MAX;
	static int32_t x47 = INT32_MIN;
	int32_t t10 = 2410890;

	t10 = (((x45/x46)%x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -936;
	int32_t x50 = 6832255;
	uint32_t x51 = 3546U;
	int16_t x52 = 14;
	volatile int32_t t11 = -9947735;

	t11 = (((x49/x50)%x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x55 = 49843426U;
	static int64_t x56 = INT64_MIN;
	static int32_t t12 = 30625;

	t12 = (((x53/x54)%x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile int16_t x63 = INT16_MAX;
	static int64_t x64 = INT64_MIN;
	int32_t t13 = -979;

	t13 = (((x61/x62)%x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	static int8_t x67 = -1;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = 26306;

	t14 = (((x65/x66)%x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = -1;
	int32_t t15 = 7722;

	t15 = (((x69/x70)%x71)<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 173293LL;
	int64_t x74 = -1LL;
	static uint64_t x76 = 3646645LLU;
	static int32_t t16 = -11374811;

	t16 = (((x73/x74)%x75)<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 248371808U;
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	static uint64_t x80 = UINT64_MAX;
	static volatile int32_t t17 = 638;

	t17 = (((x77/x78)%x79)<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	static uint8_t x82 = 4U;
	int16_t x83 = INT16_MAX;
	int16_t x84 = INT16_MAX;

	t18 = (((x81/x82)%x83)<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	static uint32_t x86 = 2851587U;
	int16_t x87 = -1;
	volatile int8_t x88 = 0;
	int32_t t19 = -25;

	t19 = (((x85/x86)%x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -29655678;
	static int32_t x90 = INT32_MIN;
	int8_t x92 = INT8_MIN;

	t20 = (((x89/x90)%x91)<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x96 = -1;
	int32_t t21 = 41976;

	t21 = (((x93/x94)%x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 2U;
	int64_t x99 = INT64_MAX;
	uint64_t x100 = UINT64_MAX;
	int32_t t22 = -1788;

	t22 = (((x97/x98)%x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 50U;
	int32_t x104 = INT32_MAX;

	t23 = (((x101/x102)%x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	static int32_t x106 = INT32_MIN;
	static int32_t x107 = 32369509;
	static volatile int32_t t24 = 209;

	t24 = (((x105/x106)%x107)<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MAX;
	volatile int16_t x111 = 5397;
	int16_t x112 = INT16_MAX;
	int32_t t25 = -27746795;

	t25 = (((x109/x110)%x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	uint32_t x116 = 1U;
	volatile int32_t t26 = -452103117;

	t26 = (((x113/x114)%x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile uint16_t x118 = 7355U;
	static int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t27 = -200948095;

	t27 = (((x117/x118)%x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	int16_t x124 = 1;
	volatile int32_t t28 = 106;

	t28 = (((x121/x122)%x123)<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MIN;
	volatile uint16_t x127 = UINT16_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t29 = 47207;

	t29 = (((x125/x126)%x127)<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 222193166LLU;
	uint32_t x134 = 244598U;
	int8_t x135 = -1;
	volatile uint32_t x136 = UINT32_MAX;

	t30 = (((x133/x134)%x135)<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x137 = UINT16_MAX;
	volatile int32_t x139 = INT32_MIN;
	uint64_t x140 = 15876918475LLU;
	volatile int32_t t31 = -434167137;

	t31 = (((x137/x138)%x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 27;
	int64_t x143 = -1LL;
	volatile int32_t x144 = 1;

	t32 = (((x141/x142)%x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = 14567;
	static int32_t x146 = INT32_MAX;
	volatile uint8_t x147 = 14U;
	static uint64_t x148 = 0LLU;
	volatile int32_t t33 = 92902;

	t33 = (((x145/x146)%x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	static int64_t x152 = INT64_MIN;
	int32_t t34 = 22246728;

	t34 = (((x149/x150)%x151)<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 14888644394LLU;
	int64_t x156 = INT64_MAX;
	static int32_t t35 = 3;

	t35 = (((x153/x154)%x155)<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x157 = UINT64_MAX;
	uint16_t x159 = 234U;
	static int8_t x160 = -1;
	static volatile int32_t t36 = 26;

	t36 = (((x157/x158)%x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 39U;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;

	t37 = (((x161/x162)%x163)<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MIN;
	volatile uint16_t x166 = 15U;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t38 = -1817;

	t38 = (((x165/x166)%x167)<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 10U;
	int32_t x171 = -635758117;
	uint64_t x172 = UINT64_MAX;
	int32_t t39 = -8;

	t39 = (((x169/x170)%x171)<x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MIN;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MAX;

	t40 = (((x173/x174)%x175)<x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MAX;
	volatile int64_t x179 = 1691030LL;
	static int32_t t41 = 1;

	t41 = (((x177/x178)%x179)<x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	static int32_t t42 = 426388423;

	t42 = (((x181/x182)%x183)<x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t43 = -4;

	t43 = (((x189/x190)%x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x193 = 14;
	int16_t x194 = -1;
	int32_t x196 = INT32_MIN;

	t44 = (((x193/x194)%x195)<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x199 = -1;
	uint8_t x200 = 64U;

	t45 = (((x197/x198)%x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = -1797LL;
	volatile int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	static int64_t x204 = -1LL;
	static int32_t t46 = 2629155;

	t46 = (((x201/x202)%x203)<x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = -1;
	int16_t x206 = -3;
	int16_t x208 = INT16_MIN;

	t47 = (((x205/x206)%x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = 115U;
	uint32_t x210 = 2126U;
	volatile uint64_t x211 = 4LLU;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t48 = 57;

	t48 = (((x209/x210)%x211)<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = 10U;
	int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = 1932338285458982LLU;
	int8_t x216 = -1;
	volatile int32_t t49 = -61980898;

	t49 = (((x213/x214)%x215)<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	static volatile int16_t x219 = -1;
	int16_t x220 = INT16_MIN;
	volatile int32_t t50 = -16;

	t50 = (((x217/x218)%x219)<x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x222 = 21U;
	int8_t x223 = -1;

	t51 = (((x221/x222)%x223)<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = -6290879;
	int64_t x226 = INT64_MIN;
	int32_t t52 = -352;

	t52 = (((x225/x226)%x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x229 = 22835U;
	uint32_t x230 = 1336U;
	int64_t x232 = INT64_MAX;
	volatile int32_t t53 = -4990323;

	t53 = (((x229/x230)%x231)<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x233 = 8LLU;
	uint16_t x234 = 15610U;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -258326970;
	volatile int32_t t54 = 57605;

	t54 = (((x233/x234)%x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x237 = UINT16_MAX;
	int64_t x238 = 508694LL;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MAX;
	volatile int32_t t55 = -1901;

	t55 = (((x237/x238)%x239)<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = -1;
	uint64_t x242 = 40908941688666LLU;
	int16_t x244 = -1;
	static int32_t t56 = 67;

	t56 = (((x241/x242)%x243)<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x246 = 16717U;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MAX;

	t57 = (((x245/x246)%x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x250 = UINT16_MAX;
	int64_t x251 = -2919486901LL;
	volatile int64_t x252 = 3931399397295LL;
	volatile int32_t t58 = -7;

	t58 = (((x249/x250)%x251)<x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x253 = INT8_MIN;
	static int16_t x254 = 8;
	volatile int64_t x255 = -1LL;
	static int64_t x256 = -468585659010879838LL;
	int32_t t59 = -225385237;

	t59 = (((x253/x254)%x255)<x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 6U;
	static uint64_t x258 = 1270379452248593LLU;
	static volatile int8_t x259 = -1;
	volatile uint16_t x260 = UINT16_MAX;

	t60 = (((x257/x258)%x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 3913U;
	int8_t x262 = INT8_MIN;
	static volatile int32_t x264 = INT32_MIN;
	int32_t t61 = 2;

	t61 = (((x261/x262)%x263)<x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MAX;
	int32_t x266 = -1;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 2064483U;
	int32_t t62 = -410;

	t62 = (((x265/x266)%x267)<x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int64_t x271 = -1444113931LL;

	t63 = (((x269/x270)%x271)<x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = INT64_MIN;
	int16_t x276 = -1;
	volatile int32_t t64 = 54209;

	t64 = (((x273/x274)%x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = -6;
	volatile int64_t x279 = INT64_MIN;
	int32_t t65 = 403482;

	t65 = (((x277/x278)%x279)<x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x281 = 3U;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = -2;
	int32_t t66 = -3;

	t66 = (((x281/x282)%x283)<x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = 5577504U;
	int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	uint64_t x288 = 117656955397274LLU;

	t67 = (((x285/x286)%x287)<x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 8017LLU;
	int64_t x290 = -26020518942LL;
	static int64_t x291 = INT64_MAX;
	static uint64_t x292 = 465208708678LLU;
	int32_t t68 = 100;

	t68 = (((x289/x290)%x291)<x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -1;
	int16_t x299 = -1;
	int16_t x300 = -7310;

	t69 = (((x297/x298)%x299)<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t70 = -19305;

	t70 = (((x301/x302)%x303)<x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 38;
	uint64_t x306 = 5172030244248LLU;
	static int8_t x307 = INT8_MIN;
	volatile int32_t t71 = 498766;

	t71 = (((x305/x306)%x307)<x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x309 = INT32_MAX;
	int64_t x310 = INT64_MIN;
	volatile int32_t x311 = INT32_MAX;
	volatile int8_t x312 = 2;
	volatile int32_t t72 = -1255;

	t72 = (((x309/x310)%x311)<x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x314 = 163100374651LLU;
	int8_t x315 = -1;
	int32_t x316 = INT32_MAX;

	t73 = (((x313/x314)%x315)<x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x318 = -1;
	static int8_t x319 = -9;
	uint64_t x320 = 967303735241004136LLU;
	int32_t t74 = 73888619;

	t74 = (((x317/x318)%x319)<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 2U;
	int32_t x324 = -151013038;

	t75 = (((x321/x322)%x323)<x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x325 = -7;

	t76 = (((x325/x326)%x327)<x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 2826090529033LLU;
	volatile int8_t x330 = 42;
	int64_t x331 = INT64_MIN;
	static volatile int32_t t77 = -991677068;

	t77 = (((x329/x330)%x331)<x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 59U;
	static uint8_t x334 = 3U;
	int8_t x335 = INT8_MAX;
	int32_t x336 = 342218716;
	static int32_t t78 = -108;

	t78 = (((x333/x334)%x335)<x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -148;
	int16_t x342 = 50;
	uint64_t x343 = 4991LLU;
	static int16_t x344 = INT16_MIN;

	t79 = (((x341/x342)%x343)<x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x346 = 18U;
	uint16_t x347 = 228U;
	static int8_t x348 = 50;

	t80 = (((x345/x346)%x347)<x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = -221;
	uint8_t x350 = 13U;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	int32_t t81 = 3519;

	t81 = (((x349/x350)%x351)<x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x358 = INT16_MAX;
	volatile int64_t x359 = -4552779150466760LL;
	static uint16_t x360 = 139U;
	volatile int32_t t82 = 1815392;

	t82 = (((x357/x358)%x359)<x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x362 = -1;
	int16_t x363 = INT16_MAX;
	volatile int32_t t83 = 9635919;

	t83 = (((x361/x362)%x363)<x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x365 = 157610450779783LLU;
	int8_t x368 = -1;
	int32_t t84 = -1894261;

	t84 = (((x365/x366)%x367)<x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = 356434;
	static int32_t x371 = -17934;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t85 = 9297;

	t85 = (((x369/x370)%x371)<x372);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MAX;
	volatile int16_t x374 = 96;
	volatile int64_t x376 = INT64_MIN;
	int32_t t86 = 203477;

	t86 = (((x373/x374)%x375)<x376);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 8U;
	int8_t x379 = INT8_MAX;
	static volatile int32_t t87 = 2797391;

	t87 = (((x377/x378)%x379)<x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x382 = 669176602727692LLU;
	volatile int32_t t88 = -15303;

	t88 = (((x381/x382)%x383)<x384);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x386 = 14U;
	int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t89 = 8112;

	t89 = (((x385/x386)%x387)<x388);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = -1;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	volatile int32_t t90 = 79;

	t90 = (((x389/x390)%x391)<x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x394 = -1LL;
	int32_t x395 = -278559;
	volatile int32_t t91 = 7;

	t91 = (((x393/x394)%x395)<x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x398 = UINT16_MAX;
	int64_t x400 = INT64_MAX;
	volatile int32_t t92 = -14877;

	t92 = (((x397/x398)%x399)<x400);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x401 = 384696607U;
	int32_t x402 = -1777;
	int32_t x403 = 73362;
	int32_t x404 = INT32_MAX;

	t93 = (((x401/x402)%x403)<x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	static int64_t x406 = INT64_MAX;
	uint16_t x407 = UINT16_MAX;
	int32_t x408 = -1;
	static int32_t t94 = 4728440;

	t94 = (((x405/x406)%x407)<x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = INT64_MAX;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MAX;
	int32_t t95 = -7812;

	t95 = (((x409/x410)%x411)<x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x417 = 42;
	static uint16_t x418 = 127U;
	int16_t x419 = -1;
	volatile int32_t t96 = -28;

	t96 = (((x417/x418)%x419)<x420);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x421 = 35U;
	int8_t x422 = INT8_MAX;
	int32_t t97 = -264976;

	t97 = (((x421/x422)%x423)<x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = INT32_MIN;
	uint32_t x426 = 40U;
	volatile int8_t x427 = INT8_MAX;

	t98 = (((x425/x426)%x427)<x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = 1U;
	static uint32_t x430 = 1854U;
	int16_t x431 = INT16_MIN;
	uint16_t x432 = 6104U;
	volatile int32_t t99 = -2221219;

	t99 = (((x429/x430)%x431)<x432);

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

