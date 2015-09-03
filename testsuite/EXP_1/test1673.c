#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = 29;
int16_t x3 = INT16_MIN;
uint64_t x7 = UINT64_MAX;
volatile int32_t t1 = -493492;
int32_t t3 = -90853;
static int16_t x17 = INT16_MIN;
uint32_t x22 = UINT32_MAX;
int64_t x23 = -1LL;
int8_t x26 = -1;
volatile int8_t x28 = INT8_MAX;
int32_t t7 = -529428253;
int16_t x37 = INT16_MAX;
static int16_t x38 = -3119;
static volatile int32_t x40 = 94226267;
volatile int32_t t9 = 0;
int16_t x43 = -31;
volatile int32_t t10 = 3;
uint8_t x50 = 30U;
volatile int64_t x53 = INT64_MIN;
int32_t x59 = INT32_MIN;
int64_t x62 = -51LL;
int16_t x76 = INT16_MAX;
volatile int32_t t19 = -9;
static volatile int16_t x85 = 9673;
volatile int32_t t22 = -111;
int64_t x94 = 16276883LL;
static volatile int32_t t23 = -18;
static int64_t x102 = 3LL;
int8_t x106 = INT8_MIN;
uint64_t x112 = 19125181122354933LLU;
int32_t t27 = -164486;
int64_t x115 = INT64_MIN;
int16_t x118 = INT16_MIN;
static int8_t x119 = INT8_MIN;
int16_t x129 = INT16_MIN;
int64_t x135 = -353923LL;
uint8_t x137 = UINT8_MAX;
volatile int64_t x140 = -407926999284422613LL;
static int64_t x143 = INT64_MIN;
int64_t x144 = 894098510542849LL;
uint16_t x146 = 24656U;
static int64_t x148 = -1LL;
int32_t x151 = INT32_MAX;
volatile uint32_t x153 = 1406U;
uint64_t x157 = 258399LLU;
static int32_t t39 = -63;
uint8_t x162 = 33U;
static int32_t x166 = 67202;
static volatile int32_t t45 = 0;
int16_t x187 = 5;
int8_t x190 = -1;
volatile uint64_t x195 = 108448LLU;
volatile uint64_t x205 = 145LLU;
volatile int32_t x212 = INT32_MAX;
volatile int32_t t53 = -12880314;
static int32_t x217 = -1;
int32_t x224 = INT32_MIN;
int32_t t55 = 52;
static volatile int32_t t57 = -39642;
volatile int32_t x234 = INT32_MIN;
uint8_t x236 = UINT8_MAX;
uint16_t x237 = 253U;
int64_t x240 = 315419383058042672LL;
uint64_t x246 = 2409165LLU;
volatile int8_t x249 = -1;
static uint16_t x257 = 13388U;
int16_t x259 = -3540;
int8_t x261 = -1;
int8_t x270 = -13;
int8_t x271 = INT8_MIN;
static int32_t t67 = -3;
volatile int32_t t69 = -12883061;
uint64_t x284 = UINT64_MAX;
int32_t t71 = 14290;
static int8_t x290 = -1;
static int64_t x292 = INT64_MIN;
volatile int32_t x295 = 382;
volatile int32_t t73 = -5;
int32_t x301 = INT32_MIN;
int8_t x308 = INT8_MIN;
static int64_t x310 = -1LL;
volatile int32_t t77 = -1;
volatile uint8_t x318 = UINT8_MAX;
uint64_t x319 = 6406992LLU;
int8_t x320 = INT8_MAX;
static volatile uint8_t x325 = UINT8_MAX;
uint64_t x326 = UINT64_MAX;
uint64_t x328 = 5826992131144586370LLU;
int32_t t81 = -159;
int16_t x331 = -826;
volatile int32_t t82 = -7614656;
int64_t x335 = -1LL;
int8_t x355 = -1;
volatile int32_t t88 = -451;
int64_t x359 = -1LL;
int32_t x361 = INT32_MIN;
uint8_t x373 = UINT8_MAX;
static volatile int32_t t93 = -469635841;
uint16_t x380 = UINT16_MAX;
int32_t t96 = -6;
static int8_t x391 = INT8_MIN;
int64_t x394 = -2907857332196765LL;
int16_t x396 = INT16_MAX;
int64_t x397 = INT64_MAX;
uint32_t x400 = 85332U;


