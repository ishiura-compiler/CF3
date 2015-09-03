#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -1;
static int32_t t2 = -345645;
int32_t t3 = -191160101;
int16_t x19 = INT16_MIN;
volatile uint64_t x21 = UINT64_MAX;
int64_t x23 = -1LL;
int32_t x25 = 190128846;
int8_t x27 = INT8_MIN;
volatile int32_t t7 = -12975966;
int8_t x36 = INT8_MAX;
int16_t x38 = 16130;
uint64_t x39 = 131408631395354068LLU;
int8_t x41 = INT8_MIN;
int8_t x42 = INT8_MIN;
volatile int32_t t12 = 5718;
static int32_t x53 = INT32_MAX;
volatile int64_t x54 = INT64_MAX;
volatile int32_t t14 = -268084400;
static int32_t t15 = 1443;
int8_t x67 = INT8_MIN;
volatile int64_t x69 = -1LL;
int64_t x74 = 949691981LL;
uint8_t x77 = 6U;
uint16_t x79 = UINT16_MAX;
volatile int16_t x82 = INT16_MIN;
volatile int32_t t20 = -1;
volatile int8_t x86 = INT8_MIN;
static int32_t x90 = INT32_MIN;
int64_t x92 = INT64_MIN;
static int64_t x94 = INT64_MIN;
volatile int32_t t24 = 1989924;
int8_t x101 = INT8_MIN;
static int32_t x102 = INT32_MAX;
int32_t x112 = -1865;
int32_t t27 = -493;
int8_t x121 = INT8_MAX;
static volatile int8_t x124 = -1;
static int32_t x128 = 4;
volatile int16_t x130 = INT16_MAX;
int64_t x132 = INT64_MIN;
int32_t x135 = INT32_MAX;
static volatile int64_t x137 = -1LL;
uint16_t x140 = 1078U;
int64_t x144 = INT64_MIN;
uint32_t x152 = 14338725U;
static volatile int16_t x161 = -1;
static int32_t t40 = 175;
int64_t x166 = INT64_MAX;
int32_t t41 = -198109871;
uint16_t x169 = 3U;
static uint32_t x170 = 3823U;
uint16_t x174 = UINT16_MAX;
uint8_t x178 = 0U;
int8_t x192 = 1;
uint8_t x193 = 3U;
uint64_t x195 = 730LLU;
int32_t x202 = -58;
int32_t x203 = -1;
static uint8_t x208 = UINT8_MAX;
int32_t x213 = INT32_MIN;
static int32_t t54 = 63073085;
int32_t t57 = -770836410;
int64_t x235 = -1055046020668820145LL;
int32_t t58 = -460;
volatile int8_t x238 = 3;
int64_t x240 = -107LL;
volatile uint16_t x250 = 3300U;
uint16_t x254 = UINT16_MAX;
static uint16_t x260 = 2013U;
int64_t x268 = 3289302292930583755LL;
uint8_t x271 = UINT8_MAX;
int16_t x274 = INT16_MIN;
static int16_t x278 = -3501;
int32_t x280 = -402;
uint32_t x281 = 456491U;
uint64_t x285 = 980960098223843272LLU;
int8_t x286 = 0;
int64_t x287 = 3869LL;
int8_t x292 = -1;
static uint64_t x293 = 11239460554LLU;
volatile uint16_t x301 = 2U;
uint32_t x302 = 142229605U;
int32_t x303 = -2552346;
uint8_t x305 = 1U;
static uint64_t x308 = 1782096481419643519LLU;
uint16_t x311 = UINT16_MAX;
static volatile int16_t x320 = INT16_MIN;
int16_t x324 = 1;
volatile int32_t x325 = -1;
int32_t t82 = 184;
int64_t x334 = -1LL;
static int64_t x339 = 6537873382LL;
static volatile int32_t t84 = -35072;
int64_t x347 = 8902713LL;
int16_t x348 = 2;
int64_t x351 = INT64_MIN;
int32_t t87 = -15748685;
int8_t x354 = -28;
static int32_t t88 = 81243317;
uint16_t x358 = 832U;
int64_t x363 = -14440700770229896LL;
int32_t t90 = 53458430;
volatile int8_t x376 = INT8_MAX;
volatile int32_t t94 = 889960;
uint8_t x382 = 45U;
int32_t t96 = -562;
static int32_t t97 = 2;
volatile int32_t t99 = -106615029;


