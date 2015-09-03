#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t1 = 16779U;
int32_t x12 = INT32_MIN;
int16_t x14 = INT16_MAX;
volatile int64_t t3 = 468251LL;
uint64_t t7 = 283514080398340075LLU;
int32_t t8 = -5;
static int16_t x38 = 509;
volatile int32_t t10 = 1707365;
int8_t x45 = INT8_MIN;
int16_t x47 = -653;
int32_t x67 = INT32_MIN;
uint64_t x70 = 26005713109353LLU;
int64_t x76 = -236529987574670LL;
static int16_t x79 = -1;
uint64_t t19 = 108LLU;
volatile int64_t x83 = INT64_MAX;
static uint16_t x84 = 1U;
int16_t x88 = -16034;
volatile uint64_t t21 = 2LLU;
volatile int8_t x90 = INT8_MIN;
uint8_t x96 = 2U;
int32_t t23 = 698;
int64_t x98 = -6932819LL;
volatile int8_t x107 = INT8_MIN;
int64_t x114 = -1LL;
uint16_t x122 = 30293U;
volatile int32_t x123 = INT32_MIN;
uint64_t x124 = 574136600LLU;
uint16_t x126 = 4U;
int32_t x127 = 1;
int16_t x128 = INT16_MAX;
static uint64_t x137 = 161590095981157LLU;
int16_t x141 = -5;
static int64_t x146 = 43333206936LL;
volatile int32_t t34 = 1708182;
int32_t x149 = INT32_MAX;
uint64_t x152 = 41275LLU;
int8_t x161 = INT8_MIN;
static int32_t t39 = -448214;
int8_t x178 = INT8_MIN;
int32_t t42 = 8081010;
static int64_t t43 = 39239287960959588LL;
uint32_t x185 = 32569014U;
static uint16_t x187 = 2245U;
volatile uint32_t t46 = 2402223U;
int32_t x197 = INT32_MIN;
static int64_t x199 = INT64_MIN;
static uint8_t x201 = 1U;
uint64_t x206 = 4673LLU;
int8_t x207 = INT8_MIN;
static int32_t x213 = -1;
int64_t x221 = INT64_MIN;
uint8_t x222 = UINT8_MAX;
static int32_t t53 = 6;
volatile uint32_t x226 = 8U;
int64_t x228 = 9341455706291LL;
int16_t x229 = 227;
static volatile int64_t x232 = INT64_MIN;
static int64_t t55 = -12064335165171082LL;
uint16_t x233 = UINT16_MAX;
static uint32_t x239 = UINT32_MAX;
volatile int64_t t57 = -12526535414157LL;
int8_t x242 = -1;
static int64_t x243 = INT64_MIN;
uint64_t t58 = 354469LLU;
int32_t x245 = -1165;
static uint64_t x247 = UINT64_MAX;
static int8_t x248 = INT8_MIN;
static int8_t x252 = -1;
volatile int16_t x253 = -1664;
volatile int16_t x256 = INT16_MIN;
int64_t x257 = INT64_MIN;
int16_t x264 = INT16_MAX;
static uint8_t x266 = 63U;
volatile int64_t x268 = INT64_MIN;
int8_t x274 = INT8_MAX;
int32_t x280 = INT32_MAX;
volatile int32_t t67 = -1488173;
int32_t x291 = -1;
int16_t x293 = INT16_MIN;
static int64_t x294 = -44129699LL;
uint16_t x295 = 170U;
int64_t t73 = 176751032223411LL;
int16_t x308 = 473;
int8_t x312 = INT8_MAX;
int64_t x314 = INT64_MAX;
uint64_t x316 = 1011986752817355502LLU;
int32_t x318 = 0;
static int64_t t77 = 14350607079522605LL;
uint8_t x325 = 31U;
int16_t x344 = 21;
uint16_t x345 = 0U;
volatile int16_t x346 = -1;
volatile int64_t t84 = 42872083329540254LL;
int64_t t86 = 2LL;
int8_t x366 = -1;
int32_t x369 = 7;
volatile int8_t x370 = INT8_MIN;
static uint64_t x377 = 1277416611LLU;
volatile int16_t x383 = -1;
int64_t x401 = INT64_MAX;
int32_t x404 = INT32_MIN;
volatile int32_t x406 = INT32_MIN;
volatile int64_t x409 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	int8_t x3 = 1;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -6225626064409913LL;

	t0 = (((x1<x2)&x3)%x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = -11459213152192LL;
	static volatile uint32_t x7 = 71447U;
	uint32_t x8 = UINT32_MAX;

	t1 = (((x5<x6)&x7)%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 25U;
	int32_t x10 = INT32_MIN;
	static uint16_t x11 = 2833U;
	volatile int32_t t2 = -1334421;

	t2 = (((x9<x10)&x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static int64_t x15 = INT64_MAX;
	volatile int16_t x16 = INT16_MAX;

	t3 = (((x13<x14)&x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -899;
	int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -24762616398LL;

	t4 = (((x17<x18)&x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x22 = INT16_MIN;
	uint8_t x23 = 36U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -408766;

	t5 = (((x21<x22)&x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = 1;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -214323;

	t6 = (((x25<x26)&x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 7395;
	int32_t x30 = -1790;
	volatile uint16_t x31 = 686U;
	uint64_t x32 = UINT64_MAX;

	t7 = (((x29<x30)&x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 273U;
	int16_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 1U;

	t8 = (((x33<x34)&x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	static uint8_t x39 = 29U;
	static int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -31870929;

	t9 = (((x37<x38)&x39)%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int32_t x42 = -48274;
	uint16_t x43 = 25U;
	int8_t x44 = INT8_MIN;

	t10 = (((x41<x42)&x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	uint8_t x48 = 3U;
	static int32_t t11 = -20;

	t11 = (((x45<x46)&x47)%x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	static int32_t x50 = -1;
	volatile uint32_t x51 = 38816U;
	uint32_t x52 = 816274243U;
	volatile uint32_t t12 = 6882U;

	t12 = (((x49<x50)&x51)%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -83;
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = -1;
	volatile int64_t t13 = -3LL;

	t13 = (((x53<x54)&x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 1LL;
	volatile int64_t x58 = -899855195383809185LL;
	int32_t x59 = -1;
	static int64_t x60 = INT64_MAX;
	static volatile int64_t t14 = 564255536783345685LL;

	t14 = (((x57<x58)&x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int64_t x63 = 1108132611LL;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -1277004LL;

	t15 = (((x61<x62)&x63)%x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int8_t x66 = -1;
	static uint8_t x68 = 76U;
	volatile int32_t t16 = -359739508;

	t16 = (((x65<x66)&x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 20LL;
	uint8_t x71 = UINT8_MAX;
	static uint8_t x72 = 1U;
	int32_t t17 = 23;

	t17 = (((x69<x70)&x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	uint64_t x75 = 111744591920173LLU;
	uint64_t t18 = 179LLU;

	t18 = (((x73<x74)&x75)%x76);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 113218161365099222LLU;
	int32_t x78 = INT32_MAX;
	uint64_t x80 = UINT64_MAX;

	t19 = (((x77<x78)&x79)%x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	int8_t x82 = -1;
	int64_t t20 = 456773142LL;

	t20 = (((x81<x82)&x83)%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = 61910821969334LL;
	static uint64_t x87 = UINT64_MAX;

	t21 = (((x85<x86)&x87)%x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x91 = -2701640;
	int64_t x92 = -13872295525LL;
	int64_t t22 = -256072350693296090LL;

	t22 = (((x89<x90)&x91)%x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;

	t23 = (((x93<x94)&x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 59184579;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = -438;
	volatile int32_t t24 = -1;

	t24 = (((x97<x98)&x99)%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 446423674;

	t25 = (((x101<x102)&x103)%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	static uint64_t x108 = 186592998566LLU;
	volatile uint64_t t26 = 2004LLU;

	t26 = (((x105<x106)&x107)%x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	uint8_t x115 = 73U;
	static int64_t x116 = -1LL;
	static int64_t t27 = -49301LL;

	t27 = (((x113<x114)&x115)%x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	static uint64_t t28 = 1LLU;

	t28 = (((x121<x122)&x123)%x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 42620887;
	int32_t t29 = -1712;

	t29 = (((x125<x126)&x127)%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 0U;
	static int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile uint64_t x132 = 18802LLU;
	static volatile uint64_t t30 = 31LLU;

	t30 = (((x129<x130)&x131)%x132);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = INT16_MIN;
	static volatile int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = INT8_MAX;
	volatile uint64_t t31 = 3508500005584LLU;

	t31 = (((x133<x134)&x135)%x136);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x138 = INT32_MIN;
	int64_t x139 = -2032412LL;
	static uint64_t x140 = 4288LLU;
	uint64_t t32 = 16316937LLU;

	t32 = (((x137<x138)&x139)%x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MAX;
	int64_t t33 = 175402696LL;

	t33 = (((x141<x142)&x143)%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = UINT64_MAX;
	static uint16_t x147 = 9678U;
	int8_t x148 = INT8_MIN;

	t34 = (((x145<x146)&x147)%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x150 = -1;
	int64_t x151 = -51406106287LL;
	volatile uint64_t t35 = 210667LLU;

	t35 = (((x149<x150)&x151)%x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 11LLU;
	int16_t x154 = INT16_MIN;
	static int8_t x155 = INT8_MIN;
	int32_t x156 = -1;
	int32_t t36 = -20299848;

	t36 = (((x153<x154)&x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	volatile uint64_t x158 = 728275LLU;
	static int32_t x159 = -51977;
	uint16_t x160 = 127U;
	volatile int32_t t37 = 243368;

	t37 = (((x157<x158)&x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x162 = 15U;
	int32_t x163 = -352091;
	int16_t x164 = 3894;
	int32_t t38 = 1366937;

	t38 = (((x161<x162)&x163)%x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 955835405043697LLU;
	int16_t x166 = 49;
	volatile int16_t x167 = 0;
	static int32_t x168 = INT32_MIN;

	t39 = (((x165<x166)&x167)%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 9U;
	static volatile int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	volatile int32_t x172 = 1;
	int32_t t40 = -140193782;

	t40 = (((x169<x170)&x171)%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	static volatile uint64_t x174 = 160374763462LLU;
	uint8_t x175 = 5U;
	uint16_t x176 = 1U;
	volatile int32_t t41 = 18134;

	t41 = (((x173<x174)&x175)%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 955;
	int32_t x179 = 6;
	int32_t x180 = INT32_MIN;

	t42 = (((x177<x178)&x179)%x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = -8;
	uint8_t x182 = UINT8_MAX;
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = -4490690LL;

	t43 = (((x181<x182)&x183)%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x186 = 0U;
	int8_t x188 = -1;
	volatile int32_t t44 = -1947730;

	t44 = (((x185<x186)&x187)%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = -2;
	static int8_t x191 = 0;
	volatile uint8_t x192 = 9U;
	volatile int32_t t45 = 1057;

	t45 = (((x189<x190)&x191)%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -1;
	uint32_t x194 = 3595976U;
	int8_t x195 = INT8_MIN;
	uint32_t x196 = 6751513U;

	t46 = (((x193<x194)&x195)%x196);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x198 = INT16_MIN;
	static int32_t x200 = INT32_MIN;
	static int64_t t47 = 470LL;

	t47 = (((x197<x198)&x199)%x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = 1;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = 63;
	int32_t t48 = 88056900;

	t48 = (((x201<x202)&x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x208 = -1;
	int32_t t49 = 3;

	t49 = (((x205<x206)&x207)%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = 6134759540083LLU;
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MAX;
	int16_t x212 = -1;
	volatile int32_t t50 = 406793;

	t50 = (((x209<x210)&x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = INT16_MAX;
	static int32_t x215 = INT32_MAX;
	static int16_t x216 = 88;
	volatile int32_t t51 = -2383;

	t51 = (((x213<x214)&x215)%x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = 3U;
	int64_t t52 = -25518998LL;

	t52 = (((x217<x218)&x219)%x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x223 = INT8_MIN;
	int16_t x224 = -1;

	t53 = (((x221<x222)&x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = 685617995384120LL;
	int64_t x227 = -43473407950LL;
	volatile int64_t t54 = 2051057LL;

	t54 = (((x225<x226)&x227)%x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;

	t55 = (((x229<x230)&x231)%x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = 8416512690LL;
	volatile int8_t x235 = 17;
	uint32_t x236 = 24522792U;
	uint32_t t56 = 66775U;

	t56 = (((x233<x234)&x235)%x236);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -16LL;
	uint8_t x238 = 0U;
	static int64_t x240 = -1LL;

	t57 = (((x237<x238)&x239)%x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static uint64_t x244 = 5383713109545LLU;

	t58 = (((x241<x242)&x243)%x244);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x246 = 3LLU;
	static volatile uint64_t t59 = 3LLU;

	t59 = (((x245<x246)&x247)%x248);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MAX;
	int64_t x251 = -1LL;
	static int64_t t60 = -1749742229LL;

	t60 = (((x249<x250)&x251)%x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x254 = 0U;
	static int8_t x255 = INT8_MAX;
	static volatile int32_t t61 = 97841063;

	t61 = (((x253<x254)&x255)%x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MIN;
	int32_t x260 = -1;
	volatile int32_t t62 = 1521536;

	t62 = (((x257<x258)&x259)%x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MAX;
	int32_t t63 = 163;

	t63 = (((x261<x262)&x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = 113422;
	uint32_t x267 = 2541465U;
	volatile int64_t t64 = -14031079792073LL;

	t64 = (((x265<x266)&x267)%x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = 42651330LL;
	volatile uint16_t x271 = UINT16_MAX;
	uint32_t x272 = 5U;
	uint32_t t65 = 1212691U;

	t65 = (((x269<x270)&x271)%x272);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 109329716LL;
	uint64_t x275 = 970170LLU;
	int32_t x276 = INT32_MIN;
	volatile uint64_t t66 = 35686657LLU;

	t66 = (((x273<x274)&x275)%x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = INT16_MIN;
	volatile int64_t x278 = INT64_MIN;
	int8_t x279 = -1;

	t67 = (((x277<x278)&x279)%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 16U;
	volatile int32_t x282 = -588;
	static int32_t x283 = -1;
	uint32_t x284 = 2431356U;
	uint32_t t68 = 1710239U;

	t68 = (((x281<x282)&x283)%x284);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 57393381U;
	volatile int64_t x286 = 4365076505760401359LL;
	int8_t x287 = INT8_MIN;
	uint64_t x288 = 129411295002098LLU;
	static uint64_t t69 = 24458225761242880LLU;

	t69 = (((x285<x286)&x287)%x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 514;
	uint16_t x290 = 227U;
	int32_t x292 = 1047;
	volatile int32_t t70 = 1;

	t70 = (((x289<x290)&x291)%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x296 = INT8_MIN;
	int32_t t71 = -16289;

	t71 = (((x293<x294)&x295)%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 3U;
	int64_t x298 = INT64_MIN;
	int8_t x299 = -10;
	volatile uint8_t x300 = 6U;
	int32_t t72 = 43484214;

	t72 = (((x297<x298)&x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -9814072525LL;
	volatile int8_t x302 = -4;
	uint16_t x303 = 0U;
	int64_t x304 = INT64_MIN;

	t73 = (((x301<x302)&x303)%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = 695235LL;
	volatile uint32_t x307 = 346U;
	volatile uint32_t t74 = 178769646U;

	t74 = (((x305<x306)&x307)%x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int16_t x310 = -1;
	volatile int32_t x311 = INT32_MAX;
	static volatile int32_t t75 = -55;

	t75 = (((x309<x310)&x311)%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = 1;
	int8_t x315 = -1;
	volatile uint64_t t76 = 28064366212585LLU;

	t76 = (((x313<x314)&x315)%x316);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -1LL;
	int64_t x319 = INT64_MAX;
	int16_t x320 = 1;

	t77 = (((x317<x318)&x319)%x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = -1;
	static volatile uint8_t x323 = 47U;
	static uint64_t x324 = 18677581LLU;
	static uint64_t t78 = 238214LLU;

	t78 = (((x321<x322)&x323)%x324);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x326 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	int64_t x328 = -1LL;
	static volatile int64_t t79 = -6264549LL;

	t79 = (((x325<x326)&x327)%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 2425674;
	static int32_t x330 = INT32_MAX;
	int64_t x331 = 511096LL;
	static int64_t x332 = INT64_MIN;
	static volatile int64_t t80 = -156LL;

	t80 = (((x329<x330)&x331)%x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	static int32_t t81 = 0;

	t81 = (((x333<x334)&x335)%x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = 43370872689689LL;
	static int8_t x339 = INT8_MIN;
	static uint64_t x340 = UINT64_MAX;
	static uint64_t t82 = 1110876947858226132LLU;

	t82 = (((x337<x338)&x339)%x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 75U;
	int8_t x342 = INT8_MIN;
	int64_t x343 = 31664434352013LL;
	static volatile int64_t t83 = 272808823068171LL;

	t83 = (((x341<x342)&x343)%x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x347 = -2LL;
	uint8_t x348 = 62U;

	t84 = (((x345<x346)&x347)%x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x349 = -30;
	uint64_t x350 = 185105406LLU;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MIN;
	volatile int64_t t85 = -2819LL;

	t85 = (((x349<x350)&x351)%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	volatile int64_t x354 = -1LL;
	int64_t x355 = INT64_MAX;
	int8_t x356 = INT8_MAX;

	t86 = (((x353<x354)&x355)%x356);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x362 = INT32_MAX;
	int64_t x363 = -1LL;
	int64_t x364 = INT64_MIN;
	volatile int64_t t87 = -1749LL;

	t87 = (((x361<x362)&x363)%x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = -1;
	int16_t x367 = -249;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t88 = 1015337056;

	t88 = (((x365<x366)&x367)%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x371 = INT16_MIN;
	static uint64_t x372 = 750313LLU;
	uint64_t t89 = 57379467754693698LLU;

	t89 = (((x369<x370)&x371)%x372);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x373 = 48281423537689LLU;
	volatile int32_t x374 = -212187;
	uint32_t x375 = 44155U;
	int32_t x376 = INT32_MIN;
	volatile uint32_t t90 = 1U;

	t90 = (((x373<x374)&x375)%x376);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x378 = -1LL;
	int64_t x379 = -3LL;
	int32_t x380 = -1;
	int64_t t91 = 23LL;

	t91 = (((x377<x378)&x379)%x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int32_t x384 = -481;
	volatile int32_t t92 = -94782;

	t92 = (((x381<x382)&x383)%x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = -1;
	int16_t x386 = -1;
	static int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MIN;
	volatile int64_t t93 = -1236435LL;

	t93 = (((x385<x386)&x387)%x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = -1;
	volatile uint16_t x390 = 5369U;
	uint16_t x391 = 29U;
	int32_t x392 = INT32_MAX;
	static int32_t t94 = 14126376;

	t94 = (((x389<x390)&x391)%x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = INT16_MAX;
	int32_t x396 = INT32_MAX;
	static volatile int32_t t95 = -17;

	t95 = (((x393<x394)&x395)%x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 25468U;
	int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	volatile int64_t t96 = -173470510LL;

	t96 = (((x397<x398)&x399)%x400);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x402 = 0U;
	volatile int32_t x403 = INT32_MIN;
	int32_t t97 = 240;

	t97 = (((x401<x402)&x403)%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x405 = 1710;
	uint16_t x407 = UINT16_MAX;
	volatile int64_t x408 = INT64_MIN;
	static int64_t t98 = 1592LL;

	t98 = (((x405<x406)&x407)%x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x410 = -1;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -1;
	int32_t t99 = -4147935;

	t99 = (((x409<x410)&x411)%x412);

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

