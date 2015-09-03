#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint64_t x3 = UINT64_MAX;
int64_t x6 = -4632LL;
static volatile int16_t x21 = -50;
static volatile int16_t x24 = -1;
int32_t x25 = INT32_MAX;
uint32_t x27 = 1302810U;
static volatile int32_t t9 = -470388;
uint32_t x44 = 2646687U;
static uint32_t x65 = 65533U;
int8_t x70 = -1;
uint64_t x74 = 4721464LLU;
int32_t t15 = -29541;
uint16_t x77 = 6U;
static int8_t x78 = INT8_MIN;
volatile int32_t t16 = 294;
int16_t x88 = INT16_MIN;
volatile uint64_t x95 = 13883669438521130LLU;
volatile uint16_t x97 = 10U;
uint16_t x100 = UINT16_MAX;
static int32_t x111 = -1844721;
volatile int32_t t23 = -1;
int32_t x123 = -1;
uint16_t x135 = 6046U;
int8_t x137 = INT8_MIN;
int8_t x139 = INT8_MAX;
uint32_t x141 = 19380U;
volatile int32_t x143 = -1;
volatile int16_t x147 = 267;
int64_t x149 = -249444815LL;
int32_t x156 = INT32_MIN;
volatile int8_t x157 = -1;
static int16_t x158 = -1;
uint8_t x159 = 2U;
int64_t x161 = INT64_MIN;
uint8_t x164 = 1U;
int32_t t36 = -8230;
static uint64_t x171 = UINT64_MAX;
int16_t x177 = INT16_MAX;
int64_t x179 = 1280LL;
int16_t x187 = 99;
uint64_t x190 = 5918297826231865LLU;
volatile int32_t t43 = 31525555;
int32_t x193 = INT32_MAX;
static int64_t x195 = -1LL;
int8_t x196 = INT8_MIN;
int32_t t44 = 842;
uint32_t x200 = 665424491U;
static uint8_t x214 = UINT8_MAX;
uint64_t x215 = 172872497084LLU;
volatile int32_t t48 = -1462202;
int32_t x217 = -1562230;
int64_t x221 = 88709499700579LL;
static int64_t x225 = INT64_MIN;
volatile uint32_t x228 = 37351843U;
uint16_t x232 = UINT16_MAX;
int64_t x237 = -860717146866191227LL;
volatile uint64_t x239 = UINT64_MAX;
volatile int32_t t54 = -155875676;
uint16_t x244 = 19U;
uint32_t x248 = 5757945U;
uint8_t x255 = 2U;
int16_t x269 = -1;
volatile int8_t x277 = INT8_MIN;
volatile int16_t x280 = INT16_MAX;
int32_t t62 = 935;
static int16_t x281 = INT16_MIN;
uint8_t x288 = UINT8_MAX;
volatile int32_t t64 = 114;
volatile int32_t t65 = -407271230;
int64_t x305 = INT64_MIN;
uint16_t x309 = UINT16_MAX;
int32_t x311 = -1;
int8_t x320 = INT8_MAX;
volatile int64_t x323 = INT64_MAX;
static int8_t x326 = -1;
int64_t x333 = -1LL;
volatile int32_t x341 = 1;
uint32_t x342 = UINT32_MAX;
int8_t x360 = -1;
int16_t x364 = INT16_MIN;
uint8_t x365 = 11U;
int8_t x368 = INT8_MAX;
uint32_t x378 = UINT32_MAX;
volatile int64_t x380 = 173LL;
int32_t t82 = 1;
int16_t x384 = -1;
volatile int16_t x387 = INT16_MIN;
uint8_t x388 = UINT8_MAX;
int8_t x397 = -1;
int16_t x404 = 0;
int16_t x409 = -1;
int64_t x413 = -1LL;
static int16_t x416 = INT16_MAX;
int32_t x420 = INT32_MIN;
static int16_t x425 = -11;
static volatile uint32_t x432 = 20711U;
static uint8_t x437 = 25U;
int32_t x447 = -217;
int32_t t95 = 1;
static int64_t x450 = -75514986441LL;
uint16_t x453 = 4941U;
static int32_t x455 = INT32_MIN;
int32_t x458 = -104601019;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -256549;

	t0 = (x1==((x2&x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 10434386;

	t1 = (x5==((x6&x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = -1;
	int8_t x11 = 8;
	static int8_t x12 = 0;
	int32_t t2 = 86;

	t2 = (x9==((x10&x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static int32_t x14 = INT32_MAX;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	static int32_t t3 = 1;

	t3 = (x13==((x14&x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 44U;
	int32_t x18 = INT32_MIN;
	int8_t x19 = 1;
	uint64_t x20 = 42266531707979LLU;
	int32_t t4 = -398;

	t4 = (x17==((x18&x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	volatile uint8_t x23 = 0U;
	volatile int32_t t5 = 33;

	t5 = (x21==((x22&x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	uint8_t x28 = 46U;
	int32_t t6 = -1;

	t6 = (x25==((x26&x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = 1193LL;
	static int8_t x31 = INT8_MAX;
	uint8_t x32 = 15U;
	int32_t t7 = -933;

	t7 = (x29==((x30&x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = 0;
	int16_t x34 = INT16_MAX;
	int64_t x35 = -1095291608131LL;
	uint16_t x36 = 249U;
	int32_t t8 = -144;

	t8 = (x33==((x34&x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 0LLU;
	int16_t x39 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;

	t9 = (x37==((x38&x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;
	static volatile uint32_t x43 = UINT32_MAX;
	volatile int32_t t10 = -256034;

	t10 = (x41==((x42&x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	uint16_t x46 = 10U;
	uint64_t x47 = UINT64_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = 28770;

	t11 = (x45==((x46&x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x57 = 3U;
	int8_t x58 = -1;
	uint32_t x59 = 368U;
	uint16_t x60 = 5859U;
	volatile int32_t t12 = 444;

	t12 = (x57==((x58&x59)*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 34044343U;
	static volatile int8_t x68 = INT8_MIN;
	int32_t t13 = -62;

	t13 = (x65==((x66&x67)*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -962120378;
	int8_t x71 = -1;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t14 = -51110;

	t14 = (x69==((x70&x71)*x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	static int8_t x75 = 3;
	uint8_t x76 = UINT8_MAX;

	t15 = (x73==((x74&x75)*x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x79 = -1;
	int32_t x80 = 2216;

	t16 = (x77==((x78&x79)*x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = -4;
	volatile int64_t x83 = -1LL;
	static int16_t x84 = -14094;
	volatile int32_t t17 = -92655;

	t17 = (x81==((x82&x83)*x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x85 = INT32_MAX;
	uint8_t x86 = 4U;
	int8_t x87 = 17;
	volatile int32_t t18 = -10;

	t18 = (x85==((x86&x87)*x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = -1;
	int16_t x90 = -1;
	int64_t x91 = -8258964270320LL;
	int64_t x92 = -35LL;
	volatile int32_t t19 = 1;

	t19 = (x89==((x90&x91)*x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	static uint16_t x94 = 1333U;
	volatile int32_t x96 = 13420991;
	volatile int32_t t20 = 96054748;

	t20 = (x93==((x94&x95)*x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x98 = 1210U;
	volatile uint8_t x99 = 52U;
	volatile int32_t t21 = 1;

	t21 = (x97==((x98&x99)*x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int32_t x103 = -186;
	uint64_t x104 = 20LLU;
	volatile int32_t t22 = 31;

	t22 = (x101==((x102&x103)*x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	uint8_t x112 = 5U;

	t23 = (x109==((x110&x111)*x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = -63232449LL;
	static int16_t x116 = -4;
	int32_t t24 = 22;

	t24 = (x113==((x114&x115)*x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MIN;
	static volatile uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = -84;
	int8_t x120 = INT8_MIN;
	int32_t t25 = -63154303;

	t25 = (x117==((x118&x119)*x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t26 = 1;

	t26 = (x121==((x122&x123)*x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 1;
	static uint8_t x126 = UINT8_MAX;
	uint64_t x127 = 10673645676LLU;
	int8_t x128 = -1;
	static volatile int32_t t27 = -399140;

	t27 = (x125==((x126&x127)*x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 203U;
	int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = -1626;
	volatile int32_t t28 = -1;

	t28 = (x129==((x130&x131)*x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 6098305LL;
	int8_t x134 = 0;
	uint32_t x136 = 47U;
	volatile int32_t t29 = -4047928;

	t29 = (x133==((x134&x135)*x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x138 = 124U;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t30 = -34;

	t30 = (x137==((x138&x139)*x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x142 = 9;
	static uint32_t x144 = 820490168U;
	volatile int32_t t31 = 509;

	t31 = (x141==((x142&x143)*x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 200557U;
	volatile int16_t x146 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	static int32_t t32 = 11;

	t32 = (x145==((x146&x147)*x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x150 = UINT64_MAX;
	int8_t x151 = -1;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t33 = -53212193;

	t33 = (x149==((x150&x151)*x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 2342LL;
	uint64_t x154 = 98665805705495539LLU;
	uint64_t x155 = UINT64_MAX;
	volatile int32_t t34 = -173597;

	t34 = (x153==((x154&x155)*x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x160 = INT8_MIN;
	static volatile int32_t t35 = -907436;

	t35 = (x157==((x158&x159)*x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = -1;
	int32_t x163 = INT32_MIN;

	t36 = (x161==((x162&x163)*x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = 0;
	int64_t x166 = -1LL;
	int32_t x167 = 6;
	int8_t x168 = INT8_MAX;
	volatile int32_t t37 = -324713;

	t37 = (x165==((x166&x167)*x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MAX;
	int16_t x170 = -1;
	int64_t x172 = INT64_MIN;
	int32_t t38 = -1;

	t38 = (x169==((x170&x171)*x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 3517585848182LL;
	uint16_t x174 = 16782U;
	int64_t x175 = -223773833094151LL;
	uint64_t x176 = 223035105236014LLU;
	volatile int32_t t39 = 19395;

	t39 = (x173==((x174&x175)*x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x178 = 165U;
	uint16_t x180 = UINT16_MAX;
	int32_t t40 = 13318472;

	t40 = (x177==((x178&x179)*x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = 1;
	uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 984U;
	volatile int32_t t41 = 1;

	t41 = (x181==((x182&x183)*x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -64426786;
	int16_t x186 = 19;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t42 = 15;

	t42 = (x185==((x186&x187)*x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = -1;

	t43 = (x189==((x190&x191)*x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x194 = UINT32_MAX;

	t44 = (x193==((x194&x195)*x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	volatile int32_t t45 = -767301060;

	t45 = (x197==((x198&x199)*x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = INT64_MAX;
	uint64_t x202 = 4575990LLU;
	uint16_t x203 = 11U;
	int8_t x204 = INT8_MAX;
	int32_t t46 = 781;

	t46 = (x201==((x202&x203)*x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = 0;
	uint16_t x206 = 21U;
	static int8_t x207 = 8;
	volatile uint8_t x208 = 20U;
	int32_t t47 = 143144;

	t47 = (x205==((x206&x207)*x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 7388LLU;
	static int64_t x216 = INT64_MAX;

	t48 = (x213==((x214&x215)*x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x218 = 0U;
	uint16_t x219 = 6757U;
	uint32_t x220 = 107U;
	volatile int32_t t49 = 2858395;

	t49 = (x217==((x218&x219)*x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x222 = UINT64_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile uint64_t x224 = UINT64_MAX;
	static volatile int32_t t50 = 55;

	t50 = (x221==((x222&x223)*x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x226 = 46U;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t51 = 22202235;

	t51 = (x225==((x226&x227)*x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	static uint32_t x230 = 191919948U;
	static int8_t x231 = -1;
	volatile int32_t t52 = 173992;

	t52 = (x229==((x230&x231)*x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -1LL;
	int64_t x234 = 500LL;
	int32_t x235 = -1;
	static uint64_t x236 = 274051135503LLU;
	int32_t t53 = -14;

	t53 = (x233==((x234&x235)*x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x238 = -1;
	int32_t x240 = INT32_MIN;

	t54 = (x237==((x238&x239)*x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = 14;
	uint16_t x242 = 0U;
	uint8_t x243 = 0U;
	int32_t t55 = 3199896;

	t55 = (x241==((x242&x243)*x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x246 = 478235871U;
	static uint16_t x247 = 186U;
	volatile int32_t t56 = -261607;

	t56 = (x245==((x246&x247)*x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	volatile int64_t x251 = 4LL;
	int8_t x252 = -27;
	volatile int32_t t57 = 34569939;

	t57 = (x249==((x250&x251)*x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	volatile uint32_t x254 = 180489U;
	int8_t x256 = -9;
	static volatile int32_t t58 = 1;

	t58 = (x253==((x254&x255)*x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x257 = 53892548LLU;
	uint16_t x258 = 19415U;
	uint16_t x259 = 466U;
	uint32_t x260 = UINT32_MAX;
	static volatile int32_t t59 = -3014613;

	t59 = (x257==((x258&x259)*x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = -1;
	volatile int32_t t60 = 438777;

	t60 = (x265==((x266&x267)*x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MIN;
	int64_t x271 = 396435419067745828LL;
	int8_t x272 = -4;
	volatile int32_t t61 = 0;

	t61 = (x269==((x270&x271)*x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x278 = -59671435;
	int64_t x279 = -1LL;

	t62 = (x277==((x278&x279)*x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x282 = 29482217LLU;
	static int8_t x283 = INT8_MIN;
	int8_t x284 = -32;
	int32_t t63 = -189302;

	t63 = (x281==((x282&x283)*x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x285 = 64U;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MAX;

	t64 = (x285==((x286&x287)*x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 64375U;
	int8_t x290 = -1;
	int16_t x291 = -696;
	volatile uint16_t x292 = 2U;

	t65 = (x289==((x290&x291)*x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 134761987172409LLU;
	uint16_t x294 = 66U;
	static uint64_t x295 = 249LLU;
	volatile uint32_t x296 = 47905299U;
	static int32_t t66 = 2717774;

	t66 = (x293==((x294&x295)*x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x306 = -1LL;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = -1;
	static int32_t t67 = 128;

	t67 = (x305==((x306&x307)*x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x310 = 1U;
	static volatile uint32_t x312 = UINT32_MAX;
	int32_t t68 = -49;

	t68 = (x309==((x310&x311)*x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = 322402LLU;
	volatile int64_t x314 = INT64_MAX;
	volatile uint64_t x315 = 46055207777LLU;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t69 = 3822701;

	t69 = (x313==((x314&x315)*x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x317 = INT64_MIN;
	volatile int8_t x318 = INT8_MAX;
	int16_t x319 = -1;
	volatile int32_t t70 = 724763;

	t70 = (x317==((x318&x319)*x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = -392;
	uint64_t x322 = UINT64_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t71 = 0;

	t71 = (x321==((x322&x323)*x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -1LL;
	int64_t x327 = -1LL;
	uint32_t x328 = 674U;
	int32_t t72 = 266847992;

	t72 = (x325==((x326&x327)*x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 0U;
	int64_t x331 = INT64_MAX;
	uint16_t x332 = 99U;
	volatile int32_t t73 = 22;

	t73 = (x329==((x330&x331)*x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x334 = -1;
	uint32_t x335 = 10767U;
	uint64_t x336 = 377046699478767313LLU;
	volatile int32_t t74 = -59;

	t74 = (x333==((x334&x335)*x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x343 = 11463;
	int16_t x344 = -37;
	static int32_t t75 = 5408988;

	t75 = (x341==((x342&x343)*x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	uint32_t x346 = 362980U;
	volatile uint64_t x347 = 115LLU;
	int32_t x348 = 251036919;
	volatile int32_t t76 = 1;

	t76 = (x345==((x346&x347)*x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = 116016901280561126LLU;
	static int64_t x350 = 131210078LL;
	uint64_t x351 = 28923051871LLU;
	uint16_t x352 = 15440U;
	volatile int32_t t77 = 45;

	t77 = (x349==((x350&x351)*x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = -5965;
	uint64_t x358 = 4272356991058LLU;
	int32_t x359 = INT32_MIN;
	static volatile int32_t t78 = 996;

	t78 = (x357==((x358&x359)*x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x363 = -1;
	volatile int32_t t79 = 886035092;

	t79 = (x361==((x362&x363)*x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x366 = 18U;
	static int8_t x367 = -1;
	volatile int32_t t80 = 11;

	t80 = (x365==((x366&x367)*x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x369 = 5LLU;
	volatile int8_t x370 = INT8_MAX;
	int32_t x371 = -225138015;
	int16_t x372 = INT16_MIN;
	int32_t t81 = -11694631;

	t81 = (x369==((x370&x371)*x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x377 = INT32_MIN;
	uint8_t x379 = 45U;

	t82 = (x377==((x378&x379)*x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = 5381LLU;
	volatile int16_t x382 = 10736;
	static int64_t x383 = INT64_MIN;
	static int32_t t83 = 76;

	t83 = (x381==((x382&x383)*x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	volatile uint32_t x386 = 555388696U;
	volatile int32_t t84 = 8;

	t84 = (x385==((x386&x387)*x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = -1;
	static uint16_t x400 = 440U;
	volatile int32_t t85 = 0;

	t85 = (x397==((x398&x399)*x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = 1190940;
	int8_t x402 = 8;
	volatile int8_t x403 = 0;
	int32_t t86 = 0;

	t86 = (x401==((x402&x403)*x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x405 = UINT32_MAX;
	uint32_t x406 = UINT32_MAX;
	volatile uint16_t x407 = 1U;
	uint32_t x408 = 5041050U;
	volatile int32_t t87 = 0;

	t87 = (x405==((x406&x407)*x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x410 = 227367826;
	static uint32_t x411 = 1122507U;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t88 = 743764887;

	t88 = (x409==((x410&x411)*x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x414 = 2064877U;
	int16_t x415 = -1;
	volatile int32_t t89 = -20296;

	t89 = (x413==((x414&x415)*x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MAX;
	int16_t x419 = 0;
	volatile int32_t t90 = -1049;

	t90 = (x417==((x418&x419)*x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = INT32_MIN;
	volatile int64_t x422 = INT64_MAX;
	static uint16_t x423 = UINT16_MAX;
	int8_t x424 = -1;
	volatile int32_t t91 = 143956;

	t91 = (x421==((x422&x423)*x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x426 = 8U;
	static int16_t x427 = -1;
	static int16_t x428 = -1;
	int32_t t92 = -1;

	t92 = (x425==((x426&x427)*x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x429 = 2U;
	uint16_t x430 = 11094U;
	int64_t x431 = INT64_MAX;
	volatile int32_t t93 = -1378;

	t93 = (x429==((x430&x431)*x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x438 = -1;
	static uint32_t x439 = 2U;
	static uint64_t x440 = UINT64_MAX;
	static int32_t t94 = -3;

	t94 = (x437==((x438&x439)*x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = UINT16_MAX;
	volatile int16_t x446 = INT16_MAX;
	volatile uint8_t x448 = UINT8_MAX;

	t95 = (x445==((x446&x447)*x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = -1;
	uint64_t x451 = 17695LLU;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t96 = 1;

	t96 = (x449==((x450&x451)*x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x454 = 322048379LL;
	int32_t x456 = -1;
	static int32_t t97 = -8;

	t97 = (x453==((x454&x455)*x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x457 = 124LLU;
	volatile uint32_t x459 = UINT32_MAX;
	uint32_t x460 = 55U;
	volatile int32_t t98 = 2977;

	t98 = (x457==((x458&x459)*x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x465 = INT16_MIN;
	uint16_t x466 = 10U;
	uint32_t x467 = 22435047U;
	static int64_t x468 = 58521211LL;
	static volatile int32_t t99 = 3550;

	t99 = (x465==((x466&x467)*x468));

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

