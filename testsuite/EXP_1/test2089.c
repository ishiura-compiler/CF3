#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int32_t x8 = INT32_MIN;
int16_t x9 = 441;
static volatile int32_t t2 = -47;
volatile int32_t t3 = 167812;
int32_t t4 = 20557;
int32_t x27 = 3;
uint32_t x35 = UINT32_MAX;
volatile int8_t x38 = 1;
int32_t x46 = -6989808;
uint8_t x50 = 1U;
int32_t x58 = -252275;
int8_t x61 = INT8_MAX;
int16_t x64 = 40;
volatile uint8_t x66 = 5U;
int64_t x67 = INT64_MIN;
int32_t t17 = 390603;
int16_t x74 = INT16_MIN;
int64_t x75 = -106613169LL;
uint32_t x76 = UINT32_MAX;
volatile int64_t x78 = -13506007665953LL;
static uint64_t x80 = UINT64_MAX;
int16_t x81 = INT16_MAX;
int32_t t20 = 3666;
int32_t t24 = 5631485;
int8_t x106 = 5;
static uint32_t x113 = 105150U;
int32_t t29 = -699577;
int32_t x127 = INT32_MIN;
int16_t x136 = -1;
static uint64_t x142 = 52790712693LLU;
int32_t x144 = 1;
int32_t x145 = INT32_MAX;
uint16_t x162 = 3U;
volatile int32_t t39 = 110090777;
int8_t x167 = -1;
int32_t t40 = -2;
int32_t t42 = 0;
int16_t x180 = -4195;
uint8_t x191 = 4U;
static int8_t x192 = 2;
int8_t x193 = 45;
int16_t x196 = INT16_MIN;
uint8_t x201 = UINT8_MAX;
int32_t t48 = 3152;
int16_t x213 = INT16_MIN;
int32_t t53 = 3346311;
int8_t x226 = -12;
static volatile int32_t t57 = 247;
static int64_t x241 = INT64_MIN;
volatile int32_t t58 = 570;
int32_t t60 = -310;
volatile int32_t t61 = 80;
int32_t x259 = INT32_MIN;
int32_t t62 = 1;
uint64_t x264 = UINT64_MAX;
static volatile int64_t x271 = -1LL;
uint8_t x277 = UINT8_MAX;
int8_t x280 = -1;
static int32_t t67 = 36;
uint16_t x283 = 6168U;
int32_t t69 = -28;
int32_t t70 = -385486749;
int64_t x304 = INT64_MIN;
int32_t t76 = -4;
int64_t x318 = -353725LL;
static uint32_t x326 = UINT32_MAX;
int32_t t79 = 10922;
uint64_t x330 = UINT64_MAX;
int16_t x340 = -1;
int8_t x341 = INT8_MIN;
int32_t t85 = -40627;
volatile uint32_t x354 = 44111U;
int32_t t86 = 1545907;
int8_t x357 = INT8_MAX;
int32_t x362 = INT32_MIN;
volatile int32_t x364 = INT32_MIN;
static uint16_t x378 = UINT16_MAX;
volatile int32_t t92 = -198;
uint8_t x384 = 17U;
int32_t t93 = -2;
volatile int32_t t94 = 2791872;
volatile int8_t x389 = INT8_MIN;
int32_t x390 = -1;
int32_t t95 = -1925648;
uint32_t x394 = 1711U;
int8_t x398 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 35U;
	volatile uint8_t x2 = 81U;
	int64_t x3 = INT64_MIN;
	static int32_t t0 = -1940114;

	t0 = (((x1^x2)%x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MIN;
	static uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -125907375;

	t1 = (((x5^x6)%x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int32_t x11 = -17;
	uint16_t x12 = 12024U;

	t2 = (((x9^x10)%x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = 1824355897LL;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MAX;

	t3 = (((x13^x14)%x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -43;

	t4 = (((x17^x18)%x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 55976249LLU;
	static int8_t x22 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	static volatile uint8_t x24 = 63U;
	volatile int32_t t5 = -60853536;

	t5 = (((x21^x22)%x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -8;
	uint32_t x26 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -44495;

	t6 = (((x25^x26)%x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 778253845U;
	volatile int32_t x30 = -1;
	volatile int64_t x31 = -962478LL;
	volatile uint16_t x32 = 45U;
	volatile int32_t t7 = 1;

	t7 = (((x29^x30)%x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 1;
	volatile int32_t x34 = 1002;
	static uint64_t x36 = 152196842189939960LLU;
	int32_t t8 = 7214;

	t8 = (((x33^x34)%x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	static uint16_t x39 = UINT16_MAX;
	static int16_t x40 = 2;
	volatile int32_t t9 = -4335;

	t9 = (((x37^x38)%x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -505782319097645LL;
	static volatile int8_t x42 = 14;
	int32_t x43 = -1456;
	volatile int32_t x44 = INT32_MAX;
	static int32_t t10 = -28;

	t10 = (((x41^x42)%x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	static int16_t x47 = INT16_MIN;
	static uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = 805;

	t11 = (((x45^x46)%x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -7689756;

	t12 = (((x49^x50)%x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -7864;
	static volatile int16_t x54 = -1;
	int32_t x55 = 10695717;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t13 = 38273;

	t13 = (((x53^x54)%x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x59 = -221;
	int16_t x60 = -1;
	volatile int32_t t14 = 3377991;

	t14 = (((x57^x58)%x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = -3281188;

	t15 = (((x61^x62)%x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	volatile int32_t x68 = -1;
	static volatile int32_t t16 = -238807;

	t16 = (((x65^x66)%x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = 386;
	int16_t x71 = 1;
	int16_t x72 = INT16_MIN;

	t17 = (((x69^x70)%x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t t18 = -120255;

	t18 = (((x73^x74)%x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -51360866LL;
	int8_t x79 = 1;
	volatile int32_t t19 = -1;

	t19 = (((x77^x78)%x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 30778226603736916LLU;
	static int64_t x83 = -1LL;
	uint16_t x84 = 1U;

	t20 = (((x81^x82)%x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = INT16_MIN;
	static volatile uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -733;

	t21 = (((x85^x86)%x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = 840743064;

	t22 = (((x89^x90)%x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 57405230U;
	volatile int8_t x94 = INT8_MIN;
	int64_t x95 = 15LL;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 159311;

	t23 = (((x93^x94)%x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int32_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = 4973982LL;

	t24 = (((x97^x98)%x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MAX;
	static volatile int32_t t25 = 12339;

	t25 = (((x101^x102)%x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 63918309U;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 0;

	t26 = (((x105^x106)%x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -885LL;
	volatile int16_t x110 = -13;
	uint16_t x111 = 2U;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -14640;

	t27 = (((x109^x110)%x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	int32_t x115 = -2;
	volatile uint32_t x116 = 76U;
	static int32_t t28 = 0;

	t28 = (((x113^x114)%x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 230LLU;
	int64_t x122 = -2232546520373971LL;
	int8_t x123 = 30;
	uint8_t x124 = UINT8_MAX;

	t29 = (((x121^x122)%x123)<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x125 = INT64_MIN;
	uint8_t x126 = 0U;
	int8_t x128 = 4;
	int32_t t30 = -23365431;

	t30 = (((x125^x126)%x127)<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 68244471883157LLU;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MAX;
	uint16_t x132 = 47U;
	int32_t t31 = -807824;

	t31 = (((x129^x130)%x131)<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 8U;
	static volatile int16_t x134 = INT16_MAX;
	static int64_t x135 = INT64_MIN;
	static volatile int32_t t32 = 14;

	t32 = (((x133^x134)%x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 228U;
	int32_t x138 = INT32_MAX;
	int8_t x139 = -44;
	static uint64_t x140 = UINT64_MAX;
	int32_t t33 = 5277;

	t33 = (((x137^x138)%x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	static uint64_t x143 = UINT64_MAX;
	static int32_t t34 = -5;

	t34 = (((x141^x142)%x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = -1;
	static uint16_t x147 = 11U;
	uint32_t x148 = 582U;
	int32_t t35 = -66;

	t35 = (((x145^x146)%x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;
	static uint64_t x151 = UINT64_MAX;
	int64_t x152 = 255809834LL;
	int32_t t36 = -20612;

	t36 = (((x149^x150)%x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -4;
	static uint32_t x154 = 1245U;
	int32_t x155 = INT32_MIN;
	int64_t x156 = -3005161702LL;
	int32_t t37 = 6;

	t37 = (((x153^x154)%x155)<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	static int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = 0;
	static int32_t t38 = -131;

	t38 = (((x157^x158)%x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = INT64_MIN;
	static uint8_t x163 = 31U;
	uint32_t x164 = UINT32_MAX;

	t39 = (((x161^x162)%x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = -3672LL;
	int64_t x168 = -2797646562670299LL;

	t40 = (((x165^x166)%x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 2U;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 16U;
	volatile int32_t t41 = -1;

	t41 = (((x169^x170)%x171)<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 7192907U;
	static int8_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;

	t42 = (((x173^x174)%x175)<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = 10;
	int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int32_t t43 = 17088;

	t43 = (((x177^x178)%x179)<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = -1522395799LL;
	int64_t x186 = -2681914382LL;
	int16_t x187 = -691;
	int64_t x188 = INT64_MIN;
	volatile int32_t t44 = -1;

	t44 = (((x185^x186)%x187)<x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	static int32_t t45 = 379;

	t45 = (((x189^x190)%x191)<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	static volatile int32_t t46 = -9;

	t46 = (((x193^x194)%x195)<x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = -1;
	int64_t x198 = -1682LL;
	int32_t x199 = -74648;
	int16_t x200 = -49;
	int32_t t47 = 14136945;

	t47 = (((x197^x198)%x199)<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x202 = -1LL;
	volatile int32_t x203 = -1;
	uint8_t x204 = 1U;

	t48 = (((x201^x202)%x203)<x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	int8_t x206 = -9;
	volatile uint16_t x207 = 626U;
	volatile int32_t x208 = INT32_MIN;
	static int32_t t49 = 180784;

	t49 = (((x205^x206)%x207)<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = INT8_MAX;
	uint8_t x210 = 35U;
	static int16_t x211 = INT16_MAX;
	static volatile int32_t x212 = 1;
	volatile int32_t t50 = 4032414;

	t50 = (((x209^x210)%x211)<x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x214 = 79;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = 810973273815368476LL;
	int32_t t51 = -244318;

	t51 = (((x213^x214)%x215)<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x217 = UINT8_MAX;
	int64_t x218 = INT64_MIN;
	int32_t x219 = 897;
	int8_t x220 = 4;
	int32_t t52 = 845167;

	t52 = (((x217^x218)%x219)<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	volatile int64_t x222 = -100399173LL;
	uint16_t x223 = UINT16_MAX;
	static int32_t x224 = INT32_MAX;

	t53 = (((x221^x222)%x223)<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x225 = -1LL;
	int8_t x227 = 47;
	int64_t x228 = 4668526340668450LL;
	int32_t t54 = 14003;

	t54 = (((x225^x226)%x227)<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MAX;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = 5U;
	volatile int32_t t55 = 260;

	t55 = (((x229^x230)%x231)<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = 6400;
	uint16_t x234 = 367U;
	int64_t x235 = 2514823LL;
	volatile int64_t x236 = -1LL;
	int32_t t56 = -13642;

	t56 = (((x233^x234)%x235)<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	static uint32_t x238 = 666U;
	uint8_t x239 = 71U;
	int32_t x240 = INT32_MAX;

	t57 = (((x237^x238)%x239)<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x242 = 1;
	int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MIN;

	t58 = (((x241^x242)%x243)<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = UINT64_MAX;
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	int32_t t59 = -80353963;

	t59 = (((x245^x246)%x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;

	t60 = (((x249^x250)%x251)<x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	volatile int8_t x255 = -1;
	int8_t x256 = INT8_MAX;

	t61 = (((x253^x254)%x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x257 = INT16_MIN;
	int16_t x258 = 149;
	volatile uint32_t x260 = 198063U;

	t62 = (((x257^x258)%x259)<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = -1;
	static uint16_t x262 = 3678U;
	int8_t x263 = -1;
	volatile int32_t t63 = 9185565;

	t63 = (((x261^x262)%x263)<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	static volatile uint8_t x266 = 59U;
	volatile int32_t x267 = INT32_MAX;
	uint32_t x268 = 5036U;
	static int32_t t64 = 1219;

	t64 = (((x265^x266)%x267)<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -470;
	int32_t x270 = -1;
	uint32_t x272 = 79136U;
	volatile int32_t t65 = -239;

	t65 = (((x269^x270)%x271)<x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x273 = 172;
	static int8_t x274 = 0;
	static uint8_t x275 = UINT8_MAX;
	static volatile int8_t x276 = INT8_MIN;
	volatile int32_t t66 = 98519472;

	t66 = (((x273^x274)%x275)<x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = 1U;
	static int64_t x279 = -18045LL;

	t67 = (((x277^x278)%x279)<x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	static int32_t x282 = INT32_MIN;
	int8_t x284 = -1;
	volatile int32_t t68 = 64236;

	t68 = (((x281^x282)%x283)<x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	static uint64_t x286 = 185461891851910LLU;
	static int16_t x287 = INT16_MAX;
	static uint8_t x288 = 8U;

	t69 = (((x285^x286)%x287)<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -2;
	int8_t x291 = -1;
	volatile uint32_t x292 = 1106U;

	t70 = (((x289^x290)%x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	volatile int64_t x295 = -89367519866828823LL;
	static uint16_t x296 = UINT16_MAX;
	static volatile int32_t t71 = -87569;

	t71 = (((x293^x294)%x295)<x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x297 = 4U;
	uint32_t x298 = UINT32_MAX;
	static int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t72 = 3067997;

	t72 = (((x297^x298)%x299)<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = -1;
	uint16_t x303 = 80U;
	int32_t t73 = 36;

	t73 = (((x301^x302)%x303)<x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 6U;
	int64_t x306 = INT64_MIN;
	int64_t x307 = 6940789760121LL;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t74 = 7603698;

	t74 = (((x305^x306)%x307)<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1882;
	int8_t x310 = -1;
	static int16_t x311 = -1;
	int8_t x312 = INT8_MAX;
	int32_t t75 = -14;

	t75 = (((x309^x310)%x311)<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	int8_t x315 = -1;
	int8_t x316 = 1;

	t76 = (((x313^x314)%x315)<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x317 = 8565592U;
	uint64_t x319 = UINT64_MAX;
	volatile int64_t x320 = -1LL;
	volatile int32_t t77 = -6795;

	t77 = (((x317^x318)%x319)<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t78 = -59;

	t78 = (((x321^x322)%x323)<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x327 = UINT64_MAX;
	static volatile uint32_t x328 = 897990538U;

	t79 = (((x325^x326)%x327)<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x329 = 10915661U;
	int64_t x331 = -172LL;
	int64_t x332 = INT64_MIN;
	volatile int32_t t80 = -105226;

	t80 = (((x329^x330)%x331)<x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 3U;
	int16_t x334 = INT16_MIN;
	static int64_t x335 = -1LL;
	int16_t x336 = -1;
	volatile int32_t t81 = -97126285;

	t81 = (((x333^x334)%x335)<x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	volatile int32_t t82 = 55;

	t82 = (((x337^x338)%x339)<x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 37U;
	int64_t x344 = -195736280LL;
	volatile int32_t t83 = 1;

	t83 = (((x341^x342)%x343)<x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = -1;
	uint64_t x347 = 3379555LLU;
	int32_t x348 = INT32_MIN;
	static int32_t t84 = -50473532;

	t84 = (((x345^x346)%x347)<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x349 = INT16_MAX;
	static int32_t x350 = INT32_MAX;
	uint64_t x351 = 174LLU;
	volatile int16_t x352 = INT16_MIN;

	t85 = (((x349^x350)%x351)<x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	int64_t x355 = -1LL;
	volatile int64_t x356 = -61397863029LL;

	t86 = (((x353^x354)%x355)<x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x358 = 644379245740070062LLU;
	static uint64_t x359 = UINT64_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t87 = 53643;

	t87 = (((x357^x358)%x359)<x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	int8_t x363 = INT8_MIN;
	int32_t t88 = 115718;

	t88 = (((x361^x362)%x363)<x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -598936LL;
	static int8_t x366 = 0;
	int16_t x367 = -4422;
	int32_t x368 = -191186;
	int32_t t89 = 138;

	t89 = (((x365^x366)%x367)<x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -2;
	static int32_t x371 = -106;
	int64_t x372 = INT64_MAX;
	volatile int32_t t90 = -156705016;

	t90 = (((x369^x370)%x371)<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -1LL;
	uint32_t x374 = 510U;
	uint16_t x375 = 1742U;
	uint32_t x376 = 320U;
	int32_t t91 = 7;

	t91 = (((x373^x374)%x375)<x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 15497528U;
	volatile int64_t x379 = -1LL;
	int64_t x380 = INT64_MAX;

	t92 = (((x377^x378)%x379)<x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = 2200;
	volatile uint64_t x382 = 578904699LLU;
	int16_t x383 = INT16_MIN;

	t93 = (((x381^x382)%x383)<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x385 = 2632172U;
	uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 2766U;
	uint8_t x388 = 31U;

	t94 = (((x385^x386)%x387)<x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x391 = 27441556U;
	volatile uint16_t x392 = UINT16_MAX;

	t95 = (((x389^x390)%x391)<x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x393 = 297831U;
	volatile uint8_t x395 = 1U;
	uint32_t x396 = 0U;
	static volatile int32_t t96 = 304249;

	t96 = (((x393^x394)%x395)<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 3509252LLU;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 6029502065LLU;
	volatile int32_t t97 = -30;

	t97 = (((x397^x398)%x399)<x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x401 = 56802524;
	int64_t x402 = INT64_MAX;
	static uint64_t x403 = UINT64_MAX;
	int32_t x404 = -1;
	volatile int32_t t98 = -30554;

	t98 = (((x401^x402)%x403)<x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -3;
	static uint64_t x406 = UINT64_MAX;
	volatile uint64_t x407 = 556286743LLU;
	int16_t x408 = -1;
	int32_t t99 = -19594549;

	t99 = (((x405^x406)%x407)<x408);

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

