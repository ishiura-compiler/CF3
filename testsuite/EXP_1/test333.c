#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -1;
volatile int32_t t0 = 1;
volatile uint16_t x20 = 7U;
int32_t t1 = -674;
static volatile uint16_t x21 = 2563U;
uint32_t x22 = 26849866U;
int16_t x24 = -1;
volatile int8_t x25 = INT8_MIN;
uint64_t x26 = UINT64_MAX;
int32_t t3 = 252617;
int64_t x38 = -28258137LL;
int32_t x48 = -1;
uint64_t x49 = UINT64_MAX;
static volatile int16_t x50 = -1;
int32_t x51 = -29;
volatile int32_t x54 = INT32_MAX;
volatile int32_t x60 = INT32_MAX;
static int16_t x62 = INT16_MIN;
uint16_t x63 = 4711U;
uint8_t x70 = 3U;
volatile int32_t t13 = -3838;
uint8_t x80 = 1U;
int64_t x89 = 450586520463LL;
int32_t x93 = -1;
uint32_t x94 = 1503U;
uint32_t x96 = UINT32_MAX;
volatile int32_t t17 = -1;
int16_t x99 = INT16_MIN;
uint64_t x100 = 11514224LLU;
static volatile int16_t x101 = -4003;
volatile int32_t x110 = INT32_MIN;
uint64_t x111 = 2507061929116716LLU;
int16_t x118 = INT16_MIN;
uint64_t x124 = 109LLU;
int32_t t24 = 66354;
volatile int64_t x125 = INT64_MIN;
static volatile int32_t x126 = INT32_MIN;
volatile int16_t x128 = INT16_MAX;
uint64_t x136 = UINT64_MAX;
volatile int32_t t27 = 14;
uint32_t x138 = UINT32_MAX;
uint32_t x139 = UINT32_MAX;
static int16_t x143 = INT16_MIN;
int32_t x145 = 6199;
volatile int32_t t30 = 1216;
uint32_t x153 = 14U;
volatile int32_t t32 = 0;
volatile int16_t x159 = INT16_MIN;
volatile int64_t x171 = 4569451437232979LL;
uint64_t x174 = 78391LLU;
static int32_t t37 = 56;
volatile int16_t x182 = INT16_MIN;
int32_t x186 = INT32_MAX;
int32_t x195 = -487479;
uint32_t x199 = UINT32_MAX;
volatile uint64_t x200 = 17422991848117LLU;
static volatile int32_t t41 = 312861148;
volatile uint8_t x208 = 0U;
uint64_t x220 = 82LLU;
static volatile int32_t t45 = 1146305;
int8_t x227 = INT8_MIN;
int16_t x228 = INT16_MIN;
int8_t x229 = INT8_MIN;
uint8_t x231 = UINT8_MAX;
volatile int16_t x242 = INT16_MIN;
static int64_t x244 = -1LL;
int64_t x246 = 204746474LL;
int16_t x247 = INT16_MIN;
uint64_t x248 = UINT64_MAX;
int32_t x257 = -1;
static int16_t x263 = -1;
uint8_t x266 = 0U;
int8_t x270 = INT8_MIN;
int16_t x287 = 202;
uint16_t x296 = 18U;
int32_t t60 = -24451448;
static int16_t x308 = -1;
static int32_t x309 = -1;
int32_t t64 = -53;
uint32_t x316 = 82873U;
uint8_t x321 = UINT8_MAX;
volatile uint16_t x329 = 570U;
static int8_t x331 = INT8_MAX;
int64_t x333 = -1LL;
volatile int8_t x339 = -8;
volatile int32_t x340 = -394020;
static int32_t x341 = -1;
int32_t t73 = -527169110;
static uint16_t x353 = 6914U;
int64_t x360 = INT64_MIN;
static volatile int8_t x361 = 0;
static int64_t x364 = 827820LL;
static int16_t x365 = -1;
int32_t t77 = 23;
volatile int8_t x372 = 0;
volatile int8_t x383 = INT8_MAX;
static volatile int32_t t80 = 8427;
static int16_t x385 = INT16_MIN;
volatile int32_t t81 = 0;
volatile int8_t x389 = -2;
static volatile int16_t x393 = -1;
volatile int32_t x395 = 7;
int32_t t85 = 769;
int32_t x407 = INT32_MAX;
int16_t x408 = -1;
uint32_t x411 = UINT32_MAX;
int8_t x414 = -15;
int8_t x427 = -1;
int32_t t92 = 7;
int16_t x437 = INT16_MIN;
int32_t x439 = INT32_MAX;
int32_t x441 = INT32_MIN;
int64_t x449 = -1LL;
volatile int8_t x452 = 0;


