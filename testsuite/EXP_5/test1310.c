#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
volatile int32_t x12 = -2751;
static uint8_t x26 = UINT8_MAX;
volatile int32_t t6 = 3;
volatile int16_t x29 = -1;
static volatile int32_t t9 = -19755;
int64_t x44 = 10869588247766LL;
uint16_t x52 = 3032U;
static int8_t x55 = 1;
uint16_t x59 = UINT16_MAX;
volatile int32_t x61 = INT32_MIN;
volatile int32_t t15 = -30111;
int32_t t16 = 21424687;
static uint8_t x69 = 17U;
int16_t x72 = INT16_MAX;
int8_t x77 = -1;
static int64_t x85 = -1408189LL;
volatile uint8_t x94 = 71U;
static int32_t x103 = -1;
static uint32_t x105 = UINT32_MAX;
int16_t x118 = -1;
uint64_t x121 = 178665324251049LLU;
int64_t x123 = 0LL;
volatile int16_t x124 = INT16_MAX;
volatile int32_t t30 = 185993;
static int16_t x129 = INT16_MIN;
int32_t x130 = -1;
uint32_t x132 = 19349128U;
int32_t t32 = -3768;
uint64_t x134 = 91218952108LLU;
int32_t x135 = INT32_MIN;
int32_t x136 = INT32_MAX;
uint32_t x139 = 826593U;
volatile uint64_t x152 = UINT64_MAX;
int32_t x154 = INT32_MAX;
int32_t x158 = INT32_MIN;
volatile int32_t t41 = 2766872;
int32_t x171 = -1;
static uint16_t x176 = 7U;
int32_t t45 = 25918315;
int16_t x187 = -2849;
static int32_t x189 = -888;
volatile int32_t t49 = -145;
static volatile int16_t x201 = 0;
int32_t x204 = -737362;
int32_t t50 = 0;
static int32_t x206 = 22;
int32_t t51 = 585027;
static int64_t x212 = -1LL;
int16_t x213 = -1;
int32_t t54 = 0;
int16_t x224 = -1;
int32_t t55 = -588;
int16_t x226 = INT16_MIN;
volatile int32_t t56 = -5;
volatile uint8_t x230 = 58U;
uint32_t x233 = 13950U;
uint32_t x236 = UINT32_MAX;
static int32_t t61 = 1111;
static volatile int32_t x249 = -53;
int64_t x253 = INT64_MAX;
static int32_t x258 = -1;
static int8_t x264 = INT8_MIN;
uint16_t x265 = UINT16_MAX;
static int32_t x266 = -1;
volatile uint8_t x269 = 2U;
uint64_t x272 = 1231555815LLU;
int32_t x273 = 245;
static int8_t x285 = INT8_MIN;
static int64_t x298 = -3783001915128056LL;
int8_t x314 = INT8_MIN;
int32_t x315 = -1;
volatile int8_t x316 = -1;
int64_t x319 = INT64_MIN;
volatile uint64_t x327 = UINT64_MAX;
int16_t x328 = INT16_MAX;
volatile uint32_t x334 = UINT32_MAX;
uint64_t x342 = 340763765LLU;
int32_t x344 = INT32_MIN;
static int64_t x345 = INT64_MIN;
uint32_t x350 = 7949234U;
volatile int16_t x351 = INT16_MIN;
static uint32_t x355 = 188U;
int8_t x356 = 0;
int32_t t88 = -24974;
static int8_t x359 = 0;
uint16_t x362 = UINT16_MAX;
volatile uint16_t x364 = 480U;
int32_t x374 = INT32_MIN;
static int32_t t94 = 3;
static int64_t x392 = -4418999LL;
volatile int8_t x394 = INT8_MAX;
uint16_t x399 = UINT16_MAX;