void f0(void) {
	int64_t x2 = 0LL;
	uint64_t x4 = 11531793916716235LLU;
	volatile int32_t t0 = -1;

	t0 = (((x1<=x2)|x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int64_t x6 = 154427LL;
	int8_t x8 = INT8_MIN;

	t1 = (((x5<=x6)|x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 23036566LLU;
	int64_t x10 = INT64_MIN;
	static int64_t x11 = INT64_MIN;
	volatile int64_t x12 = 540646LL;
	volatile int32_t t2 = 13;

	t2 = (((x9<=x10)|x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -8486796;
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;

	t3 = (((x13<=x14)|x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 11366U;
	static uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -8336703;

	t4 = (((x17<=x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1754U;
	int64_t x24 = -1LL;
	volatile int32_t t5 = -440;

	t5 = (((x21<=x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	uint32_t x27 = UINT32_MAX;
	static int32_t t6 = 741518;

	t6 = (((x25<=x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile uint8_t x30 = 42U;
	int16_t x31 = -1;
	uint64_t x32 = 126223LLU;

	t7 = (((x29<=x30)|x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint8_t x34 = 1U;
	int8_t x35 = 0;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -26381;

	t8 = (((x33<=x34)|x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x39 = UINT16_MAX;

	t9 = (((x37<=x38)|x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 11U;
	volatile int32_t x42 = -324;
	int32_t x44 = INT32_MAX;

	t10 = (((x41<=x42)|x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = -1;
	static int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -428657737;

	t11 = (((x45<=x46)|x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = 54;
	int32_t t12 = -79114879;

	t12 = (((x49<=x50)|x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 1624;

	t13 = (((x53<=x54)|x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	uint8_t x58 = UINT8_MAX;
	int8_t x60 = 0;
	static volatile int32_t t14 = 1;

	t14 = (((x57<=x58)|x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static uint8_t x63 = UINT8_MAX;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 440839;

	t15 = (((x61<=x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = UINT64_MAX;
	static int32_t x67 = 4768;
	uint16_t x68 = 46U;
	volatile int32_t t16 = -1;

	t16 = (((x65<=x66)|x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MAX;
	int8_t x72 = -1;
	int32_t t17 = 29;

	t17 = (((x69<=x70)|x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = 2U;
	int64_t x75 = INT64_MIN;
	volatile int32_t t18 = -617;

	t18 = (((x73<=x74)|x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 1350;
	volatile int16_t x78 = -1;
	uint16_t x79 = 5U;
	int16_t x80 = -1;

	t19 = (((x77<=x78)|x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int8_t x82 = -1;
	uint32_t x83 = 124623415U;
	int16_t x84 = 1;
	int32_t t20 = -1869492;

	t20 = (((x81<=x82)|x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = 57U;
	int32_t t21 = 204578;

	t21 = (((x85<=x86)|x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = 195041U;
	int16_t x91 = -1;
	volatile int16_t x92 = -1;

	t22 = (((x89<=x90)|x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -624;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;

	t23 = (((x93<=x94)|x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 53U;
	int64_t x98 = -1LL;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 1928;

	t24 = (((x97<=x98)|x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 4567U;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -299336182;

	t25 = (((x101<=x102)|x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	volatile int16_t x107 = INT16_MAX;
	int8_t x108 = -1;
	int32_t t26 = -439137;

	t26 = (((x105<=x106)|x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	static int8_t x110 = INT8_MIN;
	uint32_t x111 = 549U;

	t27 = (((x109<=x110)|x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 2U;
	volatile int8_t x114 = INT8_MIN;
	static int8_t x116 = 0;
	static volatile int32_t t28 = 1;

	t28 = (((x113<=x114)|x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -63;
	volatile int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -292;

	t29 = (((x117<=x118)|x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 142183935LLU;
	int32_t t30 = 1099;

	t30 = (((x121<=x122)|x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int32_t x126 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	int8_t x128 = 6;
	int32_t t31 = 367;

	t31 = (((x125<=x126)|x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	static volatile uint8_t x131 = 12U;
	int32_t x132 = -1;
	volatile int32_t t32 = 5521093;

	t32 = (((x129<=x130)|x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x134 = -1;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 0;

	t33 = (((x133<=x134)|x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MIN;
	int32_t x139 = -50;
	volatile int32_t t34 = 406;

	t34 = (((x137<=x138)|x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 1471650U;
	static uint64_t x142 = 452585LLU;
	int32_t t35 = -113;

	t35 = (((x141<=x142)|x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	uint8_t x147 = 22U;
	int32_t t36 = -12;

	t36 = (((x145<=x146)|x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = UINT32_MAX;
	static int32_t x152 = INT32_MIN;
	static int32_t t37 = -439;

	t37 = (((x149<=x150)|x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1;
	uint16_t x155 = 448U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -45;

	t38 = (((x153<=x154)|x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -1LL;
	int16_t x159 = INT16_MAX;
	int64_t x160 = INT64_MAX;

	t39 = (((x157<=x158)|x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int8_t x163 = INT8_MAX;
	static uint16_t x164 = 5848U;
	int32_t t40 = 121;

	t40 = (((x161<=x162)|x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	int8_t x167 = -3;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 0;

	t41 = (((x165<=x166)|x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MAX;
	int32_t x170 = INT32_MIN;
	int64_t x171 = 3LL;
	static int32_t x172 = INT32_MAX;
	static volatile int32_t t42 = -1;

	t42 = (((x169<=x170)|x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile int8_t x174 = -51;
	int16_t x175 = INT16_MIN;
	int32_t x176 = -7;
	int32_t t43 = -1592;

	t43 = (((x173<=x174)|x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	volatile int32_t x179 = INT32_MAX;
	static uint64_t x180 = UINT64_MAX;
	int32_t t44 = 30233;

	t44 = (((x177<=x178)|x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int32_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MAX;

	t45 = (((x181<=x182)|x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -58940;

	t46 = (((x185<=x186)|x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static uint16_t x191 = 1U;
	static int8_t x192 = 0;
	volatile int32_t t47 = 24589;

	t47 = (((x189<=x190)|x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 32;
	int32_t x194 = INT32_MIN;
	volatile int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 20744691;

	t48 = (((x193<=x194)|x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 27;
	uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MAX;
	int32_t x200 = -14493064;
	volatile int32_t t49 = -336036;

	t49 = (((x197<=x198)|x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -1LL;
	static volatile int32_t t50 = 24842043;

	t50 = (((x201<=x202)|x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 5978954689745912120LLU;
	static volatile int32_t x207 = INT32_MAX;
	int64_t x208 = INT64_MAX;
	static int32_t t51 = -132856365;

	t51 = (((x205<=x206)|x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 5163U;
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MAX;
	int32_t t52 = -3101089;

	t52 = (((x209<=x210)|x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 2300U;
	uint32_t x216 = UINT32_MAX;

	t53 = (((x213<=x214)|x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	int16_t x219 = 0;
	volatile uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = -70470;

	t54 = (((x217<=x218)|x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile uint8_t x222 = 6U;
	volatile int32_t x223 = -1;

	t55 = (((x221<=x222)|x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	static uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 209U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -1;

	t56 = (((x225<=x226)|x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 14042241;
	int8_t x230 = 0;
	volatile int16_t x231 = -740;
	volatile uint16_t x232 = UINT16_MAX;

	t57 = (((x229<=x230)|x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MAX;
	volatile uint16_t x235 = 2455U;
	int32_t t58 = -1055002;

	t58 = (((x233<=x234)|x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	static int32_t x239 = INT32_MAX;
	static int32_t t59 = -478;

	t59 = (((x237<=x238)|x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -19;
	static int64_t x244 = 8857863LL;
	static int32_t t60 = 0;

	t60 = (((x241<=x242)|x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -33;
	volatile uint8_t x247 = 7U;
	uint32_t x248 = 24U;
	int32_t t61 = -293;

	t61 = (((x245<=x246)|x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 215765377U;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -1997263;

	t62 = (((x249<=x250)|x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = 1;
	volatile int64_t x255 = -625750335LL;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -21939;

	t63 = (((x253<=x254)|x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x258 = 6U;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 24252;

	t64 = (((x257<=x258)|x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MAX;
	volatile int16_t x263 = INT16_MIN;
	int64_t x264 = -14551874878169547LL;
	int32_t t65 = 0;

	t65 = (((x261<=x262)|x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 571;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = 7839;
	static int64_t x268 = -1LL;
	int32_t t66 = 16400232;

	t66 = (((x265<=x266)|x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -8;
	uint16_t x272 = 3U;

	t67 = (((x269<=x270)|x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	int64_t x275 = -1LL;
	static uint32_t x276 = 78069U;
	volatile int32_t t68 = 1;

	t68 = (((x273<=x274)|x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = -3581573;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	static uint8_t x280 = UINT8_MAX;

	t69 = (((x277<=x278)|x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	int32_t t70 = -267518396;

	t70 = (((x281<=x282)|x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 1715U;
	volatile int8_t x287 = INT8_MAX;
	int32_t x288 = 5211648;

	t71 = (((x285<=x286)|x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -14889;
	int16_t x291 = -1;
	int32_t t72 = 16554;

	t72 = (((x289<=x290)|x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	static int16_t x296 = INT16_MIN;

	t73 = (((x293<=x294)|x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -11285982329LL;
	int32_t x298 = -1;
	static int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	int32_t t74 = -6689;

	t74 = (((x297<=x298)|x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = -408;
	volatile int8_t x303 = 19;
	int32_t x304 = INT32_MAX;
	int32_t t75 = 8370560;

	t75 = (((x301<=x302)|x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 54U;
	int8_t x306 = INT8_MIN;
	volatile int32_t x307 = -1;
	int32_t t76 = 756823;

	t76 = (((x305<=x306)|x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	static int32_t x311 = INT32_MIN;
	uint32_t x312 = 24561U;

	t77 = (((x309<=x310)|x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	uint16_t x314 = UINT16_MAX;
	uint8_t x315 = 1U;
	uint16_t x316 = 1U;
	volatile int32_t t78 = -14;

	t78 = (((x313<=x314)|x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int32_t t79 = -55813;

	t79 = (((x317<=x318)|x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 5451U;
	int16_t x324 = 697;
	volatile int32_t t80 = 21;

	t80 = (((x321<=x322)|x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = INT16_MIN;

	t81 = (((x325<=x326)|x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 730712U;
	int32_t x330 = 1;
	int16_t x332 = INT16_MIN;

	t82 = (((x329<=x330)|x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	static uint16_t x334 = 7U;
	static uint16_t x336 = 4110U;
	int32_t t83 = -310;

	t83 = (((x333<=x334)|x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 1143LL;
	int32_t x338 = INT32_MAX;
	int32_t x339 = 193;
	int64_t x340 = -24033806LL;
	static volatile int32_t t84 = 12;

	t84 = (((x337<=x338)|x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = UINT32_MAX;
	int32_t x342 = 19;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 39421003;

	t85 = (((x341<=x342)|x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 44281177758182LLU;
	volatile int16_t x346 = -1;
	static volatile int16_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 2402808;

	t86 = (((x345<=x346)|x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static volatile int8_t x350 = INT8_MAX;
	int32_t x351 = 35633;
	uint8_t x352 = 7U;
	volatile int32_t t87 = -11;

	t87 = (((x349<=x350)|x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = -14115760;
	uint32_t x354 = 1017243U;
	int32_t x356 = INT32_MIN;

	t88 = (((x353<=x354)|x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 26319U;
	volatile int8_t x358 = INT8_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = -1208;

	t89 = (((x357<=x358)|x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x362 = -68;
	volatile int64_t x363 = INT64_MIN;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -56;

	t90 = (((x361<=x362)|x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	volatile int64_t x367 = -1LL;
	uint16_t x368 = 174U;
	volatile int32_t t91 = 2;

	t91 = (((x365<=x366)|x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static volatile int64_t x370 = 128006550762LL;
	static uint64_t x371 = 10091344691LLU;
	int64_t x372 = -1656699380016LL;
	volatile int32_t t92 = -31282539;

	t92 = (((x369<=x370)|x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 3162283LLU;
	uint64_t x375 = UINT64_MAX;
	static int64_t x376 = -1LL;

	t93 = (((x373<=x374)|x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = INT16_MIN;
	static int32_t t94 = -15;

	t94 = (((x377<=x378)|x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	static int8_t x382 = 5;
	uint32_t x383 = UINT32_MAX;
	volatile uint16_t x384 = 4U;
	static int32_t t95 = -3;

	t95 = (((x381<=x382)|x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	uint32_t x386 = 4026028U;
	volatile int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -139;

	t96 = (((x385<=x386)|x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MIN;
	volatile int32_t x392 = -10512;
	volatile int32_t t97 = -4151;

	t97 = (((x389<=x390)|x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	static uint32_t x395 = UINT32_MAX;
	volatile int32_t t98 = -57;

	t98 = (((x393<=x394)|x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 1U;
	int32_t t99 = -205;

	t99 = (((x397<=x398)|x399)<x400);

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