void f0(void) {
	volatile int32_t x10 = INT32_MAX;
	uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = 14U;

	t0 = (((x9-x10)^x11)==x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	static volatile uint32_t x19 = 157U;

	t1 = (((x17-x18)^x19)==x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x23 = 115524U;
	volatile int32_t t2 = 58154;

	t2 = (((x21-x22)^x23)==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x27 = 376367593669LL;
	int64_t x28 = INT64_MIN;

	t3 = (((x25-x26)^x27)==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t4 = -1480652;

	t4 = (((x29-x30)^x31)==x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x37 = 829U;
	int8_t x39 = 0;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t5 = -14285;

	t5 = (((x37-x38)^x39)==x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int32_t x42 = -37586;
	static uint8_t x43 = 113U;
	int8_t x44 = -1;
	volatile int32_t t6 = -100252;

	t6 = (((x41-x42)^x43)==x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	int16_t x47 = -14963;
	volatile int32_t t7 = 33271;

	t7 = (((x45-x46)^x47)==x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x52 = 126U;
	volatile int32_t t8 = -1;

	t8 = (((x49-x50)^x51)==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x53 = -1;
	static uint64_t x55 = UINT64_MAX;
	static int16_t x56 = 3;
	static int32_t t9 = -1;

	t9 = (((x53-x54)^x55)==x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = INT64_MIN;
	static int16_t x58 = INT16_MIN;
	int8_t x59 = 46;
	int32_t t10 = 1745798;

	t10 = (((x57-x58)^x59)==x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x61 = -59393208320240LL;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t11 = 2;

	t11 = (((x61-x62)^x63)==x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -3795488826287415465LL;
	int16_t x68 = INT16_MIN;
	static int32_t t12 = -3;

	t12 = (((x65-x66)^x67)==x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 7U;
	int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MAX;

	t13 = (((x69-x70)^x71)==x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 3571922LLU;
	static uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MAX;
	volatile int32_t t14 = 91232975;

	t14 = (((x77-x78)^x79)==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t15 = -17533;

	t15 = (((x85-x86)^x87)==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	int32_t t16 = 173;

	t16 = (((x89-x90)^x91)==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x95 = -1;

	t17 = (((x93-x94)^x95)==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MIN;
	volatile int32_t t18 = 55;

	t18 = (((x97-x98)^x99)==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x102 = INT8_MAX;
	int32_t x103 = -1;
	static int16_t x104 = INT16_MAX;
	volatile int32_t t19 = -495;

	t19 = (((x101-x102)^x103)==x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x105 = INT16_MIN;
	static uint16_t x106 = 1185U;
	volatile int32_t x107 = INT32_MAX;
	uint32_t x108 = 5695U;
	volatile int32_t t20 = 40403;

	t20 = (((x105-x106)^x107)==x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = -1;
	int16_t x112 = 323;
	int32_t t21 = 1322;

	t21 = (((x109-x110)^x111)==x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = -31702;
	int8_t x115 = INT8_MIN;
	int8_t x116 = 3;
	int32_t t22 = -1244120;

	t22 = (((x113-x114)^x115)==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x117 = INT8_MAX;
	int64_t x119 = -1LL;
	volatile uint32_t x120 = UINT32_MAX;
	int32_t t23 = -11555;

	t23 = (((x117-x118)^x119)==x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 2433U;
	static uint64_t x123 = 4368345884791LLU;

	t24 = (((x121-x122)^x123)==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x127 = 2212724936613649LLU;
	int32_t t25 = 31683865;

	t25 = (((x125-x126)^x127)==x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 26196U;
	int8_t x132 = -1;
	volatile int32_t t26 = 11070;

	t26 = (((x129-x130)^x131)==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = 2138491970917LL;
	int64_t x134 = -1LL;
	uint32_t x135 = 2599U;

	t27 = (((x133-x134)^x135)==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -11;
	int16_t x140 = -1;
	int32_t t28 = 79325;

	t28 = (((x137-x138)^x139)==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 1U;
	int64_t x142 = INT64_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t29 = -27757;

	t29 = (((x141-x142)^x143)==x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x146 = INT8_MIN;
	volatile uint16_t x147 = 174U;
	int32_t x148 = INT32_MIN;

	t30 = (((x145-x146)^x147)==x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	static volatile int16_t x150 = -1;
	static int64_t x151 = -1LL;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t31 = -1;

	t31 = (((x149-x150)^x151)==x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = INT16_MIN;
	static int32_t x155 = INT32_MAX;
	static volatile int16_t x156 = INT16_MIN;

	t32 = (((x153-x154)^x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	int64_t x158 = INT64_MAX;
	static int32_t x160 = INT32_MAX;
	volatile int32_t t33 = 1837;

	t33 = (((x157-x158)^x159)==x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 22088023427LLU;
	int16_t x166 = INT16_MIN;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;
	volatile int32_t t34 = 2735;

	t34 = (((x165-x166)^x167)==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x169 = 11;
	uint64_t x170 = 394LLU;
	volatile uint64_t x172 = UINT64_MAX;
	volatile int32_t t35 = 34361;

	t35 = (((x169-x170)^x171)==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 6617U;
	int64_t x175 = 58760630893LL;
	static int16_t x176 = INT16_MAX;
	volatile int32_t t36 = -339763002;

	t36 = (((x173-x174)^x175)==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = 7006755329700LL;
	uint32_t x179 = 124062U;
	int16_t x180 = INT16_MIN;

	t37 = (((x177-x178)^x179)==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x183 = -1LL;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t38 = -134991;

	t38 = (((x181-x182)^x183)==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x185 = INT32_MAX;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t39 = 76;

	t39 = (((x185-x186)^x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = UINT8_MAX;
	uint16_t x194 = 2U;
	int64_t x196 = INT64_MIN;
	int32_t t40 = 36626149;

	t40 = (((x193-x194)^x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = 39;
	volatile uint64_t x198 = UINT64_MAX;

	t41 = (((x197-x198)^x199)==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x201 = INT16_MIN;
	static uint32_t x202 = 3576U;
	int8_t x203 = 30;
	int16_t x204 = INT16_MAX;
	volatile int32_t t42 = -118829;

	t42 = (((x201-x202)^x203)==x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x205 = 53U;
	int8_t x206 = INT8_MAX;
	static uint8_t x207 = 3U;
	int32_t t43 = -625891;

	t43 = (((x205-x206)^x207)==x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = -1;
	static volatile uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 152206966LLU;
	int8_t x212 = -1;
	int32_t t44 = -653;

	t44 = (((x209-x210)^x211)==x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;

	t45 = (((x217-x218)^x219)==x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MAX;
	uint64_t x222 = 61984243798283LLU;
	volatile int32_t x223 = 1585666;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t46 = 11;

	t46 = (((x221-x222)^x223)==x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = UINT32_MAX;
	int32_t x226 = INT32_MAX;
	volatile int32_t t47 = 748422;

	t47 = (((x225-x226)^x227)==x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x230 = -296;
	volatile int64_t x232 = INT64_MIN;
	int32_t t48 = 284685929;

	t48 = (((x229-x230)^x231)==x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x233 = 1183U;
	uint8_t x234 = 61U;
	static volatile int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t49 = -505526;

	t49 = (((x233-x234)^x235)==x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 1U;
	int8_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t50 = 10219464;

	t50 = (((x237-x238)^x239)==x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = -1;
	int16_t x243 = INT16_MAX;
	volatile int32_t t51 = -4115;

	t51 = (((x241-x242)^x243)==x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -1;
	volatile int32_t t52 = 6;

	t52 = (((x245-x246)^x247)==x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x258 = 106166816LLU;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t53 = -1337972;

	t53 = (((x257-x258)^x259)==x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 1U;
	int16_t x264 = INT16_MIN;
	int32_t t54 = 6;

	t54 = (((x261-x262)^x263)==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = INT32_MIN;
	volatile int32_t x267 = 9592;
	uint16_t x268 = 141U;
	volatile int32_t t55 = 0;

	t55 = (((x265-x266)^x267)==x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 61U;
	volatile int32_t t56 = 2;

	t56 = (((x269-x270)^x271)==x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = 3;
	static volatile uint8_t x274 = 0U;
	int8_t x275 = -1;
	static uint32_t x276 = 41169749U;
	static int32_t t57 = 77735;

	t57 = (((x273-x274)^x275)==x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 37U;
	static volatile int32_t x283 = INT32_MIN;
	int16_t x284 = -1;
	volatile int32_t t58 = 6;

	t58 = (((x281-x282)^x283)==x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int32_t x286 = INT32_MIN;
	volatile int64_t x288 = INT64_MAX;
	static int32_t t59 = -1965735;

	t59 = (((x285-x286)^x287)==x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x294 = 60U;
	int8_t x295 = INT8_MAX;

	t60 = (((x293-x294)^x295)==x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x297 = 33U;
	static volatile int16_t x298 = 12958;
	int64_t x299 = 543882849632315LL;
	static int64_t x300 = INT64_MAX;
	int32_t t61 = -11;

	t61 = (((x297-x298)^x299)==x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = 1;
	volatile int32_t x302 = 483318864;
	volatile int64_t x303 = INT64_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t62 = -8051;

	t62 = (((x301-x302)^x303)==x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x305 = UINT16_MAX;
	static int32_t x306 = INT32_MAX;
	int16_t x307 = -1;
	int32_t t63 = 1810;

	t63 = (((x305-x306)^x307)==x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x310 = 24U;
	static int8_t x311 = -37;
	int32_t x312 = INT32_MIN;

	t64 = (((x309-x310)^x311)==x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = 28U;
	volatile uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	volatile int32_t t65 = -48;

	t65 = (((x313-x314)^x315)==x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = -465LL;
	int32_t x318 = -1;
	int16_t x319 = -1;
	int8_t x320 = 0;
	volatile int32_t t66 = -3;

	t66 = (((x317-x318)^x319)==x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x322 = -1;
	uint8_t x323 = 2U;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t67 = 72039231;

	t67 = (((x321-x322)^x323)==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MIN;
	static volatile uint32_t x326 = 3U;
	uint16_t x327 = 117U;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t68 = 3;

	t68 = (((x325-x326)^x327)==x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x330 = -1;
	static volatile uint8_t x332 = 0U;
	static volatile int32_t t69 = 52;

	t69 = (((x329-x330)^x331)==x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x334 = UINT32_MAX;
	uint16_t x335 = UINT16_MAX;
	uint16_t x336 = 0U;
	volatile int32_t t70 = 77572866;

	t70 = (((x333-x334)^x335)==x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x337 = 29U;
	static int16_t x338 = -13318;
	static int32_t t71 = 1813;

	t71 = (((x337-x338)^x339)==x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x342 = 611500051243186LL;
	uint64_t x343 = 1039430600455504LLU;
	int64_t x344 = INT64_MIN;
	volatile int32_t t72 = 6883021;

	t72 = (((x341-x342)^x343)==x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = 602U;
	int16_t x351 = 585;
	int8_t x352 = INT8_MIN;

	t73 = (((x349-x350)^x351)==x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x354 = UINT32_MAX;
	int32_t x355 = 56747;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t74 = -9;

	t74 = (((x353-x354)^x355)==x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = -257048;
	int64_t x359 = 89976134LL;
	static volatile int32_t t75 = 0;

	t75 = (((x357-x358)^x359)==x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x362 = 2;
	int16_t x363 = INT16_MAX;
	static int32_t t76 = -3310606;

	t76 = (((x361-x362)^x363)==x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = 2178583460LLU;
	int8_t x368 = INT8_MIN;

	t77 = (((x365-x366)^x367)==x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = INT8_MAX;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	volatile int32_t t78 = -40;

	t78 = (((x369-x370)^x371)==x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 0LL;
	int64_t x374 = 3LL;
	static int8_t x375 = 0;
	uint8_t x376 = 118U;
	static int32_t t79 = 869818;

	t79 = (((x373-x374)^x375)==x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	uint16_t x384 = 38U;

	t80 = (((x381-x382)^x383)==x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x386 = 0U;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MAX;

	t81 = (((x385-x386)^x387)==x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x390 = 53U;
	int64_t x391 = INT64_MIN;
	static int16_t x392 = 135;
	int32_t t82 = 29951;

	t82 = (((x389-x390)^x391)==x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x394 = INT16_MIN;
	int32_t x396 = -964442;
	int32_t t83 = -961835;

	t83 = (((x393-x394)^x395)==x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = -1;
	volatile uint16_t x398 = UINT16_MAX;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 131286451312021318LLU;
	volatile int32_t t84 = -1;

	t84 = (((x397-x398)^x399)==x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = 11;
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	volatile int64_t x404 = INT64_MIN;

	t85 = (((x401-x402)^x403)==x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = INT16_MIN;
	static uint8_t x406 = 0U;
	int32_t t86 = 1015;

	t86 = (((x405-x406)^x407)==x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	uint8_t x412 = 1U;
	int32_t t87 = 15355528;

	t87 = (((x409-x410)^x411)==x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = 855150135306018LLU;
	int64_t x415 = INT64_MIN;
	static volatile int8_t x416 = INT8_MAX;
	static volatile int32_t t88 = -7829;

	t88 = (((x413-x414)^x415)==x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x417 = -19742414303LL;
	volatile int8_t x418 = 6;
	int8_t x419 = 62;
	int64_t x420 = INT64_MIN;
	volatile int32_t t89 = -119369;

	t89 = (((x417-x418)^x419)==x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = 46800180LL;
	static int32_t x422 = INT32_MAX;
	int16_t x423 = 0;
	int32_t x424 = INT32_MAX;
	int32_t t90 = -3524;

	t90 = (((x421-x422)^x423)==x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MIN;
	uint16_t x426 = UINT16_MAX;
	uint64_t x428 = 62762323542679761LLU;
	volatile int32_t t91 = -26;

	t91 = (((x425-x426)^x427)==x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = -2LL;
	int32_t x431 = -816747;
	int32_t x432 = INT32_MIN;

	t92 = (((x429-x430)^x431)==x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x438 = UINT32_MAX;
	uint64_t x440 = 226LLU;
	volatile int32_t t93 = 9;

	t93 = (((x437-x438)^x439)==x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x442 = 12U;
	static uint16_t x443 = UINT16_MAX;
	static volatile uint8_t x444 = 10U;
	int32_t t94 = -9985;

	t94 = (((x441-x442)^x443)==x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = UINT8_MAX;
	static volatile int32_t x446 = -49384;
	int32_t x447 = 116164;
	static volatile int64_t x448 = INT64_MIN;
	volatile int32_t t95 = -16518;

	t95 = (((x445-x446)^x447)==x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x450 = INT32_MAX;
	int8_t x451 = INT8_MIN;
	static int32_t t96 = -474;

	t96 = (((x449-x450)^x451)==x452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x453 = -1LL;
	volatile uint8_t x454 = 0U;
	uint16_t x455 = 145U;
	int32_t x456 = INT32_MAX;
	volatile int32_t t97 = 116;

	t97 = (((x453-x454)^x455)==x456);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = -5;
	int8_t x458 = -1;
	static uint8_t x459 = UINT8_MAX;
	int8_t x460 = -1;
	volatile int32_t t98 = -605294;

	t98 = (((x457-x458)^x459)==x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = INT64_MIN;
	static int8_t x462 = -29;
	uint16_t x463 = 353U;
	int16_t x464 = 15;
	volatile int32_t t99 = 6515541;

	t99 = (((x461-x462)^x463)==x464);

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

