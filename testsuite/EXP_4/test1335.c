#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x10 = 69090444692546LLU;
volatile int32_t t2 = 28670655;
int16_t x13 = 88;
volatile int8_t x14 = INT8_MAX;
static int8_t x18 = 0;
static int64_t x19 = -1LL;
volatile int64_t x23 = 16279LL;
volatile uint32_t x24 = 896659753U;
int16_t x26 = -8;
int16_t x27 = INT16_MIN;
int32_t x31 = -12956;
volatile int8_t x34 = INT8_MAX;
int8_t x48 = -19;
int32_t t11 = -12791369;
static volatile uint32_t x56 = UINT32_MAX;
int32_t t13 = 0;
volatile int32_t x66 = -879863;
uint8_t x70 = 10U;
int32_t x78 = INT32_MIN;
volatile uint8_t x81 = 29U;
int16_t x84 = -25;
int32_t x93 = -1;
int32_t t25 = 64224;
static uint8_t x110 = 6U;
int16_t x117 = 0;
int64_t x121 = INT64_MIN;
volatile int64_t x128 = INT64_MIN;
static uint8_t x131 = UINT8_MAX;
uint32_t x135 = 94469178U;
static volatile int32_t t33 = 16114;
volatile uint64_t x138 = 670LLU;
uint16_t x148 = UINT16_MAX;
int16_t x152 = 2;
int16_t x156 = -1;
volatile int32_t t38 = 14843;
int32_t x163 = INT32_MIN;
uint16_t x164 = 4U;
int32_t t41 = -12537524;
volatile int64_t x171 = INT64_MIN;
int8_t x173 = -1;
int8_t x175 = 0;
volatile int32_t t44 = -399279;
uint32_t x182 = 939024798U;
int16_t x190 = INT16_MIN;
static int64_t x195 = -1LL;
static int32_t t48 = 144677;
int64_t x197 = INT64_MAX;
int16_t x198 = -7270;
volatile uint64_t x202 = 206984990587381LLU;
static uint32_t x206 = 743208U;
int16_t x210 = INT16_MIN;
static uint16_t x211 = 4U;
static int32_t t52 = -188;
int8_t x215 = INT8_MIN;
uint8_t x217 = UINT8_MAX;
uint32_t x218 = 37U;
int16_t x221 = -9;
int32_t t55 = 3475448;
volatile int16_t x225 = -484;
int8_t x226 = -1;
int64_t x229 = INT64_MIN;
int8_t x241 = INT8_MAX;
int8_t x246 = INT8_MAX;
volatile int32_t x259 = -6;
int8_t x264 = -3;
int16_t x265 = -1;
uint16_t x268 = UINT16_MAX;
int32_t x276 = INT32_MIN;
volatile int64_t x277 = INT64_MIN;
int32_t t69 = -3643439;
volatile int16_t x290 = 6303;
int32_t t72 = 22733;
static uint16_t x293 = 10U;
int16_t x294 = -1;
int64_t x298 = 787971931755640012LL;
volatile int32_t t76 = -193;
uint32_t x309 = 26U;
int32_t t77 = -284128124;
int32_t x317 = INT32_MIN;
static uint8_t x318 = UINT8_MAX;
int32_t x320 = -74882;
static uint64_t x321 = 120702364632051890LLU;
uint32_t x322 = 2850014U;
uint16_t x324 = UINT16_MAX;
int8_t x326 = 15;
int16_t x329 = 0;
uint8_t x332 = 3U;
int32_t x342 = INT32_MIN;
volatile int16_t x345 = 1;
static int64_t x354 = -1165LL;
int32_t t90 = 943;
uint8_t x366 = 6U;
int64_t x369 = INT64_MAX;
static int64_t x371 = INT64_MAX;
int8_t x375 = INT8_MAX;
uint8_t x376 = 44U;
int16_t x378 = 9;
uint16_t x390 = 2450U;
uint64_t x391 = 6864889358039288LLU;
uint16_t x395 = 32U;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = INT8_MAX;
	static uint64_t x3 = UINT64_MAX;
	volatile uint64_t x4 = 5LLU;
	int32_t t0 = 296054;

	t0 = (x1<(x2|(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = 1U;
	int32_t t1 = -274647118;

	t1 = (x5<(x6|(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static int8_t x11 = -1;
	int8_t x12 = INT8_MIN;

	t2 = (x9<(x10|(x11==x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x15 = -1;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 19963597;

	t3 = (x13<(x14|(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int32_t x20 = INT32_MAX;
	int32_t t4 = -446547;

	t4 = (x17<(x18|(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint8_t x22 = 7U;
	int32_t t5 = -1;

	t5 = (x21<(x22|(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -15518285792462733LL;
	volatile int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 56721;

	t6 = (x25<(x26|(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	volatile int8_t x30 = -32;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 37241;

	t7 = (x29<(x30|(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 337U;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 3U;
	int32_t t8 = -12;

	t8 = (x33<(x34|(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 50U;
	volatile int64_t x38 = INT64_MIN;
	volatile int32_t x39 = 4088927;
	volatile uint8_t x40 = 50U;
	static volatile int32_t t9 = -6077138;

	t9 = (x37<(x38|(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 4540LLU;
	int8_t x42 = -1;
	static uint32_t x43 = 1832926U;
	static int64_t x44 = -13141LL;
	static volatile int32_t t10 = -7407;

	t10 = (x41<(x42|(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -3;
	volatile uint64_t x47 = 4LLU;

	t11 = (x45<(x46|(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 0;
	uint32_t x50 = 7673979U;
	uint64_t x51 = 859638444LLU;
	int8_t x52 = INT8_MAX;
	static int32_t t12 = 1;

	t12 = (x49<(x50|(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -3439152461139792LL;
	volatile int64_t x54 = 0LL;
	int32_t x55 = 876;

	t13 = (x53<(x54|(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	int64_t x58 = 608LL;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 168670488011LLU;
	static int32_t t14 = 1194;

	t14 = (x57<(x58|(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1378002U;
	volatile int8_t x62 = INT8_MIN;
	int64_t x63 = -1LL;
	static int32_t x64 = INT32_MIN;
	int32_t t15 = -7133;

	t15 = (x61<(x62|(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint32_t x67 = 915U;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -1727083;

	t16 = (x65<(x66|(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -7545LL;
	volatile uint64_t x71 = 3758660514935LLU;
	static int16_t x72 = INT16_MIN;
	static int32_t t17 = 124865524;

	t17 = (x69<(x70|(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 3582;
	int16_t x74 = INT16_MAX;
	int8_t x75 = 1;
	static int64_t x76 = -1LL;
	volatile int32_t t18 = 396;

	t18 = (x73<(x74|(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	uint16_t x79 = 0U;
	uint8_t x80 = 7U;
	volatile int32_t t19 = -59;

	t19 = (x77<(x78|(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	static int16_t x83 = 7;
	int32_t t20 = 46;

	t20 = (x81<(x82|(x83==x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x86 = 1U;
	uint32_t x87 = 23793U;
	int16_t x88 = -11;
	static volatile int32_t t21 = -750717083;

	t21 = (x85<(x86|(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 26631019LLU;
	int32_t x90 = INT32_MIN;
	int32_t x91 = -1;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -59;

	t22 = (x89<(x90|(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -52;
	uint16_t x95 = UINT16_MAX;
	volatile uint64_t x96 = UINT64_MAX;
	static int32_t t23 = 163844;

	t23 = (x93<(x94|(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = UINT32_MAX;
	static int32_t x100 = 24;
	volatile int32_t t24 = -2110727;

	t24 = (x97<(x98|(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int64_t x102 = 104LL;
	int8_t x103 = -1;
	uint32_t x104 = UINT32_MAX;

	t25 = (x101<(x102|(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 7214U;
	int8_t x106 = -1;
	int32_t x107 = 845825;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 0;

	t26 = (x105<(x106|(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -8183;
	uint16_t x111 = 32U;
	static uint16_t x112 = 601U;
	static volatile int32_t t27 = 5010;

	t27 = (x109<(x110|(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static int64_t x114 = 10634277391LL;
	int64_t x115 = INT64_MAX;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 31;

	t28 = (x113<(x114|(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MAX;
	static int32_t t29 = -8520;

	t29 = (x117<(x118|(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x122 = INT32_MIN;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 3588236;

	t30 = (x121<(x122|(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 5U;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	static int32_t t31 = -110357;

	t31 = (x125<(x126|(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 28;
	int32_t x130 = -1;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = 126612889;

	t32 = (x129<(x130|(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint64_t x134 = UINT64_MAX;
	int16_t x136 = -1;

	t33 = (x133<(x134|(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 928U;
	volatile uint32_t x139 = 17917U;
	uint64_t x140 = 2494967077499719787LLU;
	volatile int32_t t34 = -58824565;

	t34 = (x137<(x138|(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 51126228U;
	volatile int32_t t35 = 0;

	t35 = (x141<(x142|(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = 5;
	volatile int16_t x147 = 419;
	volatile int32_t t36 = -244104;

	t36 = (x145<(x146|(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MAX;
	int32_t t37 = 1664;

	t37 = (x149<(x150|(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint8_t x154 = 49U;
	int8_t x155 = 1;

	t38 = (x153<(x154|(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static volatile uint8_t x158 = 29U;
	static volatile uint32_t x159 = 15350280U;
	int64_t x160 = -1LL;
	int32_t t39 = 1814079;

	t39 = (x157<(x158|(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	static int64_t x162 = INT64_MAX;
	volatile int32_t t40 = 8205;

	t40 = (x161<(x162|(x163==x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	static int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	uint64_t x168 = UINT64_MAX;

	t41 = (x165<(x166|(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 17078682295576652LLU;
	int32_t x170 = INT32_MAX;
	volatile uint16_t x172 = 21U;
	int32_t t42 = 1;

	t42 = (x169<(x170|(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 2288433234LLU;
	volatile uint8_t x176 = UINT8_MAX;
	int32_t t43 = -2497;

	t43 = (x173<(x174|(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint16_t x178 = 146U;
	static int32_t x179 = -937;
	int16_t x180 = -6;

	t44 = (x177<(x178|(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 689685U;
	int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	int32_t t45 = 816;

	t45 = (x181<(x182|(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = -4;
	int32_t x188 = -1;
	volatile int32_t t46 = 6845;

	t46 = (x185<(x186|(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 3U;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = 27860U;
	volatile int32_t t47 = -33;

	t47 = (x189<(x190|(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = UINT8_MAX;
	static int16_t x194 = -36;
	static int32_t x196 = 1565977;

	t48 = (x193<(x194|(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x199 = 62290U;
	int16_t x200 = 1;
	volatile int32_t t49 = -701169;

	t49 = (x197<(x198|(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 301;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = -6;
	static int32_t t50 = -42;

	t50 = (x201<(x202|(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	static int16_t x207 = INT16_MIN;
	uint16_t x208 = 21167U;
	static volatile int32_t t51 = 725;

	t51 = (x205<(x206|(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = 57342862435246435LLU;
	int16_t x212 = INT16_MIN;

	t52 = (x209<(x210|(x211==x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	int64_t x214 = -232634024487278LL;
	uint32_t x216 = 11821U;
	volatile int32_t t53 = 294927;

	t53 = (x213<(x214|(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x219 = 416700817U;
	volatile int8_t x220 = INT8_MAX;
	static volatile int32_t t54 = -10;

	t54 = (x217<(x218|(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x222 = 0;
	int16_t x223 = -27;
	int16_t x224 = INT16_MIN;

	t55 = (x221<(x222|(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x227 = 0U;
	int64_t x228 = 16432999622903LL;
	volatile int32_t t56 = 998620553;

	t56 = (x225<(x226|(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	static uint16_t x231 = UINT16_MAX;
	int32_t x232 = -4;
	volatile int32_t t57 = 2581;

	t57 = (x229<(x230|(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -508;
	volatile int64_t x234 = INT64_MIN;
	static int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 160973276;

	t58 = (x233<(x234|(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1105210785LL;
	uint64_t x238 = 8540521081783LLU;
	uint32_t x239 = 20617U;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 14410169;

	t59 = (x237<(x238|(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = 1874713966606LL;
	int16_t x243 = -377;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = 2968;

	t60 = (x241<(x242|(x243==x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 48U;
	int32_t x247 = -752234894;
	static int8_t x248 = 55;
	volatile int32_t t61 = -582;

	t61 = (x245<(x246|(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	uint8_t x250 = 30U;
	int8_t x251 = INT8_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = -771608393;

	t62 = (x249<(x250|(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 1;
	int64_t x254 = 15692379392119165LL;
	int16_t x255 = -1;
	static uint8_t x256 = 6U;
	volatile int32_t t63 = 4;

	t63 = (x253<(x254|(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 0U;
	uint8_t x258 = 19U;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = 98;

	t64 = (x257<(x258|(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static int64_t x262 = 9121LL;
	uint16_t x263 = 9U;
	volatile int32_t t65 = 1952048;

	t65 = (x261<(x262|(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	volatile int32_t t66 = -717310;

	t66 = (x265<(x266|(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 514057U;
	volatile int64_t x270 = 8334892775192LL;
	uint16_t x271 = UINT16_MAX;
	uint32_t x272 = 3U;
	volatile int32_t t67 = 367381828;

	t67 = (x269<(x270|(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	static int8_t x274 = -1;
	int64_t x275 = INT64_MAX;
	static volatile int32_t t68 = -1;

	t68 = (x273<(x274|(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 328U;
	int16_t x279 = INT16_MAX;
	int16_t x280 = 2;

	t69 = (x277<(x278|(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -3;
	uint32_t x282 = UINT32_MAX;
	static volatile int32_t x283 = -1;
	int16_t x284 = -1;
	int32_t t70 = 942917678;

	t70 = (x281<(x282|(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 5;
	int16_t x286 = INT16_MIN;
	int32_t x287 = 505502;
	int64_t x288 = INT64_MIN;
	static int32_t t71 = 1;

	t71 = (x285<(x286|(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x289 = 1U;
	int8_t x291 = INT8_MAX;
	int32_t x292 = -1;

	t72 = (x289<(x290|(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 42;

	t73 = (x293<(x294|(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 24U;
	static int8_t x299 = 1;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t74 = -1;

	t74 = (x297<(x298|(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -417;
	int16_t x304 = INT16_MAX;
	int32_t t75 = 1072883;

	t75 = (x301<(x302|(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	static uint64_t x308 = 1236LLU;

	t76 = (x305<(x306|(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -7;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;

	t77 = (x309<(x310|(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -230844274;
	uint16_t x314 = 11000U;
	int8_t x315 = INT8_MAX;
	volatile uint64_t x316 = 3071513086LLU;
	static int32_t t78 = -6;

	t78 = (x313<(x314|(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x319 = -1399;
	volatile int32_t t79 = 40581;

	t79 = (x317<(x318|(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x323 = INT32_MIN;
	volatile int32_t t80 = -11035751;

	t80 = (x321<(x322|(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = 67U;
	int32_t t81 = 222645036;

	t81 = (x325<(x326|(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = -28;
	int64_t x331 = INT64_MAX;
	volatile int32_t t82 = -154;

	t82 = (x329<(x330|(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MAX;
	static volatile uint32_t x334 = 29444U;
	volatile uint32_t x335 = 15U;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = 20244;

	t83 = (x333<(x334|(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = INT8_MAX;
	uint32_t x339 = 3643922U;
	volatile int16_t x340 = -1;
	static int32_t t84 = 199326952;

	t84 = (x337<(x338|(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 94029562;
	int64_t x343 = INT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -21;

	t85 = (x341<(x342|(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 15;

	t86 = (x345<(x346|(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 21058228U;
	uint64_t x350 = 3064013917LLU;
	static volatile int64_t x351 = 1135LL;
	static int8_t x352 = 3;
	int32_t t87 = 2;

	t87 = (x349<(x350|(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	volatile int16_t x355 = -1;
	int64_t x356 = -1912244225337740287LL;
	int32_t t88 = -1045574789;

	t88 = (x353<(x354|(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	volatile uint8_t x358 = 93U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = -1;
	static volatile int32_t t89 = 0;

	t89 = (x357<(x358|(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;

	t90 = (x361<(x362|(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 2783021LLU;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = -21440LL;
	volatile int32_t t91 = 289771;

	t91 = (x365<(x366|(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = 6844;
	int32_t x372 = INT32_MAX;
	int32_t t92 = 130;

	t92 = (x369<(x370|(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	uint64_t x374 = 93861469412032562LLU;
	volatile int32_t t93 = -7;

	t93 = (x373<(x374|(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 79U;
	volatile uint32_t x379 = 474U;
	uint8_t x380 = 10U;
	int32_t t94 = -156273386;

	t94 = (x377<(x378|(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 272250615;

	t95 = (x381<(x382|(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	static volatile uint16_t x386 = UINT16_MAX;
	uint64_t x387 = 302LLU;
	int64_t x388 = 152007206706285LL;
	volatile int32_t t96 = 30181;

	t96 = (x385<(x386|(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -3;
	int8_t x392 = -1;
	volatile int32_t t97 = 51;

	t97 = (x389<(x390|(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	static int8_t x396 = INT8_MAX;
	static int32_t t98 = -3822;

	t98 = (x393<(x394|(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -55;
	int8_t x398 = INT8_MIN;
	static int32_t x399 = INT32_MIN;
	int8_t x400 = -1;
	volatile int32_t t99 = -1039685;

	t99 = (x397<(x398|(x399==x400)));

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

