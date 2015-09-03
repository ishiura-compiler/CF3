#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
volatile int32_t t0 = -1324;
uint32_t x7 = 278562162U;
int8_t x13 = INT8_MAX;
int8_t x16 = -25;
static volatile int32_t t4 = -101;
uint8_t x25 = 9U;
volatile uint16_t x27 = 51U;
int8_t x34 = INT8_MIN;
static volatile int8_t x36 = -1;
int32_t t7 = -14741;
static uint32_t x38 = 105274U;
volatile int32_t t9 = -6760;
int8_t x52 = -1;
static volatile int32_t t11 = 104;
int8_t x55 = INT8_MAX;
int16_t x56 = 1;
uint64_t x58 = 1256693LLU;
static int32_t t13 = -1;
static uint32_t x67 = 1294U;
static int32_t t15 = -16133855;
int8_t x77 = -3;
static int32_t x80 = 73932;
static volatile int32_t t18 = 1262;
static int8_t x86 = 1;
static int64_t x88 = INT64_MAX;
volatile int32_t t20 = 12;
int32_t x90 = INT32_MIN;
volatile int32_t t21 = -3408;
int64_t x99 = -1LL;
volatile int8_t x101 = 1;
int8_t x105 = INT8_MIN;
static volatile int32_t t26 = -731028;
volatile int16_t x113 = INT16_MAX;
volatile int64_t x118 = INT64_MIN;
int64_t x120 = INT64_MIN;
uint16_t x128 = 10112U;
int64_t x132 = INT64_MIN;
int32_t x141 = -1;
volatile int16_t x142 = -117;
static int32_t x143 = 105;
int16_t x147 = INT16_MAX;
int64_t x148 = -8218627LL;
int32_t x150 = INT32_MIN;
static volatile int32_t t38 = 1638765;
volatile int32_t t39 = -1;
static uint16_t x165 = 423U;
uint32_t x170 = 5042925U;
uint16_t x171 = UINT16_MAX;
volatile int32_t t41 = -937008;
uint16_t x177 = 5121U;
int64_t x180 = -4509828904LL;
int16_t x182 = INT16_MIN;
static volatile int32_t t45 = 17552628;
int16_t x189 = 53;
volatile uint64_t x191 = UINT64_MAX;
volatile int32_t t47 = 0;
volatile int16_t x199 = 221;
int32_t t48 = 30306685;
int32_t x204 = INT32_MIN;
static int8_t x207 = INT8_MIN;
int8_t x213 = -1;
int32_t x221 = -134;
static volatile uint32_t x222 = UINT32_MAX;
int8_t x229 = 51;
int32_t x237 = -1;
volatile int16_t x243 = INT16_MIN;
static int8_t x244 = 7;
volatile int32_t t58 = -1;
int32_t x246 = 31160083;
int16_t x248 = -131;
int32_t t59 = -3082;
int64_t x254 = INT64_MIN;
volatile int32_t t61 = -277170671;
int8_t x257 = 15;
int64_t x258 = -70LL;
int32_t x269 = 114003846;
volatile int64_t x277 = INT64_MAX;
uint32_t x280 = UINT32_MAX;
int8_t x286 = INT8_MIN;
int8_t x287 = INT8_MIN;
int32_t t68 = 1588311;
int64_t x289 = INT64_MIN;
int64_t x294 = -16796LL;
int64_t x304 = -2280655103LL;
int64_t x307 = -115LL;
uint64_t x312 = 31800LLU;
int32_t t76 = 9221833;
uint32_t x321 = 571372U;
uint8_t x326 = UINT8_MAX;
volatile uint64_t x331 = 247018170260553LLU;
int32_t t80 = 110009;
int16_t x337 = -396;
uint16_t x338 = 394U;
static volatile uint64_t x339 = 54524281992466LLU;
int64_t x341 = -1LL;
int16_t x346 = -1;
volatile int32_t t83 = 506627;
uint32_t x359 = UINT32_MAX;
volatile uint8_t x360 = 1U;
volatile int32_t t86 = -310846;
uint32_t x362 = UINT32_MAX;
int32_t x363 = INT32_MIN;
static int8_t x373 = -47;
int8_t x374 = INT8_MIN;
int8_t x379 = -5;
int16_t x384 = INT16_MIN;
int32_t t92 = -100;
int8_t x389 = -6;
int8_t x394 = INT8_MIN;
uint64_t x396 = 31LLU;
static int32_t t94 = -1;
int64_t x397 = INT64_MIN;
int32_t x399 = INT32_MIN;
int64_t x403 = INT64_MAX;
int64_t x409 = INT64_MAX;
static volatile int32_t t98 = 52354;
uint64_t x417 = UINT64_MAX;
volatile int32_t t99 = 0;


