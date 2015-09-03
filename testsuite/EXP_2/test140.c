#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -6122336;
static int32_t t0 = -909;
int64_t x5 = -1LL;
static int64_t x6 = INT64_MIN;
volatile int16_t x8 = INT16_MIN;
int64_t x9 = -195648LL;
uint8_t x12 = UINT8_MAX;
int16_t x15 = INT16_MIN;
int32_t x18 = 32403;
uint64_t x22 = UINT64_MAX;
uint32_t x23 = UINT32_MAX;
static int16_t x32 = INT16_MIN;
int16_t x39 = 209;
volatile int32_t t9 = 32;
int8_t x41 = 4;
int64_t x46 = INT64_MIN;
int64_t x50 = -1LL;
uint8_t x53 = UINT8_MAX;
volatile int16_t x57 = -1;
volatile int32_t t16 = -3374066;
int64_t x71 = -1LL;
int16_t x80 = INT16_MIN;
volatile int64_t x81 = 827644649721LL;
int8_t x84 = -1;
static int32_t t20 = -12138859;
int32_t x87 = -778628;
uint16_t x90 = 17034U;
uint32_t x98 = 145657497U;
int8_t x99 = INT8_MIN;
uint8_t x100 = UINT8_MAX;
volatile int32_t t23 = -1544;
int8_t x111 = -1;
int32_t x121 = -103323;
static int64_t x136 = -9LL;
int32_t x145 = -1;
static int32_t x152 = INT32_MIN;
int32_t t34 = 1215;
int64_t x154 = -427976LL;
int32_t t35 = -2439;
static volatile int32_t t39 = -436;
int32_t x178 = INT32_MIN;
uint64_t x179 = 94LLU;
static volatile int32_t x182 = INT32_MAX;
int16_t x183 = INT16_MIN;
uint16_t x185 = 310U;
int32_t x188 = INT32_MIN;
volatile int32_t t42 = -18221655;
uint8_t x191 = UINT8_MAX;
static int8_t x195 = 4;
volatile int32_t t44 = -249;
int32_t x199 = -1656;
volatile int64_t x203 = 445260100097277LL;
int16_t x205 = -1;
int32_t x210 = INT32_MIN;
static int8_t x214 = -1;
volatile int8_t x215 = -2;
int64_t x216 = INT64_MAX;
int64_t x226 = -66323237983362788LL;
int32_t x228 = INT32_MIN;
uint8_t x229 = UINT8_MAX;
int16_t x230 = -1;
static int64_t x231 = 71978LL;
static int32_t t52 = 220;
volatile uint32_t x239 = 0U;
static volatile int8_t x242 = INT8_MIN;
int8_t x246 = -1;
static int32_t x256 = -33;
volatile int32_t t57 = -9190890;
int32_t x258 = INT32_MIN;
volatile int32_t t59 = -196948837;
int64_t x268 = -1LL;
static int64_t x269 = -187983LL;
int8_t x274 = 4;
volatile int32_t t63 = 16397306;
static int64_t x283 = INT64_MIN;
uint8_t x293 = 45U;
int8_t x296 = -1;
uint32_t x300 = 834861759U;
uint64_t x301 = UINT64_MAX;
int32_t x313 = -1;
uint16_t x315 = UINT16_MAX;
static int32_t t70 = 53767;
static uint64_t x329 = UINT64_MAX;
int8_t x331 = 0;
static int8_t x333 = INT8_MAX;
uint8_t x336 = UINT8_MAX;
volatile int32_t t74 = 1917339;
uint32_t x340 = 1175396465U;
volatile int32_t t76 = 406658091;
int32_t t77 = -1576;
uint8_t x357 = 3U;
static int16_t x358 = -1;
int32_t x359 = -1;
volatile int32_t t80 = -755464012;
int64_t x363 = INT64_MIN;
volatile int32_t t81 = 0;
uint32_t x367 = 1023U;
volatile uint64_t x375 = UINT64_MAX;
static volatile int32_t t83 = -302143;
volatile int32_t t86 = -8171;
volatile int8_t x389 = INT8_MIN;
int32_t t91 = -2577278;
int16_t x417 = -1;
int32_t t95 = -287410;
volatile int32_t t98 = -1140;
int8_t x444 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint32_t x2 = UINT32_MAX;
	volatile uint16_t x4 = UINT16_MAX;

	t0 = ((x1&(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = 218U;
	int32_t t1 = -16;

	t1 = ((x5&(x6+x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int8_t x11 = 1;
	static volatile int32_t t2 = -5;

	t2 = ((x9&(x10+x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static int64_t x14 = -16883690525836LL;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 19165780;

	t3 = ((x13&(x14+x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 19;

	t4 = ((x17&(x18+x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x24 = -136LL;
	static int32_t t5 = 916043035;

	t5 = ((x21&(x22+x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 0;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = -893798923;

	t6 = ((x25&(x26+x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int64_t x30 = 2543161939LL;
	static int32_t x31 = 147834546;
	volatile int32_t t7 = -796192859;

	t7 = ((x29&(x30+x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 6346462LL;
	int8_t x34 = -1;
	uint16_t x35 = 616U;
	int16_t x36 = -1;
	int32_t t8 = -60447304;

	t8 = ((x33&(x34+x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = 0;
	int8_t x40 = INT8_MIN;

	t9 = ((x37&(x38+x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = 514753525LL;
	int16_t x43 = -1;
	static uint16_t x44 = 129U;
	static int32_t t10 = -111;

	t10 = ((x41&(x42+x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static uint16_t x47 = UINT16_MAX;
	volatile int32_t x48 = 31;
	volatile int32_t t11 = 15397;

	t11 = ((x45&(x46+x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	volatile uint64_t x51 = UINT64_MAX;
	static volatile int16_t x52 = -3;
	int32_t t12 = 65265;

	t12 = ((x49&(x50+x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 491U;
	int16_t x55 = INT16_MIN;
	static volatile int16_t x56 = 3566;
	volatile int32_t t13 = -11867523;

	t13 = ((x53&(x54+x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = 15;
	uint8_t x59 = 19U;
	int64_t x60 = 18924353LL;
	volatile int32_t t14 = -4704;

	t14 = ((x57&(x58+x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = 2973112LLU;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = 877;

	t15 = ((x61&(x62+x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -141;
	int64_t x66 = INT64_MIN;
	static uint32_t x67 = 49707U;
	uint32_t x68 = UINT32_MAX;

	t16 = ((x65&(x66+x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int32_t x70 = INT32_MIN;
	volatile uint8_t x72 = 23U;
	volatile int32_t t17 = 7273119;

	t17 = ((x69&(x70+x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	static uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 31322;

	t18 = ((x73&(x74+x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1LL;
	volatile int8_t x78 = 14;
	uint32_t x79 = 57284263U;
	volatile int32_t t19 = 32446;

	t19 = ((x77&(x78+x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint32_t x83 = UINT32_MAX;

	t20 = ((x81&(x82+x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = 5;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 4178868;

	t21 = ((x85&(x86+x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	int32_t x91 = -1;
	int64_t x92 = INT64_MAX;
	static int32_t t22 = -535775;

	t22 = ((x89&(x90+x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1;

	t23 = ((x97&(x98+x99))<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 10376LL;
	volatile int32_t x106 = -881416729;
	int32_t x107 = -280;
	int16_t x108 = -1;
	static int32_t t24 = 1009685;

	t24 = ((x105&(x106+x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int64_t x112 = INT64_MAX;
	int32_t t25 = -2;

	t25 = ((x109&(x110+x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = 345138U;
	uint32_t x115 = 94065U;
	volatile uint32_t x116 = 0U;
	volatile int32_t t26 = -331;

	t26 = ((x113&(x114+x115))<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = 0U;
	int16_t x120 = -1;
	int32_t t27 = 1470;

	t27 = ((x117&(x118+x119))<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = -1;
	uint32_t x123 = 0U;
	int16_t x124 = INT16_MIN;
	volatile int32_t t28 = 0;

	t28 = ((x121&(x122+x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	uint32_t x126 = 1014364U;
	int8_t x127 = INT8_MIN;
	static int32_t x128 = -1;
	volatile int32_t t29 = 433140;

	t29 = ((x125&(x126+x127))<=x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -15;
	static int32_t x130 = 44978;
	volatile int32_t x131 = -1;
	uint32_t x132 = 3U;
	static int32_t t30 = -3240;

	t30 = ((x129&(x130+x131))<=x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x133 = 16U;
	int32_t x134 = -1;
	uint64_t x135 = 175052062985LLU;
	static int32_t t31 = 3426213;

	t31 = ((x133&(x134+x135))<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = -1;
	static uint64_t x143 = UINT64_MAX;
	volatile uint16_t x144 = 10U;
	static volatile int32_t t32 = 0;

	t32 = ((x141&(x142+x143))<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x146 = INT32_MIN;
	volatile uint8_t x147 = 1U;
	volatile uint32_t x148 = 76896U;
	volatile int32_t t33 = 1764531;

	t33 = ((x145&(x146+x147))<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = -229636229;

	t34 = ((x149&(x150+x151))<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 13U;
	uint16_t x155 = 7U;
	int16_t x156 = -1;

	t35 = ((x153&(x154+x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = -1;
	int64_t x158 = INT64_MAX;
	int16_t x159 = -1;
	uint32_t x160 = 1869U;
	volatile int32_t t36 = 20;

	t36 = ((x157&(x158+x159))<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x161 = 1U;
	volatile int64_t x162 = INT64_MIN;
	int8_t x163 = 0;
	static int16_t x164 = INT16_MIN;
	int32_t t37 = -3934;

	t37 = ((x161&(x162+x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 12U;
	static int8_t x166 = 18;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t38 = -20557;

	t38 = ((x165&(x166+x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static volatile uint8_t x175 = 119U;
	static int64_t x176 = INT64_MIN;

	t39 = ((x173&(x174+x175))<=x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = 411;
	uint16_t x180 = 12464U;
	static int32_t t40 = 86;

	t40 = ((x177&(x178+x179))<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t41 = -94431;

	t41 = ((x181&(x182+x183))<=x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MAX;
	volatile int8_t x187 = -1;

	t42 = ((x185&(x186+x187))<=x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = 1416438;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t43 = -1;

	t43 = ((x189&(x190+x191))<=x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -3;
	uint32_t x194 = 7221U;
	int8_t x196 = INT8_MIN;

	t44 = ((x193&(x194+x195))<=x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MAX;
	static uint8_t x198 = 6U;
	int16_t x200 = INT16_MIN;
	int32_t t45 = 691;

	t45 = ((x197&(x198+x199))<=x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = INT16_MIN;
	int64_t x202 = -18333675704559122LL;
	volatile int32_t x204 = INT32_MIN;
	static int32_t t46 = 6565;

	t46 = ((x201&(x202+x203))<=x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = -143;
	int64_t x207 = INT64_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t47 = -105156;

	t47 = ((x205&(x206+x207))<=x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 6400092958213LLU;
	uint16_t x211 = 15U;
	int32_t x212 = -1;
	volatile int32_t t48 = 40567894;

	t48 = ((x209&(x210+x211))<=x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = UINT32_MAX;
	static volatile int32_t t49 = 7505742;

	t49 = ((x213&(x214+x215))<=x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = 1138049698U;
	volatile int32_t t50 = -8;

	t50 = ((x217&(x218+x219))<=x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = 447029650816322465LL;
	int16_t x227 = -3124;
	int32_t t51 = 10143639;

	t51 = ((x225&(x226+x227))<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x232 = 20U;

	t52 = ((x229&(x230+x231))<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = 63U;
	int16_t x234 = -1;
	static int16_t x235 = -9609;
	int8_t x236 = INT8_MIN;
	int32_t t53 = -443;

	t53 = ((x233&(x234+x235))<=x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = 58;
	static int16_t x238 = INT16_MIN;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t54 = 8297;

	t54 = ((x237&(x238+x239))<=x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x241 = 610U;
	static int64_t x243 = INT64_MAX;
	int8_t x244 = 1;
	int32_t t55 = -334;

	t55 = ((x241&(x242+x243))<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = -1;
	uint16_t x247 = 2U;
	static int8_t x248 = -1;
	int32_t t56 = -16459003;

	t56 = ((x245&(x246+x247))<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = 6180689626109LLU;
	int32_t x255 = INT32_MIN;

	t57 = ((x253&(x254+x255))<=x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x257 = 56U;
	int16_t x259 = 7;
	static volatile uint64_t x260 = 35124874LLU;
	volatile int32_t t58 = -2;

	t58 = ((x257&(x258+x259))<=x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -226;
	uint16_t x262 = 71U;
	int32_t x263 = INT32_MIN;
	uint8_t x264 = 113U;

	t59 = ((x261&(x262+x263))<=x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x265 = INT8_MIN;
	static int32_t x266 = -2486;
	int16_t x267 = -5;
	static volatile int32_t t60 = -8938192;

	t60 = ((x265&(x266+x267))<=x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x270 = INT32_MAX;
	static volatile int32_t x271 = -783284697;
	int16_t x272 = INT16_MIN;
	int32_t t61 = -19408193;

	t61 = ((x269&(x270+x271))<=x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x273 = 5006U;
	uint8_t x275 = 0U;
	volatile int8_t x276 = -10;
	int32_t t62 = 2012705;

	t62 = ((x273&(x274+x275))<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MAX;
	static volatile int16_t x279 = -1;
	volatile int32_t x280 = INT32_MIN;

	t63 = ((x277&(x278+x279))<=x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = -1;
	int8_t x282 = 3;
	volatile uint32_t x284 = 13813U;
	static volatile int32_t t64 = 1;

	t64 = ((x281&(x282+x283))<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x294 = -1;
	int64_t x295 = 6LL;
	int32_t t65 = 1136;

	t65 = ((x293&(x294+x295))<=x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x297 = 1LLU;
	uint64_t x298 = 18505LLU;
	volatile uint64_t x299 = 251LLU;
	int32_t t66 = 3655;

	t66 = ((x297&(x298+x299))<=x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x302 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = INT32_MIN;
	static int32_t t67 = 951742379;

	t67 = ((x301&(x302+x303))<=x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x305 = 6962;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MAX;
	volatile int64_t x308 = INT64_MAX;
	static int32_t t68 = 4934;

	t68 = ((x305&(x306+x307))<=x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 1823175035LLU;
	static volatile int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MAX;
	static int8_t x312 = -3;
	int32_t t69 = -61617;

	t69 = ((x309&(x310+x311))<=x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x314 = UINT64_MAX;
	volatile int16_t x316 = 13161;

	t70 = ((x313&(x314+x315))<=x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x321 = 1U;
	uint16_t x322 = 126U;
	static volatile uint32_t x323 = 15U;
	int16_t x324 = 0;
	int32_t t71 = -852;

	t71 = ((x321&(x322+x323))<=x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = -110;
	int64_t x327 = 434LL;
	int32_t x328 = INT32_MIN;
	volatile int32_t t72 = -1994071;

	t72 = ((x325&(x326+x327))<=x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x330 = -1;
	int32_t x332 = -48;
	volatile int32_t t73 = -5;

	t73 = ((x329&(x330+x331))<=x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x334 = 63U;
	uint8_t x335 = 20U;

	t74 = ((x333&(x334+x335))<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = -633;
	int64_t x338 = INT64_MIN;
	int8_t x339 = 2;
	int32_t t75 = 288;

	t75 = ((x337&(x338+x339))<=x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x341 = -20;
	uint32_t x342 = 12971U;
	int64_t x343 = -642823733368985LL;
	int64_t x344 = INT64_MIN;

	t76 = ((x341&(x342+x343))<=x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x345 = 1272492U;
	int16_t x346 = -785;
	static int8_t x347 = -1;
	static int16_t x348 = INT16_MIN;

	t77 = ((x345&(x346+x347))<=x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x349 = UINT64_MAX;
	volatile uint8_t x350 = 67U;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	int32_t t78 = 1010;

	t78 = ((x349&(x350+x351))<=x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = INT64_MIN;
	volatile uint16_t x355 = 5493U;
	static int32_t x356 = INT32_MAX;
	int32_t t79 = 4;

	t79 = ((x353&(x354+x355))<=x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x360 = -787674121340628151LL;

	t80 = ((x357&(x358+x359))<=x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x361 = -3996;
	int8_t x362 = 1;
	static uint64_t x364 = 46470861497LLU;

	t81 = ((x361&(x362+x363))<=x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x366 = 4056601592LLU;
	int8_t x368 = INT8_MAX;
	volatile int32_t t82 = 729347;

	t82 = ((x365&(x366+x367))<=x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 28625630479407774LL;
	static int32_t x374 = -1;
	volatile uint64_t x376 = 82824010161LLU;

	t83 = ((x373&(x374+x375))<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = 3899;
	int32_t x378 = INT32_MIN;
	int64_t x379 = 59962042065LL;
	static uint64_t x380 = 3804300147LLU;
	int32_t t84 = -608368;

	t84 = ((x377&(x378+x379))<=x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MAX;
	volatile int8_t x383 = -12;
	static int32_t x384 = -1;
	static int32_t t85 = 3241277;

	t85 = ((x381&(x382+x383))<=x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = 21251LLU;
	static uint16_t x386 = 4U;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = 0U;

	t86 = ((x385&(x386+x387))<=x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x390 = 62088754LL;
	int16_t x391 = INT16_MIN;
	uint16_t x392 = 2660U;
	int32_t t87 = 1;

	t87 = ((x389&(x390+x391))<=x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x393 = INT32_MAX;
	int16_t x394 = INT16_MIN;
	static uint32_t x395 = 2382504U;
	static volatile int16_t x396 = INT16_MIN;
	volatile int32_t t88 = 290;

	t88 = ((x393&(x394+x395))<=x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x397 = -1;
	volatile uint32_t x398 = UINT32_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -1LL;
	int32_t t89 = 219687;

	t89 = ((x397&(x398+x399))<=x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = -475043363;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t x404 = INT32_MIN;
	int32_t t90 = 917829;

	t90 = ((x401&(x402+x403))<=x404);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MAX;
	static int16_t x406 = -1;
	int64_t x407 = -33LL;
	int64_t x408 = -107493513423LL;

	t91 = ((x405&(x406+x407))<=x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = INT64_MAX;
	uint16_t x410 = UINT16_MAX;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = 40699;
	volatile int32_t t92 = -49225189;

	t92 = ((x409&(x410+x411))<=x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = UINT16_MAX;
	volatile int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	int16_t x416 = -254;
	int32_t t93 = 1983099;

	t93 = ((x413&(x414+x415))<=x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x418 = INT16_MAX;
	int8_t x419 = INT8_MAX;
	uint8_t x420 = 22U;
	int32_t t94 = 16;

	t94 = ((x417&(x418+x419))<=x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 2814U;
	uint32_t x422 = 309610U;
	int16_t x423 = -1;
	int64_t x424 = -1LL;

	t95 = ((x421&(x422+x423))<=x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x425 = UINT8_MAX;
	uint16_t x426 = UINT16_MAX;
	static uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t96 = -112329218;

	t96 = ((x425&(x426+x427))<=x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x433 = INT32_MIN;
	uint16_t x434 = 151U;
	int64_t x435 = 384865763414683973LL;
	static int32_t x436 = -119494;
	static int32_t t97 = 3015;

	t97 = ((x433&(x434+x435))<=x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = -150;
	static volatile uint64_t x438 = 2681179LLU;
	int16_t x439 = -180;
	int16_t x440 = -3599;

	t98 = ((x437&(x438+x439))<=x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x441 = 314LLU;
	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 1U;
	int32_t t99 = -7402314;

	t99 = ((x441&(x442+x443))<=x444);

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

