#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
static uint32_t t0 = 10U;
volatile uint32_t x5 = UINT32_MAX;
static uint8_t x11 = 28U;
uint16_t x12 = UINT16_MAX;
volatile uint16_t x19 = 6U;
int64_t x21 = -88280004833LL;
volatile uint8_t x24 = UINT8_MAX;
int8_t x28 = -1;
static uint64_t x30 = 153219LLU;
volatile int64_t t7 = 21000472681778LL;
static int64_t x34 = -1LL;
uint32_t x35 = 42170U;
int8_t x36 = INT8_MIN;
static volatile int16_t x41 = INT16_MIN;
uint32_t x42 = 130U;
uint64_t x46 = UINT64_MAX;
volatile int64_t x49 = INT64_MIN;
uint16_t x50 = 115U;
uint32_t x56 = UINT32_MAX;
uint32_t t13 = 62018U;
int32_t x58 = INT32_MIN;
volatile int8_t x62 = INT8_MIN;
int32_t x63 = INT32_MAX;
int16_t x69 = INT16_MIN;
volatile int16_t x71 = INT16_MIN;
static int16_t x73 = 317;
static int32_t x74 = INT32_MIN;
volatile uint64_t x76 = UINT64_MAX;
uint64_t t18 = 130220910LLU;
volatile uint8_t x78 = UINT8_MAX;
volatile int32_t t19 = -9854559;
int32_t x83 = 68210449;
static int32_t t20 = 490536;
int64_t x85 = -206554886613091LL;
int8_t x107 = INT8_MAX;
uint16_t x111 = UINT16_MAX;
int64_t x119 = -913714158306LL;
int32_t t30 = 397277452;
uint16_t x125 = 7U;
uint32_t x128 = 6U;
int64_t x129 = INT64_MAX;
int8_t x131 = INT8_MAX;
int8_t x132 = INT8_MAX;
int32_t t32 = -242;
int32_t x133 = INT32_MIN;
volatile uint32_t x134 = 3872U;
uint16_t x137 = 3099U;
uint32_t x138 = 30287976U;
static volatile uint32_t t34 = 614U;
volatile uint32_t x141 = UINT32_MAX;
static int8_t x143 = INT8_MIN;
int64_t x145 = INT64_MIN;
int64_t x147 = INT64_MAX;
static int64_t t36 = 1798275LL;
static volatile int8_t x149 = 1;
static volatile int32_t t37 = 989555;
int32_t x153 = INT32_MIN;
int8_t x154 = INT8_MIN;
static volatile int16_t x160 = INT16_MIN;
int32_t x161 = 745593120;
static volatile uint8_t x178 = UINT8_MAX;
static volatile int64_t x182 = -1LL;
static volatile int16_t x183 = 4244;
int8_t x184 = -23;
volatile uint8_t x186 = 5U;
volatile int16_t x187 = -399;
int32_t x190 = 885;
uint16_t x194 = 1613U;
int8_t x202 = 16;
uint32_t x204 = 60976U;
volatile uint32_t t50 = 782U;
static volatile uint8_t x205 = 74U;
volatile uint16_t x208 = 14U;
int32_t t51 = 1;
static uint8_t x211 = UINT8_MAX;
int16_t x213 = INT16_MAX;
int32_t t53 = -33690825;
static int8_t x219 = INT8_MAX;
static volatile int32_t t54 = 377159322;
static volatile int32_t x230 = -1;
static volatile int8_t x234 = INT8_MIN;
uint64_t x235 = 51136433326989LLU;
int8_t x237 = 52;
int8_t x238 = -1;
int32_t t59 = 0;
uint32_t x241 = 6U;
int64_t x243 = 12290735202LL;
int16_t x246 = INT16_MIN;
int16_t x247 = INT16_MAX;
static volatile int8_t x249 = -16;
int32_t x264 = INT32_MAX;
static int8_t x270 = 12;
static uint64_t x273 = UINT64_MAX;
uint16_t x276 = 35U;
volatile int32_t t70 = 1;
static int8_t x286 = -28;
static int32_t t71 = -1843;
int32_t x290 = INT32_MAX;
int32_t x292 = 17542041;
static volatile int32_t x296 = INT32_MIN;
uint16_t x312 = 31108U;
int16_t x318 = INT16_MIN;
volatile int32_t t80 = -2;
uint8_t x326 = 92U;
static uint16_t x331 = 4013U;
int32_t t82 = -5564;
volatile int32_t x335 = -1;
static volatile uint64_t x337 = UINT64_MAX;
uint8_t x340 = 47U;
volatile uint16_t x341 = 10340U;
uint8_t x351 = UINT8_MAX;
volatile int64_t x353 = INT64_MIN;
volatile uint8_t x355 = UINT8_MAX;
int32_t x357 = INT32_MAX;
uint32_t x358 = UINT32_MAX;
int32_t x359 = INT32_MIN;
int32_t t90 = 272615940;
uint64_t x369 = 3435237995LLU;
volatile int64_t x374 = -690431729941386515LL;
volatile int64_t x375 = INT64_MIN;
static int32_t x376 = INT32_MIN;
int64_t x379 = INT64_MIN;
volatile int32_t t94 = 204223;
uint64_t x382 = 7LLU;
int8_t x388 = 1;
volatile int32_t t97 = -56;
volatile int16_t x396 = INT16_MIN;