void f0(void) {
	int32_t x1 = -1;
	int32_t x2 = -1;
	int8_t x3 = INT8_MIN;

	t0 = (x1<(x2==(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 1763803553186LLU;
	static int16_t x6 = INT16_MIN;
	int8_t x8 = INT8_MAX;
	static int32_t t1 = 300453285;

	t1 = (x5<(x6==(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int32_t x10 = -44;
	static int32_t x11 = INT32_MIN;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 147052385;

	t2 = (x9<(x10==(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = UINT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t t3 = 3408;

	t3 = (x13<(x14==(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 8706491230345LLU;
	volatile int8_t x18 = INT8_MIN;
	static int32_t x19 = -1;
	volatile uint8_t x20 = UINT8_MAX;

	t4 = (x17<(x18==(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -1LL;
	int8_t x28 = 42;
	static int32_t t5 = -3787;

	t5 = (x25<(x26==(x27/x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MAX;
	int64_t x31 = 25867259184615854LL;
	int16_t x32 = INT16_MAX;
	static volatile int32_t t6 = 55898468;

	t6 = (x29<(x30==(x31/x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x35 = -94;

	t7 = (x33<(x34==(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -139;
	uint32_t x39 = 24571902U;
	volatile int8_t x40 = INT8_MAX;
	int32_t t8 = -117069;

	t8 = (x37<(x38==(x39/x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 66117784U;
	volatile int8_t x42 = 6;
	int32_t x43 = INT32_MIN;
	int8_t x44 = -12;

	t9 = (x41<(x42==(x43/x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -62;

	t10 = (x45<(x46==(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 1946;
	volatile int64_t x50 = 7517872LL;
	volatile uint32_t x51 = 5121466U;

	t11 = (x49<(x50==(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 32132U;
	static int32_t t12 = -1124;

	t12 = (x53<(x54==(x55/x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	uint16_t x59 = 11398U;
	static int64_t x60 = 3412709103052285LL;

	t13 = (x57<(x58==(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 16U;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MIN;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 604204;

	t14 = (x61<(x62==(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 120657;
	int8_t x66 = 60;
	int64_t x68 = 22902568283875LL;

	t15 = (x65<(x66==(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	volatile int16_t x70 = -32;
	static int8_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = -49560;

	t16 = (x69<(x70==(x71/x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = -16;
	static uint8_t x75 = UINT8_MAX;
	volatile uint64_t x76 = 3861552283114LLU;
	volatile int32_t t17 = -499;

	t17 = (x73<(x74==(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = -431LL;
	int32_t x79 = -1;

	t18 = (x77<(x78==(x79/x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	int64_t x83 = -1LL;
	int64_t x84 = INT64_MIN;
	int32_t t19 = 12453;

	t19 = (x81<(x82==(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = -1;
	int8_t x87 = -1;

	t20 = (x85<(x86==(x87/x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = -464;
	volatile uint8_t x92 = UINT8_MAX;

	t21 = (x89<(x90==(x91/x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static int64_t x94 = INT64_MIN;
	uint32_t x95 = 259617460U;
	static uint16_t x96 = 254U;
	volatile int32_t t22 = -479790;

	t22 = (x93<(x94==(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	volatile uint64_t x98 = 2151316089844LLU;
	int16_t x100 = 2;
	volatile int32_t t23 = -9534251;

	t23 = (x97<(x98==(x99/x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x102 = INT32_MIN;
	volatile int64_t x103 = -3498300464LL;
	volatile int32_t x104 = -36;
	int32_t t24 = 2;

	t24 = (x101<(x102==(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = -711;
	uint16_t x107 = 1972U;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 53;

	t25 = (x105<(x106==(x107/x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -4;

	t26 = (x109<(x110==(x111/x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x114 = UINT16_MAX;
	static int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	volatile int32_t t27 = -155;

	t27 = (x113<(x114==(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	volatile int16_t x119 = INT16_MIN;
	int32_t t28 = 16;

	t28 = (x117<(x118==(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 7994U;
	int32_t x122 = INT32_MAX;
	int8_t x123 = -1;
	int16_t x124 = INT16_MAX;
	int32_t t29 = -33;

	t29 = (x121<(x122==(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	static int32_t x126 = -537286753;
	volatile uint64_t x127 = 13623857014712790LLU;
	int32_t t30 = -473173452;

	t30 = (x125<(x126==(x127/x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = 1791;
	uint32_t x130 = 397620299U;
	uint8_t x131 = UINT8_MAX;
	volatile int32_t t31 = 80427;

	t31 = (x129<(x130==(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 755624166895LLU;
	int16_t x134 = 0;
	int16_t x135 = -2816;
	int8_t x136 = INT8_MAX;
	volatile int32_t t32 = -69396;

	t32 = (x133<(x134==(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x137 = 73U;
	uint64_t x138 = 124179764284771347LLU;
	static uint8_t x139 = 11U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t33 = -107081;

	t33 = (x137<(x138==(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t34 = -90354512;

	t34 = (x141<(x142==(x143/x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 2U;
	int32_t x146 = INT32_MIN;
	int32_t t35 = 206711;

	t35 = (x145<(x146==(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	volatile int8_t x152 = INT8_MAX;
	int32_t t36 = 14085;

	t36 = (x149<(x150==(x151/x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = 4;
	static int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t37 = -255826;

	t37 = (x153<(x154==(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	volatile uint8_t x158 = 1U;
	static int16_t x159 = INT16_MAX;
	volatile int64_t x160 = INT64_MAX;

	t38 = (x157<(x158==(x159/x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 964696722680LL;
	static int8_t x162 = -6;
	volatile int16_t x163 = -1;
	uint64_t x164 = 4375598217LLU;

	t39 = (x161<(x162==(x163/x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x166 = 5631142611641961LLU;
	int8_t x167 = 0;
	uint16_t x168 = 10U;
	static volatile int32_t t40 = 25610919;

	t40 = (x165<(x166==(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x172 = 8LLU;

	t41 = (x169<(x170==(x171/x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	uint8_t x175 = 1U;
	static uint16_t x176 = 1U;
	volatile int32_t t42 = 0;

	t42 = (x173<(x174==(x175/x176)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x178 = 3230322U;
	static int64_t x179 = -1LL;
	volatile int32_t t43 = -11725;

	t43 = (x177<(x178==(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 0;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = 44103565825206734LLU;
	static volatile int32_t t44 = 277;

	t44 = (x181<(x182==(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 81;
	volatile int8_t x186 = -4;
	static int32_t x187 = -1;
	int64_t x188 = INT64_MAX;

	t45 = (x185<(x186==(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x190 = UINT16_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t46 = -4;

	t46 = (x189<(x190==(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x193 = 13U;
	static int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	static uint16_t x196 = 13179U;

	t47 = (x193<(x194==(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -1LL;
	uint64_t x198 = 459344408242663060LLU;
	uint64_t x200 = 23360445738880001LLU;

	t48 = (x197<(x198==(x199/x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	static int32_t t49 = 487;

	t49 = (x201<(x202==(x203/x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	uint16_t x208 = UINT16_MAX;
	int32_t t50 = 61;

	t50 = (x205<(x206==(x207/x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 17U;
	static int64_t x210 = INT64_MIN;
	static uint16_t x211 = 1468U;
	static int16_t x212 = -11519;
	static volatile int32_t t51 = 2565;

	t51 = (x209<(x210==(x211/x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x214 = INT32_MIN;
	static int32_t x215 = -1;
	uint8_t x216 = 52U;
	int32_t t52 = -10676011;

	t52 = (x213<(x214==(x215/x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x223 = 1U;
	volatile int32_t x224 = -368423;
	volatile int32_t t53 = -14;

	t53 = (x221<(x222==(x223/x224)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = INT16_MAX;
	volatile uint32_t x226 = 796456U;
	static int64_t x227 = -5LL;
	static volatile int8_t x228 = INT8_MAX;
	volatile int32_t t54 = 204184940;

	t54 = (x225<(x226==(x227/x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t55 = -1899627;

	t55 = (x229<(x230==(x231/x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x234 = UINT64_MAX;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = UINT64_MAX;
	static int32_t t56 = 231;

	t56 = (x233<(x234==(x235/x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	uint32_t x240 = 52205U;
	volatile int32_t t57 = -3160492;

	t57 = (x237<(x238==(x239/x240)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x241 = INT32_MIN;
	static int16_t x242 = -1;

	t58 = (x241<(x242==(x243/x244)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x245 = 103U;
	volatile uint32_t x247 = UINT32_MAX;

	t59 = (x245<(x246==(x247/x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x249 = 188953LLU;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 55U;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t60 = -730446;

	t60 = (x249<(x250==(x251/x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	int16_t x255 = 2;
	uint64_t x256 = 15LLU;

	t61 = (x253<(x254==(x255/x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	static int32_t t62 = 0;

	t62 = (x257<(x258==(x259/x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	static int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = -1153;

	t63 = (x261<(x262==(x263/x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	static int64_t x266 = -1LL;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 989U;
	volatile int32_t t64 = -3626276;

	t64 = (x265<(x266==(x267/x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x270 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	volatile int64_t x272 = INT64_MIN;
	static int32_t t65 = -107;

	t65 = (x269<(x270==(x271/x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	uint8_t x274 = 1U;
	int8_t x275 = -1;
	int32_t x276 = -1;
	static volatile int32_t t66 = 963630778;

	t66 = (x273<(x274==(x275/x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = 785U;
	static int32_t x279 = INT32_MIN;
	int32_t t67 = -6077011;

	t67 = (x277<(x278==(x279/x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	static int8_t x288 = -5;

	t68 = (x285<(x286==(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = 0;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t69 = 2038803;

	t69 = (x289<(x290==(x291/x292)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = -700394543776602456LL;
	static int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	static int32_t t70 = -835;

	t70 = (x293<(x294==(x295/x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	static volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t71 = -7;

	t71 = (x297<(x298==(x299/x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x301 = INT8_MIN;
	uint16_t x302 = 843U;
	static volatile int64_t x303 = INT64_MAX;
	int32_t t72 = 12;

	t72 = (x301<(x302==(x303/x304)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x305 = UINT64_MAX;
	static int32_t x306 = 5862575;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t73 = -408;

	t73 = (x305<(x306==(x307/x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = 25;
	int8_t x310 = INT8_MAX;
	volatile uint32_t x311 = 137U;
	static volatile int32_t t74 = 18216105;

	t74 = (x309<(x310==(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = -61;
	volatile int32_t t75 = 438324;

	t75 = (x313<(x314==(x315/x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int64_t x318 = 618113481158565476LL;
	static volatile int8_t x319 = INT8_MIN;
	int64_t x320 = -259286709328LL;

	t76 = (x317<(x318==(x319/x320)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x322 = 13U;
	volatile uint8_t x323 = 126U;
	volatile int16_t x324 = INT16_MAX;
	static int32_t t77 = -9095;

	t77 = (x321<(x322==(x323/x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 1U;
	int16_t x327 = INT16_MAX;
	volatile uint64_t x328 = 78713508601170621LLU;
	static int32_t t78 = -39127844;

	t78 = (x325<(x326==(x327/x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 0U;
	int16_t x330 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	static int32_t t79 = 3237136;

	t79 = (x329<(x330==(x331/x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 55388908U;
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = -1LL;
	uint32_t x336 = 1U;

	t80 = (x333<(x334==(x335/x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x340 = INT16_MIN;
	static volatile int32_t t81 = 329367;

	t81 = (x337<(x338==(x339/x340)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = INT64_MIN;
	int8_t x343 = -50;
	uint8_t x344 = 2U;
	int32_t t82 = 309980;

	t82 = (x341<(x342==(x343/x344)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x347 = INT64_MAX;
	static int32_t x348 = INT32_MAX;

	t83 = (x345<(x346==(x347/x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -220;

	t84 = (x349<(x350==(x351/x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x353 = 1028190915045LLU;
	int32_t x354 = INT32_MIN;
	int8_t x355 = 0;
	int64_t x356 = 15973950000956584LL;
	volatile int32_t t85 = 5428392;

	t85 = (x353<(x354==(x355/x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MAX;
	uint16_t x358 = UINT16_MAX;

	t86 = (x357<(x358==(x359/x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x361 = -167888560704515263LL;
	int32_t x364 = -34270;
	int32_t t87 = 0;

	t87 = (x361<(x362==(x363/x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = -1344057040648185LL;
	static uint16_t x371 = UINT16_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	static volatile int32_t t88 = 225859;

	t88 = (x369<(x370==(x371/x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x375 = 88U;
	int64_t x376 = INT64_MIN;
	static int32_t t89 = -593383862;

	t89 = (x373<(x374==(x375/x376)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = 15218U;
	uint16_t x380 = 1U;
	volatile int32_t t90 = -76559;

	t90 = (x377<(x378==(x379/x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = -14325;
	uint32_t x382 = 859990U;
	int16_t x383 = INT16_MIN;
	int32_t t91 = 435608824;

	t91 = (x381<(x382==(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -7939783;
	static int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	int8_t x388 = -22;

	t92 = (x385<(x386==(x387/x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MIN;
	int32_t t93 = 80114;

	t93 = (x389<(x390==(x391/x392)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x395 = -1;

	t94 = (x393<(x394==(x395/x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x398 = INT32_MIN;
	static int16_t x400 = -13;
	volatile int32_t t95 = -14032;

	t95 = (x397<(x398==(x399/x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 5005524U;
	int8_t x402 = -1;
	volatile int16_t x404 = -1;
	int32_t t96 = -2866;

	t96 = (x401<(x402==(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x406 = 2U;
	int64_t x407 = -1061204732583213868LL;
	int32_t x408 = -1;
	static int32_t t97 = 1825147;

	t97 = (x405<(x406==(x407/x408)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x410 = 2944198516696LLU;
	uint64_t x411 = UINT64_MAX;
	int8_t x412 = INT8_MIN;

	t98 = (x409<(x410==(x411/x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x418 = 18;
	uint8_t x419 = UINT8_MAX;
	uint16_t x420 = UINT16_MAX;

	t99 = (x417<(x418==(x419/x420)));

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

