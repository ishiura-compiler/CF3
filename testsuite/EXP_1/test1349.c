#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 13136;
int32_t t1 = 326530;
int32_t x12 = 0;
uint16_t x24 = UINT16_MAX;
volatile int32_t x25 = INT32_MAX;
int16_t x28 = -143;
uint8_t x31 = 30U;
volatile int32_t x36 = INT32_MAX;
int32_t x37 = 5751;
int32_t x38 = -1034580001;
static uint16_t x43 = UINT16_MAX;
uint16_t x45 = UINT16_MAX;
int16_t x54 = -1;
static volatile int16_t x57 = -1;
int8_t x63 = -30;
int32_t x65 = INT32_MIN;
uint64_t x82 = UINT64_MAX;
int8_t x84 = INT8_MAX;
static int8_t x85 = -1;
uint32_t x86 = 991905276U;
int32_t t21 = 53575;
static volatile uint32_t x90 = 29U;
volatile int32_t t22 = 518637;
int16_t x93 = -1;
volatile int8_t x94 = INT8_MIN;
int16_t x96 = -4;
static uint16_t x99 = 23U;
int32_t t24 = 30631009;
int64_t x102 = INT64_MAX;
int64_t x104 = INT64_MIN;
int32_t t25 = 59449335;
uint32_t x107 = UINT32_MAX;
int32_t x113 = INT32_MAX;
int64_t x114 = INT64_MIN;
volatile int8_t x115 = INT8_MIN;
volatile int32_t t28 = 681386;
static int8_t x118 = 18;
int64_t x121 = INT64_MAX;
uint16_t x125 = 14389U;
uint16_t x127 = 11U;
int32_t x131 = INT32_MAX;
int16_t x139 = -1;
int8_t x140 = -20;
int8_t x146 = INT8_MAX;
int64_t x151 = -47258438LL;
int64_t x153 = INT64_MAX;
volatile uint16_t x154 = 8982U;
volatile int32_t x156 = -26833018;
int64_t x159 = INT64_MIN;
volatile int32_t t41 = 0;
int32_t x170 = INT32_MIN;
int8_t x172 = INT8_MIN;
volatile int32_t t42 = 1784;
uint8_t x173 = UINT8_MAX;
uint8_t x174 = 52U;
int8_t x179 = INT8_MAX;
int8_t x183 = 16;
int16_t x184 = INT16_MAX;
int64_t x201 = -1LL;
int16_t x210 = INT16_MAX;
uint8_t x226 = 0U;
int64_t x228 = 3LL;
int32_t x232 = -1;
int8_t x233 = INT8_MIN;
int16_t x240 = INT16_MAX;
int16_t x249 = INT16_MIN;
volatile int32_t x250 = -1;
int64_t x253 = -331LL;
static int64_t x260 = INT64_MAX;
int32_t t65 = 177678;
uint16_t x269 = UINT16_MAX;
volatile int8_t x271 = INT8_MIN;
volatile int32_t x280 = -1;
static uint64_t x287 = 6LLU;
int32_t x289 = -525216913;
volatile int32_t t72 = 4;
int32_t t73 = 575968084;
int32_t x297 = -88;
int32_t x304 = INT32_MIN;
int8_t x305 = -2;
uint64_t x306 = 2LLU;
int16_t x307 = 2;
static int16_t x313 = -1;
int8_t x325 = INT8_MIN;
int32_t x332 = -1;
static uint32_t x342 = 298625U;
int16_t x344 = 1;
int32_t t85 = 182183167;
int64_t x347 = 1034501933687LL;
int64_t x351 = 240364753158291234LL;
volatile int32_t t87 = 24143007;
static uint8_t x353 = UINT8_MAX;
int8_t x355 = INT8_MAX;
static volatile int8_t x371 = INT8_MIN;
volatile int16_t x380 = INT16_MIN;
int32_t t94 = 884222;
int8_t x387 = 27;
uint16_t x390 = 0U;
static int16_t x393 = -1;
int32_t x397 = INT32_MIN;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	static int32_t x2 = 1521;
	int16_t x3 = -153;
	volatile uint32_t x4 = 506651U;
	volatile int32_t t0 = 2588;

	t0 = (((x1==x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = UINT16_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (((x5==x6)^x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -14;
	int64_t x10 = -1LL;
	static uint16_t x11 = 4661U;
	int32_t t2 = -5;

	t2 = (((x9==x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 1U;
	uint16_t x14 = 1U;
	volatile int64_t x15 = -1LL;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 4479;

	t3 = (((x13==x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = 230572;
	static int32_t x19 = INT32_MAX;
	static volatile uint32_t x20 = 1935469U;
	volatile int32_t t4 = 211;

	t4 = (((x17==x18)^x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 4U;
	uint64_t x22 = 43640727498566LLU;
	int64_t x23 = INT64_MAX;
	static volatile int32_t t5 = 4079274;

	t5 = (((x21==x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MIN;
	int32_t t6 = -408150;

	t6 = (((x25==x26)^x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 3;
	int16_t x30 = INT16_MAX;
	uint8_t x32 = UINT8_MAX;
	static volatile int32_t t7 = -16527304;

	t7 = (((x29==x30)^x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 5;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 79931;
	volatile int32_t t8 = -179;

	t8 = (((x33==x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x39 = 477519698LLU;
	int64_t x40 = -463528LL;
	static int32_t t9 = -330;

	t9 = (((x37==x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 79612;

	t10 = (((x41==x42)^x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 509653U;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -14539906;

	t11 = (((x45==x46)^x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	volatile uint16_t x51 = UINT16_MAX;
	volatile int16_t x52 = INT16_MIN;
	int32_t t12 = 250179;

	t12 = (((x49==x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 806136863LL;
	int32_t x55 = 5779;
	static uint32_t x56 = 337U;
	int32_t t13 = 2888;

	t13 = (((x53==x54)^x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = -114;
	static uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -232872;

	t14 = (((x57==x58)^x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -524;
	static int16_t x62 = -1;
	static uint32_t x64 = 326U;
	int32_t t15 = -938282724;

	t15 = (((x61==x62)^x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 0;
	int8_t x67 = INT8_MAX;
	int64_t x68 = 292LL;
	volatile int32_t t16 = 724;

	t16 = (((x65==x66)^x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 2739U;
	volatile int16_t x70 = 583;
	int32_t x71 = INT32_MIN;
	volatile uint64_t x72 = 3805110LLU;
	volatile int32_t t17 = -79;

	t17 = (((x69==x70)^x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static volatile int32_t x74 = 126858;
	volatile int32_t x75 = 130190303;
	static uint16_t x76 = UINT16_MAX;
	int32_t t18 = -1535;

	t18 = (((x73==x74)^x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 5LL;
	int8_t x78 = INT8_MAX;
	uint16_t x79 = 74U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 425037270;

	t19 = (((x77==x78)^x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	int32_t x83 = INT32_MIN;
	int32_t t20 = 1463;

	t20 = (((x81==x82)^x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x87 = 11506183286LLU;
	int16_t x88 = INT16_MIN;

	t21 = (((x85==x86)^x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	uint32_t x91 = UINT32_MAX;
	static int64_t x92 = INT64_MIN;

	t22 = (((x89==x90)^x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = INT32_MIN;
	volatile int32_t t23 = 1;

	t23 = (((x93==x94)^x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x98 = -1;
	int8_t x100 = INT8_MIN;

	t24 = (((x97==x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 40U;
	uint32_t x103 = 53U;

	t25 = (((x101==x102)^x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = -1LL;
	int8_t x108 = -1;
	static int32_t t26 = -23670492;

	t26 = (((x105==x106)^x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	volatile uint16_t x111 = 9074U;
	int16_t x112 = -8089;
	static volatile int32_t t27 = 46152;

	t27 = (((x109==x110)^x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x116 = INT64_MIN;

	t28 = (((x113==x114)^x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x119 = -37294176;
	int32_t x120 = -160293811;
	int32_t t29 = 4586;

	t29 = (((x117==x118)^x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 849077129U;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;
	volatile int32_t t30 = 366601949;

	t30 = (((x121==x122)^x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	static volatile int32_t x128 = -23185;
	int32_t t31 = 251;

	t31 = (((x125==x126)^x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 103U;
	static int16_t x130 = 25;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 94172;

	t32 = (((x129==x130)^x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 12U;
	int64_t x134 = -1LL;
	static volatile int64_t x135 = INT64_MIN;
	int32_t x136 = -139;
	volatile int32_t t33 = -2033255;

	t33 = (((x133==x134)^x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 3994375;
	int64_t x138 = INT64_MIN;
	static volatile int32_t t34 = 28;

	t34 = (((x137==x138)^x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -3;
	int64_t x142 = 48302350023687LL;
	volatile int32_t x143 = INT32_MIN;
	uint32_t x144 = 4485567U;
	static volatile int32_t t35 = -333940;

	t35 = (((x141==x142)^x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	static uint64_t x147 = 104948LLU;
	static int32_t x148 = -18;
	int32_t t36 = 79;

	t36 = (((x145==x146)^x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	uint64_t x150 = 16261LLU;
	volatile uint64_t x152 = 1457223318209691666LLU;
	static volatile int32_t t37 = 1330;

	t37 = (((x149==x150)^x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x155 = -1LL;
	int32_t t38 = 36;

	t38 = (((x153==x154)^x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 167U;
	int16_t x158 = -1;
	static int8_t x160 = INT8_MIN;
	static int32_t t39 = 3;

	t39 = (((x157==x158)^x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 50;
	int64_t x162 = 35080998196549LL;
	int32_t x163 = -18204;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 103277;

	t40 = (((x161==x162)^x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static int32_t x166 = 14;
	volatile int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;

	t41 = (((x165==x166)^x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -73;
	int64_t x171 = INT64_MIN;

	t42 = (((x169==x170)^x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = 2;
	volatile int32_t x176 = -1;
	static volatile int32_t t43 = -12113845;

	t43 = (((x173==x174)^x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	volatile int32_t x178 = INT32_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -452904;

	t44 = (((x177==x178)^x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = 43031415632239441LL;
	static volatile int16_t x182 = 10;
	volatile int32_t t45 = 265;

	t45 = (((x181==x182)^x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	static uint16_t x186 = 5U;
	volatile int32_t x187 = 17784594;
	int16_t x188 = 14883;
	static int32_t t46 = 83148520;

	t46 = (((x185==x186)^x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 0;
	static uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 0U;
	static int8_t x192 = INT8_MAX;
	int32_t t47 = -1594785;

	t47 = (((x189==x190)^x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 7275;
	uint8_t x194 = 61U;
	int64_t x195 = INT64_MAX;
	static uint64_t x196 = 65866499102763LLU;
	int32_t t48 = 0;

	t48 = (((x193==x194)^x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -37;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	static int16_t x200 = -1;
	volatile int32_t t49 = 30733575;

	t49 = (((x197==x198)^x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MAX;
	uint32_t x203 = 0U;
	uint64_t x204 = 28LLU;
	volatile int32_t t50 = 433470;

	t50 = (((x201==x202)^x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int32_t x206 = 345011045;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 1U;
	volatile int32_t t51 = 170284;

	t51 = (((x205==x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 2;
	static uint32_t x211 = UINT32_MAX;
	static volatile int32_t x212 = INT32_MAX;
	static volatile int32_t t52 = 58558;

	t52 = (((x209==x210)^x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 7LL;
	uint64_t x214 = 117304LLU;
	static int8_t x215 = -1;
	static int16_t x216 = -43;
	static volatile int32_t t53 = -51012630;

	t53 = (((x213==x214)^x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = -5324;
	int16_t x218 = -1;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = 1U;
	static volatile int32_t t54 = 1671;

	t54 = (((x217==x218)^x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 98510LL;
	static volatile int8_t x222 = -1;
	int8_t x223 = -1;
	volatile uint64_t x224 = 238947877484828LLU;
	int32_t t55 = 32008;

	t55 = (((x221==x222)^x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int64_t x227 = INT64_MIN;
	volatile int32_t t56 = -30;

	t56 = (((x225==x226)^x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int8_t x230 = -1;
	uint16_t x231 = 10354U;
	int32_t t57 = -213800;

	t57 = (((x229==x230)^x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x234 = 42U;
	uint16_t x235 = UINT16_MAX;
	volatile uint64_t x236 = 696004070331298954LLU;
	int32_t t58 = -1;

	t58 = (((x233==x234)^x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -271253726065475270LL;
	int32_t x238 = INT32_MIN;
	static uint8_t x239 = UINT8_MAX;
	int32_t t59 = -91;

	t59 = (((x237==x238)^x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 969692471U;
	static volatile uint16_t x242 = 6U;
	static int64_t x243 = 964181290564LL;
	static int8_t x244 = -45;
	int32_t t60 = -7971147;

	t60 = (((x241==x242)^x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 1504U;
	static volatile uint32_t x246 = UINT32_MAX;
	uint16_t x247 = UINT16_MAX;
	static volatile int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -20862653;

	t61 = (((x245==x246)^x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x251 = UINT8_MAX;
	static int8_t x252 = 5;
	int32_t t62 = 1;

	t62 = (((x249==x250)^x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	volatile int16_t x255 = -504;
	int16_t x256 = 2;
	volatile int32_t t63 = -36399;

	t63 = (((x253==x254)^x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 132655U;
	static uint8_t x258 = UINT8_MAX;
	int16_t x259 = INT16_MIN;
	volatile int32_t t64 = -1;

	t64 = (((x257==x258)^x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -8190;
	uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 5216U;
	static uint32_t x264 = 155976U;

	t65 = (((x261==x262)^x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = -1;
	uint8_t x267 = 3U;
	volatile int32_t x268 = -1;
	int32_t t66 = 106042;

	t66 = (((x265==x266)^x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x270 = -37557117785585LL;
	int8_t x272 = 14;
	volatile int32_t t67 = -664;

	t67 = (((x269==x270)^x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 242306560980LLU;
	int16_t x274 = 62;
	int32_t x275 = -1;
	uint32_t x276 = 387933804U;
	static volatile int32_t t68 = 20880;

	t68 = (((x273==x274)^x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 0U;
	int8_t x278 = 4;
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = 4060641;

	t69 = (((x277==x278)^x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 526087605LLU;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = UINT16_MAX;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 123013323;

	t70 = (((x281==x282)^x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	int32_t x288 = -5000843;
	volatile int32_t t71 = 1;

	t71 = (((x285==x286)^x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x290 = 1LLU;
	uint32_t x291 = 146U;
	static int8_t x292 = 1;

	t72 = (((x289==x290)^x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -6;
	uint8_t x294 = 59U;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 2124821511U;

	t73 = (((x293==x294)^x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = 65247728;
	int64_t x300 = -1339LL;
	int32_t t74 = -2868237;

	t74 = (((x297==x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MAX;
	uint16_t x302 = 14854U;
	int8_t x303 = INT8_MAX;
	volatile int32_t t75 = -1044958;

	t75 = (((x301==x302)^x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x308 = -3898;
	int32_t t76 = -374216;

	t76 = (((x305==x306)^x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 216U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -27645278799811LL;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 4;

	t77 = (((x309==x310)^x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 28899;

	t78 = (((x313==x314)^x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	static int32_t x319 = -6;
	static int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = 2745;

	t79 = (((x317==x318)^x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -64;
	volatile int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 0U;
	volatile int32_t t80 = 47;

	t80 = (((x321==x322)^x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x326 = 5760391U;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = 3;

	t81 = (((x325==x326)^x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 105956602632LL;
	static int16_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int32_t t82 = 425339;

	t82 = (((x329==x330)^x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	static volatile uint8_t x334 = 3U;
	volatile int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = 1U;
	volatile int32_t t83 = -492;

	t83 = (((x333==x334)^x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = -884;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	volatile int16_t x340 = -1;
	int32_t t84 = 517303;

	t84 = (((x337==x338)^x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x343 = UINT16_MAX;

	t85 = (((x341==x342)^x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = 1055;
	int32_t x348 = -1;
	static int32_t t86 = -341;

	t86 = (((x345==x346)^x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = 64317457;
	int64_t x352 = INT64_MIN;

	t87 = (((x349==x350)^x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	int16_t x356 = -84;
	volatile int32_t t88 = -1;

	t88 = (((x353==x354)^x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 11U;
	volatile int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = -100849052LL;
	static volatile int32_t t89 = -635854061;

	t89 = (((x357==x358)^x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MAX;
	static volatile int32_t x364 = -1;
	volatile int32_t t90 = 2441974;

	t90 = (((x361==x362)^x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1U;
	int32_t x366 = INT32_MAX;
	int32_t x367 = -1;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 1459;

	t91 = (((x365==x366)^x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -2LL;
	uint16_t x370 = UINT16_MAX;
	int64_t x372 = 5939932733723LL;
	volatile int32_t t92 = -1;

	t92 = (((x369==x370)^x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MAX;
	volatile int32_t x375 = -15051;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = -18;

	t93 = (((x373==x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	static volatile int32_t x379 = INT32_MIN;

	t94 = (((x377==x378)^x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	int16_t x382 = -1791;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = -384968;

	t95 = (((x381==x382)^x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 0U;
	int32_t x386 = 2183;
	int16_t x388 = -1054;
	int32_t t96 = -1711547;

	t96 = (((x385==x386)^x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int8_t x391 = INT8_MAX;
	int16_t x392 = 0;
	volatile int32_t t97 = -2;

	t97 = (((x389==x390)^x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x394 = 41928132U;
	uint32_t x395 = 1551U;
	int64_t x396 = -2145822312426LL;
	int32_t t98 = 76335177;

	t98 = (((x393==x394)^x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x398 = 32U;
	static uint16_t x399 = UINT16_MAX;
	volatile int32_t x400 = INT32_MAX;
	int32_t t99 = 7440076;

	t99 = (((x397==x398)^x399)<=x400);

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