void f0(void) {
	int32_t x1 = 212504;
	volatile uint64_t x2 = 24152164542984083LLU;
	uint32_t x4 = 42643106U;
	volatile int32_t t0 = 149017;

	t0 = ((x1*(x2==x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static int8_t x6 = -1;
	int8_t x7 = 8;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -2040686;

	t1 = ((x5*(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 273U;
	int8_t x10 = -14;
	static int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MAX;

	t2 = ((x9*(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	static uint64_t x16 = UINT64_MAX;

	t3 = ((x13*(x14==x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 106999337005472753LL;
	static int32_t x18 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -174223340;

	t4 = ((x17*(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	static int32_t t5 = -3359521;

	t5 = ((x21*(x22==x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 120U;
	uint16_t x28 = 4U;
	int32_t t6 = -211770472;

	t6 = ((x25*(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = -1;
	int32_t x31 = -1;
	int8_t x32 = -1;

	t7 = ((x29*(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	int32_t t8 = 219;

	t8 = ((x33*(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static uint8_t x40 = 30U;
	static int32_t t9 = 52;

	t9 = ((x37*(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x43 = UINT32_MAX;
	static uint64_t x44 = 406245LLU;
	volatile int32_t t10 = 1;

	t10 = ((x41*(x42==x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 481755967U;
	static uint64_t x46 = 2659383003991577822LLU;
	uint64_t x47 = 2113393LLU;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = -13891;

	t11 = ((x45*(x46==x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1158516419440076LL;
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MAX;
	int64_t x52 = INT64_MIN;

	t12 = ((x49*(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = -1;
	volatile uint32_t x56 = 23000U;
	static volatile int32_t t13 = -6294444;

	t13 = ((x53*(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 1053U;
	uint64_t x58 = 4LLU;
	int8_t x59 = INT8_MIN;
	uint32_t x60 = 27140098U;

	t14 = ((x57*(x58==x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	static int8_t x63 = -1;
	uint16_t x64 = 0U;

	t15 = ((x61*(x62==x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 184;
	int16_t x66 = INT16_MIN;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -47864203;

	t16 = ((x65*(x66==x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 123U;
	volatile int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	static int32_t t17 = 3978;

	t17 = ((x69*(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int8_t x75 = INT8_MAX;
	int64_t x76 = 2081413943054996588LL;
	volatile int32_t t18 = 10940182;

	t18 = ((x73*(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 2898;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -9160;

	t19 = ((x77*(x78==x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 216U;

	t20 = ((x81*(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	static int32_t x87 = INT32_MAX;
	int8_t x88 = 52;
	static volatile int32_t t21 = -3;

	t21 = ((x85*(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 0;
	volatile int16_t x91 = 660;
	volatile int32_t t22 = -1718;

	t22 = ((x89*(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 1U;
	volatile int32_t t23 = -26852;

	t23 = ((x93*(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	int16_t x99 = 6002;
	static int16_t x100 = INT16_MIN;

	t24 = ((x97*(x98==x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = 106886433113636LL;
	int8_t x104 = 11;
	volatile int32_t t25 = -2831;

	t25 = ((x101*(x102==x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 3U;
	int16_t x106 = -1;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MAX;
	int32_t t26 = -6764599;

	t26 = ((x105*(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	static volatile uint16_t x111 = UINT16_MAX;

	t27 = ((x109*(x110==x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	int32_t x114 = -124961789;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 17U;
	volatile int32_t t28 = -2;

	t28 = ((x113*(x114==x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 243474;
	volatile uint32_t x118 = 17082592U;
	volatile int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -133747;

	t29 = ((x117*(x118==x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 31U;
	uint64_t x123 = 215LLU;
	static volatile int32_t t30 = -13;

	t30 = ((x121*(x122==x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 5611U;
	static volatile uint16_t x127 = 10U;
	volatile int32_t t31 = -7;

	t31 = ((x125*(x126==x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 13594;
	uint8_t x131 = UINT8_MAX;
	int32_t t32 = 223933347;

	t32 = ((x129*(x130==x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	int8_t x134 = INT8_MIN;
	uint64_t x136 = 1003770192LLU;
	volatile int32_t t33 = 110373472;

	t33 = ((x133*(x134==x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	volatile uint64_t x139 = 73942LLU;
	volatile int32_t t34 = -1;

	t34 = ((x137*(x138==x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	volatile int32_t t35 = -4;

	t35 = ((x141*(x142==x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = UINT32_MAX;
	volatile int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	static uint8_t x148 = 77U;
	int32_t t36 = 447409;

	t36 = ((x145*(x146==x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = 7U;
	int32_t t37 = -38191809;

	t37 = ((x149*(x150==x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 2717U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	uint16_t x156 = 4U;
	volatile int32_t t38 = 965177691;

	t38 = ((x153*(x154==x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	uint32_t x159 = 7U;
	int8_t x160 = INT8_MIN;
	int32_t t39 = -8142;

	t39 = ((x157*(x158==x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

	t40 = ((x161*(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint32_t x167 = 2450U;
	volatile int16_t x168 = INT16_MIN;

	t41 = ((x165*(x166==x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = -1;
	volatile int32_t t42 = -5;

	t42 = ((x169*(x170==x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x175 = INT32_MAX;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t43 = 3121;

	t43 = ((x173*(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	int16_t x179 = -5;
	static uint64_t x180 = 1054488LLU;
	volatile int32_t t44 = -33;

	t44 = ((x177*(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 68;
	int16_t x182 = INT16_MAX;
	volatile int64_t x183 = INT64_MAX;
	int8_t x184 = -2;
	static int32_t t45 = 2;

	t45 = ((x181*(x182==x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 2LLU;
	int64_t x186 = -1313272621132233178LL;
	static volatile int32_t x187 = INT32_MIN;
	uint64_t x188 = 8676672693472666913LLU;
	volatile int32_t t46 = 8027;

	t46 = ((x185*(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 774268LL;
	uint32_t x190 = 1924558178U;
	int16_t x191 = INT16_MIN;
	int32_t t47 = -17742442;

	t47 = ((x189*(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x194 = 0;
	int16_t x196 = INT16_MIN;
	static int32_t t48 = -2;

	t48 = ((x193*(x194==x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = 6596178LL;
	int16_t x199 = INT16_MIN;
	volatile int16_t x200 = -1128;
	volatile int32_t t49 = -1;

	t49 = ((x197*(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MAX;
	static uint8_t x204 = UINT8_MAX;
	static int32_t t50 = -3;

	t50 = ((x201*(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	static uint32_t x207 = 125357978U;
	volatile int32_t t51 = 13;

	t51 = ((x205*(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x209 = 143U;
	static int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	int32_t x212 = -64747;
	volatile int32_t t52 = 6789277;

	t52 = ((x209*(x210==x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = 48LL;
	static volatile int8_t x215 = -6;
	volatile int64_t x216 = -1LL;
	int32_t t53 = -605;

	t53 = ((x213*(x214==x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	int32_t x218 = 159486;
	static int16_t x219 = INT16_MIN;
	static int8_t x220 = INT8_MIN;

	t54 = ((x217*(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 4U;
	int64_t x222 = -929572637LL;
	uint8_t x223 = 1U;
	static uint16_t x224 = 25U;
	static volatile int32_t t55 = -61;

	t55 = ((x221*(x222==x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	uint16_t x226 = 3626U;
	uint16_t x227 = 81U;
	uint16_t x228 = 25594U;
	volatile int32_t t56 = -2071505;

	t56 = ((x225*(x226==x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = -1;
	int32_t x231 = -1;
	static int8_t x232 = INT8_MIN;

	t57 = ((x229*(x230==x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 49383U;
	int32_t x234 = INT32_MIN;
	int64_t x236 = INT64_MIN;

	t58 = ((x233*(x234==x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	int32_t t59 = 20189;

	t59 = ((x237*(x238==x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	uint64_t x242 = 213701365109751734LLU;
	int32_t x243 = INT32_MIN;
	static volatile uint8_t x244 = UINT8_MAX;
	int32_t t60 = -564358;

	t60 = ((x241*(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 815028913421LLU;
	int32_t x246 = INT32_MIN;
	int64_t x247 = -1LL;
	uint32_t x248 = 890339603U;
	static int32_t t61 = -1;

	t61 = ((x245*(x246==x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int8_t x251 = 61;
	static volatile int64_t x252 = INT64_MIN;
	volatile int32_t t62 = 0;

	t62 = ((x249*(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 2176821LLU;
	static int8_t x255 = -1;
	int8_t x256 = INT8_MAX;
	int32_t t63 = 1740324;

	t63 = ((x253*(x254==x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 10U;
	uint32_t x258 = 1315U;
	int32_t x259 = -26;
	static int32_t t64 = 879461638;

	t64 = ((x257*(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 14U;
	int32_t x262 = INT32_MAX;
	int16_t x263 = -389;
	uint64_t x264 = 2LLU;
	int32_t t65 = -1;

	t65 = ((x261*(x262==x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = 1494694;
	volatile int32_t t66 = 1;

	t66 = ((x265*(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = -1;
	static uint64_t x272 = UINT64_MAX;
	static volatile int32_t t67 = 919;

	t67 = ((x269*(x270==x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -25LL;
	uint64_t x275 = UINT64_MAX;
	uint8_t x276 = 47U;
	static volatile int32_t t68 = -1;

	t68 = ((x273*(x274==x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	uint64_t x279 = 216695396762608146LLU;
	static volatile int32_t t69 = 9193;

	t69 = ((x277*(x278==x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	volatile int16_t x284 = -1;
	int32_t t70 = 187;

	t70 = ((x281*(x282==x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x288 = INT32_MIN;
	static volatile int32_t t71 = -13546;

	t71 = ((x285*(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 11727610;
	static int32_t x290 = -1;
	int8_t x291 = 15;
	volatile int32_t t72 = 1506;

	t72 = ((x289*(x290==x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = INT8_MIN;
	uint64_t x295 = 6LLU;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = -218932;

	t73 = ((x293*(x294==x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 0;
	int8_t x298 = INT8_MAX;
	int16_t x299 = 18;
	uint32_t x300 = 0U;
	volatile int32_t t74 = 98805;

	t74 = ((x297*(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x304 = INT8_MAX;
	int32_t t75 = 337860082;

	t75 = ((x301*(x302==x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = -1LL;
	static int8_t x307 = INT8_MIN;
	volatile int32_t t76 = -24607491;

	t76 = ((x305*(x306==x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	uint16_t x310 = 14161U;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 459411;

	t77 = ((x309*(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	volatile uint8_t x314 = 0U;
	static uint16_t x315 = 224U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 3124;

	t78 = ((x313*(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 15;
	int64_t x318 = -31560LL;
	static int16_t x319 = 1711;
	static volatile int32_t t79 = -355251701;

	t79 = ((x317*(x318==x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 726U;
	int16_t x322 = -1024;
	int8_t x323 = 10;
	volatile int32_t t80 = 0;

	t80 = ((x321*(x322==x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	static int16_t x327 = INT16_MAX;
	volatile int64_t x328 = INT64_MIN;
	int32_t t81 = -3092;

	t81 = ((x325*(x326==x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 31145629749387LLU;
	static int16_t x330 = 5772;
	volatile int64_t x331 = INT64_MAX;
	int8_t x332 = -1;

	t82 = ((x329*(x330==x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -2;
	static volatile int32_t t83 = 1984;

	t83 = ((x333*(x334==x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -4;
	static volatile uint8_t x338 = 1U;
	int16_t x340 = INT16_MAX;

	t84 = ((x337*(x338==x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 1404129;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t85 = 23;

	t85 = ((x341*(x342==x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 6U;
	volatile uint32_t x346 = 1304348U;
	static volatile int32_t t86 = -15717612;

	t86 = ((x345*(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	uint8_t x352 = UINT8_MAX;

	t87 = ((x349*(x350==x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 3U;
	int64_t x355 = -1LL;
	static int16_t x356 = INT16_MIN;

	t88 = ((x353*(x354==x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 295134565292656LLU;
	volatile int8_t x359 = INT8_MAX;
	static int16_t x360 = -8;
	int32_t t89 = -1;

	t89 = ((x357*(x358==x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MIN;
	volatile uint16_t x364 = 5U;

	t90 = ((x361*(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MIN;
	static uint16_t x367 = 95U;
	int64_t x368 = INT64_MIN;
	int32_t t91 = 341994898;

	t91 = ((x365*(x366==x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -15703175;
	volatile int8_t x370 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	uint32_t x372 = 1U;
	int32_t t92 = -6185101;

	t92 = ((x369*(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -2831;
	int16_t x374 = INT16_MIN;
	int8_t x375 = 0;
	volatile int32_t t93 = -5264;

	t93 = ((x373*(x374==x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1891660397182034186LLU;
	static uint8_t x378 = UINT8_MAX;
	int64_t x379 = -1468526238LL;
	static int8_t x380 = -31;

	t94 = ((x377*(x378==x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 35U;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -1LL;
	int32_t t95 = 63813995;

	t95 = ((x381*(x382==x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 11U;
	int8_t x386 = -1;
	int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MIN;

	t96 = ((x385*(x386==x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = -1;
	static volatile uint32_t x391 = UINT32_MAX;
	int64_t x392 = -1LL;

	t97 = ((x389*(x390==x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MAX;
	int64_t x394 = -226023020288LL;
	volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = 9941202645249LLU;
	int32_t t98 = 221;

	t98 = ((x393*(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = -3;
	uint8_t x398 = 2U;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = INT32_MIN;

	t99 = ((x397*(x398==x399))<x400);

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

