#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
volatile uint64_t x7 = 12947832168541LLU;
int32_t x9 = -1;
volatile int32_t t4 = -265;
uint64_t x22 = 179257LLU;
int32_t t6 = -28;
static uint8_t x35 = UINT8_MAX;
static int8_t x43 = 13;
uint8_t x46 = 1U;
static uint16_t x47 = 0U;
volatile int32_t t11 = -63811797;
volatile int16_t x50 = 354;
uint32_t x52 = 808956354U;
int8_t x53 = INT8_MIN;
int32_t x57 = INT32_MAX;
int8_t x61 = 14;
uint32_t x63 = 928U;
int16_t x70 = INT16_MIN;
static int16_t x77 = INT16_MIN;
int8_t x84 = INT8_MIN;
static uint64_t x85 = 21219978185LLU;
int32_t t22 = 431848286;
uint8_t x116 = 6U;
int64_t x123 = 602728503397LL;
static int32_t x125 = 911283596;
int32_t x128 = 56582651;
uint16_t x150 = 3440U;
int32_t t40 = 432477;
uint32_t x165 = UINT32_MAX;
volatile uint64_t x167 = 11LLU;
int16_t x169 = INT16_MIN;
int8_t x173 = -1;
int16_t x180 = -372;
volatile int32_t t44 = -90171903;
int32_t t45 = 853;
volatile int16_t x186 = INT16_MIN;
volatile int32_t t46 = -278;
static int32_t t47 = 62296;
int8_t x194 = -1;
static volatile int32_t t48 = 439901084;
uint64_t x212 = UINT64_MAX;
int16_t x213 = -163;
uint32_t x214 = 767688U;
volatile uint64_t x223 = UINT64_MAX;
uint8_t x225 = 3U;
int8_t x227 = 44;
int64_t x234 = -1LL;
int32_t x240 = INT32_MAX;
volatile int8_t x242 = -20;
static uint64_t x248 = UINT64_MAX;
uint64_t x251 = UINT64_MAX;
static volatile int64_t x255 = -1LL;
int32_t t62 = 5;
int16_t x267 = -33;
static uint32_t x273 = 27U;
int64_t x275 = 4320523LL;
int32_t t66 = 180133;
int8_t x278 = -1;
uint64_t x279 = 7LLU;
uint64_t x286 = 2022099770235942620LLU;
int32_t x293 = -1;
static int32_t t71 = 303934335;
int16_t x305 = INT16_MIN;
int64_t x308 = INT64_MIN;
volatile int32_t t74 = 14125;
int16_t x312 = -1;
static int32_t t75 = 210916;
uint32_t x317 = UINT32_MAX;
int64_t x319 = INT64_MAX;
int32_t x320 = 15;
int8_t x325 = INT8_MIN;
int32_t x330 = -3395489;
volatile int32_t t80 = -797697;
uint8_t x335 = 4U;
uint8_t x337 = 0U;
uint8_t x338 = 3U;
int8_t x350 = -1;
int32_t t85 = -64180;
uint64_t x355 = 1105795558130716903LLU;
volatile int64_t x362 = INT64_MIN;
int32_t x363 = -17857183;
uint64_t x368 = UINT64_MAX;
uint16_t x372 = 52U;
volatile int32_t t90 = -552596325;
static uint8_t x375 = 47U;
static volatile int32_t t91 = 404615;
int32_t t92 = -420283;
static int64_t x385 = INT64_MAX;
volatile int32_t x391 = -253600277;
volatile int32_t t95 = -44;
int64_t x395 = 51114242820LL;
static int32_t t96 = -15;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint16_t x3 = 1897U;
	static volatile int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = 18866;

	t0 = ((x1/x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -39;
	int64_t x6 = INT64_MIN;
	int32_t x8 = 11208;
	volatile int32_t t1 = -198;

	t1 = ((x5/x6)==(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 1;
	volatile int16_t x11 = -1;
	uint16_t x12 = 6263U;
	volatile int32_t t2 = -21112479;

	t2 = ((x9/x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	uint16_t x14 = 160U;
	int32_t x15 = 4411;
	uint8_t x16 = 4U;
	int32_t t3 = -1;

	t3 = ((x13/x14)==(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -199187LL;
	uint8_t x18 = 34U;
	int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MAX;

	t4 = ((x17/x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = -214581618LL;
	int32_t t5 = 921454081;

	t5 = ((x21/x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MAX;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 1655444365102524254LLU;

	t6 = ((x25/x26)==(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static volatile uint16_t x30 = 2U;
	volatile int32_t x31 = -28807;
	static int8_t x32 = INT8_MAX;
	static int32_t t7 = 1;

	t7 = ((x29/x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MIN;
	uint32_t x36 = 2124345454U;
	int32_t t8 = -29230077;

	t8 = ((x33/x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 5LL;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -8;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 0;

	t9 = ((x37/x38)==(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	static uint64_t x42 = 1947573644192806LLU;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -6;

	t10 = ((x41/x42)==(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45/x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 6645995599246041444LLU;
	uint8_t x51 = 57U;
	volatile int32_t t12 = 0;

	t12 = ((x49/x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MAX;
	int32_t x55 = INT32_MAX;
	static uint16_t x56 = UINT16_MAX;
	int32_t t13 = -14;

	t13 = ((x53/x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 56U;
	uint32_t x60 = 60U;
	static volatile int32_t t14 = 1;

	t14 = ((x57/x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = 23464378;

	t15 = ((x61/x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 55314312372LLU;
	int32_t x66 = -1;
	volatile int16_t x67 = INT16_MAX;
	int32_t x68 = -880568057;
	int32_t t16 = -1;

	t16 = ((x65/x66)==(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static int8_t x71 = INT8_MIN;
	static volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -4;

	t17 = ((x69/x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static int8_t x74 = INT8_MAX;
	int16_t x75 = -1;
	volatile int32_t x76 = 1;
	int32_t t18 = -1047;

	t18 = ((x73/x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = INT32_MIN;
	int8_t x79 = 10;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -750;

	t19 = ((x77/x78)==(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t t20 = 296;

	t20 = ((x81/x82)==(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 32U;
	int32_t x87 = -1;
	int32_t x88 = -1;
	static volatile int32_t t21 = 534938764;

	t21 = ((x85/x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 1117LL;
	int32_t x90 = INT32_MAX;
	uint16_t x91 = 13300U;
	uint64_t x92 = 139129016218340LLU;

	t22 = ((x89/x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 6355990946321690844LLU;
	int8_t x94 = -1;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 649670949428417885LLU;
	int32_t t23 = -206705171;

	t23 = ((x93/x94)==(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -3;
	int16_t x98 = -1;
	int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -3;

	t24 = ((x97/x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 7808367U;
	int64_t x102 = -19980473109LL;
	int64_t x103 = INT64_MAX;
	static int16_t x104 = -3278;
	int32_t t25 = -87704;

	t25 = ((x101/x102)==(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	volatile uint32_t x106 = 26U;
	int32_t x107 = INT32_MIN;
	volatile int64_t x108 = INT64_MAX;
	int32_t t26 = -5;

	t26 = ((x105/x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 2066441089453346LL;
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = -3428;
	static int32_t x112 = -199938;
	static int32_t t27 = -1410767;

	t27 = ((x109/x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 0;
	int16_t x114 = -410;
	uint64_t x115 = 967064943LLU;
	int32_t t28 = 57;

	t28 = ((x113/x114)==(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 240U;
	volatile int8_t x120 = 0;
	volatile int32_t t29 = 0;

	t29 = ((x117/x118)==(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	static int16_t x122 = 56;
	uint64_t x124 = 154537673350899536LLU;
	volatile int32_t t30 = -859657949;

	t30 = ((x121/x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 13U;
	static int16_t x127 = INT16_MAX;
	int32_t t31 = 24147;

	t31 = ((x125/x126)==(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint8_t x130 = 28U;
	int16_t x131 = -446;
	int8_t x132 = -1;
	volatile int32_t t32 = 3099363;

	t32 = ((x129/x130)==(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MAX;
	static volatile int32_t t33 = 1071235198;

	t33 = ((x133/x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = -1241;
	int32_t t34 = -326;

	t34 = ((x137/x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -3;
	volatile uint32_t x142 = 19171U;
	uint32_t x143 = UINT32_MAX;
	static uint32_t x144 = 6148783U;
	int32_t t35 = 89886;

	t35 = ((x141/x142)==(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -28;
	static int64_t x146 = -60294024LL;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -1;
	volatile int32_t t36 = 399845703;

	t36 = ((x145/x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 2223799U;
	uint16_t x151 = 4U;
	int64_t x152 = -42LL;
	volatile int32_t t37 = -160;

	t37 = ((x149/x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	uint32_t x156 = 192U;
	int32_t t38 = 20416124;

	t38 = ((x153/x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 91937770;

	t39 = ((x157/x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static uint32_t x162 = 208709014U;
	int64_t x163 = -67438LL;
	static int16_t x164 = INT16_MIN;

	t40 = ((x161/x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = -1;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = -1;

	t41 = ((x165/x166)==(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = UINT32_MAX;
	int64_t x171 = 1391943198738LL;
	static volatile int16_t x172 = INT16_MIN;
	static volatile int32_t t42 = 390576;

	t42 = ((x169/x170)==(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -1;
	uint32_t x175 = 20645958U;
	static volatile int32_t x176 = INT32_MIN;
	int32_t t43 = 339138;

	t43 = ((x173/x174)==(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 214U;
	volatile uint8_t x178 = 3U;
	uint32_t x179 = 19U;

	t44 = ((x177/x178)==(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MAX;
	int64_t x183 = -1LL;
	uint64_t x184 = 191248LLU;

	t45 = ((x181/x182)==(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -8033LL;
	int64_t x187 = 108292732LL;
	volatile int16_t x188 = INT16_MAX;

	t46 = ((x185/x186)==(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	volatile int16_t x192 = INT16_MAX;

	t47 = ((x189/x190)==(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -5;
	volatile uint8_t x195 = UINT8_MAX;
	volatile uint32_t x196 = 248950U;

	t48 = ((x193/x194)==(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 5728U;
	static int8_t x199 = INT8_MIN;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = -83904;

	t49 = ((x197/x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MIN;
	int8_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = -9682;

	t50 = ((x201/x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	volatile uint16_t x206 = 106U;
	uint32_t x207 = UINT32_MAX;
	volatile uint64_t x208 = UINT64_MAX;
	static volatile int32_t t51 = -14954;

	t51 = ((x205/x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MAX;
	static int32_t t52 = -1;

	t52 = ((x209/x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x215 = INT32_MIN;
	int16_t x216 = 3;
	volatile int32_t t53 = 0;

	t53 = ((x213/x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	volatile int8_t x222 = -1;
	int8_t x224 = -12;
	int32_t t54 = -4077339;

	t54 = ((x221/x222)==(x223<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x226 = INT16_MAX;
	int64_t x228 = -12378419LL;
	int32_t t55 = -7367;

	t55 = ((x225/x226)==(x227<=x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x229 = 240;
	int32_t x230 = INT32_MIN;
	static uint8_t x231 = 7U;
	int16_t x232 = INT16_MIN;
	int32_t t56 = 483031592;

	t56 = ((x229/x230)==(x231<=x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = -2;
	int32_t t57 = -98;

	t57 = ((x233/x234)==(x235<=x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	static uint8_t x238 = 1U;
	int8_t x239 = -1;
	int32_t t58 = -126326;

	t58 = ((x237/x238)==(x239<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 153426944586208525LLU;
	int8_t x243 = 62;
	static int16_t x244 = -1;
	volatile int32_t t59 = 20;

	t59 = ((x241/x242)==(x243<=x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 1U;
	static uint8_t x247 = 17U;
	int32_t t60 = -99640;

	t60 = ((x245/x246)==(x247<=x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MAX;
	int8_t x250 = 22;
	uint32_t x252 = UINT32_MAX;
	int32_t t61 = -575869;

	t61 = ((x249/x250)==(x251<=x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 2153055448894005024LLU;
	static uint32_t x254 = 1581U;
	int32_t x256 = INT32_MIN;

	t62 = ((x253/x254)==(x255<=x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MAX;
	int32_t x260 = 123765;
	static volatile int32_t t63 = 278845;

	t63 = ((x257/x258)==(x259<=x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 6223128LLU;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -5392;
	int32_t x264 = INT32_MIN;
	int32_t t64 = 28948;

	t64 = ((x261/x262)==(x263<=x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = 11;
	uint16_t x266 = UINT16_MAX;
	int64_t x268 = 1345330264534850972LL;
	volatile int32_t t65 = -766233128;

	t65 = ((x265/x266)==(x267<=x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x274 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;

	t66 = ((x273/x274)==(x275<=x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = INT8_MIN;
	int32_t x280 = -1;
	static volatile int32_t t67 = 24657846;

	t67 = ((x277/x278)==(x279<=x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MAX;
	volatile uint16_t x282 = 1163U;
	int32_t x283 = -1;
	volatile int16_t x284 = 15174;
	int32_t t68 = 1;

	t68 = ((x281/x282)==(x283<=x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 3469902402326728LLU;
	int16_t x287 = -5;
	int32_t x288 = INT32_MIN;
	volatile int32_t t69 = 397246;

	t69 = ((x285/x286)==(x287<=x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 2967LLU;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 2774U;
	volatile int32_t t70 = 11735;

	t70 = ((x289/x290)==(x291<=x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = 1;

	t71 = ((x293/x294)==(x295<=x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MAX;
	volatile int32_t x299 = INT32_MAX;
	volatile int8_t x300 = -1;
	volatile int32_t t72 = -12384;

	t72 = ((x297/x298)==(x299<=x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MAX;
	uint32_t x302 = UINT32_MAX;
	static int32_t x303 = 121;
	int64_t x304 = 310722127009797308LL;
	static int32_t t73 = -2;

	t73 = ((x301/x302)==(x303<=x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = INT32_MAX;
	volatile int8_t x307 = INT8_MAX;

	t74 = ((x305/x306)==(x307<=x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = 1185766693205LL;
	int64_t x310 = INT64_MIN;
	static int8_t x311 = 0;

	t75 = ((x309/x310)==(x311<=x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 422838U;
	uint8_t x314 = UINT8_MAX;
	volatile int8_t x315 = INT8_MAX;
	int64_t x316 = INT64_MAX;
	volatile int32_t t76 = 18794914;

	t76 = ((x313/x314)==(x315<=x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x318 = 1;
	static volatile int32_t t77 = 1;

	t77 = ((x317/x318)==(x319<=x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	uint64_t x323 = UINT64_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t78 = 965159;

	t78 = ((x321/x322)==(x323<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x326 = 18;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -60168601;
	static volatile int32_t t79 = 108288;

	t79 = ((x325/x326)==(x327<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x331 = 2951756290997169LLU;
	volatile int16_t x332 = INT16_MIN;

	t80 = ((x329/x330)==(x331<=x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 22U;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t81 = -34;

	t81 = ((x333/x334)==(x335<=x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x339 = UINT8_MAX;
	volatile uint8_t x340 = 11U;
	int32_t t82 = 1452;

	t82 = ((x337/x338)==(x339<=x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	static int64_t x342 = INT64_MAX;
	int32_t x343 = -15334266;
	uint8_t x344 = 65U;
	static int32_t t83 = -23934;

	t83 = ((x341/x342)==(x343<=x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	int8_t x346 = -1;
	volatile int32_t x347 = -1;
	uint32_t x348 = 495U;
	volatile int32_t t84 = -183;

	t84 = ((x345/x346)==(x347<=x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x351 = 15U;
	int32_t x352 = 37884503;

	t85 = ((x349/x350)==(x351<=x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x354 = 122U;
	volatile int32_t x356 = -1;
	int32_t t86 = 397049;

	t86 = ((x353/x354)==(x355<=x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -281219438108664068LL;
	volatile uint32_t x358 = 639370U;
	uint8_t x359 = UINT8_MAX;
	volatile int16_t x360 = INT16_MIN;
	int32_t t87 = 214040;

	t87 = ((x357/x358)==(x359<=x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = -1LL;
	static int16_t x364 = INT16_MAX;
	int32_t t88 = 212436924;

	t88 = ((x361/x362)==(x363<=x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MIN;
	static int32_t t89 = 30384358;

	t89 = ((x365/x366)==(x367<=x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -217;
	int32_t x370 = INT32_MAX;
	volatile int16_t x371 = INT16_MAX;

	t90 = ((x369/x370)==(x371<=x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = -113;
	int8_t x374 = INT8_MAX;
	volatile uint32_t x376 = UINT32_MAX;

	t91 = ((x373/x374)==(x375<=x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x377 = 68U;
	uint64_t x378 = 106164349981224084LLU;
	int64_t x379 = -1LL;
	static int64_t x380 = INT64_MAX;

	t92 = ((x377/x378)==(x379<=x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	int8_t x384 = 1;
	static volatile int32_t t93 = 15645;

	t93 = ((x381/x382)==(x383<=x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x386 = 58702LL;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = 0;
	int32_t t94 = 1987;

	t94 = ((x385/x386)==(x387<=x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 1U;
	volatile uint32_t x392 = 104035U;

	t95 = ((x389/x390)==(x391<=x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 18U;
	uint32_t x394 = 220996U;
	volatile int16_t x396 = INT16_MAX;

	t96 = ((x393/x394)==(x395<=x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x397 = 25U;
	static int16_t x398 = INT16_MAX;
	int32_t x399 = 3;
	int8_t x400 = INT8_MAX;
	static int32_t t97 = 379821320;

	t97 = ((x397/x398)==(x399<=x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = 235U;
	int16_t x402 = -208;
	static volatile int8_t x403 = INT8_MIN;
	static int8_t x404 = -1;
	volatile int32_t t98 = 8372593;

	t98 = ((x401/x402)==(x403<=x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MAX;
	volatile uint8_t x406 = UINT8_MAX;
	uint64_t x407 = 3838LLU;
	uint64_t x408 = 140466018438068LLU;
	volatile int32_t t99 = -5;

	t99 = ((x405/x406)==(x407<=x408));

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