void f0(void) {
	uint8_t x1 = 1U;
	static int32_t x2 = INT32_MIN;
	uint8_t x3 = 8U;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = -14308;

	t0 = (x1<=((x2==x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint16_t x6 = 118U;
	int16_t x7 = INT16_MIN;
	static volatile uint32_t x8 = 1535998U;
	static int32_t t1 = 4383;

	t1 = (x5<=((x6==x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -11523444785204395LL;
	static int8_t x11 = 10;
	int32_t t2 = 3743;

	t2 = (x9<=((x10==x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	int16_t x14 = -1;
	uint64_t x15 = 811615432LLU;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = -70058;

	t3 = (x13<=((x14==x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 7U;
	int64_t x18 = INT64_MIN;
	static int8_t x19 = INT8_MAX;
	uint16_t x20 = 1U;
	volatile int32_t t4 = 1;

	t4 = (x17<=((x18==x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 15U;
	volatile uint32_t x23 = UINT32_MAX;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = -7309450;

	t5 = (x21<=((x22==x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	volatile int8_t x27 = INT8_MIN;
	uint32_t x28 = 303533U;

	t6 = (x25<=((x26==x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	static int8_t x31 = INT8_MIN;
	uint32_t x32 = 16635U;
	volatile int32_t t7 = 18916306;

	t7 = (x29<=((x30==x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 276284269977085LLU;
	static volatile uint32_t x34 = 376787U;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = -3338477254390668861LL;
	int32_t t8 = 415361615;

	t8 = (x33<=((x34==x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	volatile int64_t x39 = INT64_MIN;
	uint64_t x40 = 8LLU;

	t9 = (x37<=((x38==x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x42 = 17U;
	int8_t x43 = 1;
	int32_t t10 = 12;

	t10 = (x41<=((x42==x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	int16_t x48 = 1076;
	volatile int32_t t11 = 20969;

	t11 = (x45<=((x46==x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = INT32_MIN;
	static volatile int64_t x51 = 6LL;
	int32_t t12 = -7263740;

	t12 = (x49<=((x50==x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 1;
	int8_t x54 = 0;
	uint8_t x56 = 3U;
	int32_t t13 = 43;

	t13 = (x53<=((x54==x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 627U;
	static volatile uint8_t x58 = UINT8_MAX;
	uint16_t x60 = 6983U;
	int32_t t14 = -709864421;

	t14 = (x57<=((x58==x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = INT64_MAX;
	volatile int32_t x63 = INT32_MIN;
	volatile uint8_t x64 = UINT8_MAX;

	t15 = (x61<=((x62==x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile int16_t x67 = INT16_MIN;
	static volatile int64_t x68 = 561883LL;

	t16 = (x65<=((x66==x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 16;
	volatile int8_t x71 = -35;
	volatile int32_t t17 = 3257;

	t17 = (x69<=((x70==x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 2U;
	static int64_t x75 = INT64_MIN;
	static int64_t x76 = -1LL;
	int32_t t18 = 147463;

	t18 = (x73<=((x74==x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = -888393727;

	t19 = (x77<=((x78==x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1237;
	int16_t x82 = -356;
	int32_t x83 = INT32_MAX;
	static int64_t x84 = INT64_MAX;
	int32_t t20 = -2387217;

	t20 = (x81<=((x82==x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = INT16_MAX;
	static uint8_t x87 = 1U;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = 1875765;

	t21 = (x85<=((x86==x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 330447348089LLU;
	static uint64_t x90 = 11683LLU;
	volatile int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 93593;

	t22 = (x89<=((x90==x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 1;
	int32_t x95 = INT32_MIN;
	volatile int64_t x96 = -1LL;
	volatile int32_t t23 = 683;

	t23 = (x93<=((x94==x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 8U;
	int8_t x98 = INT8_MIN;
	int32_t x99 = 595;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = -1;

	t24 = (x97<=((x98==x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 16U;
	uint16_t x102 = UINT16_MAX;
	volatile int64_t x104 = -1LL;
	int32_t t25 = 7;

	t25 = (x101<=((x102==x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -2571;
	uint16_t x107 = 69U;
	int64_t x108 = INT64_MAX;
	int32_t t26 = 12;

	t26 = (x105<=((x106==x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -2315;
	volatile int32_t x110 = 1;
	int32_t x111 = 436;
	static volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = 14948491;

	t27 = (x109<=((x110==x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1748U;
	static int64_t x114 = -1LL;
	volatile int64_t x115 = 40190032LL;
	int16_t x116 = 693;
	int32_t t28 = 1007222;

	t28 = (x113<=((x114==x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x119 = INT64_MAX;
	int64_t x120 = -1LL;
	volatile int32_t t29 = -22518449;

	t29 = (x117<=((x118==x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 10U;

	t30 = (x121<=((x122==x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	static volatile uint8_t x127 = 4U;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = -3027666;

	t31 = (x125<=((x126==x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x131 = 22287U;

	t32 = (x129<=((x130==x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t t33 = 7855367;

	t33 = (x133<=((x134==x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -253339531131828974LL;
	uint64_t x138 = 4LLU;
	int16_t x140 = 120;
	int32_t t34 = -1413;

	t34 = (x137<=((x138==x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 74;
	volatile int32_t x142 = -389;
	int32_t x143 = 31168650;
	uint64_t x144 = 231568004LLU;
	int32_t t35 = 99112;

	t35 = (x141<=((x142==x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 1281LL;
	static volatile int16_t x146 = 2677;
	int16_t x147 = INT16_MAX;
	int16_t x148 = 1667;
	volatile int32_t t36 = -63060;

	t36 = (x145<=((x146==x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MAX;
	int8_t x151 = -13;
	int32_t t37 = 81864753;

	t37 = (x149<=((x150==x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile uint32_t x155 = 16893U;
	uint16_t x156 = 1012U;
	volatile int32_t t38 = -1064435398;

	t38 = (x153<=((x154==x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	int64_t x159 = 5419872LL;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -6913;

	t39 = (x157<=((x158==x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -5;
	volatile uint8_t x162 = 6U;
	uint8_t x163 = 25U;
	static volatile int8_t x164 = INT8_MIN;
	int32_t t40 = -5247;

	t40 = (x161<=((x162==x163)<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 4;
	volatile int16_t x166 = 533;
	volatile uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MIN;

	t41 = (x165<=((x166==x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = -1;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 79177;

	t42 = (x169<=((x170==x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int64_t x174 = 17095678118479650LL;
	int64_t x175 = -197412019LL;
	volatile int32_t t43 = 3751;

	t43 = (x173<=((x174==x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 31715609U;
	uint16_t x178 = 860U;
	static uint32_t x179 = 3605U;
	volatile int64_t x180 = INT64_MIN;
	int32_t t44 = 25627;

	t44 = (x177<=((x178==x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int64_t x182 = -1LL;
	int16_t x183 = 2791;
	int32_t x184 = INT32_MAX;

	t45 = (x181<=((x182==x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	uint8_t x188 = 14U;
	static int32_t t46 = 251;

	t46 = (x185<=((x186==x187)<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x190 = -1;
	static int8_t x191 = -39;
	volatile uint8_t x192 = UINT8_MAX;
	static int32_t t47 = -1028870;

	t47 = (x189<=((x190==x191)<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	static uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = 27973235;

	t48 = (x193<=((x194==x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 980U;
	int32_t x198 = 5933922;
	volatile int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MIN;

	t49 = (x197<=((x198==x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x202 = INT32_MIN;
	static uint64_t x203 = 1136970353878697LLU;

	t50 = (x201<=((x202==x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 143U;
	uint32_t x207 = 39582255U;
	static uint64_t x208 = 1611846977426029LLU;

	t51 = (x205<=((x206==x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	int32_t t52 = 46;

	t52 = (x209<=((x210==x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 8234801;
	int16_t x215 = -793;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -250124684;

	t53 = (x213<=((x214==x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MAX;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -330;

	t54 = (x217<=((x218==x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = -1;
	uint64_t x223 = 67LLU;

	t55 = (x221<=((x222==x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	int32_t x227 = 94307512;
	int64_t x228 = INT64_MAX;

	t56 = (x225<=((x226==x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 16U;
	static int64_t x231 = INT64_MIN;
	int8_t x232 = -8;
	static int32_t t57 = 10;

	t57 = (x229<=((x230==x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 9608137;

	t58 = (x233<=((x234==x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 27U;
	volatile int32_t x238 = INT32_MIN;
	int8_t x239 = -14;
	uint64_t x240 = UINT64_MAX;
	static int32_t t59 = 0;

	t59 = (x237<=((x238==x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 7685487LLU;
	int8_t x244 = -1;
	volatile int32_t t60 = 13;

	t60 = (x241<=((x242==x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	uint64_t x246 = 5833936LLU;
	static int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;

	t61 = (x245<=((x246==x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 13;
	int16_t x251 = 432;
	static int64_t x252 = INT64_MAX;
	static volatile int32_t t62 = 1;

	t62 = (x249<=((x250==x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 8;

	t63 = (x253<=((x254==x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -1;
	int32_t t64 = 2;

	t64 = (x257<=((x258==x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -8;
	uint32_t x262 = 307U;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = 7580;

	t65 = (x261<=((x262==x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = -33835265616552464LL;
	int64_t x268 = -1LL;
	static int32_t t66 = -741578429;

	t66 = (x265<=((x266==x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	uint64_t x271 = UINT64_MAX;
	int32_t t67 = -1;

	t67 = (x269<=((x270==x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x274 = -952;
	int32_t x275 = INT32_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t68 = -26916844;

	t68 = (x273<=((x274==x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 124341571;

	t69 = (x277<=((x278==x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int8_t x282 = INT8_MAX;
	int64_t x283 = INT64_MAX;
	static uint8_t x284 = UINT8_MAX;
	int32_t t70 = -95;

	t70 = (x281<=((x282==x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = 0;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 108531127U;
	static int32_t t71 = 98;

	t71 = (x285<=((x286==x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint32_t x290 = 12109U;
	int32_t x291 = 13867;
	int64_t x292 = -8699746460LL;
	static volatile int32_t t72 = -25099890;

	t72 = (x289<=((x290==x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 7U;
	volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = 1973499398LLU;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t73 = 41283;

	t73 = (x293<=((x294==x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 3;
	static int32_t x299 = INT32_MAX;
	static int8_t x300 = -33;
	int32_t t74 = 1329506;

	t74 = (x297<=((x298==x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint16_t x302 = 1U;
	int16_t x303 = INT16_MAX;
	int16_t x304 = -7528;
	static int32_t t75 = -105846956;

	t75 = (x301<=((x302==x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -13;
	volatile int64_t x306 = INT64_MIN;
	static int64_t x307 = 733825419431LL;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 465261;

	t76 = (x305<=((x306==x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	int8_t x311 = INT8_MAX;
	static volatile int16_t x312 = -10977;
	int32_t t77 = -7981;

	t77 = (x309<=((x310==x311)<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int32_t t78 = -5558840;

	t78 = (x313<=((x314==x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -168833;

	t79 = (x317<=((x318==x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = 22;
	uint8_t x322 = 2U;
	static int64_t x323 = 267185276483LL;
	static uint16_t x324 = 3878U;
	volatile int32_t t80 = 27;

	t80 = (x321<=((x322==x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 55407001LL;
	int8_t x326 = INT8_MIN;
	volatile int32_t t81 = 329912;

	t81 = (x325<=((x326==x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int32_t x330 = -7;
	int16_t x331 = -1;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -25168;

	t82 = (x329<=((x330==x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	static uint64_t x335 = 3769201820LLU;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t83 = 642214;

	t83 = (x333<=((x334==x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	static uint64_t x338 = 224458557165511703LLU;
	int64_t x339 = 48511LL;
	uint16_t x340 = 15468U;
	volatile int32_t t84 = -1518;

	t84 = (x337<=((x338==x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int64_t x343 = INT64_MIN;
	volatile int32_t t85 = 30;

	t85 = (x341<=((x342==x343)<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x346 = 15;
	uint64_t x347 = 325LLU;
	uint8_t x348 = 118U;
	volatile int32_t t86 = 387206;

	t86 = (x345<=((x346==x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -45;

	t87 = (x349<=((x350==x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 11567569U;
	static int32_t x354 = -1;

	t88 = (x353<=((x354==x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = 98U;
	volatile int32_t x358 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -16190;

	t89 = (x357<=((x358==x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -429;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int32_t t90 = -13198929;

	t90 = (x361<=((x362==x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = 36074589480577456LL;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t91 = 81900;

	t91 = (x365<=((x366==x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 128735601211LL;
	int8_t x370 = -13;
	uint16_t x371 = 1U;
	int16_t x372 = INT16_MAX;
	static int32_t t92 = 12054122;

	t92 = (x369<=((x370==x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 5151;
	static int16_t x375 = -509;
	volatile int8_t x376 = 7;
	int32_t t93 = -17914856;

	t93 = (x373<=((x374==x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 8601283674LLU;
	int64_t x378 = INT64_MAX;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;

	t94 = (x377<=((x378==x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -150;
	int64_t x382 = -1LL;
	uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = INT64_MIN;
	static int32_t t95 = 3060;

	t95 = (x381<=((x382==x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 7U;
	int64_t x386 = -843LL;
	static int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -4296377;

	t96 = (x385<=((x386==x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = 3;
	static uint8_t x390 = 63U;
	uint8_t x391 = 31U;
	int32_t t97 = -42611882;

	t97 = (x389<=((x390==x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 11107LLU;
	uint16_t x395 = UINT16_MAX;
	static int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = 1;

	t98 = (x393<=((x394==x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = UINT32_MAX;
	int8_t x400 = INT8_MAX;
	static int32_t t99 = 22;

	t99 = (x397<=((x398==x399)<=x400));

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

