#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
uint32_t x10 = 1082U;
uint8_t x18 = UINT8_MAX;
int8_t x20 = -1;
int16_t x23 = -6773;
static int64_t x29 = 29501533336LL;
int8_t x34 = INT8_MIN;
int8_t x37 = INT8_MIN;
int8_t x38 = 0;
int32_t t9 = -4;
int32_t x42 = INT32_MIN;
int32_t t10 = 1;
volatile int8_t x51 = INT8_MIN;
int64_t x53 = -5736187LL;
int16_t x60 = INT16_MIN;
static uint8_t x64 = UINT8_MAX;
int32_t x67 = -155;
static uint8_t x84 = UINT8_MAX;
static int32_t t21 = 1;
int32_t x92 = INT32_MIN;
volatile int32_t t24 = 2037;
int8_t x101 = 1;
uint8_t x102 = 3U;
static int8_t x106 = -1;
volatile int32_t t27 = -9105;
static uint16_t x116 = 2U;
static int32_t t28 = 6352;
int32_t t31 = -59;
volatile int16_t x130 = INT16_MIN;
volatile int64_t x133 = INT64_MAX;
volatile int32_t t33 = 0;
uint32_t x141 = 43982950U;
static uint64_t x156 = 28864LLU;
volatile int8_t x157 = INT8_MIN;
int8_t x159 = -1;
int32_t t39 = 3531959;
uint64_t x167 = UINT64_MAX;
int64_t x170 = -1LL;
static uint32_t x171 = 7369U;
volatile int8_t x184 = -1;
int64_t x186 = -1LL;
static int16_t x193 = 3;
int32_t x196 = -1009853;
int32_t t48 = -50068;
int8_t x197 = 18;
static uint64_t x201 = 3051642598780LLU;
static int16_t x204 = INT16_MIN;
uint64_t x210 = 48122LLU;
uint8_t x211 = 0U;
uint16_t x212 = 7U;
int16_t x215 = INT16_MIN;
volatile int16_t x219 = INT16_MAX;
int16_t x220 = -1;
int16_t x221 = -1;
uint16_t x223 = 1508U;
volatile int32_t t55 = -684953;
volatile int8_t x231 = INT8_MAX;
uint16_t x232 = UINT16_MAX;
uint64_t x235 = 2282349150216LLU;
int32_t t59 = 1;
static uint32_t x243 = 1307051U;
static volatile int8_t x246 = 29;
volatile int8_t x253 = INT8_MIN;
static uint8_t x260 = 27U;
int8_t x263 = 2;
static volatile int64_t x267 = -867012271112580043LL;
int16_t x269 = INT16_MAX;
static uint8_t x271 = 29U;
volatile int16_t x272 = -222;
int32_t t67 = -1;
static int64_t x278 = INT64_MIN;
uint32_t x280 = UINT32_MAX;
uint16_t x290 = 1U;
static int16_t x291 = -1;
uint32_t x294 = 3576024U;
int8_t x300 = 6;
static int32_t t75 = 14895;
int64_t x308 = 10860LL;
int16_t x315 = -9873;
volatile int32_t x317 = INT32_MIN;
static int32_t x318 = INT32_MIN;
int32_t t79 = 1932;
volatile int64_t x322 = -1LL;
volatile int32_t x328 = INT32_MIN;
uint32_t x332 = UINT32_MAX;
volatile int32_t t86 = 0;
int8_t x353 = 0;
volatile int32_t x354 = 252;
volatile uint32_t x357 = 844131792U;
static volatile int64_t x371 = -10573LL;
int8_t x377 = INT8_MAX;
uint64_t x380 = 661108385LLU;
int32_t x385 = INT32_MAX;
volatile int32_t t96 = 3424927;
uint8_t x389 = 0U;
volatile int32_t t98 = 89;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = 846;
	int8_t x3 = INT8_MAX;
	uint64_t x4 = 71496436778LLU;
	int32_t t0 = -286344;

	t0 = (((x1&x2)<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static int8_t x6 = 11;
	static uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = 13;

	t1 = (((x5&x6)<x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int64_t x11 = INT64_MAX;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 131788001;

	t2 = (((x9&x10)<x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static volatile int32_t x14 = -1;
	int32_t x15 = 94612027;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 1;

	t3 = (((x13&x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile int32_t t4 = 3833;

	t4 = (((x17&x18)<x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 1U;
	uint64_t x24 = 12415LLU;
	volatile int32_t t5 = 0;

	t5 = (((x21&x22)<x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint16_t x26 = 6U;
	volatile uint64_t x27 = 51529LLU;
	int16_t x28 = -4;
	volatile int32_t t6 = 12;

	t6 = (((x25&x26)<x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 5954;

	t7 = (((x29&x30)<x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x35 = 487169514054553LLU;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -953;

	t8 = (((x33&x34)<x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 5718U;

	t9 = (((x37&x38)<x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -5;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 92U;

	t10 = (((x41&x42)<x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -1LL;
	static volatile int8_t x47 = -2;
	static volatile uint16_t x48 = 25987U;
	int32_t t11 = -114636;

	t11 = (((x45&x46)<x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	volatile int16_t x50 = INT16_MAX;
	static int8_t x52 = INT8_MAX;
	int32_t t12 = -7865;

	t12 = (((x49&x50)<x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = -1;
	uint8_t x55 = 41U;
	static volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -2237264;

	t13 = (((x53&x54)<x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	static int8_t x58 = -7;
	volatile int64_t x59 = INT64_MIN;
	volatile int32_t t14 = 3454931;

	t14 = (((x57&x58)<x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = 29LL;
	static int32_t x63 = -1;
	volatile int32_t t15 = -6014442;

	t15 = (((x61&x62)<x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 6U;
	int16_t x66 = INT16_MIN;
	int8_t x68 = 0;
	int32_t t16 = 331;

	t16 = (((x65&x66)<x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -2135;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 34;

	t17 = (((x69&x70)<x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -2687300101140887LL;
	static volatile uint8_t x74 = 1U;
	int8_t x75 = 58;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = 309896244;

	t18 = (((x73&x74)<x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -665;
	int8_t x78 = -1;
	volatile int64_t x79 = -1LL;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t19 = 1;

	t19 = (((x77&x78)<x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	int32_t x82 = INT32_MAX;
	int8_t x83 = -7;
	volatile int32_t t20 = -131;

	t20 = (((x81&x82)<x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;

	t21 = (((x85&x86)<x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = -1;
	static volatile int32_t t22 = -12;

	t22 = (((x89&x90)<x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1122209644U;
	uint32_t x94 = 9857U;
	int64_t x95 = INT64_MAX;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -285055;

	t23 = (((x93&x94)<x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static int16_t x98 = -1;
	uint16_t x99 = 15U;
	volatile int8_t x100 = 5;

	t24 = (((x97&x98)<x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x103 = 190426351464948255LLU;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 23056;

	t25 = (((x101&x102)<x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int16_t x107 = -1;
	int16_t x108 = INT16_MAX;
	static int32_t t26 = -59740704;

	t26 = (((x105&x106)<x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = -1LL;
	volatile int32_t x112 = INT32_MAX;

	t27 = (((x109&x110)<x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -4653;
	volatile int64_t x114 = -1LL;
	int64_t x115 = INT64_MIN;

	t28 = (((x113&x114)<x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = 659457948;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = 54887;

	t29 = (((x117&x118)<x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -3;
	volatile int8_t x122 = -49;
	volatile int64_t x123 = 108682997282LL;
	int8_t x124 = -4;
	int32_t t30 = -860698;

	t30 = (((x121&x122)<x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	uint64_t x126 = 398756366442219933LLU;
	uint16_t x127 = 1347U;
	uint8_t x128 = UINT8_MAX;

	t31 = (((x125&x126)<x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -32103743;
	volatile uint64_t x131 = 5196760832956499671LLU;
	static int16_t x132 = -39;
	int32_t t32 = 4346;

	t32 = (((x129&x130)<x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -1;
	int16_t x135 = INT16_MIN;
	static uint32_t x136 = 593U;

	t33 = (((x133&x134)<x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 0U;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = -2273;
	uint16_t x140 = 146U;
	volatile int32_t t34 = 73245;

	t34 = (((x137&x138)<x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 0U;
	uint8_t x143 = 1U;
	uint16_t x144 = 444U;
	volatile int32_t t35 = 347629;

	t35 = (((x141&x142)<x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = 655511;
	static int32_t x147 = -48;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -255089;

	t36 = (((x145&x146)<x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int16_t x150 = 558;
	int16_t x151 = -1;
	volatile int8_t x152 = -1;
	volatile int32_t t37 = -61224176;

	t37 = (((x149&x150)<x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 3876U;
	volatile int8_t x155 = -1;
	static volatile int32_t t38 = 0;

	t38 = (((x153&x154)<x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x158 = 93479565;
	int64_t x160 = INT64_MIN;

	t39 = (((x157&x158)<x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = -1;
	static int8_t x163 = -31;
	int32_t x164 = 1747;
	volatile int32_t t40 = -128;

	t40 = (((x161&x162)<x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int64_t x166 = -1LL;
	static int16_t x168 = INT16_MIN;
	static int32_t t41 = 1;

	t41 = (((x165&x166)<x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 1087U;
	int32_t x172 = -1;
	volatile int32_t t42 = -331;

	t42 = (((x169&x170)<x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 1U;
	uint64_t x174 = 1025246184480LLU;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 25426;

	t43 = (((x173&x174)<x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -34;
	uint32_t x178 = 484112641U;
	int8_t x179 = 1;
	uint8_t x180 = 14U;
	volatile int32_t t44 = 17907697;

	t44 = (((x177&x178)<x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	volatile uint16_t x182 = 297U;
	volatile int16_t x183 = INT16_MIN;
	int32_t t45 = -14;

	t45 = (((x181&x182)<x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x187 = UINT16_MAX;
	volatile int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = 4110961;

	t46 = (((x185&x186)<x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	static int64_t x190 = INT64_MIN;
	static int16_t x191 = INT16_MAX;
	uint64_t x192 = 1430LLU;
	int32_t t47 = 872101841;

	t47 = (((x189&x190)<x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;

	t48 = (((x193&x194)<x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 7U;
	int64_t x199 = -1865961825984829LL;
	static int8_t x200 = INT8_MAX;
	int32_t t49 = 218141413;

	t49 = (((x197&x198)<x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 8113U;
	static int64_t x203 = 26355LL;
	volatile int32_t t50 = 47;

	t50 = (((x201&x202)<x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 4581713U;
	int32_t x206 = INT32_MIN;
	static volatile int64_t x207 = INT64_MAX;
	uint64_t x208 = 6546751899LLU;
	volatile int32_t t51 = 26;

	t51 = (((x205&x206)<x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	volatile int32_t t52 = 2943798;

	t52 = (((x209&x210)<x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	volatile int8_t x214 = 6;
	static int8_t x216 = -1;
	int32_t t53 = 1039993119;

	t53 = (((x213&x214)<x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static int16_t x218 = 127;
	volatile int32_t t54 = -6209;

	t54 = (((x217&x218)<x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	uint8_t x224 = 108U;

	t55 = (((x221&x222)<x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	volatile uint64_t x226 = UINT64_MAX;
	int64_t x227 = 153566084468388LL;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = -73;

	t56 = (((x225&x226)<x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	volatile int32_t x230 = -1;
	int32_t t57 = 38109;

	t57 = (((x229&x230)<x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -3;
	static uint32_t x234 = 1548U;
	int64_t x236 = -1LL;
	volatile int32_t t58 = -12;

	t58 = (((x233&x234)<x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int16_t x239 = 279;
	int32_t x240 = INT32_MIN;

	t59 = (((x237&x238)<x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = UINT64_MAX;
	static int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -80021;

	t60 = (((x241&x242)<x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int8_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;
	int32_t t61 = 0;

	t61 = (((x245&x246)<x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	uint64_t x250 = 18417822656550911LLU;
	int64_t x251 = INT64_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = -442;

	t62 = (((x249&x250)<x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = UINT32_MAX;
	static uint64_t x255 = 14LLU;
	volatile int16_t x256 = INT16_MAX;
	int32_t t63 = -218;

	t63 = (((x253&x254)<x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = UINT8_MAX;
	static uint8_t x258 = 7U;
	static int64_t x259 = 4LL;
	int32_t t64 = 3903;

	t64 = (((x257&x258)<x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 5;
	int8_t x262 = -12;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = -107888949;

	t65 = (((x261&x262)<x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MAX;
	static volatile uint32_t x268 = 314570548U;
	static volatile int32_t t66 = -42633103;

	t66 = (((x265&x266)<x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;

	t67 = (((x269&x270)<x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint32_t x274 = 52432U;
	int8_t x275 = -1;
	static int32_t x276 = -1;
	static volatile int32_t t68 = 11326;

	t68 = (((x273&x274)<x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static uint16_t x279 = 739U;
	int32_t t69 = 9161;

	t69 = (((x277&x278)<x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -668461563;
	static uint8_t x283 = UINT8_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -454586;

	t70 = (((x281&x282)<x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MAX;
	int8_t x288 = INT8_MIN;
	static int32_t t71 = -249413;

	t71 = (((x285&x286)<x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -3175;
	int32_t x292 = INT32_MAX;
	static int32_t t72 = -110837;

	t72 = (((x289&x290)<x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	uint8_t x295 = 8U;
	int8_t x296 = 0;
	int32_t t73 = -31272;

	t73 = (((x293&x294)<x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	volatile uint32_t x299 = 7521U;
	static volatile int32_t t74 = 18202;

	t74 = (((x297&x298)<x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 22U;
	volatile int16_t x302 = INT16_MIN;
	int8_t x303 = 0;
	int32_t x304 = -1;

	t75 = (((x301&x302)<x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x305 = INT32_MIN;
	volatile uint64_t x306 = 4LLU;
	static uint64_t x307 = 7168LLU;
	int32_t t76 = -45237542;

	t76 = (((x305&x306)<x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = 5914;
	static uint8_t x312 = 0U;
	int32_t t77 = 18981;

	t77 = (((x309&x310)<x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -1;
	int32_t x314 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t78 = -11750405;

	t78 = (((x313&x314)<x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x319 = 2LLU;
	int8_t x320 = 25;

	t79 = (((x317&x318)<x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 1LLU;
	int64_t x323 = INT64_MAX;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t80 = 87;

	t80 = (((x321&x322)<x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 18U;
	volatile int8_t x326 = -1;
	static volatile int64_t x327 = -462604634991LL;
	volatile int32_t t81 = -37688;

	t81 = (((x325&x326)<x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	int64_t x330 = 152LL;
	static int32_t x331 = INT32_MAX;
	int32_t t82 = -113422809;

	t82 = (((x329&x330)<x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MAX;
	volatile uint64_t x334 = 2728581720148163362LLU;
	int16_t x335 = 900;
	static int16_t x336 = INT16_MAX;
	static int32_t t83 = 101;

	t83 = (((x333&x334)<x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 13;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = 364480353U;
	int32_t t84 = 652880986;

	t84 = (((x337&x338)<x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -1;

	t85 = (((x341&x342)<x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile uint64_t x346 = 42LLU;
	static int64_t x347 = 1LL;
	int64_t x348 = INT64_MIN;

	t86 = (((x345&x346)<x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = 0;
	int16_t x350 = INT16_MAX;
	int32_t x351 = -6207;
	volatile int8_t x352 = INT8_MIN;
	int32_t t87 = -2937166;

	t87 = (((x349&x350)<x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x355 = 6796U;
	int16_t x356 = INT16_MIN;
	static int32_t t88 = -1606788;

	t88 = (((x353&x354)<x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x358 = 6U;
	volatile uint32_t x359 = 10553U;
	static uint32_t x360 = 0U;
	volatile int32_t t89 = -245687935;

	t89 = (((x357&x358)<x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -6359;
	int64_t x362 = INT64_MAX;
	volatile int8_t x363 = 1;
	int32_t x364 = -11421373;
	int32_t t90 = -168106681;

	t90 = (((x361&x362)<x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 228702LLU;
	uint32_t x366 = 5067177U;
	volatile int64_t x367 = INT64_MIN;
	static uint64_t x368 = UINT64_MAX;
	int32_t t91 = -27053775;

	t91 = (((x365&x366)<x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int64_t x370 = INT64_MAX;
	int64_t x372 = -1LL;
	int32_t t92 = -4;

	t92 = (((x369&x370)<x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	uint32_t x374 = 49797442U;
	int64_t x375 = -1LL;
	volatile int16_t x376 = -1;
	static volatile int32_t t93 = 15525045;

	t93 = (((x373&x374)<x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = 2;
	volatile int32_t t94 = -22536;

	t94 = (((x377&x378)<x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x381 = 73U;
	int64_t x382 = INT64_MIN;
	int8_t x383 = 7;
	static int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 227084571;

	t95 = (((x381&x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -43;
	int64_t x387 = INT64_MAX;
	volatile uint8_t x388 = 0U;

	t96 = (((x385&x386)<x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x390 = 33U;
	int16_t x391 = -1;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t97 = -481;

	t97 = (((x389&x390)<x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = 0;
	static volatile int8_t x395 = INT8_MIN;
	static int32_t x396 = 0;

	t98 = (((x393&x394)<x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int64_t x398 = -21815178LL;
	static int16_t x399 = 2869;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -11821;

	t99 = (((x397&x398)<x399)<x400);

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

