#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = UINT8_MAX;
int32_t t1 = 133771;
volatile int8_t x14 = -7;
volatile int16_t x16 = INT16_MAX;
static volatile uint32_t x19 = 3U;
static volatile int64_t x21 = -2238441904033819833LL;
int32_t x28 = INT32_MAX;
volatile int16_t x39 = INT16_MIN;
static uint64_t x46 = 1LLU;
static uint8_t x56 = 0U;
int32_t t13 = -37624279;
int8_t x59 = -1;
uint16_t x64 = 448U;
int64_t x67 = INT64_MIN;
int32_t x68 = 14052;
int8_t x87 = -1;
int8_t x90 = 0;
static volatile int32_t x91 = INT32_MIN;
volatile uint64_t x93 = 470715LLU;
int32_t x101 = 36;
uint32_t x102 = 1U;
uint8_t x106 = 2U;
uint32_t x108 = UINT32_MAX;
static int32_t t26 = 11073553;
int16_t x111 = -1;
static int64_t x114 = INT64_MAX;
volatile int32_t t29 = 6781;
int16_t x124 = 11295;
int16_t x126 = -1;
int32_t x128 = INT32_MIN;
static volatile int16_t x130 = INT16_MIN;
static uint32_t x135 = 154U;
int32_t t35 = -8;
volatile int32_t t36 = 6118;
static uint16_t x151 = UINT16_MAX;
static int8_t x154 = INT8_MIN;
static uint8_t x170 = 3U;
static uint64_t x171 = 109383933LLU;
int32_t t42 = 23;
int8_t x175 = INT8_MIN;
uint16_t x181 = 27U;
int32_t x183 = INT32_MIN;
int8_t x186 = INT8_MAX;
static int32_t x187 = INT32_MIN;
int32_t x189 = INT32_MAX;
int16_t x198 = INT16_MAX;
volatile int8_t x199 = -1;
int64_t x200 = -11LL;
int32_t x203 = INT32_MIN;
volatile int32_t t50 = -870942439;
int8_t x205 = -1;
int8_t x206 = -1;
int64_t x225 = -1LL;
uint32_t x228 = 534U;
int32_t x233 = INT32_MIN;
static int32_t t58 = -609680;
uint64_t x237 = UINT64_MAX;
int64_t x242 = INT64_MIN;
int32_t x243 = -1;
static volatile int32_t t60 = 130374976;
int64_t x249 = INT64_MAX;
int8_t x258 = INT8_MAX;
uint64_t x259 = 1138877364543282LLU;
volatile int32_t t64 = -3202;
uint64_t x266 = 102143LLU;
static volatile uint8_t x267 = 33U;
static uint64_t x269 = 53485578085818758LLU;
int64_t x270 = -1LL;
volatile int32_t t71 = -1;
uint16_t x291 = UINT16_MAX;
static int64_t x292 = 14285LL;
volatile int64_t x293 = -988795495067705297LL;
int8_t x297 = INT8_MIN;
volatile uint32_t x298 = UINT32_MAX;
int32_t x302 = 228550;
static volatile int32_t x307 = -143602093;
int32_t t78 = -21;
int16_t x317 = -1;
volatile int64_t x322 = -1LL;
uint64_t x327 = 334273694242LLU;
int64_t x328 = INT64_MAX;
volatile int32_t t82 = -5;
int32_t x335 = -1;
uint16_t x336 = 29918U;
int64_t x340 = 178277LL;
volatile int32_t t84 = -154151;
int32_t x348 = -28;
static volatile uint64_t x351 = UINT64_MAX;
int16_t x352 = INT16_MAX;
static int32_t t87 = 177662549;
int32_t t88 = 6121;
int64_t x363 = INT64_MIN;
volatile int64_t x365 = -3730219LL;
int8_t x366 = -1;
static int32_t t91 = -7153;
uint8_t x381 = 24U;
int8_t x385 = INT8_MAX;
static uint32_t x387 = 7U;
volatile uint64_t x393 = 58422053832683LLU;
static int32_t x394 = INT32_MAX;
int16_t x398 = INT16_MIN;
uint32_t x399 = 39604478U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint16_t x2 = 5288U;
	int16_t x3 = INT16_MIN;
	static int32_t t0 = -460572;

	t0 = (((x1<x2)&x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = 220836U;
	int32_t x8 = -1;

	t1 = (((x5<x6)&x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 3;
	uint8_t x10 = 4U;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	int32_t t2 = 222740;

	t2 = (((x9<x10)&x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 15571436234LLU;
	uint8_t x15 = 107U;
	int32_t t3 = 3;

	t3 = (((x13<x14)&x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	volatile int64_t x20 = -1127893007453863788LL;
	volatile int32_t t4 = 84151465;

	t4 = (((x17<x18)&x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static int64_t x23 = INT64_MIN;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = -3;

	t5 = (((x21<x22)&x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 1LLU;
	uint64_t x26 = 1466LLU;
	static volatile int32_t x27 = 418;
	volatile int32_t t6 = -1;

	t6 = (((x25<x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t x30 = 129612;
	int64_t x31 = -4337838919706LL;
	int16_t x32 = 24;
	volatile int32_t t7 = -4;

	t7 = (((x29<x30)&x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = UINT8_MAX;
	static int32_t x36 = INT32_MAX;
	int32_t t8 = 5323;

	t8 = (((x33<x34)&x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -24;
	uint16_t x38 = 31681U;
	volatile int8_t x40 = -1;
	static volatile int32_t t9 = 229443946;

	t9 = (((x37<x38)&x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -27473095;
	volatile uint64_t x42 = 848588LLU;
	volatile int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 146763;

	t10 = (((x41<x42)&x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 7;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -1841;

	t11 = (((x45<x46)&x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -6;
	int16_t x50 = -1;
	uint32_t x51 = 410591826U;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = -7552;

	t12 = (((x49<x50)&x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -102120596LL;
	static int8_t x54 = INT8_MAX;
	int32_t x55 = -1490;

	t13 = (((x53<x54)&x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static int8_t x58 = -62;
	int16_t x60 = 3458;
	int32_t t14 = 1;

	t14 = (((x57<x58)&x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -58721871;
	static uint16_t x62 = 2303U;
	uint8_t x63 = 2U;
	volatile int32_t t15 = 40;

	t15 = (((x61<x62)&x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MAX;
	int32_t x66 = 706065;
	int32_t t16 = -3;

	t16 = (((x65<x66)&x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -853641462;
	int32_t x70 = 588395;
	uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 1563;

	t17 = (((x69<x70)&x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = -1LL;
	int8_t x74 = 6;
	uint8_t x75 = 3U;
	int16_t x76 = 2711;
	volatile int32_t t18 = -24850;

	t18 = (((x73<x74)&x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -14550595318724LL;
	volatile uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -5;

	t19 = (((x77<x78)&x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	int32_t x82 = -55076;
	static volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = -97;
	volatile int32_t t20 = -460209;

	t20 = (((x81<x82)&x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 119;
	static uint8_t x86 = 0U;
	volatile int64_t x88 = 3569433235601453832LL;
	volatile int32_t t21 = -3803;

	t21 = (((x85<x86)&x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 28215402;

	t22 = (((x89<x90)&x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -35;
	int32_t x95 = 1320036;
	uint64_t x96 = UINT64_MAX;
	static volatile int32_t t23 = 582603885;

	t23 = (((x93<x94)&x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 277878191U;
	int16_t x98 = 1;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 3903263253812955LLU;
	int32_t t24 = -11608458;

	t24 = (((x97<x98)&x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = 8U;
	volatile int16_t x104 = 93;
	int32_t t25 = 4;

	t25 = (((x101<x102)&x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	volatile int8_t x107 = INT8_MAX;

	t26 = (((x105<x106)&x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 20103047446462LL;
	int64_t x110 = INT64_MAX;
	volatile int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = 1918652;

	t27 = (((x109<x110)&x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = 1;
	static int32_t t28 = 77398;

	t28 = (((x113<x114)&x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile uint32_t x118 = 16U;
	volatile uint32_t x119 = UINT32_MAX;
	volatile int64_t x120 = 11LL;

	t29 = (((x117<x118)&x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -1LL;
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	static int32_t t30 = -7;

	t30 = (((x121<x122)&x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int16_t x127 = INT16_MIN;
	static int32_t t31 = -234929340;

	t31 = (((x125<x126)&x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	static volatile uint16_t x131 = 10U;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 3;

	t32 = (((x129<x130)&x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = 8027989141105379LL;
	static int16_t x134 = INT16_MIN;
	static uint64_t x136 = 92LLU;
	volatile int32_t t33 = 10;

	t33 = (((x133<x134)&x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint64_t x138 = 13LLU;
	uint64_t x139 = UINT64_MAX;
	static int16_t x140 = -7;
	int32_t t34 = -14182;

	t34 = (((x137<x138)&x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int32_t x142 = -1183258;
	int8_t x143 = INT8_MIN;
	static volatile int16_t x144 = INT16_MIN;

	t35 = (((x141<x142)&x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	uint64_t x147 = 74514432284436033LLU;
	static int8_t x148 = -1;

	t36 = (((x145<x146)&x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x150 = 0;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -14624270;

	t37 = (((x149<x150)&x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -1LL;
	volatile int64_t x155 = -1045243190128777251LL;
	volatile uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -1;

	t38 = (((x153<x154)&x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 8573U;
	volatile int32_t x158 = INT32_MAX;
	static int16_t x159 = -10041;
	uint8_t x160 = 78U;
	int32_t t39 = -36240;

	t39 = (((x157<x158)&x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1LL;
	int32_t t40 = -25530275;

	t40 = (((x161<x162)&x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 0U;
	uint32_t x167 = 13009U;
	int32_t x168 = -1;
	int32_t t41 = 4762756;

	t41 = (((x165<x166)&x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x172 = INT64_MIN;

	t42 = (((x169<x170)&x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 25U;
	volatile uint8_t x174 = 84U;
	int64_t x176 = -14166LL;
	int32_t t43 = -4883750;

	t43 = (((x173<x174)&x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -54LL;
	volatile int64_t x178 = INT64_MAX;
	static int16_t x179 = -1;
	uint8_t x180 = 0U;
	int32_t t44 = 3353265;

	t44 = (((x177<x178)&x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int8_t x184 = -1;
	int32_t t45 = 290978321;

	t45 = (((x181<x182)&x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x188 = 2U;
	volatile int32_t t46 = -54724;

	t46 = (((x185<x186)&x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = INT64_MAX;
	static int16_t x191 = INT16_MIN;
	static int8_t x192 = -1;
	int32_t t47 = 25;

	t47 = (((x189<x190)&x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 100262U;
	volatile int32_t x194 = INT32_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -468176;

	t48 = (((x193<x194)&x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t t49 = -5394266;

	t49 = (((x197<x198)&x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	uint16_t x202 = 0U;
	static uint64_t x204 = 78765775915927LLU;

	t50 = (((x201<x202)&x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = -13;

	t51 = (((x205<x206)&x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -2LL;
	volatile uint64_t x210 = UINT64_MAX;
	int64_t x211 = 113554433045LL;
	uint16_t x212 = 83U;
	int32_t t52 = 57852337;

	t52 = (((x209<x210)&x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = 0;
	volatile int32_t x215 = -1219;
	int32_t x216 = INT32_MAX;
	int32_t t53 = 116;

	t53 = (((x213<x214)&x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -3;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -3309;
	uint64_t x220 = 4LLU;
	volatile int32_t t54 = 46285174;

	t54 = (((x217<x218)&x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = 221426342852691189LL;
	int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	uint32_t x224 = 0U;
	int32_t t55 = -94269340;

	t55 = (((x221<x222)&x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = UINT16_MAX;
	int32_t t56 = 63;

	t56 = (((x225<x226)&x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -1121;
	int16_t x232 = -1;
	int32_t t57 = -113700358;

	t57 = (((x229<x230)&x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	uint32_t x235 = UINT32_MAX;
	volatile int8_t x236 = INT8_MIN;

	t58 = (((x233<x234)&x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 19371668LLU;
	int32_t t59 = -39006;

	t59 = (((x237<x238)&x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 168282872U;
	static uint64_t x244 = 237LLU;

	t60 = (((x241<x242)&x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MAX;
	uint16_t x246 = 5357U;
	uint64_t x247 = 599399488868LLU;
	int64_t x248 = INT64_MAX;
	static volatile int32_t t61 = -111;

	t61 = (((x245<x246)&x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = 48;

	t62 = (((x249<x250)&x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	static int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MIN;
	volatile uint64_t x256 = 53537LLU;
	volatile int32_t t63 = 20;

	t63 = (((x253<x254)&x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;

	t64 = (((x257<x258)&x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	volatile int8_t x262 = -30;
	int32_t x263 = -1;
	int32_t x264 = -1;
	volatile int32_t t65 = 2864077;

	t65 = (((x261<x262)&x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int32_t x268 = -2453896;
	volatile int32_t t66 = 1657303;

	t66 = (((x265<x266)&x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = INT8_MIN;
	int32_t x272 = -478;
	static volatile int32_t t67 = -60106944;

	t67 = (((x269<x270)&x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 218U;
	int64_t x274 = -1LL;
	static uint32_t x275 = UINT32_MAX;
	static int64_t x276 = -211LL;
	int32_t t68 = -4551;

	t68 = (((x273<x274)&x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x277 = 198U;
	static uint8_t x278 = 81U;
	volatile uint64_t x279 = 728017674439371852LLU;
	int8_t x280 = -2;
	int32_t t69 = 47;

	t69 = (((x277<x278)&x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 15U;
	int32_t t70 = -2073584;

	t70 = (((x281<x282)&x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -12929;
	volatile int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = 7U;

	t71 = (((x285<x286)&x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 24796U;
	static volatile int32_t t72 = -499;

	t72 = (((x289<x290)&x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MAX;
	uint32_t x295 = 172U;
	int64_t x296 = INT64_MAX;
	int32_t t73 = -6;

	t73 = (((x293<x294)&x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MAX;
	int64_t x300 = 165491LL;
	static int32_t t74 = 407;

	t74 = (((x297<x298)&x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	uint16_t x303 = 2863U;
	int64_t x304 = INT64_MAX;
	int32_t t75 = -3;

	t75 = (((x301<x302)&x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = 1LL;
	int16_t x306 = INT16_MIN;
	int32_t x308 = -1;
	int32_t t76 = -1;

	t76 = (((x305<x306)&x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	uint32_t x310 = 9275U;
	uint8_t x311 = 2U;
	int32_t x312 = -27482;
	static int32_t t77 = -48;

	t77 = (((x309<x310)&x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	uint64_t x315 = 1LLU;
	int32_t x316 = -1;

	t78 = (((x313<x314)&x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x318 = UINT64_MAX;
	volatile uint8_t x319 = 1U;
	static int16_t x320 = INT16_MIN;
	static int32_t t79 = 28;

	t79 = (((x317<x318)&x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = 1;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 113;

	t80 = (((x321<x322)&x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 31U;
	int32_t t81 = -18;

	t81 = (((x325<x326)&x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 101296265952LLU;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = -20;
	static int16_t x332 = -27;

	t82 = (((x329<x330)&x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = -1;
	int32_t t83 = 123378899;

	t83 = (((x333<x334)&x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = -1LL;
	static int16_t x339 = INT16_MIN;

	t84 = (((x337<x338)&x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 31U;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 1205332;

	t85 = (((x341<x342)&x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = 44;
	int16_t x346 = -1;
	int32_t x347 = INT32_MAX;
	static int32_t t86 = 0;

	t86 = (((x345<x346)&x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -411458273;
	volatile uint16_t x350 = 205U;

	t87 = (((x349<x350)&x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int64_t x355 = -1LL;
	volatile int64_t x356 = 4984087604LL;

	t88 = (((x353<x354)&x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 22276910266LLU;
	uint8_t x358 = 15U;
	volatile int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -20941132;

	t89 = (((x357<x358)&x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -673046483015LL;
	static int32_t x362 = INT32_MIN;
	volatile uint64_t x364 = 22126241492278804LLU;
	volatile int32_t t90 = -51;

	t90 = (((x361<x362)&x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x367 = UINT64_MAX;
	uint64_t x368 = 968LLU;

	t91 = (((x365<x366)&x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MAX;
	int32_t x371 = 58;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = 1;

	t92 = (((x369<x370)&x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 17U;
	volatile int32_t t93 = 91;

	t93 = (((x373<x374)&x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = -1004;
	int8_t x380 = -1;
	int32_t t94 = -5746;

	t94 = (((x377<x378)&x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x382 = 59122236;
	static int32_t x383 = INT32_MAX;
	static int16_t x384 = INT16_MIN;
	static int32_t t95 = -3344;

	t95 = (((x381<x382)&x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x386 = UINT16_MAX;
	static int16_t x388 = -122;
	volatile int32_t t96 = 3;

	t96 = (((x385<x386)&x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = 0U;
	int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MAX;
	volatile int32_t t97 = -760625;

	t97 = (((x389<x390)&x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x395 = 675570U;
	volatile int32_t x396 = INT32_MIN;
	static volatile int32_t t98 = -1782;

	t98 = (((x393<x394)&x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int16_t x400 = 6214;
	volatile int32_t t99 = -932637;

	t99 = (((x397<x398)&x399)<x400);

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

