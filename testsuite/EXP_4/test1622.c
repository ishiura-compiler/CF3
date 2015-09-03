#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -22;
static uint8_t x9 = 3U;
int32_t t2 = 21010;
volatile uint8_t x14 = 26U;
int16_t x20 = -87;
volatile int32_t x25 = -1;
static int32_t x26 = -1;
uint16_t x27 = 19634U;
static int32_t x28 = -2074029;
int8_t x31 = INT8_MIN;
int32_t t7 = 19090;
uint32_t x48 = 0U;
static int32_t x50 = 8369;
int16_t x51 = INT16_MAX;
volatile int32_t t12 = 15494;
static int8_t x56 = INT8_MIN;
int16_t x62 = INT16_MIN;
int32_t t15 = 329;
uint64_t x65 = 1603216152LLU;
int32_t x68 = -1;
uint16_t x73 = UINT16_MAX;
volatile int32_t x76 = INT32_MIN;
volatile int8_t x86 = INT8_MAX;
int16_t x87 = INT16_MAX;
int16_t x91 = INT16_MIN;
static int8_t x92 = -1;
volatile int32_t t22 = 0;
uint16_t x95 = 6661U;
int32_t x101 = 7255;
volatile int32_t t26 = 14;
static uint16_t x114 = UINT16_MAX;
uint8_t x122 = UINT8_MAX;
static int32_t t30 = -815700824;
volatile int32_t t32 = 102845569;
int32_t t33 = -1;
static volatile int32_t t35 = -246;
static volatile int32_t x146 = INT32_MIN;
static int16_t x150 = -16153;
int32_t t37 = 3574440;
int64_t x155 = INT64_MAX;
int16_t x157 = -465;
int32_t x160 = INT32_MIN;
int32_t t45 = -8978;
static volatile int64_t x185 = INT64_MAX;
volatile int32_t t46 = -786;
int64_t x189 = INT64_MIN;
static volatile uint16_t x191 = UINT16_MAX;
int32_t t48 = 44402;
int16_t x203 = INT16_MIN;
static volatile int64_t x206 = 18742LL;
int64_t x207 = -31077676012496LL;
int16_t x209 = 1071;
volatile int32_t x215 = 3844;
uint64_t x216 = 5385LLU;
volatile uint16_t x217 = 432U;
int8_t x222 = INT8_MIN;
static volatile int32_t t55 = 84;
int8_t x226 = INT8_MIN;
static int8_t x239 = INT8_MAX;
volatile int32_t t60 = 2;
static volatile int32_t t61 = -661313004;
volatile int32_t x253 = INT32_MAX;
volatile int8_t x259 = INT8_MIN;
static uint32_t x261 = 9677070U;
volatile uint32_t x262 = UINT32_MAX;
int8_t x265 = INT8_MAX;
volatile int32_t t66 = 1846265;
int64_t x270 = 374170LL;
volatile int32_t t67 = 2;
volatile int8_t x275 = INT8_MIN;
volatile int8_t x290 = 30;
int64_t x297 = INT64_MIN;
int32_t t74 = 666618636;
static uint16_t x301 = 197U;
int64_t x313 = INT64_MIN;
int64_t x318 = -36674849LL;
volatile int32_t t80 = 22;
volatile uint32_t x325 = 426U;
volatile uint16_t x328 = UINT16_MAX;
volatile uint32_t x334 = 1868932778U;
volatile int8_t x336 = 0;
volatile int32_t t84 = -266695;
uint8_t x343 = 118U;
volatile int32_t x345 = INT32_MIN;
int32_t t86 = 3;
int32_t t87 = 14510249;
uint16_t x354 = 1017U;
int32_t x355 = 34;
volatile int64_t x357 = INT64_MIN;
static int32_t x358 = 475;
volatile int32_t t90 = -486;
uint64_t x366 = 390611LLU;
int32_t x371 = INT32_MAX;
static uint64_t x378 = 252384LLU;
static volatile int32_t t96 = -66102763;
volatile int8_t x390 = INT8_MAX;
volatile int32_t x398 = -1;
int64_t x400 = -1LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MIN;
	static int32_t x3 = INT32_MIN;
	int32_t x4 = -1380;
	int32_t t0 = -1;

	t0 = (x1<=(x2==(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MAX;
	int64_t x8 = 2223LL;
	int32_t t1 = -773;

	t1 = (x5<=(x6==(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -2;
	volatile uint64_t x11 = 17435434466LLU;
	int64_t x12 = INT64_MIN;

	t2 = (x9<=(x10==(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static uint8_t x15 = 3U;
	int8_t x16 = 4;
	int32_t t3 = -123909679;

	t3 = (x13<=(x14==(x15<=x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -220;
	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	int32_t t4 = -2008434;

	t4 = (x17<=(x18==(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 0U;
	static int32_t x24 = 130;
	static int32_t t5 = 1718;

	t5 = (x21<=(x22==(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t t6 = 213151;

	t6 = (x25<=(x26==(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7U;
	uint64_t x30 = 67527584278170LLU;
	volatile int64_t x32 = 576656547LL;

	t7 = (x29<=(x30==(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x34 = -476;
	static uint16_t x35 = 2U;
	static volatile uint32_t x36 = 116506U;
	volatile int32_t t8 = -6461;

	t8 = (x33<=(x34==(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	static int16_t x38 = -26;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 102709862LLU;
	int32_t t9 = 55096631;

	t9 = (x37<=(x38==(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	static int32_t t10 = -47130666;

	t10 = (x41<=(x42==(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	volatile int8_t x46 = -1;
	uint8_t x47 = 1U;
	int32_t t11 = 15243;

	t11 = (x45<=(x46==(x47<=x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x52 = INT32_MAX;

	t12 = (x49<=(x50==(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 20962U;
	static int64_t x54 = -1LL;
	int16_t x55 = INT16_MAX;
	int32_t t13 = 4214811;

	t13 = (x53<=(x54==(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = 54289962;
	volatile int16_t x60 = INT16_MAX;
	static volatile int32_t t14 = 148287;

	t14 = (x57<=(x58==(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -9016;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;

	t15 = (x61<=(x62==(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = 504178254;
	volatile int16_t x67 = 17;
	volatile int32_t t16 = -1175413;

	t16 = (x65<=(x66==(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = 322289LLU;
	int16_t x71 = 0;
	static int64_t x72 = INT64_MAX;
	int32_t t17 = 131;

	t17 = (x69<=(x70==(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static volatile int64_t x75 = INT64_MAX;
	volatile int32_t t18 = -11801;

	t18 = (x73<=(x74==(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -25307;
	uint8_t x78 = 0U;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = 556;

	t19 = (x77<=(x78==(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 2271;
	int64_t x82 = 1872396182259LL;
	static int8_t x83 = INT8_MAX;
	int64_t x84 = 518926052905998584LL;
	volatile int32_t t20 = 2;

	t20 = (x81<=(x82==(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -34;
	uint8_t x88 = 24U;
	volatile int32_t t21 = -519;

	t21 = (x85<=(x86==(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint8_t x90 = UINT8_MAX;

	t22 = (x89<=(x90==(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 29931502LLU;
	static volatile int8_t x94 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 68024944;

	t23 = (x93<=(x94==(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -15;
	int64_t x98 = INT64_MAX;
	int16_t x99 = -1616;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -61361498;

	t24 = (x97<=(x98==(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -61604;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t25 = 19252;

	t25 = (x101<=(x102==(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 510936841U;
	static uint32_t x107 = 1152572459U;
	static int32_t x108 = -119274280;

	t26 = (x105<=(x106==(x107<=x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	volatile int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 0;

	t27 = (x109<=(x110==(x111<=x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 2830LLU;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -1;
	int32_t t28 = 772264;

	t28 = (x113<=(x114==(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = INT8_MIN;
	int32_t t29 = -1;

	t29 = (x117<=(x118==(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	volatile uint16_t x123 = 9091U;
	uint64_t x124 = UINT64_MAX;

	t30 = (x121<=(x122==(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -505201569294904LL;
	volatile uint16_t x126 = 339U;
	volatile int8_t x127 = -7;
	uint64_t x128 = 177834707055303511LLU;
	int32_t t31 = 3467383;

	t31 = (x125<=(x126==(x127<=x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	volatile uint8_t x130 = 3U;
	int32_t x131 = 54;
	uint8_t x132 = 3U;

	t32 = (x129<=(x130==(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	volatile uint16_t x136 = 10U;

	t33 = (x133<=(x134==(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 915290097;
	volatile uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	volatile uint8_t x140 = 17U;
	volatile int32_t t34 = -97446;

	t34 = (x137<=(x138==(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 8323U;
	int8_t x143 = INT8_MIN;
	static int64_t x144 = -1540301LL;

	t35 = (x141<=(x142==(x143<=x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x147 = -7;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = 13926934;

	t36 = (x145<=(x146==(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 234910U;
	int32_t x151 = -1571;
	volatile int8_t x152 = INT8_MIN;

	t37 = (x149<=(x150==(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 141149949960LLU;
	uint32_t x154 = 327963U;
	static int64_t x156 = INT64_MIN;
	static int32_t t38 = 1141;

	t38 = (x153<=(x154==(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x158 = 57455783U;
	int64_t x159 = INT64_MIN;
	int32_t t39 = 8217345;

	t39 = (x157<=(x158==(x159<=x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	uint16_t x163 = 61U;
	volatile uint16_t x164 = 5765U;
	static int32_t t40 = -1038913;

	t40 = (x161<=(x162==(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -22875878;
	int32_t x166 = INT32_MIN;
	static int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 391;

	t41 = (x165<=(x166==(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int32_t x170 = -1;
	int64_t x171 = 42636532LL;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 3664189;

	t42 = (x169<=(x170==(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -38505;
	int32_t x174 = -1;
	volatile int32_t x175 = INT32_MIN;
	int8_t x176 = -4;
	volatile int32_t t43 = -824318418;

	t43 = (x173<=(x174==(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 28LLU;
	volatile int64_t x179 = INT64_MIN;
	static int64_t x180 = INT64_MIN;
	int32_t t44 = 1509;

	t44 = (x177<=(x178==(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 111699U;
	uint32_t x182 = 41011U;
	volatile uint16_t x183 = 1202U;
	volatile int8_t x184 = INT8_MAX;

	t45 = (x181<=(x182==(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x186 = 715U;
	volatile int16_t x187 = INT16_MAX;
	int16_t x188 = -153;

	t46 = (x185<=(x186==(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	static uint32_t x192 = 248031U;
	int32_t t47 = 210578;

	t47 = (x189<=(x190==(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	int8_t x195 = INT8_MAX;
	static int8_t x196 = 0;

	t48 = (x193<=(x194==(x195<=x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 5611LLU;
	static int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = INT8_MIN;
	int32_t t49 = 62105645;

	t49 = (x197<=(x198==(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	static volatile int8_t x202 = INT8_MAX;
	static uint16_t x204 = 0U;
	int32_t t50 = 1;

	t50 = (x201<=(x202==(x203<=x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 109237U;
	int32_t x208 = 956;
	int32_t t51 = 798510;

	t51 = (x205<=(x206==(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 429288U;
	int64_t x212 = 136246813884327730LL;
	volatile int32_t t52 = -1903895;

	t52 = (x209<=(x210==(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	static uint64_t x214 = 131866666LLU;
	volatile int32_t t53 = -107836716;

	t53 = (x213<=(x214==(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	volatile uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = -431;

	t54 = (x217<=(x218==(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	uint64_t x223 = 15LLU;
	static uint32_t x224 = 155037535U;

	t55 = (x221<=(x222==(x223<=x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	volatile int32_t x228 = -1;
	int32_t t56 = 146195121;

	t56 = (x225<=(x226==(x227<=x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	static uint16_t x230 = 57U;
	volatile int32_t x231 = -1;
	int32_t x232 = 1;
	volatile int32_t t57 = -19;

	t57 = (x229<=(x230==(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	static volatile uint16_t x234 = UINT16_MAX;
	uint16_t x235 = 4177U;
	static int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -52422;

	t58 = (x233<=(x234==(x235<=x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1LLU;
	volatile int64_t x238 = -1LL;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -1;

	t59 = (x237<=(x238==(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -7;
	int64_t x242 = 1420836290814949LL;
	uint8_t x243 = 56U;
	static volatile int8_t x244 = INT8_MIN;

	t60 = (x241<=(x242==(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	uint16_t x246 = 3603U;
	volatile int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;

	t61 = (x245<=(x246==(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	static int64_t x251 = -1LL;
	int16_t x252 = 61;
	int32_t t62 = -1;

	t62 = (x249<=(x250==(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	int16_t x256 = -7004;
	static int32_t t63 = -3;

	t63 = (x253<=(x254==(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 1LL;
	static int16_t x258 = 2;
	int16_t x260 = -1;
	static int32_t t64 = -47746099;

	t64 = (x257<=(x258==(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x263 = UINT32_MAX;
	static volatile int16_t x264 = INT16_MIN;
	int32_t t65 = -32594;

	t65 = (x261<=(x262==(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	volatile uint16_t x268 = 157U;

	t66 = (x265<=(x266==(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = 21;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;

	t67 = (x269<=(x270==(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int32_t x274 = 72412889;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = 67;

	t68 = (x273<=(x274==(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 1198U;
	int8_t x278 = INT8_MAX;
	static int8_t x279 = -1;
	uint32_t x280 = 37263758U;
	static volatile int32_t t69 = -1950;

	t69 = (x277<=(x278==(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int64_t x282 = -284676520245093345LL;
	int32_t x283 = -252;
	volatile int64_t x284 = INT64_MAX;
	volatile int32_t t70 = 40335643;

	t70 = (x281<=(x282==(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -1;
	int64_t x286 = -1LL;
	static int16_t x287 = 954;
	static uint8_t x288 = 3U;
	volatile int32_t t71 = -55610;

	t71 = (x285<=(x286==(x287<=x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 121U;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 3325;

	t72 = (x289<=(x290==(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t73 = -297962177;

	t73 = (x293<=(x294==(x295<=x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = 2035848;
	int32_t x299 = -1;
	int16_t x300 = INT16_MIN;

	t74 = (x297<=(x298==(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 58U;
	int64_t x303 = INT64_MAX;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = 9823445;

	t75 = (x301<=(x302==(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	static int32_t x306 = INT32_MIN;
	volatile int32_t x307 = 1;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -60688;

	t76 = (x305<=(x306==(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 1;
	static int8_t x310 = INT8_MAX;
	uint32_t x311 = 62709419U;
	int16_t x312 = -1;
	volatile int32_t t77 = -209449;

	t77 = (x309<=(x310==(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = 6U;
	int64_t x315 = -96LL;
	static uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = 12;

	t78 = (x313<=(x314==(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 22982U;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 0;

	t79 = (x317<=(x318==(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 65U;
	static int8_t x322 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t x324 = INT32_MAX;

	t80 = (x321<=(x322==(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MAX;
	int8_t x327 = INT8_MIN;
	volatile int32_t t81 = 507;

	t81 = (x325<=(x326==(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MAX;
	int16_t x331 = -5385;
	static int64_t x332 = -1LL;
	static volatile int32_t t82 = -193380456;

	t82 = (x329<=(x330==(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	int32_t t83 = 19;

	t83 = (x333<=(x334==(x335<=x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int64_t x338 = 35665891723461LL;
	int16_t x339 = INT16_MIN;
	static int64_t x340 = -1LL;

	t84 = (x337<=(x338==(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile int32_t x344 = INT32_MIN;
	int32_t t85 = -27548;

	t85 = (x341<=(x342==(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = -1;
	static int32_t x347 = -1;
	int32_t x348 = INT32_MIN;

	t86 = (x345<=(x346==(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 2180712787LL;
	uint8_t x350 = 3U;
	int32_t x351 = INT32_MIN;
	uint32_t x352 = 2653383U;

	t87 = (x349<=(x350==(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 6811U;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t88 = 1438;

	t88 = (x353<=(x354==(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = INT32_MAX;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t89 = 12;

	t89 = (x357<=(x358==(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = -6;
	static int64_t x363 = -1LL;
	int16_t x364 = 84;

	t90 = (x361<=(x362==(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 0;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -1;
	volatile int32_t t91 = -80901;

	t91 = (x365<=(x366==(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint8_t x370 = 0U;
	volatile uint16_t x372 = 7U;
	static int32_t t92 = 0;

	t92 = (x369<=(x370==(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	static volatile int32_t x374 = INT32_MIN;
	int8_t x375 = 8;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -186059530;

	t93 = (x373<=(x374==(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = 545662;

	t94 = (x377<=(x378==(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MAX;
	int32_t x383 = 21358225;
	uint16_t x384 = 12U;
	static volatile int32_t t95 = -2;

	t95 = (x381<=(x382==(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;

	t96 = (x385<=(x386==(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	static int64_t x391 = INT64_MIN;
	static uint32_t x392 = UINT32_MAX;
	static int32_t t97 = -12634;

	t97 = (x389<=(x390==(x391<=x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -16;
	static uint16_t x394 = 863U;
	int16_t x395 = -6;
	static uint64_t x396 = 136246581837LLU;
	volatile int32_t t98 = 89;

	t98 = (x393<=(x394==(x395<=x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 1LLU;
	uint8_t x399 = 27U;
	static volatile int32_t t99 = 268;

	t99 = (x397<=(x398==(x399<=x400)));

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

