#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 31352755637954LLU;
volatile int32_t t1 = -2352;
uint16_t x10 = 1171U;
uint32_t x19 = 2U;
static int32_t x22 = INT32_MAX;
static int64_t x25 = INT64_MIN;
volatile int32_t t6 = 479;
volatile int32_t t7 = 175;
volatile uint16_t x33 = 1U;
int8_t x35 = 1;
uint64_t x39 = 450347LLU;
int32_t t9 = -231496526;
int32_t x43 = INT32_MIN;
int32_t t11 = -2;
volatile int32_t x58 = INT32_MIN;
int32_t x60 = INT32_MIN;
uint16_t x69 = UINT16_MAX;
int8_t x73 = 22;
int32_t x74 = INT32_MAX;
uint64_t x78 = 2961536LLU;
static volatile int32_t t19 = -55377;
int64_t x92 = -1LL;
volatile uint32_t x93 = 120711318U;
static volatile uint32_t x100 = 317280418U;
uint16_t x111 = UINT16_MAX;
int32_t x112 = INT32_MAX;
int16_t x113 = -1;
uint64_t x118 = 3998LLU;
int8_t x119 = INT8_MAX;
static volatile uint32_t x123 = UINT32_MAX;
volatile int32_t t30 = -845316;
uint32_t x132 = 0U;
int32_t x137 = INT32_MIN;
volatile int16_t x148 = INT16_MAX;
int64_t x151 = INT64_MAX;
static int64_t x153 = INT64_MAX;
uint16_t x156 = 0U;
volatile int8_t x162 = -1;
int32_t t42 = -490536;
int32_t x175 = 46592854;
int16_t x181 = 0;
static volatile int32_t t45 = 1;
uint8_t x187 = 46U;
uint16_t x194 = 9U;
volatile uint8_t x196 = UINT8_MAX;
volatile int32_t t49 = 28997;
volatile uint64_t x201 = 0LLU;
volatile int32_t t50 = 10601327;
uint64_t x211 = UINT64_MAX;
int32_t t52 = 37;
volatile int32_t t54 = 425929;
volatile uint64_t x224 = UINT64_MAX;
volatile int32_t x228 = INT32_MAX;
volatile int32_t t56 = 56088980;
static int32_t x230 = -397;
int8_t x231 = INT8_MAX;
int32_t t58 = -414167977;
int16_t x237 = INT16_MAX;
int32_t x244 = 931493933;
static int32_t x257 = INT32_MIN;
int64_t x263 = 7084585768740LL;
volatile int32_t t64 = 8381;
int16_t x275 = INT16_MIN;
volatile int16_t x277 = INT16_MAX;
volatile int32_t t69 = 16996066;
int64_t x285 = -441LL;
int16_t x298 = INT16_MIN;
int64_t x299 = -14LL;
uint16_t x309 = UINT16_MAX;
int32_t x312 = 571126;
volatile int16_t x325 = INT16_MAX;
static volatile int64_t x326 = 554990336474LL;
int32_t t79 = -10493;
volatile int8_t x339 = -1;
int32_t t82 = 1;
int16_t x346 = -5;
static int8_t x347 = -1;
int64_t x349 = 4901095226LL;
int32_t x353 = INT32_MIN;
int32_t t86 = -1;
volatile int64_t x359 = -845134248LL;
int64_t x367 = INT64_MAX;
uint8_t x369 = UINT8_MAX;
int8_t x374 = -1;
int32_t x376 = 138;
volatile int32_t t94 = 0;
volatile int16_t x391 = INT16_MAX;
int64_t x400 = INT64_MIN;
volatile int32_t t97 = 57339179;


