#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int32_t x9 = INT32_MIN;
int32_t t2 = 456;
int32_t t3 = 3667;
static uint32_t x17 = 315529U;
int64_t x18 = -3195528505062894LL;
uint16_t x24 = 13903U;
volatile int32_t t6 = -2;
static int32_t t7 = -76683127;
static int16_t x38 = -80;
int32_t x42 = 504;
static uint8_t x44 = 6U;
static int16_t x47 = INT16_MAX;
static int8_t x56 = INT8_MIN;
volatile uint64_t x57 = 1755LLU;
int32_t x62 = INT32_MAX;
uint8_t x64 = 39U;
int32_t t15 = 30635;
int8_t x87 = 40;
int32_t x90 = 11;
int64_t x91 = -137266790446903LL;
static int16_t x92 = INT16_MAX;
int32_t t21 = 14;
volatile int32_t t22 = -3;
static uint64_t x112 = 22718LLU;
uint32_t x121 = UINT32_MAX;
int32_t x136 = INT32_MIN;
int32_t t30 = -10;
uint16_t x144 = 13U;
int64_t x145 = INT64_MIN;
static uint64_t x147 = 42LLU;
uint8_t x148 = UINT8_MAX;
static volatile int32_t t33 = -444;
volatile int32_t x149 = 77;
int32_t t34 = -667;
int32_t x154 = INT32_MIN;
int16_t x158 = 1;
static volatile int32_t t36 = -155663998;
int32_t x165 = INT32_MIN;
volatile int32_t t39 = -597;
static uint64_t x175 = 97LLU;
static uint8_t x176 = UINT8_MAX;
int32_t x188 = INT32_MIN;
static int64_t x194 = 232860723418LL;
uint64_t x199 = 766376846152LLU;
volatile int32_t x201 = -310603;
uint8_t x202 = 10U;
int32_t x219 = INT32_MIN;
int32_t x225 = INT32_MIN;
int32_t x227 = INT32_MIN;
int8_t x231 = -2;
int8_t x240 = INT8_MIN;
int32_t x253 = 1;
int64_t x254 = INT64_MIN;
int32_t x257 = INT32_MAX;
int32_t x260 = -1;
uint32_t x274 = 239368063U;
volatile int32_t t63 = -6080215;
volatile uint8_t x281 = UINT8_MAX;
uint8_t x286 = UINT8_MAX;
int64_t x291 = INT64_MIN;
int16_t x292 = -3412;
static volatile int32_t t67 = -197;
volatile int32_t t68 = -75;
int32_t x297 = INT32_MIN;
int16_t x302 = INT16_MIN;
int16_t x307 = 66;
static int16_t x312 = 0;
static int8_t x313 = 2;
uint32_t x315 = 553706U;
volatile int32_t t73 = -1;
volatile int16_t x329 = INT16_MAX;
volatile int32_t x333 = -1;
uint8_t x335 = 1U;
int32_t t78 = -156;
int64_t x337 = -246LL;
int32_t x347 = -1;
uint16_t x350 = 190U;
int32_t t82 = -62964;
int16_t x359 = 41;
uint64_t x365 = 26734882460LLU;
int16_t x366 = -1;
static int32_t t86 = -119083;
int16_t x377 = INT16_MIN;
static int8_t x383 = 0;
volatile int8_t x384 = INT8_MAX;
static uint32_t x389 = 3727646U;
int16_t x391 = INT16_MAX;
static int64_t x393 = 460LL;
uint32_t x396 = 1173434538U;
int32_t x399 = INT32_MIN;
uint8_t x402 = 12U;
int32_t t94 = 265;
uint64_t x411 = UINT64_MAX;
int8_t x412 = 4;
int16_t x416 = 3677;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -384978;
	static uint16_t x3 = 246U;
	volatile int32_t t0 = 20;

	t0 = ((x1+(x2&x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static int16_t x6 = INT16_MIN;
	static int8_t x7 = -1;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -7;

	t1 = ((x5+(x6&x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	static uint16_t x11 = 279U;
	static int16_t x12 = -1;

	t2 = ((x9+(x10&x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	int64_t x15 = 554200162525532LL;
	volatile int32_t x16 = 942003;

	t3 = ((x13+(x14&x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MAX;
	int32_t x20 = -21;
	int32_t t4 = 6047721;

	t4 = ((x17+(x18&x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	volatile uint64_t x22 = UINT64_MAX;
	uint16_t x23 = 3013U;
	int32_t t5 = 4;

	t5 = ((x21+(x22&x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 9198U;
	static volatile int32_t x26 = INT32_MAX;
	static uint64_t x27 = 505164LLU;
	static int32_t x28 = -148;

	t6 = ((x25+(x26&x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	static int64_t x30 = INT64_MAX;
	static volatile int8_t x31 = INT8_MAX;
	volatile int16_t x32 = INT16_MIN;

	t7 = ((x29+(x30&x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 47;
	int8_t x34 = INT8_MIN;
	int16_t x35 = -3498;
	static uint64_t x36 = UINT64_MAX;
	int32_t t8 = -149731;

	t8 = ((x33+(x34&x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	int8_t x40 = -1;
	volatile int32_t t9 = -121228206;

	t9 = ((x37+(x38&x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 787;
	int8_t x43 = -1;
	static volatile int32_t t10 = -9155;

	t10 = ((x41+(x42&x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = 28032714667132135LLU;
	uint8_t x46 = 11U;
	static int16_t x48 = 4;
	volatile int32_t t11 = -2;

	t11 = ((x45+(x46&x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MIN;
	int64_t x55 = -177696152LL;
	volatile int32_t t12 = -31757190;

	t12 = ((x53+(x54&x55))<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	int64_t x59 = -120855359111466LL;
	int8_t x60 = 23;
	static int32_t t13 = 36;

	t13 = ((x57+(x58&x59))<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -7713020LL;
	volatile int16_t x63 = INT16_MIN;
	int32_t t14 = -186218;

	t14 = ((x61+(x62&x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = -20LL;
	static int32_t x66 = INT32_MAX;
	uint16_t x67 = 9U;
	static volatile int16_t x68 = INT16_MIN;

	t15 = ((x65+(x66&x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = -465;
	int32_t x71 = 764022776;
	int32_t x72 = INT32_MIN;
	static int32_t t16 = -7544;

	t16 = ((x69+(x70&x71))<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 1LLU;
	static uint32_t x75 = 381076U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = 2;

	t17 = ((x73+(x74&x75))<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 361556LL;
	int32_t x78 = INT32_MIN;
	static int8_t x79 = INT8_MAX;
	int64_t x80 = 65645LL;
	static int32_t t18 = 17735;

	t18 = ((x77+(x78&x79))<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	static int32_t t19 = -1;

	t19 = ((x81+(x82&x83))<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MAX;
	int16_t x88 = -1;
	int32_t t20 = -224621292;

	t20 = ((x85+(x86&x87))<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;

	t21 = ((x89+(x90&x91))<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int8_t x94 = -4;
	volatile int8_t x95 = INT8_MAX;
	uint32_t x96 = 7040322U;

	t22 = ((x93+(x94&x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 4083638989LLU;
	int32_t x99 = 4174509;
	int16_t x100 = -1;
	volatile int32_t t23 = 1;

	t23 = ((x97+(x98&x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -2;
	int32_t x102 = 1665271;
	volatile int32_t x103 = -60751;
	static int16_t x104 = INT16_MIN;
	int32_t t24 = -466727578;

	t24 = ((x101+(x102&x103))<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 78401U;
	int16_t x111 = INT16_MIN;
	volatile int32_t t25 = -61;

	t25 = ((x109+(x110&x111))<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x113 = -36676883759005171LL;
	int8_t x114 = 0;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MAX;
	volatile int32_t t26 = 0;

	t26 = ((x113+(x114&x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MAX;
	uint32_t x119 = UINT32_MAX;
	static volatile uint16_t x120 = 1870U;
	int32_t t27 = 275105664;

	t27 = ((x117+(x118&x119))<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x122 = INT16_MIN;
	uint64_t x123 = 1LLU;
	static volatile int8_t x124 = 42;
	volatile int32_t t28 = -174;

	t28 = ((x121+(x122&x123))<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = 2U;
	int16_t x127 = INT16_MIN;
	volatile int8_t x128 = 26;
	static int32_t t29 = -6821291;

	t29 = ((x125+(x126&x127))<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = INT32_MAX;
	int8_t x134 = -1;
	int8_t x135 = -1;

	t30 = ((x133+(x134&x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	volatile int64_t x138 = 876LL;
	static volatile uint32_t x139 = 5420U;
	uint64_t x140 = 4636102288905LLU;
	int32_t t31 = 182402;

	t31 = ((x137+(x138&x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	static uint8_t x142 = 115U;
	int32_t x143 = -458623;
	static volatile int32_t t32 = -4779;

	t32 = ((x141+(x142&x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x146 = 2U;

	t33 = ((x145+(x146&x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x150 = -1LL;
	int16_t x151 = 1;
	static volatile uint64_t x152 = 452169983665LLU;

	t34 = ((x149+(x150&x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 122825634;

	t35 = ((x153+(x154&x155))<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;

	t36 = ((x157+(x158&x159))<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t37 = -303283935;

	t37 = ((x161+(x162&x163))<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -1;
	uint32_t x167 = 504179U;
	int64_t x168 = -266366865689LL;
	int32_t t38 = -51705;

	t38 = ((x165+(x166&x167))<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = 3599387302081LL;
	int64_t x170 = 507LL;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;

	t39 = ((x169+(x170&x171))<x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x174 = UINT32_MAX;
	volatile int32_t t40 = -31553;

	t40 = ((x173+(x174&x175))<x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	static int32_t x179 = -416643;
	static int64_t x180 = 23281LL;
	volatile int32_t t41 = -157626624;

	t41 = ((x177+(x178&x179))<x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x181 = 1;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = 2LL;
	volatile int32_t t42 = 1;

	t42 = ((x181+(x182&x183))<x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x185 = 10U;
	static int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MAX;
	int32_t t43 = -32;

	t43 = ((x185+(x186&x187))<x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = 2U;
	volatile int16_t x191 = INT16_MIN;
	uint8_t x192 = 0U;
	int32_t t44 = -591;

	t44 = ((x189+(x190&x191))<x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	volatile uint8_t x196 = 1U;
	volatile int32_t t45 = 922;

	t45 = ((x193+(x194&x195))<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = 369267919478LL;
	static int64_t x198 = -1LL;
	volatile int64_t x200 = 23887140847645LL;
	volatile int32_t t46 = -218;

	t46 = ((x197+(x198&x199))<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x203 = 1211U;
	static int8_t x204 = INT8_MIN;
	int32_t t47 = 168973138;

	t47 = ((x201+(x202&x203))<x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x205 = 98523U;
	int64_t x206 = -174685282061346507LL;
	int8_t x207 = INT8_MAX;
	static int32_t x208 = -1;
	int32_t t48 = -39;

	t48 = ((x205+(x206&x207))<x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x210 = 1LLU;
	static int16_t x211 = -1;
	uint8_t x212 = 13U;
	static int32_t t49 = -1988894;

	t49 = ((x209+(x210&x211))<x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x213 = -1LL;
	volatile int16_t x214 = INT16_MIN;
	int8_t x215 = -1;
	uint16_t x216 = 30148U;
	volatile int32_t t50 = 26253753;

	t50 = ((x213+(x214&x215))<x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	uint32_t x218 = 66675387U;
	int32_t x220 = -529;
	int32_t t51 = 446853;

	t51 = ((x217+(x218&x219))<x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = -642319700;
	int32_t x222 = INT32_MIN;
	static uint32_t x223 = 1343137184U;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t52 = 3;

	t52 = ((x221+(x222&x223))<x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 19U;
	volatile int16_t x228 = 2720;
	int32_t t53 = -18381173;

	t53 = ((x225+(x226&x227))<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -4;
	static uint32_t x230 = 60489U;
	static volatile uint8_t x232 = 1U;
	static volatile int32_t t54 = 31;

	t54 = ((x229+(x230&x231))<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = 47002LLU;
	uint16_t x238 = UINT16_MAX;
	volatile int64_t x239 = -1LL;
	int32_t t55 = 6;

	t55 = ((x237+(x238&x239))<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 1344205690LLU;
	int64_t x244 = -1LL;
	int32_t t56 = -25189837;

	t56 = ((x241+(x242&x243))<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x245 = 682U;
	int16_t x246 = -1;
	static int64_t x247 = -1LL;
	int8_t x248 = INT8_MIN;
	int32_t t57 = 1227;

	t57 = ((x245+(x246&x247))<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	int64_t x251 = -7498433LL;
	static int32_t x252 = INT32_MIN;
	int32_t t58 = -215;

	t58 = ((x249+(x250&x251))<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x255 = INT32_MIN;
	static int16_t x256 = -1;
	static volatile int32_t t59 = 1260098;

	t59 = ((x253+(x254&x255))<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x258 = INT16_MIN;
	uint32_t x259 = UINT32_MAX;
	int32_t t60 = 802987;

	t60 = ((x257+(x258&x259))<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x265 = 0U;
	static int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 1U;
	int32_t t61 = 82723;

	t61 = ((x265+(x266&x267))<x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x269 = 1U;
	int64_t x270 = 112LL;
	uint64_t x271 = 37560635LLU;
	volatile uint16_t x272 = 7736U;
	static volatile int32_t t62 = 1;

	t62 = ((x269+(x270&x271))<x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MIN;
	volatile uint8_t x275 = 48U;
	volatile int64_t x276 = INT64_MIN;

	t63 = ((x273+(x274&x275))<x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t64 = 203882;

	t64 = ((x277+(x278&x279))<x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x282 = INT16_MIN;
	uint64_t x283 = 99631255110074LLU;
	static int16_t x284 = -938;
	static int32_t t65 = 176606597;

	t65 = ((x281+(x282&x283))<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MIN;
	int64_t x287 = -1LL;
	volatile int32_t x288 = INT32_MAX;
	static volatile int32_t t66 = 3808;

	t66 = ((x285+(x286&x287))<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 282113794U;
	uint8_t x290 = 3U;

	t67 = ((x289+(x290&x291))<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = -1;
	volatile int32_t x294 = -1;
	int8_t x295 = -13;
	volatile int32_t x296 = -1;

	t68 = ((x293+(x294&x295))<x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x298 = INT16_MAX;
	static int16_t x299 = INT16_MAX;
	static uint16_t x300 = 28U;
	volatile int32_t t69 = 5;

	t69 = ((x297+(x298&x299))<x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	static uint32_t x303 = UINT32_MAX;
	static uint64_t x304 = UINT64_MAX;
	volatile int32_t t70 = 70749298;

	t70 = ((x301+(x302&x303))<x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	uint32_t x308 = 0U;
	static int32_t t71 = -217174;

	t71 = ((x305+(x306&x307))<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = -2255;
	int8_t x311 = 0;
	volatile int32_t t72 = 2142864;

	t72 = ((x309+(x310&x311))<x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x314 = 132U;
	int64_t x316 = INT64_MIN;

	t73 = ((x313+(x314&x315))<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MIN;
	volatile int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = 345013307241640LLU;
	static volatile int8_t x320 = -1;
	int32_t t74 = -28;

	t74 = ((x317+(x318&x319))<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = -455341;
	int64_t x322 = INT64_MAX;
	volatile int64_t x323 = 10848936LL;
	int32_t x324 = INT32_MAX;
	volatile int32_t t75 = 176596;

	t75 = ((x321+(x322&x323))<x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = -12752;
	int8_t x326 = 1;
	int64_t x327 = 49690872955043803LL;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t76 = 50087198;

	t76 = ((x325+(x326&x327))<x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x330 = 664299U;
	int32_t x331 = INT32_MIN;
	static volatile int64_t x332 = INT64_MIN;
	int32_t t77 = -31348;

	t77 = ((x329+(x330&x331))<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = INT32_MAX;
	int16_t x336 = INT16_MIN;

	t78 = ((x333+(x334&x335))<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t79 = -230;

	t79 = ((x337+(x338&x339))<x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = UINT16_MAX;
	static int16_t x342 = INT16_MAX;
	int16_t x343 = -167;
	int16_t x344 = INT16_MIN;
	volatile int32_t t80 = 3941;

	t80 = ((x341+(x342&x343))<x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -244;
	int8_t x346 = 57;
	int16_t x348 = INT16_MIN;
	int32_t t81 = -517043;

	t81 = ((x345+(x346&x347))<x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 18U;

	t82 = ((x349+(x350&x351))<x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x353 = -227595648068LL;
	int16_t x354 = INT16_MIN;
	static volatile int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t83 = 2100117;

	t83 = ((x353+(x354&x355))<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -179404277;
	int8_t x358 = -1;
	int32_t x360 = INT32_MIN;
	volatile int32_t t84 = 4;

	t84 = ((x357+(x358&x359))<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x367 = INT64_MIN;
	volatile uint32_t x368 = UINT32_MAX;
	static volatile int32_t t85 = -220701;

	t85 = ((x365+(x366&x367))<x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MIN;
	volatile int16_t x370 = -1;
	volatile int32_t x371 = -1;
	int16_t x372 = INT16_MIN;

	t86 = ((x369+(x370&x371))<x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -86083096774LL;
	static int64_t x374 = 996670LL;
	int8_t x375 = INT8_MIN;
	volatile int16_t x376 = -3;
	volatile int32_t t87 = -713;

	t87 = ((x373+(x374&x375))<x376);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x378 = 13927024LLU;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t88 = -217;

	t88 = ((x377+(x378&x379))<x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int8_t x382 = 1;
	int32_t t89 = -222915;

	t89 = ((x381+(x382&x383))<x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x385 = 57564LLU;
	volatile int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	volatile int32_t t90 = 1;

	t90 = ((x385+(x386&x387))<x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x390 = -1LL;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t91 = -3;

	t91 = ((x389+(x390&x391))<x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x394 = 9939773;
	int32_t x395 = -1;
	int32_t t92 = 157857;

	t92 = ((x393+(x394&x395))<x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t93 = 28246656;

	t93 = ((x397+(x398&x399))<x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = -1;
	uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = INT16_MIN;

	t94 = ((x401+(x402&x403))<x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -1;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 5533612LLU;
	volatile int32_t t95 = 3;

	t95 = ((x405+(x406&x407))<x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x409 = UINT16_MAX;
	static int64_t x410 = -1LL;
	volatile int32_t t96 = -2656188;

	t96 = ((x409+(x410&x411))<x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x413 = 4111693LLU;
	int64_t x414 = INT64_MIN;
	volatile uint32_t x415 = 143579U;
	volatile int32_t t97 = 756;

	t97 = ((x413+(x414&x415))<x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = 6446;
	static uint32_t x418 = 11765U;
	static uint64_t x419 = 14616518891LLU;
	int32_t x420 = INT32_MIN;
	volatile int32_t t98 = 6;

	t98 = ((x417+(x418&x419))<x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 447082452U;
	int16_t x422 = -3748;
	static int16_t x423 = -1;
	uint64_t x424 = 1260189LLU;
	int32_t t99 = -1;

	t99 = ((x421+(x422&x423))<x424);

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