void f0(void) {
	volatile int8_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	static uint32_t x4 = 340U;

	t0 = (((x1<=x2)==x3)&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 8465142U;
	int16_t x7 = -1;
	int64_t x8 = -3739469796900499743LL;
	volatile int64_t t1 = 110633LL;

	t1 = (((x5<=x6)==x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x10 = UINT64_MAX;
	static int32_t t2 = 834000548;

	t2 = (((x9<=x10)==x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 5;
	int8_t x14 = 13;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 50U;
	volatile int32_t t3 = -51980;

	t3 = (((x13<=x14)==x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -990;
	static uint32_t x18 = 103U;
	static int64_t x20 = INT64_MIN;
	static int64_t t4 = 2597448055415LL;

	t4 = (((x17<=x18)==x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = -1;
	int32_t x23 = 1587;
	int32_t t5 = 2164080;

	t5 = (((x21<=x22)==x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint32_t x26 = 1845U;
	volatile uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = -18842;

	t6 = (((x25<=x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x31 = INT16_MIN;
	volatile int64_t x32 = -1862682321820711017LL;

	t7 = (((x29<=x30)==x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int32_t t8 = -335;

	t8 = (((x33<=x34)==x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = -64238233095734LL;
	int8_t x39 = -1;
	int8_t x40 = -18;
	int32_t t9 = 3;

	t9 = (((x37<=x38)==x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x43 = 12U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -213301590684518LL;

	t10 = (((x41<=x42)==x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	uint64_t x47 = 1593639645535807LLU;
	volatile uint16_t x48 = 72U;
	volatile int32_t t11 = 4;

	t11 = (((x45<=x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = INT8_MIN;
	int64_t x52 = -168419LL;
	volatile int64_t t12 = 502282644567732LL;

	t12 = (((x49<=x50)==x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	static int8_t x55 = INT8_MAX;

	t13 = (((x53<=x54)==x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	static volatile uint8_t x59 = UINT8_MAX;
	static int64_t x60 = INT64_MIN;
	int64_t t14 = -28LL;

	t14 = (((x57<=x58)==x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	volatile int32_t x64 = INT32_MAX;
	int32_t t15 = -1244750;

	t15 = (((x61<=x62)==x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 10U;
	uint32_t x66 = 1924237U;
	uint64_t x67 = 2652LLU;
	uint16_t x68 = 1117U;
	volatile int32_t t16 = -802960523;

	t16 = (((x65<=x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	uint64_t x72 = 39597358633905111LLU;
	volatile uint64_t t17 = 94087LLU;

	t17 = (((x69<=x70)==x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x75 = -1714;

	t18 = (((x73<=x74)==x75)&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 196959U;
	int16_t x79 = INT16_MAX;
	static int8_t x80 = INT8_MIN;

	t19 = (((x77<=x78)==x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int16_t x82 = -1;
	static volatile uint8_t x84 = 0U;

	t20 = (((x81<=x82)==x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = 54528265859LL;
	int16_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -234827;

	t21 = (((x85<=x86)==x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 24361U;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	static volatile int32_t t22 = -8349;

	t22 = (((x89<=x90)==x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 41LLU;
	int16_t x94 = -1;
	static uint8_t x95 = UINT8_MAX;
	int64_t x96 = 280013491203959462LL;
	volatile int64_t t23 = 12967778466643LL;

	t23 = (((x93<=x94)==x95)&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -4195380063949594464LL;
	uint8_t x98 = 0U;
	static int64_t x99 = -1LL;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -245791145;

	t24 = (((x97<=x98)==x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int16_t x102 = -1;
	uint16_t x103 = 4339U;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = 233;

	t25 = (((x101<=x102)==x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 12;

	t26 = (((x105<=x106)==x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 5347;
	volatile int8_t x110 = INT8_MIN;
	volatile int32_t x112 = -443;
	volatile int32_t t27 = 6778197;

	t27 = (((x109<=x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 1062321409761807611LLU;
	int32_t x114 = -1;
	int8_t x115 = -60;
	volatile uint32_t x116 = 62U;
	volatile uint32_t t28 = 187U;

	t28 = (((x113<=x114)==x115)&x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = 3;

	t29 = (((x117<=x118)==x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 16;
	int32_t x122 = 31192686;
	uint64_t x123 = 3955095LLU;
	int8_t x124 = INT8_MIN;

	t30 = (((x121<=x122)==x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 19345;
	uint8_t x127 = UINT8_MAX;
	uint32_t t31 = 332U;

	t31 = (((x125<=x126)==x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x130 = INT8_MAX;

	t32 = (((x129<=x130)==x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = -1;
	volatile uint32_t x136 = 1021766657U;
	volatile uint32_t t33 = 5108U;

	t33 = (((x133<=x134)==x135)&x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = 191730;
	uint32_t x140 = 13U;

	t34 = (((x137<=x138)==x139)&x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x142 = 27U;
	volatile int64_t x144 = 92LL;
	static int64_t t35 = 202565738LL;

	t35 = (((x141<=x142)==x143)&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = 7322U;
	volatile int64_t x148 = INT64_MIN;

	t36 = (((x145<=x146)==x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x150 = 1208U;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = -1;

	t37 = (((x149<=x150)==x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x155 = 1039504633U;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 1995329;

	t38 = (((x153<=x154)==x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	uint32_t x159 = 884514U;
	volatile int32_t t39 = -1774229;

	t39 = (((x157<=x158)==x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x162 = 60U;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -467525;

	t40 = (((x161<=x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 5U;
	static uint8_t x166 = 83U;
	uint32_t x167 = 844546791U;
	volatile uint8_t x168 = 111U;
	int32_t t41 = 439731252;

	t41 = (((x165<=x166)==x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	volatile uint32_t x170 = 0U;
	static int8_t x171 = INT8_MAX;
	int64_t x172 = -1LL;
	int64_t t42 = 44LL;

	t42 = (((x169<=x170)==x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = INT64_MAX;
	volatile int8_t x175 = -25;
	static volatile int64_t x176 = INT64_MIN;
	int64_t t43 = -8049LL;

	t43 = (((x173<=x174)==x175)&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 6U;
	uint64_t x179 = 106LLU;
	volatile uint32_t x180 = 116029U;
	static uint32_t t44 = 726142518U;

	t44 = (((x177<=x178)==x179)&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 31;
	volatile int32_t t45 = 0;

	t45 = (((x181<=x182)==x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x185 = 18539U;
	static int8_t x188 = -14;
	volatile int32_t t46 = 1;

	t46 = (((x185<=x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint16_t x191 = 501U;
	int16_t x192 = -487;
	volatile int32_t t47 = 14;

	t47 = (((x189<=x190)==x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 3119492590540735854LLU;
	volatile int64_t x195 = -30674152228947359LL;
	volatile uint8_t x196 = 5U;
	int32_t t48 = 605650;

	t48 = (((x193<=x194)==x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 172940617LLU;
	uint16_t x198 = 8164U;
	volatile int32_t x199 = -879713;
	uint8_t x200 = 41U;
	static volatile int32_t t49 = -202;

	t49 = (((x197<=x198)==x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 931695986074141495LLU;
	uint32_t x203 = UINT32_MAX;

	t50 = (((x201<=x202)==x203)&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 27U;
	int32_t x207 = -1;

	t51 = (((x205<=x206)==x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 1903863152LL;
	uint16_t x210 = 2U;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 56796;

	t52 = (((x209<=x210)==x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = 81736044254177LL;
	int64_t x215 = 7LL;
	static int8_t x216 = INT8_MIN;

	t53 = (((x213<=x214)==x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 11174U;
	uint16_t x218 = 3691U;
	int16_t x220 = -1;

	t54 = (((x217<=x218)==x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	static int8_t x224 = INT8_MAX;
	int32_t t55 = -2667245;

	t55 = (((x221<=x222)==x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 44LLU;
	uint8_t x226 = 1U;
	volatile uint8_t x227 = 119U;
	uint32_t x228 = 32U;
	uint32_t t56 = 1496613U;

	t56 = (((x225<=x226)==x227)&x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 29591971U;
	static uint32_t x231 = 1779U;
	uint32_t x232 = 517U;
	uint32_t t57 = 11619U;

	t57 = (((x229<=x230)==x231)&x232);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t58 = 25963;

	t58 = (((x233<=x234)==x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x239 = INT8_MIN;
	volatile int32_t x240 = 12;

	t59 = (((x237<=x238)==x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = 468471314097861201LLU;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t60 = 624U;

	t60 = (((x241<=x242)==x243)&x244);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = -1;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 3495;

	t61 = (((x245<=x246)==x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	static int64_t x251 = INT64_MIN;
	int32_t x252 = 42004;
	volatile int32_t t62 = 2947246;

	t62 = (((x249<=x250)==x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = 1;
	static int32_t x255 = INT32_MIN;
	static int64_t x256 = INT64_MIN;
	int64_t t63 = 0LL;

	t63 = (((x253<=x254)==x255)&x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 5729461071920863LLU;
	int8_t x258 = INT8_MIN;
	static volatile int16_t x259 = INT16_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = 2U;

	t64 = (((x257<=x258)==x259)&x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 3U;
	static volatile int16_t x262 = INT16_MAX;
	uint32_t x263 = UINT32_MAX;
	int32_t t65 = -103055283;

	t65 = (((x261<=x262)==x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 13531108U;
	int8_t x266 = 13;
	int16_t x267 = INT16_MAX;
	int64_t x268 = -1LL;
	volatile int64_t t66 = -110LL;

	t66 = (((x265<=x266)==x267)&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 3;
	volatile int32_t t67 = -216489876;

	t67 = (((x269<=x270)==x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 2034724341545LL;
	int16_t x275 = -1;
	int32_t t68 = 387;

	t68 = (((x273<=x274)==x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	volatile int64_t x278 = INT64_MAX;
	uint16_t x279 = 333U;
	int8_t x280 = 0;
	static int32_t t69 = -21249;

	t69 = (((x277<=x278)==x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	uint16_t x283 = 976U;
	static int32_t x284 = INT32_MIN;

	t70 = (((x281<=x282)==x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	volatile int16_t x287 = -6732;
	int16_t x288 = 0;

	t71 = (((x285<=x286)==x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 15775U;
	int16_t x291 = 3;
	static volatile int32_t t72 = -6824270;

	t72 = (((x289<=x290)==x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	static int16_t x294 = INT16_MAX;
	volatile int8_t x295 = 1;
	int32_t t73 = 26;

	t73 = (((x293<=x294)==x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MAX;
	static uint64_t x300 = 24834260LLU;
	uint64_t t74 = 7807011915897046LLU;

	t74 = (((x297<=x298)==x299)&x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x302 = 80626890926450517LLU;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = 1880LL;
	volatile int64_t t75 = -181208478LL;

	t75 = (((x301<=x302)==x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 106U;
	int32_t t76 = -43;

	t76 = (((x305<=x306)==x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1637655U;
	static uint8_t x310 = 2U;
	int16_t x311 = INT16_MIN;
	volatile int32_t t77 = 0;

	t77 = (((x309<=x310)==x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -1;
	int32_t x314 = INT32_MIN;
	static volatile int64_t x315 = INT64_MIN;
	static int8_t x316 = -1;
	volatile int32_t t78 = -181905;

	t78 = (((x313<=x314)==x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile uint32_t x319 = UINT32_MAX;
	static uint16_t x320 = 2U;
	volatile int32_t t79 = -138;

	t79 = (((x317<=x318)==x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 63;
	int64_t x322 = -1LL;
	static int8_t x323 = INT8_MIN;
	volatile uint8_t x324 = 36U;

	t80 = (((x321<=x322)==x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 60564U;
	int8_t x327 = -1;
	uint8_t x328 = 119U;
	int32_t t81 = 1279897;

	t81 = (((x325<=x326)==x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	static int32_t x332 = -1;

	t82 = (((x329<=x330)==x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 1178832467U;
	int64_t x334 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 1025;

	t83 = (((x333<=x334)==x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	volatile int32_t x339 = INT32_MAX;
	int32_t t84 = -62901;

	t84 = (((x337<=x338)==x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = 57;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 296520;

	t85 = (((x341<=x342)==x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	volatile int8_t x346 = 10;
	uint32_t x347 = UINT32_MAX;
	static uint8_t x348 = 34U;
	volatile int32_t t86 = 33;

	t86 = (((x345<=x346)==x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int32_t x350 = 959218;
	volatile uint32_t x352 = UINT32_MAX;
	uint32_t t87 = 5U;

	t87 = (((x349<=x350)==x351)&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = 6U;
	int16_t x356 = INT16_MAX;
	static int32_t t88 = 246299439;

	t88 = (((x353<=x354)==x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x360 = 29073135LLU;
	static volatile uint64_t t89 = 221236LLU;

	t89 = (((x357<=x358)==x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -535691691230658LL;
	static int16_t x362 = 1283;
	int64_t x363 = -1LL;
	volatile int8_t x364 = INT8_MIN;

	t90 = (((x361<=x362)==x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	int32_t x366 = 96258;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t91 = 293;

	t91 = (((x365<=x366)==x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MAX;
	int32_t x371 = -14120;
	volatile int64_t x372 = -1LL;
	int64_t t92 = 40LL;

	t92 = (((x369<=x370)==x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -5;
	static int32_t t93 = 637866194;

	t93 = (((x373<=x374)==x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	int16_t x378 = -13;
	uint16_t x380 = 44U;

	t94 = (((x377<=x378)==x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	volatile int32_t x383 = INT32_MIN;
	uint64_t x384 = 66562435462700LLU;
	volatile uint64_t t95 = 362LLU;

	t95 = (((x381<=x382)==x383)&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 14U;
	static int32_t t96 = -42777104;

	t96 = (((x385<=x386)==x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int64_t x390 = -1LL;
	static uint64_t x391 = 8216632297645LLU;
	int32_t x392 = -1;

	t97 = (((x389<=x390)==x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 381U;
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = -1LL;
	int32_t t98 = 93;

	t98 = (((x393<=x394)==x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1343901881568852LL;
	static volatile uint32_t x400 = 3996852U;
	static volatile uint32_t t99 = 435013U;

	t99 = (((x397<=x398)==x399)&x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