void f0(void) {
	int8_t x2 = -10;
	int32_t x3 = 50;
	static int8_t x4 = -1;
	volatile int32_t t0 = -405;

	t0 = ((x1<(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 114;
	volatile int32_t x6 = 92;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = 86715006353094784LLU;

	t1 = ((x5<(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 28U;
	volatile int16_t x11 = INT16_MIN;
	uint16_t x12 = 2U;
	volatile int32_t t2 = 0;

	t2 = ((x9<(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 457659596U;
	uint32_t x14 = 65458U;
	int32_t x15 = 22949;
	static int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -4765;

	t3 = ((x13<(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -15420LL;
	int16_t x18 = INT16_MIN;
	volatile uint8_t x20 = UINT8_MAX;
	int32_t t4 = -109180638;

	t4 = ((x17<(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static int64_t x23 = 11492322991LL;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -602;

	t5 = ((x21<(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -32678223038LL;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = -181LL;

	t6 = ((x25<(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static int64_t x30 = -15LL;
	int16_t x31 = -1;
	int16_t x32 = 2119;

	t7 = ((x29<(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 51;

	t8 = ((x33<(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 7605U;
	static volatile int32_t x38 = -1;
	int8_t x40 = INT8_MIN;

	t9 = ((x37<(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = 29U;
	uint16_t x44 = 34U;
	static int32_t t10 = 45;

	t10 = ((x41<(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 31LLU;

	t11 = ((x45<(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 127U;
	static uint64_t x50 = UINT64_MAX;
	volatile int16_t x51 = 13;
	static int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = -2;

	t12 = ((x49<(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	int16_t x55 = -1;
	volatile uint32_t x56 = 47305U;
	int32_t t13 = -92;

	t13 = ((x53<(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x59 = INT8_MIN;
	int32_t t14 = 13;

	t14 = ((x57<(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 0;
	uint8_t x62 = 0U;
	volatile int32_t x63 = INT32_MAX;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -410;

	t15 = ((x61<(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	uint32_t x66 = UINT32_MAX;
	static volatile int32_t x67 = INT32_MIN;
	static int32_t x68 = INT32_MAX;
	int32_t t16 = 119159;

	t16 = ((x65<(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	volatile uint16_t x71 = 3061U;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -1610037;

	t17 = ((x69<(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = 15924946142LL;
	uint64_t x76 = 238837122538LLU;
	int32_t t18 = -821791371;

	t18 = ((x73<(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 2018U;
	volatile int16_t x79 = -1;
	int32_t x80 = INT32_MIN;

	t19 = ((x77<(x78%x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MIN;
	uint16_t x83 = 5U;
	static int32_t x84 = 0;
	volatile int32_t t20 = 3144529;

	t20 = ((x81<(x82%x83))==x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = 188;
	uint32_t x87 = UINT32_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 5461668;

	t21 = ((x85<(x86%x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 8833U;
	volatile int32_t t22 = -1;

	t22 = ((x89<(x90%x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 27U;
	volatile uint8_t x96 = 12U;
	static volatile int32_t t23 = -596542;

	t23 = ((x93<(x94%x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	static volatile int64_t x98 = -1LL;
	volatile uint8_t x99 = UINT8_MAX;
	int32_t t24 = -12;

	t24 = ((x97<(x98%x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MIN;
	int64_t x103 = 64219LL;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t25 = -418726042;

	t25 = ((x101<(x102%x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 228LLU;
	static int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 55934680822LLU;
	volatile int32_t t26 = -2138892;

	t26 = ((x105<(x106%x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static uint16_t x110 = 38U;
	int32_t t27 = 650465153;

	t27 = ((x109<(x110%x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x114 = 8U;
	int16_t x115 = -7816;
	uint64_t x116 = 2142510306LLU;
	volatile int32_t t28 = 2;

	t28 = ((x113<(x114%x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x120 = INT8_MIN;
	static int32_t t29 = -6;

	t29 = ((x117<(x118%x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = -280LL;
	uint8_t x122 = UINT8_MAX;
	int16_t x124 = INT16_MIN;

	t30 = ((x121<(x122%x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = 14;
	int8_t x127 = 1;
	static uint64_t x128 = UINT64_MAX;
	int32_t t31 = -209547727;

	t31 = ((x125<(x126%x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MIN;
	int32_t t32 = 0;

	t32 = ((x129<(x130%x131))==x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = -715082;

	t33 = ((x133<(x134%x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = 1;
	uint32_t x139 = 2219U;
	int32_t x140 = INT32_MIN;
	int32_t t34 = 157281840;

	t34 = ((x137<(x138%x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 165708320LLU;
	int64_t x142 = -1LL;
	int16_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	int32_t t35 = 143;

	t35 = ((x141<(x142%x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 13191U;
	uint8_t x146 = 2U;
	volatile uint8_t x147 = 53U;
	int32_t t36 = -172;

	t36 = ((x145<(x146%x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 2698U;
	int16_t x150 = INT16_MAX;
	int16_t x152 = 1;
	volatile int32_t t37 = -9636555;

	t37 = ((x149<(x150%x151))==x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x154 = 0U;
	int64_t x155 = INT64_MAX;
	volatile int32_t t38 = 15495;

	t38 = ((x153<(x154%x155))==x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -20;
	int8_t x158 = 0;
	uint16_t x159 = 92U;
	static uint32_t x160 = 615U;
	volatile int32_t t39 = -12578471;

	t39 = ((x157<(x158%x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	volatile int64_t x163 = INT64_MAX;
	uint16_t x164 = 29U;
	volatile int32_t t40 = 332260;

	t40 = ((x161<(x162%x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	volatile uint32_t x166 = 349393613U;
	int8_t x167 = 1;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -359;

	t41 = ((x165<(x166%x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	int8_t x172 = 1;

	t42 = ((x169<(x170%x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 7566141787142LLU;
	uint8_t x174 = UINT8_MAX;
	int8_t x176 = -33;
	volatile int32_t t43 = 63954685;

	t43 = ((x173<(x174%x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = -1;
	static int32_t x178 = INT32_MAX;
	int16_t x179 = -99;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -25197347;

	t44 = ((x177<(x178%x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MIN;

	t45 = ((x181<(x182%x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int32_t x186 = -1;
	uint32_t x188 = 4U;
	static int32_t t46 = 415214;

	t46 = ((x185<(x186%x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1090309;
	int32_t x190 = -5023;
	uint64_t x191 = 6787305908LLU;
	int8_t x192 = 54;
	volatile int32_t t47 = -3;

	t47 = ((x189<(x190%x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 2;
	uint8_t x195 = 36U;
	int32_t t48 = 2530259;

	t48 = ((x193<(x194%x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -14;
	int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 113U;
	static int8_t x200 = 29;

	t49 = ((x197<(x198%x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	static int64_t x203 = INT64_MIN;
	uint16_t x204 = 17361U;

	t50 = ((x201<(x202%x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	static int32_t x207 = -1;
	volatile int32_t x208 = INT32_MIN;
	static int32_t t51 = -1;

	t51 = ((x205<(x206%x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = -252103751335480LL;
	uint32_t x210 = UINT32_MAX;
	int32_t x212 = -10;

	t52 = ((x209<(x210%x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 1U;
	static int64_t x214 = -3701455036006357LL;
	int32_t x215 = INT32_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -48;

	t53 = ((x213<(x214%x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int64_t x218 = 43LL;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 4709868U;

	t54 = ((x217<(x218%x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 386550U;
	int64_t x222 = INT64_MIN;
	volatile int64_t x223 = INT64_MAX;
	int32_t t55 = -56399;

	t55 = ((x221<(x222%x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 73U;
	int16_t x226 = INT16_MIN;
	int16_t x227 = -1;

	t56 = ((x225<(x226%x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 3350488U;
	int64_t x232 = 225778093178535238LL;
	static int32_t t57 = -63846;

	t57 = ((x229<(x230%x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 7U;
	uint32_t x234 = 8777U;
	static int8_t x235 = INT8_MAX;
	int64_t x236 = INT64_MIN;

	t58 = ((x233<(x234%x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = -6;
	int64_t x239 = 9511LL;
	uint64_t x240 = 118184161177866599LLU;
	static volatile int32_t t59 = -22347;

	t59 = ((x237<(x238%x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	static int16_t x243 = -52;
	volatile int32_t t60 = 5209;

	t60 = ((x241<(x242%x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MAX;
	uint64_t x250 = 415305445LLU;
	int64_t x251 = -4218894LL;
	static uint64_t x252 = 291227661LLU;
	volatile int32_t t61 = -2225;

	t61 = ((x249<(x250%x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = 424;
	static int32_t x254 = INT32_MIN;
	static volatile uint8_t x255 = 15U;
	uint8_t x256 = 3U;
	int32_t t62 = 26249;

	t62 = ((x253<(x254%x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 745U;
	volatile int16_t x260 = -1;
	int32_t t63 = 376466680;

	t63 = ((x257<(x258%x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 2U;
	int64_t x262 = 67652767403076931LL;
	static volatile uint64_t x264 = UINT64_MAX;

	t64 = ((x261<(x262%x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 16385118U;
	int64_t x266 = 3125228163368LL;
	static int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t65 = 3364;

	t65 = ((x265<(x266%x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = 224963503;
	static int32_t x270 = -2431475;
	uint16_t x271 = 1U;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t66 = -190;

	t66 = ((x269<(x270%x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = -1;
	volatile uint32_t x274 = UINT32_MAX;
	int16_t x276 = 2;
	int32_t t67 = 329247;

	t67 = ((x273<(x274%x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x278 = UINT64_MAX;
	volatile int16_t x279 = -183;
	uint32_t x280 = UINT32_MAX;
	int32_t t68 = 268076593;

	t68 = ((x277<(x278%x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 5U;
	static int64_t x282 = -1LL;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;

	t69 = ((x281<(x282%x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = 8;
	int64_t x287 = INT64_MAX;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t70 = 11023569;

	t70 = ((x285<(x286%x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MAX;
	int32_t t71 = 77;

	t71 = ((x289<(x290%x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = 447567238654596LLU;
	static uint32_t x300 = 92558U;
	int32_t t72 = 17560;

	t72 = ((x297<(x298%x299))==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 6U;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = -2;
	volatile int32_t t73 = -923;

	t73 = ((x301<(x302%x303))==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = 44627LL;
	int64_t x306 = INT64_MIN;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t74 = 3890832;

	t74 = ((x305<(x306%x307))==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x310 = INT32_MIN;
	static int8_t x311 = 14;
	volatile int32_t t75 = 535443;

	t75 = ((x309<(x310%x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 3U;
	int64_t x314 = 304435728876LL;
	static uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 1LLU;
	static int32_t t76 = 111936;

	t76 = ((x313<(x314%x315))==x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 6952U;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 14U;
	int32_t t77 = -15962593;

	t77 = ((x317<(x318%x319))==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = -863;
	volatile int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 96349268941LLU;
	int32_t t78 = -1;

	t78 = ((x321<(x322%x323))==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x327 = -51;
	static uint32_t x328 = 223U;

	t79 = ((x325<(x326%x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x329 = -330373;
	int8_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = 10855360865LLU;
	int32_t t80 = -32;

	t80 = ((x329<(x330%x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MAX;
	int64_t x335 = 507067525LL;
	uint64_t x336 = 23894317LLU;
	int32_t t81 = 89221;

	t81 = ((x333<(x334%x335))==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x337 = -18;
	static uint32_t x338 = 9U;
	volatile int64_t x340 = INT64_MIN;

	t82 = ((x337<(x338%x339))==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	volatile int8_t x343 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	int32_t t83 = 95800966;

	t83 = ((x341<(x342%x343))==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t84 = 0;

	t84 = ((x345<(x346%x347))==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = 1;
	uint8_t x351 = 48U;
	int8_t x352 = INT8_MIN;
	int32_t t85 = -568244653;

	t85 = ((x349<(x350%x351))==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x354 = -826;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = 154693734LLU;

	t86 = ((x353<(x354%x355))==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x357 = 8U;
	static int32_t x358 = 359;
	uint16_t x360 = UINT16_MAX;
	int32_t t87 = -826;

	t87 = ((x357<(x358%x359))==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = 101570LL;
	uint64_t x362 = 308752241LLU;
	int8_t x363 = -45;
	int32_t x364 = INT32_MIN;
	int32_t t88 = 28;

	t88 = ((x361<(x362%x363))==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = -1;
	volatile uint32_t x366 = 2956385U;
	static uint8_t x368 = 1U;
	volatile int32_t t89 = -273390;

	t89 = ((x365<(x366%x367))==x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t90 = -229373;

	t90 = ((x369<(x370%x371))==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 0U;
	volatile int64_t x375 = INT64_MIN;
	int32_t t91 = -5;

	t91 = ((x373<(x374%x375))==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x377 = INT32_MIN;
	int32_t x378 = -25606257;
	uint32_t x379 = 1871U;
	uint32_t x380 = 10U;
	static int32_t t92 = -6161756;

	t92 = ((x377<(x378%x379))==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x381 = 17530LLU;
	static int32_t x382 = INT32_MAX;
	static int64_t x383 = -1LL;
	volatile uint64_t x384 = UINT64_MAX;
	volatile int32_t t93 = -466383753;

	t93 = ((x381<(x382%x383))==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 618U;
	uint8_t x386 = 18U;
	static volatile uint16_t x387 = 2U;
	int16_t x388 = INT16_MAX;

	t94 = ((x385<(x386%x387))==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x389 = 168164U;
	int16_t x390 = -1;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t95 = -3672238;

	t95 = ((x389<(x390%x391))==x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 5U;
	static uint8_t x394 = 14U;
	int32_t x395 = -1;
	volatile uint8_t x396 = UINT8_MAX;
	static volatile int32_t t96 = 96;

	t96 = ((x393<(x394%x395))==x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 85;
	uint64_t x398 = UINT64_MAX;
	volatile int16_t x399 = INT16_MAX;

	t97 = ((x397<(x398%x399))==x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = -9;
	uint32_t x402 = 2U;
	int8_t x403 = -42;
	uint16_t x404 = 635U;
	volatile int32_t t98 = 931374409;

	t98 = ((x401<(x402%x403))==x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x405 = INT8_MAX;
	static volatile int32_t x406 = INT32_MAX;
	static volatile uint64_t x407 = UINT64_MAX;
	int64_t x408 = 1620475703367LL;
	static volatile int32_t t99 = -41904699;

	t99 = ((x405<(x406%x407))==x408);

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

