#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
int8_t x16 = 1;
int32_t t2 = INT32_MAX;
int8_t x20 = 5;
int16_t x25 = 163;
static uint8_t x30 = 46U;
volatile int8_t x31 = -1;
static uint8_t x41 = UINT8_MAX;
uint64_t x47 = 74443495LLU;
static uint8_t x48 = 1U;
volatile int32_t x50 = -10;
int32_t x74 = INT32_MIN;
int8_t x78 = INT8_MAX;
static volatile int32_t x81 = -3962401;
int32_t t14 = 784792;
int32_t x85 = INT32_MIN;
uint8_t x94 = 5U;
volatile int64_t x95 = INT64_MIN;
int32_t t16 = -57;
int32_t t17 = 1032267252;
int8_t x102 = INT8_MIN;
static volatile int8_t x104 = INT8_MIN;
volatile uint16_t x109 = 241U;
int16_t x116 = INT16_MAX;
int16_t x120 = 692;
volatile int16_t x122 = INT16_MIN;
static volatile int32_t t23 = 458916020;
static int8_t x131 = -1;
int32_t t24 = 8;
int32_t t25 = -245;
int32_t x141 = 42;
volatile uint16_t x142 = 19959U;
volatile uint64_t x147 = 23190871832399LLU;
int32_t t28 = -806069;
uint64_t x165 = 1086273255580123084LLU;
static uint64_t x169 = 63865261583851174LLU;
int8_t x176 = INT8_MAX;
uint8_t x179 = UINT8_MAX;
uint64_t x181 = 48LLU;
uint64_t t34 = 32592057LLU;
uint64_t x189 = UINT64_MAX;
volatile int16_t x192 = 23;
volatile uint64_t t36 = 119LLU;
static uint8_t x198 = 108U;
int8_t x204 = -4;
int32_t x219 = INT32_MIN;
volatile int8_t x220 = -1;
uint64_t x230 = 5LLU;
static uint64_t x241 = 388896426639215LLU;
uint64_t t44 = 3LLU;
int8_t x246 = INT8_MIN;
static int16_t x247 = -415;
uint8_t x259 = UINT8_MAX;
int64_t x260 = INT64_MIN;
uint32_t x265 = UINT32_MAX;
int8_t x288 = 5;
int8_t x294 = INT8_MIN;
static uint8_t x299 = 0U;
int8_t x316 = INT8_MIN;
static int32_t x324 = INT32_MAX;
volatile int64_t t56 = 5253LL;
uint16_t x325 = 1983U;
static uint8_t x332 = UINT8_MAX;
int16_t x335 = -7;
volatile int32_t t60 = -975;
int32_t x345 = INT32_MIN;
int16_t x349 = INT16_MIN;
volatile uint64_t x352 = UINT64_MAX;
static volatile uint64_t t63 = 94988203153698LLU;
static volatile uint64_t x353 = 942LLU;
volatile int64_t x355 = INT64_MAX;
volatile int32_t t65 = -34580;
int64_t x373 = -1LL;
uint8_t x385 = UINT8_MAX;
int8_t x389 = -3;
volatile int32_t x392 = -1;
int64_t x393 = -1185049337790LL;
int8_t x394 = 2;
int64_t t71 = -23983913133LL;
int8_t x407 = -14;
int16_t x430 = 460;
int64_t t76 = 17868451665209679LL;
static uint8_t x434 = 5U;
volatile int32_t t77 = 147074;
int32_t x440 = -1;
static volatile uint64_t t79 = 181407879LLU;
int8_t x451 = -1;
static uint32_t x462 = 48489U;
int32_t x463 = INT32_MIN;
int16_t x465 = -28;
int32_t t82 = 93412435;
int64_t x471 = INT64_MIN;
uint8_t x494 = 10U;
int64_t x495 = -45541814979LL;
int32_t t86 = 3439607;
uint64_t x507 = UINT64_MAX;
uint8_t x510 = 36U;
int8_t x512 = -1;
volatile int32_t t88 = 155765167;
static uint64_t x516 = 2LLU;
int16_t x524 = INT16_MAX;
volatile int32_t t90 = 7575;
int32_t x532 = -1;
int32_t t92 = 3600;
int8_t x533 = INT8_MIN;
int64_t x558 = INT64_MAX;
int8_t x559 = INT8_MIN;
static volatile int16_t x570 = -1;
uint32_t x577 = UINT32_MAX;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int8_t x2 = -15;
	int16_t x3 = INT16_MIN;
	static uint64_t x4 = 59872510906786LLU;
	static uint64_t t0 = 350704671LLU;

	t0 = ((x1^(x2<=x3))*x4);

	if (t0 != 17014800804697079808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 1U;
	int16_t x10 = INT16_MIN;
	volatile uint32_t x12 = 13406U;
	uint32_t t1 = 0U;

	t1 = ((x9^(x10<=x11))*x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MAX;
	uint16_t x14 = 1872U;
	int16_t x15 = -1;

	t2 = ((x13^(x14<=x15))*x16);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	volatile uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	volatile uint64_t t3 = 4566751872878LLU;

	t3 = ((x17^(x18<=x19))*x20);

	if (t3 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = INT16_MIN;
	static int8_t x27 = -17;
	static uint64_t x28 = 7LLU;
	uint64_t t4 = 259430356720374LLU;

	t4 = ((x25^(x26<=x27))*x28);

	if (t4 != 1134LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	volatile int32_t t5 = -567;

	t5 = ((x29^(x30<=x31))*x32);

	if (t5 != -16256) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1LL;
	static volatile uint64_t x35 = UINT64_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	static volatile uint64_t t6 = 112621530LLU;

	t6 = ((x33^(x34<=x35))*x36);

	if (t6 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = -1;
	static int16_t x43 = 1774;
	int32_t x44 = 965;
	volatile int32_t t7 = -316410211;

	t7 = ((x41^(x42<=x43))*x44);

	if (t7 != 245110) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -10;
	int8_t x46 = -1;
	int32_t t8 = -6;

	t8 = ((x45^(x46<=x47))*x48);

	if (t8 != -10) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t9 = -362101029;

	t9 = ((x49^(x50<=x51))*x52);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 3;
	uint32_t x54 = 7235157U;
	static int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t10 = 51069LLU;

	t10 = ((x53^(x54<=x55))*x56);

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = UINT16_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	static int8_t x59 = 60;
	int16_t x60 = INT16_MIN;
	int32_t t11 = 3235217;

	t11 = ((x57^(x58<=x59))*x60);

	if (t11 != -2147450880) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -1;
	volatile int64_t x75 = -1LL;
	int8_t x76 = 42;
	volatile int32_t t12 = 996738880;

	t12 = ((x73^(x74<=x75))*x76);

	if (t12 != -84) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MAX;
	int32_t x79 = -8159800;
	int8_t x80 = INT8_MAX;
	int32_t t13 = 13435468;

	t13 = ((x77^(x78<=x79))*x80);

	if (t13 != 4161409) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x82 = 710;
	volatile uint8_t x83 = UINT8_MAX;
	static volatile uint8_t x84 = 0U;

	t14 = ((x81^(x82<=x83))*x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x86 = INT16_MIN;
	uint8_t x87 = 1U;
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t15 = 99126LLU;

	t15 = ((x85^(x86<=x87))*x88);

	if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;

	t16 = ((x93^(x94<=x95))*x96);

	if (t16 != 8322945) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MIN;
	static int64_t x98 = INT64_MAX;
	int64_t x99 = -88522LL;
	int8_t x100 = -1;

	t17 = ((x97^(x98<=x99))*x100);

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x101 = INT8_MIN;
	int32_t x103 = INT32_MAX;
	volatile int32_t t18 = 9816090;

	t18 = ((x101^(x102<=x103))*x104);

	if (t18 != 16256) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x110 = -205;
	volatile int16_t x111 = INT16_MIN;
	volatile int16_t x112 = -1;
	static int32_t t19 = 7;

	t19 = ((x109^(x110<=x111))*x112);

	if (t19 != -241) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x113 = INT16_MAX;
	static uint32_t x114 = 0U;
	static volatile int16_t x115 = INT16_MIN;
	static volatile int32_t t20 = -9027802;

	t20 = ((x113^(x114<=x115))*x116);

	if (t20 != 1073643522) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x117 = 26U;
	uint8_t x118 = 0U;
	uint64_t x119 = 103714242540656LLU;
	volatile int32_t t21 = -141360;

	t21 = ((x117^(x118<=x119))*x120);

	if (t21 != 18684) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = 27;
	int8_t x123 = -1;
	static int64_t x124 = -1LL;
	int64_t t22 = -65886893376970LL;

	t22 = ((x121^(x122<=x123))*x124);

	if (t22 != -26LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = UINT8_MAX;

	t23 = ((x125^(x126<=x127))*x128);

	if (t23 != -8355840) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x129 = -1;
	uint8_t x130 = 19U;
	static uint16_t x132 = UINT16_MAX;

	t24 = ((x129^(x130<=x131))*x132);

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x137 = INT8_MIN;
	static int16_t x138 = -15;
	int8_t x139 = 1;
	static volatile int8_t x140 = INT8_MAX;

	t25 = ((x137^(x138<=x139))*x140);

	if (t25 != -16129) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x143 = 21U;
	int64_t x144 = -1LL;
	volatile int64_t t26 = -387346463661085LL;

	t26 = ((x141^(x142<=x143))*x144);

	if (t26 != -42LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x145 = 300;
	uint8_t x146 = 0U;
	static uint32_t x148 = UINT32_MAX;
	uint32_t t27 = 14502U;

	t27 = ((x145^(x146<=x147))*x148);

	if (t27 != 4294966995U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = UINT8_MAX;
	volatile uint64_t x158 = 3016651636045LLU;
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = -644;

	t28 = ((x157^(x158<=x159))*x160);

	if (t28 != -164220) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x161 = 33125486U;
	volatile uint32_t x162 = 2913U;
	uint32_t x163 = 1535957U;
	static int32_t x164 = INT32_MAX;
	volatile uint32_t t29 = 13832U;

	t29 = ((x161^(x162<=x163))*x164);

	if (t29 != 2114358161U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x166 = 65LLU;
	static int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MAX;
	uint64_t t30 = 575457LLU;

	t30 = ((x165^(x166<=x167))*x168);

	if (t30 != 10146447408168058931LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -3290314972LL;
	volatile uint64_t t31 = 361108143525LLU;

	t31 = ((x169^(x170<=x171))*x172);

	if (t31 != 15052127428093303128LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = -357;
	int8_t x174 = -2;
	int16_t x175 = 2;
	int32_t t32 = -15136912;

	t32 = ((x173^(x174<=x175))*x176);

	if (t32 != -45466) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = -1;
	static int16_t x178 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t33 = 5LLU;

	t33 = ((x177^(x178<=x179))*x180);

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x182 = 1541;
	volatile uint64_t x183 = UINT64_MAX;
	static uint64_t x184 = UINT64_MAX;

	t34 = ((x181^(x182<=x183))*x184);

	if (t34 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x185 = 16U;
	int64_t x186 = INT64_MIN;
	static uint64_t x187 = UINT64_MAX;
	int16_t x188 = -1;
	volatile int32_t t35 = -64;

	t35 = ((x185^(x186<=x187))*x188);

	if (t35 != -17) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x190 = -1LL;
	int32_t x191 = 1;

	t36 = ((x189^(x190<=x191))*x192);

	if (t36 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 257807978U;
	volatile uint32_t t37 = 2U;

	t37 = ((x193^(x194<=x195))*x196);

	if (t37 != 606656106U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = -15;
	uint16_t x199 = 7U;
	volatile int8_t x200 = INT8_MIN;
	int32_t t38 = 1462385;

	t38 = ((x197^(x198<=x199))*x200);

	if (t38 != 1920) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t39 = -186;

	t39 = ((x201^(x202<=x203))*x204);

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x209 = 2936412785544LLU;
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	volatile uint64_t t40 = 776116238409LLU;

	t40 = ((x209^(x210<=x211))*x212);

	if (t40 != 2888032472648384512LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = 11;
	uint64_t x218 = UINT64_MAX;
	int32_t t41 = -205541;

	t41 = ((x217^(x218<=x219))*x220);

	if (t41 != -11) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x229 = -1LL;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = -23;
	volatile int64_t t42 = 3818312547165414843LL;

	t42 = ((x229^(x230<=x231))*x232);

	if (t42 != 46LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = -126LL;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	static int8_t x236 = -1;
	int64_t t43 = -14239197426936LL;

	t43 = ((x233^(x234<=x235))*x236);

	if (t43 != 126LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x242 = 260768LLU;
	volatile int8_t x243 = INT8_MIN;
	static uint8_t x244 = 94U;

	t44 = ((x241^(x242<=x243))*x244);

	if (t44 != 36556264104086116LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = INT16_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t45 = 68751LL;

	t45 = ((x245^(x246<=x247))*x248);

	if (t45 != 32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MAX;
	int64_t x255 = 144036494996771224LL;
	int8_t x256 = INT8_MAX;
	volatile int32_t t46 = -985982106;

	t46 = ((x253^(x254<=x255))*x256);

	if (t46 != 32258) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x258 = -1;
	uint64_t t47 = 268801183870029LLU;

	t47 = ((x257^(x258<=x259))*x260);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x266 = INT64_MIN;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = 2U;
	static uint32_t t48 = 95U;

	t48 = ((x265^(x266<=x267))*x268);

	if (t48 != 4294967292U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t49 = 1148991414U;

	t49 = ((x269^(x270<=x271))*x272);

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = 4;
	uint64_t x286 = 25LLU;
	static volatile int64_t x287 = -1LL;
	volatile int32_t t50 = 2356;

	t50 = ((x285^(x286<=x287))*x288);

	if (t50 != 25) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = -52;
	static int64_t x295 = INT64_MAX;
	int32_t x296 = 998658;
	int32_t t51 = -181882075;

	t51 = ((x293^(x294<=x295))*x296);

	if (t51 != -50931558) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x297 = INT8_MIN;
	volatile int16_t x298 = -163;
	int8_t x300 = INT8_MAX;
	static int32_t t52 = 230858;

	t52 = ((x297^(x298<=x299))*x300);

	if (t52 != -16129) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x305 = 8U;
	uint16_t x306 = 7U;
	static int8_t x307 = 1;
	static int32_t x308 = -1;
	int32_t t53 = -1203;

	t53 = ((x305^(x306<=x307))*x308);

	if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = 2;
	volatile int32_t x310 = -3;
	static volatile int16_t x311 = INT16_MAX;
	int64_t x312 = -12534LL;
	static int64_t t54 = 8068LL;

	t54 = ((x309^(x310<=x311))*x312);

	if (t54 != -37602LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = -1;
	volatile int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MAX;
	volatile int32_t t55 = -28719965;

	t55 = ((x313^(x314<=x315))*x316);

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x321 = -51416LL;
	static uint16_t x322 = 29503U;
	static int32_t x323 = 1;

	t56 = ((x321^(x322<=x323))*x324);

	if (t56 != -110415019194152LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x326 = -1;
	volatile uint16_t x327 = UINT16_MAX;
	int16_t x328 = 2;
	int32_t t57 = 12856;

	t57 = ((x325^(x326<=x327))*x328);

	if (t57 != 3964) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x329 = -1;
	int16_t x330 = -1;
	volatile int64_t x331 = INT64_MIN;
	int32_t t58 = 320;

	t58 = ((x329^(x330<=x331))*x332);

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x333 = -1LL;
	int64_t x334 = INT64_MIN;
	uint32_t x336 = 473700U;
	volatile int64_t t59 = -4468046LL;

	t59 = ((x333^(x334<=x335))*x336);

	if (t59 != -947400LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = 55U;
	volatile int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	int8_t x340 = 0;

	t60 = ((x337^(x338<=x339))*x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x341 = UINT8_MAX;
	static uint64_t x342 = 27LLU;
	static int8_t x343 = INT8_MIN;
	uint32_t x344 = 502632682U;
	uint32_t t61 = 14U;

	t61 = ((x341^(x342<=x343))*x344);

	if (t61 != 3114649644U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x346 = INT8_MAX;
	static int64_t x347 = 10296490755LL;
	uint32_t x348 = 2U;
	static uint32_t t62 = 2U;

	t62 = ((x345^(x346<=x347))*x348);

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x350 = INT32_MIN;
	static int16_t x351 = -15354;

	t63 = ((x349^(x350<=x351))*x352);

	if (t63 != 32767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x354 = 0;
	uint16_t x356 = 28090U;
	volatile uint64_t t64 = 14663320136091LLU;

	t64 = ((x353^(x354<=x355))*x356);

	if (t64 != 26488870LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = -1;
	static int64_t x359 = -1LL;
	volatile int16_t x360 = 1;

	t65 = ((x357^(x358<=x359))*x360);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x369 = INT64_MIN;
	int8_t x370 = -7;
	int8_t x371 = 1;
	volatile int16_t x372 = -1;
	int64_t t66 = INT64_MAX;

	t66 = ((x369^(x370<=x371))*x372);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x374 = INT8_MIN;
	static int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;
	int64_t t67 = -805LL;

	t67 = ((x373^(x374<=x375))*x376);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x381 = 191451U;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile uint32_t t68 = 2786U;

	t68 = ((x381^(x382<=x383))*x384);

	if (t68 != 3956806693U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x386 = -564342404694164716LL;
	volatile int16_t x387 = -3567;
	uint8_t x388 = 89U;
	volatile int32_t t69 = 13795;

	t69 = ((x385^(x386<=x387))*x388);

	if (t69 != 22606) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	int32_t t70 = 5070079;

	t70 = ((x389^(x390<=x391))*x392);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x395 = INT16_MIN;
	int16_t x396 = -751;

	t71 = ((x393^(x394<=x395))*x396);

	if (t71 != 889972052680290LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x397 = INT16_MIN;
	static volatile uint64_t x398 = UINT64_MAX;
	uint32_t x399 = 0U;
	uint16_t x400 = 2027U;
	static int32_t t72 = -17423544;

	t72 = ((x397^(x398<=x399))*x400);

	if (t72 != -66420736) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = -610675LL;
	uint64_t x408 = 6827539955655858LLU;
	volatile uint64_t t73 = 75425139397LLU;

	t73 = ((x405^(x406<=x407))*x408);

	if (t73 != 2350245302505223836LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = -3;
	int32_t x414 = -1;
	volatile int8_t x415 = 2;
	int64_t x416 = 69537LL;
	int64_t t74 = -518031338571LL;

	t74 = ((x413^(x414<=x415))*x416);

	if (t74 != -278148LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x417 = -105LL;
	int8_t x418 = -1;
	int16_t x419 = INT16_MIN;
	int32_t x420 = 12836;
	volatile int64_t t75 = -111709967LL;

	t75 = ((x417^(x418<=x419))*x420);

	if (t75 != -1347780LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x429 = INT32_MIN;
	int32_t x431 = -1;
	int64_t x432 = 9414LL;

	t76 = ((x429^(x430<=x431))*x432);

	if (t76 != -20216411062272LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x433 = INT8_MIN;
	int8_t x435 = 1;
	uint8_t x436 = UINT8_MAX;

	t77 = ((x433^(x434<=x435))*x436);

	if (t77 != -32640) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x437 = INT16_MIN;
	static int16_t x438 = -1;
	static int32_t x439 = 51;
	volatile int32_t t78 = 44;

	t78 = ((x437^(x438<=x439))*x440);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x445 = 62330533LLU;
	int16_t x446 = -1;
	volatile int32_t x447 = INT32_MIN;
	uint64_t x448 = UINT64_MAX;

	t79 = ((x445^(x446<=x447))*x448);

	if (t79 != 18446744073647221083LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x449 = INT32_MIN;
	volatile uint16_t x450 = 210U;
	uint32_t x452 = 221107U;
	static volatile uint32_t t80 = 3U;

	t80 = ((x449^(x450<=x451))*x452);

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x461 = 192U;
	volatile uint16_t x464 = 333U;
	int32_t t81 = 201870872;

	t81 = ((x461^(x462<=x463))*x464);

	if (t81 != 64269) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x466 = INT8_MAX;
	uint8_t x467 = 2U;
	int16_t x468 = -1;

	t82 = ((x465^(x466<=x467))*x468);

	if (t82 != 28) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x469 = INT8_MAX;
	int8_t x470 = INT8_MAX;
	volatile int8_t x472 = INT8_MIN;
	int32_t t83 = 49;

	t83 = ((x469^(x470<=x471))*x472);

	if (t83 != -16256) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	volatile int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MIN;
	int32_t t84 = -17;

	t84 = ((x481^(x482<=x483))*x484);

	if (t84 != 16256) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x485 = INT16_MAX;
	uint64_t x486 = 15LLU;
	uint32_t x487 = 1939645U;
	uint8_t x488 = 0U;
	volatile int32_t t85 = 7919417;

	t85 = ((x485^(x486<=x487))*x488);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x493 = 9;
	uint8_t x496 = 4U;

	t86 = ((x493^(x494<=x495))*x496);

	if (t86 != 36) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x505 = UINT16_MAX;
	uint32_t x506 = 4465075U;
	uint32_t x508 = UINT32_MAX;
	static uint32_t t87 = 925020289U;

	t87 = ((x505^(x506<=x507))*x508);

	if (t87 != 4294901762U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x509 = INT32_MAX;
	static int16_t x511 = -6269;

	t88 = ((x509^(x510<=x511))*x512);

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x513 = 2;
	uint8_t x514 = 44U;
	int8_t x515 = INT8_MAX;
	static volatile uint64_t t89 = 12954LLU;

	t89 = ((x513^(x514<=x515))*x516);

	if (t89 != 6LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;

	t90 = ((x521^(x522<=x523))*x524);

	if (t90 != -4161409) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x525 = -129279839;
	static volatile int32_t x526 = INT32_MAX;
	volatile uint64_t x527 = 919873689260LLU;
	int32_t x528 = -1;
	static int32_t t91 = 26;

	t91 = ((x525^(x526<=x527))*x528);

	if (t91 != 129279840) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x529 = INT32_MAX;
	int32_t x530 = 784240057;
	static int64_t x531 = INT64_MIN;

	t92 = ((x529^(x530<=x531))*x532);

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x534 = INT16_MIN;
	uint32_t x535 = 4160U;
	int16_t x536 = -1;
	int32_t t93 = 35484;

	t93 = ((x533^(x534<=x535))*x536);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x541 = 17U;
	static uint32_t x542 = UINT32_MAX;
	int32_t x543 = -1;
	static int32_t x544 = 6807;
	volatile int32_t t94 = 592;

	t94 = ((x541^(x542<=x543))*x544);

	if (t94 != 108912) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x545 = 15;
	int32_t x546 = 0;
	static int32_t x547 = INT32_MIN;
	int32_t x548 = -8362543;
	int32_t t95 = -2636970;

	t95 = ((x545^(x546<=x547))*x548);

	if (t95 != -125438145) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x553 = -1;
	int32_t x554 = INT32_MAX;
	uint8_t x555 = 1U;
	int8_t x556 = INT8_MAX;
	int32_t t96 = 7390;

	t96 = ((x553^(x554<=x555))*x556);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x557 = -317172180;
	int64_t x560 = -1LL;
	static int64_t t97 = -871089231634141317LL;

	t97 = ((x557^(x558<=x559))*x560);

	if (t97 != 317172180LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x569 = -1;
	volatile uint16_t x571 = UINT16_MAX;
	uint32_t x572 = 0U;
	uint32_t t98 = 6U;

	t98 = ((x569^(x570<=x571))*x572);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x578 = -1LL;
	uint32_t x579 = 676274020U;
	int32_t x580 = -1;
	volatile uint32_t t99 = 7999U;

	t99 = ((x577^(x578<=x579))*x580);

	if (t99 != 2U) { NG(); } else { ; }
	
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

