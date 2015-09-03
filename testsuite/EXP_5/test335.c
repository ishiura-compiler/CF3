#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 124212183540LLU;
int16_t x15 = 6;
int64_t x16 = INT64_MAX;
int16_t x17 = INT16_MAX;
int64_t x37 = -1LL;
volatile int32_t t10 = -9;
uint32_t x45 = UINT32_MAX;
int64_t x48 = 404385754LL;
volatile int32_t t11 = 1;
int16_t x49 = -23;
static volatile int32_t t12 = -7;
static volatile int64_t x53 = 1817330LL;
static int32_t t13 = -1;
static int64_t x60 = -1LL;
static int32_t x66 = -161;
uint16_t x69 = 0U;
volatile int64_t x81 = -1LL;
int64_t x83 = -12221104550LL;
static int16_t x84 = -2272;
int32_t x92 = INT32_MAX;
int32_t t21 = -286;
volatile uint32_t x106 = UINT32_MAX;
int64_t x114 = -517897992LL;
int16_t x120 = INT16_MAX;
int32_t t30 = -205;
int32_t x148 = -1;
int64_t x153 = INT64_MAX;
int16_t x154 = INT16_MIN;
static volatile int32_t x160 = -21642110;
volatile int32_t t35 = -358;
int8_t x171 = -7;
uint64_t x173 = 11LLU;
uint64_t x174 = 18698LLU;
volatile int32_t x176 = -1;
static int8_t x187 = -1;
static uint64_t x188 = 3857021LLU;
static volatile int32_t t39 = -11096;
static uint16_t x197 = UINT16_MAX;
int8_t x198 = INT8_MIN;
uint8_t x202 = 15U;
uint16_t x204 = 14028U;
static volatile int8_t x206 = -1;
int16_t x218 = -53;
static int32_t x226 = INT32_MAX;
volatile int32_t t48 = -1355;
uint32_t x234 = 2598U;
static int32_t t50 = 23870164;
uint64_t x238 = 5379210435LLU;
int64_t x243 = 40LL;
static uint8_t x253 = 1U;
volatile int32_t t54 = 107;
volatile int32_t t55 = 2153;
int32_t t57 = 141;
volatile int32_t t59 = -2077984;
int32_t x281 = INT32_MIN;
int16_t x283 = INT16_MIN;
volatile int32_t t60 = 136183;
int8_t x286 = 7;
static int64_t x288 = INT64_MAX;
int32_t t61 = 7;
static int64_t x289 = -566841LL;
int16_t x291 = -1;
volatile int32_t t62 = -15908;
static volatile int32_t t63 = 1556757;
volatile int64_t x304 = -1LL;
int32_t x305 = INT32_MAX;
int32_t t66 = 2111;
int32_t x317 = -47070349;
int32_t x320 = -23373;
uint8_t x323 = 19U;
volatile uint64_t x335 = UINT64_MAX;
static uint8_t x336 = 26U;
int32_t t73 = -16957756;
uint16_t x349 = 3203U;
int32_t x350 = INT32_MIN;
volatile uint32_t x361 = 317U;
static int32_t x362 = 180;
int32_t x369 = INT32_MIN;
uint8_t x373 = UINT8_MAX;
volatile uint8_t x377 = 2U;
int8_t x378 = INT8_MIN;
static volatile int32_t t83 = 8;
static int16_t x401 = INT16_MIN;
volatile int64_t x406 = 11118146630456951LL;
static volatile int32_t t85 = -40957;
uint64_t x409 = UINT64_MAX;
int8_t x420 = -1;
volatile int16_t x423 = 3;
volatile int32_t t90 = 8279600;
uint64_t x438 = 2LLU;
int64_t x445 = INT64_MIN;
int32_t t93 = 371;
volatile int32_t x452 = -24;
volatile int64_t x454 = INT64_MIN;
static int32_t t96 = 3;
volatile int32_t t97 = 475441;
int64_t x465 = INT64_MIN;
int8_t x471 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = 58U;
	int32_t t0 = 28127;

	t0 = (x1<=((x2-x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1907875666678LL;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 639585423;

	t1 = (x5<=((x6-x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = 1;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = -182134;
	int32_t t2 = -672813;

	t2 = (x9<=((x10-x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int64_t x14 = INT64_MAX;
	int32_t t3 = 102728845;

	t3 = (x13<=((x14-x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 7U;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -14805;

	t4 = (x17<=((x18-x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 10U;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = 18559319305836816LLU;
	uint64_t x24 = 18663LLU;
	volatile int32_t t5 = 622;

	t5 = (x21<=((x22-x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int64_t x26 = INT64_MAX;
	uint16_t x27 = 19912U;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 22;

	t6 = (x25<=((x26-x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	int16_t x32 = 426;
	volatile int32_t t7 = -130245618;

	t7 = (x29<=((x30-x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	int16_t x34 = -372;
	uint32_t x35 = UINT32_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 204;

	t8 = (x33<=((x34-x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 189427104U;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 93;

	t9 = (x37<=((x38-x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 214U;
	int16_t x42 = INT16_MIN;
	int64_t x43 = 1250889576903LL;
	static int64_t x44 = INT64_MIN;

	t10 = (x41<=((x42-x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 135862;
	int64_t x47 = -41253815398LL;

	t11 = (x45<=((x46-x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	static uint8_t x51 = 0U;
	volatile int32_t x52 = INT32_MIN;

	t12 = (x49<=((x50-x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = 59;
	int32_t x55 = -1;
	int32_t x56 = INT32_MAX;

	t13 = (x53<=((x54-x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	uint64_t x58 = 88500097LLU;
	volatile int64_t x59 = -1LL;
	volatile int32_t t14 = 33958;

	t14 = (x57<=((x58-x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -50602;

	t15 = (x61<=((x62-x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int16_t x67 = INT16_MIN;
	uint8_t x68 = 0U;
	volatile int32_t t16 = 639985;

	t16 = (x65<=((x66-x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	uint16_t x71 = 868U;
	volatile int16_t x72 = -54;
	int32_t t17 = 39176860;

	t17 = (x69<=((x70-x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 14158279U;
	volatile uint8_t x74 = UINT8_MAX;
	static int16_t x75 = 405;
	static int64_t x76 = -4088552872952LL;
	volatile int32_t t18 = -445867;

	t18 = (x73<=((x74-x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MAX;
	int32_t t19 = 63041;

	t19 = (x81<=((x82-x83)^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 8;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	volatile int32_t t20 = 0;

	t20 = (x89<=((x90-x91)^x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = INT16_MIN;

	t21 = (x93<=((x94-x95)^x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -29052109342LL;
	int16_t x98 = INT16_MIN;
	int16_t x99 = 1583;
	int8_t x100 = -37;
	volatile int32_t t22 = 23375;

	t22 = (x97<=((x98-x99)^x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -5522;
	int64_t x102 = 27LL;
	int32_t x103 = -1;
	int64_t x104 = INT64_MIN;
	int32_t t23 = -9;

	t23 = (x101<=((x102-x103)^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x105 = UINT8_MAX;
	uint16_t x107 = 455U;
	int64_t x108 = INT64_MAX;
	int32_t t24 = -122637767;

	t24 = (x105<=((x106-x107)^x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -58168;
	static uint32_t x110 = UINT32_MAX;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t25 = -1;

	t25 = (x109<=((x110-x111)^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	int16_t x116 = -1;
	volatile int32_t t26 = 271982539;

	t26 = (x113<=((x114-x115)^x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	static volatile int8_t x118 = -1;
	volatile int16_t x119 = INT16_MIN;
	int32_t t27 = -29785;

	t27 = (x117<=((x118-x119)^x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x121 = 7U;
	static int16_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	volatile int32_t t28 = 101552371;

	t28 = (x121<=((x122-x123)^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 2459U;
	static int32_t x126 = -1030093;
	volatile int8_t x127 = 9;
	int8_t x128 = INT8_MIN;
	volatile int32_t t29 = -1648;

	t29 = (x125<=((x126-x127)^x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int16_t x142 = INT16_MAX;
	uint64_t x143 = 15859826565106473LLU;
	uint8_t x144 = UINT8_MAX;

	t30 = (x141<=((x142-x143)^x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	static volatile int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	volatile int32_t t31 = -2296;

	t31 = (x145<=((x146-x147)^x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x155 = -6174360506728153LL;
	int16_t x156 = 1;
	volatile int32_t t32 = -305516;

	t32 = (x153<=((x154-x155)^x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MAX;
	int64_t x159 = -1LL;
	volatile int32_t t33 = 261178;

	t33 = (x157<=((x158-x159)^x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = INT64_MAX;
	int8_t x162 = -1;
	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	static int32_t t34 = -10173;

	t34 = (x161<=((x162-x163)^x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = 387;
	int8_t x167 = -1;
	int32_t x168 = INT32_MAX;

	t35 = (x165<=((x166-x167)^x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = 49U;
	uint32_t x172 = UINT32_MAX;
	int32_t t36 = 326442;

	t36 = (x169<=((x170-x171)^x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x175 = INT16_MIN;
	int32_t t37 = 413392970;

	t37 = (x173<=((x174-x175)^x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = 1277077;
	int8_t x179 = INT8_MIN;
	int16_t x180 = 26;
	static volatile int32_t t38 = -30416068;

	t38 = (x177<=((x178-x179)^x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MAX;
	static uint16_t x186 = UINT16_MAX;

	t39 = (x185<=((x186-x187)^x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 1036940U;
	int32_t x195 = INT32_MAX;
	static volatile uint8_t x196 = UINT8_MAX;
	static int32_t t40 = 684392987;

	t40 = (x193<=((x194-x195)^x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MAX;
	static volatile int32_t t41 = -126658;

	t41 = (x197<=((x198-x199)^x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -174707375692LL;
	int8_t x203 = 1;
	int32_t t42 = -256730044;

	t42 = (x201<=((x202-x203)^x204));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = 687648;
	int16_t x207 = -1;
	volatile int64_t x208 = -2317LL;
	int32_t t43 = -31530060;

	t43 = (x205<=((x206-x207)^x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 19675U;
	volatile int8_t x210 = INT8_MAX;
	int8_t x211 = -3;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t44 = -470572758;

	t44 = (x209<=((x210-x211)^x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	int64_t x215 = -564756997070742LL;
	int16_t x216 = -1;
	int32_t t45 = -91858;

	t45 = (x213<=((x214-x215)^x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 2U;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 1185180U;
	int32_t t46 = -450;

	t46 = (x217<=((x218-x219)^x220));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int16_t x223 = 6557;
	volatile uint64_t x224 = 791250898607747562LLU;
	static int32_t t47 = 39;

	t47 = (x221<=((x222-x223)^x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = 26644LL;
	static int8_t x227 = 1;
	int32_t x228 = -1;

	t48 = (x225<=((x226-x227)^x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 210870377788386LLU;
	uint8_t x230 = 32U;
	int32_t x231 = INT32_MAX;
	volatile int32_t x232 = 1193;
	volatile int32_t t49 = -631827203;

	t49 = (x229<=((x230-x231)^x232));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x233 = INT8_MIN;
	uint8_t x235 = 13U;
	static int8_t x236 = INT8_MIN;

	t50 = (x233<=((x234-x235)^x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = INT16_MAX;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 25U;
	volatile int32_t t51 = -5;

	t51 = (x237<=((x238-x239)^x240));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x241 = UINT64_MAX;
	static uint8_t x242 = UINT8_MAX;
	volatile int8_t x244 = 17;
	static int32_t t52 = -13388;

	t52 = (x241<=((x242-x243)^x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x249 = 6133163552778LL;
	uint32_t x250 = 939339U;
	uint32_t x251 = 217U;
	int32_t x252 = -1;
	static int32_t t53 = -16153911;

	t53 = (x249<=((x250-x251)^x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x254 = 8110682768084336LLU;
	uint32_t x255 = UINT32_MAX;
	static uint16_t x256 = 1U;

	t54 = (x253<=((x254-x255)^x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 23384LLU;
	static int8_t x258 = -1;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;

	t55 = (x257<=((x258-x259)^x260));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x261 = 1490311945630359LLU;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MIN;
	int16_t x264 = 105;
	volatile int32_t t56 = -93927058;

	t56 = (x261<=((x262-x263)^x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -1;
	int64_t x271 = INT64_MIN;
	static volatile int16_t x272 = -12;

	t57 = (x269<=((x270-x271)^x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MIN;
	static uint8_t x274 = 0U;
	volatile int32_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	static volatile int32_t t58 = -78993219;

	t58 = (x273<=((x274-x275)^x276));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x277 = INT16_MAX;
	static int8_t x278 = INT8_MIN;
	static uint64_t x279 = 698691675LLU;
	int16_t x280 = INT16_MAX;

	t59 = (x277<=((x278-x279)^x280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x282 = 7;
	uint32_t x284 = UINT32_MAX;

	t60 = (x281<=((x282-x283)^x284));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x285 = 49U;
	static int8_t x287 = INT8_MIN;

	t61 = (x285<=((x286-x287)^x288));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x290 = 1829U;
	static volatile int16_t x292 = INT16_MAX;

	t62 = (x289<=((x290-x291)^x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = 72715154LL;
	static int64_t x294 = 108924LL;
	int8_t x295 = INT8_MIN;
	volatile int16_t x296 = -1;

	t63 = (x293<=((x294-x295)^x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x297 = 51922LLU;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t64 = 28627;

	t64 = (x297<=((x298-x299)^x300));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MAX;
	int32_t t65 = 99709743;

	t65 = (x301<=((x302-x303)^x304));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x306 = 6U;
	static int64_t x307 = -485270993235LL;
	int32_t x308 = 730651446;

	t66 = (x305<=((x306-x307)^x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x309 = INT16_MAX;
	volatile int64_t x310 = INT64_MAX;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = 522;
	static int32_t t67 = 44;

	t67 = (x309<=((x310-x311)^x312));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x318 = -1;
	int8_t x319 = 1;
	int32_t t68 = -16243;

	t68 = (x317<=((x318-x319)^x320));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int64_t x322 = 1991995084410319LL;
	int32_t x324 = INT32_MIN;
	int32_t t69 = -5386;

	t69 = (x321<=((x322-x323)^x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;
	volatile int32_t t70 = 50080191;

	t70 = (x325<=((x326-x327)^x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x333 = UINT8_MAX;
	uint32_t x334 = 874474302U;
	static int32_t t71 = -33512;

	t71 = (x333<=((x334-x335)^x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 15116U;
	volatile int32_t t72 = 52731191;

	t72 = (x337<=((x338-x339)^x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x341 = 315U;
	volatile uint8_t x342 = 4U;
	uint64_t x343 = 6881023073141931LLU;
	int8_t x344 = INT8_MIN;

	t73 = (x341<=((x342-x343)^x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 7045442131892904520LLU;
	uint64_t x348 = 424361897664338LLU;
	int32_t t74 = -54451;

	t74 = (x345<=((x346-x347)^x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x351 = INT32_MIN;
	volatile uint16_t x352 = 10744U;
	int32_t t75 = 358;

	t75 = (x349<=((x350-x351)^x352));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x363 = -126140060336161LL;
	uint32_t x364 = 24347U;
	volatile int32_t t76 = -350205;

	t76 = (x361<=((x362-x363)^x364));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x365 = 2066764661LLU;
	int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;
	uint64_t x368 = 2255538615089638607LLU;
	volatile int32_t t77 = 34;

	t77 = (x365<=((x366-x367)^x368));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x370 = 1990;
	int8_t x371 = -1;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t78 = -70212536;

	t78 = (x369<=((x370-x371)^x372));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x374 = 364U;
	int16_t x375 = 4668;
	uint8_t x376 = 13U;
	volatile int32_t t79 = -415027;

	t79 = (x373<=((x374-x375)^x376));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x379 = 0;
	uint64_t x380 = UINT64_MAX;
	static int32_t t80 = 268569386;

	t80 = (x377<=((x378-x379)^x380));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = -23;
	static volatile int64_t x390 = -1LL;
	uint16_t x391 = 765U;
	static int32_t x392 = -1;
	volatile int32_t t81 = 1204;

	t81 = (x389<=((x390-x391)^x392));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = -1;
	int32_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int8_t x396 = 4;
	int32_t t82 = 0;

	t82 = (x393<=((x394-x395)^x396));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x397 = 266138U;
	uint16_t x398 = UINT16_MAX;
	static volatile uint64_t x399 = 5LLU;
	uint16_t x400 = 0U;

	t83 = (x397<=((x398-x399)^x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x402 = 29U;
	uint16_t x403 = UINT16_MAX;
	static uint16_t x404 = UINT16_MAX;
	static volatile int32_t t84 = -71458948;

	t84 = (x401<=((x402-x403)^x404));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = 27;
	int64_t x407 = -1605LL;
	int32_t x408 = INT32_MIN;

	t85 = (x405<=((x406-x407)^x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x410 = -1;
	int64_t x411 = 552022666LL;
	volatile uint64_t x412 = 59114138LLU;
	int32_t t86 = -14;

	t86 = (x409<=((x410-x411)^x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MAX;
	int64_t x419 = -1LL;
	int32_t t87 = -1431689;

	t87 = (x417<=((x418-x419)^x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = -26702;
	uint16_t x422 = 1U;
	int64_t x424 = INT64_MIN;
	int32_t t88 = -2841137;

	t88 = (x421<=((x422-x423)^x424));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x425 = 3U;
	static int8_t x426 = INT8_MIN;
	volatile int32_t x427 = INT32_MIN;
	volatile int64_t x428 = 66977167096LL;
	int32_t t89 = 1429;

	t89 = (x425<=((x426-x427)^x428));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = 12;
	int64_t x430 = INT64_MIN;
	volatile int16_t x431 = -1;
	volatile int64_t x432 = 10643059922440474LL;

	t90 = (x429<=((x430-x431)^x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x433 = 44U;
	volatile int32_t x434 = INT32_MAX;
	int16_t x435 = 1;
	int32_t x436 = 22891628;
	volatile int32_t t91 = -651317;

	t91 = (x433<=((x434-x435)^x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -1;
	uint64_t x439 = 16LLU;
	volatile uint64_t x440 = UINT64_MAX;
	volatile int32_t t92 = 1880439;

	t92 = (x437<=((x438-x439)^x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = -1LL;

	t93 = (x445<=((x446-x447)^x448));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MIN;
	volatile uint8_t x450 = 15U;
	uint8_t x451 = 3U;
	static volatile int32_t t94 = 80519;

	t94 = (x449<=((x450-x451)^x452));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = INT16_MIN;
	int16_t x455 = -987;
	uint64_t x456 = 14227846720140LLU;
	volatile int32_t t95 = -669;

	t95 = (x453<=((x454-x455)^x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -5;
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MAX;
	int32_t x460 = INT32_MIN;

	t96 = (x457<=((x458-x459)^x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x461 = -1;
	int16_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int32_t x464 = -1;

	t97 = (x461<=((x462-x463)^x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x466 = -1;
	int64_t x467 = -1LL;
	static int16_t x468 = -106;
	volatile int32_t t98 = -39;

	t98 = (x465<=((x466-x467)^x468));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x469 = 511;
	int16_t x470 = INT16_MIN;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t99 = 4;

	t99 = (x469<=((x470-x471)^x472));

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

